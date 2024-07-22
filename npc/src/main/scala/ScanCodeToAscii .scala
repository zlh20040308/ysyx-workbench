import chisel3._
import chisel3.util._

class ScanCodeToAscii extends Module {
  val io = IO(new Bundle {
    val scan_code = Input(UInt(8.W))  // 输入的键盘扫描码
    val ascii_code = Output(UInt(8.W))  // 输出的ASCII码
  })

  // 定义查找表
  val ascii_lut = Mem(256, UInt(8.W))

  // 初始化查找表
  loadAsciiLut(ascii_lut)

  // 在组合逻辑中进行查找
  io.ascii_code := Mux(ascii_lut(io.scan_code) =/= 0.U, ascii_lut(io.scan_code), 0.U)

  // 初始化查找表的方法
  def loadAsciiLut(lut: Mem[UInt]): Unit = {
    // 字母键和数字键：
    // a-z 对应的ASCII码是 0x61 到 0x7A
    lut.write(0x1c.U, 0x61.U)
    lut.write(0x32.U, 0x62.U)
    lut.write(0x21.U, 0x63.U)
    lut.write(0x23.U, 0x64.U)
    lut.write(0x24.U, 0x65.U)
    lut.write(0x2b.U, 0x66.U)
    lut.write(0x34.U, 0x67.U)
    lut.write(0x33.U, 0x68.U)
    lut.write(0x43.U, 0x69.U)
    lut.write(0x3b.U, 0x6A.U)
    lut.write(0x42.U, 0x6B.U)
    lut.write(0x4b.U, 0x6C.U)
    lut.write(0x3a.U, 0x6D.U)
    lut.write(0x31.U, 0x6E.U)
    lut.write(0x44.U, 0x6F.U)
    lut.write(0x4d.U, 0x70.U)
    lut.write(0x15.U, 0x71.U)
    lut.write(0x2d.U, 0x72.U)
    lut.write(0x1b.U, 0x73.U)
    lut.write(0x2c.U, 0x74.U)
    lut.write(0x3c.U, 0x75.U)
    lut.write(0x2a.U, 0x76.U)
    lut.write(0x1d.U, 0x77.U)
    lut.write(0x22.U, 0x78.U)
    lut.write(0x35.U, 0x79.U)
    lut.write(0x1a.U, 0x7A.U)
    
    // 0-9 对应的ASCII码是 0x30 到 0x39
    lut.write(0x45.U, 0x30.U)
    lut.write(0x16.U, 0x31.U)
    lut.write(0x1e.U, 0x32.U)
    lut.write(0x26.U, 0x33.U)
    lut.write(0x25.U, 0x34.U)
    lut.write(0x2e.U, 0x35.U)
    lut.write(0x36.U, 0x36.U)
    lut.write(0x3d.U, 0x37.U)
    lut.write(0x3e.U, 0x38.U)
    lut.write(0x46.U, 0x39.U)

    // 符号键：
    // 空格键 对应的ASCII码是 0x20
    lut.write(0x29.U, 0x20.U)
    // ~ 的ASCII码是 0x7E
    lut.write(0x0E.U, 0x7E.U)
    // - 的ASCII码是 0x2D
    lut.write(0x4E.U, 0x2D.U)
    // = 的ASCII码是 0x3D
    lut.write(0x55.U, 0x3D.U)
    // [ 的ASCII码是 0x5B
    lut.write(0x54.U, 0x5B.U)
    // ] 的ASCII码是 0x5D
    lut.write(0x5b.U, 0x5D.U)
    // \ 的ASCII码是 0x5C
    lut.write(0x5d.U, 0x5C.U)
    // ; 的ASCII码是 0x3B
    lut.write(0x4c.U, 0x3B.U)
    // ' 的ASCII码是 0x27
    lut.write(0x52.U, 0x27.U)
    // , 的ASCII码是 0x2C
    lut.write(0x41.U, 0x2C.U)
    // . 的ASCII码是 0x2E
    lut.write(0x49.U, 0x2E.U)
    // / 的ASCII码是 0x2F
    lut.write(0x4a.U, 0x2F.U)

    // Enter 对应的ASCII码是 0x0D
    lut.write(0x5a.U, 0x0D.U)
    // Backspace 对应的ASCII码是 0x08
    lut.write(0x66.U, 0x08.U)
    // Tab 对应的ASCII码是 0x09
    lut.write(0x0d.U, 0x09.U)
    // Esc 对应的ASCII码是 0x1B
    lut.write(0x76.U, 0x1B.U)
  }
}
