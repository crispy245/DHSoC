`include "defines.v"



module aligner(
    input wire clk_i,
    input wire rst_i,
    input wire[`ADDR_WIDTH-1:0] inst_addr_i,
    output wire[`ADDR_WIDTH-1:0] inst_addr_o,
    input wire[`DATA_WIDTH-1:0] inst_i,
    output reg[`DATA_WIDTH-1:0] inst_o,
    output wire[5:0] stall_o
);
    reg [15:0] lower_half;
    reg [31:0] concat_word;

    wire missaligned;
    assign missaligned = inst_addr_i[1];


    always @(posedge clk_i ) begin
        lower_half <= inst_i[31:16];
    end

    assign concat_word = {inst_i[15:0],lower_half};
    assign inst_addr_o = haltAddPC4 ? inst_addr_i+4 : inst_addr_i;
    assign stall_o[0]  = haltAddPC4 ? 1'b1 : 1'b0;

    localparam 
    NMISSA = 2'b00,
    MISSA1 = 2'b01,
    MISSA2 = 2'b10,
    UNUSED = 2'b11;

    reg [1:0] current_state;
    reg [1:0] next_state;


    reg haltAddPC4;
    reg concinstr;

    
    always@(posedge clk_i or negedge rst_i)
     if (rst_i) current_state <= NMISSA;
     else        current_state <= next_state;

    always @(posedge clk_i or negedge rst_i) begin
        case(current_state)

        NMISSA : if(missaligned)   
                 next_state <= MISSA1;
                 else next_state <= NMISSA;
        MISSA1 : if(missaligned) next_state <= MISSA2;
                 else next_state <= NMISSA;
        MISSA2 : if(missaligned) next_state <= MISSA1;
                 else next_state <= NMISSA;
        endcase
    end
    
    assign haltAddPC4 = MISSA1 ? 1'b1 : 1'b0;
    assign concinstr  = MISSA1 ? 1'b1 : 1'b0;




endmodule