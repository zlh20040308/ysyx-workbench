package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class DebugPort extends Bundle {
  val pc = Output(UInt(WORD_LEN.W))
  val PCSel = Output(PCSelEnum())
  val gpr = Output(Vec(16, UInt(WORD_LEN.W)))
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
