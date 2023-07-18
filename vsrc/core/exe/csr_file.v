`include "defines.v"

module csr_file(
    input wire clk_i,
    input wire rst_i,
    
    //input from irq
    //input wire[1:0] irq_from_clint_i,
    //input wire      irq_from_external_i;

    //from exe read pipe_ctrl
    input  wire[`RADDR_WIDTH-1:0] raddr_i,
    output reg[`RDATA_WIDTH-1:0] rdata_o,

    //wb update csr
    input wire we_i,
    input wire[`ADDR_WIDTH-1:0] waddr_i,
    input wire[`RDATA_WIDTH-1:0] wdata_i,
    input wire instret_incr_i,

    //to pipe_ctrl

    //from pip_ctrl

    //interrupt signal from clint or plic
    input wire irq_timer_i,
    input wire irq_software_i,  
    input wire irq_external_i,  //from plic and not implemet now so always 0

    //to interrupt ctrl signal for interrupt
    output reg mstatus_ie_o,
    output reg mie_external_o,
    output reg mie_timer_o,
    output reg mie_software_o,
    
    output reg mip_external_o,
    output reg mip_timer_o,
    output reg mip_software_o,
    output reg[`DATA_WIDTH-1:0]  mtvec_o,
    output reg[`DATA_WIDTH-1:0]  epc_o,

    //from ctrl signal 
    input wire interrupt_type_i,
    input wire cause_we_i,
    input wire[3:0] cause_i,
    input wire epc_we_i,
    input wire[`DATA_WIDTH-1:0] epc_i,
    input wire  mstatus_ie_clear_i,
    input wire mstatus_ie_set_i



);

    // mvendorid
    localparam CSR_MVENDORID_VALUE  = 32'b0;
    // Architecture ID
    localparam CSR_MARCHID_VALUE = {1'b0, 31'd22};
    // mimpid
    localparam  CSR_MIMPID_VALUE = 32'b0;
    // hardid
    localparam CSR_MHARTID = 32'b0;

    wire [1:0]  mxl; // machine XLEN
    wire [25:0] mextensions; // ISA extensions
    wire [`RDATA_WIDTH-1:0] misa; // machine ISA register
    assign mxl = 2'b01;
    assign mextensions = 26'b00000000000001000100000000;  // i and m
    assign misa = {mxl, 4'b0, mextensions};

    reg[`DATA_WIDTH2-1:0] mcycle;   
    reg[`DATA_WIDTH2-1:0] minstret;

    always @ (posedge clk_i) begin
        if (rst_i == 1'b1) begin
            mcycle <= {`ZERO, `ZERO};
            minstret <= {`ZERO, `ZERO};
        end else begin
            mcycle <= mcycle + 64'd1;
            if(instret_incr_i) 
                minstret <= minstret + 64'd1;
        end
    end


    

     reg[`RDATA_WIDTH-1:0]       mstatus;
    //for machine mode
    reg mstatus_mpie; 
    reg mstatus_mie;
    reg mstatus_mpp;
    assign mstatus_mpp = 2'b11; //machine mode
    assign mstatus_ie_o = mstatus_mie;
    assign mstatus = {19'b0,mstatus_mpp,3'b0,mstatus_mpie,3'b0,mstatus_mie, 3'b0};
    wire w_mstatus;
    assign w_mstatus = ((waddr_i == `CSR_MSTATUS_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if(rst_i == `RESET_ENABLE) begin
            mstatus_mie <= 1'b0;
            mstatus_mpie <= 1'b1;
        end else if(mstatus) begin
            mstatus_mie <= wdata_i[3];
            mstatus_mpie <= wdata_i[7];
        end else if(mstatus_ie_clear_i) begin
            mstatus_mpie <= mstatus_mie; 
            mstatus_mie <= 1'b0;    
        end else if(mstatus_ie_set_i) begin
            mstatus_mie <= mstatus_mpie; 
            mstatus_mpie <= 1'b1;
        end else begin
            mstatus_mie <= mstatus;
            mstatus_mpie <= mstatus_mpie;
        end
    end

    reg[`DATA_WIDTH-1:0]  mie;
    reg           mie_external; 
    reg           mie_timer;    
    reg           mie_software;       

    assign mie_external_o = mie_external;
    assign mie_timer_o = mie_timer;
    assign mie_software_o = mie_software;
    assign mie = {20'b0, mie_external, 3'b0, mie_timer, 3'b0, mie_software, 3'b0};

    wire w_mie;
    assign w_mie = ((waddr_i == `CSR_MIE_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if(rst_i == `RESET_ENABLE) begin
            mie_external <= 1'b0;
            mie_timer <= 1'b0;
            mie_software <= 1'b0;
        end else if(w_mie) begin
            mie_external <= wdata_i[11];
            mie_timer <= wdata_i[7];
            mie_software <= wdata_i[3];
        end else begin
            mie_external <= mie_external;
            mie_timer <= mie_timer;
            mie_software <= mie_software;
        end
    end

    reg[`RDATA_WIDTH-1:0]     mtvec;
    assign mtvec_o = mtvec;
    wire w_mtvec;
    assign w_mtvec = ((waddr_i == `CSR_MTVEC_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if (rst_i == 1'b1) 
            mtvec <= `ZERO;
        else if (w_mtvec)
            mtvec <= wdata_i; 
    end

    reg[`DATA_WIDTH-1:0]       mscratch;
    wire w_mscratch;
    assign w_mscratch = ((waddr_i == `CSR_MSCRATCH_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if (rst_i == 1'b1) 
            mscratch <= `ZERO;
        else if (w_mscratch)
            mscratch <= wdata_i; 
    end

    reg[`DATA_WIDTH-1:0]       mepc;
    assign epc_o = mepc;
    wire w_mepc;
    assign w_mepc = ((waddr_i == `CSR_MEPC_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if (rst_i == `RESET_ENABLE) 
            mepc <= `ZERO;
        else if(epc_we_i)
            mepc <= {epc_i[31:2], 2'b00}; 
        else if (w_mepc)
            mepc <= wdata_i; 
        else
            mepc <= mepc;   
    end

     reg[`DATA_WIDTH-1:0]       mcause;
    reg [3:0] cause; // interrupt cause
    reg [26:0] cause_rem; // remaining bits of mcause register
    reg interrupt_type; // interrupt or exception signal

    assign mcause = {interrupt_type, cause_rem, cause};

    wire w_mcause;
    assign w_mcause = ((waddr_i == `CSR_MCAUSE_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if(rst_i == `RESET_ENABLE) begin
            cause <= 4'b0000;
            cause_rem <= 27'b0;
            interrupt_type <= 1'b0;
        end else if(cause_we_i) begin
            cause <= cause_i;
            cause_rem <= 27'b0;
            interrupt_type <= interrupt_type_i;
        end else if(w_mcause) begin
            cause <= wdata_i[3:0];
            cause_rem <= wdata_i[30:4];
            interrupt_type <= wdata_i[31];
        end
    end

      reg[`DATA_WIDTH-1:0]       mip;
    reg mip_external; // external interrupt pending
    reg mip_timer; // timer interrupt pending
    reg mip_software; // software interrupt pending

    assign mip = {20'b0, mip_external, 3'b0, mip_timer, 3'b0, mip_software, 3'b0};

    assign mip_external_o = mip_external;
    assign mip_timer_o = mip_timer;
    assign mip_software_o = mip_software;

    always @(posedge clk_i) begin
        if (rst_i == `RESET_ENABLE) begin
            mip_external <= 1'b0;
            mip_timer <= 1'b0;
            mip_software <= 1'b0;
        end else begin
            mip_external <= irq_external_i;
            mip_timer <= irq_timer_i;
            mip_software <= irq_software_i;
        end
    end

    reg[`DATA_WIDTH-1:0]       mtval;
    wire w_mtval;
    assign w_mtval = ((waddr_i == `CSR_MTVAL_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if (rst_i == 1'b1) 
            mtval <= `ZERO;
        else if (w_mtval)
            mtval <= wdata_i; 
    end


    always @ (*) begin
        // bypass the write port to the read port
        if ((waddr_i == raddr_i) && (we_i == `WRITE_ENABLE)) begin
            rdata_o = wdata_i;
        end else begin
            case (raddr_i)
                `CSR_MVENDORID_ADDR: begin
                    rdata_o = CSR_MVENDORID_VALUE;
                end

                `CSR_MARCHID_ADDR: begin
                    rdata_o = CSR_MARCHID_VALUE;
                end

                `CSR_MIMPID_ADDR: begin
                    rdata_o = CSR_MIMPID_VALUE;
                end

                `CSR_MHARTID_ADDR: begin
                    rdata_o = CSR_MHARTID;
                end

                `CSR_MISA_ADDR: begin
                    rdata_o = misa;
                end

                `CSR_MCYCLE_ADDR, `CSR_CYCLE_ADDR: begin
                    rdata_o = mcycle[`DATA_WIDTH-1:0];
                end

                `CSR_MCYCLEH_ADDR, `CSR_CYCLEH_ADDR: begin
                    rdata_o = mcycle[63:32];
                end

               `CSR_MINSTRET_ADDR: begin
                    rdata_o = minstret[`DATA_WIDTH-1:0];
                end

                `CSR_MSTATUS_ADDR: begin
                    rdata_o = mstatus;
                end

                `CSR_MIE_ADDR: begin
                    rdata_o = mie;
                end

                `CSR_MTVEC_ADDR: begin
                    rdata_o = mtvec;
                end

                `CSR_MSCRATCH_ADDR: begin
                    rdata_o = mscratch;
                end

                `CSR_MEPC_ADDR: begin
                    rdata_o = mepc;
                end

                `CSR_MCAUSE_ADDR: begin
                    rdata_o = mcause;
                end

                `CSR_MIP_ADDR: begin
                    rdata_o = mip;
                end

                default: begin
                    rdata_o = `ZERO;
                end
            endcase // 
        end //end else begin
    end //always @ (*) begin

endmodule