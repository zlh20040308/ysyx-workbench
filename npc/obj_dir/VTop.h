// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VTop__Syms;
class VTop___024root;
class VerilatedVcdC;
class VTop___024unit;


// This class is the main interface to the Verilated model
class VTop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_OUT8(&io_debug_Valid,0,0);
    VL_OUT8(&io_debug_wen,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_ebreak,0,0);
    VL_OUT8(&io_debug_PCSel,1,0);
    VL_OUT8(&io_debug_alu_op,3,0);
    VL_OUT8(&io_debug_imm_sel,2,0);
    VL_OUT8(&io_debug_CSRCmd,2,0);
    VL_OUT8(&io_debug_WbSel,1,0);
    VL_OUT8(&io_debug_WbEn,0,0);
    VL_OUT16(&io_debug_csr_id,11,0);
    VL_OUT(&io_debug_pc,31,0);
    VL_OUT(&io_debug_alu_out,31,0);
    VL_OUTW(&io_debug_gpr,511,0,16);
    VL_OUT(&io_debug_mtvec,31,0);
    VL_OUT(&io_debug_mepc,31,0);
    VL_OUT(&io_debug_mcause,31,0);
    VL_OUT(&io_debug_mstatus,31,0);
    VL_OUT(&io_debug_addr,31,0);
    VL_OUT(&io_debug_wdata,31,0);
    VL_OUT(&io_debug_rdata,31,0);
    VL_OUT(&io_debug_CSRWdata,31,0);
    VL_OUT(&io_debug_next_pc,31,0);
    VL_OUT(&io_debug_reg_wdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VTop___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTop(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTop();
  private:
    VL_UNCOPYABLE(VTop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard