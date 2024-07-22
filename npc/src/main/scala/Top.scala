import chisel3._
import chisel3.util._

class TopIO extends Bundle {
  val ps2_clk  = Input(Bool())
  val ps2_data = Input(Bool())
  val seg0     = Output(UInt(7.W))
  val seg1     = Output(UInt(7.W))
  val seg2     = Output(UInt(7.W))
  val seg3     = Output(UInt(7.W))
  val seg4     = Output(UInt(7.W))
  val seg5     = Output(UInt(7.W))
}
trait Top extends Module {
  val io: TopIO
}

class top extends Top {
  val io = IO(new TopIO)

  val pressed       = RegInit(false.B)
  val key_code      = RegInit(0.U(8.W))
  val ascii_code    = RegInit(0.U(8.W))
  val pressed_times = RegInit(0.U(8.W))
  val buf_seg0      = RegInit(0.U(7.W))
  val buf_seg1      = RegInit(0.U(7.W))
  val buf_seg2      = RegInit(0.U(7.W))
  val buf_seg3      = RegInit(0.U(7.W))

  val ps2_keyboard = Module(new PS2KeyBoard)
  ps2_keyboard.io.ps2_clk  := io.ps2_clk
  ps2_keyboard.io.ps2_data := io.ps2_data
  pressed                  := ps2_keyboard.io.pressed
  key_code                 := ps2_keyboard.io.key_code
  pressed_times            := ps2_keyboard.io.pressed_times

  val scan_code_to_ascii = Module(new ScanCodeToAscii)
  scan_code_to_ascii.io.scan_code := key_code
  ascii_code                      := scan_code_to_ascii.io.ascii_code

  val hex2seg_key_code_h = Module(new Hex2SegArea)
  hex2seg_key_code_h.io.hex := key_code(7, 4)
  buf_seg1                  := hex2seg_key_code_h.io.h

  val hex2seg_key_code_l = Module(new Hex2SegArea)
  hex2seg_key_code_l.io.hex := key_code(3, 0)
  buf_seg0                  := hex2seg_key_code_l.io.h

  val hex2seg_ascii_h = Module(new Hex2SegArea)
  hex2seg_ascii_h.io.hex := ascii_code(7, 4)
  buf_seg3               := hex2seg_ascii_h.io.h

  val hex2seg_ascii_l = Module(new Hex2SegArea)
  hex2seg_ascii_l.io.hex := ascii_code(3, 0)
  buf_seg2               := hex2seg_ascii_l.io.h

  when(!pressed) {
    io.seg0 := "b1111111".U
    io.seg1 := "b1111111".U
    io.seg2 := "b1111111".U
    io.seg3 := "b1111111".U
  }.otherwise {
    io.seg0 := buf_seg0
    io.seg1 := buf_seg1
    io.seg2 := buf_seg2
    io.seg3 := buf_seg3
  }

  val hex2seg_pressed_times_h = Module(new Hex2SegArea)
  hex2seg_pressed_times_h.io.hex := pressed_times(7, 4)
  io.seg5                        := hex2seg_pressed_times_h.io.h

  val hex2seg_pressed_times_l = Module(new Hex2SegArea)
  hex2seg_pressed_times_l.io.hex := pressed_times(3, 0)
  io.seg4                        := hex2seg_pressed_times_l.io.h
}
