import "DPI-C" function void ram_write_helper(
  input int addr,
  input int wdata,
  input int wmask
);

import "DPI-C" function int ram_read_helper(
  input int addr
);

module ram_2r1w (
    input         clk,
    input  [31:0] imem_addr,
    output [31:0] imem_inst,

    input         valid,
    input  [31:0] dmem_addr,
    input  [31:0] dmem_wdata,
    input         dmem_wen,
    input  [3:0]  dmem_wmask,
    output [31:0] dmem_rdata // 将dmem_rdata声明为reg类型
);

// 读取指令内存
assign  imem_inst = ram_read_helper(imem_addr);

reg [31:0] rdata;
assign dmem_rdata = rdata;
// assign dmem_rdata = rdata;
// assign dmem_rdata = valid ? ram_read_helper(dmem_addr) : 32'b0;

always @(*) begin
  if (valid) begin // 有读写请求时
    rdata = ram_read_helper(dmem_addr);
  end
  else begin
    rdata = 0;
  end
end



always @(posedge clk) begin
  int full_mask = 32'b0; // 预先给 full_mask 一个默认值，以防止 latch 推断
  if (valid) begin // 有读写请求时
    // rdata = ram_read_helper(dmem_addr);
    if (dmem_wen) begin // 有写请求时
      // 将 dmem_wmask 展开为完整的 32 位掩码
      full_mask = {{8{dmem_wmask[3]}}, {8{dmem_wmask[2]}}, {8{dmem_wmask[1]}}, {8{dmem_wmask[0]}}};
      ram_write_helper(dmem_addr, dmem_wdata, full_mask);
    end
  end
end


endmodule
