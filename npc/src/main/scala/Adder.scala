import chisel3._
import chisel3.util._

class AdderIO(width: Int) extends Bundle {
  val a        = Input(UInt(width.W))
  val b        = Input(UInt(width.W))
  val ci       = Input(Bool())
  val s        = Output(UInt(width.W))
  val overflow = Output(Bool())
  val co       = Output(Bool())
}

trait Adder extends Module {
  def width: Int
  val io: AdderIO
}

class AdderArea(val width: Int = 4) extends Adder {
  val io       = IO(new AdderIO(width))
  val t_no_Cin = Wire(UInt(width.W))
  t_no_Cin := Fill(width, io.ci) ^ io.b
  val sum = io.a +& t_no_Cin +& io.ci

  io.s        := sum(width - 1, 0)
  io.co       := sum(width)
  io.overflow := (io.a(width - 1) === t_no_Cin(width - 1)) && (io.s(width - 1) =/= io.a(width - 1))
}
