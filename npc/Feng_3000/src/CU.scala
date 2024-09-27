package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class CUIO(val xlen: Int) extends Bundle {
  val inst    = Input(UInt(xlen.W))
  val compare = Input(Bool())
  val PCSel   = Output(PCSelEnum())
  val ASel    = Output(ASelEnum())
  val BSel    = Output(BSelEnum())
  val ImmSel  = Output(ImmSelEnum())
  val ALUSel  = Output(AluEnum())
  val BrType  = Output(BrTypeEnum())
  val StType  = Output(StTypeEnum())
  val LdType  = Output(LdTypeEnum())
  val WBSel   = Output(WbSelEnum())
  val MemRW   = Output(Bool())
  val RegWEn  = Output(Bool())
}

class CU(val xlen: Int) extends Module {
  val io     = IO(new CUIO(xlen))
  val decode = Module(new Decode(xlen))
  decode.io.inst := io.inst
  io.PCSel       := decode.io.PCSel
  io.ASel        := decode.io.ASel
  io.BSel        := decode.io.BSel
  io.ImmSel      := decode.io.ImmSel
  io.ALUSel      := decode.io.ALUSel
  io.BrType      := decode.io.BrType
  io.StType      := decode.io.StType
  io.LdType      := decode.io.LdType
  io.WBSel       := decode.io.WBSel
  io.MemRW       := decode.io.MemRW
  io.RegWEn      := decode.io.RegWEn

  switch(decode.io.BrType) {
    is(BrTypeEnum.BR_EQ) {
      when(io.compare) {
        io.PCSel := PCSelEnum.PC_ALU
      }.otherwise {
        io.PCSel := PCSelEnum.PC_4
      }
    }
    is(BrTypeEnum.BR_GE) {
      when(io.compare) {
        io.PCSel := PCSelEnum.PC_ALU
      }.otherwise {
        io.PCSel := PCSelEnum.PC_4
      }
    }
    is(BrTypeEnum.BR_GEU) {
      when(io.compare) {
        io.PCSel := PCSelEnum.PC_ALU
      }.otherwise {
        io.PCSel := PCSelEnum.PC_4
      }
    }
    is(BrTypeEnum.BR_LT) {
      when(io.compare) {
        io.PCSel := PCSelEnum.PC_ALU
      }.otherwise {
        io.PCSel := PCSelEnum.PC_4
      }
    }
    is(BrTypeEnum.BR_LTU) {
      when(io.compare) {
        io.PCSel := PCSelEnum.PC_ALU
      }.otherwise {
        io.PCSel := PCSelEnum.PC_4
      }
    }
    is(BrTypeEnum.BR_NE) {
      when(io.compare) {
        io.PCSel := PCSelEnum.PC_ALU
      }.otherwise {
        io.PCSel := PCSelEnum.PC_4
      }
    }
  }
}
