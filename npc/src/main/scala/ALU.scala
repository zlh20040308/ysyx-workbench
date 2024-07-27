import chisel3._
import chisel3.util._

object Alu {
  val ALU_ADD   = 0.U(3.W)
  val ALU_SUB   = 1.U(3.W)
  val ALU_NOT_A = 2.U(3.W)
  val ALU_AND   = 3.U(3.W)
  val ALU_OR    = 4.U(3.W)
  val ALU_XOR   = 5.U(3.W)
  val ALU_SLT   = 6.U(3.W)
  val ALU_EQ    = 7.U(3.W)

  def getWidth: Int = 3
}

class AluIO(width: Int) extends Bundle {
  val a        = Input(UInt(width.W))
  val b        = Input(UInt(width.W))
  val alu_op   = Input(UInt(Alu.getWidth.W))
  val a_larger = Output(Bool())
  val zero     = Output(Bool())
  val overflow = Output(Bool())
  val carry    = Output(Bool())
  val out      = Output(UInt(width.W))
}

import Alu._

trait Alu extends Module {
  def width: Int
  val io: AluIO
}

class AluArea(val width: Int = 32) extends Alu {
  val io = IO(new AluIO(width))

  val Adder = Module(new AdderArea(width))

  Adder.io.a  := io.a
  Adder.io.b  := io.b
  Adder.io.ci := Mux(io.alu_op === ALU_SUB || io.alu_op === ALU_EQ || io.alu_op === ALU_SLT, 1.U, 0.U)

  io.overflow := Adder.io.overflow
  io.carry    := Adder.io.co
  io.a_larger := Adder.io.overflow ^ Adder.io.s(width - 1)

  io.out := MuxLookup(io.alu_op, io.b)(
    Seq(
      ALU_ADD -> (Adder.io.s),
      ALU_SUB -> (Adder.io.s),
      ALU_NOT_A -> (~io.a),
      ALU_AND -> (io.a & io.b),
      ALU_OR -> (io.a | io.b),
      ALU_XOR -> (io.a ^ io.b),
      ALU_EQ -> (Adder.io.s === 0.U)
    )
  )

  io.zero := !io.out.orR

}
