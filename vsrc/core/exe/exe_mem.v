`include "defines.v"

module exe_mem(
    input wire rst_i,
    input wire clk_i,
    
    input wire[5:0] stall_i,

    //from exe
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire reg_we_i,
    input wire[`RDATA_WIDTH-1:0] reg_wdata_i,
    
    input reg[`ADDR_WIDTH-1:0] mem_addr_i,
    input reg[`DATA_WIDTH-1:0] mem_data_i,
    input reg mem_we_i,
    input reg[3:0] mem_op_i,

    //to mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,

    output reg[`ADDR_WIDTH-1:0] mem_addr_o,
    output reg[`DATA_WIDTH-1:0] mem_data_o,
    output reg mem_we_o,
    output reg[3:0] mem_op_o,

    //to interrupt ctrl
    output reg[`ADDR_WIDTH-1:0]         inst_addr_o,
    input wire[`ADDR_WIDTH-1:0]         inst_addr_i,
    input wire flush_int_i, //for int

    //CSR
    input wire                             csr_we_i,
    input wire[`ADDR_WIDTH-1:0]            csr_waddr_i,
    input wire[`DATA_WIDTH-1:0]           csr_wdata_i,

    input wire[`DATA_WIDTH-1:0] exception_i,
    output reg[`DATA_WIDTH-1:0] exception_o,


    output reg                            csr_we_o,
    output reg[`ADDR_WIDTH-1:0]           csr_waddr_o,
    output reg[`DATA_WIDTH-1:0]           csr_wdata_o


);

    //for interrupt ctrl
    always @(posedge clk_i) begin
        if (rst_i == 1'b1) begin
            inst_addr_o <= `ZERO;
            exception_o <= `ZERO;
        end else if (flush_int_i) begin
            inst_addr_o <= `ZERO;
            exception_o <= `ZERO;
        end else begin
            inst_addr_o <= inst_addr_i;
            exception_o <= exception_i;
        end
    end

    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            reg_waddr_o <= `ZERO_REG;
            reg_we_o <= `WRITE_ENABLE;
            reg_wdata_o <= `ZERO;
            mem_addr_o <= `ZERO;
            mem_data_o <= `ZERO;
            mem_we_o <= `WRITE_DISABLE;
            mem_op_o <= `MEM_NOP;
            csr_we_o <= `ZERO;
            csr_waddr_o <= `ZERO;
            csr_wdata_o <= `ZERO;
        end else begin
            reg_waddr_o <= reg_waddr_i;
            reg_we_o <= reg_we_i;
            reg_wdata_o <= reg_wdata_i;
            mem_addr_o <= mem_addr_i;
            mem_data_o <= mem_data_i;
            mem_we_o <= mem_we_i;
            mem_op_o <= mem_op_i;
            csr_we_o <= csr_we_i;
            csr_waddr_o <= csr_waddr_i;
            csr_wdata_o <= csr_wdata_i;
        end //if
    end //always
endmodule
