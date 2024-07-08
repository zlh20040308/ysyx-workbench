module ysyx_23060337_top(
    input clk,
    input rst,
    input [31:0] inst,
    output [31:0] pc,
);

ysyx_23060337_IFU ifu (
    .clk(clk),
    rst(rst),
    pc(),
    pc(),
)



endmodule