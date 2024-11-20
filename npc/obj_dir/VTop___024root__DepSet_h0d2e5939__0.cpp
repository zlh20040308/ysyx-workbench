// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop___024root.h"

void VTop___024root___act_sequent__TOP__0(VTop___024root* vlSelf);

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VTop___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0;
    __Vdlyvdim0__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0;
    __Vdlyvval__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0;
    __Vdlyvset__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0;
    __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1;
    __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1 = 0;
    SData/*11:0*/ __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2;
    __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2 = 0;
    SData/*11:0*/ __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3;
    __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3 = 0;
    SData/*11:0*/ __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4;
    __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4 = 0;
    SData/*11:0*/ __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5;
    __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v8;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v8 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9 = 0;
    SData/*11:0*/ __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10;
    __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10 = 0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10;
    __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10 = 0;
    // Body
    __Vdlyvset__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10 = 0U;
    if (((IData)(vlSelf->io_debug_WbEn) & (0U != (0x1fU 
                                                  & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                     >> 7U))))) {
        __Vdlyvval__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 
            = vlSelf->io_debug_reg_wdata;
        __Vdlyvset__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 
            = (0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                       >> 7U));
    }
    if (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0 
            = ((~ vlSelf->io_debug_CSRWdata) & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                                 ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                                 : 0U));
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0 
            = vlSelf->io_debug_csr_id;
    }
    if (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1 
            = (0x80207888U & ((~ vlSelf->io_debug_CSRWdata) 
                              & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                  : 0U)));
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1 
            = vlSelf->io_debug_csr_id;
    }
    if (((0x300U != (IData)(vlSelf->io_debug_csr_id)) 
         & (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0))) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2 
            = vlSelf->io_debug_CSRWdata;
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2 
            = vlSelf->io_debug_csr_id;
    }
    if (((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0) 
         & (0x300U == (IData)(vlSelf->io_debug_csr_id)))) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3 
            = (0x80207888U & vlSelf->io_debug_CSRWdata);
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3 
            = vlSelf->io_debug_csr_id;
    }
    if (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4 
            = (((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                 ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                 : 0U) | vlSelf->io_debug_CSRWdata);
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4 
            = vlSelf->io_debug_csr_id;
    }
    if (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5 
            = ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11)
                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                : 0U);
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5 
            = vlSelf->io_debug_csr_id;
    }
    if (((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0)) 
         & (5U == (IData)(vlSelf->io_debug_CSRCmd)))) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6 
            = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__mret_mstatus;
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6 = 1U;
    }
    if (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_9) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7 
            = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____Vcellinp__csrs_ext__W7_data;
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v8 = 1U;
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9 
            = vlSelf->io_debug_CSRWdata;
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9 = 1U;
    }
    if (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1) {
        __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10 
            = (0x80207888U & (((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                : 0U) | vlSelf->io_debug_CSRWdata));
        __Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10 
            = vlSelf->io_debug_csr_id;
    }
    vlSelf->Top__DOT__core__DOT__pc = ((IData)(vlSelf->reset)
                                        ? 0x80000000U
                                        : vlSelf->io_debug_next_pc);
    if (__Vdlyvset__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0) {
        vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0] 
            = __Vdlyvval__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v1;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v2;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v3;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v4;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v5;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[0x300U] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v6;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[0x300U] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v7;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v8) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[0x342U] = 0xbU;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[0x341U] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10) {
        vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10] 
            = __Vdlyvval__Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory__v10;
    }
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory[0x300U] = 0x1800U;
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
    vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
        = ((0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                            >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
           [(0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                     >> 0xfU))] : 0U);
    vlSelf->io_debug_mtvec = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [0x305U];
    vlSelf->io_debug_mepc = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [0x341U];
    vlSelf->io_debug_mcause = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [0x342U];
    vlSelf->io_debug_mstatus = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [0x300U];
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____Vcellinp__csrs_ext__W7_data 
        = ((0x80U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                     [0x300U] << 4U)) | (0xffffff7fU 
                                         & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                         [0x300U]));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__mret_mstatus 
        = (0x80U | ((0xfffffff7U & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                     [0x300U]) | (8U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                        [0x300U] >> 4U))));
    vlSelf->io_debug_pc = vlSelf->Top__DOT__core__DOT__pc;
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A 
        = ((1U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                         >> 2U))) ? vlSelf->Top__DOT__core__DOT__pc
            : ((2U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                             >> 2U))) ? vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0
                : 0U));
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__3(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__3\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_hf32e3ffd__0;
    // Body
    vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata 
        = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [vlSelf->io_debug_csr_id];
    vlSelf->io_debug_wdata = ((0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 0x14U)))
                               ? vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0xfU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0x14U))]
                               : 0U);
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT____VdfgTmp_hf84125da__0 
        = VL_LTS_III(32, vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0, vlSelf->io_debug_wdata);
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B 
        = ((1U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                         >> 1U))) ? vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0
            : ((2U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                             >> 1U))) ? vlSelf->io_debug_wdata
                : 0U));
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN 
        = (IData)(((0xc000U == (0xe000U & vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs)) 
                   & (vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
                      != vlSelf->io_debug_wdata)));
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
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0 
        = ((0xc0U & ((- (IData)((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN))) 
                     << 6U)) | ((VL_GTES_III(32, vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0, vlSelf->io_debug_wdata) 
                                 << 5U) | (((vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
                                             >= vlSelf->io_debug_wdata) 
                                            << 4U) 
                                           | (((vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
                                                == vlSelf->io_debug_wdata) 
                                               << 3U) 
                                              | (((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT____VdfgTmp_hf84125da__0) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT____VdfgTmp_hf84125da__0) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN)))))));
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
}

VL_INLINE_OPT void VTop___024root___nba_comb__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_comb__TOP__0\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h7720a331__0;
    // Body
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

void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf);
void VTop___024root___nba_sequent__TOP__2(VTop___024root* vlSelf);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VTop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VTop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VTop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        VTop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/feng/code/ysyx-workbench/npc/build/Top.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/feng/code/ysyx-workbench/npc/build/Top.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
