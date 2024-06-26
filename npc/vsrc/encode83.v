module encode83(x,en_in,y,input_valid);
  input  [7:0] x;
  input  en_in;
  output reg input_valid;
  output reg [2:0]y;
  integer i;
  always @(x or en_in) begin 
    input_valid = 0;
    y = 0;
    if (en_in) begin
      if (x != 8'd0) begin
        input_valid = 1;
      end
      else input_valid = 0;
      y = 0;
      for( i = 0; i <= 7; i = i+1)
          if(x[i] == 1)  y = i[2:0];
    end
    else  y = 0;
  end
endmodule