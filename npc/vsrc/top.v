module top(
    input clk,
    input rst,
    input [4:0] btn,
    input [15:0] sw,
    input ps2_clk,
    input ps2_data,
    input uart_rx,
    output uart_tx,
    output [15:0] ledr,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B,
    output [7:0] seg0,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5,
    output [7:0] seg6,
    output [7:0] seg7
);

wire [2:0] my_y; 
wire input_valid;


encode83 my_encode83(
    .x(sw[7:0]),
    .en_in(sw[8]),
    .y(my_y),
    .input_valid(input_valid)
);

assign ledr[4] = input_valid;
assign ledr[2:0] = my_y ;

bcd7seg my_bcd7seg(
    .b({1'b0,my_y}),
    .h(seg0[7:1])
);

endmodule