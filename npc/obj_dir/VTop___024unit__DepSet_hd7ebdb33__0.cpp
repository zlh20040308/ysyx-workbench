// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024unit.h"

extern "C" void ram_write_helper(int addr, int wdata, int wmask);

VL_INLINE_OPT void VTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ wdata, IData/*31:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    ram_write_helper(addr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" int ram_read_helper(int addr);

VL_INLINE_OPT void VTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &ram_read_helper__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int ram_read_helper__Vfuncrtn__Vcvt;
    ram_read_helper__Vfuncrtn__Vcvt = ram_read_helper(addr__Vcvt);
    ram_read_helper__Vfuncrtn = ram_read_helper__Vfuncrtn__Vcvt;
}
