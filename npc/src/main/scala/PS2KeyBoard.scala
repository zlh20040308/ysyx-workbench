import chisel3._
import chisel3.util._

object PS2KeyBoard {
  val IDLE     = 0.U(2.W)
  val RELEASED = 1.U(2.W)
  val PRESSED  = 2.U(2.W)
}

import PS2KeyBoard._

class PS2KeyBoardIO extends Bundle {
  val ps2_clk       = Input(Bool())
  val ps2_data      = Input(Bool())
  val pressed       = Output(Bool())
  val key_code      = Output(UInt(8.W))
  val pressed_times = Output(UInt(8.W))
}

class PS2KeyBoard extends Module {
  val io = IO(new PS2KeyBoardIO)
  
  val buffer              = RegInit(0.U(10.W))
  val count               = RegInit(0.U(4.W))
  val ps2_clk_syn         = RegInit(0.U(3.W))
  val state               = RegInit(IDLE)
  val inner_pressed_times = RegInit(0.U(8.W))
  val pressed             = RegInit(false.B)
  val key_code            = RegInit(0.U(8.W))
  val sampling            = ps2_clk_syn(2) & ~ps2_clk_syn(1)

  // Assigning internal registers to IO outputs
  io.pressed_times := inner_pressed_times
  io.pressed       := pressed
  io.key_code      := key_code

  // Shift register for synchronizing ps2_clk
  ps2_clk_syn := Cat(ps2_clk_syn(1, 0), io.ps2_clk)

  when(sampling) {
    when(count === 10.U) {
      when((buffer(0) === false.B) && io.ps2_data && buffer(9, 1).xorR) { // 奇偶校验
        switch(state) {
          is(IDLE) {
            state               := PRESSED
            inner_pressed_times := inner_pressed_times + 1.U
            pressed             := true.B
            key_code            := buffer(8, 1)
          }
          is(PRESSED) {
            when(buffer(8, 1) === "hF0".U) {
              state   := RELEASED
              pressed := false.B
            }
          }
          is(RELEASED) {
            state := IDLE
          }
        }
      }
      count := 0.U // for next
    }.otherwise {
      buffer := Cat(io.ps2_data, buffer(9, 1))
      count  := count + 1.U
    }
  }
}
