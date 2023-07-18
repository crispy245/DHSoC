`include "defines.v"

module exe_type_r(
    input wire rst_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg reg_we_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
    
    
    wire isType_r;
    assign isType_r = (opcode == `INST_TYPE_R_M) && ((funct7 == 7'b0000000 || funct7 == 7'b0100000));
    
    always @(*) begin
        if (rst_i == 1 || isType_r == 0) begin
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
        end else begin
                case(funct3)
                    `INST_OR: begin
                        reg_wdata_o = op1_i | op2_i;
                        reg_we_o = `WRITE_ENABLE;
                    end
                    `INST_ADD_SUB: begin
                        case(funct7)
                            `INST_ADD: begin
                                reg_wdata_o = op1_i + op2_i;
                                reg_we_o = `WRITE_ENABLE;
                            end
                            `INST_SUB: begin
                                reg_wdata_o = op1_i - op2_i;
                                reg_we_o = `WRITE_ENABLE;
                            end
                            default: begin
                                reg_wdata_o = `ZERO;
                                reg_we_o = `WRITE_DISABLE;
                            end
                        endcase
                    end  
                    `INST_SLL: begin
                        reg_wdata_o = op1_i << (op2_i & 5'b11111);
                        reg_we_o = `WRITE_ENABLE;
                    end 
                    `INST_SLT: begin
                        reg_wdata_o = $signed(op1_i) < $signed(op2_i) ? `ONE : `ZERO;
                        reg_we_o = `WRITE_ENABLE;
                    end    
                    `INST_SLTU: begin
                        reg_wdata_o = op1_i < op2_i ? `ONE : `ZERO;
                        reg_we_o = `WRITE_ENABLE;
                    end    
                    `INST_XOR: begin
                        reg_wdata_o = op1_i ^ op2_i;
                        reg_we_o = `WRITE_ENABLE;
                    end   
                    `INST_SRL_SRA: begin
                        case(funct7)
                            `INST_SRA: begin
                                reg_wdata_o = $signed(op1_i)>>>(op2_i & 5'b11111);
                                reg_we_o = `WRITE_ENABLE;
                            end
                            `INST_SRL: begin
                                reg_wdata_o = op1_i >> (op2_i & 5'b11111);
                                reg_we_o = `WRITE_ENABLE;
                            end
                            default: begin
                                reg_wdata_o = `ZERO;
                                reg_we_o = `WRITE_DISABLE;
                            end
                        endcase
                    end      
                    `INST_AND: begin
                        reg_wdata_o = op1_i & op2_i;
                        reg_we_o = `WRITE_ENABLE;
                    end   
                    default: begin
                        reg_wdata_o = `ZERO;
                        reg_we_o = `WRITE_DISABLE;
                    end//default
                endcase
        end //if
    end //always
endmodule