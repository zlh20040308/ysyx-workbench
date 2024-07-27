import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

object Control {
  val Y = true.B
  val N = false.B

  // pc_sel
  val PC_4   = 0.U(2.W)
  val PC_ALU = 1.U(2.W)
  val PC_0   = 2.U(2.W)
  val PC_EPC = 3.U(2.W)

  // A_sel
  val A_XXX = 0.U(1.W)
  val A_PC  = 0.U(1.W)
  val A_RS1 = 1.U(1.W)

  // B_sel
  val B_XXX = 0.U(1.W)
  val B_IMM = 0.U(1.W)
  val B_RS2 = 1.U(1.W)

  // imm_sel
  val IMM_X = 0.U(3.W)
  val IMM_I = 1.U(3.W)
  val IMM_S = 2.U(3.W)
  val IMM_U = 3.U(3.W)
  val IMM_J = 4.U(3.W)
  val IMM_B = 5.U(3.W)
  val IMM_Z = 6.U(3.W)

  // br_type
  val BR_XXX = 0.U(3.W)
  val BR_LTU = 1.U(3.W)
  val BR_LT  = 2.U(3.W)
  val BR_EQ  = 3.U(3.W)
  val BR_GEU = 4.U(3.W)
  val BR_GE  = 5.U(3.W)
  val BR_NE  = 6.U(3.W)

  // st_type
  val ST_XXX = 0.U(2.W)
  val ST_SW  = 1.U(2.W)
  val ST_SH  = 2.U(2.W)
  val ST_SB  = 3.U(2.W)

  // ld_type
  val LD_XXX = 0.U(3.W)
  val LD_LW  = 1.U(3.W)
  val LD_LH  = 2.U(3.W)
  val LD_LB  = 3.U(3.W)
  val LD_LHU = 4.U(3.W)
  val LD_LBU = 5.U(3.W)

  // wb_sel
  val WB_ALU = 0.U(2.W)
  val WB_MEM = 1.U(2.W)
  val WB_PC4 = 2.U(2.W)
  val WB_CSR = 3.U(2.W)

}

import Control._

// 定义指令模式
case class InstructionPattern(
  val funct7: BitPat = BitPat.dontCare(7),
  val funct3: BitPat = BitPat.dontCare(3),
  val opcode: BitPat)
    extends DecodePattern {
  def bitPat: BitPat = funct7 ## BitPat.dontCare(10) ## funct3 ## BitPat.dontCare(5) ## opcode
}

import Alu._

// 控制信号字段
object AluOpField extends DecodeField[InstructionPattern, UInt] {
  def name:       String = "aluOp"
  def chiselType: UInt   = UInt(3.W)

  def genTable(op: InstructionPattern): BitPat = {
    (op.opcode.rawString, op.funct3.rawString, op.funct7.rawString) match {
      case ("0110011", "000", "0000000") => BitPat(ALU_ADD) // ADD
      case _                             => BitPat("b0000") // 默认值
    }
  }
}

object ImmSelField extends DecodeField[InstructionPattern, UInt] {
  def name:       String = "immSel"
  def chiselType: UInt   = UInt(3.W)

  def genTable(op: InstructionPattern): BitPat = {
    (op.funct7.rawString, op.funct3.rawString, op.opcode.rawString) match {
      /* -------- IMM_U -------- */
      case (_, _, "0110111") => BitPat(IMM_U) // LUI
      case (_, _, "0010111") => BitPat(IMM_U) // AUIPC

      /* -------- IMM_J -------- */
      case (_, _, "1101111") => BitPat(IMM_J) // JAL

      /* -------- IMM_I -------- */
      case (_, "000", "0000011")         => BitPat(IMM_I) // LB
      case (_, "001", "0000011")         => BitPat(IMM_I) // LH
      case (_, "010", "0000011")         => BitPat(IMM_I) // LW
      case (_, "101", "0000011")         => BitPat(IMM_I) // LHU
      case (_, "100", "0000011")         => BitPat(IMM_I) // LHU
      case (_, "000", "0010011")         => BitPat(IMM_I) // ADDI
      case (_, "010", "0010011")         => BitPat(IMM_I) // SLTI
      case ("0000000", "011", "0110011") => BitPat(IMM_I) // SLTIU
      case (_, "100", "0010011")         => BitPat(IMM_I) // XORI
      case (_, "110", "0010011")         => BitPat(IMM_I) // ORI
      case (_, "111", "0010011")         => BitPat(IMM_I) // ANDI
      case ("000000?", "001", "0010011") => BitPat(IMM_I) // SLLI
      case ("000000?", "101", "0010011") => BitPat(IMM_I) // SRLI
      case ("010000?", "101", "0010011") => BitPat(IMM_I) // SRLI

      /* -------- IMM_B -------- */
      case (_, "000", "1100011") => BitPat(IMM_B) // BEQ
      case (_, "001", "1100011") => BitPat(IMM_B) // BNE
      case (_, "100", "1100011") => BitPat(IMM_B) // BLT
      case (_, "101", "1100011") => BitPat(IMM_B) // BGE
      case (_, "110", "1100011") => BitPat(IMM_B) // BLTU
      case (_, "111", "1100011") => BitPat(IMM_B) // BGEU

      /* -------- IMM_S -------- */
      case (_, "000", "0100011") => BitPat(IMM_S) // SB
      case (_, "001", "0100011") => BitPat(IMM_S) // SH
      case (_, "010", "0100011") => BitPat(IMM_S) // SW

      case _ => BitPat(IMM_X) // 默认值

    }
  }
}

object RegWriteField extends DecodeField[InstructionPattern, Bool] {
  def name:       String = "regWrite"
  def chiselType: Bool   = Bool()
  def genTable(op: InstructionPattern): BitPat = {
    (op.funct7.rawString, op.funct3.rawString, op.opcode.rawString) match {
      /* -------- IMM_U -------- */
      case (_, _, "0110111") => BitPat("b1") // LUI

      case _ => BitPat("b0") // 默认值

    }
  }
}

object MemReadField extends DecodeField[InstructionPattern, Bool] {
  def name:       String = "memRead"
  def chiselType: Bool   = Bool()
  def genTable(op: InstructionPattern): BitPat = {
    if (op.opcode.rawString == "0000011") BitPat("b1") // 示例条件
    else BitPat("b0")
  }
}

object MemWriteField extends DecodeField[InstructionPattern, Bool] {
  def name:       String = "memWrite"
  def chiselType: Bool   = Bool()
  def genTable(op: InstructionPattern): BitPat = {
    if (op.opcode.rawString == "0100011") BitPat("b1") // 示例条件
    else BitPat("b0")
  }
}

class CUIO extends Bundle {
  val instruction = Input(UInt(32.W))
  val aluOp       = UInt(4.W) // 根据 AluOpField 定义的宽度
  val regWrite    = Bool()
  val memRead     = Bool()
  val memWrite    = Bool()

}

// 定义 CU 模块
class CU extends Module {
  val io = IO(new CUIO)

  // 移动到伴生对象中
  object CU {
    val patterns = Seq(
      InstructionPattern(
        funct7 = BitPat("b0000000"),
        funct3 = BitPat("b000"),
        opcode = BitPat("b0110011")
      ), // ADD 示例
      InstructionPattern(
        funct7 = BitPat("b0100000"),
        funct3 = BitPat("b000"),
        opcode = BitPat("b0110011")
      ) // SUB 示例
    )

    val fields = Seq(
      AluOpField,
      RegWriteField,
      MemReadField,
      MemWriteField
    )

    val decodeTable = new DecodeTable(patterns, fields)
  }

  import CU._

  // 解码结果
  val decodedSignals = decodeTable.decode(io.instruction)

  // 连接输出信号
  io.aluOp    := decodedSignals(AluOpField).asUInt
  io.regWrite := decodedSignals(RegWriteField).asBool
  io.memRead  := decodedSignals(MemReadField).asBool
  io.memWrite := decodedSignals(MemWriteField).asBool
}
