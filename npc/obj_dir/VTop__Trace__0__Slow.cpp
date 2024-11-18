// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+287,"clock", false,-1);
    tracep->declBit(c+288,"reset", false,-1);
    tracep->declBit(c+289,"io_ebreak", false,-1);
    tracep->declBus(c+290,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+291,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+292,"io_debug_alu_op", false,-1, 3,0);
    tracep->declBus(c+293,"io_debug_alu_out", false,-1, 31,0);
    tracep->declBus(c+294,"io_debug_imm_sel", false,-1, 2,0);
    tracep->declArray(c+295,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+311,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+312,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+313,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+314,"io_debug_mstatus", false,-1, 31,0);
    tracep->declBit(c+315,"io_debug_Valid", false,-1);
    tracep->declBus(c+316,"io_debug_addr", false,-1, 31,0);
    tracep->declBus(c+317,"io_debug_wdata", false,-1, 31,0);
    tracep->declBit(c+318,"io_debug_wen", false,-1);
    tracep->declBus(c+319,"io_debug_rdata", false,-1, 31,0);
    tracep->declBus(c+320,"io_debug_csr_id", false,-1, 11,0);
    tracep->declBus(c+321,"io_debug_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+322,"io_debug_CSRWdata", false,-1, 31,0);
    tracep->declBus(c+323,"io_debug_next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+287,"clock", false,-1);
    tracep->declBit(c+288,"reset", false,-1);
    tracep->declBit(c+289,"io_ebreak", false,-1);
    tracep->declBus(c+290,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+291,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+292,"io_debug_alu_op", false,-1, 3,0);
    tracep->declBus(c+293,"io_debug_alu_out", false,-1, 31,0);
    tracep->declBus(c+294,"io_debug_imm_sel", false,-1, 2,0);
    tracep->declArray(c+295,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+311,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+312,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+313,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+314,"io_debug_mstatus", false,-1, 31,0);
    tracep->declBit(c+315,"io_debug_Valid", false,-1);
    tracep->declBus(c+293,"io_debug_addr", false,-1, 31,0);
    tracep->declBus(c+317,"io_debug_wdata", false,-1, 31,0);
    tracep->declBit(c+318,"io_debug_wen", false,-1);
    tracep->declBus(c+319,"io_debug_rdata", false,-1, 31,0);
    tracep->declBus(c+320,"io_debug_csr_id", false,-1, 11,0);
    tracep->declBus(c+321,"io_debug_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+322,"io_debug_CSRWdata", false,-1, 31,0);
    tracep->declBus(c+323,"io_debug_next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+287,"clock", false,-1);
    tracep->declBit(c+288,"reset", false,-1);
    tracep->declBus(c+290,"io_imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst", false,-1, 31,0);
    tracep->declBus(c+293,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+317,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+318,"io_dmem_wen", false,-1);
    tracep->declBit(c+315,"io_dmem_valid", false,-1);
    tracep->declBus(c+2,"io_dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+319,"io_dmem_rdata", false,-1, 31,0);
    tracep->declBit(c+289,"io_ebreak", false,-1);
    tracep->declBus(c+290,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+291,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+292,"io_debug_alu_op", false,-1, 3,0);
    tracep->declBus(c+293,"io_debug_alu_out", false,-1, 31,0);
    tracep->declBus(c+294,"io_debug_imm_sel", false,-1, 2,0);
    tracep->declArray(c+295,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+311,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+312,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+313,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+314,"io_debug_mstatus", false,-1, 31,0);
    tracep->declBit(c+315,"io_debug_Valid", false,-1);
    tracep->declBus(c+293,"io_debug_addr", false,-1, 31,0);
    tracep->declBus(c+317,"io_debug_wdata", false,-1, 31,0);
    tracep->declBit(c+318,"io_debug_wen", false,-1);
    tracep->declBus(c+319,"io_debug_rdata", false,-1, 31,0);
    tracep->declBus(c+320,"io_debug_csr_id", false,-1, 11,0);
    tracep->declBus(c+321,"io_debug_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+322,"io_debug_CSRWdata", false,-1, 31,0);
    tracep->declBus(c+323,"io_debug_next_pc", false,-1, 31,0);
    tracep->declBus(c+2,"io_dmem_wmask_0", false,-1, 3,0);
    tracep->declBus(c+314,"io_debug_mstatus_0", false,-1, 31,0);
    tracep->declBus(c+313,"io_debug_mcause_0", false,-1, 31,0);
    tracep->declArray(c+295,"io_debug_gpr_0", false,-1, 511,0);
    tracep->declBit(c+289,"io_ebreak_0", false,-1);
    tracep->declBit(c+318,"io_dmem_wen_0", false,-1);
    tracep->declBus(c+317,"io_dmem_wdata_0", false,-1, 31,0);
    tracep->declBus(c+293,"io_dmem_addr_0", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst_0", false,-1, 31,0);
    tracep->declBus(c+319,"io_dmem_rdata_0", false,-1, 31,0);
    tracep->declBus(c+293,"io_debug_addr_0", false,-1, 31,0);
    tracep->declBus(c+317,"io_debug_wdata_0", false,-1, 31,0);
    tracep->declBit(c+318,"io_debug_wen_0", false,-1);
    tracep->declBus(c+319,"io_debug_rdata_0", false,-1, 31,0);
    tracep->declBus(c+322,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+323,"next_pc", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+290,"io_imem_addr_0", false,-1, 31,0);
    tracep->declBus(c+290,"io_debug_pc_0", false,-1, 31,0);
    tracep->declBus(c+4,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+324,"pc_csr", false,-1, 31,0);
    tracep->declBus(c+323,"io_debug_next_pc_0", false,-1, 31,0);
    tracep->declBus(c+320,"io_debug_csr_id_0", false,-1, 11,0);
    tracep->declBus(c+322,"io_debug_CSRWdata_0", false,-1, 31,0);
    tracep->declBus(c+293,"io_debug_alu_out_0", false,-1, 31,0);
    tracep->declBit(c+315,"io_dmem_valid_0", false,-1);
    tracep->declBus(c+291,"io_debug_PCSel_0", false,-1, 1,0);
    tracep->declBus(c+292,"io_debug_alu_op_0", false,-1, 3,0);
    tracep->declBus(c+294,"io_debug_imm_sel_0", false,-1, 2,0);
    tracep->declBit(c+315,"io_debug_Valid_0", false,-1);
    tracep->declBus(c+321,"io_debug_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+311,"io_debug_mtvec_0", false,-1, 31,0);
    tracep->declBus(c+312,"io_debug_mepc_0", false,-1, 31,0);
    tracep->pushNamePrefix("AluInstance ");
    tracep->declBus(c+5,"io_A", false,-1, 31,0);
    tracep->declBus(c+6,"io_B", false,-1, 31,0);
    tracep->declBus(c+292,"io_alu_op", false,-1, 3,0);
    tracep->declBus(c+293,"io_out", false,-1, 31,0);
    tracep->declBus(c+5,"io_A_0", false,-1, 31,0);
    tracep->declBus(c+6,"io_B_0", false,-1, 31,0);
    tracep->declBus(c+292,"io_alu_op_0", false,-1, 3,0);
    tracep->declBus(c+7,"shamt", false,-1, 4,0);
    tracep->declBus(c+293,"io_out_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRInstance ");
    tracep->declBit(c+287,"clock", false,-1);
    tracep->declBus(c+320,"io_addr", false,-1, 11,0);
    tracep->declBus(c+321,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+322,"io_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"io_rdata", false,-1, 31,0);
    tracep->declBus(c+311,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+312,"io_mepc", false,-1, 31,0);
    tracep->declBus(c+313,"io_mcause", false,-1, 31,0);
    tracep->declBus(c+314,"io_mstatus", false,-1, 31,0);
    tracep->declBus(c+313,"io_mcause_0", false,-1, 31,0);
    tracep->declBus(c+312,"io_mepc_0", false,-1, 31,0);
    tracep->declBus(c+311,"io_mtvec_0", false,-1, 31,0);
    tracep->declBus(c+8,"io_rdata_0", false,-1, 31,0);
    tracep->declBus(c+320,"io_addr_0", false,-1, 11,0);
    tracep->declBus(c+321,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+322,"io_wdata_0", false,-1, 31,0);
    tracep->declQuad(c+9,"ecall_mstatus", false,-1, 35,0);
    tracep->declBus(c+11,"mret_mstatus", false,-1, 31,0);
    tracep->declBus(c+314,"io_mstatus_0", false,-1, 31,0);
    tracep->pushNamePrefix("csrs_ext ");
    tracep->declBus(c+320,"R0_addr", false,-1, 11,0);
    tracep->declBit(c+339,"R0_en", false,-1);
    tracep->declBit(c+287,"R0_clk", false,-1);
    tracep->declBus(c+8,"R0_data", false,-1, 31,0);
    tracep->declBus(c+340,"R1_addr", false,-1, 11,0);
    tracep->declBit(c+339,"R1_en", false,-1);
    tracep->declBit(c+287,"R1_clk", false,-1);
    tracep->declBus(c+311,"R1_data", false,-1, 31,0);
    tracep->declBus(c+341,"R2_addr", false,-1, 11,0);
    tracep->declBit(c+339,"R2_en", false,-1);
    tracep->declBit(c+287,"R2_clk", false,-1);
    tracep->declBus(c+312,"R2_data", false,-1, 31,0);
    tracep->declBus(c+342,"R3_addr", false,-1, 11,0);
    tracep->declBit(c+339,"R3_en", false,-1);
    tracep->declBit(c+287,"R3_clk", false,-1);
    tracep->declBus(c+313,"R3_data", false,-1, 31,0);
    tracep->declBus(c+343,"R4_addr", false,-1, 11,0);
    tracep->declBit(c+339,"R4_en", false,-1);
    tracep->declBit(c+287,"R4_clk", false,-1);
    tracep->declBus(c+314,"R4_data", false,-1, 31,0);
    tracep->declBus(c+320,"R5_addr", false,-1, 11,0);
    tracep->declBit(c+12,"R5_en", false,-1);
    tracep->declBit(c+287,"R5_clk", false,-1);
    tracep->declBus(c+13,"R5_data", false,-1, 31,0);
    tracep->declBus(c+320,"R6_addr", false,-1, 11,0);
    tracep->declBit(c+14,"R6_en", false,-1);
    tracep->declBit(c+287,"R6_clk", false,-1);
    tracep->declBus(c+15,"R6_data", false,-1, 31,0);
    tracep->declBus(c+320,"R7_addr", false,-1, 11,0);
    tracep->declBit(c+16,"R7_en", false,-1);
    tracep->declBit(c+287,"R7_clk", false,-1);
    tracep->declBus(c+17,"R7_data", false,-1, 31,0);
    tracep->declBus(c+320,"R8_addr", false,-1, 11,0);
    tracep->declBit(c+18,"R8_en", false,-1);
    tracep->declBit(c+287,"R8_clk", false,-1);
    tracep->declBus(c+19,"R8_data", false,-1, 31,0);
    tracep->declBus(c+320,"R9_addr", false,-1, 11,0);
    tracep->declBit(c+20,"R9_en", false,-1);
    tracep->declBit(c+287,"R9_clk", false,-1);
    tracep->declBus(c+21,"R9_data", false,-1, 31,0);
    tracep->declBus(c+320,"W0_addr", false,-1, 11,0);
    tracep->declBit(c+20,"W0_en", false,-1);
    tracep->declBit(c+287,"W0_clk", false,-1);
    tracep->declBus(c+325,"W0_data", false,-1, 31,0);
    tracep->declBus(c+320,"W1_addr", false,-1, 11,0);
    tracep->declBit(c+12,"W1_en", false,-1);
    tracep->declBit(c+287,"W1_clk", false,-1);
    tracep->declBus(c+326,"W1_data", false,-1, 31,0);
    tracep->declBus(c+320,"W2_addr", false,-1, 11,0);
    tracep->declBit(c+327,"W2_en", false,-1);
    tracep->declBit(c+287,"W2_clk", false,-1);
    tracep->declBus(c+322,"W2_data", false,-1, 31,0);
    tracep->declBus(c+320,"W3_addr", false,-1, 11,0);
    tracep->declBit(c+328,"W3_en", false,-1);
    tracep->declBit(c+287,"W3_clk", false,-1);
    tracep->declBus(c+329,"W3_data", false,-1, 31,0);
    tracep->declBus(c+320,"W4_addr", false,-1, 11,0);
    tracep->declBit(c+14,"W4_en", false,-1);
    tracep->declBit(c+287,"W4_clk", false,-1);
    tracep->declBus(c+330,"W4_data", false,-1, 31,0);
    tracep->declBus(c+320,"W5_addr", false,-1, 11,0);
    tracep->declBit(c+18,"W5_en", false,-1);
    tracep->declBit(c+287,"W5_clk", false,-1);
    tracep->declBus(c+19,"W5_data", false,-1, 31,0);
    tracep->declBus(c+343,"W6_addr", false,-1, 11,0);
    tracep->declBit(c+331,"W6_en", false,-1);
    tracep->declBit(c+287,"W6_clk", false,-1);
    tracep->declBus(c+11,"W6_data", false,-1, 31,0);
    tracep->declBus(c+343,"W7_addr", false,-1, 11,0);
    tracep->declBit(c+22,"W7_en", false,-1);
    tracep->declBit(c+287,"W7_clk", false,-1);
    tracep->declBus(c+23,"W7_data", false,-1, 31,0);
    tracep->declBus(c+342,"W8_addr", false,-1, 11,0);
    tracep->declBit(c+22,"W8_en", false,-1);
    tracep->declBit(c+287,"W8_clk", false,-1);
    tracep->declBus(c+344,"W8_data", false,-1, 31,0);
    tracep->declBus(c+341,"W9_addr", false,-1, 11,0);
    tracep->declBit(c+22,"W9_en", false,-1);
    tracep->declBit(c+287,"W9_clk", false,-1);
    tracep->declBus(c+322,"W9_data", false,-1, 31,0);
    tracep->declBus(c+320,"W10_addr", false,-1, 11,0);
    tracep->declBit(c+16,"W10_en", false,-1);
    tracep->declBit(c+287,"W10_clk", false,-1);
    tracep->declBus(c+332,"W10_data", false,-1, 31,0);
    tracep->declBus(c+343,"W11_addr", false,-1, 11,0);
    tracep->declBit(c+339,"W11_en", false,-1);
    tracep->declBit(c+287,"W11_clk", false,-1);
    tracep->declBus(c+345,"W11_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CUInstance ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBit(c+24,"io_compare", false,-1);
    tracep->declBus(c+291,"io_PCSel", false,-1, 1,0);
    tracep->declBus(c+25,"io_ASel", false,-1, 1,0);
    tracep->declBus(c+26,"io_BSel", false,-1, 1,0);
    tracep->declBus(c+294,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+292,"io_ALUSel", false,-1, 3,0);
    tracep->declBus(c+27,"io_BrType", false,-1, 2,0);
    tracep->declBus(c+321,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+28,"io_StType", false,-1, 1,0);
    tracep->declBus(c+29,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+30,"io_WbSel", false,-1, 1,0);
    tracep->declBit(c+318,"io_MemRW", false,-1);
    tracep->declBit(c+31,"io_WbEn", false,-1);
    tracep->declBit(c+315,"io_Valid", false,-1);
    tracep->declBit(c+289,"io_Ebreak", false,-1);
    tracep->declBit(c+289,"io_Ebreak_0", false,-1);
    tracep->declBit(c+315,"io_Valid_0", false,-1);
    tracep->declBit(c+31,"io_WbEn_0", false,-1);
    tracep->declBit(c+318,"io_MemRW_0", false,-1);
    tracep->declBus(c+30,"io_WbSel_0", false,-1, 1,0);
    tracep->declBus(c+29,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+28,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+321,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+292,"io_ALUSel_0", false,-1, 3,0);
    tracep->declBus(c+294,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+26,"io_BSel_0", false,-1, 1,0);
    tracep->declBus(c+25,"io_ASel_0", false,-1, 1,0);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBit(c+24,"io_compare_0", false,-1);
    tracep->declBus(c+291,"io_PCSel_0", false,-1, 1,0);
    tracep->declBus(c+27,"io_BrType_0", false,-1, 2,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+32,"io_PCSel", false,-1, 1,0);
    tracep->declBus(c+25,"io_ASel", false,-1, 1,0);
    tracep->declBus(c+26,"io_BSel", false,-1, 1,0);
    tracep->declBus(c+294,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+292,"io_ALUSel", false,-1, 3,0);
    tracep->declBus(c+27,"io_BrType", false,-1, 2,0);
    tracep->declBus(c+321,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+28,"io_StType", false,-1, 1,0);
    tracep->declBus(c+29,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+30,"io_WbSel", false,-1, 1,0);
    tracep->declBit(c+318,"io_MemRW", false,-1);
    tracep->declBit(c+31,"io_WbEn", false,-1);
    tracep->declBit(c+315,"io_Valid", false,-1);
    tracep->declBit(c+289,"io_Ebreak", false,-1);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBus(c+1,"decodedBundle_plaInput", false,-1, 31,0);
    tracep->declBus(c+32,"decodedBundle_PCSel", false,-1, 1,0);
    tracep->declBus(c+25,"decodedBundle_ASel", false,-1, 1,0);
    tracep->declBus(c+26,"decodedBundle_BSel", false,-1, 1,0);
    tracep->declBus(c+294,"decodedBundle_ImmSel", false,-1, 2,0);
    tracep->declBus(c+292,"decodedBundle_ALUSel", false,-1, 3,0);
    tracep->declBus(c+27,"decodedBundle_BrType", false,-1, 2,0);
    tracep->declBus(c+321,"decodedBundle_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+28,"decodedBundle_StType", false,-1, 1,0);
    tracep->declBus(c+29,"decodedBundle_LdType", false,-1, 2,0);
    tracep->declBus(c+30,"decodedBundle_WbSel", false,-1, 1,0);
    tracep->declBit(c+318,"decodedBundle_MemRW", false,-1);
    tracep->declBit(c+31,"decodedBundle_WbEn", false,-1);
    tracep->declBit(c+315,"decodedBundle_Valid", false,-1);
    tracep->declBit(c+289,"decodedBundle_Ebreak", false,-1);
    tracep->declBus(c+33,"decodedBundle_invInputs", false,-1, 31,0);
    tracep->declBus(c+34,"decodedBundle_invMatrixOutputs", false,-1, 29,0);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_4", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_10", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_12", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_13", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_14", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_16", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_17", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_18", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_21", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_22", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_24", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_26", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_28", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_29", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_32", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_0_33", false,-1);
    tracep->declBit(c+36,"decodedBundle_andMatrixOutputs_andMatrixInput_1", false,-1);
    tracep->declBit(c+36,"decodedBundle_andMatrixOutputs_andMatrixInput_1_1", false,-1);
    tracep->declBit(c+36,"decodedBundle_andMatrixOutputs_andMatrixInput_0_2", false,-1);
    tracep->declBit(c+36,"decodedBundle_andMatrixOutputs_andMatrixInput_1_3", false,-1);
    tracep->declBit(c+36,"decodedBundle_andMatrixOutputs_andMatrixInput_1_6", false,-1);
    tracep->declBit(c+36,"decodedBundle_andMatrixOutputs_andMatrixInput_1_24", false,-1);
    tracep->declBit(c+37,"decodedBundle_andMatrixOutputs_17_2", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_0_1", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_0_3", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_2_4", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_0_8", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_0_9", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_1_11", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_1_12", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_1_13", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_1_17", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_1_21", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_0_25", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_andMatrixInput_1_27", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_2", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_3_2", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_3_5", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_3_7", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_2_12", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_3_14", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_2_20", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_2_26", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_2_27", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_2_28", false,-1);
    tracep->declBus(c+40,"decodedBundle_andMatrixOutputs_hi", false,-1, 1,0);
    tracep->declBit(c+41,"decodedBundle_andMatrixOutputs_22_2", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_1_2", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_2_2", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_1_4", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_3_3", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_4", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_3_8", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_2_13", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_3_12", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_4_6", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_3_19", false,-1);
    tracep->declBit(c+42,"decodedBundle_andMatrixOutputs_andMatrixInput_3_22", false,-1);
    tracep->declBit(c+43,"decodedBundle_andMatrixOutputs_andMatrixInput_2_1", false,-1);
    tracep->declBit(c+43,"decodedBundle_andMatrixOutputs_andMatrixInput_3", false,-1);
    tracep->declBit(c+43,"decodedBundle_andMatrixOutputs_andMatrixInput_2_3", false,-1);
    tracep->declBit(c+43,"decodedBundle_andMatrixOutputs_andMatrixInput_3_6", false,-1);
    tracep->declBit(c+43,"decodedBundle_andMatrixOutputs_andMatrixInput_4_1", false,-1);
    tracep->declBit(c+43,"decodedBundle_andMatrixOutputs_andMatrixInput_4_3", false,-1);
    tracep->declBit(c+43,"decodedBundle_andMatrixOutputs_andMatrixInput_4_4", false,-1);
    tracep->declBus(c+44,"decodedBundle_andMatrixOutputs_hi_1", false,-1, 1,0);
    tracep->declBit(c+45,"decodedBundle_andMatrixOutputs_25_2", false,-1);
    tracep->declBus(c+46,"decodedBundle_andMatrixOutputs_lo", false,-1, 1,0);
    tracep->declBus(c+40,"decodedBundle_andMatrixOutputs_hi_2", false,-1, 1,0);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_10_2", false,-1);
    tracep->declBit(c+48,"decodedBundle_andMatrixOutputs_andMatrixInput_3_1", false,-1);
    tracep->declBit(c+48,"decodedBundle_andMatrixOutputs_andMatrixInput_3_9", false,-1);
    tracep->declBus(c+49,"decodedBundle_andMatrixOutputs_lo_1", false,-1, 1,0);
    tracep->declBus(c+50,"decodedBundle_andMatrixOutputs_hi_3", false,-1, 1,0);
    tracep->declBit(c+51,"decodedBundle_andMatrixOutputs_12_2", false,-1);
    tracep->declBit(c+52,"decodedBundle_andMatrixOutputs_andMatrixInput_0_5", false,-1);
    tracep->declBit(c+52,"decodedBundle_andMatrixOutputs_andMatrixInput_0_6", false,-1);
    tracep->declBit(c+52,"decodedBundle_andMatrixOutputs_andMatrixInput_0_11", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_1_5", false,-1);
    tracep->declBus(c+54,"decodedBundle_andMatrixOutputs_hi_4", false,-1, 1,0);
    tracep->declBit(c+55,"decodedBundle_andMatrixOutputs_18_2", false,-1);
    tracep->declBit(c+56,"decodedBundle_andMatrixOutputs_13_2", false,-1);
    tracep->declBit(c+57,"decodedBundle_andMatrixOutputs_andMatrixInput_0_7", false,-1);
    tracep->declBit(c+57,"decodedBundle_andMatrixOutputs_11_2", false,-1);
    tracep->declBit(c+58,"decodedBundle_andMatrixOutputs_andMatrixInput_1_7", false,-1);
    tracep->declBit(c+58,"decodedBundle_andMatrixOutputs_andMatrixInput_1_8", false,-1);
    tracep->declBit(c+58,"decodedBundle_andMatrixOutputs_andMatrixInput_2_7", false,-1);
    tracep->declBit(c+58,"decodedBundle_andMatrixOutputs_andMatrixInput_2_8", false,-1);
    tracep->declBit(c+58,"decodedBundle_andMatrixOutputs_andMatrixInput_2_25", false,-1);
    tracep->declBit(c+58,"decodedBundle_andMatrixOutputs_andMatrixInput_2_29", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_2_5", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_2_6", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_3_4", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_2_14", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_2_18", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_1_23", false,-1);
    tracep->declBus(c+60,"decodedBundle_andMatrixOutputs_lo_2", false,-1, 1,0);
    tracep->declBus(c+61,"decodedBundle_andMatrixOutputs_hi_5", false,-1, 1,0);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_9_2", false,-1);
    tracep->declBus(c+63,"decodedBundle_andMatrixOutputs_lo_3", false,-1, 1,0);
    tracep->declBus(c+61,"decodedBundle_andMatrixOutputs_hi_6", false,-1, 1,0);
    tracep->declBit(c+64,"decodedBundle_andMatrixOutputs_26_2", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_1_9", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_1_10", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_0_15", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_1_16", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_0_19", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_0_20", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_1_20", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_0_23", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_1_25", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_0_27", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_1_28", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_0_30", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_0_31", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_1_31", false,-1);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_andMatrixInput_1_32", false,-1);
    tracep->declBus(c+66,"decodedBundle_andMatrixOutputs_lo_4", false,-1, 1,0);
    tracep->declBus(c+67,"decodedBundle_andMatrixOutputs_hi_7", false,-1, 1,0);
    tracep->declBit(c+68,"decodedBundle_andMatrixOutputs_0_2", false,-1);
    tracep->declBus(c+69,"decodedBundle_andMatrixOutputs_hi_8", false,-1, 1,0);
    tracep->declBit(c+70,"decodedBundle_andMatrixOutputs_4_2", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_2_9", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_2_10", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_2_11", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_1_14", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_2_15", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_1_18", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_1_19", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_2_19", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_1_22", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_1_26", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_1_29", false,-1);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_andMatrixInput_1_30", false,-1);
    tracep->declBus(c+72,"decodedBundle_andMatrixOutputs_lo_5", false,-1, 1,0);
    tracep->declBus(c+73,"decodedBundle_andMatrixOutputs_hi_hi", false,-1, 1,0);
    tracep->declBus(c+74,"decodedBundle_andMatrixOutputs_hi_9", false,-1, 2,0);
    tracep->declBit(c+75,"decodedBundle_andMatrixOutputs_33_2", false,-1);
    tracep->declBus(c+76,"decodedBundle_andMatrixOutputs_lo_6", false,-1, 1,0);
    tracep->declBus(c+73,"decodedBundle_andMatrixOutputs_hi_10", false,-1, 1,0);
    tracep->declBit(c+77,"decodedBundle_andMatrixOutputs_20_2", false,-1);
    tracep->declBus(c+78,"decodedBundle_andMatrixOutputs_lo_7", false,-1, 1,0);
    tracep->declBus(c+73,"decodedBundle_andMatrixOutputs_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+74,"decodedBundle_andMatrixOutputs_hi_11", false,-1, 2,0);
    tracep->declBit(c+79,"decodedBundle_andMatrixOutputs_23_2", false,-1);
    tracep->declBit(c+80,"decodedBundle_andMatrixOutputs_andMatrixInput_4_2", false,-1);
    tracep->declBus(c+81,"decodedBundle_andMatrixOutputs_lo_8", false,-1, 1,0);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_hi_hi_2", false,-1, 1,0);
    tracep->declBus(c+83,"decodedBundle_andMatrixOutputs_hi_12", false,-1, 2,0);
    tracep->declBit(c+84,"decodedBundle_andMatrixOutputs_14_2", false,-1);
    tracep->declBit(c+85,"decodedBundle_andMatrixOutputs_andMatrixInput_1_15", false,-1);
    tracep->declBit(c+85,"decodedBundle_andMatrixOutputs_andMatrixInput_3_10", false,-1);
    tracep->declBit(c+85,"decodedBundle_andMatrixOutputs_andMatrixInput_3_11", false,-1);
    tracep->declBit(c+85,"decodedBundle_andMatrixOutputs_andMatrixInput_2_16", false,-1);
    tracep->declBit(c+85,"decodedBundle_andMatrixOutputs_andMatrixInput_2_17", false,-1);
    tracep->declBit(c+85,"decodedBundle_andMatrixOutputs_andMatrixInput_2_21", false,-1);
    tracep->declBit(c+85,"decodedBundle_andMatrixOutputs_andMatrixInput_3_17", false,-1);
    tracep->declBit(c+85,"decodedBundle_andMatrixOutputs_andMatrixInput_2_30", false,-1);
    tracep->declBus(c+86,"decodedBundle_andMatrixOutputs_lo_9", false,-1, 1,0);
    tracep->declBus(c+87,"decodedBundle_andMatrixOutputs_hi_13", false,-1, 1,0);
    tracep->declBit(c+88,"decodedBundle_andMatrixOutputs_21_2", false,-1);
    tracep->declBus(c+89,"decodedBundle_andMatrixOutputs_lo_10", false,-1, 1,0);
    tracep->declBus(c+67,"decodedBundle_andMatrixOutputs_hi_hi_3", false,-1, 1,0);
    tracep->declBus(c+90,"decodedBundle_andMatrixOutputs_hi_14", false,-1, 2,0);
    tracep->declBit(c+91,"decodedBundle_andMatrixOutputs_31_2", false,-1);
    tracep->declBus(c+92,"decodedBundle_andMatrixOutputs_lo_11", false,-1, 1,0);
    tracep->declBus(c+73,"decodedBundle_andMatrixOutputs_hi_15", false,-1, 1,0);
    tracep->declBit(c+93,"decodedBundle_andMatrixOutputs_7_2", false,-1);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_hi_16", false,-1, 1,0);
    tracep->declBit(c+94,"decodedBundle_andMatrixOutputs_2_2", false,-1);
    tracep->declBus(c+95,"decodedBundle_andMatrixOutputs_lo_12", false,-1, 1,0);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_hi_17", false,-1, 1,0);
    tracep->declBit(c+96,"decodedBundle_andMatrixOutputs_3_2", false,-1);
    tracep->declBit(c+97,"decodedBundle_andMatrixOutputs_andMatrixInput_3_13", false,-1);
    tracep->declBit(c+97,"decodedBundle_andMatrixOutputs_andMatrixInput_4_5", false,-1);
    tracep->declBit(c+97,"decodedBundle_andMatrixOutputs_andMatrixInput_3_15", false,-1);
    tracep->declBit(c+97,"decodedBundle_andMatrixOutputs_andMatrixInput_3_16", false,-1);
    tracep->declBit(c+97,"decodedBundle_andMatrixOutputs_andMatrixInput_3_18", false,-1);
    tracep->declBus(c+98,"decodedBundle_andMatrixOutputs_lo_13", false,-1, 1,0);
    tracep->declBus(c+67,"decodedBundle_andMatrixOutputs_hi_hi_4", false,-1, 1,0);
    tracep->declBus(c+90,"decodedBundle_andMatrixOutputs_hi_18", false,-1, 2,0);
    tracep->declBit(c+99,"decodedBundle_andMatrixOutputs_8_2", false,-1);
    tracep->declBus(c+100,"decodedBundle_andMatrixOutputs_lo_14", false,-1, 1,0);
    tracep->declBus(c+73,"decodedBundle_andMatrixOutputs_hi_hi_5", false,-1, 1,0);
    tracep->declBus(c+74,"decodedBundle_andMatrixOutputs_hi_19", false,-1, 2,0);
    tracep->declBit(c+101,"decodedBundle_andMatrixOutputs_15_2", false,-1);
    tracep->declBus(c+100,"decodedBundle_andMatrixOutputs_lo_15", false,-1, 1,0);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_hi_20", false,-1, 1,0);
    tracep->declBit(c+102,"decodedBundle_andMatrixOutputs_1_2", false,-1);
    tracep->declBus(c+103,"decodedBundle_andMatrixOutputs_lo_16", false,-1, 1,0);
    tracep->declBus(c+104,"decodedBundle_andMatrixOutputs_hi_21", false,-1, 1,0);
    tracep->declBit(c+105,"decodedBundle_andMatrixOutputs_19_2", false,-1);
    tracep->declBit(c+106,"decodedBundle_andMatrixOutputs_andMatrixInput_2_22", false,-1);
    tracep->declBit(c+106,"decodedBundle_andMatrixOutputs_andMatrixInput_2_23", false,-1);
    tracep->declBit(c+106,"decodedBundle_andMatrixOutputs_andMatrixInput_2_24", false,-1);
    tracep->declBit(c+106,"decodedBundle_andMatrixOutputs_andMatrixInput_5", false,-1);
    tracep->declBit(c+106,"decodedBundle_andMatrixOutputs_andMatrixInput_4_7", false,-1);
    tracep->declBus(c+40,"decodedBundle_andMatrixOutputs_hi_22", false,-1, 1,0);
    tracep->declBit(c+107,"decodedBundle_andMatrixOutputs_27_2", false,-1);
    tracep->declBus(c+67,"decodedBundle_andMatrixOutputs_hi_23", false,-1, 1,0);
    tracep->declBit(c+108,"decodedBundle_andMatrixOutputs_6_2", false,-1);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_hi_24", false,-1, 1,0);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_32_2", false,-1);
    tracep->declBus(c+95,"decodedBundle_andMatrixOutputs_lo_hi", false,-1, 1,0);
    tracep->declBus(c+110,"decodedBundle_andMatrixOutputs_lo_17", false,-1, 2,0);
    tracep->declBus(c+73,"decodedBundle_andMatrixOutputs_hi_hi_6", false,-1, 1,0);
    tracep->declBus(c+111,"decodedBundle_andMatrixOutputs_hi_25", false,-1, 2,0);
    tracep->declBit(c+112,"decodedBundle_andMatrixOutputs_24_2", false,-1);
    tracep->declBus(c+113,"decodedBundle_andMatrixOutputs_lo_18", false,-1, 1,0);
    tracep->declBus(c+67,"decodedBundle_andMatrixOutputs_hi_hi_7", false,-1, 1,0);
    tracep->declBus(c+114,"decodedBundle_andMatrixOutputs_hi_26", false,-1, 2,0);
    tracep->declBit(c+115,"decodedBundle_andMatrixOutputs_28_2", false,-1);
    tracep->declBit(c+116,"decodedBundle_andMatrixOutputs_andMatrixInput_4_8", false,-1);
    tracep->declBus(c+117,"decodedBundle_andMatrixOutputs_lo_19", false,-1, 1,0);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_hi_hi_8", false,-1, 1,0);
    tracep->declBus(c+83,"decodedBundle_andMatrixOutputs_hi_27", false,-1, 2,0);
    tracep->declBit(c+289,"decodedBundle_andMatrixOutputs_16_2", false,-1);
    tracep->declBit(c+118,"decodedBundle_andMatrixOutputs_andMatrixInput_3_20", false,-1);
    tracep->declBus(c+119,"decodedBundle_andMatrixOutputs_lo_20", false,-1, 1,0);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_hi_28", false,-1, 1,0);
    tracep->declBit(c+120,"decodedBundle_andMatrixOutputs_29_2", false,-1);
    tracep->declBit(c+121,"decodedBundle_andMatrixOutputs_andMatrixInput_3_21", false,-1);
    tracep->declBit(c+121,"decodedBundle_andMatrixOutputs_andMatrixInput_4_9", false,-1);
    tracep->declBus(c+122,"decodedBundle_andMatrixOutputs_lo_21", false,-1, 1,0);
    tracep->declBus(c+67,"decodedBundle_andMatrixOutputs_hi_29", false,-1, 1,0);
    tracep->declBit(c+123,"decodedBundle_andMatrixOutputs_5_2", false,-1);
    tracep->declBus(c+124,"decodedBundle_andMatrixOutputs_lo_22", false,-1, 1,0);
    tracep->declBus(c+67,"decodedBundle_andMatrixOutputs_hi_hi_9", false,-1, 1,0);
    tracep->declBus(c+125,"decodedBundle_andMatrixOutputs_hi_30", false,-1, 2,0);
    tracep->declBit(c+126,"decodedBundle_andMatrixOutputs_30_2", false,-1);
    tracep->declBus(c+127,"decodedBundle_orMatrixOutputs_lo_lo", false,-1, 1,0);
    tracep->declBus(c+127,"decodedBundle_orMatrixOutputs_lo_11", false,-1, 1,0);
    tracep->declBus(c+127,"decodedBundle_orMatrixOutputs_lo_lo_3", false,-1, 1,0);
    tracep->declBus(c+128,"decodedBundle_orMatrixOutputs_lo_hi", false,-1, 1,0);
    tracep->declBus(c+129,"decodedBundle_orMatrixOutputs_lo", false,-1, 3,0);
    tracep->declBus(c+130,"decodedBundle_orMatrixOutputs_hi_lo", false,-1, 1,0);
    tracep->declBus(c+131,"decodedBundle_orMatrixOutputs_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+132,"decodedBundle_orMatrixOutputs_hi_hi", false,-1, 2,0);
    tracep->declBus(c+133,"decodedBundle_orMatrixOutputs_hi", false,-1, 4,0);
    tracep->declBus(c+134,"decodedBundle_orMatrixOutputs_hi_1", false,-1, 1,0);
    tracep->declBus(c+134,"decodedBundle_orMatrixOutputs_hi_14", false,-1, 1,0);
    tracep->declBus(c+135,"decodedBundle_orMatrixOutputs_lo_hi_1", false,-1, 1,0);
    tracep->declBus(c+136,"decodedBundle_orMatrixOutputs_lo_1", false,-1, 2,0);
    tracep->declBus(c+137,"decodedBundle_orMatrixOutputs_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+137,"decodedBundle_orMatrixOutputs_hi_lo_6", false,-1, 1,0);
    tracep->declBus(c+138,"decodedBundle_orMatrixOutputs_hi_2", false,-1, 2,0);
    tracep->declBus(c+139,"decodedBundle_orMatrixOutputs_lo_hi_2", false,-1, 1,0);
    tracep->declBus(c+140,"decodedBundle_orMatrixOutputs_lo_2", false,-1, 2,0);
    tracep->declBus(c+141,"decodedBundle_orMatrixOutputs_hi_lo_1", false,-1, 1,0);
    tracep->declBus(c+142,"decodedBundle_orMatrixOutputs_hi_hi_2", false,-1, 1,0);
    tracep->declBus(c+142,"decodedBundle_orMatrixOutputs_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+142,"decodedBundle_orMatrixOutputs_hi_hi_4", false,-1, 1,0);
    tracep->declBus(c+142,"decodedBundle_orMatrixOutputs_hi_hi_10", false,-1, 1,0);
    tracep->declBus(c+143,"decodedBundle_orMatrixOutputs_hi_3", false,-1, 3,0);
    tracep->declBus(c+144,"decodedBundle_orMatrixOutputs_lo_lo_1", false,-1, 1,0);
    tracep->declBus(c+145,"decodedBundle_orMatrixOutputs_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+146,"decodedBundle_orMatrixOutputs_lo_hi_3", false,-1, 2,0);
    tracep->declBus(c+147,"decodedBundle_orMatrixOutputs_lo_3", false,-1, 4,0);
    tracep->declBus(c+148,"decodedBundle_orMatrixOutputs_hi_lo_2", false,-1, 1,0);
    tracep->declBus(c+148,"decodedBundle_orMatrixOutputs_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+149,"decodedBundle_orMatrixOutputs_hi_hi_3", false,-1, 2,0);
    tracep->declBus(c+150,"decodedBundle_orMatrixOutputs_hi_4", false,-1, 4,0);
    tracep->declBus(c+151,"decodedBundle_orMatrixOutputs_lo_hi_4", false,-1, 1,0);
    tracep->declBus(c+152,"decodedBundle_orMatrixOutputs_lo_4", false,-1, 2,0);
    tracep->declBus(c+153,"decodedBundle_orMatrixOutputs_hi_lo_3", false,-1, 1,0);
    tracep->declBus(c+154,"decodedBundle_orMatrixOutputs_hi_5", false,-1, 3,0);
    tracep->declBus(c+155,"decodedBundle_orMatrixOutputs_lo_5", false,-1, 1,0);
    tracep->declBus(c+156,"decodedBundle_orMatrixOutputs_hi_hi_5", false,-1, 1,0);
    tracep->declBus(c+157,"decodedBundle_orMatrixOutputs_hi_6", false,-1, 2,0);
    tracep->declBus(c+158,"decodedBundle_orMatrixOutputs_lo_6", false,-1, 1,0);
    tracep->declBus(c+159,"decodedBundle_orMatrixOutputs_hi_hi_6", false,-1, 1,0);
    tracep->declBus(c+160,"decodedBundle_orMatrixOutputs_hi_7", false,-1, 2,0);
    tracep->declBus(c+161,"decodedBundle_orMatrixOutputs_lo_lo_lo", false,-1, 1,0);
    tracep->declBus(c+162,"decodedBundle_orMatrixOutputs_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+163,"decodedBundle_orMatrixOutputs_lo_lo_2", false,-1, 3,0);
    tracep->declBus(c+164,"decodedBundle_orMatrixOutputs_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+165,"decodedBundle_orMatrixOutputs_lo_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+166,"decodedBundle_orMatrixOutputs_lo_hi_hi_1", false,-1, 2,0);
    tracep->declBus(c+167,"decodedBundle_orMatrixOutputs_lo_hi_5", false,-1, 4,0);
    tracep->declBus(c+168,"decodedBundle_orMatrixOutputs_lo_7", false,-1, 8,0);
    tracep->declBus(c+169,"decodedBundle_orMatrixOutputs_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+170,"decodedBundle_orMatrixOutputs_hi_lo_4", false,-1, 3,0);
    tracep->declBus(c+171,"decodedBundle_orMatrixOutputs_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+172,"decodedBundle_orMatrixOutputs_hi_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+173,"decodedBundle_orMatrixOutputs_hi_hi_hi_2", false,-1, 2,0);
    tracep->declBus(c+174,"decodedBundle_orMatrixOutputs_hi_hi_7", false,-1, 4,0);
    tracep->declBus(c+175,"decodedBundle_orMatrixOutputs_hi_8", false,-1, 8,0);
    tracep->declBus(c+176,"decodedBundle_orMatrixOutputs_lo_hi_6", false,-1, 1,0);
    tracep->declBus(c+177,"decodedBundle_orMatrixOutputs_lo_8", false,-1, 2,0);
    tracep->declBus(c+178,"decodedBundle_orMatrixOutputs_hi_lo_5", false,-1, 1,0);
    tracep->declBus(c+179,"decodedBundle_orMatrixOutputs_hi_hi_8", false,-1, 1,0);
    tracep->declBus(c+179,"decodedBundle_orMatrixOutputs_hi_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+180,"decodedBundle_orMatrixOutputs_hi_9", false,-1, 3,0);
    tracep->declBus(c+181,"decodedBundle_orMatrixOutputs_lo_9", false,-1, 1,0);
    tracep->declBus(c+182,"decodedBundle_orMatrixOutputs_hi_10", false,-1, 1,0);
    tracep->declBus(c+183,"decodedBundle_orMatrixOutputs_hi_11", false,-1, 1,0);
    tracep->declBus(c+184,"decodedBundle_orMatrixOutputs_hi_12", false,-1, 1,0);
    tracep->declBus(c+185,"decodedBundle_orMatrixOutputs_lo_10", false,-1, 1,0);
    tracep->declBus(c+186,"decodedBundle_orMatrixOutputs_hi_hi_9", false,-1, 1,0);
    tracep->declBus(c+186,"decodedBundle_orMatrixOutputs_hi_hi_11", false,-1, 1,0);
    tracep->declBus(c+187,"decodedBundle_orMatrixOutputs_hi_13", false,-1, 2,0);
    tracep->declBus(c+188,"decodedBundle_orMatrixOutputs_lo_hi_7", false,-1, 1,0);
    tracep->declBus(c+189,"decodedBundle_orMatrixOutputs_lo_12", false,-1, 3,0);
    tracep->declBus(c+190,"decodedBundle_orMatrixOutputs_hi_15", false,-1, 3,0);
    tracep->declBus(c+191,"decodedBundle_orMatrixOutputs_lo_13", false,-1, 1,0);
    tracep->declBus(c+192,"decodedBundle_orMatrixOutputs_hi_16", false,-1, 2,0);
    tracep->declBus(c+193,"decodedBundle_orMatrixOutputs_lo_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+194,"decodedBundle_orMatrixOutputs_lo_lo_lo_1", false,-1, 2,0);
    tracep->declBus(c+195,"decodedBundle_orMatrixOutputs_lo_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+196,"decodedBundle_orMatrixOutputs_lo_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+197,"decodedBundle_orMatrixOutputs_lo_lo_hi_1", false,-1, 3,0);
    tracep->declBus(c+198,"decodedBundle_orMatrixOutputs_lo_lo_4", false,-1, 6,0);
    tracep->declBus(c+199,"decodedBundle_orMatrixOutputs_lo_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+200,"decodedBundle_orMatrixOutputs_lo_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+201,"decodedBundle_orMatrixOutputs_lo_hi_lo_1", false,-1, 3,0);
    tracep->declBus(c+202,"decodedBundle_orMatrixOutputs_lo_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+203,"decodedBundle_orMatrixOutputs_lo_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+204,"decodedBundle_orMatrixOutputs_lo_hi_hi_2", false,-1, 3,0);
    tracep->declBus(c+205,"decodedBundle_orMatrixOutputs_lo_hi_8", false,-1, 7,0);
    tracep->declBus(c+206,"decodedBundle_orMatrixOutputs_lo_14", false,-1, 14,0);
    tracep->declBus(c+28,"decodedBundle_orMatrixOutputs_hi_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+207,"decodedBundle_orMatrixOutputs_hi_lo_lo_1", false,-1, 2,0);
    tracep->declBus(c+208,"decodedBundle_orMatrixOutputs_hi_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+209,"decodedBundle_orMatrixOutputs_hi_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+210,"decodedBundle_orMatrixOutputs_hi_lo_hi_1", false,-1, 3,0);
    tracep->declBus(c+211,"decodedBundle_orMatrixOutputs_hi_lo_7", false,-1, 6,0);
    tracep->declBus(c+30,"decodedBundle_orMatrixOutputs_hi_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+212,"decodedBundle_orMatrixOutputs_hi_hi_lo_1", false,-1, 3,0);
    tracep->declBus(c+333,"decodedBundle_orMatrixOutputs_hi_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+334,"decodedBundle_orMatrixOutputs_hi_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+335,"decodedBundle_orMatrixOutputs_hi_hi_hi_3", false,-1, 3,0);
    tracep->declBus(c+336,"decodedBundle_orMatrixOutputs_hi_hi_12", false,-1, 7,0);
    tracep->declBus(c+213,"decodedBundle_orMatrixOutputs_hi_17", false,-1, 14,0);
    tracep->declBus(c+34,"decodedBundle_orMatrixOutputs", false,-1, 29,0);
    tracep->declBus(c+193,"decodedBundle_invMatrixOutputs_lo_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+194,"decodedBundle_invMatrixOutputs_lo_lo_lo", false,-1, 2,0);
    tracep->declBus(c+195,"decodedBundle_invMatrixOutputs_lo_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+196,"decodedBundle_invMatrixOutputs_lo_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+197,"decodedBundle_invMatrixOutputs_lo_lo_hi", false,-1, 3,0);
    tracep->declBus(c+198,"decodedBundle_invMatrixOutputs_lo_lo", false,-1, 6,0);
    tracep->declBus(c+199,"decodedBundle_invMatrixOutputs_lo_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+200,"decodedBundle_invMatrixOutputs_lo_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+201,"decodedBundle_invMatrixOutputs_lo_hi_lo", false,-1, 3,0);
    tracep->declBus(c+202,"decodedBundle_invMatrixOutputs_lo_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+203,"decodedBundle_invMatrixOutputs_lo_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+204,"decodedBundle_invMatrixOutputs_lo_hi_hi", false,-1, 3,0);
    tracep->declBus(c+205,"decodedBundle_invMatrixOutputs_lo_hi", false,-1, 7,0);
    tracep->declBus(c+206,"decodedBundle_invMatrixOutputs_lo", false,-1, 14,0);
    tracep->declBus(c+28,"decodedBundle_invMatrixOutputs_hi_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+207,"decodedBundle_invMatrixOutputs_hi_lo_lo", false,-1, 2,0);
    tracep->declBus(c+208,"decodedBundle_invMatrixOutputs_hi_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+209,"decodedBundle_invMatrixOutputs_hi_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+210,"decodedBundle_invMatrixOutputs_hi_lo_hi", false,-1, 3,0);
    tracep->declBus(c+211,"decodedBundle_invMatrixOutputs_hi_lo", false,-1, 6,0);
    tracep->declBus(c+179,"decodedBundle_invMatrixOutputs_hi_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+30,"decodedBundle_invMatrixOutputs_hi_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+212,"decodedBundle_invMatrixOutputs_hi_hi_lo", false,-1, 3,0);
    tracep->declBus(c+333,"decodedBundle_invMatrixOutputs_hi_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+334,"decodedBundle_invMatrixOutputs_hi_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+335,"decodedBundle_invMatrixOutputs_hi_hi_hi", false,-1, 3,0);
    tracep->declBus(c+336,"decodedBundle_invMatrixOutputs_hi_hi", false,-1, 7,0);
    tracep->declBus(c+213,"decodedBundle_invMatrixOutputs_hi", false,-1, 14,0);
    tracep->declBus(c+34,"decodedBundle_plaOutput", false,-1, 29,0);
    tracep->declBit(c+289,"io_Ebreak_0", false,-1);
    tracep->declBit(c+315,"io_Valid_0", false,-1);
    tracep->declBit(c+31,"io_WbEn_0", false,-1);
    tracep->declBit(c+318,"io_MemRW_0", false,-1);
    tracep->declBus(c+30,"io_WbSel_0", false,-1, 1,0);
    tracep->declBus(c+321,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+29,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+28,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+27,"io_BrType_0", false,-1, 2,0);
    tracep->declBus(c+292,"io_ALUSel_0", false,-1, 3,0);
    tracep->declBus(c+294,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+26,"io_BSel_0", false,-1, 1,0);
    tracep->declBus(c+25,"io_ASel_0", false,-1, 1,0);
    tracep->declBus(c+32,"io_PCSel_0", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CompareInstance ");
    tracep->declBus(c+214,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+317,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+27,"io_BrType", false,-1, 2,0);
    tracep->declBit(c+24,"io_result", false,-1);
    tracep->declBus(c+214,"io_rs1_0", false,-1, 31,0);
    tracep->declBus(c+317,"io_rs2_0", false,-1, 31,0);
    tracep->declBus(c+27,"io_BrType_0", false,-1, 2,0);
    tracep->declBit(c+24,"io_result_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ImmGenInstance ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+294,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+215,"io_out", false,-1, 31,0);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBus(c+294,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+216,"Iimm", false,-1, 31,0);
    tracep->declBus(c+217,"Simm_hi", false,-1, 26,0);
    tracep->declBus(c+218,"Simm", false,-1, 31,0);
    tracep->declBus(c+219,"Bimm_lo", false,-1, 4,0);
    tracep->declBus(c+220,"Bimm_hi_hi", false,-1, 20,0);
    tracep->declBus(c+221,"Bimm_hi", false,-1, 26,0);
    tracep->declBus(c+222,"Bimm", false,-1, 31,0);
    tracep->declBus(c+223,"Uimm", false,-1, 31,0);
    tracep->declBus(c+224,"Jimm_lo_hi", false,-1, 9,0);
    tracep->declBus(c+225,"Jimm_lo", false,-1, 10,0);
    tracep->declBus(c+226,"Jimm_hi_hi", false,-1, 19,0);
    tracep->declBus(c+227,"Jimm_hi", false,-1, 20,0);
    tracep->declBus(c+228,"Jimm", false,-1, 31,0);
    tracep->declBus(c+229,"Zimm", false,-1, 31,0);
    tracep->declBus(c+215,"io_out_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("JPCGenInstance ");
    tracep->declBus(c+293,"io_alu_data", false,-1, 31,0);
    tracep->declBus(c+337,"io_pc_alu", false,-1, 31,0);
    tracep->declBus(c+293,"io_alu_data_0", false,-1, 31,0);
    tracep->declBus(c+337,"io_pc_alu_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LdDataInstance ");
    tracep->declBus(c+29,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+319,"io_rdata", false,-1, 31,0);
    tracep->declBus(c+230,"io_wb_data", false,-1, 31,0);
    tracep->declBus(c+29,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+319,"io_rdata_0", false,-1, 31,0);
    tracep->declBus(c+230,"io_wb_data_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFileInstance ");
    tracep->declBit(c+287,"clock", false,-1);
    tracep->declBus(c+231,"io_raddr1", false,-1, 4,0);
    tracep->declBus(c+232,"io_raddr2", false,-1, 4,0);
    tracep->declBus(c+214,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+317,"io_rs2", false,-1, 31,0);
    tracep->declBit(c+31,"io_wen", false,-1);
    tracep->declBus(c+233,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+338,"io_wdata", false,-1, 31,0);
    tracep->declArray(c+295,"io_gpr", false,-1, 511,0);
    tracep->declBus(c+231,"io_raddr1_0", false,-1, 4,0);
    tracep->declBus(c+232,"io_raddr2_0", false,-1, 4,0);
    tracep->declBit(c+31,"io_wen_0", false,-1);
    tracep->declBus(c+233,"io_waddr_0", false,-1, 4,0);
    tracep->declBus(c+338,"io_wdata_0", false,-1, 31,0);
    tracep->declBus(c+214,"io_rs1_0", false,-1, 31,0);
    tracep->declBus(c+317,"io_rs2_0", false,-1, 31,0);
    tracep->declArray(c+295,"io_gpr_0", false,-1, 511,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+232,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R0_en", false,-1);
    tracep->declBit(c+287,"R0_clk", false,-1);
    tracep->declBus(c+234,"R0_data", false,-1, 31,0);
    tracep->declBus(c+231,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R1_en", false,-1);
    tracep->declBit(c+287,"R1_clk", false,-1);
    tracep->declBus(c+235,"R1_data", false,-1, 31,0);
    tracep->declBus(c+346,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R2_en", false,-1);
    tracep->declBit(c+287,"R2_clk", false,-1);
    tracep->declBus(c+236,"R2_data", false,-1, 31,0);
    tracep->declBus(c+347,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R3_en", false,-1);
    tracep->declBit(c+287,"R3_clk", false,-1);
    tracep->declBus(c+237,"R3_data", false,-1, 31,0);
    tracep->declBus(c+348,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R4_en", false,-1);
    tracep->declBit(c+287,"R4_clk", false,-1);
    tracep->declBus(c+238,"R4_data", false,-1, 31,0);
    tracep->declBus(c+349,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R5_en", false,-1);
    tracep->declBit(c+287,"R5_clk", false,-1);
    tracep->declBus(c+239,"R5_data", false,-1, 31,0);
    tracep->declBus(c+350,"R6_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R6_en", false,-1);
    tracep->declBit(c+287,"R6_clk", false,-1);
    tracep->declBus(c+240,"R6_data", false,-1, 31,0);
    tracep->declBus(c+351,"R7_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R7_en", false,-1);
    tracep->declBit(c+287,"R7_clk", false,-1);
    tracep->declBus(c+241,"R7_data", false,-1, 31,0);
    tracep->declBus(c+352,"R8_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R8_en", false,-1);
    tracep->declBit(c+287,"R8_clk", false,-1);
    tracep->declBus(c+242,"R8_data", false,-1, 31,0);
    tracep->declBus(c+353,"R9_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R9_en", false,-1);
    tracep->declBit(c+287,"R9_clk", false,-1);
    tracep->declBus(c+243,"R9_data", false,-1, 31,0);
    tracep->declBus(c+354,"R10_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R10_en", false,-1);
    tracep->declBit(c+287,"R10_clk", false,-1);
    tracep->declBus(c+244,"R10_data", false,-1, 31,0);
    tracep->declBus(c+355,"R11_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R11_en", false,-1);
    tracep->declBit(c+287,"R11_clk", false,-1);
    tracep->declBus(c+245,"R11_data", false,-1, 31,0);
    tracep->declBus(c+356,"R12_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R12_en", false,-1);
    tracep->declBit(c+287,"R12_clk", false,-1);
    tracep->declBus(c+246,"R12_data", false,-1, 31,0);
    tracep->declBus(c+357,"R13_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R13_en", false,-1);
    tracep->declBit(c+287,"R13_clk", false,-1);
    tracep->declBus(c+247,"R13_data", false,-1, 31,0);
    tracep->declBus(c+358,"R14_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R14_en", false,-1);
    tracep->declBit(c+287,"R14_clk", false,-1);
    tracep->declBus(c+248,"R14_data", false,-1, 31,0);
    tracep->declBus(c+359,"R15_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R15_en", false,-1);
    tracep->declBit(c+287,"R15_clk", false,-1);
    tracep->declBus(c+249,"R15_data", false,-1, 31,0);
    tracep->declBus(c+360,"R16_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R16_en", false,-1);
    tracep->declBit(c+287,"R16_clk", false,-1);
    tracep->declBus(c+250,"R16_data", false,-1, 31,0);
    tracep->declBus(c+361,"R17_addr", false,-1, 4,0);
    tracep->declBit(c+339,"R17_en", false,-1);
    tracep->declBit(c+287,"R17_clk", false,-1);
    tracep->declBus(c+251,"R17_data", false,-1, 31,0);
    tracep->declBus(c+233,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+252,"W0_en", false,-1);
    tracep->declBit(c+287,"W0_clk", false,-1);
    tracep->declBus(c+338,"W0_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+253+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WmaskGenInstance ");
    tracep->declBus(c+28,"io_StType", false,-1, 1,0);
    tracep->declBus(c+2,"io_wmask", false,-1, 3,0);
    tracep->declBus(c+28,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+2,"io_wmask_0", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory ");
    tracep->declBit(c+287,"clock", false,-1);
    tracep->declBus(c+290,"io_imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst", false,-1, 31,0);
    tracep->declBus(c+293,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+317,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+318,"io_dmem_wen", false,-1);
    tracep->declBit(c+315,"io_dmem_valid", false,-1);
    tracep->declBus(c+2,"io_dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+319,"io_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+319,"io_dmem_rdata_0", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst_0", false,-1, 31,0);
    tracep->declBus(c+290,"io_imem_addr_0", false,-1, 31,0);
    tracep->declBus(c+293,"io_dmem_addr_0", false,-1, 31,0);
    tracep->declBus(c+317,"io_dmem_wdata_0", false,-1, 31,0);
    tracep->declBit(c+318,"io_dmem_wen_0", false,-1);
    tracep->declBit(c+315,"io_dmem_valid_0", false,-1);
    tracep->declBus(c+2,"io_dmem_wmask_0", false,-1, 3,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+287,"clk", false,-1);
    tracep->declBus(c+290,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"imem_inst", false,-1, 31,0);
    tracep->declBit(c+315,"valid", false,-1);
    tracep->declBus(c+293,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+317,"dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+318,"dmem_wen", false,-1);
    tracep->declBus(c+2,"dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+319,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+285,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+286,"full_mask", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_h7720a331__0;
    VlWide<8>/*255:0*/ __Vtemp_h29950ca1__0;
    VlWide<4>/*127:0*/ __Vtemp_he6874d7e__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Top__DOT__memory__DOT__io_imem_inst_0),32);
    bufp->fullCData(oldp+2,(vlSelf->Top__DOT___core_io_dmem_wmask),4);
    bufp->fullIData(oldp+3,(vlSelf->Top__DOT__core__DOT__pc),32);
    bufp->fullIData(oldp+4,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc)),32);
    bufp->fullIData(oldp+5,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A),32);
    bufp->fullIData(oldp+6,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B),32);
    bufp->fullCData(oldp+7,((0x1fU & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B)),5);
    bufp->fullIData(oldp+8,(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata),32);
    bufp->fullQData(oldp+9,((QData)((IData)(((0x80U 
                                              & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                 [0x300U] 
                                                 << 4U)) 
                                             | (0xffffff7fU 
                                                & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                [0x300U]))))),36);
    bufp->fullIData(oldp+11,((0x80U | ((0xfffffff7U 
                                        & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                        [0x300U]) | 
                                       (8U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                              [0x300U] 
                                              >> 4U))))),32);
    bufp->fullBit(oldp+12,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6));
    bufp->fullIData(oldp+13,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                               ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                               : 0U)),32);
    bufp->fullBit(oldp+14,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2));
    bufp->fullIData(oldp+15,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                               ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                               : 0U)),32);
    bufp->fullBit(oldp+16,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1));
    bufp->fullIData(oldp+17,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                               ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                               : 0U)),32);
    bufp->fullBit(oldp+18,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11));
    bufp->fullIData(oldp+19,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11)
                               ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                               : 0U)),32);
    bufp->fullBit(oldp+20,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7));
    bufp->fullIData(oldp+21,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                               ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                               : 0U)),32);
    bufp->fullBit(oldp+22,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_9));
    bufp->fullIData(oldp+23,(((0x80U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                        [0x300U] << 4U)) 
                              | (0xffffff7fU & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                 [0x300U]))),32);
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                  >> (7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                            >> 0xdU))))));
    bufp->fullCData(oldp+25,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+26,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                                    >> 1U))),2);
    bufp->fullCData(oldp+27,((7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                    >> 0xdU))),3);
    bufp->fullCData(oldp+28,(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType),2);
    bufp->fullCData(oldp+29,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                               << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))),3);
    bufp->fullCData(oldp+30,(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0),2);
    bufp->fullBit(oldp+31,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0));
    bufp->fullCData(oldp+32,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel),2);
    bufp->fullIData(oldp+33,((~ vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)),32);
    bufp->fullIData(oldp+34,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs),30);
    bufp->fullBit(oldp+35,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 2U)))));
    bufp->fullBit(oldp+36,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 5U)))));
    bufp->fullBit(oldp+37,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2));
    bufp->fullBit(oldp+38,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 4U)))));
    bufp->fullBit(oldp+39,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xcU)))));
    bufp->fullCData(oldp+40,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi),2);
    bufp->fullBit(oldp+41,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2));
    bufp->fullBit(oldp+42,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+43,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xeU)))));
    bufp->fullCData(oldp+44,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 5U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+45,((IData)((0U == (0x6020U 
                                           & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
    bufp->fullCData(oldp+46,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0xeU))))),2);
    bufp->fullBit(oldp+47,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2));
    bufp->fullBit(oldp+48,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0x1eU)))));
    bufp->fullCData(oldp+49,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xeU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x1eU))))),2);
    bufp->fullCData(oldp+50,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 2U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+51,((IData)((0U == (0x40006004U 
                                           & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
    bufp->fullBit(oldp+52,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 2U))));
    bufp->fullBit(oldp+53,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 3U)))));
    bufp->fullCData(oldp+54,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 3U))))),2);
    bufp->fullBit(oldp+55,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2));
    bufp->fullBit(oldp+56,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2));
    bufp->fullBit(oldp+57,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 3U))));
    bufp->fullBit(oldp+58,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 5U))));
    bufp->fullBit(oldp+59,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 6U)))));
    bufp->fullCData(oldp+60,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 6U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xcU))))),2);
    bufp->fullCData(oldp+61,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5),2);
    bufp->fullBit(oldp+62,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2));
    bufp->fullCData(oldp+63,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 6U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+64,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2));
    bufp->fullBit(oldp+65,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 4U))));
    bufp->fullCData(oldp+66,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 4U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 6U))))),2);
    bufp->fullCData(oldp+67,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7),2);
    bufp->fullBit(oldp+68,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2));
    bufp->fullCData(oldp+69,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 1U)) | (1U 
                                                & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 4U)))),2);
    bufp->fullBit(oldp+70,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2));
    bufp->fullBit(oldp+71,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 6U))));
    bufp->fullCData(oldp+72,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xcU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0xdU))))),2);
    bufp->fullCData(oldp+73,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi),2);
    bufp->fullCData(oldp+74,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9),3);
    bufp->fullBit(oldp+75,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2));
    bufp->fullCData(oldp+76,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 5U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0xeU))))),2);
    bufp->fullBit(oldp+77,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                            & (IData)((0x40U == (0x4040U 
                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullCData(oldp+78,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xcU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0xeU))))),2);
    bufp->fullBit(oldp+79,(((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                            & (IData)((0U == (0x5000U 
                                              & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullBit(oldp+80,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0x14U)))));
    bufp->fullCData(oldp+81,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x14U))))),2);
    bufp->fullCData(oldp+82,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2),2);
    bufp->fullCData(oldp+83,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12),3);
    bufp->fullBit(oldp+84,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2));
    bufp->fullBit(oldp+85,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 0xcU))));
    bufp->fullCData(oldp+86,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x1eU))))),2);
    bufp->fullCData(oldp+87,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 2U)) << 1U)) 
                              | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                       >> 0xcU)))),2);
    bufp->fullBit(oldp+88,((IData)((0x1000U == (0x40003004U 
                                                & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
    bufp->fullCData(oldp+89,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xbU)) | (1U 
                                                  & (~ 
                                                     (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0xeU))))),2);
    bufp->fullCData(oldp+90,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14),3);
    bufp->fullBit(oldp+91,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2));
    bufp->fullCData(oldp+92,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 5U)) | (1U 
                                                & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 0xcU)))),2);
    bufp->fullBit(oldp+93,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2));
    bufp->fullBit(oldp+94,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2));
    bufp->fullCData(oldp+95,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12),2);
    bufp->fullBit(oldp+96,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                            & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12)))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 0xdU))));
    bufp->fullCData(oldp+98,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xcU)) | (1U 
                                                  & (~ 
                                                     (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0xeU))))),2);
    bufp->fullBit(oldp+99,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2));
    bufp->fullCData(oldp+100,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14),2);
    bufp->fullBit(oldp+101,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2));
    bufp->fullBit(oldp+102,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2));
    bufp->fullCData(oldp+103,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0xbU)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0xdU)))),2);
    bufp->fullCData(oldp+104,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 2U)) << 1U)) 
                               | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 6U))))),2);
    bufp->fullBit(oldp+105,((IData)((0x3000U == (0x3044U 
                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0xeU))));
    bufp->fullBit(oldp+107,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2));
    bufp->fullBit(oldp+108,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                             & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                >> 0xeU))));
    bufp->fullBit(oldp+109,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2));
    bufp->fullCData(oldp+110,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12) 
                                << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0xeU)))),3);
    bufp->fullCData(oldp+111,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi) 
                                << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 5U)))),3);
    bufp->fullBit(oldp+112,((IData)((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                      & (0x4020U == 
                                         (0x4020U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                     & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))));
    bufp->fullCData(oldp+113,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0xcU)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0xeU)))),2);
    bufp->fullCData(oldp+114,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                                << 1U) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 0xcU))))),3);
    bufp->fullBit(oldp+115,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2));
    bufp->fullBit(oldp+116,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0x14U))));
    bufp->fullCData(oldp+117,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x14U)))),2);
    bufp->fullBit(oldp+118,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0x15U))));
    bufp->fullCData(oldp+119,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xcU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x15U)))),2);
    bufp->fullBit(oldp+120,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                             & (IData)((0x200000U == 
                                        (0x201000U 
                                         & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+122,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 4U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x1eU)))),2);
    bufp->fullBit(oldp+123,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                             & (IData)((0x40000020U 
                                        == (0x40000020U 
                                            & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullCData(oldp+124,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x1eU)))),2);
    bufp->fullCData(oldp+125,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                                << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0xcU)))),3);
    bufp->fullBit(oldp+126,((IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                     & (0x40001000U 
                                        == (0x40003000U 
                                            & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullCData(oldp+127,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN),2);
    bufp->fullCData(oldp+128,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2))),2);
    bufp->fullCData(oldp+129,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
    bufp->fullCData(oldp+130,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
    bufp->fullCData(oldp+131,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
    bufp->fullCData(oldp+132,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2)))),3);
    bufp->fullCData(oldp+133,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                 << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2)))),5);
    bufp->fullCData(oldp+134,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0),2);
    bufp->fullCData(oldp+135,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
    bufp->fullCData(oldp+136,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
    bufp->fullCData(oldp+137,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1),2);
    bufp->fullCData(oldp+138,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),3);
    bufp->fullCData(oldp+139,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
    bufp->fullCData(oldp+140,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),3);
    bufp->fullCData(oldp+141,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1),2);
    bufp->fullCData(oldp+142,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2),2);
    bufp->fullCData(oldp+143,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))),4);
    bufp->fullCData(oldp+144,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
    bufp->fullCData(oldp+145,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+146,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)))),3);
    bufp->fullCData(oldp+147,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                 << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),5);
    bufp->fullCData(oldp+148,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3),2);
    bufp->fullCData(oldp+149,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),3);
    bufp->fullCData(oldp+150,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3)))),5);
    bufp->fullCData(oldp+151,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
    bufp->fullCData(oldp+152,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
    bufp->fullCData(oldp+153,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+154,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2)))),4);
    bufp->fullCData(oldp+155,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
    bufp->fullCData(oldp+156,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),2);
    bufp->fullCData(oldp+157,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2)))),3);
    bufp->fullCData(oldp+158,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
    bufp->fullCData(oldp+159,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 2U)) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),2);
    bufp->fullCData(oldp+160,(((4U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 1U)) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)))),3);
    bufp->fullCData(oldp+161,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2))),2);
    bufp->fullCData(oldp+162,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+163,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                 << 3U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                           << 2U)) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2)))),4);
    bufp->fullCData(oldp+164,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
    bufp->fullCData(oldp+165,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 1U) | (IData)((0x1000U 
                                                  == 
                                                  (0x40003004U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
    bufp->fullCData(oldp+166,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 2U) | (((IData)(
                                                   (0x1000U 
                                                    == 
                                                    (0x40003004U 
                                                     & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)))),3);
    bufp->fullCData(oldp+167,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                 << 4U) | (((IData)(
                                                    (0x1000U 
                                                     == 
                                                     (0x40003004U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2)))),5);
    bufp->fullSData(oldp+168,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                  << 8U) | (((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x40003004U 
                                                       & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                             << 7U) 
                                            | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2) 
                                               << 6U))) 
                                | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                    << 5U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                              << 4U))) 
                               | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                    << 3U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2))))),9);
    bufp->fullCData(oldp+169,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),2);
    bufp->fullCData(oldp+170,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)))),4);
    bufp->fullCData(oldp+171,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
    bufp->fullCData(oldp+172,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                << 1U) | (IData)((0U 
                                                  == 
                                                  (0x6020U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
    bufp->fullCData(oldp+173,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    == 
                                                    (0x6020U 
                                                     & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                           << 1U) | (IData)(
                                                            (0U 
                                                             == 
                                                             (0x40006004U 
                                                              & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))),3);
    bufp->fullCData(oldp+174,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     == 
                                                     (0x6020U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                            << 3U) 
                                           | ((IData)(
                                                      (0U 
                                                       == 
                                                       (0x40006004U 
                                                        & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2)))),5);
    bufp->fullSData(oldp+175,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                  << 8U) | (((IData)(
                                                     (0U 
                                                      == 
                                                      (0x6020U 
                                                       & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                             << 7U) 
                                            | ((IData)(
                                                       (0U 
                                                        == 
                                                        (0x40006004U 
                                                         & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                               << 6U))) 
                                | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                    << 5U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              << 4U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))))),9);
    bufp->fullCData(oldp+176,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                                << 1U) | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                          & (IData)(
                                                    (0x40000020U 
                                                     == 
                                                     (0x40000020U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))),2);
    bufp->fullCData(oldp+177,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                                << 2U) | ((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                            & (IData)(
                                                      (0x40000020U 
                                                       == 
                                                       (0x40000020U 
                                                        & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                                           << 1U) | (IData)(
                                                            ((3U 
                                                              == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                                             & (0x40001000U 
                                                                == 
                                                                (0x40003000U 
                                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))))),3);
    bufp->fullCData(oldp+178,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+179,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4),2);
    bufp->fullCData(oldp+180,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),4);
    bufp->fullCData(oldp+181,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                << 1U) | (IData)((0x3000U 
                                                  == 
                                                  (0x3044U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
    bufp->fullCData(oldp+182,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2))),2);
    bufp->fullCData(oldp+183,(((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                 & (IData)((0U == (0x5000U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
    bufp->fullCData(oldp+184,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                 & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+185,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+186,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5),2);
    bufp->fullCData(oldp+187,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),3);
    bufp->fullCData(oldp+188,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+189,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
    bufp->fullCData(oldp+190,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1))),4);
    bufp->fullCData(oldp+191,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+192,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),3);
    bufp->fullCData(oldp+193,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0))),2);
    bufp->fullCData(oldp+194,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0)))),3);
    bufp->fullCData(oldp+195,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                  | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                     | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3)))) 
                                 | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                     | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 1U) | (((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                           | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))) 
                                          | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                             | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                                | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))))),2);
    bufp->fullCData(oldp+196,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                  | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
    bufp->fullCData(oldp+197,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1),4);
    bufp->fullCData(oldp+198,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4),7);
    bufp->fullCData(oldp+199,(((2U & (((0x3ffffffeU 
                                        & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 2U)) 
                                       | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)) 
                                          << 1U)) | 
                                      (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2)) 
                                       << 1U))) | (
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2))) 
                                                   | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                                      | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))))),2);
    bufp->fullCData(oldp+200,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi),2);
    bufp->fullCData(oldp+201,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi) 
                                << 2U) | ((2U & (((0x3ffffffeU 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 2U)) 
                                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                                      | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)) 
                                                     << 1U)) 
                                                 | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2)) 
                                                    << 1U))) 
                                          | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2))) 
                                             | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                                | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2)))))),4);
    bufp->fullCData(oldp+202,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                    >> 0xeU)) << 1U) 
                               | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                    | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                  | (0x3000U == (0x3044U 
                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
    bufp->fullCData(oldp+203,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                    & (IData)((0x40U 
                                               == (0x4040U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                << 1U) | ((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                            & (IData)(
                                                      (0U 
                                                       == 
                                                       (0x5000U 
                                                        & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)) 
                                          | (IData)(
                                                    (((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                                      & (0x4020U 
                                                         == 
                                                         (0x4020U 
                                                          & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                                     & (3U 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))))),2);
    bufp->fullCData(oldp+204,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                  | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                     & (IData)((0x40U 
                                                == 
                                                (0x4040U 
                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                 << 3U) | (((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                              & (IData)(
                                                        (0U 
                                                         == 
                                                         (0x5000U 
                                                          & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)) 
                                            | (IData)(
                                                      (((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                                        & (0x4020U 
                                                           == 
                                                           (0x4020U 
                                                            & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                                       & (3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))) 
                                           << 2U)) 
                               | ((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                    & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                       >> 0xeU)) << 1U) 
                                  | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                      | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                     | (0x3000U == 
                                        (0x3044U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))),4);
    bufp->fullCData(oldp+205,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8),8);
    bufp->fullSData(oldp+206,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14),15);
    bufp->fullCData(oldp+207,((((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),3);
    bufp->fullCData(oldp+208,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo),2);
    bufp->fullCData(oldp+209,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                   & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (IData)((0x200000U 
                                               == (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+210,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                   & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (IData)((0x200000U 
                                               == (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo)))),4);
    bufp->fullCData(oldp+211,((((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                  | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                     & (IData)((0x200000U 
                                                == 
                                                (0x201000U 
                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                 << 6U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                            << 5U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo) 
                                              << 3U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)))),7);
    bufp->fullCData(oldp+212,((((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4))),4);
    bufp->fullSData(oldp+213,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17),15);
    bufp->fullIData(oldp+214,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0),32);
    bufp->fullIData(oldp+215,(vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0),32);
    bufp->fullIData(oldp+216,((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x1fU))) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 0x14U)))),32);
    bufp->fullIData(oldp+217,(((0x7ffffc0U & ((- (IData)(
                                                         (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                          >> 0x1fU))) 
                                              << 6U)) 
                               | (0x3fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0x19U)))),27);
    bufp->fullIData(oldp+218,((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x1fU))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                  >> 7U))))),32);
    bufp->fullCData(oldp+219,((0x1eU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 7U))),5);
    bufp->fullIData(oldp+220,(((0x1ffffeU & ((- (IData)(
                                                        (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                         >> 0x1fU))) 
                                             << 1U)) 
                               | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 7U)))),21);
    bufp->fullIData(oldp+221,(((0x7ffff80U & ((- (IData)(
                                                         (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                          >> 0x1fU))) 
                                              << 7U)) 
                               | ((0x40U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 1U)) 
                                  | (0x3fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                              >> 0x19U))))),27);
    bufp->fullIData(oldp+222,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                 << 4U)) 
                                             | (0x7e0U 
                                                & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 0x14U)))) 
                               | (0x1eU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 7U)))),32);
    bufp->fullIData(oldp+223,((0xfffff000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)),32);
    bufp->fullSData(oldp+224,((0x3ffU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x15U))),10);
    bufp->fullSData(oldp+225,((0x7feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x14U))),11);
    bufp->fullIData(oldp+226,(((0xfff00U & ((- (IData)(
                                                       (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                        >> 0x1fU))) 
                                            << 8U)) 
                               | (0xffU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0xcU)))),20);
    bufp->fullIData(oldp+227,(((0x1ffe00U & ((- (IData)(
                                                        (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                         >> 0x1fU))) 
                                             << 9U)) 
                               | ((0x1feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0xbU)) 
                                  | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0x14U))))),21);
    bufp->fullIData(oldp+228,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0) 
                                              | (0x800U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 9U)))) 
                               | (0x7feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+229,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xfU))),32);
    __Vtemp_h7720a331__0[0U] = 0U;
    __Vtemp_h7720a331__0[1U] = vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata;
    __Vtemp_h7720a331__0[2U] = (((- (IData)((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata));
    __Vtemp_h7720a331__0[3U] = (((- (IData)((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata));
    __Vtemp_h7720a331__0[4U] = (0xffffU & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata);
    __Vtemp_h7720a331__0[5U] = (0xffU & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata);
    __Vtemp_h7720a331__0[6U] = 0U;
    __Vtemp_h7720a331__0[7U] = 0U;
    bufp->fullIData(oldp+230,(__Vtemp_h7720a331__0[
                              (7U & ((0x7fffffcU & 
                                      ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                       << 2U)) | (0x7ffffffU 
                                                  & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))]),32);
    bufp->fullCData(oldp+231,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+232,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+233,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 7U))),5);
    bufp->fullIData(oldp+234,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+235,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+236,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [9U]),32);
    bufp->fullIData(oldp+237,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [8U]),32);
    bufp->fullIData(oldp+238,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [7U]),32);
    bufp->fullIData(oldp+239,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [6U]),32);
    bufp->fullIData(oldp+240,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [5U]),32);
    bufp->fullIData(oldp+241,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [4U]),32);
    bufp->fullIData(oldp+242,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [3U]),32);
    bufp->fullIData(oldp+243,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [2U]),32);
    bufp->fullIData(oldp+244,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [1U]),32);
    bufp->fullIData(oldp+245,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xfU]),32);
    bufp->fullIData(oldp+246,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xeU]),32);
    bufp->fullIData(oldp+247,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xdU]),32);
    bufp->fullIData(oldp+248,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xcU]),32);
    bufp->fullIData(oldp+249,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xbU]),32);
    bufp->fullIData(oldp+250,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xaU]),32);
    bufp->fullIData(oldp+251,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0U]),32);
    bufp->fullBit(oldp+252,(((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                             & (0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 7U))))));
    bufp->fullIData(oldp+253,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+254,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+255,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+256,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+257,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+258,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+259,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+260,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+261,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+262,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+263,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+264,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+265,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+266,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+267,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+268,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+269,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+270,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+271,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+272,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+273,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+274,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+275,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+276,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+277,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+278,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+279,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+280,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+281,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+282,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+283,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+284,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[31]),32);
    bufp->fullIData(oldp+285,(vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata),32);
    bufp->fullIData(oldp+286,(vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask),32);
    bufp->fullBit(oldp+287,(vlSelf->clock));
    bufp->fullBit(oldp+288,(vlSelf->reset));
    bufp->fullBit(oldp+289,(vlSelf->io_ebreak));
    bufp->fullIData(oldp+290,(vlSelf->io_debug_pc),32);
    bufp->fullCData(oldp+291,(vlSelf->io_debug_PCSel),2);
    bufp->fullCData(oldp+292,(vlSelf->io_debug_alu_op),4);
    bufp->fullIData(oldp+293,(vlSelf->io_debug_alu_out),32);
    bufp->fullCData(oldp+294,(vlSelf->io_debug_imm_sel),3);
    bufp->fullWData(oldp+295,(vlSelf->io_debug_gpr),512);
    bufp->fullIData(oldp+311,(vlSelf->io_debug_mtvec),32);
    bufp->fullIData(oldp+312,(vlSelf->io_debug_mepc),32);
    bufp->fullIData(oldp+313,(vlSelf->io_debug_mcause),32);
    bufp->fullIData(oldp+314,(vlSelf->io_debug_mstatus),32);
    bufp->fullBit(oldp+315,(vlSelf->io_debug_Valid));
    bufp->fullIData(oldp+316,(vlSelf->io_debug_addr),32);
    bufp->fullIData(oldp+317,(vlSelf->io_debug_wdata),32);
    bufp->fullBit(oldp+318,(vlSelf->io_debug_wen));
    bufp->fullIData(oldp+319,(vlSelf->io_debug_rdata),32);
    bufp->fullSData(oldp+320,(vlSelf->io_debug_csr_id),12);
    bufp->fullCData(oldp+321,(vlSelf->io_debug_CSRCmd),3);
    bufp->fullIData(oldp+322,(vlSelf->io_debug_CSRWdata),32);
    bufp->fullIData(oldp+323,(vlSelf->io_debug_next_pc),32);
    bufp->fullIData(oldp+324,(((4U == (IData)(vlSelf->io_debug_CSRCmd))
                                ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                               [0x305U] : ((5U == (IData)(vlSelf->io_debug_CSRCmd))
                                            ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                           [0x341U]
                                            : 0U))),32);
    bufp->fullIData(oldp+325,(((~ vlSelf->io_debug_CSRWdata) 
                               & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                   ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                   : 0U))),32);
    bufp->fullIData(oldp+326,((0x80207888U & ((~ vlSelf->io_debug_CSRWdata) 
                                              & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                                  : 0U)))),32);
    bufp->fullBit(oldp+327,(((0x300U != (IData)(vlSelf->io_debug_csr_id)) 
                             & (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0))));
    bufp->fullBit(oldp+328,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0) 
                             & (0x300U == (IData)(vlSelf->io_debug_csr_id)))));
    bufp->fullIData(oldp+329,((0x80207888U & vlSelf->io_debug_CSRWdata)),32);
    bufp->fullIData(oldp+330,((((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                                 ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                 : 0U) | vlSelf->io_debug_CSRWdata)),32);
    bufp->fullBit(oldp+331,(((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0)) 
                             & (5U == (IData)(vlSelf->io_debug_CSRCmd)))));
    bufp->fullIData(oldp+332,((0x80207888U & (((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                                : 0U) 
                                              | vlSelf->io_debug_CSRWdata))),32);
    bufp->fullCData(oldp+333,((((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                << 1U) | (IData)(vlSelf->io_debug_wen))),2);
    bufp->fullCData(oldp+334,((((IData)(vlSelf->io_ebreak) 
                                << 1U) | (IData)(vlSelf->io_debug_Valid))),2);
    bufp->fullCData(oldp+335,(((((IData)(vlSelf->io_ebreak) 
                                 << 3U) | ((IData)(vlSelf->io_debug_Valid) 
                                           << 2U)) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                   << 1U) | (IData)(vlSelf->io_debug_wen)))),4);
    bufp->fullCData(oldp+336,((((((IData)(vlSelf->io_ebreak) 
                                  << 7U) | ((IData)(vlSelf->io_debug_Valid) 
                                            << 6U)) 
                                | (((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                    << 5U) | ((IData)(vlSelf->io_debug_wen) 
                                              << 4U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                   << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4)))),8);
    bufp->fullIData(oldp+337,((0xfffffffeU & vlSelf->io_debug_alu_out)),32);
    __Vtemp_h29950ca1__0[0U] = 0U;
    __Vtemp_h29950ca1__0[1U] = vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata;
    __Vtemp_h29950ca1__0[2U] = (((- (IData)((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata));
    __Vtemp_h29950ca1__0[3U] = (((- (IData)((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata));
    __Vtemp_h29950ca1__0[4U] = (0xffffU & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata);
    __Vtemp_h29950ca1__0[5U] = (0xffU & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata);
    __Vtemp_h29950ca1__0[6U] = 0U;
    __Vtemp_h29950ca1__0[7U] = 0U;
    __Vtemp_he6874d7e__0[0U] = vlSelf->io_debug_alu_out;
    __Vtemp_he6874d7e__0[1U] = __Vtemp_h29950ca1__0[
        (7U & ((0x7fffffcU & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                              << 2U)) | (0x7ffffffU 
                                         & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))];
    __Vtemp_he6874d7e__0[2U] = (IData)((((QData)((IData)(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelf->Top__DOT__core__DOT__pc)))));
    __Vtemp_he6874d7e__0[3U] = (IData)(((((QData)((IData)(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(4U) 
                                                            + vlSelf->Top__DOT__core__DOT__pc)))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+338,((((0U == (0x1fU & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                                 << 5U)))
                                 ? 0U : (__Vtemp_he6874d7e__0[
                                         (((IData)(0x1fU) 
                                           + (0x7fU 
                                              & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                                 << 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                                << 5U))))) 
                               | (__Vtemp_he6874d7e__0[
                                  (3U & (IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0))] 
                                  >> (0x1fU & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                               << 5U))))),32);
    bufp->fullBit(oldp+339,(1U));
    bufp->fullSData(oldp+340,(0x305U),12);
    bufp->fullSData(oldp+341,(0x341U),12);
    bufp->fullSData(oldp+342,(0x342U),12);
    bufp->fullSData(oldp+343,(0x300U),12);
    bufp->fullIData(oldp+344,(0xbU),32);
    bufp->fullIData(oldp+345,(0x1800U),32);
    bufp->fullCData(oldp+346,(9U),5);
    bufp->fullCData(oldp+347,(8U),5);
    bufp->fullCData(oldp+348,(7U),5);
    bufp->fullCData(oldp+349,(6U),5);
    bufp->fullCData(oldp+350,(5U),5);
    bufp->fullCData(oldp+351,(4U),5);
    bufp->fullCData(oldp+352,(3U),5);
    bufp->fullCData(oldp+353,(2U),5);
    bufp->fullCData(oldp+354,(1U),5);
    bufp->fullCData(oldp+355,(0xfU),5);
    bufp->fullCData(oldp+356,(0xeU),5);
    bufp->fullCData(oldp+357,(0xdU),5);
    bufp->fullCData(oldp+358,(0xcU),5);
    bufp->fullCData(oldp+359,(0xbU),5);
    bufp->fullCData(oldp+360,(0xaU),5);
    bufp->fullCData(oldp+361,(0U),5);
}
