module ysyx_23060337_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [ADDR_WIDTH-1:0] reg1_addr,
  input [ADDR_WIDTH-1:0] reg2_addr,
  
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,

  output [DATA_WIDTH-1:0] reg1_data,
  output [DATA_WIDTH-1:0] reg2_data

);

  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

  assign reg1_data = rf[reg1_addr];
  assign reg2_data = rf[reg2_addr];

  
endmodule