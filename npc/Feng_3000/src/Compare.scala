package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class CompareIO(width: Int) extends Bundle {
  val rs1    = Input(UInt(width.W))
  val rs2    = Input(UInt(width.W))
  val BrType = Input(BrTypeEnum())
  val result = Output(Bool())
}
//BR_XXX, BR_LTU, BR_LT, BR_EQ, BR_GEU, BR_GE, BR_NE
class Compare(width: Int) extends Module {
  val io = IO(new CompareIO(width))
  io.result := false.B

  switch(io.BrType) {
    is(BrTypeEnum.BR_EQ) {
      io.result := io.rs1 === io.rs2
    }
    is(BrTypeEnum.BR_NE) {
      io.result := !(io.rs1 === io.rs2)
    }
    is(BrTypeEnum.BR_LT) {
      io.result := io.rs1.asSInt < io.rs2.asSInt
    }
    is(BrTypeEnum.BR_GE) {
      io.result := !(io.rs1.asSInt < io.rs2.asSInt)
    }
    is(BrTypeEnum.BR_LTU) {
      io.result := io.rs1 < io.rs2
    }
    is(BrTypeEnum.BR_GEU) {
      io.result := !(io.rs1 < io.rs2)
    }
  }
}
