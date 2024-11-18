// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VTop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/feng/code/ysyx-workbench/npc/build/Top.sv", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VTop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_ebreak = VL_RAND_RESET_I(1);
    vlSelf->io_debug_pc = VL_RAND_RESET_I(32);
    vlSelf->io_debug_PCSel = VL_RAND_RESET_I(2);
    vlSelf->io_debug_alu_op = VL_RAND_RESET_I(4);
    vlSelf->io_debug_alu_out = VL_RAND_RESET_I(32);
    vlSelf->io_debug_imm_sel = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(512, vlSelf->io_debug_gpr);
    vlSelf->io_debug_mtvec = VL_RAND_RESET_I(32);
    vlSelf->io_debug_mepc = VL_RAND_RESET_I(32);
    vlSelf->io_debug_mcause = VL_RAND_RESET_I(32);
    vlSelf->io_debug_mstatus = VL_RAND_RESET_I(32);
    vlSelf->io_debug_Valid = VL_RAND_RESET_I(1);
    vlSelf->io_debug_addr = VL_RAND_RESET_I(32);
    vlSelf->io_debug_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_debug_wen = VL_RAND_RESET_I(1);
    vlSelf->io_debug_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_debug_csr_id = VL_RAND_RESET_I(12);
    vlSelf->io_debug_CSRCmd = VL_RAND_RESET_I(3);
    vlSelf->io_debug_CSRWdata = VL_RAND_RESET_I(32);
    vlSelf->io_debug_next_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT___core_io_dmem_wmask = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT___CUInstance_io_StType = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT____VdfgTmp_hf84125da__0 = 0;
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs = VL_RAND_RESET_I(30);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1 = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4 = VL_RAND_RESET_I(7);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14 = VL_RAND_RESET_I(15);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17 = VL_RAND_RESET_I(15);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0 = 0;
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0 = 0;
    vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__mret_mstatus = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____Vcellinp__csrs_ext__W7_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h55f09636__0 = 0;
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hb068fa5d__0 = 0;
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0 = 0;
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask = 0;
    vlSelf->__Vfunc_ram_read_helper__0__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__1__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
