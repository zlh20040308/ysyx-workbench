module ysyx_23060337_top(
    input clk,
    input rst,
    output [6:0] opcode1
);

reg [31:0] cur_pc;
wire [31:0] next_pc;
wire [31:0] inst;
wire [4:0] rd;
wire [4:0] rs1;
wire [4:0] rs2;
wire [31:0] immI;
wire [31:0] immU;
wire [31:0] immS;
wire [31:0] immJ;
wire [31:0] immB;
wire [2:0] funct3;
wire [6:0] funct7;
wire [6:0] opcode;

assign next_pc = cur_pc + 4;
assign opcode1 = opcode;


ysyx_23060337_Reg #(32, 32'h80000000) PC (clk, rst, next_pc, cur_pc, 1'b1);

ysyx_23060337_IFU IFU (
    .clk(clk),
    .cur_pc(cur_pc),
    .inst(inst)
);

ysyx_23060337_IDU IDU(
    .inst(inst),
    .rd(rd),
    .rs1(rs1),
    .rs2(rs2),
    .immI(immI),
    .immU(immU),
    .immS(immS),
    .immJ(immJ),
    .immB(immB),
    .funct3(funct3),
    .funct7(funct7),
    .opcode(opcode)
);

// ysyx_23060337_RegisterFile #(5, 32) RegisterFile (
//   .clk(clk),
//   .wdata,
//   .waddr,
//   .wen(1'b1),
// );


endmodule