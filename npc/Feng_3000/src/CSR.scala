package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class CSRIO(xlen: Int) extends Bundle {
  val addr   = Input(UInt(12.W))
  val CSRCmd = Input(CSRCmdEnum())
  val wdata  = Input(UInt(xlen.W))
  val rdata  = Output(UInt(xlen.W))
}

class CSR(xlen: Int) extends Module {
  val io   = IO(new CSRIO(xlen))
  val csrs = Mem(4096, UInt(xlen.W))
  io.rdata      := csrs(io.addr)
  csrs(io.addr) := csrs(io.addr)
  switch(io.CSRCmd) {
    is(CSRCmdEnum.CSR_S) {
      csrs(io.addr) := csrs(io.addr) | io.wdata
    }
    is(CSRCmdEnum.CSR_W) {
      csrs(io.addr) := io.wdata
    }
    is(CSRCmdEnum.CSR_C) {
      csrs(io.addr) := csrs(io.addr) & (~io.wdata)
    }
    is(CSRCmdEnum.CSR_P) {
      csrs(io.addr) := csrs(io.addr)
    }
    is(CSRCmdEnum.CSR_N) {
      csrs(io.addr) := csrs(io.addr)
    }
  }
}
