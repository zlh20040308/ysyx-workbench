package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class WmaskGenIO extends Bundle {
  val StType = Input(StTypeEnum())
  val wmask  = Output(UInt(4.W))
}

class WmaskGen extends Module {
  val io = IO(new WmaskGenIO)
  io.wmask := 0.U(4.W)

  switch(io.StType) {
    is(StTypeEnum.ST_SB) {
      io.wmask := "b0001".U
    }
    is(StTypeEnum.ST_SH) {
      io.wmask := "b0011".U
    }
    is(StTypeEnum.ST_SW) {
      io.wmask := "b1111".U
    }
  }
}
