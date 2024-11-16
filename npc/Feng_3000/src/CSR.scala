package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class CSRIO(xlen: Int) extends Bundle {
  val addr    = Input(UInt(12.W))
  val CSRCmd  = Input(CSRCmdEnum())
  val wdata   = Input(UInt(xlen.W))
  val rdata   = Output(UInt(xlen.W))
  val mtvec   = Output(UInt(xlen.W))
  val mepc    = Output(UInt(xlen.W))
  val mcause  = Output(UInt(xlen.W))
  val mstatus = Output(UInt(xlen.W))
}

class CSR(xlen: Int) extends Module {
  val io   = IO(new CSRIO(xlen))
  val csrs = Mem(4096, UInt(xlen.W))

  io.rdata := csrs(io.addr)

  io.mtvec   := csrs(MTVEC)
  io.mepc    := csrs(MEPC)
  io.mcause  := csrs(MCAUSE)
  io.mstatus := csrs(MSTATUS)

  csrs(MSTATUS) := M_MODE_MSTATUS

  switch(io.CSRCmd) {
    is(CSRCmdEnum.CSR_S) {
      csrs(io.addr) := csrs(io.addr) | io.wdata
    }
    is(CSRCmdEnum.CSR_N) {
      io.rdata := csrs(io.addr)
    }
  }

  val ecall_mstatus = ((csrs(MSTATUS) & MSTATUS_MIE_BIT) << 4) | (csrs(MSTATUS) & ~MSTATUS_MPIE_BIT)
  val mret_mstatus  = ((csrs(MSTATUS) & MSTATUS_MPIE_BIT) >> 4) | (csrs(MSTATUS) & ~MSTATUS_MIE_BIT) | MSTATUS_MPIE_BIT

  switch(io.CSRCmd) {
    is(CSRCmdEnum.CSR_S) {
      when(io.addr === MSTATUS) {
        csrs(io.addr) := (csrs(io.addr) | io.wdata) & M_MODE_MASK
      }.otherwise {
        csrs(io.addr) := csrs(io.addr) | io.wdata
      }
    }
    is(CSRCmdEnum.CSR_W) {
      when(io.addr === MSTATUS) {
        csrs(io.addr) := io.wdata & M_MODE_MASK
      }.otherwise {
        csrs(io.addr) := io.wdata
      }
    }
    is(CSRCmdEnum.CSR_C) {
      when(io.addr === MSTATUS) {
        csrs(io.addr) := (csrs(io.addr) & (~io.wdata)) & M_MODE_MASK
      }.otherwise {
        csrs(io.addr) := csrs(io.addr) & (~io.wdata)
      }
    }
    is(CSRCmdEnum.CSR_Ecall) {
      csrs(MEPC)    := io.wdata
      csrs(MCAUSE)  := NO
      csrs(MSTATUS) := ecall_mstatus
    }
    is(CSRCmdEnum.CSR_Mret) {
      csrs(MSTATUS) := mret_mstatus
    }
    is(CSRCmdEnum.CSR_N) {
      csrs(io.addr) := csrs(io.addr)
    }
  }
}
