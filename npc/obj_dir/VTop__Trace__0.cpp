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
    VlWide<8>/*255:0*/ __Vtemp_h29950ca1__0;
    VlWide<4>/*127:0*/ __Vtemp_he6874d7e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Top__DOT__memory__DOT__io_imem_inst_0),32);
        bufp->chgCData(oldp+1,(vlSelf->Top__DOT___core_io_dmem_wmask),4);
        bufp->chgIData(oldp+2,(vlSelf->Top__DOT__core__DOT__pc),32);
        bufp->chgIData(oldp+3,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc)),32);
        bufp->chgIData(oldp+4,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_A),32);
        bufp->chgIData(oldp+5,(vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B),32);
        bufp->chgCData(oldp+6,((0x1fU & vlSelf->Top__DOT__core__DOT____Vcellinp__AluInstance__io_B)),5);
        bufp->chgIData(oldp+7,(vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata),32);
        bufp->chgQData(oldp+8,((QData)((IData)(((0x80U 
                                                 & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                    [0x300U] 
                                                    << 4U)) 
                                                | (0xffffff7fU 
                                                   & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                   [0x300U]))))),36);
        bufp->chgIData(oldp+10,((0x80U | ((0xfffffff7U 
                                           & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                           [0x300U]) 
                                          | (8U & (
                                                   vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                                   [0x300U] 
                                                   >> 4U))))),32);
        bufp->chgBit(oldp+11,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6));
        bufp->chgIData(oldp+12,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+13,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2));
        bufp->chgIData(oldp+14,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+15,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1));
        bufp->chgIData(oldp+16,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+17,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11));
        bufp->chgIData(oldp+18,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_11)
                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+19,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7));
        bufp->chgIData(oldp+20,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+21,(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_9));
        bufp->chgIData(oldp+22,(((0x80U & (vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                           [0x300U] 
                                           << 4U)) 
                                 | (0xffffff7fU & vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                    [0x300U]))),32);
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__CompareInstance__DOT___GEN_0) 
                                     >> (7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                               >> 0xdU))))));
        bufp->chgCData(oldp+24,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+25,((3U & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1) 
                                       >> 1U))),2);
        bufp->chgCData(oldp+26,((7U & (vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs 
                                       >> 0xdU))),3);
        bufp->chgCData(oldp+27,(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType),2);
        bufp->chgCData(oldp+28,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                  << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))),3);
        bufp->chgCData(oldp+29,(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX),2);
        bufp->chgBit(oldp+30,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0));
        bufp->chgCData(oldp+31,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel),2);
        bufp->chgIData(oldp+32,((~ vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)),32);
        bufp->chgIData(oldp+33,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs),30);
        bufp->chgBit(oldp+34,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 2U)))));
        bufp->chgBit(oldp+35,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 5U)))));
        bufp->chgBit(oldp+36,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2));
        bufp->chgBit(oldp+37,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 4U)))));
        bufp->chgBit(oldp+38,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xcU)))));
        bufp->chgCData(oldp+39,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi),2);
        bufp->chgBit(oldp+40,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2));
        bufp->chgBit(oldp+41,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+42,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xeU)))));
        bufp->chgCData(oldp+43,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 5U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xdU))))),2);
        bufp->chgBit(oldp+44,((IData)((0U == (0x6020U 
                                              & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
        bufp->chgCData(oldp+45,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0xdU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xeU))))),2);
        bufp->chgBit(oldp+46,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2));
        bufp->chgBit(oldp+47,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0x1eU)))));
        bufp->chgCData(oldp+48,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0xeU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0x1eU))))),2);
        bufp->chgCData(oldp+49,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 2U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xdU))))),2);
        bufp->chgBit(oldp+50,((IData)((0U == (0x40006004U 
                                              & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
        bufp->chgBit(oldp+51,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 2U))));
        bufp->chgBit(oldp+52,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 3U)))));
        bufp->chgCData(oldp+53,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 3U))))),2);
        bufp->chgBit(oldp+54,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2));
        bufp->chgBit(oldp+55,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2));
        bufp->chgBit(oldp+56,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 3U))));
        bufp->chgBit(oldp+57,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 5U))));
        bufp->chgBit(oldp+58,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 6U)))));
        bufp->chgCData(oldp+59,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 6U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xcU))))),2);
        bufp->chgCData(oldp+60,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5),2);
        bufp->chgBit(oldp+61,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2));
        bufp->chgCData(oldp+62,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 6U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xdU))))),2);
        bufp->chgBit(oldp+63,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2));
        bufp->chgBit(oldp+64,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 4U))));
        bufp->chgCData(oldp+65,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 4U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 6U))))),2);
        bufp->chgCData(oldp+66,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7),2);
        bufp->chgBit(oldp+67,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2));
        bufp->chgCData(oldp+68,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 1U)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 4U)))),2);
        bufp->chgBit(oldp+69,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2));
        bufp->chgBit(oldp+70,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 6U))));
        bufp->chgCData(oldp+71,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0xcU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xdU))))),2);
        bufp->chgCData(oldp+72,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi),2);
        bufp->chgCData(oldp+73,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9),3);
        bufp->chgBit(oldp+74,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2));
        bufp->chgCData(oldp+75,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 5U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xeU))))),2);
        bufp->chgBit(oldp+76,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                               & (IData)((0x40U == 
                                          (0x4040U 
                                           & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
        bufp->chgCData(oldp+77,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0xcU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0xeU))))),2);
        bufp->chgBit(oldp+78,(((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                               & (IData)((0U == (0x5000U 
                                                 & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
        bufp->chgBit(oldp+79,((1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0x14U)))));
        bufp->chgCData(oldp+80,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0xdU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0x14U))))),2);
        bufp->chgCData(oldp+81,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2),2);
        bufp->chgCData(oldp+82,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12),3);
        bufp->chgBit(oldp+83,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2));
        bufp->chgBit(oldp+84,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xcU))));
        bufp->chgCData(oldp+85,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0xdU)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 0x1eU))))),2);
        bufp->chgCData(oldp+86,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 2U)) 
                                        << 1U)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0xcU)))),2);
        bufp->chgBit(oldp+87,((IData)((0x1000U == (0x40003004U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
        bufp->chgCData(oldp+88,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xbU)) | 
                                 (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0xeU))))),2);
        bufp->chgCData(oldp+89,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14),3);
        bufp->chgBit(oldp+90,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2));
        bufp->chgCData(oldp+91,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 5U)) | (1U 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0xcU)))),2);
        bufp->chgBit(oldp+92,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2));
        bufp->chgBit(oldp+93,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2));
        bufp->chgCData(oldp+94,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12),2);
        bufp->chgBit(oldp+95,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                               & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12)))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                     >> 0xdU))));
        bufp->chgCData(oldp+97,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                        >> 0xcU)) | 
                                 (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0xeU))))),2);
        bufp->chgBit(oldp+98,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2));
        bufp->chgCData(oldp+99,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14),2);
        bufp->chgBit(oldp+100,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2));
        bufp->chgBit(oldp+101,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2));
        bufp->chgCData(oldp+102,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0xdU)))),2);
        bufp->chgCData(oldp+103,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 2U)) 
                                         << 1U)) | 
                                  (1U & (~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 6U))))),2);
        bufp->chgBit(oldp+104,((IData)((0x3000U == 
                                        (0x3044U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))));
        bufp->chgBit(oldp+105,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0xeU))));
        bufp->chgBit(oldp+106,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2));
        bufp->chgBit(oldp+107,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                   >> 0xeU))));
        bufp->chgBit(oldp+108,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2));
        bufp->chgCData(oldp+109,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12) 
                                   << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 0xeU)))),3);
        bufp->chgCData(oldp+110,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi) 
                                   << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 5U)))),3);
        bufp->chgBit(oldp+111,((IData)((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                         & (0x4020U 
                                            == (0x4020U 
                                                & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                        & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))))));
        bufp->chgCData(oldp+112,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0xeU)))),2);
        bufp->chgCData(oldp+113,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                                   << 1U) | (1U & (~ 
                                                   (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    >> 0xcU))))),3);
        bufp->chgBit(oldp+114,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2));
        bufp->chgBit(oldp+115,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0x14U))));
        bufp->chgCData(oldp+116,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0xdU)) 
                                         << 1U)) | 
                                  (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x14U)))),2);
        bufp->chgBit(oldp+117,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0x15U))));
        bufp->chgCData(oldp+118,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0xcU)) 
                                         << 1U)) | 
                                  (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x15U)))),2);
        bufp->chgBit(oldp+119,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                & (IData)((0x200000U 
                                           == (0x201000U 
                                               & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+121,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 4U)) | 
                                  (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x1eU)))),2);
        bufp->chgBit(oldp+122,(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                & (IData)((0x40000020U 
                                           == (0x40000020U 
                                               & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
        bufp->chgCData(oldp+123,(((2U & ((~ (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                             >> 0xdU)) 
                                         << 1U)) | 
                                  (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 0x1eU)))),2);
        bufp->chgCData(oldp+124,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7) 
                                   << 1U) | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 0xcU)))),3);
        bufp->chgBit(oldp+125,((IData)(((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                        & (0x40001000U 
                                           == (0x40003000U 
                                               & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))));
        bufp->chgCData(oldp+126,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN),2);
        bufp->chgCData(oldp+127,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2))),2);
        bufp->chgCData(oldp+128,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                              << 2U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
        bufp->chgCData(oldp+129,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
        bufp->chgCData(oldp+130,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
        bufp->chgCData(oldp+131,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2)))),3);
        bufp->chgCData(oldp+132,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2) 
                                    << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                               << 3U) 
                                              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                                 << 2U))) 
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2)))),5);
        bufp->chgCData(oldp+133,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0),2);
        bufp->chgCData(oldp+134,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
        bufp->chgCData(oldp+135,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
        bufp->chgCData(oldp+136,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1),2);
        bufp->chgCData(oldp+137,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),3);
        bufp->chgCData(oldp+138,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
        bufp->chgCData(oldp+139,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),3);
        bufp->chgCData(oldp+140,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1),2);
        bufp->chgCData(oldp+141,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2),2);
        bufp->chgCData(oldp+142,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1))),4);
        bufp->chgCData(oldp+143,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
        bufp->chgCData(oldp+144,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
        bufp->chgCData(oldp+145,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)))),3);
        bufp->chgCData(oldp+146,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                    << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                               << 3U) 
                                              | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                                 << 2U))) 
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),5);
        bufp->chgCData(oldp+147,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3),2);
        bufp->chgCData(oldp+148,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),3);
        bufp->chgCData(oldp+149,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              << 2U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3)))),5);
        bufp->chgCData(oldp+150,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),2);
        bufp->chgCData(oldp+151,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))),3);
        bufp->chgCData(oldp+152,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
        bufp->chgCData(oldp+153,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2)))),4);
        bufp->chgCData(oldp+154,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
        bufp->chgCData(oldp+155,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),2);
        bufp->chgCData(oldp+156,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2)))),3);
        bufp->chgCData(oldp+157,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))),2);
        bufp->chgCData(oldp+158,(((2U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 2U)) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),2);
        bufp->chgCData(oldp+159,(((4U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                         >> 1U)) | 
                                  (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                    << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2)))),3);
        bufp->chgCData(oldp+160,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2))),2);
        bufp->chgCData(oldp+161,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
        bufp->chgCData(oldp+162,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2) 
                                    << 3U) | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2)))),4);
        bufp->chgCData(oldp+163,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),2);
        bufp->chgCData(oldp+164,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                   << 1U) | (IData)(
                                                    (0x1000U 
                                                     == 
                                                     (0x40003004U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
        bufp->chgCData(oldp+165,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                   << 2U) | (((IData)(
                                                      (0x1000U 
                                                       == 
                                                       (0x40003004U 
                                                        & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)))),3);
        bufp->chgCData(oldp+166,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
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
        bufp->chgSData(oldp+167,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
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
        bufp->chgCData(oldp+168,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2))),2);
        bufp->chgCData(oldp+169,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)))),4);
        bufp->chgCData(oldp+170,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2))),2);
        bufp->chgCData(oldp+171,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                   << 1U) | (IData)(
                                                    (0U 
                                                     == 
                                                     (0x6020U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
        bufp->chgCData(oldp+172,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
                                   << 2U) | (((IData)(
                                                      (0U 
                                                       == 
                                                       (0x6020U 
                                                        & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))) 
                                              << 1U) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (0x40006004U 
                                                         & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))),3);
        bufp->chgCData(oldp+173,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
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
        bufp->chgSData(oldp+174,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2) 
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
        bufp->chgCData(oldp+175,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                                   << 1U) | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                             & (IData)(
                                                       (0x40000020U 
                                                        == 
                                                        (0x40000020U 
                                                         & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))),2);
        bufp->chgCData(oldp+176,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2) 
                                   << 2U) | ((((3U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                               & (IData)(
                                                         (0x40000020U 
                                                          == 
                                                          (0x40000020U 
                                                           & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                                              << 1U) 
                                             | (IData)(
                                                       ((3U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                                        & (0x40001000U 
                                                           == 
                                                           (0x40003000U 
                                                            & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))))),3);
        bufp->chgCData(oldp+177,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
        bufp->chgCData(oldp+178,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4),2);
        bufp->chgCData(oldp+179,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)))),4);
        bufp->chgCData(oldp+180,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2) 
                                   << 1U) | (IData)(
                                                    (0x3000U 
                                                     == 
                                                     (0x3044U 
                                                      & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
        bufp->chgCData(oldp+181,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2))),2);
        bufp->chgCData(oldp+182,(((((7U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
                                    & (IData)((0U == 
                                               (0x5000U 
                                                & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2))),2);
        bufp->chgCData(oldp+183,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                    & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2))),2);
        bufp->chgCData(oldp+184,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
        bufp->chgCData(oldp+185,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5),2);
        bufp->chgCData(oldp+186,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2))),3);
        bufp->chgCData(oldp+187,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))),2);
        bufp->chgCData(oldp+188,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2) 
                                   << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                              << 2U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN)))),4);
        bufp->chgCData(oldp+189,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2) 
                                   << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1))),4);
        bufp->chgCData(oldp+190,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
        bufp->chgCData(oldp+191,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2))),3);
        bufp->chgCData(oldp+192,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                       | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0))),2);
        bufp->chgCData(oldp+193,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1)) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2)) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2) 
                                       | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0)))),3);
        bufp->chgCData(oldp+194,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
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
        bufp->chgCData(oldp+195,((((((0U != (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2)) 
                                     | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2))) 
                                    | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                       | ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2) 
                                          | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2)))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2))),2);
        bufp->chgCData(oldp+196,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1),4);
        bufp->chgCData(oldp+197,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4),7);
        bufp->chgCData(oldp+198,(((2U & (((0x3ffffffeU 
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
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2))))),2);
        bufp->chgCData(oldp+199,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi),2);
        bufp->chgCData(oldp+200,((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi) 
                                   << 2U) | ((2U & 
                                              (((0x3ffffffeU 
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
        bufp->chgCData(oldp+201,(((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7)) 
                                    & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                       >> 0xeU)) << 1U) 
                                  | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                       | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                      | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                     | (0x3000U == 
                                        (0x3044U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))),2);
        bufp->chgCData(oldp+202,(((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                    | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                       & (IData)((0x40U 
                                                  == 
                                                  (0x4040U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                   << 1U) | ((((7U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
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
        bufp->chgCData(oldp+203,((((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2) 
                                     | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi)) 
                                        & (IData)((0x40U 
                                                   == 
                                                   (0x4040U 
                                                    & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                    << 3U) | (((((7U 
                                                  == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9)) 
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
                                          >> 0xeU)) 
                                      << 1U) | ((((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2) 
                                                  | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2)) 
                                                 | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2)) 
                                                | (0x3000U 
                                                   == 
                                                   (0x3044U 
                                                    & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)))))),4);
        bufp->chgCData(oldp+204,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8),8);
        bufp->chgSData(oldp+205,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14),15);
        bufp->chgCData(oldp+206,((((IData)(vlSelf->Top__DOT__core__DOT___CUInstance_io_StType) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2))),3);
        bufp->chgCData(oldp+207,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo),2);
        bufp->chgCData(oldp+208,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                      & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                    | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                       & (IData)((0x200000U 
                                                  == 
                                                  (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                   << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2))),2);
        bufp->chgCData(oldp+209,(((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                      & (3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12))) 
                                     | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2)) 
                                    | ((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
                                       & (IData)((0x200000U 
                                                  == 
                                                  (0x201000U 
                                                   & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0))))) 
                                   << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                              << 2U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo)))),4);
        bufp->chgCData(oldp+210,((((((((3U == (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2)) 
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
        bufp->chgCData(oldp+211,((((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                   << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4))),4);
        bufp->chgSData(oldp+212,(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17),15);
        bufp->chgIData(oldp+213,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0),32);
        bufp->chgIData(oldp+214,(vlSelf->Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0),32);
        bufp->chgIData(oldp+215,((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 0x1fU))) 
                                   << 0xbU) | (0x7ffU 
                                               & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                  >> 0x14U)))),32);
        bufp->chgIData(oldp+216,(((0x7ffffc0U & ((- (IData)(
                                                            (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                             >> 0x1fU))) 
                                                 << 6U)) 
                                  | (0x3fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                              >> 0x19U)))),27);
        bufp->chgIData(oldp+217,((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 0x1fU))) 
                                   << 0xbU) | ((0x7e0U 
                                                & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                     >> 7U))))),32);
        bufp->chgCData(oldp+218,((0x1eU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 7U))),5);
        bufp->chgIData(oldp+219,(((0x1ffffeU & ((- (IData)(
                                                           (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                            >> 0x1fU))) 
                                                << 1U)) 
                                  | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 7U)))),21);
        bufp->chgIData(oldp+220,(((0x7ffff80U & ((- (IData)(
                                                            (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                             >> 0x1fU))) 
                                                 << 7U)) 
                                  | ((0x40U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 1U)) 
                                     | (0x3fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                 >> 0x19U))))),27);
        bufp->chgIData(oldp+221,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                    << 4U)) 
                                                | (0x7e0U 
                                                   & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                      >> 0x14U)))) 
                                  | (0x1eU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                              >> 7U)))),32);
        bufp->chgIData(oldp+222,((0xfffff000U & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0)),32);
        bufp->chgSData(oldp+223,((0x3ffU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x15U))),10);
        bufp->chgSData(oldp+224,((0x7feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x14U))),11);
        bufp->chgIData(oldp+225,(((0xfff00U & ((- (IData)(
                                                          (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                           >> 0x1fU))) 
                                               << 8U)) 
                                  | (0xffU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                              >> 0xcU)))),20);
        bufp->chgIData(oldp+226,(((0x1ffe00U & ((- (IData)(
                                                           (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                            >> 0x1fU))) 
                                                << 9U)) 
                                  | ((0x1feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0xbU)) 
                                     | (1U & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                              >> 0x14U))))),21);
        bufp->chgIData(oldp+227,(((((- (IData)((vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->Top__DOT__memory__DOT__io_imem_inst_0) 
                                                 | (0x800U 
                                                    & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                       >> 9U)))) 
                                  | (0x7feU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                               >> 0x14U)))),32);
        bufp->chgIData(oldp+228,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0xfU))),32);
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
        bufp->chgIData(oldp+229,(__Vtemp_h7720a331__0[
                                 (7U & ((0x7fffffcU 
                                         & ((IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2) 
                                            << 2U)) 
                                        | (0x7ffffffU 
                                           & (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo))))]),32);
        bufp->chgCData(oldp+230,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+231,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+232,((0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                           >> 7U))),5);
        bufp->chgIData(oldp+233,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0x14U))]),32);
        bufp->chgIData(oldp+234,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                            >> 0xfU))]),32);
        bufp->chgIData(oldp+235,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [9U]),32);
        bufp->chgIData(oldp+236,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [8U]),32);
        bufp->chgIData(oldp+237,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [7U]),32);
        bufp->chgIData(oldp+238,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [6U]),32);
        bufp->chgIData(oldp+239,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [5U]),32);
        bufp->chgIData(oldp+240,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [4U]),32);
        bufp->chgIData(oldp+241,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [3U]),32);
        bufp->chgIData(oldp+242,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [2U]),32);
        bufp->chgIData(oldp+243,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [1U]),32);
        bufp->chgIData(oldp+244,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xfU]),32);
        bufp->chgIData(oldp+245,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xeU]),32);
        bufp->chgIData(oldp+246,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xdU]),32);
        bufp->chgIData(oldp+247,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xcU]),32);
        bufp->chgIData(oldp+248,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xbU]),32);
        bufp->chgIData(oldp+249,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0xaU]),32);
        bufp->chgIData(oldp+250,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory
                                 [0U]),32);
        bufp->chgBit(oldp+251,(((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                & (0U != (0x1fU & (vlSelf->Top__DOT__memory__DOT__io_imem_inst_0 
                                                   >> 7U))))));
        bufp->chgIData(oldp+252,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+253,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+254,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+255,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+256,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+257,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+258,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+259,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+260,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+261,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+262,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+263,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+264,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+265,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+266,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+267,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+268,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+269,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+270,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+271,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+272,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+273,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+274,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+275,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+276,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+277,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+278,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+279,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+280,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+281,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+282,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+283,(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory[31]),32);
        bufp->chgIData(oldp+284,(vlSelf->Top__DOT__memory__DOT__mem__DOT__rdata),32);
        bufp->chgIData(oldp+285,(vlSelf->Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask),32);
    }
    bufp->chgBit(oldp+286,(vlSelf->clock));
    bufp->chgBit(oldp+287,(vlSelf->reset));
    bufp->chgBit(oldp+288,(vlSelf->io_ebreak));
    bufp->chgIData(oldp+289,(vlSelf->io_debug_pc),32);
    bufp->chgCData(oldp+290,(vlSelf->io_debug_PCSel),2);
    bufp->chgCData(oldp+291,(vlSelf->io_debug_alu_op),4);
    bufp->chgIData(oldp+292,(vlSelf->io_debug_alu_out),32);
    bufp->chgCData(oldp+293,(vlSelf->io_debug_imm_sel),3);
    bufp->chgWData(oldp+294,(vlSelf->io_debug_gpr),512);
    bufp->chgIData(oldp+310,(vlSelf->io_debug_mtvec),32);
    bufp->chgIData(oldp+311,(vlSelf->io_debug_mepc),32);
    bufp->chgIData(oldp+312,(vlSelf->io_debug_mcause),32);
    bufp->chgIData(oldp+313,(vlSelf->io_debug_mstatus),32);
    bufp->chgBit(oldp+314,(vlSelf->io_debug_Valid));
    bufp->chgIData(oldp+315,(vlSelf->io_debug_addr),32);
    bufp->chgIData(oldp+316,(vlSelf->io_debug_wdata),32);
    bufp->chgBit(oldp+317,(vlSelf->io_debug_wen));
    bufp->chgIData(oldp+318,(vlSelf->io_debug_rdata),32);
    bufp->chgSData(oldp+319,(vlSelf->io_debug_csr_id),12);
    bufp->chgCData(oldp+320,(vlSelf->io_debug_CSRCmd),3);
    bufp->chgIData(oldp+321,(vlSelf->io_debug_CSRWdata),32);
    bufp->chgIData(oldp+322,(((4U == (IData)(vlSelf->io_debug_CSRCmd))
                               ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                              [0x305U] : ((5U == (IData)(vlSelf->io_debug_CSRCmd))
                                           ? vlSelf->Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory
                                          [0x341U] : 0U))),32);
    bufp->chgIData(oldp+323,(((~ vlSelf->io_debug_CSRWdata) 
                              & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_7)
                                  ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                  : 0U))),32);
    bufp->chgIData(oldp+324,((0x80207888U & ((~ vlSelf->io_debug_CSRWdata) 
                                             & ((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_6)
                                                 ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                                 : 0U)))),32);
    bufp->chgBit(oldp+325,(((0x300U != (IData)(vlSelf->io_debug_csr_id)) 
                            & (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0))));
    bufp->chgBit(oldp+326,(((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0) 
                            & (0x300U == (IData)(vlSelf->io_debug_csr_id)))));
    bufp->chgIData(oldp+327,((0x80207888U & vlSelf->io_debug_CSRWdata)),32);
    bufp->chgIData(oldp+328,((((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_2)
                                ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                : 0U) | vlSelf->io_debug_CSRWdata)),32);
    bufp->chgBit(oldp+329,(((~ (IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0)) 
                            & (5U == (IData)(vlSelf->io_debug_CSRCmd)))));
    bufp->chgIData(oldp+330,((0x80207888U & (((IData)(vlSelf->Top__DOT__core__DOT__CSRInstance__DOT___GEN_1)
                                               ? vlSelf->Top__DOT__core__DOT___CSRInstance_io_rdata
                                               : 0U) 
                                             | vlSelf->io_debug_CSRWdata))),32);
    bufp->chgCData(oldp+331,((((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                               << 1U) | (IData)(vlSelf->io_debug_wen))),2);
    bufp->chgCData(oldp+332,((((IData)(vlSelf->io_ebreak) 
                               << 1U) | (IData)(vlSelf->io_debug_Valid))),2);
    bufp->chgCData(oldp+333,(((((IData)(vlSelf->io_ebreak) 
                                << 3U) | ((IData)(vlSelf->io_debug_Valid) 
                                          << 2U)) | 
                              (((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                << 1U) | (IData)(vlSelf->io_debug_wen)))),4);
    bufp->chgCData(oldp+334,((((((IData)(vlSelf->io_ebreak) 
                                 << 7U) | ((IData)(vlSelf->io_debug_Valid) 
                                           << 6U)) 
                               | (((IData)(vlSelf->Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0) 
                                   << 5U) | ((IData)(vlSelf->io_debug_wen) 
                                             << 4U))) 
                              | (((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                  << 2U) | (IData)(vlSelf->Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4)))),8);
    bufp->chgIData(oldp+335,((0xfffffffeU & vlSelf->io_debug_alu_out)),32);
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
    bufp->chgIData(oldp+336,((((0U == (0x1fU & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                                << 5U)))
                                ? 0U : (__Vtemp_he6874d7e__0[
                                        (((IData)(0x1fU) 
                                          + (0x7fU 
                                             & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                                << 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                             << 5U))))) 
                              | (__Vtemp_he6874d7e__0[
                                 (3U & (IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX))] 
                                 >> (0x1fU & ((IData)(vlSelf->Top__DOT__core__DOT___GEN_ARRAY_IDX) 
                                              << 5U))))),32);
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
}
