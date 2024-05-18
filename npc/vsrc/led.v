module led(
  input clk,
  input rst,
  input [4:0] btn,
  input [15:0] sw,
  output [15:0] ledr
);
  assign ledr = sw;

endmodule
