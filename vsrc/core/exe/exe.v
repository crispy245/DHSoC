`include "defines.v"

module exe(
    input wire clk_i,
    input wire rst_i,

    //from id_exe
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`DATA_WIDTH-1:0] inst_i,
    input wire[`ADDR_WIDTH-1:0] inst_addr_i,
    //CSRs
    input wire                            csr_we_i,
    input wire[`CSR_ADDR_WIDTH-1:0]       csr_addr_i,
    
    //to exe_mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    //CSRs
    output reg[`DATA_WIDTH-1:0]               csr_wdata_o,
    output reg[`CSR_ADDR_WIDTH-1:0]           csr_waddr_o,
    output reg                                csr_we_o,
    
    output reg[`ADDR_WIDTH-1:0] mem_addr_o,
    output reg[`DATA_WIDTH-1:0] mem_data_o,
    output reg mem_we_o,
    output reg[3:0] mem_op_o,
    //to pipe_ctrl
    output reg stallreq_o,
    output reg[`ADDR_WIDTH-1:0] jump_addr_o,
    output reg jump_enable_o,
    
    //to csr_file
    input wire[`DATA_WIDTH-1:0]               csr_rdata_i,
    output reg[`CSR_ADDR_WIDTH-1:0]           csr_raddr_o,

    //from mem
    input wire                          mem_csr_we_i,
    input wire[`CSR_ADDR_WIDTH-1:0]     mem_csr_waddr_i,
    input wire[`DATA_WIDTH-1:0]         mem_csr_wdata_i,

     //for int div and mult
    output reg[`ADDR_WIDTH-1:0]         inst_addr_o,
    input wire                          flush_int_i,

    //for exception
    input wire[`DATA_WIDTH-1:0]         exception_i,
    output reg[`DATA_WIDTH-1:0]         exception_o

);

    assign inst_addr_o = inst_addr_i;
    assign exception_o = exception_i;

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
    wire [`RDATA_WIDTH-1:0] r_reg_wdata_o;
    wire r_reg_we_o;

    wire[`RDATA_WIDTH-1:0] l_s_reg_wdata_o;
    wire l_s_reg_we_o;

    wire[`RDATA_WIDTH-1:0] m_reg_wdata_o;
    wire m_reg_we_o;

    wire stall_o_m;

    wire isType_r;
    assign isType_r = (opcode == `INST_TYPE_R_M) && ((funct7 == 7'b0000000 || funct7 == 7'b0100000));

    wire[`ADDR_WIDTH-1:0] load_addr_offset;
    wire[`ADDR_WIDTH-1:0] store_addr_offset;
    assign store_addr_offset = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
    assign load_addr_offset = {{20{inst_i[31]}}, inst_i[31:20]};

    wire op1_eq_op2;
    assign op1_eq_op2 = (op1_i == op2_i);

    wire[`ADDR_WIDTH-1:0] pc;
    assign pc = inst_addr_i;

    exe_type_r exe_type_r0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .reg_wdata_o(r_reg_wdata_o),
        .reg_we_o(r_reg_we_o)
     );

    exe_type_s_l exe_type_s_l0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .reg_wdata_o(l_s_reg_wdata_o),
        .reg_we_o(l_s_reg_we_o),
        .mem_addr_o(mem_addr_o),
        .mem_data_o(mem_data_o),
        .mem_we_o(mem_we_o),
        .mem_op_o(mem_op_o)
    );

    exe_type_b_j exe_type_b_j0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .inst_addr_i(inst_addr_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .jump_addr_o(jump_addr_o),
        .jump_enable_o(jump_enable_o)
    );

    exe_type_m exe_type_m0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .inst_i(inst_i),
        .flush_i(flush_int_i),
        .stall_o(stall_o_m),
        .reg_wdata_o(m_reg_wdata_o),
        .reg_we_o(m_reg_we_o)
    );

    //assign csr_addr_o = csr_addr_i; //read csr
    assign csr_waddr_o = csr_addr_i; //write csr
    wire[`RDATA_WIDTH-1:0] system_reg_wdata_o;
    wire[`RDATA_WIDTH-1:0] system_csr_wdata_o;
    exe_type_system exe_type_system0(
        .rst_i(rst_i),
        .inst_i(inst_i),  
        .op1_i(op1_i),
        .reg_wdata_o(system_reg_wdata_o),
        .csr_rdata_i(csr_rdata_i),
        .csr_wdata_o(system_csr_wdata_o)
     );

    reg[`DATA_WIDTH-1:0] csr_rdata;
    always @(*) begin
        if (csr_addr_i == mem_csr_waddr_i && mem_csr_we_i==`WRITE_ENABLE) begin
            csr_rdata = mem_csr_wdata_i;
        end else begin
            csr_rdata = csr_rdata_i;
        end
    end
    
    assign stallreq_o = stall_o_m;
    always @(*) begin
        if (rst_i == 1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
            mem_addr_o = `ZERO;
            mem_data_o = `ZERO;
            mem_we_o = `WRITE_DISABLE;
            mem_op_o = `MEM_NOP;
            jump_addr_o = `ZERO;
            jump_enable_o = 1'b0;
        end else begin
            reg_we_o = reg_we_i;
            //mem_we_o = `WRITE_DISABLE;
            //jump_enable_o = 1'b0;
            //stallreq_o = 1'b0;
            case (opcode)
                `INST_TYPE_I:begin
                    case(funct3)
                        `INST_ORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i | op2_i;
                        end
                        `INST_ANDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i & op2_i;
                        end
                        `INST_XORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i ^ op2_i;
                        end
                        `INST_ADDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i + op2_i;
                        end
                        `INST_SLTI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = $signed(op1_i) < $signed(op2_i) ? `ONE : `ZERO;
                        end
                        `INST_SLTIU: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i < $signed(op2_i) ? `ONE : `ZERO;
                        end
                        `INST_SLLI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i<<op2_i;
                        end
                        `INST_SRLAI: begin
                            reg_waddr_o = reg_waddr_i;
                            case (funct7)
                                `INST_SRLI: begin
                                    reg_wdata_o = op1_i>>op2_i;
                                end
                                `INST_SRAI: begin
                                    reg_wdata_o = $signed(op1_i)>>>op2_i;
                                end
                                default: begin
                                    reg_waddr_o = `ZERO_REG;
                                    reg_wdata_o = `ZERO;
                                    reg_we_o = `WRITE_DISABLE;
                                end
                            endcase
                        end
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                            reg_wdata_o = `ZERO;
                            reg_we_o = `WRITE_DISABLE;
                        end//default
                    endcase
                end
                `INST_TYPE_SYSTEM:begin //csr, ecall, ebreak, mret, wfi etc.
                    case (funct3)
                         `INST_CSRRW, `INST_CSRRWI, `INST_CSRRS, `INST_CSRRSI, `INST_CSRRC, `INST_CSRRCI:begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = system_reg_wdata_o;
                            reg_we_o = reg_we_i;
                            mem_we_o = `WRITE_DISABLE;
                            mem_addr_o = `ZERO;
                            mem_data_o = `ZERO;
                            mem_op_o = `NOP;
                            jump_addr_o =  `ZERO;
                            jump_enable_o = 1'b0;
                            csr_we_o = csr_we_i;
                            csr_wdata_o = system_csr_wdata_o;
                        end
                        default:begin
                        end
                    endcase
                end
                 `INST_TYPE_R_M:begin //Type_r or M
                    reg_waddr_o = reg_waddr_i;
                    mem_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    //mem_op_o = `MEM_NOP;
                    jump_addr_o =  `ZERO;
                    jump_enable_o = 1'b0;
                    reg_wdata_o = r_reg_wdata_o | m_reg_wdata_o;
                    reg_we_o = r_reg_we_o | m_reg_we_o;
		        end
                `INST_TYPE_LUI, `INST_TYPE_AUIPC:begin //type u
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = op1_i+op2_i;
                    reg_we_o = reg_we_i;
                end
                `INST_TYPE_S: begin
                    reg_waddr_o = `ZERO_REG;
                    reg_we_o = `WRITE_DISABLE;
                end
                `INST_TYPE_L:begin
                    reg_wdata_o = l_s_reg_wdata_o;
                    reg_waddr_o = reg_waddr_i;
                    reg_we_o = l_s_reg_we_o;
                end
                `INST_TYPE_B: begin
                    reg_wdata_o = `ZERO;
                    reg_waddr_o = `ZERO_REG;
                    reg_we_o = `WRITE_DISABLE;
                end
                `INST_TYPE_JAL: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = pc + 4;
                    jump_addr_o = pc + {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:25], inst_i[24:21], 1'b0};
                    jump_enable_o = 1'b1;
                end
                `INST_TYPE_JALR: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = pc + 4;
                    jump_addr_o = op1_i + {{20{inst_i[31]}}, inst_i[31:20]};
                    jump_enable_o = 1'b1;
                end
                default:begin
                    reg_waddr_o = `ZERO_REG;
                    reg_wdata_o = `ZERO;
                    reg_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_we_o = `WRITE_DISABLE;
                    mem_op_o = `MEM_NOP;
                    jump_addr_o = `ZERO;
                    jump_enable_o = 1'b0;
                end
            endcase
        end //if
    end //always

endmodule
