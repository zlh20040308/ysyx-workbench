package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class DebugPort extends Bundle {
  val pc = Output(UInt(WORD_LEN.W))
  val PCSel = Output(PCSelEnum())
  val alu_op = Output(AluEnum())
  val alu_out = Output(UInt(WORD_LEN.W))
  val imm_sel = Output(ImmSelEnum())


  val gpr = Output(Vec(16, UInt(WORD_LEN.W)))
  val mtvec   = Output(UInt(WORD_LEN.W))
  val mepc    = Output(UInt(WORD_LEN.W))
  val mcause  = Output(UInt(WORD_LEN.W))
  val mstatus = Output(UInt(WORD_LEN.W))
  val Valid = Output(Bool())

  val addr  = Output(UInt(WORD_LEN.W))
  val wdata = Output(UInt(WORD_LEN.W))
  val wen   = Output(Bool())
  val rdata = Output(UInt(WORD_LEN.W))
  val csr_id = Output(UInt(12.W))
  val CSRCmd = Output(CSRCmdEnum())
  val CSRWdata = Output(UInt(WORD_LEN.W))



}

class Top extends Module {
  val io = IO(new Bundle {
    val ebreak = Output(Bool())
    val debug  = new DebugPort()
  })

  val core   = Module(new Core())
  val memory = Module(new Memory())

  core.io.imem <> memory.io.imem
  core.io.dmem <> memory.io.dmem
  io.ebreak := core.io.ebreak


  io.debug := core.io.debug
}
