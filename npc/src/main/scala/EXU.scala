import chisel3._
import chisel3.util._

class EXUIO(width: Int) extends Bundle {
  val a        = Input(UInt(width.W))
  val b        = Input(UInt(width.W))
  val op       = Input(UInt(Alu.getWidth.W))
  val a_larger = Output(Bool())
  val zero     = Output(Bool())
  val overflow = Output(Bool())
  val carry    = Output(Bool())
  val out      = Output(UInt(width.W))
}

trait EXU extends Module {
  def width: Int
  val io: EXUIO
}

class EXUArea(val width: Int = 32) extends EXU {
  val io          = IO(new EXUIO(width))
  val AluInstance = Module(new AluArea(width))
  AluInstance.io.a      := io.a
  AluInstance.io.b      := io.b
  AluInstance.io.alu_op := io.op
  io.a_larger           := AluInstance.io.a_larger
  io.zero               := AluInstance.io.zero
  io.overflow           := AluInstance.io.overflow
  io.carry              := AluInstance.io.carry
  io.out                := AluInstance.io.out
}
