import chisel3._
import chisel3.util._

class ImmGenIO extends Bundle {
  val inst   = Input(UInt(32.W))
  val ImmSel = Input(UInt(3.W))
  val Imm    = Output(UInt(32.W))
}

trait ImmGen extends Module {
  val io: ImmGenIO
}

class ImmGenArea extends ImmGen {
  val io   = IO(new ImmGenIO)
}
