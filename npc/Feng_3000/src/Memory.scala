package Feng_3000

import chisel3._
import chisel3.util._
import chisel3.experimental._

import Consts._

class ImemPort extends Bundle {
  val addr = Input(UInt(WORD_LEN.W))
  val inst = Output(UInt(WORD_LEN.W))
}

class DmemPort extends Bundle {
  val addr  = Input(UInt(WORD_LEN.W))
  val wdata = Input(UInt(WORD_LEN.W))
  val wen   = Input(Bool())
  val valid = Input(Bool())
  val wmask = Input(UInt(4.W))
  val rdata = Output(UInt(WORD_LEN.W))
}

class ram_2r1w extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clk = Input(Clock())
    val pc = Input(UInt(WORD_LEN.W))
    val valid = Input(Bool())

    val imem_addr = Input(UInt(WORD_LEN.W))
    val imem_inst = Output(UInt(WORD_LEN.W))

    val dmem_addr  = Input(UInt(WORD_LEN.W))
    val dmem_wdata = Input(UInt(WORD_LEN.W))
    val dmem_wen   = Input(Bool())
    val dmem_wmask = Input(UInt(4.W))
    val dmem_rdata = Output(UInt(WORD_LEN.W))

  })

  addResource("/vsrc/ram_2r1w.sv")
}

class Memory extends Module {
  val io = IO(new Bundle {
    val pc   = Input(UInt(WORD_LEN.W))
    val imem = new ImemPort()
    val dmem = new DmemPort()
  })

  val mem = Module(new ram_2r1w())
  mem.io.clk       := clock
  mem.io.pc        := io.pc
  mem.io.imem_addr := io.imem.addr
  io.imem.inst     := mem.io.imem_inst

  mem.io.valid      := io.dmem.valid
  mem.io.dmem_addr  := io.dmem.addr
  mem.io.dmem_wdata := io.dmem.wdata
  mem.io.dmem_wen   := io.dmem.wen
  mem.io.dmem_wmask := io.dmem.wmask
  io.dmem.rdata     := mem.io.dmem_rdata
}
