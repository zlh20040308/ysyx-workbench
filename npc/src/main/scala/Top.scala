import chisel3._
import chisel3.util._
import org.yaml.snakeyaml.events.Event.ID

class TopIO(val width: Int = 32) extends Bundle {
  val inst = Input(UInt(width.W))
  val pc   = Output(UInt(width.W))
}

trait Top extends Module {
  def width: Int
  val io: TopIO
}

class top(val width: Int = 32) extends Top {
  val io = IO(new TopIO)

  /*-------- PC --------*/
  val pc = RegInit(0x80000000.U(width.W))
  pc    := pc + 4.U
  io.pc := pc

  val IDUInstance     = Module(new IDUArea(width))
  val RegFileInstance = Module(new RegFile(width))
  val EXUInstance     = Module(new EXUArea(width))
  IDUInstance.io.inst := io.inst

  RegFileInstance.io.raddr1 := IDUInstance.io.rs1
  RegFileInstance.io.raddr2 := IDUInstance.io.rs2
  RegFileInstance.io.waddr  := IDUInstance.io.rd
  RegFileInstance.io.wen    := IDUInstance.io.wb_en

  val imm = MuxLookup(IDUInstance.io.imm_sel, IMM_SEL.IMM_X)(
    Seq(
      IMM_SEL.IMM_I -> IDUInstance.io.immI,
      IMM_SEL.IMM_S -> IDUInstance.io.immS,
      IMM_SEL.IMM_U -> IDUInstance.io.immU,
      IMM_SEL.IMM_J -> IDUInstance.io.immJ,
      IMM_SEL.IMM_B -> IDUInstance.io.immB
    )
  )

  EXUInstance.io.a         := Mux(IDUInstance.io.a_sel, RegFileInstance.io.rdata1, pc)
  EXUInstance.io.b         := Mux(IDUInstance.io.b_sel, RegFileInstance.io.rdata2, imm)
  RegFileInstance.io.wdata := EXUInstance.io.out

}
