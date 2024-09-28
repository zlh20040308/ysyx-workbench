package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class ImmGenIO(xlen: Int) extends Bundle {
  val inst   = Input(UInt(xlen.W))
  val ImmSel = Input(ImmSelEnum())
  val out    = Output(UInt(xlen.W))
}

class ImmGen(val xlen: Int) extends Module{
  val io   = IO(new ImmGenIO(xlen))
  val Iimm = Cat(Fill(21,io.inst(31)),io.inst(30, 20))
  val Simm = Cat(Fill(21,io.inst(31)),io.inst(30, 25), io.inst(11, 7))
  val Bimm = Cat(Fill(20,io.inst(31)), io.inst(7), io.inst(30, 25), io.inst(11, 8), 0.U(1.W))
  val Uimm = Cat(io.inst(31, 12), 0.U(12.W))
  val Jimm = Cat(Fill(12,io.inst(31)), io.inst(19, 12), io.inst(20), io.inst(30, 25), io.inst(24, 21), 0.U(1.W))
  val Zimm = Cat(Fill(27,0.U(1.W)),io.inst(19, 15))

  io.out := 0.U(xlen.W)

  switch(io.ImmSel) {
    is(ImmSelEnum.IMM_B) {
      io.out := Bimm
    }
    is(ImmSelEnum.IMM_I) {
      io.out := Iimm
    }
    is(ImmSelEnum.IMM_J) {
      io.out := Jimm
    }
    is(ImmSelEnum.IMM_S) {
      io.out := Simm
    }
    is(ImmSelEnum.IMM_U) {
      io.out := Uimm
    }
    is(ImmSelEnum.IMM_X) {
      io.out := 0.U(xlen.W)
    }
    is(ImmSelEnum.IMM_Z) {
      io.out := Zimm
    }
  }
}
