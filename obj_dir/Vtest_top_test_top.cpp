// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_test_top) {
    VL_CELL(data_ram0, Vtest_top_dpram__R200000_RB15);
    VL_CELL(core_top0, Vtest_top_core_top);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_test_top::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtest_top_test_top::~Vtest_top_test_top() {
}

void Vtest_top_test_top::_final_TOP__test_top(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_final_TOP__test_top\n"); );
    // Variables
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_FCLOSE_I(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd); vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd = 0;
}

void Vtest_top_test_top::_initial__TOP__test_top__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_initial__TOP__test_top__1\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd = VL_FOPEN_NI(
                                                                      std::string("./log/console.log")
                                                                      , 0x77U);
    vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish = 0U;
}

void Vtest_top_test_top::_settle__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__2\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0U] = 0U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0U] = 0xffe00000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0U] = 0x2000000U;
    vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0U] = 0xffff0000U;
    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp 
        = (((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                            [1U])) << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                               [0U])));
    vlSymsp->TOP__test_top.__PVT__clint0__DOT__carry 
        = (0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
           [0U]);
}

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__3\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o;
    vlSymsp->TOP__test_top.__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o;
    vlSymsp->TOP__test_top.__PVT__host_req[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_we[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_addr[0U];
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_req[0U];
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
        [0U]) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound12 
        = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
           & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound12;
    }
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
            ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
           [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSymsp->TOP__test_top.__PVT__u_bus__DOT__cfg_device_addr_mask
          [0U]) == vlSymsp->TOP__test_top.__PVT__u_bus__DOT__cfg_device_addr_base
         [0U])) {
        vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__host_gnt[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o
        [0U];
    if (vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0U] = 0U;
    } else {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound2;
    }
    vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req));
    if (vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0U] = 0U;
    } else {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound3;
    }
    if (vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0U] = 0U;
    } else {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req)) 
               & vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound1;
    }
    vlSymsp->TOP__test_top.__PVT__device_we[0U] = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_addr[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_req[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o
        [0U];
    vlSymsp->TOP__test_top.__PVT__device_rdata[0U] 
        = (vlSymsp->TOP__test_top.__PVT__device_req
           [0U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                    [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                      [0U])] << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                           [(0x1fffffU 
                                             & ((IData)(1U) 
                                                + (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U])))] 
                                           << 0x10U) 
                                          | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSymsp->TOP__test_top.__PVT__device_addr
                                                    [0U])))] 
                                              << 8U) 
                                             | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1fffffU 
                                               & ((IData)(3U) 
                                                  + 
                                                  (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U])))])))
            : 0U);
    if (vlSymsp->TOP__test_top.__PVT__device_req[0U]) {
        if ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                    [0U]))) {
            vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                = vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem;
        } else {
            if ((0x4000U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                             [0U]))) {
                vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                    = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                    [0U];
            } else {
                if ((0x4004U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [0U]))) {
                    vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                        = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                        [1U];
                } else {
                    if ((0xbff8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U]))) {
                        vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                            = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                            [0U];
                    } else {
                        if ((0xbffcU == (0xffffU & 
                                         vlSymsp->TOP__test_top.__PVT__device_addr
                                         [0U]))) {
                            vlSymsp->TOP__test_top.__Vcellout__clint0__data_o 
                                = vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                [1U];
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__test_top.__Vcellout__clint0__data_o = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__device_rdata[0U] 
        = vlSymsp->TOP__test_top.__Vcellout__clint0__data_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__device_rdata
        [0U];
    if (((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound10 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound10;
    }
    vlSymsp->TOP__test_top.__PVT__host_rdata[0U] = 
        vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o
        [0U];
}

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__4\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__host_wdata[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_data_o;
    vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0U] 
        = vlSymsp->TOP__test_top.__PVT__host_wdata[0U];
    if (vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req) {
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0U] = 0U;
    } else {
        vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4 
            = ((0U >= (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))
                ? vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i
               [vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0U] 
            = vlSymsp->TOP__test_top.u_bus__DOT____Vlvbound4;
    }
    vlSymsp->TOP__test_top.__PVT__device_wdata[0U] 
        = vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o
        [0U];
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__5\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__console0__DOT__sim_finish;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_mem__v0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_mem__v2;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v2;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_mem__v3;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_mem__v2;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_mem__v3;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_mem__v2;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_mem__v3;
    // Body
    __Vdly__console0__DOT__sim_finish = vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish;
    __Vdlyvset__clint0__DOT__mtime_mem__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtime_mem__v2 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 0U;
    if (vlTOPp->rst_i) {
        __Vdly__console0__DOT__sim_finish = 0U;
    }
    if ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish))) {
        __Vdly__console0__DOT__sim_finish = (7U & ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish)));
    }
    vlSymsp->TOP__test_top.__PVT__halt_from_console 
        = (2U <= (IData)(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem = 0U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_we
            [0U]) {
            if ((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                        [0U]))) {
                vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem 
                    = vlSymsp->TOP__test_top.__PVT__device_wdata
                    [0U];
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdlyvset__clint0__DOT__mtime_mem__v0 = 1U;
    } else {
        if ((1U & (~ vlSymsp->TOP__test_top.__PVT__device_we
                   [0U]))) {
            __Vdlyvval__clint0__DOT__mtime_mem__v2 
                = ((IData)(1U) + vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                   [0U]);
            __Vdlyvset__clint0__DOT__mtime_mem__v2 = 1U;
            __Vdlyvval__clint0__DOT__mtime_mem__v3 
                = (vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                   [1U] + (IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__carry));
        }
    }
    if (vlTOPp->rst_i) {
        __Vdlyvset__clint0__DOT__mtimecmp_mem__v0 = 1U;
    } else {
        if (vlSymsp->TOP__test_top.__PVT__device_we
            [0U]) {
            if ((0U != (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                        [0U]))) {
                if ((0x4000U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [0U]))) {
                    __Vdlyvval__clint0__DOT__mtimecmp_mem__v2 
                        = vlSymsp->TOP__test_top.__PVT__device_wdata
                        [0U];
                    __Vdlyvset__clint0__DOT__mtimecmp_mem__v2 = 1U;
                } else {
                    if ((0x4004U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U]))) {
                        __Vdlyvval__clint0__DOT__mtimecmp_mem__v3 
                            = vlSymsp->TOP__test_top.__PVT__device_wdata
                            [0U];
                        __Vdlyvset__clint0__DOT__mtimecmp_mem__v3 = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish 
        = __Vdly__console0__DOT__sim_finish;
    if (__Vdlyvset__clint0__DOT__mtime_mem__v0) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0U] = 0U;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtime_mem__v2) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0U] 
            = __Vdlyvval__clint0__DOT__mtime_mem__v2;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1U] 
            = __Vdlyvval__clint0__DOT__mtime_mem__v3;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v0) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0U] = 0U;
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v2) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_mem__v2;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_mem__v3) {
        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_mem__v3;
    }
    vlSymsp->TOP__test_top.__PVT__clint0__DOT__carry 
        = (0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
           [0U]);
    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp 
        = (((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                            [1U])) << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                               [0U])));
}

void Vtest_top_test_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_ctor_var_reset\n"); );
    // Body
    rst_i = VL_RAND_RESET_I(1);
    clk_i = VL_RAND_RESET_I(1);
    halt_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__halt_from_console = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__device_rdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__device_wdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__device_we_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__device_addr_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__device_req_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__host_rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_we_i[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_addr_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellout__u_bus__host_gnt_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vcellinp__u_bus__host_req_i[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __Vcellout__clint0__data_o = VL_RAND_RESET_I(32);
    __PVT__console0__DOT__sim_finish = VL_RAND_RESET_I(3);
    __PVT__console0__DOT__log_fd = 0;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__u_bus__DOT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__u_bus__DOT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    __PVT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(1);
    __PVT__u_bus__DOT__device_sel_resp = VL_RAND_RESET_I(1);
    u_bus__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    u_bus__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    u_bus__DOT____Vlvbound3 = VL_RAND_RESET_I(32);
    u_bus__DOT____Vlvbound4 = VL_RAND_RESET_I(32);
    u_bus__DOT____Vlvbound10 = VL_RAND_RESET_I(32);
    u_bus__DOT____Vlvbound12 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__clint0__DOT__mtime_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__clint0__DOT__mtimecmp_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__clint0__DOT__msip_mem = VL_RAND_RESET_I(32);
    __PVT__clint0__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    __PVT__clint0__DOT__carry = VL_RAND_RESET_I(1);
}
