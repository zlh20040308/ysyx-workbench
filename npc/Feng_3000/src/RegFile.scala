// See LICENSE for license details.

package Feng_3000

import chisel3._

class RegFileIO(xlen: Int) extends Bundle {
  val raddr1 = Input(UInt(5.W))
  val raddr2 = Input(UInt(5.W))
  val rs1    = Output(UInt(xlen.W))
  val rs2    = Output(UInt(xlen.W))
  val wen    = Input(Bool())
  val waddr  = Input(UInt(5.W))
  val wdata  = Input(UInt(xlen.W))

  val gpr = Output(Vec(16, UInt(xlen.W))) // for debug
}

class RegFile(xlen: Int) extends Module {
  val io   = IO(new RegFileIO(xlen))
  val regs = Mem(32, UInt(xlen.W))
  io.rs1 := Mux(io.raddr1.orR, regs(io.raddr1), 0.U)
  io.rs2 := Mux(io.raddr2.orR, regs(io.raddr2), 0.U)

  for (i <- 0 until 16) {
    io.gpr(i) := regs(i)
  }

  when(io.wen & io.waddr.orR) {
    regs(io.waddr) := io.wdata
  }
}
