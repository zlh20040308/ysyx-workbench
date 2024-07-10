module ysyx_23060337_IFU(
    input clk,
    input [31:0] cur_pc,
    output [31:0] inst
);

// DPI-C 函数声明
import "DPI-C" function int pmem_read(input int raddr);

// 使用组合逻辑读取指令
assign inst = (clk) ? (pmem_read(cur_pc)) : 32'h80000000;

endmodule
