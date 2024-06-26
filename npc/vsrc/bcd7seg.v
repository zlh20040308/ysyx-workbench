typedef enum logic [6:0] {
    NUM_0 = 7'b1111110,
    NUM_1 = 7'b0110000,
    NUM_2 = 7'b1101101,
    NUM_3 = 7'b1111001,
    NUM_4 = 7'b0110011,
    NUM_5 = 7'b1011011,
    NUM_6 = 7'b1011111,
    NUM_7 = 7'b1110000,
    NUM_8 = 7'b1111111,
    NUM_9 = 7'b1111011
} NUMS; 

module bcd7seg(
  input  [3:0] b,
  output reg [6:0] h
);
// detailed implementation ...
    always @(*) begin
        case (b)
            4'd0 : h = NUM_0;
            4'd1 : h = NUM_1;
            4'd2 : h = NUM_2;
            4'd3 : h = NUM_3;
            4'd4 : h = NUM_4;
            4'd5 : h = NUM_5;
            4'd6 : h = NUM_6;
            4'd7 : h = NUM_7;
            4'd8 : h = NUM_8;
            4'd9 : h = NUM_9;
            default : h = NUM_0;

        endcase
        h = ~h;
    end

endmodule