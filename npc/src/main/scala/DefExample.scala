import chisel3._
import chisel3.util._

object ValConstants {
  val S0 = 0.U(2.W)
  val S1 = 1.U(2.W)
  val S2 = 2.U(2.W)
  val S3 = 3.U(2.W)
}

class ValFSM extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val done = Output(Bool())
  })

  val state = RegInit(ValConstants.S0)
  io.done := false.B

  switch(state) {
    is(ValConstants.S0) {
      when(io.start) {
        state := ValConstants.S1
      }
    }
    is(ValConstants.S1) {
      state := ValConstants.S2
    }
    is(ValConstants.S2) {
      state := ValConstants.S3
    }
    is(ValConstants.S3) {
      io.done := true.B
      state := ValConstants.S0
    }
  }
}

object DefConstants {
  def S0 = 0.U(2.W)
  def S1 = 1.U(2.W)
  def S2 = 2.U(2.W)
  def S3 = 3.U(2.W)
}

class DefFSM extends Module {
  val io = IO(new Bundle {
    val start = Input(Bool())
    val done = Output(Bool())
  })

  val state = RegInit(DefConstants.S0)
  io.done := false.B

  switch(state) {
    is(DefConstants.S0) {
      when(io.start) {
        state := DefConstants.S1
      }
    }
    is(DefConstants.S1) {
      state := DefConstants.S2
    }
    is(DefConstants.S2) {
      state := DefConstants.S3
    }
    is(DefConstants.S3) {
      io.done := true.B
      state := DefConstants.S0
    }
  }
}

