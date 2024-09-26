package Feng_3000

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import org.chipsalliance.rvdecoderdb
import org.chipsalliance.rvdecoderdb.Utils

import Consts._

case class Insn(val inst: rvdecoderdb.Instruction) extends DecodePattern {
  override def bitPat: BitPat = BitPat("b" + inst.encoding.toString())
}

object Insn {
  implicit class addMethodsToInsn(i: Insn) {
    def hasArg(arg: String) = i.inst.args.map(_.name).contains(arg)
  }
}

object PCSel extends DecodeField[Insn, PCSelEnum.Type] {
  override def name = "PCSel"

  override def chiselType = PCSelEnum()

  override def genTable(i: Insn): BitPat = {
    val loadInstructions = Set("lb", "lh", "lw", "lbu", "lhu")
    if (Utils.isJ(i.inst) || i.inst.name == "jalr") {
      BitPat(PCSelEnum.PC_ALU.litValue.U(PCSelEnum.getWidth.W))
    } else if (loadInstructions.contains(i.inst.name)) {
      BitPat(PCSelEnum.PC_0.litValue.U(PCSelEnum.getWidth.W))
    } else {
      BitPat(PCSelEnum.PC_4.litValue.U(PCSelEnum.getWidth.W))
    }
  }
}

object ASel extends DecodeField[Insn, ASelEnum.Type] {
  override def name = "ASel"

  override def chiselType = ASelEnum()

  override def genTable(i: Insn): BitPat = {
    val sliInstructions = Set("slli", "srli", "srai")
    if (Utils.isU(i.inst) || Utils.isB(i.inst) || Utils.isJ(i.inst)) {
      BitPat(ASelEnum.A_PC.litValue.U(ASelEnum.getWidth.W))
    } else if (Utils.isI(i.inst) || Utils.isS(i.inst) || Utils.isR(i.inst) || sliInstructions.contains(i.inst.name)) {
      BitPat(ASelEnum.A_RS1.litValue.U(ASelEnum.getWidth.W))
    } else {
      BitPat(ASelEnum.A_XXX.litValue.U(ASelEnum.getWidth.W))
    }
  }
}

object BSel extends DecodeField[Insn, BSelEnum.Type] {
  override def name = "BSel"

  override def chiselType = BSelEnum()

  override def genTable(i: Insn): BitPat = {
    if (Utils.isR(i.inst)) {
      BitPat(BSelEnum.B_RS2.litValue.U(BSelEnum.getWidth.W))
    } else if (i.inst.args.map(_.name).exists((name: String) => name.contains("imm") || name.contains("shamtw"))) {
      BitPat(BSelEnum.B_IMM.litValue.U(BSelEnum.getWidth.W))
    } else {
      BitPat(BSelEnum.B_XXX.litValue.U(BSelEnum.getWidth.W))
    }
  }
}

object ImmSel extends DecodeField[Insn, ImmSelEnum.Type] {
  override def name = "ImmSel"

  override def chiselType = ImmSelEnum()

  override def genTable(i: Insn): BitPat = {
    val sliInstructions = Set("slli", "srli", "srai")
    if (Utils.isI(i.inst) || sliInstructions.contains(i.inst.name)) {
      BitPat(ImmSelEnum.IMM_I.litValue.U(ImmSelEnum.getWidth.W))
    } else if (Utils.isS(i.inst)) {
      BitPat(ImmSelEnum.IMM_S.litValue.U(ImmSelEnum.getWidth.W))
    } else if (Utils.isB(i.inst)) {
      BitPat(ImmSelEnum.IMM_B.litValue.U(ImmSelEnum.getWidth.W))
    } else if (Utils.isU(i.inst)) {
      BitPat(ImmSelEnum.IMM_U.litValue.U(ImmSelEnum.getWidth.W))
    } else if (Utils.isJ(i.inst)) {
      BitPat(ImmSelEnum.IMM_J.litValue.U(ImmSelEnum.getWidth.W))
    } else {
      BitPat(ImmSelEnum.IMM_X.litValue.U(ImmSelEnum.getWidth.W))
    }
  }
}

object ALUSel extends DecodeField[Insn, AluEnum.Type] {
  override def name = "ALUSel"

  override def chiselType = AluEnum()

  override def genTable(i: Insn): BitPat = {
    val addOpInstructions = Set("auipc", "jalr", "lb", "lh", "lw", "lbu", "lhu", "add", "addi")

    if (Utils.isS(i.inst) || Utils.isB(i.inst) || Utils.isJ(i.inst) || addOpInstructions.contains(i.inst.name)) {
      BitPat(AluEnum.ALU_ADD.litValue.U((AluEnum.getWidth).W))
    } else {
      i.inst.name match {
        case "lui"            => BitPat(AluEnum.ALU_COPY_B.litValue.U(AluEnum.getWidth.W))
        case "slt" | "slti"   => BitPat(AluEnum.ALU_SLT.litValue.U(AluEnum.getWidth.W))
        case "sltiu" | "sltu" => BitPat(AluEnum.ALU_SLTU.litValue.U(AluEnum.getWidth.W))
        case "xor" | "xori"   => BitPat(AluEnum.ALU_XOR.litValue.U(AluEnum.getWidth.W))
        case "or" | "ori"     => BitPat(AluEnum.ALU_OR.litValue.U(AluEnum.getWidth.W))
        case "and" | "andi"   => BitPat(AluEnum.ALU_AND.litValue.U(AluEnum.getWidth.W))
        case "sll" | "slli"   => BitPat(AluEnum.ALU_SLL.litValue.U(AluEnum.getWidth.W))
        case "srl" | "srli"   => BitPat(AluEnum.ALU_SRL.litValue.U(AluEnum.getWidth.W))
        case "sra" | "srai"   => BitPat(AluEnum.ALU_SRA.litValue.U(AluEnum.getWidth.W))
        case "sub"            => BitPat(AluEnum.ALU_SUB.litValue.U(AluEnum.getWidth.W))
        case _                => BitPat(AluEnum.ALU_XXX.litValue.U(AluEnum.getWidth.W))
      }
    }
  }
}

object BrType extends DecodeField[Insn, BrTypeEnum.Type] {
  override def name = "BrType"

  override def chiselType = BrTypeEnum()

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "beq"  => BitPat(BrTypeEnum.BR_EQ.litValue.U(BrTypeEnum.getWidth.W))
    case "bne"  => BitPat(BrTypeEnum.BR_NE.litValue.U(BrTypeEnum.getWidth.W))
    case "blt"  => BitPat(BrTypeEnum.BR_LT.litValue.U(BrTypeEnum.getWidth.W))
    case "bge"  => BitPat(BrTypeEnum.BR_GE.litValue.U(BrTypeEnum.getWidth.W))
    case "bltu" => BitPat(BrTypeEnum.BR_LTU.litValue.U(BrTypeEnum.getWidth.W))
    case "bgeu" => BitPat(BrTypeEnum.BR_GEU.litValue.U(BrTypeEnum.getWidth.W))
    case _      => BitPat(BrTypeEnum.BR_XXX.litValue.U(BrTypeEnum.getWidth.W))
  }
}

object StType extends DecodeField[Insn, StTypeEnum.Type] {
  override def name = "StType"

  override def chiselType = StTypeEnum()

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "sb" => BitPat(StTypeEnum.ST_SB.litValue.U(StTypeEnum.getWidth.W))
    case "sh" => BitPat(StTypeEnum.ST_SH.litValue.U(StTypeEnum.getWidth.W))
    case "sw" => BitPat(StTypeEnum.ST_SW.litValue.U(StTypeEnum.getWidth.W))
    case _    => BitPat(StTypeEnum.ST_XXX.litValue.U(StTypeEnum.getWidth.W))
  }
}

object LdType extends DecodeField[Insn, LdTypeEnum.Type] {
  override def name = "LdType"

  override def chiselType = LdTypeEnum()

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "lb"  => BitPat(LdTypeEnum.LD_LB.litValue.U(LdTypeEnum.getWidth.W))
    case "lh"  => BitPat(LdTypeEnum.LD_LH.litValue.U(LdTypeEnum.getWidth.W))
    case "lw"  => BitPat(LdTypeEnum.LD_LW.litValue.U(LdTypeEnum.getWidth.W))
    case "lbu" => BitPat(LdTypeEnum.LD_LBU.litValue.U(LdTypeEnum.getWidth.W))
    case "lhu" => BitPat(LdTypeEnum.LD_LHU.litValue.U(LdTypeEnum.getWidth.W))
    case _     => BitPat(LdTypeEnum.LD_XXX.litValue.U(LdTypeEnum.getWidth.W))
  }
}

object WBSel extends DecodeField[Insn, WbSelEnum.Type] {
  override def name = "WBSel"

  override def chiselType = WbSelEnum()

  override def genTable(i: Insn): BitPat = {
    val loadInstructions = Set("lb", "lh", "lw", "lbu", "lhu")
    val jumpInstructions = Set("jal", "jalr")
    val aluInstructions  = Set("addi", "slti", "sltiu", "xori", "ori", "andi")
    val sliInstructions  = Set("slli", "srli", "srai")

    if (
      Utils.isS(i.inst) || Utils.isR(i.inst) || Utils.isB(i.inst) || Utils
        .isU(i.inst) || sliInstructions
        .contains(i.inst.name) || aluInstructions.contains(i.inst.name) || i.inst.name == "fence"
    ) {
      BitPat(WbSelEnum.WB_ALU.litValue.U(WbSelEnum.getWidth.W))
    } else if (loadInstructions.contains(i.inst.name)) {
      BitPat(WbSelEnum.WB_MEM.litValue.U(WbSelEnum.getWidth.W))
    } else if (jumpInstructions.contains(i.inst.name)) {
      BitPat(WbSelEnum.WB_PC4.litValue.U(WbSelEnum.getWidth.W))
    } else {
      BitPat(WbSelEnum.WB_CSR.litValue.U(WbSelEnum.getWidth.W))
    }
  }
}

object MemRW extends BoolDecodeField[Insn] {
  override def name: String = "MemRW"

  override def genTable(i: Insn): BitPat = if (Utils.isS(i.inst)) y else n
}

object RegWEn extends BoolDecodeField[Insn] {
  override def name: String = "RegWEn"

  override def genTable(i: Insn): BitPat = if (!Utils.writeRd(i.inst) || i.inst.name == "fence") n else y
}

class DecodeIO(val xlen: Int) extends Bundle {
  val inst   = Input(UInt(xlen.W))
  val PCSel  = Output(PCSelEnum())
  val ASel   = Output(ASelEnum())
  val BSel   = Output(BSelEnum())
  val ImmSel = Output(ImmSelEnum())
  val ALUSel = Output(AluEnum())
  val BrType = Output(BrTypeEnum())
  val StType = Output(StTypeEnum())
  val LdType = Output(LdTypeEnum())
  val WBSel  = Output(WbSelEnum())
  val MemRW  = Output(Bool())
  val RegWEn = Output(Bool())
}

class Decode(val xlen: Int) extends Module {
  val io                 = IO(new DecodeIO(xlen))
  val inst               = io.inst
  val exceptInstructions = Set("slli_rv32", "srli_rv32", "srai_rv32", "scall", "sbreak", "fence.tso", "pause")

  val instTable  = rvdecoderdb.fromFile.instructions(os.pwd / "riscv-opcodes")
  val targetSets = Set("rv_i", "rv32_i")
  // add implemented instructions here
  val instList = instTable
    .filter(instr => targetSets.contains(instr.instructionSet.name))
    .filter(instr => !exceptInstructions.contains(instr.name))
    .map(Insn(_))
    .toSeq
  println(s"The length of mySeq is: ${instList.length}")
  val decodeTable =
    new DecodeTable(instList, Seq(PCSel, ASel, BSel, ImmSel, ALUSel, BrType, StType, LdType, WBSel, MemRW, RegWEn))

  val decodedBundle = decodeTable.decode(inst)

  io.PCSel  := decodedBundle(PCSel)
  io.ASel   := decodedBundle(ASel)
  io.BSel   := decodedBundle(BSel)
  io.ImmSel := decodedBundle(ImmSel)
  io.ALUSel := decodedBundle(ALUSel)
  io.BrType := decodedBundle(BrType)
  io.StType := decodedBundle(StType)
  io.LdType := decodedBundle(LdType)
  io.WBSel  := decodedBundle(WBSel)
  io.MemRW  := decodedBundle(MemRW)
  io.RegWEn := decodedBundle(RegWEn)
}
