import chisel3._

class DMEMIO extends Bundle {
  val addr  = Input(UInt(32.W))
  val DataW = Input(UInt(32.W))
  val MemRW = Input(UInt(1.W))
  val StSel = Input(UInt(2.W))
  val DataR = Output(UInt(32.W))
}

class DMEM extends Module {
  val io   = IO(new DMEMIO)
}
