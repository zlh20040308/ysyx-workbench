// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/feng/OS/ysyx-workbench/npc/build/ram_2r1w.sv:8:29
    extern int ram_read_helper(int addr);
    // DPI import at /home/feng/OS/ysyx-workbench/npc/build/ram_2r1w.sv:2:30
    extern void ram_write_helper(int addr, int wdata, int wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
