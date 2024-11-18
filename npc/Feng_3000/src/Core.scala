package Feng_3000

import chisel3._
import chisel3.util._
import Consts._

class Core extends Module {
  val io = IO(new Bundle {
    val imem   = Flipped(new ImemPort())
    val dmem   = Flipped(new DmemPort())
    val ebreak = Output(Bool())

    val debug = new DebugPort()
  })

  val pc = RegInit(START_ADDR)

  val AluInstance = Module(new Alu(WORD_LEN))

  val JPCGenInstance = Module(new JPCGen(WORD_LEN))

  val CompareInstance = Module(new Compare(WORD_LEN))

  val CUInstance = Module(new CU(WORD_LEN))

  val RegFileInstance = Module(new RegFile(WORD_LEN))

  val CSRInstance = Module(new CSR(WORD_LEN))

  val ImmGenInstance = Module(new ImmGen(WORD_LEN))

  val WmaskGenInstance = Module(new WmaskGen)

  val LdDataInstance = Module(new LdData(WORD_LEN))

  /* ---------- PC ---------- */
  val pc_plus4 = pc + 4.U

  val pc_csr = MuxCase(
    0.U,
    Array(
      (CUInstance.io.CSRCmd === CSRCmdEnum.CSR_Ecall) -> CSRInstance.io.mtvec,
      (CUInstance.io.CSRCmd === CSRCmdEnum.CSR_Mret)  -> CSRInstance.io.mepc
    ).toIndexedSeq
  )

  switch(CUInstance.io.PCSel) {
    is(PCSelEnum.PC_4) {
      pc := pc_plus4
    }
    is(PCSelEnum.PC_ALU) {
      pc := JPCGenInstance.io.pc_alu
    }
    is(PCSelEnum.PC_CSR) {
      pc := pc_csr
    }
  }

  /* ---------- IMEM ---------- */
  io.imem.addr := pc

  /* ---------- RegFile ---------- */

  RegFileInstance.io.raddr1 := io.imem.inst(19, 15)
  RegFileInstance.io.raddr2 := io.imem.inst(24, 20)
  RegFileInstance.io.waddr  := io.imem.inst(11, 7)
  RegFileInstance.io.wdata  := 0.U

  RegFileInstance.io.wen := CUInstance.io.WbEn

  switch(CUInstance.io.WbSel) {
    is(WbSelEnum.WB_ALU) {
      RegFileInstance.io.wdata := AluInstance.io.out
    }
    is(WbSelEnum.WB_MEM) {
      RegFileInstance.io.wdata := LdDataInstance.io.wb_data
    }
    is(WbSelEnum.WB_PC4) {
      RegFileInstance.io.wdata := pc_plus4
    }
    is(WbSelEnum.WB_CSR) {
      RegFileInstance.io.wdata := CSRInstance.io.rdata
    }
  }

  /* ---------- ALU ---------- */
  AluInstance.io.alu_op := CUInstance.io.ALUSel
  AluInstance.io.A      := 0.U
  AluInstance.io.B      := 0.U

  switch(CUInstance.io.ASel) {
    is(ASelEnum.A_PC) {
      AluInstance.io.A := pc
    }
    is(ASelEnum.A_RS1) {
      AluInstance.io.A := RegFileInstance.io.rs1
    }
  }

  switch(CUInstance.io.BSel) {
    is(BSelEnum.B_IMM) {
      AluInstance.io.B := ImmGenInstance.io.out
    }
    is(BSelEnum.B_RS2) {
      AluInstance.io.B := RegFileInstance.io.rs2
    }
  }

  /* ---------- DMEM ---------- */
  io.dmem.addr  := AluInstance.io.out
  io.dmem.wdata := RegFileInstance.io.rs2
  io.dmem.wmask := WmaskGenInstance.io.wmask
  io.dmem.wen   := CUInstance.io.MemRW
  io.dmem.valid := CUInstance.io.Valid

  /* ---------- WmaskGen ---------- */

  WmaskGenInstance.io.StType := CUInstance.io.StType

  /* ---------- ImmGen ---------- */
  ImmGenInstance.io.inst   := io.imem.inst
  ImmGenInstance.io.ImmSel := CUInstance.io.ImmSel

  /* ---------- CSR ---------- */
  CSRInstance.io.CSRCmd := CUInstance.io.CSRCmd
  CSRInstance.io.addr   := io.imem.inst(31, 20)

  val csr_wdata = MuxCase(
    AluInstance.io.out,
    Array(
      (CUInstance.io.ImmSel === ImmSelEnum.IMM_Z) -> ImmGenInstance.io.out,
    ).toIndexedSeq
  )

  CSRInstance.io.wdata := csr_wdata

  /* ---------- JPCGen ---------- */
  JPCGenInstance.io.alu_data := AluInstance.io.out

  /* ---------- Compare ---------- */
  CompareInstance.io.BrType := CUInstance.io.BrType
  CompareInstance.io.rs1    := RegFileInstance.io.rs1
  CompareInstance.io.rs2    := RegFileInstance.io.rs2

  /* ---------- CU ---------- */
  CUInstance.io.compare := CompareInstance.io.result
  CUInstance.io.inst    := io.imem.inst

  /* ---------- LdData ---------- */
  LdDataInstance.io.rdata  := io.dmem.rdata
  LdDataInstance.io.LdType := CUInstance.io.LdType

  /* ---------- Ebreak ---------- */
  io.ebreak := CUInstance.io.Ebreak

  /* ---------- DebugPort ---------- */
  io.debug.pc      := pc
  io.debug.PCSel   := CUInstance.io.PCSel
  io.debug.gpr     := RegFileInstance.io.gpr
  io.debug.alu_op  := CUInstance.io.ALUSel
  io.debug.mtvec   := CSRInstance.io.mtvec
  io.debug.mepc    := CSRInstance.io.mepc
  io.debug.mcause  := CSRInstance.io.mcause
  io.debug.mstatus := CSRInstance.io.mstatus
  io.debug.Valid   := CUInstance.io.Valid
  io.debug.addr    := io.dmem.addr  
  io.debug.wdata   := io.dmem.wdata 
  io.debug.wen     := io.dmem.wen   
  io.debug.rdata   := io.dmem.rdata 
  io.debug.csr_id  := io.imem.inst(31, 20)
  io.debug.CSRCmd  := CUInstance.io.CSRCmd
  io.debug.CSRWdata := csr_wdata
  io.debug.alu_out  := AluInstance.io.out
  io.debug.imm_sel  := CUInstance.io.ImmSel

  
}
