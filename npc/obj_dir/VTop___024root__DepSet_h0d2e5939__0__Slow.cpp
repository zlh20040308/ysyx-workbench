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
    vlSelf->__Vtrigrprev__TOP__io_debug_pc = vlSelf->io_debug_pc;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__io_debug_Valid = vlSelf->io_debug_Valid;
    vlSelf->__Vtrigrprev__TOP__io_debug_alu_out = vlSelf->io_debug_alu_out;
    vlSelf->__Vtrigrprev__TOP__io_debug_wdata = vlSelf->io_debug_wdata;
    vlSelf->__Vtrigrprev__TOP__io_debug_wen = vlSelf->io_debug_wen;
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

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h07e8e6e7__0;
    VlWide<16>/*511:0*/ __Vtemp_hf32e3ffd__0;
    VlWide<8>/*255:0*/ __Vtemp_h7720a331__0;
    // Body
    vlSelf->io_debug_pc = vlSelf->Top__DOT__core__DOT__pc;
    vlSelf->io_debug_gpr[0U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [0U];
    vlSelf->io_debug_gpr[1U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [1U];
    vlSelf->io_debug_gpr[2U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [2U];
    vlSelf->io_debug_gpr[3U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [3U];
    vlSelf->io_debug_gpr[4U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [4U];
    vlSelf->io_debug_gpr[5U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [5U];
    vlSelf->io_debug_gpr[6U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [6U];
    vlSelf->io_debug_gpr[7U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [7U];
    vlSelf->io_debug_gpr[8U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [8U];
    vlSelf->io_debug_gpr[9U] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [9U];
    vlSelf->io_debug_gpr[0xaU] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [0xaU];
    vlSelf->io_debug_gpr[0xbU] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [0xbU];
    vlSelf->io_debug_gpr[0xcU] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [0xcU];
    vlSelf->io_debug_gpr[0xdU] = vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
        [0xdU];
    vlSelf->io_debug_gpr[0xeU] = (IData)((((QData)((IData)(
                                                           vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                                           [0xfU])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                                            [0xeU]))));
    vlSelf->io_debug_gpr[0xfU] = (IData)(((((QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                                            [0xfU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                                             [0xeU]))) 
                                          >> 0x20U));
    vlSelf->io_debug_mtvec = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [0x305U];
    vlSelf->io_debug_mepc = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [0x341U];
    vlSelf->io_debug_mcause = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [0x342U];
    vlSelf->io_debug_mstatus = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [0x300U];
    vlSelf->io_debug_rdata = vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata;
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____Vcellinp__csrs_ext__W7_data 
        = ((0x80U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                     [0x300U] << 4U)) | (0xffffff7fU 
                                         & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                         [0x300U]));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__mret_mstatus 
        = (0x80U | ((0xfffffff7U & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                     [0x300U]) | (8U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                        [0x300U] >> 4U))));
    vlSelf->io_debug_csr_id = (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                               >> 0x14U);
    vlSelf->io_debug_wdata = ((0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 0x14U)))
                               ? vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0x14U))]
                               : 0U);
    vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
        = ((0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                            >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
           [(0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                     >> 0xfU))] : 0U);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12 
        = ((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                  >> 0xbU)) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xdU))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2 
        = (IData)((0U == (0x24U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2 
        = (IData)((0x34U == (0x34U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2 
        = (IData)((4U == (0x1cU & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2 
        = (IData)((4U == (0x24U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                      >> 2U)) << 1U)) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 4U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                      >> 4U)) << 1U)) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                  >> 5U))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                      >> 0xcU)) << 1U)) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                 >> 0xdU)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                      >> 2U)) << 1U)) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                  >> 4U))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                      >> 4U)) << 1U)) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 5U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2 
        = ((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                  >> 3U)) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                   >> 6U)));
    vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata 
        = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [vlSelf->io_debug_csr_id];
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
            << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                            >> 3U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
            << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                            >> 3U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2 
        = (IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                   & (0x6000U == (0x7000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
           & (IData)((0x20U == (0x60U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
            << 1U) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                               >> 6U))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi)) 
           & (IData)((0U == (0x6000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi)) 
           & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
              >> 0xeU));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi)) 
           & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                 >> 0xcU)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
           & (IData)((0x1040U == (0x1040U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi) 
            << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                            >> 6U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5)) 
           & (IData)((0U == (0x2040U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5)) 
           & (IData)((0U == (0x1040U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
           & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
              >> 0xeU));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2) 
            << 1U) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                               >> 0xcU))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
           & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
           & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
              >> 0xcU));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14)) 
           & (IData)((0x1000U == (0x5000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14)) 
           & (IData)((0x2000U == (0x6000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
           & (IData)((0U == (0x3000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
           & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14)));
    vlSelf->Top__DOT__core__DOT___CUInstance_io_StType 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3 
        = ((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                  >> 2U)) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2));
    vlSelf->io_ebreak = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12)) 
                         & (IData)((0x100000U == (0x102000U 
                                                  & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12)) 
           & (IData)((0U == (0x102000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2));
    vlSelf->io_debug_Valid = (((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5)) 
                               | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2)) 
                              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2)));
    vlSelf->Top__DOT___core_io_dmem_wmask = (0xfU & 
                                             ((0x1300U 
                                               | (0xf0U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 == (IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType)))) 
                                                     << 4U))) 
                                              >> (0xfU 
                                                  & ((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                                     << 2U))));
    vlSelf->io_debug_wen = (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1 
        = ((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
               | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))) 
              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                 | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                    | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
             << 3U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                       << 2U)) | (((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                     | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                        | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3)))) 
                                    | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                        | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))) 
                                       | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                   << 1U) | (((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                              | (0U 
                                                 != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))) 
                                             | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                                | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0 
        = ((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0)) 
           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2));
    vlSelf->io_debug_WbSel = ((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0)) 
                                | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN))) 
                               << 1U) | (((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5)) 
                                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2)) 
                                         | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                            | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))));
    vlSelf->io_debug_WbEn = (((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                              | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1))) 
                             | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0 
        = ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
             | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))) 
            | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
               | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))) 
           | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
               | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2)) 
              | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi 
        = (((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4)) 
              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))) 
             | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                | (((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                    & (IData)((0x40000020U == (0x40000020U 
                                               & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))) 
                   | (IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                              & (0x40001000U == (0x40003000U 
                                                 & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))))) 
            << 1U) | (((((((((((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2)) 
                                 | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3))) 
                                | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2)) 
                               | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                              | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2)) 
                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                            | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)) 
                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2)) 
                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)) 
                         | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2)) 
                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2)) 
                      | (((0U == (0x6020U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)) 
                          | (0U == (0x40006004U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                         | (0x1000U == (0x40003004U 
                                        & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_hi_hi_3 
        = ((((IData)(vlSelf->io_ebreak) << 3U) | ((IData)(vlSelf->io_debug_Valid) 
                                                  << 2U)) 
           | (((IData)(vlSelf->io_debug_WbEn) << 1U) 
              | (IData)(vlSelf->io_debug_wen)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
            << 3U) | (((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                         | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                        | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                              | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                       << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0) 
                                  << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8 
        = ((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
               | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                  & (IData)((0x40U == (0x4040U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
              << 7U) | (((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                           & (IData)((0U == (0x5000U 
                                             & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))) 
                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)) 
                         | (IData)((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                     & (0x4020U == 
                                        (0x4020U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                    & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))) 
                        << 6U)) | ((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                     & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xeU)) << 5U) 
                                   | (((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                         | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                       | (0x3000U == 
                                          (0x3044U 
                                           & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                      << 4U))) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (((0x3ffffffeU 
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
                                                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17 
        = ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_hi_hi_3) 
             << 0xbU) | (((IData)(vlSelf->io_debug_WbSel) 
                          << 9U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4) 
                                    << 7U))) | ((((
                                                   (((3U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                                     & (3U 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                                    | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                                      & (IData)(
                                                                (0x200000U 
                                                                 == 
                                                                 (0x201000U 
                                                                  & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                                     << 5U) 
                                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo) 
                                                       << 3U))) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))));
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
        = ((1U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                         >> 2U))) ? vlSelf->Top__DOT__core__DOT__pc
            : ((2U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                             >> 2U))) ? vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0
                : 0U));
    vlSelf->io_debug_alu_op = (0xfU & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8) 
                                       >> 2U));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8) 
            << 7U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4));
    vlSelf->io_debug_CSRCmd = (7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                     >> 6U));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
            << 0xfU) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14));
    vlSelf->io_debug_imm_sel = (7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14) 
                                      >> 6U));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0 
        = ((1U != (IData)(vlSelf->io_debug_CSRCmd)) 
           & (3U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1 
        = ((1U == (IData)(vlSelf->io_debug_CSRCmd)) 
           & (0x300U == (IData)(vlSelf->io_debug_csr_id)));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2 
        = ((0x300U != (IData)(vlSelf->io_debug_csr_id)) 
           & (1U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_5 
        = ((1U == (IData)(vlSelf->io_debug_CSRCmd)) 
           | (3U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN 
        = (IData)(((0x8000U == (0xe000U & vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs)) 
                   & (vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
                      >= vlSelf->io_debug_wdata)));
    __Vtemp_h07e8e6e7__0[0U] = 0U;
    __Vtemp_h07e8e6e7__0[1U] = (((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                             >> 0x1fU))) 
                                 << 0xbU) | (0x7ffU 
                                             & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                >> 0x14U)));
    __Vtemp_h07e8e6e7__0[2U] = (((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                             >> 0x1fU))) 
                                 << 0xbU) | ((0x7e0U 
                                              & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 7U))));
    __Vtemp_h07e8e6e7__0[3U] = (0xfffff000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem);
    __Vtemp_h07e8e6e7__0[4U] = ((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem) 
                                               | (0x800U 
                                                  & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                     >> 9U)))) 
                                | (0x7feU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                             >> 0x14U)));
    __Vtemp_h07e8e6e7__0[5U] = ((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                  << 4U)) 
                                              | (0x7e0U 
                                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    >> 0x14U)))) 
                                | (0x1eU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 7U)));
    __Vtemp_h07e8e6e7__0[6U] = (IData)((((QData)((IData)(
                                                         (((0U 
                                                            == (IData)(vlSelf->io_debug_imm_sel)) 
                                                           | (6U 
                                                              != (IData)(vlSelf->io_debug_imm_sel)))
                                                           ? 0U
                                                           : 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                              >> 0xfU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((0U 
                                                             == (IData)(vlSelf->io_debug_imm_sel)) 
                                                            | (6U 
                                                               != (IData)(vlSelf->io_debug_imm_sel)))
                                                            ? 0U
                                                            : 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                               >> 0xfU)))))));
    __Vtemp_h07e8e6e7__0[7U] = (IData)(((((QData)((IData)(
                                                          (((0U 
                                                             == (IData)(vlSelf->io_debug_imm_sel)) 
                                                            | (6U 
                                                               != (IData)(vlSelf->io_debug_imm_sel)))
                                                            ? 0U
                                                            : 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                               >> 0xfU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((0U 
                                                              == (IData)(vlSelf->io_debug_imm_sel)) 
                                                             | (6U 
                                                                != (IData)(vlSelf->io_debug_imm_sel)))
                                                             ? 0U
                                                             : 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                                >> 0xfU)))))) 
                                        >> 0x20U));
    vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0 
        = (((0U == (0x1fU & ((IData)(vlSelf->io_debug_imm_sel) 
                             << 5U))) ? 0U : (__Vtemp_h07e8e6e7__0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->io_debug_imm_sel) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->io_debug_imm_sel) 
                                                      << 5U))))) 
           | (__Vtemp_h07e8e6e7__0[(7U & (IData)(vlSelf->io_debug_imm_sel))] 
              >> (0x1fU & ((IData)(vlSelf->io_debug_imm_sel) 
                           << 5U))));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h55f09636__0 
        = ((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_5)) 
           & (2U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hb068fa5d__0 
        = ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_5) 
           | (2U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN) 
            << 7U) | (((vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
                        != vlSelf->io_debug_wdata) 
                       << 6U) | ((VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0, vlSelf->io_debug_wdata) 
                                  << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN) 
                                             << 4U) 
                                            | (((vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
                                                 == vlSelf->io_debug_wdata) 
                                                << 3U) 
                                               | ((VL_LTS_III(32, vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0, vlSelf->io_debug_wdata) 
                                                   << 2U) 
                                                  | (((vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
                                                       < vlSelf->io_debug_wdata) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN))))))));
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B 
        = ((1U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                         >> 1U))) ? vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0
            : ((2U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                             >> 1U))) ? vlSelf->io_debug_wdata
                : 0U));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6 
        = ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h55f09636__0) 
           & (0x300U == (IData)(vlSelf->io_debug_csr_id)));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7 
        = ((0x300U != (IData)(vlSelf->io_debug_csr_id)) 
           & (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h55f09636__0));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_9 
        = ((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hb068fa5d__0)) 
           & (4U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0 
        = ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hb068fa5d__0) 
           | (4U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->io_debug_PCSel = (3U & ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel) 
                                      << 0xeU) | ((
                                                   ((1U 
                                                     & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                                        >> 
                                                        (7U 
                                                         & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                                            >> 0xdU))))
                                                     ? 2U
                                                     : 1U) 
                                                   << 0xcU) 
                                                  | ((((1U 
                                                        & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                                           >> 
                                                           (7U 
                                                            & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                                               >> 0xdU))))
                                                        ? 2U
                                                        : 1U) 
                                                      << 0xaU) 
                                                     | ((((1U 
                                                           & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                                              >> 
                                                              (7U 
                                                               & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                                                  >> 0xdU))))
                                                           ? 2U
                                                           : 1U) 
                                                         << 8U) 
                                                        | ((((1U 
                                                              & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                                                     >> 0xdU))))
                                                              ? 2U
                                                              : 1U) 
                                                            << 6U) 
                                                           | ((((1U 
                                                                 & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                                                    >> 
                                                                    (7U 
                                                                     & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                                                        >> 0xdU))))
                                                                 ? 2U
                                                                 : 1U) 
                                                               << 4U) 
                                                              | ((((1U 
                                                                    & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                                                       >> 
                                                                       (7U 
                                                                        & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                                                           >> 0xdU))))
                                                                    ? 2U
                                                                    : 1U) 
                                                                  << 2U) 
                                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel)))))))) 
                                    >> (0xeU & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                                >> 0xcU))));
    __Vtemp_hf32e3ffd__0[0U] = 0U;
    __Vtemp_hf32e3ffd__0[1U] = (vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
                                + vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B);
    __Vtemp_hf32e3ffd__0[2U] = (vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
                                - vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B);
    __Vtemp_hf32e3ffd__0[3U] = vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A;
    __Vtemp_hf32e3ffd__0[4U] = vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B;
    __Vtemp_hf32e3ffd__0[5U] = (vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
                                << (0x1fU & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B));
    __Vtemp_hf32e3ffd__0[6U] = VL_LTS_III(32, vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A, vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B);
    __Vtemp_hf32e3ffd__0[7U] = (vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
                                < vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B);
    __Vtemp_hf32e3ffd__0[8U] = (vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
                                ^ vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B);
    __Vtemp_hf32e3ffd__0[9U] = (vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
                                >> (0x1fU & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B));
    __Vtemp_hf32e3ffd__0[0xaU] = VL_SHIFTRS_III(32,32,5, vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A, 
                                                (0x1fU 
                                                 & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B));
    __Vtemp_hf32e3ffd__0[0xbU] = (vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
                                  | vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B);
    __Vtemp_hf32e3ffd__0[0xcU] = (vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
                                  & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B);
    __Vtemp_hf32e3ffd__0[0xdU] = 0U;
    __Vtemp_hf32e3ffd__0[0xeU] = 0U;
    __Vtemp_hf32e3ffd__0[0xfU] = 0U;
    vlSelf->io_debug_alu_out = (((0U == (0x1fU & ((IData)(vlSelf->io_debug_alu_op) 
                                                  << 5U)))
                                  ? 0U : (__Vtemp_hf32e3ffd__0[
                                          (((IData)(0x1fU) 
                                            + (0x1ffU 
                                               & ((IData)(vlSelf->io_debug_alu_op) 
                                                  << 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->io_debug_alu_op) 
                                                    << 5U))))) 
                                | (__Vtemp_hf32e3ffd__0[
                                   (0xfU & (IData)(vlSelf->io_debug_alu_op))] 
                                   >> (0x1fU & ((IData)(vlSelf->io_debug_alu_op) 
                                                << 5U))));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11 
        = ((~ ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0) 
               | (5U == (IData)(vlSelf->io_debug_CSRCmd)))) 
           & (0U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->io_debug_addr = vlSelf->io_debug_alu_out;
    vlSelf->io_debug_CSRWdata = ((6U == (IData)(vlSelf->io_debug_imm_sel))
                                  ? vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0
                                  : vlSelf->io_debug_alu_out);
    vlSelf->Top__DOT__core__DOT___GEN[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->Top__DOT__core__DOT__pc))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + vlSelf->Top__DOT__core__DOT__pc)))));
    vlSelf->Top__DOT__core__DOT___GEN[1U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + vlSelf->Top__DOT__core__DOT__pc))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(4U) 
                                                                         + vlSelf->Top__DOT__core__DOT__pc)))) 
                                                     >> 0x20U));
    vlSelf->Top__DOT__core__DOT___GEN[2U] = (IData)(
                                                    (((QData)((IData)(
                                                                      ((4U 
                                                                        == (IData)(vlSelf->io_debug_CSRCmd))
                                                                        ? 
                                                                       vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                                       [0x305U]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSelf->io_debug_CSRCmd))
                                                                         ? 
                                                                        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                                        [0x341U]
                                                                         : 0U)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0xfffffffeU 
                                                                        & vlSelf->io_debug_alu_out)))));
    vlSelf->Top__DOT__core__DOT___GEN[3U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       ((4U 
                                                                         == (IData)(vlSelf->io_debug_CSRCmd))
                                                                         ? 
                                                                        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                                        [0x305U]
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelf->io_debug_CSRCmd))
                                                                          ? 
                                                                         vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                                         [0x341U]
                                                                          : 0U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffffffeU 
                                                                         & vlSelf->io_debug_alu_out)))) 
                                                     >> 0x20U));
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
    vlSelf->Top__DOT__core__DOT___GEN_0[0U] = vlSelf->io_debug_alu_out;
    vlSelf->Top__DOT__core__DOT___GEN_0[1U] = __Vtemp_h7720a331__0[
        (7U & ((0x7fffffcU & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                              << 2U)) | (0x7ffffffU 
                                         & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))];
    vlSelf->Top__DOT__core__DOT___GEN_0[2U] = (IData)(
                                                      (((QData)((IData)(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((IData)(4U) 
                                                                          + vlSelf->Top__DOT__core__DOT__pc)))));
    vlSelf->Top__DOT__core__DOT___GEN_0[3U] = (IData)(
                                                      ((((QData)((IData)(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((IData)(4U) 
                                                                           + vlSelf->Top__DOT__core__DOT__pc)))) 
                                                       >> 0x20U));
    vlSelf->io_debug_next_pc = (((0U == (0x1fU & ((IData)(vlSelf->io_debug_PCSel) 
                                                  << 5U)))
                                  ? 0U : (vlSelf->Top__DOT__core__DOT___GEN[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & ((IData)(vlSelf->io_debug_PCSel) 
                                                  << 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->io_debug_PCSel) 
                                                    << 5U))))) 
                                | (vlSelf->Top__DOT__core__DOT___GEN[
                                   (3U & (IData)(vlSelf->io_debug_PCSel))] 
                                   >> (0x1fU & ((IData)(vlSelf->io_debug_PCSel) 
                                                << 5U))));
    vlSelf->io_debug_reg_wdata = (((0U == (0x1fU & 
                                           ((IData)(vlSelf->io_debug_WbSel) 
                                            << 5U)))
                                    ? 0U : (vlSelf->Top__DOT__core__DOT___GEN_0[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & ((IData)(vlSelf->io_debug_WbSel) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->io_debug_WbSel) 
                                                      << 5U))))) 
                                  | (vlSelf->Top__DOT__core__DOT___GEN_0[
                                     (3U & (IData)(vlSelf->io_debug_WbSel))] 
                                     >> (0x1fU & ((IData)(vlSelf->io_debug_WbSel) 
                                                  << 5U))));
}

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] io_debug_pc)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] io_debug_Valid or [changed] io_debug_alu_out or [changed] io_debug_pc)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] io_debug_Valid or [changed] io_debug_alu_out or [changed] io_debug_pc or [changed] io_debug_wdata or [changed] io_debug_wen)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] io_debug_pc)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] io_debug_Valid or [changed] io_debug_alu_out or [changed] io_debug_pc)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] io_debug_Valid or [changed] io_debug_alu_out or [changed] io_debug_pc or [changed] io_debug_wdata or [changed] io_debug_wen)\n");
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
    vlSelf->io_debug_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_debug_WbSel = VL_RAND_RESET_I(2);
    vlSelf->io_debug_WbEn = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT___core_io_dmem_wmask = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT___CUInstance_io_StType = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__core__DOT___GEN);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__core__DOT___GEN_0);
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0 = VL_RAND_RESET_I(8);
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
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_hi_hi_3 = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17 = VL_RAND_RESET_I(15);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0 = 0;
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0 = 0;
    vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
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
    vlSelf->Top__DOT__memory__DOT__mem__DOT__imem = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask = 0;
    vlSelf->__Vtrigrprev__TOP__io_debug_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__io_debug_Valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__io_debug_alu_out = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__io_debug_wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__io_debug_wen = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
