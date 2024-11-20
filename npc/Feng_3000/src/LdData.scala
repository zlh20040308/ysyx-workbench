package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class LdDataIO(val xlen: Int) extends Bundle {
  val LdType  = Input(LdTypeEnum())
  val rdata   = Input(UInt(xlen.W))
  val wb_data = Output(UInt(xlen.W))
}

// LD_XXX, LD_LW, LD_LH, LD_LB, LD_LHU, LD_LBU
class LdData(val xlen: Int) extends Module {
  val io = IO(new LdDataIO(xlen))
  io.wb_data := 0.U(xlen.W)

  switch(io.LdType) {
    is(LdTypeEnum.LD_LB) {
      io.wb_data := Cat(Fill(24, io.rdata(7)), io.rdata(7, 0))
    }
    is(LdTypeEnum.LD_LH) {
      io.wb_data := Cat(Fill(16, io.rdata(15)), io.rdata(15, 0))
    }
    is(LdTypeEnum.LD_LW) {
      io.wb_data := io.rdata
    }
    is(LdTypeEnum.LD_LBU) {
      io.wb_data := Cat(Fill(24, 0.U), io.rdata(7, 0))
    }
    is(LdTypeEnum.LD_LHU) {
      io.wb_data := Cat(Fill(16, 0.U), io.rdata(15, 0))
    }
  }
}
