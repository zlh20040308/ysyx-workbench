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
    tracep->declBit(c+301,"clock", false,-1);
    tracep->declBit(c+302,"reset", false,-1);
    tracep->declBit(c+303,"io_ebreak", false,-1);
    tracep->declBus(c+304,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+305,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+306,"io_debug_alu_op", false,-1, 3,0);
    tracep->declArray(c+307,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+323,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+324,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+325,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+326,"io_debug_mstatus", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+301,"clock", false,-1);
    tracep->declBit(c+302,"reset", false,-1);
    tracep->declBit(c+303,"io_ebreak", false,-1);
    tracep->declBus(c+304,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+305,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+306,"io_debug_alu_op", false,-1, 3,0);
    tracep->declArray(c+307,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+323,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+324,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+325,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+326,"io_debug_mstatus", false,-1, 31,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+301,"clock", false,-1);
    tracep->declBit(c+302,"reset", false,-1);
    tracep->declBus(c+304,"io_imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+3,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+4,"io_dmem_wen", false,-1);
    tracep->declBit(c+5,"io_dmem_valid", false,-1);
    tracep->declBus(c+6,"io_dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+7,"io_dmem_rdata", false,-1, 31,0);
    tracep->declBit(c+303,"io_ebreak", false,-1);
    tracep->declBus(c+304,"io_debug_pc", false,-1, 31,0);
    tracep->declBus(c+305,"io_debug_PCSel", false,-1, 1,0);
    tracep->declBus(c+306,"io_debug_alu_op", false,-1, 3,0);
    tracep->declArray(c+307,"io_debug_gpr", false,-1, 511,0);
    tracep->declBus(c+323,"io_debug_mtvec", false,-1, 31,0);
    tracep->declBus(c+324,"io_debug_mepc", false,-1, 31,0);
    tracep->declBus(c+325,"io_debug_mcause", false,-1, 31,0);
    tracep->declBus(c+326,"io_debug_mstatus", false,-1, 31,0);
    tracep->declBus(c+6,"io_dmem_wmask_0", false,-1, 3,0);
    tracep->declBus(c+326,"io_debug_mstatus_0", false,-1, 31,0);
    tracep->declBus(c+325,"io_debug_mcause_0", false,-1, 31,0);
    tracep->declArray(c+307,"io_debug_gpr_0", false,-1, 511,0);
    tracep->declBit(c+303,"io_ebreak_0", false,-1);
    tracep->declBit(c+5,"io_dmem_valid_0", false,-1);
    tracep->declBit(c+4,"io_dmem_wen_0", false,-1);
    tracep->declBus(c+1,"io_imem_inst_0", false,-1, 31,0);
    tracep->declBus(c+7,"io_dmem_rdata_0", false,-1, 31,0);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+304,"io_imem_addr_0", false,-1, 31,0);
    tracep->declBus(c+304,"io_debug_pc_0", false,-1, 31,0);
    tracep->declBus(c+9,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+10,"pc_csr", false,-1, 31,0);
    tracep->declBus(c+2,"io_dmem_addr_0", false,-1, 31,0);
    tracep->declBus(c+305,"io_debug_PCSel_0", false,-1, 1,0);
    tracep->declBus(c+306,"io_debug_alu_op_0", false,-1, 3,0);
    tracep->declBus(c+3,"io_dmem_wdata_0", false,-1, 31,0);
    tracep->declBus(c+323,"io_debug_mtvec_0", false,-1, 31,0);
    tracep->declBus(c+324,"io_debug_mepc_0", false,-1, 31,0);
    tracep->pushNamePrefix("AluInstance ");
    tracep->declBus(c+11,"io_A", false,-1, 31,0);
    tracep->declBus(c+12,"io_B", false,-1, 31,0);
    tracep->declBus(c+306,"io_alu_op", false,-1, 3,0);
    tracep->declBus(c+2,"io_out", false,-1, 31,0);
    tracep->declBus(c+11,"io_A_0", false,-1, 31,0);
    tracep->declBus(c+12,"io_B_0", false,-1, 31,0);
    tracep->declBus(c+306,"io_alu_op_0", false,-1, 3,0);
    tracep->declBus(c+13,"shamt", false,-1, 4,0);
    tracep->declBus(c+2,"io_out_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSRInstance ");
    tracep->declBit(c+301,"clock", false,-1);
    tracep->declBus(c+14,"io_addr", false,-1, 11,0);
    tracep->declBus(c+15,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+16,"io_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"io_rdata", false,-1, 31,0);
    tracep->declBus(c+323,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+324,"io_mepc", false,-1, 31,0);
    tracep->declBus(c+325,"io_mcause", false,-1, 31,0);
    tracep->declBus(c+326,"io_mstatus", false,-1, 31,0);
    tracep->declBus(c+325,"io_mcause_0", false,-1, 31,0);
    tracep->declBus(c+324,"io_mepc_0", false,-1, 31,0);
    tracep->declBus(c+323,"io_mtvec_0", false,-1, 31,0);
    tracep->declBus(c+14,"io_addr_0", false,-1, 11,0);
    tracep->declBus(c+15,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+16,"io_wdata_0", false,-1, 31,0);
    tracep->declBus(c+17,"io_rdata_0", false,-1, 31,0);
    tracep->declQuad(c+18,"ecall_mstatus", false,-1, 35,0);
    tracep->declBus(c+20,"mret_mstatus", false,-1, 31,0);
    tracep->declBus(c+326,"io_mstatus_0", false,-1, 31,0);
    tracep->pushNamePrefix("csrs_ext ");
    tracep->declBus(c+14,"R0_addr", false,-1, 11,0);
    tracep->declBit(c+21,"R0_en", false,-1);
    tracep->declBit(c+301,"R0_clk", false,-1);
    tracep->declBus(c+22,"R0_data", false,-1, 31,0);
    tracep->declBus(c+14,"R1_addr", false,-1, 11,0);
    tracep->declBit(c+330,"R1_en", false,-1);
    tracep->declBit(c+301,"R1_clk", false,-1);
    tracep->declBus(c+23,"R1_data", false,-1, 31,0);
    tracep->declBus(c+331,"R2_addr", false,-1, 11,0);
    tracep->declBit(c+330,"R2_en", false,-1);
    tracep->declBit(c+301,"R2_clk", false,-1);
    tracep->declBus(c+323,"R2_data", false,-1, 31,0);
    tracep->declBus(c+332,"R3_addr", false,-1, 11,0);
    tracep->declBit(c+330,"R3_en", false,-1);
    tracep->declBit(c+301,"R3_clk", false,-1);
    tracep->declBus(c+324,"R3_data", false,-1, 31,0);
    tracep->declBus(c+333,"R4_addr", false,-1, 11,0);
    tracep->declBit(c+330,"R4_en", false,-1);
    tracep->declBit(c+301,"R4_clk", false,-1);
    tracep->declBus(c+325,"R4_data", false,-1, 31,0);
    tracep->declBus(c+334,"R5_addr", false,-1, 11,0);
    tracep->declBit(c+330,"R5_en", false,-1);
    tracep->declBit(c+301,"R5_clk", false,-1);
    tracep->declBus(c+326,"R5_data", false,-1, 31,0);
    tracep->declBus(c+14,"R6_addr", false,-1, 11,0);
    tracep->declBit(c+24,"R6_en", false,-1);
    tracep->declBit(c+301,"R6_clk", false,-1);
    tracep->declBus(c+25,"R6_data", false,-1, 31,0);
    tracep->declBus(c+14,"R7_addr", false,-1, 11,0);
    tracep->declBit(c+26,"R7_en", false,-1);
    tracep->declBit(c+301,"R7_clk", false,-1);
    tracep->declBus(c+27,"R7_data", false,-1, 31,0);
    tracep->declBus(c+14,"R8_addr", false,-1, 11,0);
    tracep->declBit(c+28,"R8_en", false,-1);
    tracep->declBit(c+301,"R8_clk", false,-1);
    tracep->declBus(c+29,"R8_data", false,-1, 31,0);
    tracep->declBus(c+14,"R9_addr", false,-1, 11,0);
    tracep->declBit(c+30,"R9_en", false,-1);
    tracep->declBit(c+301,"R9_clk", false,-1);
    tracep->declBus(c+31,"R9_data", false,-1, 31,0);
    tracep->declBus(c+14,"R10_addr", false,-1, 11,0);
    tracep->declBit(c+32,"R10_en", false,-1);
    tracep->declBit(c+301,"R10_clk", false,-1);
    tracep->declBus(c+33,"R10_data", false,-1, 31,0);
    tracep->declBus(c+14,"R11_addr", false,-1, 11,0);
    tracep->declBit(c+34,"R11_en", false,-1);
    tracep->declBit(c+301,"R11_clk", false,-1);
    tracep->declBus(c+35,"R11_data", false,-1, 31,0);
    tracep->declBus(c+14,"W0_addr", false,-1, 11,0);
    tracep->declBit(c+34,"W0_en", false,-1);
    tracep->declBit(c+301,"W0_clk", false,-1);
    tracep->declBus(c+36,"W0_data", false,-1, 31,0);
    tracep->declBus(c+14,"W1_addr", false,-1, 11,0);
    tracep->declBit(c+37,"W1_en", false,-1);
    tracep->declBit(c+301,"W1_clk", false,-1);
    tracep->declBus(c+16,"W1_data", false,-1, 31,0);
    tracep->declBus(c+14,"W2_addr", false,-1, 11,0);
    tracep->declBit(c+38,"W2_en", false,-1);
    tracep->declBit(c+301,"W2_clk", false,-1);
    tracep->declBus(c+39,"W2_data", false,-1, 31,0);
    tracep->declBus(c+14,"W3_addr", false,-1, 11,0);
    tracep->declBit(c+24,"W3_en", false,-1);
    tracep->declBit(c+301,"W3_clk", false,-1);
    tracep->declBus(c+40,"W3_data", false,-1, 31,0);
    tracep->declBus(c+14,"W4_addr", false,-1, 11,0);
    tracep->declBit(c+26,"W4_en", false,-1);
    tracep->declBit(c+301,"W4_clk", false,-1);
    tracep->declBus(c+41,"W4_data", false,-1, 31,0);
    tracep->declBus(c+14,"W5_addr", false,-1, 11,0);
    tracep->declBit(c+30,"W5_en", false,-1);
    tracep->declBit(c+301,"W5_clk", false,-1);
    tracep->declBus(c+31,"W5_data", false,-1, 31,0);
    tracep->declBus(c+334,"W6_addr", false,-1, 11,0);
    tracep->declBit(c+42,"W6_en", false,-1);
    tracep->declBit(c+301,"W6_clk", false,-1);
    tracep->declBus(c+20,"W6_data", false,-1, 31,0);
    tracep->declBus(c+334,"W7_addr", false,-1, 11,0);
    tracep->declBit(c+43,"W7_en", false,-1);
    tracep->declBit(c+301,"W7_clk", false,-1);
    tracep->declBus(c+44,"W7_data", false,-1, 31,0);
    tracep->declBus(c+333,"W8_addr", false,-1, 11,0);
    tracep->declBit(c+43,"W8_en", false,-1);
    tracep->declBit(c+301,"W8_clk", false,-1);
    tracep->declBus(c+335,"W8_data", false,-1, 31,0);
    tracep->declBus(c+332,"W9_addr", false,-1, 11,0);
    tracep->declBit(c+43,"W9_en", false,-1);
    tracep->declBit(c+301,"W9_clk", false,-1);
    tracep->declBus(c+16,"W9_data", false,-1, 31,0);
    tracep->declBus(c+14,"W10_addr", false,-1, 11,0);
    tracep->declBit(c+32,"W10_en", false,-1);
    tracep->declBit(c+301,"W10_clk", false,-1);
    tracep->declBus(c+45,"W10_data", false,-1, 31,0);
    tracep->declBus(c+14,"W11_addr", false,-1, 11,0);
    tracep->declBit(c+28,"W11_en", false,-1);
    tracep->declBit(c+301,"W11_clk", false,-1);
    tracep->declBus(c+46,"W11_data", false,-1, 31,0);
    tracep->declBus(c+334,"W12_addr", false,-1, 11,0);
    tracep->declBit(c+330,"W12_en", false,-1);
    tracep->declBit(c+301,"W12_clk", false,-1);
    tracep->declBus(c+336,"W12_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CUInstance ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBit(c+47,"io_compare", false,-1);
    tracep->declBus(c+305,"io_PCSel", false,-1, 1,0);
    tracep->declBus(c+48,"io_ASel", false,-1, 1,0);
    tracep->declBus(c+49,"io_BSel", false,-1, 1,0);
    tracep->declBus(c+50,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+306,"io_ALUSel", false,-1, 3,0);
    tracep->declBus(c+51,"io_BrType", false,-1, 2,0);
    tracep->declBus(c+15,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+52,"io_StType", false,-1, 1,0);
    tracep->declBus(c+53,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+54,"io_WbSel", false,-1, 1,0);
    tracep->declBit(c+4,"io_MemRW", false,-1);
    tracep->declBit(c+55,"io_WbEn", false,-1);
    tracep->declBit(c+5,"io_Valid", false,-1);
    tracep->declBit(c+303,"io_Ebreak", false,-1);
    tracep->declBit(c+303,"io_Ebreak_0", false,-1);
    tracep->declBit(c+5,"io_Valid_0", false,-1);
    tracep->declBit(c+55,"io_WbEn_0", false,-1);
    tracep->declBit(c+4,"io_MemRW_0", false,-1);
    tracep->declBus(c+54,"io_WbSel_0", false,-1, 1,0);
    tracep->declBus(c+53,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+52,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+15,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+306,"io_ALUSel_0", false,-1, 3,0);
    tracep->declBus(c+50,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+49,"io_BSel_0", false,-1, 1,0);
    tracep->declBus(c+48,"io_ASel_0", false,-1, 1,0);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBit(c+47,"io_compare_0", false,-1);
    tracep->declBus(c+305,"io_PCSel_0", false,-1, 1,0);
    tracep->declBus(c+51,"io_BrType_0", false,-1, 2,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+56,"io_PCSel", false,-1, 1,0);
    tracep->declBus(c+48,"io_ASel", false,-1, 1,0);
    tracep->declBus(c+49,"io_BSel", false,-1, 1,0);
    tracep->declBus(c+50,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+306,"io_ALUSel", false,-1, 3,0);
    tracep->declBus(c+51,"io_BrType", false,-1, 2,0);
    tracep->declBus(c+15,"io_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+52,"io_StType", false,-1, 1,0);
    tracep->declBus(c+53,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+54,"io_WbSel", false,-1, 1,0);
    tracep->declBit(c+4,"io_MemRW", false,-1);
    tracep->declBit(c+55,"io_WbEn", false,-1);
    tracep->declBit(c+5,"io_Valid", false,-1);
    tracep->declBit(c+303,"io_Ebreak", false,-1);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBus(c+1,"decodedBundle_plaInput", false,-1, 31,0);
    tracep->declBus(c+56,"decodedBundle_PCSel", false,-1, 1,0);
    tracep->declBus(c+48,"decodedBundle_ASel", false,-1, 1,0);
    tracep->declBus(c+49,"decodedBundle_BSel", false,-1, 1,0);
    tracep->declBus(c+50,"decodedBundle_ImmSel", false,-1, 2,0);
    tracep->declBus(c+306,"decodedBundle_ALUSel", false,-1, 3,0);
    tracep->declBus(c+51,"decodedBundle_BrType", false,-1, 2,0);
    tracep->declBus(c+15,"decodedBundle_CSRCmd", false,-1, 2,0);
    tracep->declBus(c+52,"decodedBundle_StType", false,-1, 1,0);
    tracep->declBus(c+53,"decodedBundle_LdType", false,-1, 2,0);
    tracep->declBus(c+54,"decodedBundle_WbSel", false,-1, 1,0);
    tracep->declBit(c+4,"decodedBundle_MemRW", false,-1);
    tracep->declBit(c+55,"decodedBundle_WbEn", false,-1);
    tracep->declBit(c+5,"decodedBundle_Valid", false,-1);
    tracep->declBit(c+303,"decodedBundle_Ebreak", false,-1);
    tracep->declBus(c+57,"decodedBundle_invInputs", false,-1, 31,0);
    tracep->declBus(c+58,"decodedBundle_invMatrixOutputs", false,-1, 29,0);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_4", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_10", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_12", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_13", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_14", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_16", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_17", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_18", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_21", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_22", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_24", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_26", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_27", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_28", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_31", false,-1);
    tracep->declBit(c+59,"decodedBundle_andMatrixOutputs_andMatrixInput_0_32", false,-1);
    tracep->declBit(c+60,"decodedBundle_andMatrixOutputs_andMatrixInput_1", false,-1);
    tracep->declBit(c+60,"decodedBundle_andMatrixOutputs_andMatrixInput_1_1", false,-1);
    tracep->declBit(c+60,"decodedBundle_andMatrixOutputs_andMatrixInput_0_2", false,-1);
    tracep->declBit(c+60,"decodedBundle_andMatrixOutputs_andMatrixInput_1_3", false,-1);
    tracep->declBit(c+60,"decodedBundle_andMatrixOutputs_andMatrixInput_1_6", false,-1);
    tracep->declBit(c+60,"decodedBundle_andMatrixOutputs_andMatrixInput_1_24", false,-1);
    tracep->declBit(c+61,"decodedBundle_andMatrixOutputs_17_2", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_0_1", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_0_3", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_2_4", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_0_8", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_0_9", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_1_11", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_1_12", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_1_13", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_1_17", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_1_21", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_0_25", false,-1);
    tracep->declBit(c+62,"decodedBundle_andMatrixOutputs_andMatrixInput_1_26", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_2", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_3_2", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_3_5", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_3_7", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_2_12", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_3_14", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_2_20", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_2_25", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_2_26", false,-1);
    tracep->declBit(c+63,"decodedBundle_andMatrixOutputs_andMatrixInput_2_27", false,-1);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi", false,-1, 1,0);
    tracep->declBit(c+65,"decodedBundle_andMatrixOutputs_22_2", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_1_2", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_2_2", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_1_4", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_3_3", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_4", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_3_8", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_2_13", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_3_12", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_4_6", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_3_19", false,-1);
    tracep->declBit(c+66,"decodedBundle_andMatrixOutputs_andMatrixInput_3_22", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_2_1", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_3", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_2_3", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_3_6", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_4_1", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_4_3", false,-1);
    tracep->declBit(c+67,"decodedBundle_andMatrixOutputs_andMatrixInput_4_4", false,-1);
    tracep->declBus(c+68,"decodedBundle_andMatrixOutputs_hi_1", false,-1, 1,0);
    tracep->declBit(c+69,"decodedBundle_andMatrixOutputs_25_2", false,-1);
    tracep->declBus(c+70,"decodedBundle_andMatrixOutputs_lo", false,-1, 1,0);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_2", false,-1, 1,0);
    tracep->declBit(c+71,"decodedBundle_andMatrixOutputs_31_2", false,-1);
    tracep->declBit(c+72,"decodedBundle_andMatrixOutputs_andMatrixInput_3_1", false,-1);
    tracep->declBit(c+72,"decodedBundle_andMatrixOutputs_andMatrixInput_3_9", false,-1);
    tracep->declBus(c+73,"decodedBundle_andMatrixOutputs_lo_1", false,-1, 1,0);
    tracep->declBus(c+74,"decodedBundle_andMatrixOutputs_hi_3", false,-1, 1,0);
    tracep->declBit(c+75,"decodedBundle_andMatrixOutputs_12_2", false,-1);
    tracep->declBit(c+76,"decodedBundle_andMatrixOutputs_andMatrixInput_0_5", false,-1);
    tracep->declBit(c+76,"decodedBundle_andMatrixOutputs_andMatrixInput_0_6", false,-1);
    tracep->declBit(c+76,"decodedBundle_andMatrixOutputs_andMatrixInput_0_11", false,-1);
    tracep->declBit(c+77,"decodedBundle_andMatrixOutputs_andMatrixInput_1_5", false,-1);
    tracep->declBus(c+78,"decodedBundle_andMatrixOutputs_hi_4", false,-1, 1,0);
    tracep->declBit(c+79,"decodedBundle_andMatrixOutputs_18_2", false,-1);
    tracep->declBit(c+80,"decodedBundle_andMatrixOutputs_13_2", false,-1);
    tracep->declBit(c+81,"decodedBundle_andMatrixOutputs_andMatrixInput_0_7", false,-1);
    tracep->declBit(c+81,"decodedBundle_andMatrixOutputs_11_2", false,-1);
    tracep->declBit(c+82,"decodedBundle_andMatrixOutputs_andMatrixInput_1_7", false,-1);
    tracep->declBit(c+82,"decodedBundle_andMatrixOutputs_andMatrixInput_1_8", false,-1);
    tracep->declBit(c+82,"decodedBundle_andMatrixOutputs_andMatrixInput_2_7", false,-1);
    tracep->declBit(c+82,"decodedBundle_andMatrixOutputs_andMatrixInput_2_8", false,-1);
    tracep->declBit(c+82,"decodedBundle_andMatrixOutputs_andMatrixInput_2_24", false,-1);
    tracep->declBit(c+82,"decodedBundle_andMatrixOutputs_andMatrixInput_2_28", false,-1);
    tracep->declBit(c+83,"decodedBundle_andMatrixOutputs_andMatrixInput_2_5", false,-1);
    tracep->declBit(c+83,"decodedBundle_andMatrixOutputs_andMatrixInput_2_6", false,-1);
    tracep->declBit(c+83,"decodedBundle_andMatrixOutputs_andMatrixInput_3_4", false,-1);
    tracep->declBit(c+83,"decodedBundle_andMatrixOutputs_andMatrixInput_2_14", false,-1);
    tracep->declBit(c+83,"decodedBundle_andMatrixOutputs_andMatrixInput_2_18", false,-1);
    tracep->declBit(c+83,"decodedBundle_andMatrixOutputs_andMatrixInput_1_23", false,-1);
    tracep->declBit(c+83,"decodedBundle_andMatrixOutputs_andMatrixInput_1_27", false,-1);
    tracep->declBus(c+84,"decodedBundle_andMatrixOutputs_lo_2", false,-1, 1,0);
    tracep->declBus(c+85,"decodedBundle_andMatrixOutputs_hi_5", false,-1, 1,0);
    tracep->declBit(c+86,"decodedBundle_andMatrixOutputs_9_2", false,-1);
    tracep->declBus(c+87,"decodedBundle_andMatrixOutputs_lo_3", false,-1, 1,0);
    tracep->declBus(c+85,"decodedBundle_andMatrixOutputs_hi_6", false,-1, 1,0);
    tracep->declBit(c+88,"decodedBundle_andMatrixOutputs_26_2", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_1_9", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_1_10", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_0_15", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_1_16", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_0_19", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_0_20", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_1_20", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_0_23", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_1_25", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_0_29", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_0_30", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_1_30", false,-1);
    tracep->declBit(c+89,"decodedBundle_andMatrixOutputs_andMatrixInput_1_31", false,-1);
    tracep->declBus(c+90,"decodedBundle_andMatrixOutputs_lo_4", false,-1, 1,0);
    tracep->declBus(c+91,"decodedBundle_andMatrixOutputs_hi_7", false,-1, 1,0);
    tracep->declBit(c+92,"decodedBundle_andMatrixOutputs_0_2", false,-1);
    tracep->declBus(c+93,"decodedBundle_andMatrixOutputs_hi_8", false,-1, 1,0);
    tracep->declBit(c+94,"decodedBundle_andMatrixOutputs_4_2", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_2_9", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_2_10", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_2_11", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_1_14", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_2_15", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_1_18", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_1_19", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_2_19", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_1_22", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_1_28", false,-1);
    tracep->declBit(c+95,"decodedBundle_andMatrixOutputs_andMatrixInput_1_29", false,-1);
    tracep->declBus(c+96,"decodedBundle_andMatrixOutputs_lo_5", false,-1, 1,0);
    tracep->declBus(c+97,"decodedBundle_andMatrixOutputs_hi_hi", false,-1, 1,0);
    tracep->declBus(c+98,"decodedBundle_andMatrixOutputs_hi_9", false,-1, 2,0);
    tracep->declBit(c+99,"decodedBundle_andMatrixOutputs_10_2", false,-1);
    tracep->declBus(c+100,"decodedBundle_andMatrixOutputs_lo_6", false,-1, 1,0);
    tracep->declBus(c+97,"decodedBundle_andMatrixOutputs_hi_10", false,-1, 1,0);
    tracep->declBit(c+101,"decodedBundle_andMatrixOutputs_20_2", false,-1);
    tracep->declBus(c+102,"decodedBundle_andMatrixOutputs_lo_7", false,-1, 1,0);
    tracep->declBus(c+97,"decodedBundle_andMatrixOutputs_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+98,"decodedBundle_andMatrixOutputs_hi_11", false,-1, 2,0);
    tracep->declBit(c+103,"decodedBundle_andMatrixOutputs_23_2", false,-1);
    tracep->declBit(c+104,"decodedBundle_andMatrixOutputs_andMatrixInput_4_2", false,-1);
    tracep->declBus(c+105,"decodedBundle_andMatrixOutputs_lo_8", false,-1, 1,0);
    tracep->declBus(c+106,"decodedBundle_andMatrixOutputs_hi_hi_2", false,-1, 1,0);
    tracep->declBus(c+107,"decodedBundle_andMatrixOutputs_hi_12", false,-1, 2,0);
    tracep->declBit(c+108,"decodedBundle_andMatrixOutputs_14_2", false,-1);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_andMatrixInput_1_15", false,-1);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_andMatrixInput_3_10", false,-1);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_andMatrixInput_3_11", false,-1);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_andMatrixInput_2_16", false,-1);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_andMatrixInput_2_17", false,-1);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_andMatrixInput_2_21", false,-1);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_andMatrixInput_3_17", false,-1);
    tracep->declBit(c+109,"decodedBundle_andMatrixOutputs_andMatrixInput_2_29", false,-1);
    tracep->declBus(c+110,"decodedBundle_andMatrixOutputs_lo_9", false,-1, 1,0);
    tracep->declBus(c+111,"decodedBundle_andMatrixOutputs_hi_13", false,-1, 1,0);
    tracep->declBit(c+112,"decodedBundle_andMatrixOutputs_21_2", false,-1);
    tracep->declBus(c+113,"decodedBundle_andMatrixOutputs_lo_10", false,-1, 1,0);
    tracep->declBus(c+91,"decodedBundle_andMatrixOutputs_hi_hi_3", false,-1, 1,0);
    tracep->declBus(c+114,"decodedBundle_andMatrixOutputs_hi_14", false,-1, 2,0);
    tracep->declBit(c+115,"decodedBundle_andMatrixOutputs_30_2", false,-1);
    tracep->declBus(c+116,"decodedBundle_andMatrixOutputs_lo_11", false,-1, 1,0);
    tracep->declBus(c+97,"decodedBundle_andMatrixOutputs_hi_15", false,-1, 1,0);
    tracep->declBit(c+117,"decodedBundle_andMatrixOutputs_7_2", false,-1);
    tracep->declBus(c+106,"decodedBundle_andMatrixOutputs_hi_16", false,-1, 1,0);
    tracep->declBit(c+118,"decodedBundle_andMatrixOutputs_2_2", false,-1);
    tracep->declBus(c+119,"decodedBundle_andMatrixOutputs_lo_12", false,-1, 1,0);
    tracep->declBus(c+106,"decodedBundle_andMatrixOutputs_hi_17", false,-1, 1,0);
    tracep->declBit(c+120,"decodedBundle_andMatrixOutputs_3_2", false,-1);
    tracep->declBit(c+121,"decodedBundle_andMatrixOutputs_andMatrixInput_3_13", false,-1);
    tracep->declBit(c+121,"decodedBundle_andMatrixOutputs_andMatrixInput_4_5", false,-1);
    tracep->declBit(c+121,"decodedBundle_andMatrixOutputs_andMatrixInput_3_15", false,-1);
    tracep->declBit(c+121,"decodedBundle_andMatrixOutputs_andMatrixInput_3_16", false,-1);
    tracep->declBit(c+121,"decodedBundle_andMatrixOutputs_andMatrixInput_3_18", false,-1);
    tracep->declBus(c+122,"decodedBundle_andMatrixOutputs_lo_13", false,-1, 1,0);
    tracep->declBus(c+91,"decodedBundle_andMatrixOutputs_hi_hi_4", false,-1, 1,0);
    tracep->declBus(c+114,"decodedBundle_andMatrixOutputs_hi_18", false,-1, 2,0);
    tracep->declBit(c+123,"decodedBundle_andMatrixOutputs_8_2", false,-1);
    tracep->declBus(c+124,"decodedBundle_andMatrixOutputs_lo_14", false,-1, 1,0);
    tracep->declBus(c+97,"decodedBundle_andMatrixOutputs_hi_hi_5", false,-1, 1,0);
    tracep->declBus(c+98,"decodedBundle_andMatrixOutputs_hi_19", false,-1, 2,0);
    tracep->declBit(c+125,"decodedBundle_andMatrixOutputs_15_2", false,-1);
    tracep->declBus(c+124,"decodedBundle_andMatrixOutputs_lo_15", false,-1, 1,0);
    tracep->declBus(c+106,"decodedBundle_andMatrixOutputs_hi_20", false,-1, 1,0);
    tracep->declBit(c+126,"decodedBundle_andMatrixOutputs_1_2", false,-1);
    tracep->declBus(c+127,"decodedBundle_andMatrixOutputs_lo_16", false,-1, 1,0);
    tracep->declBus(c+128,"decodedBundle_andMatrixOutputs_hi_21", false,-1, 1,0);
    tracep->declBit(c+129,"decodedBundle_andMatrixOutputs_19_2", false,-1);
    tracep->declBit(c+130,"decodedBundle_andMatrixOutputs_andMatrixInput_2_22", false,-1);
    tracep->declBit(c+130,"decodedBundle_andMatrixOutputs_andMatrixInput_2_23", false,-1);
    tracep->declBit(c+130,"decodedBundle_andMatrixOutputs_andMatrixInput_5", false,-1);
    tracep->declBit(c+130,"decodedBundle_andMatrixOutputs_andMatrixInput_4_7", false,-1);
    tracep->declBus(c+64,"decodedBundle_andMatrixOutputs_hi_22", false,-1, 1,0);
    tracep->declBit(c+131,"decodedBundle_andMatrixOutputs_27_2", false,-1);
    tracep->declBus(c+91,"decodedBundle_andMatrixOutputs_hi_23", false,-1, 1,0);
    tracep->declBit(c+132,"decodedBundle_andMatrixOutputs_6_2", false,-1);
    tracep->declBus(c+119,"decodedBundle_andMatrixOutputs_lo_hi", false,-1, 1,0);
    tracep->declBus(c+133,"decodedBundle_andMatrixOutputs_lo_17", false,-1, 2,0);
    tracep->declBus(c+97,"decodedBundle_andMatrixOutputs_hi_hi_6", false,-1, 1,0);
    tracep->declBus(c+134,"decodedBundle_andMatrixOutputs_hi_24", false,-1, 2,0);
    tracep->declBit(c+135,"decodedBundle_andMatrixOutputs_24_2", false,-1);
    tracep->declBus(c+136,"decodedBundle_andMatrixOutputs_lo_18", false,-1, 1,0);
    tracep->declBus(c+128,"decodedBundle_andMatrixOutputs_hi_hi_7", false,-1, 1,0);
    tracep->declBus(c+137,"decodedBundle_andMatrixOutputs_hi_25", false,-1, 2,0);
    tracep->declBit(c+138,"decodedBundle_andMatrixOutputs_32_2", false,-1);
    tracep->declBit(c+139,"decodedBundle_andMatrixOutputs_andMatrixInput_4_8", false,-1);
    tracep->declBus(c+140,"decodedBundle_andMatrixOutputs_lo_19", false,-1, 1,0);
    tracep->declBus(c+106,"decodedBundle_andMatrixOutputs_hi_hi_8", false,-1, 1,0);
    tracep->declBus(c+107,"decodedBundle_andMatrixOutputs_hi_26", false,-1, 2,0);
    tracep->declBit(c+303,"decodedBundle_andMatrixOutputs_16_2", false,-1);
    tracep->declBit(c+141,"decodedBundle_andMatrixOutputs_andMatrixInput_3_20", false,-1);
    tracep->declBus(c+142,"decodedBundle_andMatrixOutputs_lo_20", false,-1, 1,0);
    tracep->declBus(c+106,"decodedBundle_andMatrixOutputs_hi_27", false,-1, 1,0);
    tracep->declBit(c+143,"decodedBundle_andMatrixOutputs_28_2", false,-1);
    tracep->declBit(c+144,"decodedBundle_andMatrixOutputs_andMatrixInput_3_21", false,-1);
    tracep->declBit(c+144,"decodedBundle_andMatrixOutputs_andMatrixInput_4_9", false,-1);
    tracep->declBus(c+145,"decodedBundle_andMatrixOutputs_lo_21", false,-1, 1,0);
    tracep->declBus(c+91,"decodedBundle_andMatrixOutputs_hi_28", false,-1, 1,0);
    tracep->declBit(c+146,"decodedBundle_andMatrixOutputs_5_2", false,-1);
    tracep->declBus(c+147,"decodedBundle_andMatrixOutputs_lo_22", false,-1, 1,0);
    tracep->declBus(c+91,"decodedBundle_andMatrixOutputs_hi_hi_9", false,-1, 1,0);
    tracep->declBus(c+148,"decodedBundle_andMatrixOutputs_hi_29", false,-1, 2,0);
    tracep->declBit(c+149,"decodedBundle_andMatrixOutputs_29_2", false,-1);
    tracep->declBus(c+150,"decodedBundle_orMatrixOutputs_lo_lo", false,-1, 1,0);
    tracep->declBus(c+150,"decodedBundle_orMatrixOutputs_lo_11", false,-1, 1,0);
    tracep->declBus(c+150,"decodedBundle_orMatrixOutputs_lo_lo_3", false,-1, 1,0);
    tracep->declBus(c+151,"decodedBundle_orMatrixOutputs_lo_hi", false,-1, 1,0);
    tracep->declBus(c+152,"decodedBundle_orMatrixOutputs_lo", false,-1, 3,0);
    tracep->declBus(c+153,"decodedBundle_orMatrixOutputs_hi_lo", false,-1, 1,0);
    tracep->declBus(c+154,"decodedBundle_orMatrixOutputs_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+155,"decodedBundle_orMatrixOutputs_hi_hi", false,-1, 2,0);
    tracep->declBus(c+156,"decodedBundle_orMatrixOutputs_hi", false,-1, 4,0);
    tracep->declBus(c+157,"decodedBundle_orMatrixOutputs_hi_1", false,-1, 1,0);
    tracep->declBus(c+157,"decodedBundle_orMatrixOutputs_hi_14", false,-1, 1,0);
    tracep->declBus(c+158,"decodedBundle_orMatrixOutputs_lo_hi_1", false,-1, 1,0);
    tracep->declBus(c+159,"decodedBundle_orMatrixOutputs_lo_1", false,-1, 2,0);
    tracep->declBus(c+160,"decodedBundle_orMatrixOutputs_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+160,"decodedBundle_orMatrixOutputs_hi_lo_6", false,-1, 1,0);
    tracep->declBus(c+161,"decodedBundle_orMatrixOutputs_hi_2", false,-1, 2,0);
    tracep->declBus(c+162,"decodedBundle_orMatrixOutputs_lo_hi_2", false,-1, 1,0);
    tracep->declBus(c+163,"decodedBundle_orMatrixOutputs_lo_2", false,-1, 2,0);
    tracep->declBus(c+164,"decodedBundle_orMatrixOutputs_hi_lo_1", false,-1, 1,0);
    tracep->declBus(c+165,"decodedBundle_orMatrixOutputs_hi_hi_2", false,-1, 1,0);
    tracep->declBus(c+165,"decodedBundle_orMatrixOutputs_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+165,"decodedBundle_orMatrixOutputs_hi_hi_4", false,-1, 1,0);
    tracep->declBus(c+165,"decodedBundle_orMatrixOutputs_hi_hi_10", false,-1, 1,0);
    tracep->declBus(c+166,"decodedBundle_orMatrixOutputs_hi_3", false,-1, 3,0);
    tracep->declBus(c+167,"decodedBundle_orMatrixOutputs_lo_lo_1", false,-1, 1,0);
    tracep->declBus(c+168,"decodedBundle_orMatrixOutputs_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+169,"decodedBundle_orMatrixOutputs_lo_hi_3", false,-1, 2,0);
    tracep->declBus(c+170,"decodedBundle_orMatrixOutputs_lo_3", false,-1, 4,0);
    tracep->declBus(c+171,"decodedBundle_orMatrixOutputs_hi_lo_2", false,-1, 1,0);
    tracep->declBus(c+171,"decodedBundle_orMatrixOutputs_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+172,"decodedBundle_orMatrixOutputs_hi_hi_3", false,-1, 2,0);
    tracep->declBus(c+173,"decodedBundle_orMatrixOutputs_hi_4", false,-1, 4,0);
    tracep->declBus(c+174,"decodedBundle_orMatrixOutputs_lo_hi_4", false,-1, 1,0);
    tracep->declBus(c+175,"decodedBundle_orMatrixOutputs_lo_4", false,-1, 2,0);
    tracep->declBus(c+176,"decodedBundle_orMatrixOutputs_hi_lo_3", false,-1, 1,0);
    tracep->declBus(c+177,"decodedBundle_orMatrixOutputs_hi_5", false,-1, 3,0);
    tracep->declBus(c+178,"decodedBundle_orMatrixOutputs_lo_hi_5", false,-1, 1,0);
    tracep->declBus(c+179,"decodedBundle_orMatrixOutputs_lo_5", false,-1, 2,0);
    tracep->declBus(c+180,"decodedBundle_orMatrixOutputs_hi_hi_5", false,-1, 1,0);
    tracep->declBus(c+181,"decodedBundle_orMatrixOutputs_hi_6", false,-1, 2,0);
    tracep->declBus(c+182,"decodedBundle_orMatrixOutputs_lo_hi_6", false,-1, 1,0);
    tracep->declBus(c+183,"decodedBundle_orMatrixOutputs_lo_6", false,-1, 2,0);
    tracep->declBus(c+184,"decodedBundle_orMatrixOutputs_hi_hi_6", false,-1, 1,0);
    tracep->declBus(c+185,"decodedBundle_orMatrixOutputs_hi_7", false,-1, 2,0);
    tracep->declBus(c+186,"decodedBundle_orMatrixOutputs_lo_lo_lo", false,-1, 1,0);
    tracep->declBus(c+187,"decodedBundle_orMatrixOutputs_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+188,"decodedBundle_orMatrixOutputs_lo_lo_2", false,-1, 3,0);
    tracep->declBus(c+189,"decodedBundle_orMatrixOutputs_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+190,"decodedBundle_orMatrixOutputs_lo_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+191,"decodedBundle_orMatrixOutputs_lo_hi_hi_1", false,-1, 2,0);
    tracep->declBus(c+192,"decodedBundle_orMatrixOutputs_lo_hi_7", false,-1, 4,0);
    tracep->declBus(c+193,"decodedBundle_orMatrixOutputs_lo_7", false,-1, 8,0);
    tracep->declBus(c+194,"decodedBundle_orMatrixOutputs_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+195,"decodedBundle_orMatrixOutputs_hi_lo_4", false,-1, 3,0);
    tracep->declBus(c+196,"decodedBundle_orMatrixOutputs_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+197,"decodedBundle_orMatrixOutputs_hi_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+198,"decodedBundle_orMatrixOutputs_hi_hi_hi_2", false,-1, 2,0);
    tracep->declBus(c+199,"decodedBundle_orMatrixOutputs_hi_hi_7", false,-1, 4,0);
    tracep->declBus(c+200,"decodedBundle_orMatrixOutputs_hi_8", false,-1, 8,0);
    tracep->declBus(c+201,"decodedBundle_orMatrixOutputs_lo_hi_8", false,-1, 1,0);
    tracep->declBus(c+202,"decodedBundle_orMatrixOutputs_lo_8", false,-1, 2,0);
    tracep->declBus(c+203,"decodedBundle_orMatrixOutputs_hi_lo_5", false,-1, 1,0);
    tracep->declBus(c+204,"decodedBundle_orMatrixOutputs_hi_hi_8", false,-1, 1,0);
    tracep->declBus(c+204,"decodedBundle_orMatrixOutputs_hi_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+205,"decodedBundle_orMatrixOutputs_hi_9", false,-1, 3,0);
    tracep->declBus(c+206,"decodedBundle_orMatrixOutputs_lo_9", false,-1, 1,0);
    tracep->declBus(c+207,"decodedBundle_orMatrixOutputs_hi_10", false,-1, 1,0);
    tracep->declBus(c+208,"decodedBundle_orMatrixOutputs_hi_11", false,-1, 1,0);
    tracep->declBus(c+209,"decodedBundle_orMatrixOutputs_hi_12", false,-1, 1,0);
    tracep->declBus(c+210,"decodedBundle_orMatrixOutputs_lo_10", false,-1, 1,0);
    tracep->declBus(c+211,"decodedBundle_orMatrixOutputs_hi_hi_9", false,-1, 1,0);
    tracep->declBus(c+211,"decodedBundle_orMatrixOutputs_hi_hi_11", false,-1, 1,0);
    tracep->declBus(c+212,"decodedBundle_orMatrixOutputs_hi_13", false,-1, 2,0);
    tracep->declBus(c+213,"decodedBundle_orMatrixOutputs_lo_hi_9", false,-1, 1,0);
    tracep->declBus(c+214,"decodedBundle_orMatrixOutputs_lo_12", false,-1, 3,0);
    tracep->declBus(c+215,"decodedBundle_orMatrixOutputs_hi_15", false,-1, 3,0);
    tracep->declBus(c+216,"decodedBundle_orMatrixOutputs_lo_13", false,-1, 1,0);
    tracep->declBus(c+217,"decodedBundle_orMatrixOutputs_hi_16", false,-1, 2,0);
    tracep->declBus(c+218,"decodedBundle_orMatrixOutputs_lo_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+219,"decodedBundle_orMatrixOutputs_lo_lo_lo_1", false,-1, 2,0);
    tracep->declBus(c+220,"decodedBundle_orMatrixOutputs_lo_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+221,"decodedBundle_orMatrixOutputs_lo_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+222,"decodedBundle_orMatrixOutputs_lo_lo_hi_1", false,-1, 3,0);
    tracep->declBus(c+223,"decodedBundle_orMatrixOutputs_lo_lo_4", false,-1, 6,0);
    tracep->declBus(c+224,"decodedBundle_orMatrixOutputs_lo_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+225,"decodedBundle_orMatrixOutputs_lo_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+226,"decodedBundle_orMatrixOutputs_lo_hi_lo_1", false,-1, 3,0);
    tracep->declBus(c+227,"decodedBundle_orMatrixOutputs_lo_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+228,"decodedBundle_orMatrixOutputs_lo_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+229,"decodedBundle_orMatrixOutputs_lo_hi_hi_2", false,-1, 3,0);
    tracep->declBus(c+230,"decodedBundle_orMatrixOutputs_lo_hi_10", false,-1, 7,0);
    tracep->declBus(c+231,"decodedBundle_orMatrixOutputs_lo_14", false,-1, 14,0);
    tracep->declBus(c+52,"decodedBundle_orMatrixOutputs_hi_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+232,"decodedBundle_orMatrixOutputs_hi_lo_lo_1", false,-1, 2,0);
    tracep->declBus(c+233,"decodedBundle_orMatrixOutputs_hi_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+234,"decodedBundle_orMatrixOutputs_hi_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+235,"decodedBundle_orMatrixOutputs_hi_lo_hi_1", false,-1, 3,0);
    tracep->declBus(c+236,"decodedBundle_orMatrixOutputs_hi_lo_7", false,-1, 6,0);
    tracep->declBus(c+54,"decodedBundle_orMatrixOutputs_hi_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+237,"decodedBundle_orMatrixOutputs_hi_hi_lo_1", false,-1, 3,0);
    tracep->declBus(c+238,"decodedBundle_orMatrixOutputs_hi_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+327,"decodedBundle_orMatrixOutputs_hi_hi_hi_hi_1", false,-1, 1,0);
    tracep->declBus(c+328,"decodedBundle_orMatrixOutputs_hi_hi_hi_3", false,-1, 3,0);
    tracep->declBus(c+329,"decodedBundle_orMatrixOutputs_hi_hi_12", false,-1, 7,0);
    tracep->declBus(c+239,"decodedBundle_orMatrixOutputs_hi_17", false,-1, 14,0);
    tracep->declBus(c+58,"decodedBundle_orMatrixOutputs", false,-1, 29,0);
    tracep->declBus(c+218,"decodedBundle_invMatrixOutputs_lo_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+219,"decodedBundle_invMatrixOutputs_lo_lo_lo", false,-1, 2,0);
    tracep->declBus(c+220,"decodedBundle_invMatrixOutputs_lo_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+221,"decodedBundle_invMatrixOutputs_lo_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+222,"decodedBundle_invMatrixOutputs_lo_lo_hi", false,-1, 3,0);
    tracep->declBus(c+223,"decodedBundle_invMatrixOutputs_lo_lo", false,-1, 6,0);
    tracep->declBus(c+224,"decodedBundle_invMatrixOutputs_lo_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+225,"decodedBundle_invMatrixOutputs_lo_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+226,"decodedBundle_invMatrixOutputs_lo_hi_lo", false,-1, 3,0);
    tracep->declBus(c+227,"decodedBundle_invMatrixOutputs_lo_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+228,"decodedBundle_invMatrixOutputs_lo_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+229,"decodedBundle_invMatrixOutputs_lo_hi_hi", false,-1, 3,0);
    tracep->declBus(c+230,"decodedBundle_invMatrixOutputs_lo_hi", false,-1, 7,0);
    tracep->declBus(c+231,"decodedBundle_invMatrixOutputs_lo", false,-1, 14,0);
    tracep->declBus(c+52,"decodedBundle_invMatrixOutputs_hi_lo_lo_hi", false,-1, 1,0);
    tracep->declBus(c+232,"decodedBundle_invMatrixOutputs_hi_lo_lo", false,-1, 2,0);
    tracep->declBus(c+233,"decodedBundle_invMatrixOutputs_hi_lo_hi_lo", false,-1, 1,0);
    tracep->declBus(c+234,"decodedBundle_invMatrixOutputs_hi_lo_hi_hi", false,-1, 1,0);
    tracep->declBus(c+235,"decodedBundle_invMatrixOutputs_hi_lo_hi", false,-1, 3,0);
    tracep->declBus(c+236,"decodedBundle_invMatrixOutputs_hi_lo", false,-1, 6,0);
    tracep->declBus(c+204,"decodedBundle_invMatrixOutputs_hi_hi_lo_lo", false,-1, 1,0);
    tracep->declBus(c+54,"decodedBundle_invMatrixOutputs_hi_hi_lo_hi", false,-1, 1,0);
    tracep->declBus(c+237,"decodedBundle_invMatrixOutputs_hi_hi_lo", false,-1, 3,0);
    tracep->declBus(c+238,"decodedBundle_invMatrixOutputs_hi_hi_hi_lo", false,-1, 1,0);
    tracep->declBus(c+327,"decodedBundle_invMatrixOutputs_hi_hi_hi_hi", false,-1, 1,0);
    tracep->declBus(c+328,"decodedBundle_invMatrixOutputs_hi_hi_hi", false,-1, 3,0);
    tracep->declBus(c+329,"decodedBundle_invMatrixOutputs_hi_hi", false,-1, 7,0);
    tracep->declBus(c+239,"decodedBundle_invMatrixOutputs_hi", false,-1, 14,0);
    tracep->declBus(c+58,"decodedBundle_plaOutput", false,-1, 29,0);
    tracep->declBit(c+303,"io_Ebreak_0", false,-1);
    tracep->declBit(c+5,"io_Valid_0", false,-1);
    tracep->declBit(c+55,"io_WbEn_0", false,-1);
    tracep->declBit(c+4,"io_MemRW_0", false,-1);
    tracep->declBus(c+54,"io_WbSel_0", false,-1, 1,0);
    tracep->declBus(c+15,"io_CSRCmd_0", false,-1, 2,0);
    tracep->declBus(c+53,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+52,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+51,"io_BrType_0", false,-1, 2,0);
    tracep->declBus(c+306,"io_ALUSel_0", false,-1, 3,0);
    tracep->declBus(c+50,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+49,"io_BSel_0", false,-1, 1,0);
    tracep->declBus(c+48,"io_ASel_0", false,-1, 1,0);
    tracep->declBus(c+56,"io_PCSel_0", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CompareInstance ");
    tracep->declBus(c+240,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+3,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+51,"io_BrType", false,-1, 2,0);
    tracep->declBit(c+47,"io_result", false,-1);
    tracep->declBus(c+240,"io_rs1_0", false,-1, 31,0);
    tracep->declBus(c+3,"io_rs2_0", false,-1, 31,0);
    tracep->declBus(c+51,"io_BrType_0", false,-1, 2,0);
    tracep->declBit(c+47,"io_result_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ImmGenInstance ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+50,"io_ImmSel", false,-1, 2,0);
    tracep->declBus(c+241,"io_out", false,-1, 31,0);
    tracep->declBus(c+1,"io_inst_0", false,-1, 31,0);
    tracep->declBus(c+50,"io_ImmSel_0", false,-1, 2,0);
    tracep->declBus(c+242,"Iimm", false,-1, 31,0);
    tracep->declBus(c+243,"Simm_hi", false,-1, 26,0);
    tracep->declBus(c+244,"Simm", false,-1, 31,0);
    tracep->declBus(c+245,"Bimm_lo", false,-1, 4,0);
    tracep->declBus(c+246,"Bimm_hi_hi", false,-1, 20,0);
    tracep->declBus(c+247,"Bimm_hi", false,-1, 26,0);
    tracep->declBus(c+248,"Bimm", false,-1, 31,0);
    tracep->declBus(c+249,"Uimm", false,-1, 31,0);
    tracep->declBus(c+250,"Jimm_lo_hi", false,-1, 9,0);
    tracep->declBus(c+251,"Jimm_lo", false,-1, 10,0);
    tracep->declBus(c+252,"Jimm_hi_hi", false,-1, 19,0);
    tracep->declBus(c+253,"Jimm_hi", false,-1, 20,0);
    tracep->declBus(c+254,"Jimm", false,-1, 31,0);
    tracep->declBus(c+255,"Zimm", false,-1, 31,0);
    tracep->declBus(c+241,"io_out_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("JPCGenInstance ");
    tracep->declBus(c+2,"io_alu_data", false,-1, 31,0);
    tracep->declBus(c+256,"io_pc_alu", false,-1, 31,0);
    tracep->declBus(c+2,"io_alu_data_0", false,-1, 31,0);
    tracep->declBus(c+256,"io_pc_alu_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LdDataInstance ");
    tracep->declBus(c+53,"io_LdType", false,-1, 2,0);
    tracep->declBus(c+7,"io_rdata", false,-1, 31,0);
    tracep->declBus(c+257,"io_wb_data", false,-1, 31,0);
    tracep->declBus(c+53,"io_LdType_0", false,-1, 2,0);
    tracep->declBus(c+7,"io_rdata_0", false,-1, 31,0);
    tracep->declBus(c+257,"io_wb_data_0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFileInstance ");
    tracep->declBit(c+301,"clock", false,-1);
    tracep->declBus(c+258,"io_raddr1", false,-1, 4,0);
    tracep->declBus(c+259,"io_raddr2", false,-1, 4,0);
    tracep->declBus(c+240,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+3,"io_rs2", false,-1, 31,0);
    tracep->declBit(c+55,"io_wen", false,-1);
    tracep->declBus(c+260,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+261,"io_wdata", false,-1, 31,0);
    tracep->declArray(c+307,"io_gpr", false,-1, 511,0);
    tracep->declBus(c+258,"io_raddr1_0", false,-1, 4,0);
    tracep->declBus(c+259,"io_raddr2_0", false,-1, 4,0);
    tracep->declBit(c+55,"io_wen_0", false,-1);
    tracep->declBus(c+260,"io_waddr_0", false,-1, 4,0);
    tracep->declBus(c+261,"io_wdata_0", false,-1, 31,0);
    tracep->declBus(c+240,"io_rs1_0", false,-1, 31,0);
    tracep->declBus(c+3,"io_rs2_0", false,-1, 31,0);
    tracep->declArray(c+307,"io_gpr_0", false,-1, 511,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+262,"R0_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R0_en", false,-1);
    tracep->declBit(c+301,"R0_clk", false,-1);
    tracep->declBus(c+263,"R0_data", false,-1, 31,0);
    tracep->declBus(c+264,"R1_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R1_en", false,-1);
    tracep->declBit(c+301,"R1_clk", false,-1);
    tracep->declBus(c+265,"R1_data", false,-1, 31,0);
    tracep->declBus(c+337,"R2_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R2_en", false,-1);
    tracep->declBit(c+301,"R2_clk", false,-1);
    tracep->declBus(c+266,"R2_data", false,-1, 31,0);
    tracep->declBus(c+338,"R3_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R3_en", false,-1);
    tracep->declBit(c+301,"R3_clk", false,-1);
    tracep->declBus(c+267,"R3_data", false,-1, 31,0);
    tracep->declBus(c+339,"R4_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R4_en", false,-1);
    tracep->declBit(c+301,"R4_clk", false,-1);
    tracep->declBus(c+268,"R4_data", false,-1, 31,0);
    tracep->declBus(c+340,"R5_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R5_en", false,-1);
    tracep->declBit(c+301,"R5_clk", false,-1);
    tracep->declBus(c+269,"R5_data", false,-1, 31,0);
    tracep->declBus(c+341,"R6_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R6_en", false,-1);
    tracep->declBit(c+301,"R6_clk", false,-1);
    tracep->declBus(c+270,"R6_data", false,-1, 31,0);
    tracep->declBus(c+342,"R7_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R7_en", false,-1);
    tracep->declBit(c+301,"R7_clk", false,-1);
    tracep->declBus(c+271,"R7_data", false,-1, 31,0);
    tracep->declBus(c+343,"R8_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R8_en", false,-1);
    tracep->declBit(c+301,"R8_clk", false,-1);
    tracep->declBus(c+272,"R8_data", false,-1, 31,0);
    tracep->declBus(c+344,"R9_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R9_en", false,-1);
    tracep->declBit(c+301,"R9_clk", false,-1);
    tracep->declBus(c+273,"R9_data", false,-1, 31,0);
    tracep->declBus(c+345,"R10_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R10_en", false,-1);
    tracep->declBit(c+301,"R10_clk", false,-1);
    tracep->declBus(c+274,"R10_data", false,-1, 31,0);
    tracep->declBus(c+346,"R11_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R11_en", false,-1);
    tracep->declBit(c+301,"R11_clk", false,-1);
    tracep->declBus(c+275,"R11_data", false,-1, 31,0);
    tracep->declBus(c+347,"R12_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R12_en", false,-1);
    tracep->declBit(c+301,"R12_clk", false,-1);
    tracep->declBus(c+276,"R12_data", false,-1, 31,0);
    tracep->declBus(c+348,"R13_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R13_en", false,-1);
    tracep->declBit(c+301,"R13_clk", false,-1);
    tracep->declBus(c+277,"R13_data", false,-1, 31,0);
    tracep->declBus(c+349,"R14_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R14_en", false,-1);
    tracep->declBit(c+301,"R14_clk", false,-1);
    tracep->declBus(c+278,"R14_data", false,-1, 31,0);
    tracep->declBus(c+350,"R15_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R15_en", false,-1);
    tracep->declBit(c+301,"R15_clk", false,-1);
    tracep->declBus(c+279,"R15_data", false,-1, 31,0);
    tracep->declBus(c+351,"R16_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R16_en", false,-1);
    tracep->declBit(c+301,"R16_clk", false,-1);
    tracep->declBus(c+280,"R16_data", false,-1, 31,0);
    tracep->declBus(c+352,"R17_addr", false,-1, 3,0);
    tracep->declBit(c+330,"R17_en", false,-1);
    tracep->declBit(c+301,"R17_clk", false,-1);
    tracep->declBus(c+281,"R17_data", false,-1, 31,0);
    tracep->declBus(c+282,"W0_addr", false,-1, 3,0);
    tracep->declBit(c+283,"W0_en", false,-1);
    tracep->declBit(c+301,"W0_clk", false,-1);
    tracep->declBus(c+261,"W0_data", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+284+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WmaskGenInstance ");
    tracep->declBus(c+52,"io_StType", false,-1, 1,0);
    tracep->declBus(c+6,"io_wmask", false,-1, 3,0);
    tracep->declBus(c+52,"io_StType_0", false,-1, 1,0);
    tracep->declBus(c+6,"io_wmask_0", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory ");
    tracep->declBit(c+301,"clock", false,-1);
    tracep->declBus(c+304,"io_imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+3,"io_dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+4,"io_dmem_wen", false,-1);
    tracep->declBit(c+5,"io_dmem_valid", false,-1);
    tracep->declBus(c+6,"io_dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+7,"io_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+7,"io_dmem_rdata_0", false,-1, 31,0);
    tracep->declBus(c+1,"io_imem_inst_0", false,-1, 31,0);
    tracep->declBus(c+304,"io_imem_addr_0", false,-1, 31,0);
    tracep->declBus(c+2,"io_dmem_addr_0", false,-1, 31,0);
    tracep->declBus(c+3,"io_dmem_wdata_0", false,-1, 31,0);
    tracep->declBit(c+4,"io_dmem_wen_0", false,-1);
    tracep->declBit(c+5,"io_dmem_valid_0", false,-1);
    tracep->declBus(c+6,"io_dmem_wmask_0", false,-1, 3,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+301,"clk", false,-1);
    tracep->declBus(c+304,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+1,"imem_inst", false,-1, 31,0);
    tracep->declBit(c+5,"valid", false,-1);
    tracep->declBus(c+2,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+3,"dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+4,"dmem_wen", false,-1);
    tracep->declBus(c+6,"dmem_wmask", false,-1, 3,0);
    tracep->declBus(c+7,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+7,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+300,"full_mask", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_hbf4ecf25__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Top__DOT__memory__DOT__io_imem_inst_0),32);
    bufp->fullIData(oldp+2,(vlSelf->Top__DOT___core_io_dmem_addr),32);
    bufp->fullIData(oldp+3,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs2_0),32);
    bufp->fullBit(oldp+4,((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))));
    bufp->fullBit(oldp+5,(vlSelf->Top__DOT___core_io_dmem_valid));
    bufp->fullCData(oldp+6,(vlSelf->Top__DOT___core_io_dmem_wmask),4);
    bufp->fullIData(oldp+7,(vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata),32);
    bufp->fullIData(oldp+8,(vlSelf->Top__DOT__core__DOT__pc),32);
    bufp->fullIData(oldp+9,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc)),32);
    bufp->fullIData(oldp+10,(((4U == (7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                            >> 6U)))
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                              [0x305U] : ((5U == (7U 
                                                  & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                                     >> 6U)))
                                           ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                          [0x341U] : 0U))),32);
    bufp->fullIData(oldp+11,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A),32);
    bufp->fullIData(oldp+12,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B),32);
    bufp->fullCData(oldp+13,((0x1fU & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B)),5);
    bufp->fullSData(oldp+14,((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+15,((7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                    >> 6U))),3);
    bufp->fullIData(oldp+16,(vlSelf->Top__DOT__core__DOT____Vcellinp__CSRInstance__io_wdata),32);
    bufp->fullIData(oldp+17,(((IData)(((0U != (0x1c0U 
                                               & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))) 
                                       | (1U == (7U 
                                                 & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                                    >> 6U)))))
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                               : ((IData)(((0U == (0x1c0U 
                                                   & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))) 
                                           & (1U != 
                                              (7U & 
                                               ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                                >> 6U)))))
                                   ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                   : 0U))),32);
    bufp->fullQData(oldp+18,((QData)((IData)(((0x80U 
                                               & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                  [0x300U] 
                                                  << 4U)) 
                                              | (0xffffff7fU 
                                                 & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                 [0x300U]))))),36);
    bufp->fullIData(oldp+20,((0x80U | ((0xfffffff7U 
                                        & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                        [0x300U]) | 
                                       (8U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                              [0x300U] 
                                              >> 4U))))),32);
    bufp->fullBit(oldp+21,((IData)(((0U == (0x1c0U 
                                            & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))) 
                                    & (1U != (7U & 
                                              ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                               >> 6U)))))));
    bufp->fullIData(oldp+22,(((IData)(((0U == (0x1c0U 
                                               & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))) 
                                       & (1U != (7U 
                                                 & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                                    >> 6U)))))
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                               : 0U)),32);
    bufp->fullIData(oldp+23,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data),32);
    bufp->fullBit(oldp+24,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_3));
    bufp->fullIData(oldp+25,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_3)
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                               : 0U)),32);
    bufp->fullBit(oldp+26,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2));
    bufp->fullIData(oldp+27,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                               : 0U)),32);
    bufp->fullBit(oldp+28,((1U == (7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                         >> 6U)))));
    bufp->fullIData(oldp+29,(((1U == (7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                            >> 6U)))
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                               : 0U)),32);
    bufp->fullBit(oldp+30,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_12));
    bufp->fullIData(oldp+31,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_12)
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                               : 0U)),32);
    bufp->fullBit(oldp+32,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_8));
    bufp->fullIData(oldp+33,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_8)
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                               : 0U)),32);
    bufp->fullBit(oldp+34,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7));
    bufp->fullIData(oldp+35,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                               : 0U)),32);
    bufp->fullIData(oldp+36,((0x80207888U & ((~ vlSelf->Top__DOT__core__DOT____Vcellinp__CSRInstance__io_wdata) 
                                             & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                                 ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                                 : 0U)))),32);
    bufp->fullBit(oldp+37,(((0x300U != (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0x14U)) 
                            & (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0) 
                            & (0x300U == (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0x14U)))));
    bufp->fullIData(oldp+39,((0x80207888U & vlSelf->Top__DOT__core__DOT____Vcellinp__CSRInstance__io_wdata)),32);
    bufp->fullIData(oldp+40,((((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_3)
                                ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                : 0U) | vlSelf->Top__DOT__core__DOT____Vcellinp__CSRInstance__io_wdata)),32);
    bufp->fullIData(oldp+41,((0x80207888U & (((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                               : 0U) 
                                             | vlSelf->Top__DOT__core__DOT____Vcellinp__CSRInstance__io_wdata))),32);
    bufp->fullBit(oldp+42,(((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0)) 
                            & (0x140U == (0x1c0U & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))))));
    bufp->fullBit(oldp+43,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_10));
    bufp->fullIData(oldp+44,(((0x80U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                        [0x300U] << 4U)) 
                              | (0xffffff7fU & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                 [0x300U]))),32);
    bufp->fullIData(oldp+45,(((~ vlSelf->Top__DOT__core__DOT____Vcellinp__CSRInstance__io_wdata) 
                              & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_8)
                                  ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                  : 0U))),32);
    bufp->fullIData(oldp+46,((((1U == (7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                             >> 6U)))
                                ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                : 0U) | vlSelf->Top__DOT__core__DOT____Vcellinp__CSRInstance__io_wdata)),32);
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                  >> (7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                            >> 0xdU))))));
    bufp->fullCData(oldp+48,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+49,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                                    >> 1U))),2);
    bufp->fullCData(oldp+50,((7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14) 
                                    >> 6U))),3);
    bufp->fullCData(oldp+51,((7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                    >> 0xdU))),3);
    bufp->fullCData(oldp+52,(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType),2);
    bufp->fullCData(oldp+53,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                               << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))),3);
    bufp->fullCData(oldp+54,(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX),2);
    bufp->fullBit(oldp+55,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0));
    bufp->fullCData(oldp+56,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel),2);
    bufp->fullIData(oldp+57,((~ vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)),32);
    bufp->fullIData(oldp+58,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs),30);
    bufp->fullBit(oldp+59,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 2U)))));
    bufp->fullBit(oldp+60,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 5U)))));
    bufp->fullBit(oldp+61,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2));
    bufp->fullBit(oldp+62,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 4U)))));
    bufp->fullBit(oldp+63,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xcU)))));
    bufp->fullCData(oldp+64,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi),2);
    bufp->fullBit(oldp+65,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2));
    bufp->fullBit(oldp+66,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+67,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xeU)))));
    bufp->fullCData(oldp+68,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 5U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+69,((IData)((0U == (0x6020U 
                                           & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
    bufp->fullCData(oldp+70,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0xeU))))),2);
    bufp->fullBit(oldp+71,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2));
    bufp->fullBit(oldp+72,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0x1eU)))));
    bufp->fullCData(oldp+73,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xeU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x1eU))))),2);
    bufp->fullCData(oldp+74,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 2U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+75,((IData)((0U == (0x40006004U 
                                           & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 2U))));
    bufp->fullBit(oldp+77,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 3U)))));
    bufp->fullCData(oldp+78,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 3U))))),2);
    bufp->fullBit(oldp+79,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2));
    bufp->fullBit(oldp+80,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2));
    bufp->fullBit(oldp+81,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 3U))));
    bufp->fullBit(oldp+82,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 5U))));
    bufp->fullBit(oldp+83,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 6U)))));
    bufp->fullCData(oldp+84,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 6U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xcU))))),2);
    bufp->fullCData(oldp+85,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5),2);
    bufp->fullBit(oldp+86,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2));
    bufp->fullCData(oldp+87,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 6U)) << 1U)) 
                              | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU))))),2);
    bufp->fullBit(oldp+88,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2));
    bufp->fullBit(oldp+89,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 4U))));
    bufp->fullCData(oldp+90,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 4U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 6U))))),2);
    bufp->fullCData(oldp+91,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7),2);
    bufp->fullBit(oldp+92,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2));
    bufp->fullCData(oldp+93,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 1U)) | (1U 
                                                & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 4U)))),2);
    bufp->fullBit(oldp+94,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2));
    bufp->fullBit(oldp+95,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                  >> 6U))));
    bufp->fullCData(oldp+96,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xcU)) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0xdU))))),2);
    bufp->fullCData(oldp+97,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi),2);
    bufp->fullCData(oldp+98,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9),3);
    bufp->fullBit(oldp+99,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2));
    bufp->fullCData(oldp+100,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 5U)) | (1U 
                                                 & (~ 
                                                    (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                     >> 0xeU))))),2);
    bufp->fullBit(oldp+101,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                             & (IData)((0x40U == (0x4040U 
                                                  & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullCData(oldp+102,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xcU)) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                     >> 0xeU))))),2);
    bufp->fullBit(oldp+103,(((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                             & (IData)((0U == (0x5000U 
                                               & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullBit(oldp+104,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0x14U)))));
    bufp->fullCData(oldp+105,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                     >> 0x14U))))),2);
    bufp->fullCData(oldp+106,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2),2);
    bufp->fullCData(oldp+107,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12),3);
    bufp->fullBit(oldp+108,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2));
    bufp->fullBit(oldp+109,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0xcU))));
    bufp->fullCData(oldp+110,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                     >> 0x1eU))))),2);
    bufp->fullCData(oldp+111,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 2U)) << 1U)) 
                               | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xcU)))),2);
    bufp->fullBit(oldp+112,((IData)((0x1000U == (0x40003004U 
                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
    bufp->fullCData(oldp+113,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0xbU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xeU))))),2);
    bufp->fullCData(oldp+114,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14),3);
    bufp->fullBit(oldp+115,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_30_2));
    bufp->fullCData(oldp+116,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 5U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0xcU)))),2);
    bufp->fullBit(oldp+117,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2));
    bufp->fullBit(oldp+118,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2));
    bufp->fullCData(oldp+119,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12),2);
    bufp->fullBit(oldp+120,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                             & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12)))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0xdU))));
    bufp->fullCData(oldp+122,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xeU))))),2);
    bufp->fullBit(oldp+123,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2));
    bufp->fullCData(oldp+124,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14),2);
    bufp->fullBit(oldp+125,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2));
    bufp->fullBit(oldp+126,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2));
    bufp->fullCData(oldp+127,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0xbU)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0xdU)))),2);
    bufp->fullCData(oldp+128,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_21),2);
    bufp->fullBit(oldp+129,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_21)) 
                             & (IData)((0x3000U == 
                                        (0x3000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullBit(oldp+130,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0xeU))));
    bufp->fullBit(oldp+131,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2));
    bufp->fullBit(oldp+132,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                             & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                >> 0xeU))));
    bufp->fullCData(oldp+133,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12) 
                                << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0xeU)))),3);
    bufp->fullCData(oldp+134,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi) 
                                << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 5U)))),3);
    bufp->fullBit(oldp+135,((IData)((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                      & (0x4020U == 
                                         (0x4020U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                     & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))));
    bufp->fullCData(oldp+136,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0xcU)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0xeU)))),2);
    bufp->fullCData(oldp+137,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_21) 
                                << 1U) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 0xcU))))),3);
    bufp->fullBit(oldp+138,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2));
    bufp->fullBit(oldp+139,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0x14U))));
    bufp->fullCData(oldp+140,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x14U)))),2);
    bufp->fullBit(oldp+141,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0x15U))));
    bufp->fullCData(oldp+142,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xcU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x15U)))),2);
    bufp->fullBit(oldp+143,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                             & (IData)((0x200000U == 
                                        (0x201000U 
                                         & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+145,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 4U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x1eU)))),2);
    bufp->fullBit(oldp+146,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                             & (IData)((0x40000020U 
                                        == (0x40000020U 
                                            & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullCData(oldp+147,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x1eU)))),2);
    bufp->fullCData(oldp+148,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                                << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0xcU)))),3);
    bufp->fullBit(oldp+149,((IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                     & (0x40001000U 
                                        == (0x40003000U 
                                            & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
    bufp->fullCData(oldp+150,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN),2);
    bufp->fullCData(oldp+151,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2))),2);
    bufp->fullCData(oldp+152,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
    bufp->fullCData(oldp+153,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
    bufp->fullCData(oldp+154,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
    bufp->fullCData(oldp+155,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2)))),3);
    bufp->fullCData(oldp+156,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                 << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2)))),5);
    bufp->fullCData(oldp+157,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0),2);
    bufp->fullCData(oldp+158,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
    bufp->fullCData(oldp+159,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
    bufp->fullCData(oldp+160,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1),2);
    bufp->fullCData(oldp+161,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2))),3);
    bufp->fullCData(oldp+162,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
    bufp->fullCData(oldp+163,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),3);
    bufp->fullCData(oldp+164,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1),2);
    bufp->fullCData(oldp+165,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2),2);
    bufp->fullCData(oldp+166,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))),4);
    bufp->fullCData(oldp+167,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
    bufp->fullCData(oldp+168,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+169,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2)))),3);
    bufp->fullCData(oldp+170,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                 << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),5);
    bufp->fullCData(oldp+171,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3),2);
    bufp->fullCData(oldp+172,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),3);
    bufp->fullCData(oldp+173,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3)))),5);
    bufp->fullCData(oldp+174,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
    bufp->fullCData(oldp+175,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
    bufp->fullCData(oldp+176,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+177,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2)))),4);
    bufp->fullCData(oldp+178,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
    bufp->fullCData(oldp+179,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),3);
    bufp->fullCData(oldp+180,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),2);
    bufp->fullCData(oldp+181,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2)))),3);
    bufp->fullCData(oldp+182,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
    bufp->fullCData(oldp+183,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),3);
    bufp->fullCData(oldp+184,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 2U)) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2))),2);
    bufp->fullCData(oldp+185,(((4U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 1U)) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)))),3);
    bufp->fullCData(oldp+186,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
    bufp->fullCData(oldp+187,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+188,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                 << 3U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                           << 2U)) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2)))),4);
    bufp->fullCData(oldp+189,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
    bufp->fullCData(oldp+190,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 1U) | (IData)((0x1000U 
                                                  == 
                                                  (0x40003004U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
    bufp->fullCData(oldp+191,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                << 2U) | (((IData)(
                                                   (0x1000U 
                                                    == 
                                                    (0x40003004U 
                                                     & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_30_2)))),3);
    bufp->fullCData(oldp+192,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                 << 4U) | (((IData)(
                                                    (0x1000U 
                                                     == 
                                                     (0x40003004U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                            << 3U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_30_2) 
                                              << 2U))) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2)))),5);
    bufp->fullSData(oldp+193,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                  << 8U) | (((IData)(
                                                     (0x1000U 
                                                      == 
                                                      (0x40003004U 
                                                       & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                             << 7U) 
                                            | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_30_2) 
                                               << 6U))) 
                                | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                    << 5U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                              << 4U))) 
                               | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                    << 3U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))))),9);
    bufp->fullCData(oldp+194,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2))),2);
    bufp->fullCData(oldp+195,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2)))),4);
    bufp->fullCData(oldp+196,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
    bufp->fullCData(oldp+197,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                << 1U) | (IData)((0U 
                                                  == 
                                                  (0x6020U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
    bufp->fullCData(oldp+198,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
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
    bufp->fullCData(oldp+199,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
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
    bufp->fullSData(oldp+200,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
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
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2))))),9);
    bufp->fullCData(oldp+201,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2) 
                                << 1U) | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                          & (IData)(
                                                    (0x40000020U 
                                                     == 
                                                     (0x40000020U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))),2);
    bufp->fullCData(oldp+202,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2) 
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
    bufp->fullCData(oldp+203,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+204,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4),2);
    bufp->fullCData(oldp+205,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),4);
    bufp->fullCData(oldp+206,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                << 1U) | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_21)) 
                                          & (IData)(
                                                    (0x3000U 
                                                     == 
                                                     (0x3000U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))),2);
    bufp->fullCData(oldp+207,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_30_2))),2);
    bufp->fullCData(oldp+208,(((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                 & (IData)((0U == (0x5000U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
    bufp->fullCData(oldp+209,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                 & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
    bufp->fullCData(oldp+210,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+211,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5),2);
    bufp->fullCData(oldp+212,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),3);
    bufp->fullCData(oldp+213,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
    bufp->fullCData(oldp+214,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
    bufp->fullCData(oldp+215,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1))),4);
    bufp->fullCData(oldp+216,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+217,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),3);
    bufp->fullCData(oldp+218,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2)) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0))),2);
    bufp->fullCData(oldp+219,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2)) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0)))),3);
    bufp->fullCData(oldp+220,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                  | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                     | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3)))) 
                                 | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                     | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2))) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 1U) | (((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                           | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))) 
                                          | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                             | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                                | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))))),2);
    bufp->fullCData(oldp+221,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                  | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))) 
                                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
    bufp->fullCData(oldp+222,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1),4);
    bufp->fullCData(oldp+223,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4),7);
    bufp->fullCData(oldp+224,(((2U & (((0x3ffffffeU 
                                        & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 2U)) 
                                       | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)) 
                                          << 1U)) | 
                                      (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                        | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))) 
                                       << 1U))) | (
                                                   ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2))) 
                                                   | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                                      | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                                         | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))))),2);
    bufp->fullCData(oldp+225,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi),2);
    bufp->fullCData(oldp+226,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi) 
                                << 2U) | ((2U & (((0x3ffffffeU 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 2U)) 
                                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
                                                      | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)) 
                                                     << 1U)) 
                                                 | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                                     | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))) 
                                                    << 1U))) 
                                          | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2))) 
                                             | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                                | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))))))),4);
    bufp->fullCData(oldp+227,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                    >> 0xeU)) << 1U) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_30_2)) 
                                  | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                     | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_21)) 
                                        & (IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))))),2);
    bufp->fullCData(oldp+228,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
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
    bufp->fullCData(oldp+229,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
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
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                      | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_30_2)) 
                                     | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                        | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_21)) 
                                           & (IData)(
                                                     (0x3000U 
                                                      == 
                                                      (0x3000U 
                                                       & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))))))),4);
    bufp->fullCData(oldp+230,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_10),8);
    bufp->fullSData(oldp+231,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14),15);
    bufp->fullCData(oldp+232,((((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),3);
    bufp->fullCData(oldp+233,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo),2);
    bufp->fullCData(oldp+234,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                   & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (IData)((0x200000U 
                                               == (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
    bufp->fullCData(oldp+235,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                   & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (IData)((0x200000U 
                                               == (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                           << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo)))),4);
    bufp->fullCData(oldp+236,((((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
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
    bufp->fullCData(oldp+237,((((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4))),4);
    bufp->fullCData(oldp+238,((((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                << 1U) | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1)))),2);
    bufp->fullSData(oldp+239,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17),15);
    bufp->fullIData(oldp+240,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0),32);
    bufp->fullIData(oldp+241,(vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0),32);
    bufp->fullIData(oldp+242,((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x1fU))) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 0x14U)))),32);
    bufp->fullIData(oldp+243,(((0x7ffffc0U & ((- (IData)(
                                                         (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                          >> 0x1fU))) 
                                              << 6U)) 
                               | (0x3fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0x19U)))),27);
    bufp->fullIData(oldp+244,((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x1fU))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                  >> 7U))))),32);
    bufp->fullCData(oldp+245,((0x1eU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 7U))),5);
    bufp->fullIData(oldp+246,(((0x1ffffeU & ((- (IData)(
                                                        (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                         >> 0x1fU))) 
                                             << 1U)) 
                               | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 7U)))),21);
    bufp->fullIData(oldp+247,(((0x7ffff80U & ((- (IData)(
                                                         (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                          >> 0x1fU))) 
                                              << 7U)) 
                               | ((0x40U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 1U)) 
                                  | (0x3fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                              >> 0x19U))))),27);
    bufp->fullIData(oldp+248,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                 << 4U)) 
                                             | (0x7e0U 
                                                & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 0x14U)))) 
                               | (0x1eU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 7U)))),32);
    bufp->fullIData(oldp+249,((0xfffff000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)),32);
    bufp->fullSData(oldp+250,((0x3ffU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x15U))),10);
    bufp->fullSData(oldp+251,((0x7feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x14U))),11);
    bufp->fullIData(oldp+252,(((0xfff00U & ((- (IData)(
                                                       (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                        >> 0x1fU))) 
                                            << 8U)) 
                               | (0xffU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0xcU)))),20);
    bufp->fullIData(oldp+253,(((0x1ffe00U & ((- (IData)(
                                                        (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                         >> 0x1fU))) 
                                             << 9U)) 
                               | ((0x1feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0xbU)) 
                                  | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0x14U))))),21);
    bufp->fullIData(oldp+254,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0) 
                                              | (0x800U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 9U)))) 
                               | (0x7feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+255,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xfU))),32);
    bufp->fullIData(oldp+256,((0xfffffffeU & vlSelf->Top__DOT___core_io_dmem_addr)),32);
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
    bufp->fullIData(oldp+257,(__Vtemp_h7720a331__0[
                              (7U & ((0x7fffffcU & 
                                      ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                       << 2U)) | (0x7ffffffU 
                                                  & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))]),32);
    bufp->fullCData(oldp+258,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+259,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+260,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 7U))),5);
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
    __Vtemp_hbf4ecf25__0[0U] = vlSelf->Top__DOT___core_io_dmem_addr;
    __Vtemp_hbf4ecf25__0[1U] = __Vtemp_h29950ca1__0[
        (7U & ((0x7fffffcU & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                              << 2U)) | (0x7ffffffU 
                                         & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))];
    __Vtemp_hbf4ecf25__0[2U] = (IData)((((QData)((IData)(
                                                         ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x1c0U 
                                                                     & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))) 
                                                                   | (1U 
                                                                      == 
                                                                      (7U 
                                                                       & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                                                          >> 6U)))))
                                                           ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                                           : 
                                                          ((IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (0x1c0U 
                                                                      & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))) 
                                                                    & (1U 
                                                                       != 
                                                                       (7U 
                                                                        & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                                                           >> 6U)))))
                                                            ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                                            : 0U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelf->Top__DOT__core__DOT__pc)))));
    __Vtemp_hbf4ecf25__0[3U] = (IData)(((((QData)((IData)(
                                                          ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x1c0U 
                                                                      & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))) 
                                                                    | (1U 
                                                                       == 
                                                                       (7U 
                                                                        & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                                                           >> 6U)))))
                                                            ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                                            : 
                                                           ((IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (0x1c0U 
                                                                       & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17))) 
                                                                     & (1U 
                                                                        != 
                                                                        (7U 
                                                                         & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                                                            >> 6U)))))
                                                             ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___csrs_ext_R1_data
                                                             : 0U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(4U) 
                                                            + vlSelf->Top__DOT__core__DOT__pc)))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+261,((((0U == (0x1fU & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                                 << 5U)))
                                 ? 0U : (__Vtemp_hbf4ecf25__0[
                                         (((IData)(0x1fU) 
                                           + (0x7fU 
                                              & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                                 << 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                                << 5U))))) 
                               | (__Vtemp_hbf4ecf25__0[
                                  (3U & (IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX))] 
                                  >> (0x1fU & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                               << 5U))))),32);
    bufp->fullCData(oldp+262,((0xfU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                       >> 0x14U))),4);
    bufp->fullIData(oldp+263,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0xfU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0x14U))]),32);
    bufp->fullCData(oldp+264,((0xfU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                       >> 0xfU))),4);
    bufp->fullIData(oldp+265,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0xfU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+266,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [9U]),32);
    bufp->fullIData(oldp+267,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [8U]),32);
    bufp->fullIData(oldp+268,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [7U]),32);
    bufp->fullIData(oldp+269,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [6U]),32);
    bufp->fullIData(oldp+270,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [5U]),32);
    bufp->fullIData(oldp+271,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [4U]),32);
    bufp->fullIData(oldp+272,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [3U]),32);
    bufp->fullIData(oldp+273,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [2U]),32);
    bufp->fullIData(oldp+274,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [1U]),32);
    bufp->fullIData(oldp+275,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xfU]),32);
    bufp->fullIData(oldp+276,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xeU]),32);
    bufp->fullIData(oldp+277,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xdU]),32);
    bufp->fullIData(oldp+278,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xcU]),32);
    bufp->fullIData(oldp+279,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xbU]),32);
    bufp->fullIData(oldp+280,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0xaU]),32);
    bufp->fullIData(oldp+281,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [0U]),32);
    bufp->fullCData(oldp+282,((0xfU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                       >> 7U))),4);
    bufp->fullBit(oldp+283,(((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                             & (0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 7U))))));
    bufp->fullIData(oldp+284,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+285,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+286,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+287,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+288,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+289,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+290,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+291,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+292,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+293,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+294,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+295,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+296,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+297,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+298,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+299,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+300,(vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask),32);
    bufp->fullBit(oldp+301,(vlSelf->clock));
    bufp->fullBit(oldp+302,(vlSelf->reset));
    bufp->fullBit(oldp+303,(vlSelf->io_ebreak));
    bufp->fullIData(oldp+304,(vlSelf->io_debug_pc),32);
    bufp->fullCData(oldp+305,(vlSelf->io_debug_PCSel),2);
    bufp->fullCData(oldp+306,(vlSelf->io_debug_alu_op),4);
    bufp->fullWData(oldp+307,(vlSelf->io_debug_gpr),512);
    bufp->fullIData(oldp+323,(vlSelf->io_debug_mtvec),32);
    bufp->fullIData(oldp+324,(vlSelf->io_debug_mepc),32);
    bufp->fullIData(oldp+325,(vlSelf->io_debug_mcause),32);
    bufp->fullIData(oldp+326,(vlSelf->io_debug_mstatus),32);
    bufp->fullCData(oldp+327,((((IData)(vlSelf->io_ebreak) 
                                << 1U) | (IData)(vlSelf->Top__DOT___core_io_dmem_valid))),2);
    bufp->fullCData(oldp+328,(((((IData)(vlSelf->io_ebreak) 
                                 << 3U) | ((IData)(vlSelf->Top__DOT___core_io_dmem_valid) 
                                           << 2U)) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                   << 1U) | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))))),4);
    bufp->fullCData(oldp+329,((((((IData)(vlSelf->io_ebreak) 
                                  << 7U) | ((IData)(vlSelf->Top__DOT___core_io_dmem_valid) 
                                            << 6U)) 
                                | ((((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                     << 1U) | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))) 
                                   << 4U)) | (((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                               << 2U) 
                                              | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4)))),8);
    bufp->fullBit(oldp+330,(1U));
    bufp->fullSData(oldp+331,(0x305U),12);
    bufp->fullSData(oldp+332,(0x341U),12);
    bufp->fullSData(oldp+333,(0x342U),12);
    bufp->fullSData(oldp+334,(0x300U),12);
    bufp->fullIData(oldp+335,(0xbU),32);
    bufp->fullIData(oldp+336,(0x1800U),32);
    bufp->fullCData(oldp+337,(9U),4);
    bufp->fullCData(oldp+338,(8U),4);
    bufp->fullCData(oldp+339,(7U),4);
    bufp->fullCData(oldp+340,(6U),4);
    bufp->fullCData(oldp+341,(5U),4);
    bufp->fullCData(oldp+342,(4U),4);
    bufp->fullCData(oldp+343,(3U),4);
    bufp->fullCData(oldp+344,(2U),4);
    bufp->fullCData(oldp+345,(1U),4);
    bufp->fullCData(oldp+346,(0xfU),4);
    bufp->fullCData(oldp+347,(0xeU),4);
    bufp->fullCData(oldp+348,(0xdU),4);
    bufp->fullCData(oldp+349,(0xcU),4);
    bufp->fullCData(oldp+350,(0xbU),4);
    bufp->fullCData(oldp+351,(0xaU),4);
    bufp->fullCData(oldp+352,(0U),4);
}
