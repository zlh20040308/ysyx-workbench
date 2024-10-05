// 声明 DPI-C 函数
import "DPI-C" function void ram_write_helper(
  input int addr,
  input int wdata,
  input int wmask,
  input bit wen
);

import "DPI-C" function int ram_read_helper(
  input int addr
);

module ram_2r1w (
    input         clk,

    input  [31:0] imem_addr,
    output [31:0] imem_inst,

    input  [31:0] dmem_addr,
    input  [31:0] dmem_wdata,
    input         dmem_wen,
    input  [3:0] dmem_wmask,
    output [31:0] dmem_rdata
);

// 读取指令内存
assign imem_inst = ram_read_helper(imem_addr);

// 读取数据内存
assign dmem_rdata = ram_read_helper(dmem_addr);

// 写入数据内存
always @(posedge clk)
begin
    // 将 dmem_wmask 展开为完整的 32 位掩码
    int full_mask = {{8{dmem_wmask[3]}}, {8{dmem_wmask[2]}}, {8{dmem_wmask[1]}}, {8{dmem_wmask[0]}}};
    ram_write_helper(dmem_addr, dmem_wdata, full_mask, dmem_wen);
end

endmodule