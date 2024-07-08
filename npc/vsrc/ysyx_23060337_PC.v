module ysyx_23060337_PC(
    input clk,
    input rst,
    output [31:0] pc,
);

  ysyx_23060337_Reg #(1, 1'b1) i0 (clk, rst, in[0], out[0], 1'b1);


endmodule