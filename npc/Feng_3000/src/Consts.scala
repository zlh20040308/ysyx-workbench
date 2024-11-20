package Feng_3000

import chisel3._
import chisel3.util._

object Consts {
  val WORD_LEN         = 32
  val START_ADDR       = "h80000000".U(WORD_LEN.W)
  val MEPC             = "h341".U(WORD_LEN.W)
  val MSTATUS          = "h300".U(WORD_LEN.W)
  val MTVEC            = "h305".U(WORD_LEN.W)
  val MCAUSE           = "h342".U(WORD_LEN.W)
  val NO               = "hb".U(WORD_LEN.W)
  val M_MODE_MASK      = "h80207888".U(WORD_LEN.W)
  val MSTATUS_MPIE_BIT = "h80".U(WORD_LEN.W)
  val MSTATUS_MIE_BIT  = "h8".U(WORD_LEN.W)
  val M_MODE_MSTATUS   = "h1800".U(WORD_LEN.W)

  


  object AluEnum extends ChiselEnum {
    val ALU_XXX, ALU_ADD, ALU_SUB, ALU_COPY_A, ALU_COPY_B, ALU_SLL, ALU_SLT, ALU_SLTU, ALU_XOR, ALU_SRL, ALU_SRA,
        ALU_OR, ALU_AND = Value
  }

  object PCSelEnum extends ChiselEnum {
    val PC_XXX, PC_4, PC_ALU, PC_CSR = Value

  }

  object ASelEnum extends ChiselEnum {
    val A_XXX, A_PC, A_RS1 = Value

  }

  object BSelEnum extends ChiselEnum {
    val B_XXX, B_IMM, B_RS2 = Value

  }

  object ImmSelEnum extends ChiselEnum {
    val IMM_X, IMM_I, IMM_S, IMM_U, IMM_J, IMM_B, IMM_Z = Value

  }

  object BrTypeEnum extends ChiselEnum {
    val BR_XXX, BR_LTU, BR_LT, BR_EQ, BR_GEU, BR_GE, BR_NE = Value
  }

  object StTypeEnum extends ChiselEnum {
    val ST_XXX, ST_SW, ST_SH, ST_SB = Value
  }

  object LdTypeEnum extends ChiselEnum {
    val LD_XXX, LD_LW, LD_LH, LD_LB, LD_LHU, LD_LBU = Value
  }

  object WbSelEnum extends ChiselEnum {
    val WB_ALU, WB_MEM, WB_PC4, WB_CSR = Value
  }

  object CSRCmdEnum extends ChiselEnum {
    val CSR_N, CSR_S, CSR_C, CSR_W, CSR_Ecall, CSR_Mret = Value
  }
}
