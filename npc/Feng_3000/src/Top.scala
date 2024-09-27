package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class Top extends Module {
  val io = IO(new Bundle {
    val exit = Output(Bool())
  })

  val core   = Module(new Core())
  val memory = Module(new Memory())

  core.io.imem <> memory.io.imem
  core.io.dmem <> memory.io.dmem

  io.exit := true.B
  // io.gp   := core.io.gp
}
