// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTop__Syms;
class VTop___024unit;


class VTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_ebreak,0,0);
        VL_OUT8(io_debug_PCSel,1,0);
        VL_OUT8(io_debug_alu_op,3,0);
        VL_OUT8(io_debug_imm_sel,2,0);
        VL_OUT8(io_debug_Valid,0,0);
        VL_OUT8(io_debug_wen,0,0);
        VL_OUT8(io_debug_CSRCmd,2,0);
        CData/*3:0*/ Top__DOT___core_io_dmem_wmask;
        CData/*1:0*/ Top__DOT__core__DOT___CUInstance_io_StType;
        CData/*1:0*/ Top__DOT__core__DOT___GEN_ARRAY_IDX;
        CData/*0:0*/ Top__DOT__core__DOT__CompareInstance__DOT___GEN;
        CData/*7:0*/ Top__DOT__core__DOT__CompareInstance__DOT___GEN_0;
        CData/*0:0*/ Top__DOT__core__DOT__CompareInstance__DOT____VdfgTmp_hf84125da__0;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_PCSel;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_17_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_22_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_10_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_18_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_13_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_5;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_9_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_26_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_7;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_0_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_4_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi;
        CData/*2:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_9;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_33_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_hi_2;
        CData/*2:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_12;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_14_2;
        CData/*2:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_hi_14;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_31_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_7_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_2_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_12;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_8_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_lo_14;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_15_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_1_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_27_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_32_2;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_andMatrixOutputs_28_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_0;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_1;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_1;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_2;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_3;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_4;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT___GEN_5;
        CData/*3:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_hi_1;
        CData/*6:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_lo_4;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_lo_hi;
        CData/*7:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_hi_8;
        CData/*1:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_lo_hi_lo;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h8c6fa575__0;
        CData/*0:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT____VdfgTmp_h3b7b4b58__0;
        CData/*0:0*/ Top__DOT__core__DOT__RegFileInstance__DOT__io_wen_0;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT___GEN_1;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT___GEN_2;
    };
    struct {
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT___GEN_5;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT___GEN_6;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT___GEN_7;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT___GEN_9;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT___GEN_11;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h55f09636__0;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hb068fa5d__0;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_h9faecc81__0;
        CData/*0:0*/ Top__DOT__core__DOT__CSRInstance__DOT____VdfgTmp_hd6e9dc5c__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(io_debug_csr_id,11,0);
        SData/*14:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_lo_14;
        SData/*14:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_orMatrixOutputs_hi_17;
        VL_OUT(io_debug_pc,31,0);
        VL_OUT(io_debug_alu_out,31,0);
        VL_OUTW(io_debug_gpr,511,0,16);
        VL_OUT(io_debug_mtvec,31,0);
        VL_OUT(io_debug_mepc,31,0);
        VL_OUT(io_debug_mcause,31,0);
        VL_OUT(io_debug_mstatus,31,0);
        VL_OUT(io_debug_addr,31,0);
        VL_OUT(io_debug_wdata,31,0);
        VL_OUT(io_debug_rdata,31,0);
        VL_OUT(io_debug_CSRWdata,31,0);
        IData/*31:0*/ Top__DOT__core__DOT___CSRInstance_io_rdata;
        IData/*31:0*/ Top__DOT__core__DOT__pc;
        VlWide<4>/*127:0*/ Top__DOT__core__DOT___GEN_0;
        IData/*31:0*/ Top__DOT__core__DOT____Vcellinp__AluInstance__io_B;
        IData/*31:0*/ Top__DOT__core__DOT____Vcellinp__AluInstance__io_A;
        IData/*29:0*/ Top__DOT__core__DOT__CUInstance__DOT__decode__DOT__decodedBundle_invMatrixOutputs;
        IData/*31:0*/ Top__DOT__core__DOT__RegFileInstance__DOT__io_rs1_0;
        IData/*31:0*/ Top__DOT__core__DOT__CSRInstance__DOT__mret_mstatus;
        IData/*31:0*/ Top__DOT__core__DOT__CSRInstance__DOT____Vcellinp__csrs_ext__W7_data;
        IData/*31:0*/ Top__DOT__core__DOT__ImmGenInstance__DOT__io_out_0;
        IData/*31:0*/ Top__DOT__memory__DOT__io_imem_inst_0;
        IData/*31:0*/ Top__DOT__memory__DOT__mem__DOT__rdata;
        IData/*31:0*/ Top__DOT__memory__DOT__mem__DOT__unnamedblk1__DOT__full_mask;
        IData/*31:0*/ __Vfunc_ram_read_helper__0__Vfuncout;
        IData/*31:0*/ __Vfunc_ram_read_helper__1__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> Top__DOT__core__DOT__RegFileInstance__DOT__regs_ext__DOT__Memory;
        VlUnpacked<IData/*31:0*/, 4096> Top__DOT__core__DOT__CSRInstance__DOT__csrs_ext__DOT__Memory;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
