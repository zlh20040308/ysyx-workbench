package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class AluIO(width: Int) extends Bundle {
  val A      = Input(UInt(width.W))
  val B      = Input(UInt(width.W))
  val alu_op = Input(AluEnum())
  val out    = Output(UInt(width.W))
}

class Alu(val width: Int) {
  val io = IO(new AluIO(width))

  val shamt = io.B(4, 0).asUInt

  switch(io.alu_op) {
    is(AluEnum.ALU_ADD) {
      io.out := io.A + io.B
    }
    is(AluEnum.ALU_SUB) {
      io.out := io.A - io.B
    }
    is(AluEnum.ALU_SRA) {
      io.out := (io.A.asSInt >> shamt).asUInt
    }
    is(AluEnum.ALU_SRL) {
      io.out := io.A >> shamt
    }
    is(AluEnum.ALU_SLL) {
      io.out := io.A << shamt
    }
    is(AluEnum.ALU_SLT) {
      io.out := io.A.asSInt < io.B.asSInt
    }
    is(AluEnum.ALU_SLTU) {
      io.out := io.A < io.B
    }
    is(AluEnum.ALU_AND) {
      io.out := io.A & io.B
    }
    is(AluEnum.ALU_OR) {
      io.out := io.A | io.B
    }
    is(AluEnum.ALU_XOR) {
      io.out := io.A ^ io.B
    }
    is(AluEnum.ALU_COPY_B) {
      io.out := io.B
    }
  }
}
