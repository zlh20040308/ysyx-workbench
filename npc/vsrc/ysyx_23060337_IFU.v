module ysyx_23060337_IFU(
    input clk,
    input [31:0] cur_pc,
    output reg [31:0] inst
);

import "DPI-C" function void pmem_read(input int raddr,output int rword);
always @(posedge clk) begin
    int rword; // 临时变量用于存储从 pmem_read 读取的数据
    pmem_read(cur_pc, rword);
    inst <= rword;
end

endmodule