// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_h7720a331__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Top__DOT__memory__DOT__mem__DOT__imem),32);
        bufp->chgCData(oldp+1,(vlSelf->Top__DOT___core_io_dmem_wmask),4);
        bufp->chgBit(oldp+2,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6));
        bufp->chgBit(oldp+3,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2));
        bufp->chgBit(oldp+4,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1));
        bufp->chgBit(oldp+5,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11));
        bufp->chgBit(oldp+6,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7));
        bufp->chgBit(oldp+7,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_9));
        bufp->chgCData(oldp+8,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                                      >> 2U))),2);
        bufp->chgCData(oldp+9,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                                      >> 1U))),2);
        bufp->chgCData(oldp+10,((7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                       >> 0xdU))),3);
        bufp->chgCData(oldp+11,(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType),2);
        bufp->chgCData(oldp+12,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                  << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))),3);
        bufp->chgBit(oldp+13,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0));
        bufp->chgCData(oldp+14,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel),2);
        bufp->chgIData(oldp+15,((~ vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)),32);
        bufp->chgIData(oldp+16,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs),30);
        bufp->chgBit(oldp+17,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 2U)))));
        bufp->chgBit(oldp+18,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 5U)))));
        bufp->chgBit(oldp+19,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2));
        bufp->chgBit(oldp+20,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 4U)))));
        bufp->chgBit(oldp+21,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xcU)))));
        bufp->chgCData(oldp+22,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi),2);
        bufp->chgBit(oldp+23,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2));
        bufp->chgBit(oldp+24,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+25,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xeU)))));
        bufp->chgCData(oldp+26,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 5U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0xdU))))),2);
        bufp->chgBit(oldp+27,((IData)((0U == (0x6020U 
                                              & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
        bufp->chgCData(oldp+28,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0xdU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0xeU))))),2);
        bufp->chgBit(oldp+29,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2));
        bufp->chgBit(oldp+30,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0x1eU)))));
        bufp->chgCData(oldp+31,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0xeU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0x1eU))))),2);
        bufp->chgCData(oldp+32,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 2U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0xdU))))),2);
        bufp->chgBit(oldp+33,((IData)((0U == (0x40006004U 
                                              & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 2U))));
        bufp->chgBit(oldp+35,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 3U)))));
        bufp->chgCData(oldp+36,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 3U))))),2);
        bufp->chgBit(oldp+37,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2));
        bufp->chgBit(oldp+38,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2));
        bufp->chgBit(oldp+39,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 3U))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 5U))));
        bufp->chgBit(oldp+41,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 6U)))));
        bufp->chgCData(oldp+42,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 6U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0xcU))))),2);
        bufp->chgCData(oldp+43,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5),2);
        bufp->chgBit(oldp+44,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2));
        bufp->chgCData(oldp+45,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 6U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0xdU))))),2);
        bufp->chgBit(oldp+46,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2));
        bufp->chgBit(oldp+47,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 4U))));
        bufp->chgCData(oldp+48,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 4U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 6U))))),2);
        bufp->chgCData(oldp+49,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7),2);
        bufp->chgBit(oldp+50,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2));
        bufp->chgCData(oldp+51,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 1U)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                      >> 4U)))),2);
        bufp->chgBit(oldp+52,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2));
        bufp->chgBit(oldp+53,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 6U))));
        bufp->chgCData(oldp+54,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0xcU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0xdU))))),2);
        bufp->chgCData(oldp+55,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi),2);
        bufp->chgCData(oldp+56,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9),3);
        bufp->chgBit(oldp+57,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2));
        bufp->chgCData(oldp+58,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 5U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0xeU))))),2);
        bufp->chgBit(oldp+59,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                               & (IData)((0x40U == 
                                          (0x4040U 
                                           & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
        bufp->chgCData(oldp+60,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0xcU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0xeU))))),2);
        bufp->chgBit(oldp+61,(((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                               & (IData)((0U == (0x5000U 
                                                 & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
        bufp->chgBit(oldp+62,((1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0x14U)))));
        bufp->chgCData(oldp+63,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0xdU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0x14U))))),2);
        bufp->chgCData(oldp+64,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2),2);
        bufp->chgCData(oldp+65,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12),3);
        bufp->chgBit(oldp+66,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2));
        bufp->chgBit(oldp+67,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xcU))));
        bufp->chgCData(oldp+68,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0xdU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 0x1eU))))),2);
        bufp->chgCData(oldp+69,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 2U)) 
                                        << 1U)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                      >> 0xcU)))),2);
        bufp->chgBit(oldp+70,((IData)((0x1000U == (0x40003004U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
        bufp->chgCData(oldp+71,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xbU)) | 
                                 (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 0xeU))))),2);
        bufp->chgCData(oldp+72,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14),3);
        bufp->chgBit(oldp+73,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2));
        bufp->chgCData(oldp+74,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 5U)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                      >> 0xcU)))),2);
        bufp->chgBit(oldp+75,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2));
        bufp->chgBit(oldp+76,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2));
        bufp->chgCData(oldp+77,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12),2);
        bufp->chgBit(oldp+78,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                               & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12)))));
        bufp->chgBit(oldp+79,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xdU))));
        bufp->chgCData(oldp+80,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xcU)) | 
                                 (1U & (~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 0xeU))))),2);
        bufp->chgBit(oldp+81,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2));
        bufp->chgCData(oldp+82,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14),2);
        bufp->chgBit(oldp+83,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2));
        bufp->chgBit(oldp+84,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2));
        bufp->chgCData(oldp+85,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xbU)) | 
                                 (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xdU)))),2);
        bufp->chgCData(oldp+86,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 2U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 6U))))),2);
        bufp->chgBit(oldp+87,((IData)((0x3000U == (0x3044U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))));
        bufp->chgBit(oldp+88,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0xeU))));
        bufp->chgBit(oldp+89,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2));
        bufp->chgBit(oldp+90,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                               & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                  >> 0xeU))));
        bufp->chgBit(oldp+91,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2));
        bufp->chgCData(oldp+92,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12) 
                                  << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                  >> 0xeU)))),3);
        bufp->chgCData(oldp+93,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi) 
                                  << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                  >> 5U)))),3);
        bufp->chgBit(oldp+94,((IData)((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                        & (0x4020U 
                                           == (0x4020U 
                                               & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                       & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))));
        bufp->chgCData(oldp+95,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xcU)) | 
                                 (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xeU)))),2);
        bufp->chgCData(oldp+96,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                                  << 1U) | (1U & (~ 
                                                  (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 0xcU))))),3);
        bufp->chgBit(oldp+97,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2));
        bufp->chgBit(oldp+98,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                     >> 0x14U))));
        bufp->chgCData(oldp+99,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0xdU)) 
                                        << 1U)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                      >> 0x14U)))),2);
        bufp->chgBit(oldp+100,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                      >> 0x15U))));
        bufp->chgCData(oldp+101,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                             >> 0xcU)) 
                                         << 1U)) | 
                                  (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0x15U)))),2);
        bufp->chgBit(oldp+102,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                & (IData)((0x200000U 
                                           == (0x201000U 
                                               & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
        bufp->chgBit(oldp+103,((1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+104,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 4U)) | 
                                  (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0x1eU)))),2);
        bufp->chgBit(oldp+105,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                & (IData)((0x40000020U 
                                           == (0x40000020U 
                                               & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
        bufp->chgCData(oldp+106,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                             >> 0xdU)) 
                                         << 1U)) | 
                                  (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 0x1eU)))),2);
        bufp->chgCData(oldp+107,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                                   << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 0xcU)))),3);
        bufp->chgBit(oldp+108,((IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                        & (0x40001000U 
                                           == (0x40003000U 
                                               & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))));
        bufp->chgCData(oldp+109,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN),2);
        bufp->chgCData(oldp+110,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2))),2);
        bufp->chgCData(oldp+111,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                              << 2U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
        bufp->chgCData(oldp+112,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
        bufp->chgCData(oldp+113,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
        bufp->chgCData(oldp+114,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2)))),3);
        bufp->chgCData(oldp+115,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                    << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                               << 3U) 
                                              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                                 << 2U))) 
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2)))),5);
        bufp->chgCData(oldp+116,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0),2);
        bufp->chgCData(oldp+117,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
        bufp->chgCData(oldp+118,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
        bufp->chgCData(oldp+119,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1),2);
        bufp->chgCData(oldp+120,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),3);
        bufp->chgCData(oldp+121,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
        bufp->chgCData(oldp+122,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),3);
        bufp->chgCData(oldp+123,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1),2);
        bufp->chgCData(oldp+124,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2),2);
        bufp->chgCData(oldp+125,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))),4);
        bufp->chgCData(oldp+126,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
        bufp->chgCData(oldp+127,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
        bufp->chgCData(oldp+128,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)))),3);
        bufp->chgCData(oldp+129,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                    << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                               << 3U) 
                                              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                                 << 2U))) 
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),5);
        bufp->chgCData(oldp+130,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3),2);
        bufp->chgCData(oldp+131,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),3);
        bufp->chgCData(oldp+132,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              << 2U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3)))),5);
        bufp->chgCData(oldp+133,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
        bufp->chgCData(oldp+134,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
        bufp->chgCData(oldp+135,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
        bufp->chgCData(oldp+136,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2)))),4);
        bufp->chgCData(oldp+137,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
        bufp->chgCData(oldp+138,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),2);
        bufp->chgCData(oldp+139,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2)))),3);
        bufp->chgCData(oldp+140,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
        bufp->chgCData(oldp+141,(((2U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 2U)) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),2);
        bufp->chgCData(oldp+142,(((4U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                         >> 1U)) | 
                                  (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                    << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)))),3);
        bufp->chgCData(oldp+143,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2))),2);
        bufp->chgCData(oldp+144,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
        bufp->chgCData(oldp+145,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                    << 3U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2)))),4);
        bufp->chgCData(oldp+146,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
        bufp->chgCData(oldp+147,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                   << 1U) | (IData)(
                                                    (0x1000U 
                                                     == 
                                                     (0x40003004U 
                                                      & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))),2);
        bufp->chgCData(oldp+148,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                   << 2U) | (((IData)(
                                                      (0x1000U 
                                                       == 
                                                       (0x40003004U 
                                                        & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)))),3);
        bufp->chgCData(oldp+149,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
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
        bufp->chgSData(oldp+150,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
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
        bufp->chgCData(oldp+151,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),2);
        bufp->chgCData(oldp+152,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)))),4);
        bufp->chgCData(oldp+153,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
        bufp->chgCData(oldp+154,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                   << 1U) | (IData)(
                                                    (0U 
                                                     == 
                                                     (0x6020U 
                                                      & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))),2);
        bufp->chgCData(oldp+155,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                   << 2U) | (((IData)(
                                                      (0U 
                                                       == 
                                                       (0x6020U 
                                                        & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))) 
                                              << 1U) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (0x40006004U 
                                                         & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))))),3);
        bufp->chgCData(oldp+156,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
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
        bufp->chgSData(oldp+157,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
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
        bufp->chgCData(oldp+158,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                                   << 1U) | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                             & (IData)(
                                                       (0x40000020U 
                                                        == 
                                                        (0x40000020U 
                                                         & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))))),2);
        bufp->chgCData(oldp+159,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                                   << 2U) | ((((3U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                               & (IData)(
                                                         (0x40000020U 
                                                          == 
                                                          (0x40000020U 
                                                           & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))) 
                                              << 1U) 
                                             | (IData)(
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                                        & (0x40001000U 
                                                           == 
                                                           (0x40003000U 
                                                            & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))))),3);
        bufp->chgCData(oldp+160,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
        bufp->chgCData(oldp+161,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4),2);
        bufp->chgCData(oldp+162,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),4);
        bufp->chgCData(oldp+163,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                   << 1U) | (IData)(
                                                    (0x3000U 
                                                     == 
                                                     (0x3044U 
                                                      & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))),2);
        bufp->chgCData(oldp+164,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2))),2);
        bufp->chgCData(oldp+165,(((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                    & (IData)((0U == 
                                               (0x5000U 
                                                & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
        bufp->chgCData(oldp+166,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
        bufp->chgCData(oldp+167,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
        bufp->chgCData(oldp+168,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5),2);
        bufp->chgCData(oldp+169,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),3);
        bufp->chgCData(oldp+170,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
        bufp->chgCData(oldp+171,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                   << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                              << 2U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
        bufp->chgCData(oldp+172,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1))),4);
        bufp->chgCData(oldp+173,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
        bufp->chgCData(oldp+174,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),3);
        bufp->chgCData(oldp+175,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                       | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0))),2);
        bufp->chgCData(oldp+176,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                       | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0)))),3);
        bufp->chgCData(oldp+177,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
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
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))))),2);
        bufp->chgCData(oldp+178,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                     | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                       | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
        bufp->chgCData(oldp+179,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1),4);
        bufp->chgCData(oldp+180,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4),7);
        bufp->chgCData(oldp+181,(((2U & (((0x3ffffffeU 
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
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))))),2);
        bufp->chgCData(oldp+182,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi),2);
        bufp->chgCData(oldp+183,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi) 
                                   << 2U) | ((2U & 
                                              (((0x3ffffffeU 
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
        bufp->chgCData(oldp+184,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                    & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                       >> 0xeU)) << 1U) 
                                  | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                      | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                     | (0x3000U == 
                                        (0x3044U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))),2);
        bufp->chgCData(oldp+185,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                    | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                       & (IData)((0x40U 
                                                  == 
                                                  (0x4040U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                   << 1U) | ((((7U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
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
        bufp->chgCData(oldp+186,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                     | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                        & (IData)((0x40U 
                                                   == 
                                                   (0x4040U 
                                                    & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                    << 3U) | (((((7U 
                                                  == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
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
                                          >> 0xeU)) 
                                      << 1U) | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                                | (0x3000U 
                                                   == 
                                                   (0x3044U 
                                                    & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)))))),4);
        bufp->chgCData(oldp+187,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8),8);
        bufp->chgSData(oldp+188,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14),15);
        bufp->chgCData(oldp+189,((((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),3);
        bufp->chgCData(oldp+190,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo),2);
        bufp->chgCData(oldp+191,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                      & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                    | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                       & (IData)((0x200000U 
                                                  == 
                                                  (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
        bufp->chgCData(oldp+192,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                      & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                    | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                       & (IData)((0x200000U 
                                                  == 
                                                  (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem))))) 
                                   << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                              << 2U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo)))),4);
        bufp->chgCData(oldp+193,((((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
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
        bufp->chgCData(oldp+194,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_hi_hi_3),4);
        bufp->chgSData(oldp+195,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17),15);
        bufp->chgIData(oldp+196,(vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0),32);
        bufp->chgIData(oldp+197,((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 0x1fU))) 
                                   << 0xbU) | (0x7ffU 
                                               & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                  >> 0x14U)))),32);
        bufp->chgIData(oldp+198,(((0x7ffffc0U & ((- (IData)(
                                                            (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                             >> 0x1fU))) 
                                                 << 6U)) 
                                  | (0x3fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                              >> 0x19U)))),27);
        bufp->chgIData(oldp+199,((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 0x1fU))) 
                                   << 0xbU) | ((0x7e0U 
                                                & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                     >> 7U))))),32);
        bufp->chgCData(oldp+200,((0x1eU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 7U))),5);
        bufp->chgIData(oldp+201,(((0x1ffffeU & ((- (IData)(
                                                           (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                            >> 0x1fU))) 
                                                << 1U)) 
                                  | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 7U)))),21);
        bufp->chgIData(oldp+202,(((0x7ffff80U & ((- (IData)(
                                                            (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                             >> 0x1fU))) 
                                                 << 7U)) 
                                  | ((0x40U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 1U)) 
                                     | (0x3fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                 >> 0x19U))))),27);
        bufp->chgIData(oldp+203,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                    << 4U)) 
                                                | (0x7e0U 
                                                   & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                      >> 0x14U)))) 
                                  | (0x1eU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                              >> 7U)))),32);
        bufp->chgIData(oldp+204,((0xfffff000U & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem)),32);
        bufp->chgSData(oldp+205,((0x3ffU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0x15U))),10);
        bufp->chgSData(oldp+206,((0x7feU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                            >> 0x14U))),11);
        bufp->chgIData(oldp+207,(((0xfff00U & ((- (IData)(
                                                          (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                           >> 0x1fU))) 
                                               << 8U)) 
                                  | (0xffU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                              >> 0xcU)))),20);
        bufp->chgIData(oldp+208,(((0x1ffe00U & ((- (IData)(
                                                           (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                            >> 0x1fU))) 
                                                << 9U)) 
                                  | ((0x1feU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                >> 0xbU)) 
                                     | (1U & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                              >> 0x14U))))),21);
        bufp->chgIData(oldp+209,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->Top__DOT__memory__DOT__mem__DOT__imem) 
                                                 | (0x800U 
                                                    & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                       >> 9U)))) 
                                  | (0x7feU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                               >> 0x14U)))),32);
        bufp->chgIData(oldp+210,((0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 0xfU))),32);
        bufp->chgCData(oldp+211,((0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+212,((0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+213,((0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                           >> 7U))),5);
        bufp->chgBit(oldp+214,(((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                & (0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                                   >> 7U))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+215,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B),32);
        bufp->chgCData(oldp+216,((0x1fU & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B)),5);
        bufp->chgIData(oldp+217,(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata),32);
        bufp->chgIData(oldp+218,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                                   ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                   : 0U)),32);
        bufp->chgIData(oldp+219,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                                   ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                   : 0U)),32);
        bufp->chgIData(oldp+220,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                                   ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                   : 0U)),32);
        bufp->chgIData(oldp+221,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11)
                                   ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                   : 0U)),32);
        bufp->chgIData(oldp+222,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                   ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                   : 0U)),32);
        bufp->chgBit(oldp+223,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                      >> (7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                                >> 0xdU))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+224,(vlSelf->Top__DOT__core__DOT__pc),32);
        bufp->chgIData(oldp+225,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc)),32);
        bufp->chgQData(oldp+226,((QData)((IData)(((0x80U 
                                                   & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                      [0x300U] 
                                                      << 4U)) 
                                                  | (0xffffff7fU 
                                                     & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                     [0x300U]))))),36);
        bufp->chgIData(oldp+228,((0x80U | ((0xfffffff7U 
                                            & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                            [0x300U]) 
                                           | (8U & 
                                              (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                               [0x300U] 
                                               >> 4U))))),32);
        bufp->chgIData(oldp+229,(((0x80U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                            [0x300U] 
                                            << 4U)) 
                                  | (0xffffff7fU & 
                                     vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                     [0x300U]))),32);
        bufp->chgIData(oldp+230,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [9U]),32);
        bufp->chgIData(oldp+231,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [8U]),32);
        bufp->chgIData(oldp+232,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [7U]),32);
        bufp->chgIData(oldp+233,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [6U]),32);
        bufp->chgIData(oldp+234,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [5U]),32);
        bufp->chgIData(oldp+235,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [4U]),32);
        bufp->chgIData(oldp+236,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [3U]),32);
        bufp->chgIData(oldp+237,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [2U]),32);
        bufp->chgIData(oldp+238,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [1U]),32);
        bufp->chgIData(oldp+239,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xfU]),32);
        bufp->chgIData(oldp+240,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xeU]),32);
        bufp->chgIData(oldp+241,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xdU]),32);
        bufp->chgIData(oldp+242,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xcU]),32);
        bufp->chgIData(oldp+243,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xbU]),32);
        bufp->chgIData(oldp+244,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xaU]),32);
        bufp->chgIData(oldp+245,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0U]),32);
        bufp->chgIData(oldp+246,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+247,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+248,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+249,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+250,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+251,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+252,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+253,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+254,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+255,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+256,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+257,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+258,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+259,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+260,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+261,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+262,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+263,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+264,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+265,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+266,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+267,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+268,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+269,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+270,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+271,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+272,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+273,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+274,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+275,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+276,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+277,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[31]),32);
    }
    bufp->chgBit(oldp+278,(vlSelf->clock));
    bufp->chgBit(oldp+279,(vlSelf->reset));
    bufp->chgBit(oldp+280,(vlSelf->io_ebreak));
    bufp->chgIData(oldp+281,(vlSelf->io_debug_pc),32);
    bufp->chgCData(oldp+282,(vlSelf->io_debug_PCSel),2);
    bufp->chgCData(oldp+283,(vlSelf->io_debug_alu_op),4);
    bufp->chgIData(oldp+284,(vlSelf->io_debug_alu_out),32);
    bufp->chgCData(oldp+285,(vlSelf->io_debug_imm_sel),3);
    bufp->chgWData(oldp+286,(vlSelf->io_debug_gpr),512);
    bufp->chgIData(oldp+302,(vlSelf->io_debug_mtvec),32);
    bufp->chgIData(oldp+303,(vlSelf->io_debug_mepc),32);
    bufp->chgIData(oldp+304,(vlSelf->io_debug_mcause),32);
    bufp->chgIData(oldp+305,(vlSelf->io_debug_mstatus),32);
    bufp->chgBit(oldp+306,(vlSelf->io_debug_Valid));
    bufp->chgIData(oldp+307,(vlSelf->io_debug_addr),32);
    bufp->chgIData(oldp+308,(vlSelf->io_debug_wdata),32);
    bufp->chgBit(oldp+309,(vlSelf->io_debug_wen));
    bufp->chgIData(oldp+310,(vlSelf->io_debug_rdata),32);
    bufp->chgSData(oldp+311,(vlSelf->io_debug_csr_id),12);
    bufp->chgCData(oldp+312,(vlSelf->io_debug_CSRCmd),3);
    bufp->chgIData(oldp+313,(vlSelf->io_debug_CSRWdata),32);
    bufp->chgIData(oldp+314,(vlSelf->io_debug_next_pc),32);
    bufp->chgIData(oldp+315,(vlSelf->io_debug_reg_wdata),32);
    bufp->chgCData(oldp+316,(vlSelf->io_debug_WbSel),2);
    bufp->chgIData(oldp+317,(((4U == (IData)(vlSelf->io_debug_CSRCmd))
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                              [0x305U] : ((5U == (IData)(vlSelf->io_debug_CSRCmd))
                                           ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                          [0x341U] : 0U))),32);
    bufp->chgIData(oldp+318,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A),32);
    bufp->chgIData(oldp+319,(((~ vlSelf->io_debug_CSRWdata) 
                              & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                  : 0U))),32);
    bufp->chgIData(oldp+320,((0x80207888U & ((~ vlSelf->io_debug_CSRWdata) 
                                             & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                                                 ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                                 : 0U)))),32);
    bufp->chgBit(oldp+321,(((0x300U != (IData)(vlSelf->io_debug_csr_id)) 
                            & (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0))));
    bufp->chgBit(oldp+322,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0) 
                            & (0x300U == (IData)(vlSelf->io_debug_csr_id)))));
    bufp->chgIData(oldp+323,((0x80207888U & vlSelf->io_debug_CSRWdata)),32);
    bufp->chgIData(oldp+324,((((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                : 0U) | vlSelf->io_debug_CSRWdata)),32);
    bufp->chgBit(oldp+325,(((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0)) 
                            & (5U == (IData)(vlSelf->io_debug_CSRCmd)))));
    bufp->chgIData(oldp+326,((0x80207888U & (((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                                               ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                               : 0U) 
                                             | vlSelf->io_debug_CSRWdata))),32);
    bufp->chgCData(oldp+327,((((IData)(vlSelf->io_debug_WbSel) 
                               << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4))),4);
    bufp->chgCData(oldp+328,((((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                               << 1U) | (IData)(vlSelf->io_debug_wen))),2);
    bufp->chgCData(oldp+329,((((IData)(vlSelf->io_ebreak) 
                               << 1U) | (IData)(vlSelf->io_debug_Valid))),2);
    bufp->chgCData(oldp+330,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_hi_hi_3) 
                               << 4U) | (((IData)(vlSelf->io_debug_WbSel) 
                                          << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4)))),8);
    bufp->chgIData(oldp+331,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0),32);
    bufp->chgIData(oldp+332,((0xfffffffeU & vlSelf->io_debug_alu_out)),32);
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
    bufp->chgIData(oldp+333,(__Vtemp_h7720a331__0[(7U 
                                                   & ((0x7fffffcU 
                                                       & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                                          << 2U)) 
                                                      | (0x7ffffffU 
                                                         & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))]),32);
    bufp->chgIData(oldp+334,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                             [(0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+335,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                             [(0x1fU & (vlSelf->Top__DOT__memory__DOT__mem__DOT__imem 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+336,(vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata),32);
    bufp->chgIData(oldp+337,(vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask),32);
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
