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
    tracep->declBit(c+264,"clock", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBit(c+266,"io_ebreak", false,-1);
    tracep->declBus(c+267,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+268,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+269,"io_debug_alu_op", false,-1, 3,0);
    tracep->declBus(c+270,"io_debug_alu_out", false,-1, 31,0);
    tracep->declBus(c+271,"io_debug_imm_sel", false,-1, 2,0);
    tracep->declArray(c+272,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+288,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+289,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+290,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+291,"io_debug_mstatus", false,-1, 31,0);
    tracep->declBit(c+292,"io_debug_Valid", false,-1);
    tracep->declBus(c+293,"io_debug_addr", false,-1, 31,0);
    tracep->declBus(c+294,"io_debug_wdata", false,-1, 31,0);
    tracep->declBit(c+295,"io_debug_wen", false,-1);
    tracep->declBus(c+296,"io_debug_rdata", false,-1, 31,0);
    tracep->declBus(c+297,"io_debug_csr_id", false,-1, 11,0);
    tracep->declBus(c+298,"io_debug_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+299,"io_debug_CSRWdata", false,-1, 31,0);
    tracep->declBus(c+300,"io_debug_next_pc", false,-1, 31,0);
    tracep->declBus(c+301,"io_debug_reg_wdata", false,-1, 31,0);
    tracep->declBus(c+302,"io_debug_WbSel", false,-1, 1,0);
    tracep->declBit(c+303,"io_debug_WbEn", false,-1);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+264,"clock", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBit(c+266,"io_ebreak", false,-1);
    tracep->declBus(c+267,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+268,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+269,"io_debug_alu_op", false,-1, 3,0);
    tracep->declBus(c+270,"io_debug_alu_out", false,-1, 31,0);
    tracep->declBus(c+271,"io_debug_imm_sel", false,-1, 2,0);
    tracep->declArray(c+272,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+288,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+289,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+290,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+291,"io_debug_mstatus", false,-1, 31,0);
    tracep->declBit(c+292,"io_debug_Valid", false,-1);
    tracep->declBus(c+270,"io_debug_addr", false,-1, 31,0);
    tracep->declBus(c+294,"io_debug_wdata", false,-1, 31,0);
    tracep->declBit(c+295,"io_debug_wen", false,-1);
    tracep->declBus(c+296,"io_debug_rdata", false,-1, 31,0);
    tracep->declBus(c+297,"io_debug_csr_id", false,-1, 11,0);
    tracep->declBus(c+298,"io_debug_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+299,"io_debug_CSRWdata", false,-1, 31,0);
    tracep->declBus(c+300,"io_debug_next_pc", false,-1, 31,0);
    tracep->declBus(c+301,"io_debug_reg_wdata", false,-1, 31,0);
    tracep->declBus(c+302,"io_debug_WbSel", false,-1, 1,0);
    tracep->declBit(c+303,"io_debug_WbEn", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+264,"clock", false,-1);
    tracep->declBit(c+265,"reset", false,-1);
    tracep->declBus(c+267,"io_imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst", false,-1, 31,0);
    tracep->declBus(c+270,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+294,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+295,"io_dmem_wen", false,-1);
    tracep->declBit(c+292,"io_dmem_valid", false,-1);
    tracep->declBus(c+2,"io_dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+296,"io_dmem_rdata", false,-1, 31,0);
    tracep->declBit(c+266,"io_ebreak", false,-1);
    tracep->declBus(c+267,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+268,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+269,"io_debug_alu_op", false,-1, 3,0);
    tracep->declBus(c+270,"io_debug_alu_out", false,-1, 31,0);
    tracep->declBus(c+271,"io_debug_imm_sel", false,-1, 2,0);
    tracep->declArray(c+272,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+288,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+289,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+290,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+291,"io_debug_mstatus", false,-1, 31,0);
    tracep->declBit(c+292,"io_debug_Valid", false,-1);
    tracep->declBus(c+270,"io_debug_addr", false,-1, 31,0);
    tracep->declBus(c+294,"io_debug_wdata", false,-1, 31,0);
    tracep->declBit(c+295,"io_debug_wen", false,-1);
    tracep->declBus(c+296,"io_debug_rdata", false,-1, 31,0);
    tracep->declBus(c+297,"io_debug_csr_id", false,-1, 11,0);
    tracep->declBus(c+298,"io_debug_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+299,"io_debug_CSRWdata", false,-1, 31,0);
    tracep->declBus(c+300,"io_debug_next_pc", false,-1, 31,0);
    tracep->declBus(c+301,"io_debug_reg_wdata", false,-1, 31,0);
    tracep->declBus(c+302,"io_debug_WbSel", false,-1, 1,0);
    tracep->declBit(c+303,"io_debug_WbEn", false,-1);
    tracep->declBus(c+2,"io_dmem_wmask_0", false,-1, 3,0);
    tracep->declBus(c+291,"io_debug_mstatus_0", false,-1, 31,0);
    tracep->declBus(c+290,"io_debug_mcause_0", false,-1, 31,0);
    tracep->declArray(c+272,"io_debug_gpr_0", false,-1, 511,0);
    tracep->declBit(c+266,"io_ebreak_0", false,-1);
    tracep->declBit(c+295,"io_dmem_wen_0", false,-1);
    tracep->declBus(c+294,"io_dmem_wdata_0", false,-1, 31,0);
    tracep->declBus(c+270,"io_dmem_addr_0", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst_0", false,-1, 31,0);
    tracep->declBus(c+296,"io_dmem_rdata_0", false,-1, 31,0);
    tracep->declBus(c+270,"io_debug_addr_0", false,-1, 31,0);
    tracep->declBus(c+294,"io_debug_wdata_0", false,-1, 31,0);
    tracep->declBit(c+295,"io_debug_wen_0", false,-1);
    tracep->declBus(c+296,"io_debug_rdata_0", false,-1, 31,0);
    tracep->declBus(c+299,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+300,"next_pc", false,-1, 31,0);
    tracep->declBus(c+301,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+226,"pc", false,-1, 31,0);
    tracep->declBus(c+267,"io_imem_addr_0", false,-1, 31,0);
    tracep->declBus(c+267,"io_debug_pc_0", false,-1, 31,0);
    tracep->declBus(c+227,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+304,"pc_csr", false,-1, 31,0);
    tracep->declBus(c+300,"io_debug_next_pc_0", false,-1, 31,0);
    tracep->declBus(c+301,"io_debug_reg_wdata_0", false,-1, 31,0);
    tracep->declBus(c+297,"io_debug_csr_id_0", false,-1, 11,0);
    tracep->declBus(c+299,"io_debug_CSRWdata_0", false,-1, 31,0);
    tracep->declBus(c+270,"io_debug_alu_out_0", false,-1, 31,0);
    tracep->declBit(c+292,"io_dmem_valid_0", false,-1);
    tracep->declBus(c+268,"io_debug_PCSel_0", false,-1, 1,0);
    tracep->declBus(c+269,"io_debug_alu_op_0", false,-1, 3,0);
    tracep->declBus(c+271,"io_debug_imm_sel_0", false,-1, 2,0);
    tracep->declBit(c+292,"io_debug_Valid_0", false,-1);
    tracep->declBus(c+298,"io_debug_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+302,"io_debug_WbSel_0", false,-1, 1,0);
    tracep->declBit(c+303,"io_debug_WbEn_0", false,-1);
    tracep->declBus(c+288,"io_debug_mtvec_0", false,-1, 31,0);
    tracep->declBus(c+289,"io_debug_mepc_0", false,-1, 31,0);
    tracep->pushNamePrefix("AluInstance ");
    tracep->declBus(c+305,"io_A", false,-1, 31,0);
    tracep->declBus(c+217,"io_B", false,-1, 31,0);
    tracep->declBus(c+269,"io_alu_op", false,-1, 3,0);
    tracep->declBus(c+270,"io_out", false,-1, 31,0);
    tracep->declBus(c+305,"io_A_0", false,-1, 31,0);
    tracep->declBus(c+217,"io_B_0", false,-1, 31,0);
    tracep->declBus(c+269,"io_alu_op_0", false,-1, 3,0);
    tracep->declBus(c+218,"shamt", false,-1, 4,0);
    tracep->declBus(c+270,"io_out_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRInstance ");
    tracep->declBit(c+264,"clock", false,-1);
    tracep->declBus(c+297,"io_addr", false,-1, 11,0);
    tracep->declBus(c+298,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+299,"io_wdata", false,-1, 31,0);
    tracep->declBus(c+219,"io_rdata", false,-1, 31,0);
    tracep->declBus(c+288,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+289,"io_mepc", false,-1, 31,0);
    tracep->declBus(c+290,"io_mcause", false,-1, 31,0);
    tracep->declBus(c+291,"io_mstatus", false,-1, 31,0);
    tracep->declBus(c+290,"io_mcause_0", false,-1, 31,0);
    tracep->declBus(c+289,"io_mepc_0", false,-1, 31,0);
    tracep->declBus(c+288,"io_mtvec_0", false,-1, 31,0);
    tracep->declBus(c+219,"io_rdata_0", false,-1, 31,0);
    tracep->declBus(c+297,"io_addr_0", false,-1, 11,0);
    tracep->declBus(c+298,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+299,"io_wdata_0", false,-1, 31,0);
    tracep->declQuad(c+228,"ecall_mstatus", false,-1, 35,0);
    tracep->declBus(c+230,"mret_mstatus", false,-1, 31,0);
    tracep->declBus(c+291,"io_mstatus_0", false,-1, 31,0);
    tracep->pushNamePrefix("csrs_ext ");
    tracep->declBus(c+297,"R0_addr", false,-1, 11,0);
    tracep->declBit(c+326,"R0_en", false,-1);
    tracep->declBit(c+264,"R0_clk", false,-1);
    tracep->declBus(c+219,"R0_data", false,-1, 31,0);
    tracep->declBus(c+327,"R1_addr", false,-1, 11,0);
    tracep->declBit(c+326,"R1_en", false,-1);
    tracep->declBit(c+264,"R1_clk", false,-1);
    tracep->declBus(c+288,"R1_data", false,-1, 31,0);
    tracep->declBus(c+328,"R2_addr", false,-1, 11,0);
    tracep->declBit(c+326,"R2_en", false,-1);
    tracep->declBit(c+264,"R2_clk", false,-1);
    tracep->declBus(c+289,"R2_data", false,-1, 31,0);
    tracep->declBus(c+329,"R3_addr", false,-1, 11,0);
    tracep->declBit(c+326,"R3_en", false,-1);
    tracep->declBit(c+264,"R3_clk", false,-1);
    tracep->declBus(c+290,"R3_data", false,-1, 31,0);
    tracep->declBus(c+330,"R4_addr", false,-1, 11,0);
    tracep->declBit(c+326,"R4_en", false,-1);
    tracep->declBit(c+264,"R4_clk", false,-1);
    tracep->declBus(c+291,"R4_data", false,-1, 31,0);
    tracep->declBus(c+297,"R5_addr", false,-1, 11,0);
    tracep->declBit(c+3,"R5_en", false,-1);
    tracep->declBit(c+264,"R5_clk", false,-1);
    tracep->declBus(c+220,"R5_data", false,-1, 31,0);
    tracep->declBus(c+297,"R6_addr", false,-1, 11,0);
    tracep->declBit(c+4,"R6_en", false,-1);
    tracep->declBit(c+264,"R6_clk", false,-1);
    tracep->declBus(c+221,"R6_data", false,-1, 31,0);
    tracep->declBus(c+297,"R7_addr", false,-1, 11,0);
    tracep->declBit(c+5,"R7_en", false,-1);
    tracep->declBit(c+264,"R7_clk", false,-1);
    tracep->declBus(c+222,"R7_data", false,-1, 31,0);
    tracep->declBus(c+297,"R8_addr", false,-1, 11,0);
    tracep->declBit(c+6,"R8_en", false,-1);
    tracep->declBit(c+264,"R8_clk", false,-1);
    tracep->declBus(c+223,"R8_data", false,-1, 31,0);
    tracep->declBus(c+297,"R9_addr", false,-1, 11,0);
    tracep->declBit(c+7,"R9_en", false,-1);
    tracep->declBit(c+264,"R9_clk", false,-1);
    tracep->declBus(c+224,"R9_data", false,-1, 31,0);
    tracep->declBus(c+297,"W0_addr", false,-1, 11,0);
    tracep->declBit(c+7,"W0_en", false,-1);
    tracep->declBit(c+264,"W0_clk", false,-1);
    tracep->declBus(c+306,"W0_data", false,-1, 31,0);
    tracep->declBus(c+297,"W1_addr", false,-1, 11,0);
    tracep->declBit(c+3,"W1_en", false,-1);
    tracep->declBit(c+264,"W1_clk", false,-1);
    tracep->declBus(c+307,"W1_data", false,-1, 31,0);
    tracep->declBus(c+297,"W2_addr", false,-1, 11,0);
    tracep->declBit(c+308,"W2_en", false,-1);
    tracep->declBit(c+264,"W2_clk", false,-1);
    tracep->declBus(c+299,"W2_data", false,-1, 31,0);
    tracep->declBus(c+297,"W3_addr", false,-1, 11,0);
    tracep->declBit(c+309,"W3_en", false,-1);
    tracep->declBit(c+264,"W3_clk", false,-1);
    tracep->declBus(c+310,"W3_data", false,-1, 31,0);
    tracep->declBus(c+297,"W4_addr", false,-1, 11,0);
    tracep->declBit(c+4,"W4_en", false,-1);
    tracep->declBit(c+264,"W4_clk", false,-1);
    tracep->declBus(c+311,"W4_data", false,-1, 31,0);
    tracep->declBus(c+297,"W5_addr", false,-1, 11,0);
    tracep->declBit(c+6,"W5_en", false,-1);
    tracep->declBit(c+264,"W5_clk", false,-1);
    tracep->declBus(c+223,"W5_data", false,-1, 31,0);
    tracep->declBus(c+330,"W6_addr", false,-1, 11,0);
    tracep->declBit(c+312,"W6_en", false,-1);
    tracep->declBit(c+264,"W6_clk", false,-1);
    tracep->declBus(c+230,"W6_data", false,-1, 31,0);
    tracep->declBus(c+330,"W7_addr", false,-1, 11,0);
    tracep->declBit(c+8,"W7_en", false,-1);
    tracep->declBit(c+264,"W7_clk", false,-1);
    tracep->declBus(c+231,"W7_data", false,-1, 31,0);
    tracep->declBus(c+329,"W8_addr", false,-1, 11,0);
    tracep->declBit(c+8,"W8_en", false,-1);
    tracep->declBit(c+264,"W8_clk", false,-1);
    tracep->declBus(c+331,"W8_data", false,-1, 31,0);
    tracep->declBus(c+328,"W9_addr", false,-1, 11,0);
    tracep->declBit(c+8,"W9_en", false,-1);
    tracep->declBit(c+264,"W9_clk", false,-1);
    tracep->declBus(c+299,"W9_data", false,-1, 31,0);
    tracep->declBus(c+297,"W10_addr", false,-1, 11,0);
    tracep->declBit(c+5,"W10_en", false,-1);
    tracep->declBit(c+264,"W10_clk", false,-1);
    tracep->declBus(c+313,"W10_data", false,-1, 31,0);
    tracep->declBus(c+330,"W11_addr", false,-1, 11,0);
    tracep->declBit(c+326,"W11_en", false,-1);
    tracep->declBit(c+264,"W11_clk", false,-1);
    tracep->declBus(c+332,"W11_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CUInstance ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBit(c+225,"io_compare", false,-1);
    tracep->declBus(c+268,"io_PCSel", false,-1, 1,0);
    tracep->declBus(c+9,"io_ASel", false,-1, 1,0);
    tracep->declBus(c+10,"io_BSel", false,-1, 1,0);
    tracep->declBus(c+271,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+269,"io_ALUSel", false,-1, 3,0);
    tracep->declBus(c+11,"io_BrType", false,-1, 2,0);
    tracep->declBus(c+298,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+12,"io_StType", false,-1, 1,0);
    tracep->declBus(c+13,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+302,"io_WbSel", false,-1, 1,0);
    tracep->declBit(c+295,"io_MemRW", false,-1);
    tracep->declBit(c+303,"io_WbEn", false,-1);
    tracep->declBit(c+292,"io_Valid", false,-1);
    tracep->declBit(c+266,"io_Ebreak", false,-1);
    tracep->declBit(c+266,"io_Ebreak_0", false,-1);
    tracep->declBit(c+292,"io_Valid_0", false,-1);
    tracep->declBit(c+303,"io_WbEn_0", false,-1);
    tracep->declBit(c+295,"io_MemRW_0", false,-1);
    tracep->declBus(c+302,"io_WbSel_0", false,-1, 1,0);
    tracep->declBus(c+13,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+12,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+298,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+269,"io_ALUSel_0", false,-1, 3,0);
    tracep->declBus(c+271,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+10,"io_BSel_0", false,-1, 1,0);
    tracep->declBus(c+9,"io_ASel_0", false,-1, 1,0);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBit(c+225,"io_compare_0", false,-1);
    tracep->declBus(c+268,"io_PCSel_0", false,-1, 1,0);
    tracep->declBus(c+11,"io_BrType_0", false,-1, 2,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+14,"io_PCSel", false,-1, 1,0);
    tracep->declBus(c+9,"io_ASel", false,-1, 1,0);
    tracep->declBus(c+10,"io_BSel", false,-1, 1,0);
    tracep->declBus(c+271,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+269,"io_ALUSel", false,-1, 3,0);
    tracep->declBus(c+11,"io_BrType", false,-1, 2,0);
    tracep->declBus(c+298,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+12,"io_StType", false,-1, 1,0);
    tracep->declBus(c+13,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+302,"io_WbSel", false,-1, 1,0);
    tracep->declBit(c+295,"io_MemRW", false,-1);
    tracep->declBit(c+303,"io_WbEn", false,-1);
    tracep->declBit(c+292,"io_Valid", false,-1);
    tracep->declBit(c+266,"io_Ebreak", false,-1);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBus(c+1,"decodedBundle_plaInput", false,-1, 31,0);
    tracep->declBus(c+14,"decodedBundle_PCSel", false,-1, 1,0);
    tracep->declBus(c+9,"decodedBundle_ASel", false,-1, 1,0);
    tracep->declBus(c+10,"decodedBundle_BSel", false,-1, 1,0);
    tracep->declBus(c+271,"decodedBundle_ImmSel", false,-1, 2,0);
    tracep->declBus(c+269,"decodedBundle_ALUSel", false,-1, 3,0);
    tracep->declBus(c+11,"decodedBundle_BrType", false,-1, 2,0);
    tracep->declBus(c+298,"decodedBundle_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+12,"decodedBundle_StType", false,-1, 1,0);
    tracep->declBus(c+13,"decodedBundle_LdType", false,-1, 2,0);
    tracep->declBus(c+302,"decodedBundle_WbSel", false,-1, 1,0);
    tracep->declBit(c+295,"decodedBundle_MemRW", false,-1);
    tracep->declBit(c+303,"decodedBundle_WbEn", false,-1);
    tracep->declBit(c+292,"decodedBundle_Valid", false,-1);
    tracep->declBit(c+266,"decodedBundle_Ebreak", false,-1);
    tracep->declBus(c+15,"decodedBundle_invInputs", false,-1, 31,0);
    tracep->declBus(c+16,"decodedBundle_invMatrixOutputs", false,-1, 29,0);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_4", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_10", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_12", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_13", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_14", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_16", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_17", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_18", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_21", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_22", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_24", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_26", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_28", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_29", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_32", false,-1);
    tracep->declBit(c+17,"decodedBundle_andMatrixOutputs_andMatrixInput_0_33", false,-1);
    tracep->declBit(c+18,"decodedBundle_andMatrixOutputs_andMatrixInput_1", false,-1);
    tracep->declBit(c+18,"decodedBundle_andMatrixOutputs_andMatrixInput_1_1", false,-1);
    tracep->declBit(c+18,"decodedBundle_andMatrixOutputs_andMatrixInput_0_2", false,-1);
    tracep->declBit(c+18,"decodedBundle_andMatrixOutputs_andMatrixInput_1_3", false,-1);
    tracep->declBit(c+18,"decodedBundle_andMatrixOutputs_andMatrixInput_1_6", false,-1);
    tracep->declBit(c+18,"decodedBundle_andMatrixOutputs_andMatrixInput_1_24", false,-1);
    tracep->declBit(c+19,"decodedBundle_andMatrixOutputs_17_2", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_0_1", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_0_3", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_2_4", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_0_8", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_0_9", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_1_11", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_1_12", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_1_13", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_1_17", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_1_21", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_0_25", false,-1);
    tracep->declBit(c+20,"decodedBundle_andMatrixOutputs_andMatrixInput_1_27", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_2", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_3_2", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_3_5", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_3_7", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_2_12", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_3_14", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_2_20", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_2_26", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_2_27", false,-1);
    tracep->declBit(c+21,"decodedBundle_andMatrixOutputs_andMatrixInput_2_28", false,-1);
    tracep->declBus(c+22,"decodedBundle_andMatrixOutputs_hi", false,-1, 1,0);
    tracep->declBit(c+23,"decodedBundle_andMatrixOutputs_22_2", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_1_2", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_2_2", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_1_4", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_3_3", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_4", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_3_8", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_2_13", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_3_12", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_4_6", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_3_19", false,-1);
    tracep->declBit(c+24,"decodedBundle_andMatrixOutputs_andMatrixInput_3_22", false,-1);
    tracep->declBit(c+25,"decodedBundle_andMatrixOutputs_andMatrixInput_2_1", false,-1);
    tracep->declBit(c+25,"decodedBundle_andMatrixOutputs_andMatrixInput_3", false,-1);
    tracep->declBit(c+25,"decodedBundle_andMatrixOutputs_andMatrixInput_2_3", false,-1);
    tracep->declBit(c+25,"decodedBundle_andMatrixOutputs_andMatrixInput_3_6", false,-1);
    tracep->declBit(c+25,"decodedBundle_andMatrixOutputs_andMatrixInput_4_1", false,-1);
    tracep->declBit(c+25,"decodedBundle_andMatrixOutputs_andMatrixInput_4_3", false,-1);
    tracep->declBit(c+25,"decodedBundle_andMatrixOutputs_andMatrixInput_4_4", false,-1);
    tracep->declBus(c+26,"decodedBundle_andMatrixOutputs_hi_1", false,-1, 1,0);
    tracep->declBit(c+27,"decodedBundle_andMatrixOutputs_25_2", false,-1);
    tracep->declBus(c+28,"decodedBundle_andMatrixOutputs_lo", false,-1, 1,0);
    tracep->declBus(c+22,"decodedBundle_andMatrixOutputs_hi_2", false,-1, 1,0);
    tracep->declBit(c+29,"decodedBundle_andMatrixOutputs_10_2", false,-1);
    tracep->declBit(c+30,"decodedBundle_andMatrixOutputs_andMatrixInput_3_1", false,-1);
    tracep->declBit(c+30,"decodedBundle_andMatrixOutputs_andMatrixInput_3_9", false,-1);
    tracep->declBus(c+31,"decodedBundle_andMatrixOutputs_lo_1", false,-1, 1,0);
    tracep->declBus(c+32,"decodedBundle_andMatrixOutputs_hi_3", false,-1, 1,0);
    tracep->declBit(c+33,"decodedBundle_andMatrixOutputs_12_2", false,-1);
    tracep->declBit(c+34,"decodedBundle_andMatrixOutputs_andMatrixInput_0_5", false,-1);
    tracep->declBit(c+34,"decodedBundle_andMatrixOutputs_andMatrixInput_0_6", false,-1);
    tracep->declBit(c+34,"decodedBundle_andMatrixOutputs_andMatrixInput_0_11", false,-1);
    tracep->declBit(c+35,"decodedBundle_andMatrixOutputs_andMatrixInput_1_5", false,-1);
    tracep->declBus(c+36,"decodedBundle_andMatrixOutputs_hi_4", false,-1, 1,0);
    tracep->declBit(c+37,"decodedBundle_andMatrixOutputs_18_2", false,-1);
    tracep->declBit(c+38,"decodedBundle_andMatrixOutputs_13_2", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_andMatrixInput_0_7", false,-1);
    tracep->declBit(c+39,"decodedBundle_andMatrixOutputs_11_2", false,-1);
    tracep->declBit(c+40,"decodedBundle_andMatrixOutputs_andMatrixInput_1_7", false,-1);
    tracep->declBit(c+40,"decodedBundle_andMatrixOutputs_andMatrixInput_1_8", false,-1);
    tracep->declBit(c+40,"decodedBundle_andMatrixOutputs_andMatrixInput_2_7", false,-1);
    tracep->declBit(c+40,"decodedBundle_andMatrixOutputs_andMatrixInput_2_8", false,-1);
    tracep->declBit(c+40,"decodedBundle_andMatrixOutputs_andMatrixInput_2_25", false,-1);
    tracep->declBit(c+40,"decodedBundle_andMatrixOutputs_andMatrixInput_2_29", false,-1);
    tracep->declBit(c+41,"decodedBundle_andMatrixOutputs_andMatrixInput_2_5", false,-1);
    tracep->declBit(c+41,"decodedBundle_andMatrixOutputs_andMatrixInput_2_6", false,-1);
    tracep->declBit(c+41,"decodedBundle_andMatrixOutputs_andMatrixInput_3_4", false,-1);
    tracep->declBit(c+41,"decodedBundle_andMatrixOutputs_andMatrixInput_2_14", false,-1);
    tracep->declBit(c+41,"decodedBundle_andMatrixOutputs_andMatrixInput_2_18", false,-1);
    tracep->declBit(c+41,"decodedBundle_andMatrixOutputs_andMatrixInput_1_23", false,-1);
    tracep->declBus(c+42,"decodedBundle_andMatrixOutputs_lo_2", false,-1, 1,0);
    tracep->declBus(c+43,"decodedBundle_andMatrixOutputs_hi_5", false,-1, 1,0);
    tracep->declBit(c+44,"decodedBundle_andMatrixOutputs_9_2", false,-1);
    tracep->declBus(c+45,"decodedBundle_andMatrixOutputs_lo_3", false,-1, 1,0);
    tracep->declBus(c+43,"decodedBundle_andMatrixOutputs_hi_6", false,-1, 1,0);
    tracep->declBit(c+46,"decodedBundle_andMatrixOutputs_26_2", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_1_9", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_1_10", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_0_15", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_1_16", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_0_19", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_0_20", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_1_20", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_0_23", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_1_25", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_0_27", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_1_28", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_0_30", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_0_31", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_1_31", false,-1);
    tracep->declBit(c+47,"decodedBundle_andMatrixOutputs_andMatrixInput_1_32", false,-1);
    tracep->declBus(c+48,"decodedBundle_andMatrixOutputs_lo_4", false,-1, 1,0);
    tracep->declBus(c+49,"decodedBundle_andMatrixOutputs_hi_7", false,-1, 1,0);
    tracep->declBit(c+50,"decodedBundle_andMatrixOutputs_0_2", false,-1);
    tracep->declBus(c+51,"decodedBundle_andMatrixOutputs_hi_8", false,-1, 1,0);
    tracep->declBit(c+52,"decodedBundle_andMatrixOutputs_4_2", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_2_9", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_2_10", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_2_11", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_1_14", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_2_15", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_1_18", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_1_19", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_2_19", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_1_22", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_1_26", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_1_29", false,-1);
    tracep->declBit(c+53,"decodedBundle_andMatrixOutputs_andMatrixInput_1_30", false,-1);
    tracep->declBus(c+54,"decodedBundle_andMatrixOutputs_lo_5", false,-1, 1,0);
    tracep->declBus(c+55,"decodedBundle_andMatrixOutputs_hi_hi", false,-1, 1,0);
    tracep->declBus(c+56,"decodedBundle_andMatrixOutputs_hi_9", false,-1, 2,0);
    tracep->declBit(c+57,"decodedBundle_andMatrixOutputs_33_2", false,-1);
    tracep->declBus(c+58,"decodedBundle_andMatrixOutputs_lo_6", false,-1, 1,0);
    tracep->declBus(c+55,"decodedBundle_andMatrixOutputs_hi_10", false,-1, 1,0);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_20_2", false,-1);
    tracep->declBus(c+60,"decodedBundle_andMatrixOutputs_lo_7", false,-1, 1,0);
    tracep->declBus(c+55,"decodedBundle_andMatrixOutputs_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+56,"decodedBundle_andMatrixOutputs_hi_11", false,-1, 2,0);
    tracep->declBit(c+61,"decodedBundle_andMatrixOutputs_23_2", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_4_2", false,-1);
    tracep->declBus(c+63,"decodedBundle_andMatrixOutputs_lo_8", false,-1, 1,0);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_hi_2", false,-1, 1,0);
    tracep->declBus(c+65,"decodedBundle_andMatrixOutputs_hi_12", false,-1, 2,0);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_14_2", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_1_15", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_3_10", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_3_11", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_2_16", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_2_17", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_2_21", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_3_17", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_2_30", false,-1);
    tracep->declBus(c+68,"decodedBundle_andMatrixOutputs_lo_9", false,-1, 1,0);
    tracep->declBus(c+69,"decodedBundle_andMatrixOutputs_hi_13", false,-1, 1,0);
    tracep->declBit(c+70,"decodedBundle_andMatrixOutputs_21_2", false,-1);
    tracep->declBus(c+71,"decodedBundle_andMatrixOutputs_lo_10", false,-1, 1,0);
    tracep->declBus(c+49,"decodedBundle_andMatrixOutputs_hi_hi_3", false,-1, 1,0);
    tracep->declBus(c+72,"decodedBundle_andMatrixOutputs_hi_14", false,-1, 2,0);
    tracep->declBit(c+73,"decodedBundle_andMatrixOutputs_31_2", false,-1);
    tracep->declBus(c+74,"decodedBundle_andMatrixOutputs_lo_11", false,-1, 1,0);
    tracep->declBus(c+55,"decodedBundle_andMatrixOutputs_hi_15", false,-1, 1,0);
    tracep->declBit(c+75,"decodedBundle_andMatrixOutputs_7_2", false,-1);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_16", false,-1, 1,0);
    tracep->declBit(c+76,"decodedBundle_andMatrixOutputs_2_2", false,-1);
    tracep->declBus(c+77,"decodedBundle_andMatrixOutputs_lo_12", false,-1, 1,0);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_17", false,-1, 1,0);
    tracep->declBit(c+78,"decodedBundle_andMatrixOutputs_3_2", false,-1);
    tracep->declBit(c+79,"decodedBundle_andMatrixOutputs_andMatrixInput_3_13", false,-1);
    tracep->declBit(c+79,"decodedBundle_andMatrixOutputs_andMatrixInput_4_5", false,-1);
    tracep->declBit(c+79,"decodedBundle_andMatrixOutputs_andMatrixInput_3_15", false,-1);
    tracep->declBit(c+79,"decodedBundle_andMatrixOutputs_andMatrixInput_3_16", false,-1);
    tracep->declBit(c+79,"decodedBundle_andMatrixOutputs_andMatrixInput_3_18", false,-1);
    tracep->declBus(c+80,"decodedBundle_andMatrixOutputs_lo_13", false,-1, 1,0);
    tracep->declBus(c+49,"decodedBundle_andMatrixOutputs_hi_hi_4", false,-1, 1,0);
    tracep->declBus(c+72,"decodedBundle_andMatrixOutputs_hi_18", false,-1, 2,0);
    tracep->declBit(c+81,"decodedBundle_andMatrixOutputs_8_2", false,-1);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_lo_14", false,-1, 1,0);
    tracep->declBus(c+55,"decodedBundle_andMatrixOutputs_hi_hi_5", false,-1, 1,0);
    tracep->declBus(c+56,"decodedBundle_andMatrixOutputs_hi_19", false,-1, 2,0);
    tracep->declBit(c+83,"decodedBundle_andMatrixOutputs_15_2", false,-1);
    tracep->declBus(c+82,"decodedBundle_andMatrixOutputs_lo_15", false,-1, 1,0);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_20", false,-1, 1,0);
    tracep->declBit(c+84,"decodedBundle_andMatrixOutputs_1_2", false,-1);
    tracep->declBus(c+85,"decodedBundle_andMatrixOutputs_lo_16", false,-1, 1,0);
    tracep->declBus(c+86,"decodedBundle_andMatrixOutputs_hi_21", false,-1, 1,0);
    tracep->declBit(c+87,"decodedBundle_andMatrixOutputs_19_2", false,-1);
    tracep->declBit(c+88,"decodedBundle_andMatrixOutputs_andMatrixInput_2_22", false,-1);
    tracep->declBit(c+88,"decodedBundle_andMatrixOutputs_andMatrixInput_2_23", false,-1);
    tracep->declBit(c+88,"decodedBundle_andMatrixOutputs_andMatrixInput_2_24", false,-1);
    tracep->declBit(c+88,"decodedBundle_andMatrixOutputs_andMatrixInput_5", false,-1);
    tracep->declBit(c+88,"decodedBundle_andMatrixOutputs_andMatrixInput_4_7", false,-1);
    tracep->declBus(c+22,"decodedBundle_andMatrixOutputs_hi_22", false,-1, 1,0);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_27_2", false,-1);
    tracep->declBus(c+49,"decodedBundle_andMatrixOutputs_hi_23", false,-1, 1,0);
    tracep->declBit(c+90,"decodedBundle_andMatrixOutputs_6_2", false,-1);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_24", false,-1, 1,0);
    tracep->declBit(c+91,"decodedBundle_andMatrixOutputs_32_2", false,-1);
    tracep->declBus(c+77,"decodedBundle_andMatrixOutputs_lo_hi", false,-1, 1,0);
    tracep->declBus(c+92,"decodedBundle_andMatrixOutputs_lo_17", false,-1, 2,0);
    tracep->declBus(c+55,"decodedBundle_andMatrixOutputs_hi_hi_6", false,-1, 1,0);
    tracep->declBus(c+93,"decodedBundle_andMatrixOutputs_hi_25", false,-1, 2,0);
    tracep->declBit(c+94,"decodedBundle_andMatrixOutputs_24_2", false,-1);
    tracep->declBus(c+95,"decodedBundle_andMatrixOutputs_lo_18", false,-1, 1,0);
    tracep->declBus(c+49,"decodedBundle_andMatrixOutputs_hi_hi_7", false,-1, 1,0);
    tracep->declBus(c+96,"decodedBundle_andMatrixOutputs_hi_26", false,-1, 2,0);
    tracep->declBit(c+97,"decodedBundle_andMatrixOutputs_28_2", false,-1);
    tracep->declBit(c+98,"decodedBundle_andMatrixOutputs_andMatrixInput_4_8", false,-1);
    tracep->declBus(c+99,"decodedBundle_andMatrixOutputs_lo_19", false,-1, 1,0);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_hi_8", false,-1, 1,0);
    tracep->declBus(c+65,"decodedBundle_andMatrixOutputs_hi_27", false,-1, 2,0);
    tracep->declBit(c+266,"decodedBundle_andMatrixOutputs_16_2", false,-1);
    tracep->declBit(c+100,"decodedBundle_andMatrixOutputs_andMatrixInput_3_20", false,-1);
    tracep->declBus(c+101,"decodedBundle_andMatrixOutputs_lo_20", false,-1, 1,0);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_28", false,-1, 1,0);
    tracep->declBit(c+102,"decodedBundle_andMatrixOutputs_29_2", false,-1);
    tracep->declBit(c+103,"decodedBundle_andMatrixOutputs_andMatrixInput_3_21", false,-1);
    tracep->declBit(c+103,"decodedBundle_andMatrixOutputs_andMatrixInput_4_9", false,-1);
    tracep->declBus(c+104,"decodedBundle_andMatrixOutputs_lo_21", false,-1, 1,0);
    tracep->declBus(c+49,"decodedBundle_andMatrixOutputs_hi_29", false,-1, 1,0);
    tracep->declBit(c+105,"decodedBundle_andMatrixOutputs_5_2", false,-1);
    tracep->declBus(c+106,"decodedBundle_andMatrixOutputs_lo_22", false,-1, 1,0);
    tracep->declBus(c+49,"decodedBundle_andMatrixOutputs_hi_hi_9", false,-1, 1,0);
    tracep->declBus(c+107,"decodedBundle_andMatrixOutputs_hi_30", false,-1, 2,0);
    tracep->declBit(c+108,"decodedBundle_andMatrixOutputs_30_2", false,-1);
    tracep->declBus(c+109,"decodedBundle_orMatrixOutputs_lo_lo", false,-1, 1,0);
    tracep->declBus(c+109,"decodedBundle_orMatrixOutputs_lo_11", false,-1, 1,0);
    tracep->declBus(c+109,"decodedBundle_orMatrixOutputs_lo_lo_3", false,-1, 1,0);
    tracep->declBus(c+110,"decodedBundle_orMatrixOutputs_lo_hi", false,-1, 1,0);
    tracep->declBus(c+111,"decodedBundle_orMatrixOutputs_lo", false,-1, 3,0);
    tracep->declBus(c+112,"decodedBundle_orMatrixOutputs_hi_lo", false,-1, 1,0);
    tracep->declBus(c+113,"decodedBundle_orMatrixOutputs_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+114,"decodedBundle_orMatrixOutputs_hi_hi", false,-1, 2,0);
    tracep->declBus(c+115,"decodedBundle_orMatrixOutputs_hi", false,-1, 4,0);
    tracep->declBus(c+116,"decodedBundle_orMatrixOutputs_hi_1", false,-1, 1,0);
    tracep->declBus(c+116,"decodedBundle_orMatrixOutputs_hi_14", false,-1, 1,0);
    tracep->declBus(c+117,"decodedBundle_orMatrixOutputs_lo_hi_1", false,-1, 1,0);
    tracep->declBus(c+118,"decodedBundle_orMatrixOutputs_lo_1", false,-1, 2,0);
    tracep->declBus(c+119,"decodedBundle_orMatrixOutputs_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+119,"decodedBundle_orMatrixOutputs_hi_lo_6", false,-1, 1,0);
    tracep->declBus(c+120,"decodedBundle_orMatrixOutputs_hi_2", false,-1, 2,0);
    tracep->declBus(c+121,"decodedBundle_orMatrixOutputs_lo_hi_2", false,-1, 1,0);
    tracep->declBus(c+122,"decodedBundle_orMatrixOutputs_lo_2", false,-1, 2,0);
    tracep->declBus(c+123,"decodedBundle_orMatrixOutputs_hi_lo_1", false,-1, 1,0);
    tracep->declBus(c+124,"decodedBundle_orMatrixOutputs_hi_hi_2", false,-1, 1,0);
    tracep->declBus(c+124,"decodedBundle_orMatrixOutputs_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+124,"decodedBundle_orMatrixOutputs_hi_hi_4", false,-1, 1,0);
    tracep->declBus(c+124,"decodedBundle_orMatrixOutputs_hi_hi_10", false,-1, 1,0);
    tracep->declBus(c+125,"decodedBundle_orMatrixOutputs_hi_3", false,-1, 3,0);
    tracep->declBus(c+126,"decodedBundle_orMatrixOutputs_lo_lo_1", false,-1, 1,0);
    tracep->declBus(c+127,"decodedBundle_orMatrixOutputs_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+128,"decodedBundle_orMatrixOutputs_lo_hi_3", false,-1, 2,0);
    tracep->declBus(c+129,"decodedBundle_orMatrixOutputs_lo_3", false,-1, 4,0);
    tracep->declBus(c+130,"decodedBundle_orMatrixOutputs_hi_lo_2", false,-1, 1,0);
    tracep->declBus(c+130,"decodedBundle_orMatrixOutputs_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+131,"decodedBundle_orMatrixOutputs_hi_hi_3", false,-1, 2,0);
    tracep->declBus(c+132,"decodedBundle_orMatrixOutputs_hi_4", false,-1, 4,0);
    tracep->declBus(c+133,"decodedBundle_orMatrixOutputs_lo_hi_4", false,-1, 1,0);
    tracep->declBus(c+134,"decodedBundle_orMatrixOutputs_lo_4", false,-1, 2,0);
    tracep->declBus(c+135,"decodedBundle_orMatrixOutputs_hi_lo_3", false,-1, 1,0);
    tracep->declBus(c+136,"decodedBundle_orMatrixOutputs_hi_5", false,-1, 3,0);
    tracep->declBus(c+137,"decodedBundle_orMatrixOutputs_lo_5", false,-1, 1,0);
    tracep->declBus(c+138,"decodedBundle_orMatrixOutputs_hi_hi_5", false,-1, 1,0);
    tracep->declBus(c+139,"decodedBundle_orMatrixOutputs_hi_6", false,-1, 2,0);
    tracep->declBus(c+140,"decodedBundle_orMatrixOutputs_lo_6", false,-1, 1,0);
    tracep->declBus(c+141,"decodedBundle_orMatrixOutputs_hi_hi_6", false,-1, 1,0);
    tracep->declBus(c+142,"decodedBundle_orMatrixOutputs_hi_7", false,-1, 2,0);
    tracep->declBus(c+143,"decodedBundle_orMatrixOutputs_lo_lo_lo", false,-1, 1,0);
    tracep->declBus(c+144,"decodedBundle_orMatrixOutputs_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+145,"decodedBundle_orMatrixOutputs_lo_lo_2", false,-1, 3,0);
    tracep->declBus(c+146,"decodedBundle_orMatrixOutputs_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+147,"decodedBundle_orMatrixOutputs_lo_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+148,"decodedBundle_orMatrixOutputs_lo_hi_hi_1", false,-1, 2,0);
    tracep->declBus(c+149,"decodedBundle_orMatrixOutputs_lo_hi_5", false,-1, 4,0);
    tracep->declBus(c+150,"decodedBundle_orMatrixOutputs_lo_7", false,-1, 8,0);
    tracep->declBus(c+151,"decodedBundle_orMatrixOutputs_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+152,"decodedBundle_orMatrixOutputs_hi_lo_4", false,-1, 3,0);
    tracep->declBus(c+153,"decodedBundle_orMatrixOutputs_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+154,"decodedBundle_orMatrixOutputs_hi_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+155,"decodedBundle_orMatrixOutputs_hi_hi_hi_2", false,-1, 2,0);
    tracep->declBus(c+156,"decodedBundle_orMatrixOutputs_hi_hi_7", false,-1, 4,0);
    tracep->declBus(c+157,"decodedBundle_orMatrixOutputs_hi_8", false,-1, 8,0);
    tracep->declBus(c+158,"decodedBundle_orMatrixOutputs_lo_hi_6", false,-1, 1,0);
    tracep->declBus(c+159,"decodedBundle_orMatrixOutputs_lo_8", false,-1, 2,0);
    tracep->declBus(c+160,"decodedBundle_orMatrixOutputs_hi_lo_5", false,-1, 1,0);
    tracep->declBus(c+161,"decodedBundle_orMatrixOutputs_hi_hi_8", false,-1, 1,0);
    tracep->declBus(c+161,"decodedBundle_orMatrixOutputs_hi_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+162,"decodedBundle_orMatrixOutputs_hi_9", false,-1, 3,0);
    tracep->declBus(c+163,"decodedBundle_orMatrixOutputs_lo_9", false,-1, 1,0);
    tracep->declBus(c+164,"decodedBundle_orMatrixOutputs_hi_10", false,-1, 1,0);
    tracep->declBus(c+165,"decodedBundle_orMatrixOutputs_hi_11", false,-1, 1,0);
    tracep->declBus(c+166,"decodedBundle_orMatrixOutputs_hi_12", false,-1, 1,0);
    tracep->declBus(c+167,"decodedBundle_orMatrixOutputs_lo_10", false,-1, 1,0);
    tracep->declBus(c+168,"decodedBundle_orMatrixOutputs_hi_hi_9", false,-1, 1,0);
    tracep->declBus(c+168,"decodedBundle_orMatrixOutputs_hi_hi_11", false,-1, 1,0);
    tracep->declBus(c+169,"decodedBundle_orMatrixOutputs_hi_13", false,-1, 2,0);
    tracep->declBus(c+170,"decodedBundle_orMatrixOutputs_lo_hi_7", false,-1, 1,0);
    tracep->declBus(c+171,"decodedBundle_orMatrixOutputs_lo_12", false,-1, 3,0);
    tracep->declBus(c+172,"decodedBundle_orMatrixOutputs_hi_15", false,-1, 3,0);
    tracep->declBus(c+173,"decodedBundle_orMatrixOutputs_lo_13", false,-1, 1,0);
    tracep->declBus(c+174,"decodedBundle_orMatrixOutputs_hi_16", false,-1, 2,0);
    tracep->declBus(c+175,"decodedBundle_orMatrixOutputs_lo_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+176,"decodedBundle_orMatrixOutputs_lo_lo_lo_1", false,-1, 2,0);
    tracep->declBus(c+177,"decodedBundle_orMatrixOutputs_lo_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+178,"decodedBundle_orMatrixOutputs_lo_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+179,"decodedBundle_orMatrixOutputs_lo_lo_hi_1", false,-1, 3,0);
    tracep->declBus(c+180,"decodedBundle_orMatrixOutputs_lo_lo_4", false,-1, 6,0);
    tracep->declBus(c+181,"decodedBundle_orMatrixOutputs_lo_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+182,"decodedBundle_orMatrixOutputs_lo_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+183,"decodedBundle_orMatrixOutputs_lo_hi_lo_1", false,-1, 3,0);
    tracep->declBus(c+184,"decodedBundle_orMatrixOutputs_lo_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+185,"decodedBundle_orMatrixOutputs_lo_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+186,"decodedBundle_orMatrixOutputs_lo_hi_hi_2", false,-1, 3,0);
    tracep->declBus(c+187,"decodedBundle_orMatrixOutputs_lo_hi_8", false,-1, 7,0);
    tracep->declBus(c+188,"decodedBundle_orMatrixOutputs_lo_14", false,-1, 14,0);
    tracep->declBus(c+12,"decodedBundle_orMatrixOutputs_hi_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+189,"decodedBundle_orMatrixOutputs_hi_lo_lo_1", false,-1, 2,0);
    tracep->declBus(c+190,"decodedBundle_orMatrixOutputs_hi_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+191,"decodedBundle_orMatrixOutputs_hi_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+192,"decodedBundle_orMatrixOutputs_hi_lo_hi_1", false,-1, 3,0);
    tracep->declBus(c+193,"decodedBundle_orMatrixOutputs_hi_lo_7", false,-1, 6,0);
    tracep->declBus(c+302,"decodedBundle_orMatrixOutputs_hi_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+314,"decodedBundle_orMatrixOutputs_hi_hi_lo_1", false,-1, 3,0);
    tracep->declBus(c+315,"decodedBundle_orMatrixOutputs_hi_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+316,"decodedBundle_orMatrixOutputs_hi_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+194,"decodedBundle_orMatrixOutputs_hi_hi_hi_3", false,-1, 3,0);
    tracep->declBus(c+317,"decodedBundle_orMatrixOutputs_hi_hi_12", false,-1, 7,0);
    tracep->declBus(c+195,"decodedBundle_orMatrixOutputs_hi_17", false,-1, 14,0);
    tracep->declBus(c+16,"decodedBundle_orMatrixOutputs", false,-1, 29,0);
    tracep->declBus(c+175,"decodedBundle_invMatrixOutputs_lo_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+176,"decodedBundle_invMatrixOutputs_lo_lo_lo", false,-1, 2,0);
    tracep->declBus(c+177,"decodedBundle_invMatrixOutputs_lo_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+178,"decodedBundle_invMatrixOutputs_lo_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+179,"decodedBundle_invMatrixOutputs_lo_lo_hi", false,-1, 3,0);
    tracep->declBus(c+180,"decodedBundle_invMatrixOutputs_lo_lo", false,-1, 6,0);
    tracep->declBus(c+181,"decodedBundle_invMatrixOutputs_lo_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+182,"decodedBundle_invMatrixOutputs_lo_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+183,"decodedBundle_invMatrixOutputs_lo_hi_lo", false,-1, 3,0);
    tracep->declBus(c+184,"decodedBundle_invMatrixOutputs_lo_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+185,"decodedBundle_invMatrixOutputs_lo_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+186,"decodedBundle_invMatrixOutputs_lo_hi_hi", false,-1, 3,0);
    tracep->declBus(c+187,"decodedBundle_invMatrixOutputs_lo_hi", false,-1, 7,0);
    tracep->declBus(c+188,"decodedBundle_invMatrixOutputs_lo", false,-1, 14,0);
    tracep->declBus(c+12,"decodedBundle_invMatrixOutputs_hi_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+189,"decodedBundle_invMatrixOutputs_hi_lo_lo", false,-1, 2,0);
    tracep->declBus(c+190,"decodedBundle_invMatrixOutputs_hi_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+191,"decodedBundle_invMatrixOutputs_hi_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+192,"decodedBundle_invMatrixOutputs_hi_lo_hi", false,-1, 3,0);
    tracep->declBus(c+193,"decodedBundle_invMatrixOutputs_hi_lo", false,-1, 6,0);
    tracep->declBus(c+161,"decodedBundle_invMatrixOutputs_hi_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+302,"decodedBundle_invMatrixOutputs_hi_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+314,"decodedBundle_invMatrixOutputs_hi_hi_lo", false,-1, 3,0);
    tracep->declBus(c+315,"decodedBundle_invMatrixOutputs_hi_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+316,"decodedBundle_invMatrixOutputs_hi_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+194,"decodedBundle_invMatrixOutputs_hi_hi_hi", false,-1, 3,0);
    tracep->declBus(c+317,"decodedBundle_invMatrixOutputs_hi_hi", false,-1, 7,0);
    tracep->declBus(c+195,"decodedBundle_invMatrixOutputs_hi", false,-1, 14,0);
    tracep->declBus(c+16,"decodedBundle_plaOutput", false,-1, 29,0);
    tracep->declBit(c+266,"io_Ebreak_0", false,-1);
    tracep->declBit(c+292,"io_Valid_0", false,-1);
    tracep->declBit(c+303,"io_WbEn_0", false,-1);
    tracep->declBit(c+295,"io_MemRW_0", false,-1);
    tracep->declBus(c+302,"io_WbSel_0", false,-1, 1,0);
    tracep->declBus(c+298,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+13,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+12,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+11,"io_BrType_0", false,-1, 2,0);
    tracep->declBus(c+269,"io_ALUSel_0", false,-1, 3,0);
    tracep->declBus(c+271,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+10,"io_BSel_0", false,-1, 1,0);
    tracep->declBus(c+9,"io_ASel_0", false,-1, 1,0);
    tracep->declBus(c+14,"io_PCSel_0", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CompareInstance ");
    tracep->declBus(c+318,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+294,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+11,"io_BrType", false,-1, 2,0);
    tracep->declBit(c+225,"io_result", false,-1);
    tracep->declBus(c+318,"io_rs1_0", false,-1, 31,0);
    tracep->declBus(c+294,"io_rs2_0", false,-1, 31,0);
    tracep->declBus(c+11,"io_BrType_0", false,-1, 2,0);
    tracep->declBit(c+225,"io_result_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ImmGenInstance ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+271,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+196,"io_out", false,-1, 31,0);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBus(c+271,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+197,"Iimm", false,-1, 31,0);
    tracep->declBus(c+198,"Simm_hi", false,-1, 26,0);
    tracep->declBus(c+199,"Simm", false,-1, 31,0);
    tracep->declBus(c+200,"Bimm_lo", false,-1, 4,0);
    tracep->declBus(c+201,"Bimm_hi_hi", false,-1, 20,0);
    tracep->declBus(c+202,"Bimm_hi", false,-1, 26,0);
    tracep->declBus(c+203,"Bimm", false,-1, 31,0);
    tracep->declBus(c+204,"Uimm", false,-1, 31,0);
    tracep->declBus(c+205,"Jimm_lo_hi", false,-1, 9,0);
    tracep->declBus(c+206,"Jimm_lo", false,-1, 10,0);
    tracep->declBus(c+207,"Jimm_hi_hi", false,-1, 19,0);
    tracep->declBus(c+208,"Jimm_hi", false,-1, 20,0);
    tracep->declBus(c+209,"Jimm", false,-1, 31,0);
    tracep->declBus(c+210,"Zimm", false,-1, 31,0);
    tracep->declBus(c+196,"io_out_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("JPCGenInstance ");
    tracep->declBus(c+270,"io_alu_data", false,-1, 31,0);
    tracep->declBus(c+319,"io_pc_alu", false,-1, 31,0);
    tracep->declBus(c+270,"io_alu_data_0", false,-1, 31,0);
    tracep->declBus(c+319,"io_pc_alu_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LdDataInstance ");
    tracep->declBus(c+13,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+296,"io_rdata", false,-1, 31,0);
    tracep->declBus(c+320,"io_wb_data", false,-1, 31,0);
    tracep->declBus(c+13,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+296,"io_rdata_0", false,-1, 31,0);
    tracep->declBus(c+320,"io_wb_data_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFileInstance ");
    tracep->declBit(c+264,"clock", false,-1);
    tracep->declBus(c+211,"io_raddr1", false,-1, 4,0);
    tracep->declBus(c+212,"io_raddr2", false,-1, 4,0);
    tracep->declBus(c+318,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+294,"io_rs2", false,-1, 31,0);
    tracep->declBit(c+303,"io_wen", false,-1);
    tracep->declBus(c+213,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+301,"io_wdata", false,-1, 31,0);
    tracep->declArray(c+272,"io_gpr", false,-1, 511,0);
    tracep->declBus(c+211,"io_raddr1_0", false,-1, 4,0);
    tracep->declBus(c+212,"io_raddr2_0", false,-1, 4,0);
    tracep->declBit(c+303,"io_wen_0", false,-1);
    tracep->declBus(c+213,"io_waddr_0", false,-1, 4,0);
    tracep->declBus(c+301,"io_wdata_0", false,-1, 31,0);
    tracep->declBus(c+318,"io_rs1_0", false,-1, 31,0);
    tracep->declBus(c+294,"io_rs2_0", false,-1, 31,0);
    tracep->declArray(c+272,"io_gpr_0", false,-1, 511,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+214,"R0_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R0_en", false,-1);
    tracep->declBit(c+264,"R0_clk", false,-1);
    tracep->declBus(c+321,"R0_data", false,-1, 31,0);
    tracep->declBus(c+215,"R1_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R1_en", false,-1);
    tracep->declBit(c+264,"R1_clk", false,-1);
    tracep->declBus(c+322,"R1_data", false,-1, 31,0);
    tracep->declBus(c+333,"R2_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R2_en", false,-1);
    tracep->declBit(c+264,"R2_clk", false,-1);
    tracep->declBus(c+232,"R2_data", false,-1, 31,0);
    tracep->declBus(c+334,"R3_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R3_en", false,-1);
    tracep->declBit(c+264,"R3_clk", false,-1);
    tracep->declBus(c+233,"R3_data", false,-1, 31,0);
    tracep->declBus(c+335,"R4_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R4_en", false,-1);
    tracep->declBit(c+264,"R4_clk", false,-1);
    tracep->declBus(c+234,"R4_data", false,-1, 31,0);
    tracep->declBus(c+336,"R5_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R5_en", false,-1);
    tracep->declBit(c+264,"R5_clk", false,-1);
    tracep->declBus(c+235,"R5_data", false,-1, 31,0);
    tracep->declBus(c+337,"R6_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R6_en", false,-1);
    tracep->declBit(c+264,"R6_clk", false,-1);
    tracep->declBus(c+236,"R6_data", false,-1, 31,0);
    tracep->declBus(c+338,"R7_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R7_en", false,-1);
    tracep->declBit(c+264,"R7_clk", false,-1);
    tracep->declBus(c+237,"R7_data", false,-1, 31,0);
    tracep->declBus(c+339,"R8_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R8_en", false,-1);
    tracep->declBit(c+264,"R8_clk", false,-1);
    tracep->declBus(c+238,"R8_data", false,-1, 31,0);
    tracep->declBus(c+340,"R9_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R9_en", false,-1);
    tracep->declBit(c+264,"R9_clk", false,-1);
    tracep->declBus(c+239,"R9_data", false,-1, 31,0);
    tracep->declBus(c+341,"R10_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R10_en", false,-1);
    tracep->declBit(c+264,"R10_clk", false,-1);
    tracep->declBus(c+240,"R10_data", false,-1, 31,0);
    tracep->declBus(c+342,"R11_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R11_en", false,-1);
    tracep->declBit(c+264,"R11_clk", false,-1);
    tracep->declBus(c+241,"R11_data", false,-1, 31,0);
    tracep->declBus(c+343,"R12_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R12_en", false,-1);
    tracep->declBit(c+264,"R12_clk", false,-1);
    tracep->declBus(c+242,"R12_data", false,-1, 31,0);
    tracep->declBus(c+344,"R13_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R13_en", false,-1);
    tracep->declBit(c+264,"R13_clk", false,-1);
    tracep->declBus(c+243,"R13_data", false,-1, 31,0);
    tracep->declBus(c+345,"R14_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R14_en", false,-1);
    tracep->declBit(c+264,"R14_clk", false,-1);
    tracep->declBus(c+244,"R14_data", false,-1, 31,0);
    tracep->declBus(c+346,"R15_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R15_en", false,-1);
    tracep->declBit(c+264,"R15_clk", false,-1);
    tracep->declBus(c+245,"R15_data", false,-1, 31,0);
    tracep->declBus(c+347,"R16_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R16_en", false,-1);
    tracep->declBit(c+264,"R16_clk", false,-1);
    tracep->declBus(c+246,"R16_data", false,-1, 31,0);
    tracep->declBus(c+348,"R17_addr", false,-1, 3,0);
    tracep->declBit(c+326,"R17_en", false,-1);
    tracep->declBit(c+264,"R17_clk", false,-1);
    tracep->declBus(c+247,"R17_data", false,-1, 31,0);
    tracep->declBus(c+216,"W0_addr", false,-1, 3,0);
    tracep->declBit(c+323,"W0_en", false,-1);
    tracep->declBit(c+264,"W0_clk", false,-1);
    tracep->declBus(c+301,"W0_data", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+248+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WmaskGenInstance ");
    tracep->declBus(c+12,"io_StType", false,-1, 1,0);
    tracep->declBus(c+2,"io_wmask", false,-1, 3,0);
    tracep->declBus(c+12,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+2,"io_wmask_0", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory ");
    tracep->declBit(c+264,"clock", false,-1);
    tracep->declBus(c+267,"io_pc", false,-1, 31,0);
    tracep->declBus(c+267,"io_imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst", false,-1, 31,0);
    tracep->declBus(c+270,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+294,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+295,"io_dmem_wen", false,-1);
    tracep->declBit(c+292,"io_dmem_valid", false,-1);
    tracep->declBus(c+2,"io_dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+296,"io_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+296,"io_dmem_rdata_0", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst_0", false,-1, 31,0);
    tracep->declBus(c+267,"io_pc_0", false,-1, 31,0);
    tracep->declBus(c+267,"io_imem_addr_0", false,-1, 31,0);
    tracep->declBus(c+270,"io_dmem_addr_0", false,-1, 31,0);
    tracep->declBus(c+294,"io_dmem_wdata_0", false,-1, 31,0);
    tracep->declBit(c+295,"io_dmem_wen_0", false,-1);
    tracep->declBit(c+292,"io_dmem_valid_0", false,-1);
    tracep->declBus(c+2,"io_dmem_wmask_0", false,-1, 3,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+264,"clk", false,-1);
    tracep->declBus(c+267,"pc", false,-1, 31,0);
    tracep->declBus(c+267,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"imem_inst", false,-1, 31,0);
    tracep->declBit(c+292,"valid", false,-1);
    tracep->declBus(c+270,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+294,"dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+295,"dmem_wen", false,-1);
    tracep->declBus(c+2,"dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+296,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+1,"imem", false,-1, 31,0);
    tracep->declBus(c+324,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+325,"full_mask", false,-1, 31,0);
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
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Top__DOT__memory__DOT__mem__DOT__imem),32);
    bufp->fullCData(oldp+2,(vlSelf->Top__DOT___core_io_dmem_wmask),4);
    bufp->fullBit(oldp+3,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6));
    bufp->fullBit(oldp+4,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2));
    bufp->fullBit(oldp+5,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1));
    bufp->fullBit(oldp+6,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11));
    bufp->fullBit(oldp+7,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7));
    bufp->fullBit(oldp+8,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_9));
    bufp->fullCData(oldp+9,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                                   >> 2U))),2);
    bufp->fullCData(oldp+10,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                                    >> 1U))),2);
    bufp->fullCData(oldp+11,((7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                    >> 0xdU))),3);
    bufp->fullCData(oldp+12,(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType),2);
    bufp->fullCData(oldp+13,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                               << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))),3);
    bufp->fullCData(oldp+14,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel),2);
    bufp->fullIData(oldp+15,((~ vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)),32);
    bufp->fullIData(oldp+16,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs),30);
    bufp->fullBit(oldp+17,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 2U)))));
    bufp->fullBit(oldp+18,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 5U)))));
    bufp->fullBit(oldp+19,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2));
    bufp->fullBit(oldp+20,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 4U)))));
    bufp->fullBit(oldp+21,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xcU)))));
    bufp->fullCData(oldp+22,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi),2);
    bufp->fullBit(oldp+23,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2));
    bufp->fullBit(oldp+24,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+25,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xeU)))));
    bufp->fullCData(oldp+26,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 5U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+27,((IData)((0U == (0x6020U 
                                           & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
    bufp->fullCData(oldp+28,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0xeU))))),2);
    bufp->fullBit(oldp+29,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2));
    bufp->fullBit(oldp+30,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0x1eU)))));
    bufp->fullCData(oldp+31,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0xeU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0x1eU))))),2);
    bufp->fullCData(oldp+32,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 2U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+33,((IData)((0U == (0x40006004U 
                                           & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 2U))));
    bufp->fullBit(oldp+35,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 3U)))));
    bufp->fullCData(oldp+36,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 3U))))),2);
    bufp->fullBit(oldp+37,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2));
    bufp->fullBit(oldp+38,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2));
    bufp->fullBit(oldp+39,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 3U))));
    bufp->fullBit(oldp+40,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 5U))));
    bufp->fullBit(oldp+41,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 6U)))));
    bufp->fullCData(oldp+42,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 6U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                          >> 0xcU))))),2);
    bufp->fullCData(oldp+43,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5),2);
    bufp->fullBit(oldp+44,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2));
    bufp->fullCData(oldp+45,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 6U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+46,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2));
    bufp->fullBit(oldp+47,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 4U))));
    bufp->fullCData(oldp+48,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 4U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 6U))))),2);
    bufp->fullCData(oldp+49,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7),2);
    bufp->fullBit(oldp+50,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2));
    bufp->fullCData(oldp+51,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 1U)) | (1U 
                                                & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 4U)))),2);
    bufp->fullBit(oldp+52,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2));
    bufp->fullBit(oldp+53,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 6U))));
    bufp->fullCData(oldp+54,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0xcU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0xdU))))),2);
    bufp->fullCData(oldp+55,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi),2);
    bufp->fullCData(oldp+56,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9),3);
    bufp->fullBit(oldp+57,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2));
    bufp->fullCData(oldp+58,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 5U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0xeU))))),2);
    bufp->fullBit(oldp+59,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                            & (IData)((0x40U == (0x4040U 
                                                 & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
    bufp->fullCData(oldp+60,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0xcU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0xeU))))),2);
    bufp->fullBit(oldp+61,(((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                            & (IData)((0U == (0x5000U 
                                              & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
    bufp->fullBit(oldp+62,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0x14U)))));
    bufp->fullCData(oldp+63,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0x14U))))),2);
    bufp->fullCData(oldp+64,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2),2);
    bufp->fullCData(oldp+65,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12),3);
    bufp->fullBit(oldp+66,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2));
    bufp->fullBit(oldp+67,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 0xcU))));
    bufp->fullCData(oldp+68,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0x1eU))))),2);
    bufp->fullCData(oldp+69,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 2U)) << 1U)) 
                              | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                       >> 0xcU)))),2);
    bufp->fullBit(oldp+70,((IData)((0x1000U == (0x40003004U 
                                                & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
    bufp->fullCData(oldp+71,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xbU)) | (1U 
                                                  & (~ 
                                                     (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                      >> 0xeU))))),2);
    bufp->fullCData(oldp+72,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14),3);
    bufp->fullBit(oldp+73,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2));
    bufp->fullCData(oldp+74,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 5U)) | (1U 
                                                & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 0xcU)))),2);
    bufp->fullBit(oldp+75,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2));
    bufp->fullBit(oldp+76,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2));
    bufp->fullCData(oldp+77,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12),2);
    bufp->fullBit(oldp+78,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                            & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12)))));
    bufp->fullBit(oldp+79,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 0xdU))));
    bufp->fullCData(oldp+80,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xcU)) | (1U 
                                                  & (~ 
                                                     (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                      >> 0xeU))))),2);
    bufp->fullBit(oldp+81,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2));
    bufp->fullCData(oldp+82,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14),2);
    bufp->fullBit(oldp+83,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2));
    bufp->fullBit(oldp+84,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2));
    bufp->fullCData(oldp+85,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xbU)) | (1U 
                                                  & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                     >> 0xdU)))),2);
    bufp->fullCData(oldp+86,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 2U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                          >> 6U))))),2);
    bufp->fullBit(oldp+87,((IData)((0x3000U == (0x3044U 
                                                & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
    bufp->fullBit(oldp+88,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 0xeU))));
    bufp->fullBit(oldp+89,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2));
    bufp->fullBit(oldp+90,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                            & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                               >> 0xeU))));
    bufp->fullBit(oldp+91,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2));
    bufp->fullCData(oldp+92,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12) 
                               << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 0xeU)))),3);
    bufp->fullCData(oldp+93,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi) 
                               << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 5U)))),3);
    bufp->fullBit(oldp+94,((IData)((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                     & (0x4020U == 
                                        (0x4020U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                    & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))));
    bufp->fullCData(oldp+95,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xcU)) | (1U 
                                                  & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                     >> 0xeU)))),2);
    bufp->fullCData(oldp+96,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                               << 1U) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                  >> 0xcU))))),3);
    bufp->fullBit(oldp+97,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2));
    bufp->fullBit(oldp+98,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 0x14U))));
    bufp->fullCData(oldp+99,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 0x14U)))),2);
    bufp->fullBit(oldp+100,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                   >> 0x15U))));
    bufp->fullCData(oldp+101,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                          >> 0xcU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0x15U)))),2);
    bufp->fullBit(oldp+102,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                             & (IData)((0x200000U == 
                                        (0x201000U 
                                         & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+104,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                      >> 4U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0x1eU)))),2);
    bufp->fullBit(oldp+105,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                             & (IData)((0x40000020U 
                                        == (0x40000020U 
                                            & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
    bufp->fullCData(oldp+106,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0x1eU)))),2);
    bufp->fullCData(oldp+107,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                                << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                >> 0xcU)))),3);
    bufp->fullBit(oldp+108,((IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                     & (0x40001000U 
                                        == (0x40003000U 
                                            & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
    bufp->fullCData(oldp+109,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN),2);
    bufp->fullCData(oldp+110,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2))),2);
    bufp->fullCData(oldp+111,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
    bufp->fullCData(oldp+112,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
    bufp->fullCData(oldp+113,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
    bufp->fullCData(oldp+114,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2)))),3);
    bufp->fullCData(oldp+115,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                 << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2)))),5);
    bufp->fullCData(oldp+116,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0),2);
    bufp->fullCData(oldp+117,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
    bufp->fullCData(oldp+118,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
    bufp->fullCData(oldp+119,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1),2);
    bufp->fullCData(oldp+120,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),3);
    bufp->fullCData(oldp+121,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
    bufp->fullCData(oldp+122,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),3);
    bufp->fullCData(oldp+123,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1),2);
    bufp->fullCData(oldp+124,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2),2);
    bufp->fullCData(oldp+125,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))),4);
    bufp->fullCData(oldp+126,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
    bufp->fullCData(oldp+127,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+128,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)))),3);
    bufp->fullCData(oldp+129,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                 << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),5);
    bufp->fullCData(oldp+130,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3),2);
    bufp->fullCData(oldp+131,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),3);
    bufp->fullCData(oldp+132,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3)))),5);
    bufp->fullCData(oldp+133,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
    bufp->fullCData(oldp+134,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
    bufp->fullCData(oldp+135,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+136,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2)))),4);
    bufp->fullCData(oldp+137,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
    bufp->fullCData(oldp+138,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),2);
    bufp->fullCData(oldp+139,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2)))),3);
    bufp->fullCData(oldp+140,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
    bufp->fullCData(oldp+141,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                      >> 2U)) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),2);
    bufp->fullCData(oldp+142,(((4U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                      >> 1U)) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)))),3);
    bufp->fullCData(oldp+143,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2))),2);
    bufp->fullCData(oldp+144,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+145,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                 << 3U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                           << 2U)) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2)))),4);
    bufp->fullCData(oldp+146,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
    bufp->fullCData(oldp+147,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 1U) | (IData)((0x1000U 
                                                  == 
                                                  (0x40003004U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))),2);
    bufp->fullCData(oldp+148,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 2U) | (((IData)(
                                                   (0x1000U 
                                                    == 
                                                    (0x40003004U 
                                                     & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)))),3);
    bufp->fullCData(oldp+149,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                 << 4U) | (((IData)(
                                                    (0x1000U 
                                                     == 
                                                     (0x40003004U 
                                                      & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2)))),5);
    bufp->fullSData(oldp+150,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                  << 8U) | (((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x40003004U 
                                                       & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
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
    bufp->fullCData(oldp+151,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),2);
    bufp->fullCData(oldp+152,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)))),4);
    bufp->fullCData(oldp+153,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
    bufp->fullCData(oldp+154,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                << 1U) | (IData)((0U 
                                                  == 
                                                  (0x6020U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))),2);
    bufp->fullCData(oldp+155,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    == 
                                                    (0x6020U 
                                                     & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                           << 1U) | (IData)(
                                                            (0U 
                                                             == 
                                                             (0x40006004U 
                                                              & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))))),3);
    bufp->fullCData(oldp+156,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     == 
                                                     (0x6020U 
                                                      & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                            << 3U) 
                                           | ((IData)(
                                                      (0U 
                                                       == 
                                                       (0x40006004U 
                                                        & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2)))),5);
    bufp->fullSData(oldp+157,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                  << 8U) | (((IData)(
                                                     (0U 
                                                      == 
                                                      (0x6020U 
                                                       & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                             << 7U) 
                                            | ((IData)(
                                                       (0U 
                                                        == 
                                                        (0x40006004U 
                                                         & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                               << 6U))) 
                                | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                    << 5U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              << 4U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))))),9);
    bufp->fullCData(oldp+158,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                                << 1U) | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                          & (IData)(
                                                    (0x40000020U 
                                                     == 
                                                     (0x40000020U 
                                                      & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))))),2);
    bufp->fullCData(oldp+159,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                                << 2U) | ((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                            & (IData)(
                                                      (0x40000020U 
                                                       == 
                                                       (0x40000020U 
                                                        & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))) 
                                           << 1U) | (IData)(
                                                            ((3U 
                                                              == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                                             & (0x40001000U 
                                                                == 
                                                                (0x40003000U 
                                                                 & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))))),3);
    bufp->fullCData(oldp+160,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+161,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4),2);
    bufp->fullCData(oldp+162,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),4);
    bufp->fullCData(oldp+163,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                << 1U) | (IData)((0x3000U 
                                                  == 
                                                  (0x3044U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))),2);
    bufp->fullCData(oldp+164,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2))),2);
    bufp->fullCData(oldp+165,(((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                 & (IData)((0U == (0x5000U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
    bufp->fullCData(oldp+166,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                 & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+167,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+168,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5),2);
    bufp->fullCData(oldp+169,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),3);
    bufp->fullCData(oldp+170,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+171,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
    bufp->fullCData(oldp+172,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1))),4);
    bufp->fullCData(oldp+173,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+174,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),3);
    bufp->fullCData(oldp+175,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0))),2);
    bufp->fullCData(oldp+176,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0)))),3);
    bufp->fullCData(oldp+177,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
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
    bufp->fullCData(oldp+178,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                  | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
    bufp->fullCData(oldp+179,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1),4);
    bufp->fullCData(oldp+180,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4),7);
    bufp->fullCData(oldp+181,(((2U & (((0x3ffffffeU 
                                        & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
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
    bufp->fullCData(oldp+182,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi),2);
    bufp->fullCData(oldp+183,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi) 
                                << 2U) | ((2U & (((0x3ffffffeU 
                                                   & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
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
    bufp->fullCData(oldp+184,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                    >> 0xeU)) << 1U) 
                               | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                    | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                  | (0x3000U == (0x3044U 
                                                 & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))),2);
    bufp->fullCData(oldp+185,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                    & (IData)((0x40U 
                                               == (0x4040U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                << 1U) | ((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                            & (IData)(
                                                      (0U 
                                                       == 
                                                       (0x5000U 
                                                        & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)) 
                                          | (IData)(
                                                    (((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                                      & (0x4020U 
                                                         == 
                                                         (0x4020U 
                                                          & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                                     & (3U 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))))),2);
    bufp->fullCData(oldp+186,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                  | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                     & (IData)((0x40U 
                                                == 
                                                (0x4040U 
                                                 & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                 << 3U) | (((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                              & (IData)(
                                                        (0U 
                                                         == 
                                                         (0x5000U 
                                                          & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)) 
                                            | (IData)(
                                                      (((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                                        & (0x4020U 
                                                           == 
                                                           (0x4020U 
                                                            & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                                       & (3U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))) 
                                           << 2U)) 
                               | ((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                    & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                       >> 0xeU)) << 1U) 
                                  | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                      | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                     | (0x3000U == 
                                        (0x3044U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))))),4);
    bufp->fullCData(oldp+187,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8),8);
    bufp->fullSData(oldp+188,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14),15);
    bufp->fullCData(oldp+189,((((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),3);
    bufp->fullCData(oldp+190,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo),2);
    bufp->fullCData(oldp+191,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                   & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (IData)((0x200000U 
                                               == (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+192,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                   & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (IData)((0x200000U 
                                               == (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo)))),4);
    bufp->fullCData(oldp+193,((((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                  | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                     & (IData)((0x200000U 
                                                == 
                                                (0x201000U 
                                                 & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                 << 6U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                            << 5U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo) 
                                              << 3U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)))),7);
    bufp->fullCData(oldp+194,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_hi_hi_3),4);
    bufp->fullSData(oldp+195,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17),15);
    bufp->fullIData(oldp+196,(vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0),32);
    bufp->fullIData(oldp+197,((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0x1fU))) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 0x14U)))),32);
    bufp->fullIData(oldp+198,(((0x7ffffc0U & ((- (IData)(
                                                         (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                          >> 0x1fU))) 
                                              << 6U)) 
                               | (0x3fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 0x19U)))),27);
    bufp->fullIData(oldp+199,((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0x1fU))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                  >> 7U))))),32);
    bufp->fullCData(oldp+200,((0x1eU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 7U))),5);
    bufp->fullIData(oldp+201,(((0x1ffffeU & ((- (IData)(
                                                        (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                         >> 0x1fU))) 
                                             << 1U)) 
                               | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 7U)))),21);
    bufp->fullIData(oldp+202,(((0x7ffff80U & ((- (IData)(
                                                         (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                          >> 0x1fU))) 
                                              << 7U)) 
                               | ((0x40U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 1U)) 
                                  | (0x3fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                              >> 0x19U))))),27);
    bufp->fullIData(oldp+203,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                 << 4U)) 
                                             | (0x7e0U 
                                                & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 0x14U)))) 
                               | (0x1eU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 7U)))),32);
    bufp->fullIData(oldp+204,((0xfffff000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)),32);
    bufp->fullSData(oldp+205,((0x3ffU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0x15U))),10);
    bufp->fullSData(oldp+206,((0x7feU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0x14U))),11);
    bufp->fullIData(oldp+207,(((0xfff00U & ((- (IData)(
                                                       (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                        >> 0x1fU))) 
                                            << 8U)) 
                               | (0xffU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 0xcU)))),20);
    bufp->fullIData(oldp+208,(((0x1ffe00U & ((- (IData)(
                                                        (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                         >> 0x1fU))) 
                                             << 9U)) 
                               | ((0x1feU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                             >> 0xbU)) 
                                  | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 0x14U))))),21);
    bufp->fullIData(oldp+209,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem) 
                                              | (0x800U 
                                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 9U)))) 
                               | (0x7feU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+210,((0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xfU))),32);
    bufp->fullCData(oldp+211,((0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+212,((0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+213,((0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 7U))),5);
    bufp->fullCData(oldp+214,((0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+215,((0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                       >> 0xfU))),4);
    bufp->fullCData(oldp+216,((0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                       >> 7U))),4);
    bufp->fullIData(oldp+217,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B),32);
    bufp->fullCData(oldp+218,((0x1fU & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B)),5);
    bufp->fullIData(oldp+219,(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata),32);
    bufp->fullIData(oldp+220,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+221,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+222,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+223,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11)
                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+224,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+225,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                   >> (7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                             >> 0xdU))))));
    bufp->fullIData(oldp+226,(vlSelf->Top__DOT__core__DOT__pc),32);
    bufp->fullIData(oldp+227,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc)),32);
    bufp->fullQData(oldp+228,((QData)((IData)(((0x80U 
                                                & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                   [0x300U] 
                                                   << 4U)) 
                                               | (0xffffff7fU 
                                                  & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                  [0x300U]))))),36);
    bufp->fullIData(oldp+230,((0x80U | ((0xfffffff7U 
                                         & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                         [0x300U]) 
                                        | (8U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                 [0x300U] 
                                                 >> 4U))))),32);
    bufp->fullIData(oldp+231,(((0x80U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                         [0x300U] << 4U)) 
                               | (0xffffff7fU & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                  [0x300U]))),32);
    bufp->fullIData(oldp+232,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [9U]),32);
    bufp->fullIData(oldp+233,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [8U]),32);
    bufp->fullIData(oldp+234,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [7U]),32);
    bufp->fullIData(oldp+235,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [6U]),32);
    bufp->fullIData(oldp+236,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [5U]),32);
    bufp->fullIData(oldp+237,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [4U]),32);
    bufp->fullIData(oldp+238,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [3U]),32);
    bufp->fullIData(oldp+239,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [2U]),32);
    bufp->fullIData(oldp+240,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [1U]),32);
    bufp->fullIData(oldp+241,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xfU]),32);
    bufp->fullIData(oldp+242,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xeU]),32);
    bufp->fullIData(oldp+243,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xdU]),32);
    bufp->fullIData(oldp+244,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xcU]),32);
    bufp->fullIData(oldp+245,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xbU]),32);
    bufp->fullIData(oldp+246,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xaU]),32);
    bufp->fullIData(oldp+247,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0U]),32);
    bufp->fullIData(oldp+248,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+249,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+250,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+251,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+252,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+253,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+254,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+255,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+256,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+257,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+258,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+259,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+260,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+261,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+262,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+263,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullBit(oldp+264,(vlSelf->clock));
    bufp->fullBit(oldp+265,(vlSelf->reset));
    bufp->fullBit(oldp+266,(vlSelf->io_ebreak));
    bufp->fullIData(oldp+267,(vlSelf->io_debug_pc),32);
    bufp->fullCData(oldp+268,(vlSelf->io_debug_PCSel),2);
    bufp->fullCData(oldp+269,(vlSelf->io_debug_alu_op),4);
    bufp->fullIData(oldp+270,(vlSelf->io_debug_alu_out),32);
    bufp->fullCData(oldp+271,(vlSelf->io_debug_imm_sel),3);
    bufp->fullWData(oldp+272,(vlSelf->io_debug_gpr),512);
    bufp->fullIData(oldp+288,(vlSelf->io_debug_mtvec),32);
    bufp->fullIData(oldp+289,(vlSelf->io_debug_mepc),32);
    bufp->fullIData(oldp+290,(vlSelf->io_debug_mcause),32);
    bufp->fullIData(oldp+291,(vlSelf->io_debug_mstatus),32);
    bufp->fullBit(oldp+292,(vlSelf->io_debug_Valid));
    bufp->fullIData(oldp+293,(vlSelf->io_debug_addr),32);
    bufp->fullIData(oldp+294,(vlSelf->io_debug_wdata),32);
    bufp->fullBit(oldp+295,(vlSelf->io_debug_wen));
    bufp->fullIData(oldp+296,(vlSelf->io_debug_rdata),32);
    bufp->fullSData(oldp+297,(vlSelf->io_debug_csr_id),12);
    bufp->fullCData(oldp+298,(vlSelf->io_debug_CSRCmd),3);
    bufp->fullIData(oldp+299,(vlSelf->io_debug_CSRWdata),32);
    bufp->fullIData(oldp+300,(vlSelf->io_debug_next_pc),32);
    bufp->fullIData(oldp+301,(vlSelf->io_debug_reg_wdata),32);
    bufp->fullCData(oldp+302,(vlSelf->io_debug_WbSel),2);
    bufp->fullBit(oldp+303,(vlSelf->io_debug_WbEn));
    bufp->fullIData(oldp+304,(((4U == (IData)(vlSelf->io_debug_CSRCmd))
                                ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                               [0x305U] : ((5U == (IData)(vlSelf->io_debug_CSRCmd))
                                            ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                           [0x341U]
                                            : 0U))),32);
    bufp->fullIData(oldp+305,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A),32);
    bufp->fullIData(oldp+306,(((~ vlSelf->io_debug_CSRWdata) 
                               & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                   ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                   : 0U))),32);
    bufp->fullIData(oldp+307,((0x80207888U & ((~ vlSelf->io_debug_CSRWdata) 
                                              & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                                  : 0U)))),32);
    bufp->fullBit(oldp+308,(((0x300U != (IData)(vlSelf->io_debug_csr_id)) 
                             & (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0))));
    bufp->fullBit(oldp+309,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0) 
                             & (0x300U == (IData)(vlSelf->io_debug_csr_id)))));
    bufp->fullIData(oldp+310,((0x80207888U & vlSelf->io_debug_CSRWdata)),32);
    bufp->fullIData(oldp+311,((((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                                 ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                 : 0U) | vlSelf->io_debug_CSRWdata)),32);
    bufp->fullBit(oldp+312,(((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0)) 
                             & (5U == (IData)(vlSelf->io_debug_CSRCmd)))));
    bufp->fullIData(oldp+313,((0x80207888U & (((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                                : 0U) 
                                              | vlSelf->io_debug_CSRWdata))),32);
    bufp->fullCData(oldp+314,((((IData)(vlSelf->io_debug_WbSel) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4))),4);
    bufp->fullCData(oldp+315,((((IData)(vlSelf->io_debug_WbEn) 
                                << 1U) | (IData)(vlSelf->io_debug_wen))),2);
    bufp->fullCData(oldp+316,((((IData)(vlSelf->io_ebreak) 
                                << 1U) | (IData)(vlSelf->io_debug_Valid))),2);
    bufp->fullCData(oldp+317,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_hi_hi_3) 
                                << 4U) | (((IData)(vlSelf->io_debug_WbSel) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4)))),8);
    bufp->fullIData(oldp+318,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0),32);
    bufp->fullIData(oldp+319,((0xfffffffeU & vlSelf->io_debug_alu_out)),32);
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
    bufp->fullIData(oldp+320,(__Vtemp_h7720a331__0[
                              (7U & ((0x7fffffcU & 
                                      ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                       << 2U)) | (0x7ffffffU 
                                                  & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))]),32);
    bufp->fullIData(oldp+321,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+322,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xfU))]),32);
    bufp->fullBit(oldp+323,(((IData)(vlSelf->io_debug_WbEn) 
                             & (0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                >> 7U))))));
    bufp->fullIData(oldp+324,(vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata),32);
    bufp->fullIData(oldp+325,(vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask),32);
    bufp->fullBit(oldp+326,(1U));
    bufp->fullSData(oldp+327,(0x305U),12);
    bufp->fullSData(oldp+328,(0x341U),12);
    bufp->fullSData(oldp+329,(0x342U),12);
    bufp->fullSData(oldp+330,(0x300U),12);
    bufp->fullIData(oldp+331,(0xbU),32);
    bufp->fullIData(oldp+332,(0x1800U),32);
    bufp->fullCData(oldp+333,(9U),4);
    bufp->fullCData(oldp+334,(8U),4);
    bufp->fullCData(oldp+335,(7U),4);
    bufp->fullCData(oldp+336,(6U),4);
    bufp->fullCData(oldp+337,(5U),4);
    bufp->fullCData(oldp+338,(4U),4);
    bufp->fullCData(oldp+339,(3U),4);
    bufp->fullCData(oldp+340,(2U),4);
    bufp->fullCData(oldp+341,(1U),4);
    bufp->fullCData(oldp+342,(0xfU),4);
    bufp->fullCData(oldp+343,(0xeU),4);
    bufp->fullCData(oldp+344,(0xdU),4);
    bufp->fullCData(oldp+345,(0xcU),4);
    bufp->fullCData(oldp+346,(0xbU),4);
    bufp->fullCData(oldp+347,(0xaU),4);
    bufp->fullCData(oldp+348,(0U),4);
}
