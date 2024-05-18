typedef enum logic [7:0] {
    NUM_0 = 8'b11111100,
    NUM_1 = 8'b01100000,
    NUM_2 = 8'b11011010,
    NUM_3 = 8'b11110010,
    NUM_4 = 8'b01100110,
    NUM_5 = 8'b10110110,
    NUM_6 = 8'b10111110,
    NUM_7 = 8'b11100000
} NUMS; 

module seg(
  input clk,
  input rst,
  output [7:0] o_seg0,
  output [7:0] o_seg1,
  output [7:0] o_seg2,
  output [7:0] o_seg3,
  output [7:0] o_seg4,
  output [7:0] o_seg5,
  output [7:0] o_seg6,
  output [7:0] o_seg7
);

wire [7:0] segs [7:0];
assign segs[0] = NUM_0;
assign segs[1] = NUM_1;
assign segs[2] = NUM_2;
assign segs[3] = NUM_3;
assign segs[4] = NUM_4;
assign segs[5] = NUM_5;
assign segs[6] = NUM_6;
assign segs[7] = NUM_7;

parameter CLK_NUM = 50;

reg [31:0] count;
reg [2:0] offset;

always @(posedge clk) begin
  if(rst) begin count <= 0; offset <= 0; end
  else begin
    if(count == CLK_NUM) begin offset <= offset + 1; end
    count <= (count == CLK_NUM) ? 0 : count + 1;
  end
end

assign o_seg0 = ~segs[offset + 3'd0];
assign o_seg1 = ~segs[offset + 3'd1];
assign o_seg2 = ~segs[offset + 3'd2];
assign o_seg3 = ~segs[offset + 3'd3];
assign o_seg4 = ~segs[offset + 3'd4];
assign o_seg5 = ~segs[offset + 3'd5];
assign o_seg6 = ~segs[offset + 3'd6];
assign o_seg7 = ~segs[offset + 3'd7];

endmodule
