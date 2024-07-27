import chisel3._
import chisel3.util._

class IDUIO(width: Int) extends Bundle {
  val inst    = Input(UInt(width.W))
  val rs1     = Output(UInt(5.W))
  val rs2     = Output(UInt(5.W))
  val rd      = Output(UInt(5.W))
  val immI    = Output(UInt(width.W))
  val immS    = Output(UInt(width.W))
  val immB    = Output(UInt(width.W))
  val immU    = Output(UInt(width.W))
  val immJ    = Output(UInt(width.W))
}

trait IDU extends Module {
  def width: Int
  val io: IDUIO
}

class IDUArea(val width: Int = 32) extends IDU {
  val io = IO(new IDUIO(width))
  io.rs1  := io.inst(19, 15)
  io.rs2  := io.inst(24, 20)
  io.rd   := io.inst(11, 7)
  io.immI := Cat(Fill(21, io.inst(31)), io.inst(30, 20))
  io.immS := Cat(Fill(21, io.inst(31)), io.inst(30, 25), io.inst(11, 7))
  io.immB := Cat(io.inst(31), io.inst(7), io.inst(30, 25), io.inst(11, 8), 0.U(1.W))
  io.immU := Cat(io.inst(31, 12), Fill(12, 0.U(1.W)))
  io.immJ := Cat(io.inst(31), io.inst(19, 12), io.inst(20), io.inst(30, 25), io.inst(24, 21), 0.U(1.W))
}
