// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);
void VTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &ram_read_helper__Vfuncrtn);

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0;
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
    VlWide<8>/*255:0*/ __Vtemp_h7720a331__0;
    VlWide<4>/*127:0*/ __Vtemp_h36481e6b__0;
    VlWide<8>/*255:0*/ __Vtemp_h23f5c89d__0;
    VlWide<16>/*511:0*/ __Vtemp_hf32e3ffd__0;
    VlWide<4>/*127:0*/ __Vtemp_he880c5c2__0;
    // Body
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
    __Vdlyvset__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 = 0U;
    vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask = 0U;
    if (vlSelf->io_debug_Valid) {
        if (vlSelf->io_debug_wen) {
            vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask 
                = (((- (IData)((1U & ((IData)(vlSelf->Top__DOT___core_io_dmem_wmask) 
                                      >> 3U)))) << 0x18U) 
                   | ((0xff0000U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->Top__DOT___core_io_dmem_wmask) 
                                                   >> 2U)))) 
                                    << 0x10U)) | ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->Top__DOT___core_io_dmem_wmask) 
                                                                     >> 1U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->Top__DOT___core_io_dmem_wmask))))))));
            VTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(vlSelf->io_debug_alu_out, vlSelf->io_debug_wdata, vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask);
        }
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
    if (((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
         & (0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                            >> 7U))))) {
        __Vtemp_h7720a331__0[0U] = 0U;
        __Vtemp_h7720a331__0[1U] = vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata;
        __Vtemp_h7720a331__0[2U] = (((- (IData)((1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata));
        __Vtemp_h7720a331__0[3U] = (((- (IData)((1U 
                                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata 
                                                    >> 7U)))) 
                                     << 8U) | (0xffU 
                                               & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata));
        __Vtemp_h7720a331__0[4U] = (0xffffU & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata);
        __Vtemp_h7720a331__0[5U] = (0xffU & vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata);
        __Vtemp_h7720a331__0[6U] = 0U;
        __Vtemp_h7720a331__0[7U] = 0U;
        __Vtemp_h36481e6b__0[0U] = vlSelf->io_debug_alu_out;
        __Vtemp_h36481e6b__0[1U] = __Vtemp_h7720a331__0[
            (7U & ((0x7fffffcU & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                  << 2U)) | (0x7ffffffU 
                                             & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))];
        __Vtemp_h36481e6b__0[2U] = (IData)((((QData)((IData)(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(4U) 
                                                               + vlSelf->Top__DOT__core__DOT__pc)))));
        __Vtemp_h36481e6b__0[3U] = (IData)(((((QData)((IData)(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSelf->Top__DOT__core__DOT__pc)))) 
                                            >> 0x20U));
        __Vdlyvval__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 
            = (((0U == (0x1fU & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                 << 5U))) ? 0U : (__Vtemp_h36481e6b__0[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                                       << 5U))))) 
               | (__Vtemp_h36481e6b__0[(3U & (IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0))] 
                  >> (0x1fU & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                               << 5U))));
        __Vdlyvset__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0 
            = (0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                        >> 7U));
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
    if (__Vdlyvset__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0) {
        vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0] 
            = __Vdlyvval__Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory__v0;
    }
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
    vlSelf->Top__DOT__core__DOT__pc = ((IData)(vlSelf->reset)
                                        ? 0x80000000U
                                        : vlSelf->io_debug_next_pc);
    vlSelf->io_debug_pc = vlSelf->Top__DOT__core__DOT__pc;
    VTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->io_debug_pc, vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
    vlSelf->io_debug_csr_id = (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                               >> 0x14U);
    vlSelf->io_debug_wdata = ((0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 0x14U)))
                               ? vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x14U))]
                               : 0U);
    vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
        = ((0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                            >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
           [(0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                      >> 0xfU))] : 0U);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12 
        = ((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                  >> 0xbU)) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xdU))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2 
        = (IData)((0U == (0x24U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2 
        = (IData)((0x34U == (0x34U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2 
        = (IData)((4U == (0x1cU & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2 
        = (IData)((4U == (0x24U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                      >> 2U)) << 1U)) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 4U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                      >> 4U)) << 1U)) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                  >> 5U))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                      >> 0xcU)) << 1U)) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                 >> 0xdU)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                      >> 2U)) << 1U)) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                  >> 4U))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5 
        = ((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                      >> 4U)) << 1U)) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 5U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2 
        = ((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                  >> 3U)) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 6U)));
    vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata 
        = vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
        [vlSelf->io_debug_csr_id];
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT____VdfgTmp_hf84125da__0 
        = VL_LTS_III(32, vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0, vlSelf->io_debug_wdata);
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
            << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                            >> 3U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
            << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                            >> 3U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2 
        = (IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                   & (0x6000U == (0x7000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
           & (IData)((0x20U == (0x60U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
            << 1U) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                               >> 6U))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi)) 
           & (IData)((0U == (0x6000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi)) 
           & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
              >> 0xeU));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi)) 
           & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                 >> 0xcU)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
           & (IData)((0x1040U == (0x1040U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi) 
            << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                            >> 6U)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5)) 
           & (IData)((0U == (0x2040U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5)) 
           & (IData)((0U == (0x1040U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
           & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
              >> 0xeU));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2) 
            << 1U) | (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                               >> 0xcU))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
           & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14)));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2 
        = ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
           & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
              >> 0xcU));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14)) 
           & (IData)((0x1000U == (0x5000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14)) 
           & (IData)((0x2000U == (0x6000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
            << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
           & (IData)((0U == (0x3000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
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
        = ((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                  >> 2U)) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2));
    vlSelf->io_ebreak = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12)) 
                         & (IData)((0x100000U == (0x102000U 
                                                  & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2 
        = ((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12)) 
           & (IData)((0U == (0x102000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))));
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
    vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0 
        = (((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
            | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1))) 
           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                 | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))));
    vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0 = 
        ((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0)) 
           | (0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN))) 
          << 1U) | (((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5)) 
                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2)) 
                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))));
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
                                               & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                   | (IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                              & (0x40001000U == (0x40003000U 
                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))))) 
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
                      | (((0U == (0x6020U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)) 
                          | (0U == (0x40006004U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                         | (0x1000U == (0x40003004U 
                                        & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17 
        = ((((((IData)(vlSelf->io_ebreak) << 0xeU) 
              | ((IData)(vlSelf->io_debug_Valid) << 0xdU)) 
             | (((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                 << 0xcU) | ((IData)(vlSelf->io_debug_wen) 
                             << 0xbU))) | (((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX_0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4) 
                                              << 7U))) 
           | (((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                   & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                 | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                    & (IData)((0x200000U == (0x201000U 
                                             & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                << 6U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                           << 5U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo) 
                                     << 3U))) | (((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))));
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
                  & (IData)((0x40U == (0x4040U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
              << 7U) | (((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                           & (IData)((0U == (0x5000U 
                                             & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)) 
                         | (IData)((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                     & (0x4020U == 
                                        (0x4020U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                    & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))) 
                        << 6U)) | ((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                     & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xeU)) << 5U) 
                                   | (((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                         | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                       | (0x3000U == 
                                          (0x3044U 
                                           & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                      << 4U))) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (((0x3ffffffeU 
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
                                                           | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))))));
    vlSelf->io_debug_CSRCmd = (7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
                                     >> 6U));
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
    vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
        = (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17) 
            << 0xfU) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14));
    vlSelf->io_debug_imm_sel = (7U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14) 
                                      >> 6U));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h55f09636__0 
        = ((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_5)) 
           & (2U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hb068fa5d__0 
        = ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_5) 
           | (2U == (IData)(vlSelf->io_debug_CSRCmd)));
    vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN 
        = (IData)(((0xc000U == (0xe000U & vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs)) 
                   & (vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0 
                      != vlSelf->io_debug_wdata)));
    __Vtemp_h23f5c89d__0[0U] = 0U;
    __Vtemp_h23f5c89d__0[1U] = (((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0x1fU))) 
                                 << 0xbU) | (0x7ffU 
                                             & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0x14U)));
    __Vtemp_h23f5c89d__0[2U] = (((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0x1fU))) 
                                 << 0xbU) | ((0x7e0U 
                                              & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 7U))));
    __Vtemp_h23f5c89d__0[3U] = (0xfffff000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0);
    __Vtemp_h23f5c89d__0[4U] = ((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0) 
                                               | (0x800U 
                                                  & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                     >> 9U)))) 
                                | (0x7feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0x14U)));
    __Vtemp_h23f5c89d__0[5U] = ((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                  << 4U)) 
                                              | (0x7e0U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0x14U)))) 
                                | (0x1eU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 7U)));
    __Vtemp_h23f5c89d__0[6U] = (IData)((((QData)((IData)(
                                                         (((0U 
                                                            == (IData)(vlSelf->io_debug_imm_sel)) 
                                                           | (6U 
                                                              != (IData)(vlSelf->io_debug_imm_sel)))
                                                           ? 0U
                                                           : 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
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
                                                            & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                               >> 0xfU)))))));
    __Vtemp_h23f5c89d__0[7U] = (IData)(((((QData)((IData)(
                                                          (((0U 
                                                             == (IData)(vlSelf->io_debug_imm_sel)) 
                                                            | (6U 
                                                               != (IData)(vlSelf->io_debug_imm_sel)))
                                                            ? 0U
                                                            : 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
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
                                                             & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                                >> 0xfU)))))) 
                                        >> 0x20U));
    vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0 
        = (((0U == (0x1fU & ((IData)(vlSelf->io_debug_imm_sel) 
                             << 5U))) ? 0U : (__Vtemp_h23f5c89d__0[
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
           | (__Vtemp_h23f5c89d__0[(7U & (IData)(vlSelf->io_debug_imm_sel))] 
              >> (0x1fU & ((IData)(vlSelf->io_debug_imm_sel) 
                           << 5U))));
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
    vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B 
        = ((1U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                         >> 1U))) ? vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0
            : ((2U == (3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                             >> 1U))) ? vlSelf->io_debug_wdata
                : 0U));
    vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11 
        = ((~ ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0) 
               | (5U == (IData)(vlSelf->io_debug_CSRCmd)))) 
           & (0U == (IData)(vlSelf->io_debug_CSRCmd)));
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
    vlSelf->io_debug_addr = vlSelf->io_debug_alu_out;
    vlSelf->io_debug_CSRWdata = ((6U == (IData)(vlSelf->io_debug_imm_sel))
                                  ? vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0
                                  : vlSelf->io_debug_alu_out);
    __Vtemp_he880c5c2__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(4U) 
                                                          + vlSelf->Top__DOT__core__DOT__pc))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelf->Top__DOT__core__DOT__pc)))));
    __Vtemp_he880c5c2__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelf->Top__DOT__core__DOT__pc))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(4U) 
                                                            + vlSelf->Top__DOT__core__DOT__pc)))) 
                                        >> 0x20U));
    __Vtemp_he880c5c2__0[2U] = (IData)((((QData)((IData)(
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
    __Vtemp_he880c5c2__0[3U] = (IData)(((((QData)((IData)(
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
    vlSelf->io_debug_next_pc = (((0U == (0x1fU & ((IData)(vlSelf->io_debug_PCSel) 
                                                  << 5U)))
                                  ? 0U : (__Vtemp_he880c5c2__0[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & ((IData)(vlSelf->io_debug_PCSel) 
                                                  << 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->io_debug_PCSel) 
                                                    << 5U))))) 
                                | (__Vtemp_he880c5c2__0[
                                   (3U & (IData)(vlSelf->io_debug_PCSel))] 
                                   >> (0x1fU & ((IData)(vlSelf->io_debug_PCSel) 
                                                << 5U))));
    if (vlSelf->io_debug_Valid) {
        VTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->io_debug_alu_out, vlSelf->__Vfunc_ram_read_helper__1__Vfuncout);
        vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata 
            = vlSelf->__Vfunc_ram_read_helper__1__Vfuncout;
    } else {
        vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata = 0U;
    }
    vlSelf->io_debug_rdata = vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata;
}
