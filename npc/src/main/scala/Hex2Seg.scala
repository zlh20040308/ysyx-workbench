import chisel3._
import chisel3.util._

object Hex2Seg {
  val NUM_0 = "b1111110".U(7.W)
  val NUM_1 = "b0110000".U(7.W)
  val NUM_2 = "b1101101".U(7.W)
  val NUM_3 = "b1111001".U(7.W)
  val NUM_4 = "b0110011".U(7.W)
  val NUM_5 = "b1011011".U(7.W)
  val NUM_6 = "b1011111".U(7.W)
  val NUM_7 = "b1110000".U(7.W)
  val NUM_8 = "b1111111".U(7.W)
  val NUM_9 = "b1111011".U(7.W)
  val NUM_a = "b1110111".U(7.W)
  val NUM_b = "b0011111".U(7.W)
  val NUM_c = "b1001110".U(7.W)
  val NUM_d = "b0111101".U(7.W)
  val NUM_e = "b1001111".U(7.W)
  val NUM_f = "b1000111".U(7.W)
}

import Hex2Seg._

class Hex2SegIO extends Bundle {
  val hex = Input(UInt(4.W))
  val h   = Output(UInt(7.W))
}

trait Hex2Seg extends Module {
  val io: Hex2SegIO
}

class Hex2SegArea extends Hex2Seg {
  val io = IO(new Hex2SegIO)
  io.h := MuxLookup(io.hex, ~NUM_0)(
    Seq(
      "b0000".U(4.W) -> ~NUM_0,
      "b0001".U(4.W) -> ~NUM_1,
      "b0010".U(4.W) -> ~NUM_2,
      "b0011".U(4.W) -> ~NUM_3,
      "b0100".U(4.W) -> ~NUM_4,
      "b0101".U(4.W) -> ~NUM_5,
      "b0110".U(4.W) -> ~NUM_6,
      "b0111".U(4.W) -> ~NUM_7,
      "b1000".U(4.W) -> ~NUM_8,
      "b1001".U(4.W) -> ~NUM_9,
      "b1010".U(4.W) -> ~NUM_a,
      "b1011".U(4.W) -> ~NUM_b,
      "b1100".U(4.W) -> ~NUM_c,
      "b1101".U(4.W) -> ~NUM_d,
      "b1110".U(4.W) -> ~NUM_e,
      "b1111".U(4.W) -> ~NUM_f
    )
  )
}
