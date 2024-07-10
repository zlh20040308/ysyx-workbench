module ysyx_23060337_IDU(
    input [31:0] inst,
    output [4:0] rd,
    output [4:0] rs1,
    output [4:0] rs2,
    output [31:0] immI,
    output [31:0] immU,
    output [31:0] immS,
    output [31:0] immJ,
    output [31:0] immB,
    output [2:0] funct3,
    output [6:0] funct7,
    output [6:0] opcode
);

assign rd = inst[11:7];
assign rs1 = inst[19:15];
assign rs2 = inst[24:20];

assign immI = {{20{inst[31]}}, inst[31:20]};
assign immU = {inst[31:12], {12{1'b0}}};
assign immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};
assign immJ = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
assign immB = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};

assign funct3 = inst[14:12];
assign funct7 = inst[31:25];

assign opcode = inst[6:0];

always @(*) begin
    $display("inst %x",inst);
end




endmodule