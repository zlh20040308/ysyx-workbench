package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class JPCGenIO(val xlen: Int) extends Bundle {
  val alu_data = Input(UInt(xlen.W))
  val pc_alu   = Output(UInt(xlen.W))
}

class JPCGen(val xlen: Int) extends Module {
  val io = IO(new JPCGenIO(xlen))
  io.pc_alu := io.alu_data & (~1.U(xlen.W))
}
