import chisel3._
import chisel3.util._

class IMEMIO extends Bundle {
  val addr    = Input(UInt(32.W))
  val inst    = Output(UInt(32.W))
}

trait IMEM extends Module {
  val io: IMEMIO
}

class IMEMArea extends IMEM {
  val io   = IO(new IMEMIO)
}
