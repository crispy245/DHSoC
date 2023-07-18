// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top) {
    Vtest_top__Syms* __restrict vlSymsp = __VlSymsp = new Vtest_top__Syms(this, name());
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(test_top, Vtest_top_test_top);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtest_top::~Vtest_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtest_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_top::eval\n"); );
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/soc/test_top.v", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtest_top::_eval_initial_loop(Vtest_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/soc/test_top.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtest_top::_settle__TOP__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_settle__TOP__1\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->halt_o = vlSymsp->TOP__test_top.__PVT__halt_from_console;
}

void Vtest_top::_eval(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_eval\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlSymsp->TOP__test_top__core_top0._sequent__TOP__test_top__core_top0__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__test_top._sequent__TOP__test_top__5(vlSymsp);
        vlSymsp->TOP__test_top__core_top0__regfile0._sequent__TOP__test_top__core_top0__regfile0__3(vlSymsp);
        vlSymsp->TOP__test_top__data_ram0._sequent__TOP__test_top__data_ram0__1(vlSymsp);
        vlTOPp->_settle__TOP__1(vlSymsp);
        vlSymsp->TOP__test_top__core_top0._sequent__TOP__test_top__core_top0__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->__Vclklast__TOP__rst_i)))) {
        vlSymsp->TOP__test_top__core_top0._sequent__TOP__test_top__core_top0__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__test_top__core_top0._combo__TOP__test_top__core_top0__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__test_top._settle__TOP__test_top__3(vlSymsp);
    vlSymsp->TOP__test_top__core_top0__regfile0._settle__TOP__test_top__core_top0__regfile0__2(vlSymsp);
    vlSymsp->TOP__test_top__core_top0._settle__TOP__test_top__core_top0__2(vlSymsp);
    vlSymsp->TOP__test_top._settle__TOP__test_top__4(vlSymsp);
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlSymsp->TOP__test_top__core_top0._sequent__TOP__test_top__core_top0__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_i = vlTOPp->rst_i;
}

void Vtest_top::_eval_initial(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_eval_initial\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top._initial__TOP__test_top__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__test_top__core_top0__regfile0._initial__TOP__test_top__core_top0__regfile0__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_i = vlTOPp->rst_i;
}

void Vtest_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::final\n"); );
    // Variables
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top._final_TOP__test_top(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vtest_top::_eval_settle(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_eval_settle\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top._settle__TOP__test_top__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__test_top__core_top0._settle__TOP__test_top__core_top0__1(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__test_top._settle__TOP__test_top__3(vlSymsp);
    vlSymsp->TOP__test_top__core_top0__regfile0._settle__TOP__test_top__core_top0__regfile0__2(vlSymsp);
    vlSymsp->TOP__test_top__core_top0._settle__TOP__test_top__core_top0__2(vlSymsp);
    vlSymsp->TOP__test_top._settle__TOP__test_top__4(vlSymsp);
}

VL_INLINE_OPT QData Vtest_top::_change_request(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_change_request\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp ^ vlTOPp->__Vchglast__TOP__test_top__core_top0__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp ^ vlTOPp->__Vchglast__TOP__test_top__core_top0__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp))) VL_DBG_MSGF("        CHANGE: vsrc/core/mul/mul.v:20: exe0.exe_type_m0.mul0.ready_temp\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__test_top__core_top0__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp;
    return __req;
}

#ifdef VL_DEBUG
void Vtest_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG

void Vtest_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top::_ctor_var_reset\n"); );
    // Body
    rst_i = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    halt_o = VL_RAND_RESET_I(1);
    __Vchglast__TOP__test_top__core_top0__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp = VL_RAND_RESET_I(6);
    __Vm_traceActivity = 0;
}
