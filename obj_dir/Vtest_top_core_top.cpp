// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_core_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*1:0*/ Vtest_top_core_top::__Vtable1___PVT__aligner0__DOT__next_state[8];
CData/*3:0*/ Vtest_top_core_top::__Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[64];

VL_CTOR_IMP(Vtest_top_core_top) {
    VL_CELL(regfile0, Vtest_top_regfile);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_core_top::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtest_top_core_top::~Vtest_top_core_top() {
}

void Vtest_top_core_top::_settle__TOP__test_top__core_top0__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_settle__TOP__test_top__core_top0__1\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0.__PVT__aligner_stall_o 
        = (1U | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__aligner_stall_o));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((0x18U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 0x19U))) 
                                                         & (2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                >> 0x14U))))))) {
                                                    if (
                                                        ((0U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 0x19U))) 
                                                         & (0U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                >> 0x14U))))) {
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o 
                                            = (0xfffU 
                                               & ((0x2000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0x14U)
                                                    : 0U)));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o 
                                                = (0xfffU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o 
                                                    = 
                                                    (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0x14U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    ((0x18U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x19U))) 
                                                     & (2U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 0x14U))))) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o 
                                            = (1U & 
                                               ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xdU) 
                                                | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xcU)));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                        : 0x13U) : 0x13U)
                                : 0x13U) : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((2U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                  : 0x13U)
                                                 : 0x13U)
                                             : ((2U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                  : 0x13U)
                                                 : 0x13U)));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0x13U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                : 0x13U)
                                            : 0x13U)
                                        : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                : 0x13U)
                                            : 0x13U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0x13U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? 0x13U : (
                                                   (2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                     : 0x13U)
                                                    : 0x13U))))
                    : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0x13U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                : 0x13U)
                                            : 0x13U)
                                        : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                : 0x13U)
                                            : 0x13U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0x13U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? 0x13U : (
                                                   (2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                     : 0x13U)
                                                    : 0x13U)))));
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
           >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U] 
        = (IData)((VL_ULL(0x1ffffffff) & ((QData)((IData)(
                                                          vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                          - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[2U] 
        = (IData)(((VL_ULL(0x1ffffffff) & ((QData)((IData)(
                                                           vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                           - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                   >> 0x20U));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                        : 0U) : 0U)
                                : 0U) : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : 0U));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                    = ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U)))
                        : 0U);
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                        : 0U) : 0U);
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                                if (
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))) {
                                                    if (
                                                        (0x20U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x19U)))) {
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                                                    }
                                                }
                                            } else {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                            }
                                        }
                                    } else {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)));
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 3U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 3U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x23U == 
                                           (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                           ? ((0U == 
                                               (7U 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 0U)))
                                           : ((3U == 
                                               (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                               ? ((0x4000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0xdU
                                                     : 0xcU))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 0xbU)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0xaU
                                                     : 9U)))
                                               : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x23U == 
                                           (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                           ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                                           : 0U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x23U == 
                                           (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                           ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                              + ((0xfffff000U 
                                                  & (VL_NEGATE_I((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                             >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | ((0xfe0U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 7U)))))
                                           : ((3U == 
                                               (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                               ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                  + 
                                                  ((0xfffff000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                               >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x14U))))
                                               : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o 
        = (((IData)(vlTOPp->rst_i) | (0x73U != (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))
            ? 0U : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o 
                            & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                         : (vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o 
                            | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                     : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                         : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x3eU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x3dU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o) 
              << 1U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x3bU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o) 
              << 2U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x37U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o) 
              << 3U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x2fU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o) 
              << 4U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x1fU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o) 
              << 5U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o 
        = (((IData)(vlTOPp->rst_i) | (0x73U != (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))
            ? 0U : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o
                     : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o
                         : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
                            = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U) & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 1U) 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)));
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
                                = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                          >> 1U) & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o));
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][2U];
    if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i 
            = (1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state)));
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state)))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i = 0U;
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
           == vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust 
        = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                  ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o) 
                 >> 0x1fU));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
           & (1U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                              >> 0x19U))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[8U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[8U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[8U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[9U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[9U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[9U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xaU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xaU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xaU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xbU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xbU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xbU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xcU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xcU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xcU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xdU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xdU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xdU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xeU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xeU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xeU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xfU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xfU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xfU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & (1U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 0x19U))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1fU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1fU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1fU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1eU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1eU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1eU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1dU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1dU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1dU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1cU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1cU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1cU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1bU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1bU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1bU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1aU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1aU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1aU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x19U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x19U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x19U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x18U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x18U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x18U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x17U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x17U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x17U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x16U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x16U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x16U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x15U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x15U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x15U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x14U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x14U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x14U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x13U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x13U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x13U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x12U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x12U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x12U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x11U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x11U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x11U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x10U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x10U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x10U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xfU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xfU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xfU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xeU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xeU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xeU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xdU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xdU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xdU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xcU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xcU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xcU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xbU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xbU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xbU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xaU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xaU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xaU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[9U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[9U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[9U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[8U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[8U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[8U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][2U];
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 1U;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_external) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_external));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_timer) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_timer));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_software) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_software));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mie 
        = ((0x304U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mcause 
        = ((0x342U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus 
        = (0x800U | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mpie) 
                      << 7U) | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                                << 3U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
        = ((0x63U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
            ? ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U))))))
                        : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U)))))))
                    : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U))))))
                        : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U))))))))
                : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? 0U : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                + ((0xfffff000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                           >> 0x1fU)))) 
                                                   << 0xcU)) 
                                   | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 7U))))))
                             : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                + ((0xfffff000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                           >> 0x1fU)))) 
                                                   << 0xcU)) 
                                   | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 7U)))))))))
            : 0U);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
                            = ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                           + ((0xfff00000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                          >> 0x1fU)))) 
                                                  << 0x14U)) 
                                              | ((0xff000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 9U)) 
                                                    | ((0x7e0U 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x14U)))))))
                                        : 0U) : 0U)
                                : 0U);
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
                                = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                           + ((0xfffff000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                          >> 0x1fU)))) 
                                                  << 0xcU)) 
                                              | (0xfffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 0x14U))))
                                        : 0U) : 0U);
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o 
        = (1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                >> 2U)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o 
        = (1U & ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                  ? ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                         >> 2U)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                        >> 1U)) & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))
                  : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                      >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                    >> 1U)) & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o 
        = ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o)
            ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o
            : vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                             : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x20U == (0x7fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x19U)))
                                 ? ((0x1fU >= (0x1fU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                     ? VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, 
                                                      (0x1fU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                     : VL_NEGATE_I(
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x1fU)))
                                 : ((0U == (0x7fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x19U)))
                                     ? ((0x1fU >= (0x1fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                            >> (0x1fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                         : 0U) : 0U))
                             : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                 < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? 1U : 0U) : (VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                ? 1U
                                                : 0U))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x1fU >= (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                 ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    << (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                 : 0U) : ((0U == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))
                                           ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                              + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                           : ((0x20U 
                                               == (0x7fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x19U)))
                                               ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                  - vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                               : 0U))))));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
        = ((0x63U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
               ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                   ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                       ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                           >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                           ? 1U : 0U) : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                          < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                          ? 1U : 0U))
                   : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                       ? (VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                           ? 1U : 0U) : (VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                          ? 1U : 0U)))
               : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 0xdU)) & ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2))
                                    : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2)))));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [7U][2U];
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                            = (0x1fU 
                                               & ((0x2000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 7U));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 7U));
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                        = (0x1fU & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 7U)
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 7U)
                                                 : 0U)
                                             : 0U) : 0U)));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                = (0x1fU & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((2U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 0U)
                                                  : 0U)
                                              : ((2U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)))
                                 : 0U) : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U))))));
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                        = (0x1fU & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U)
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U)
                                                 : 0U)
                                             : 0U) : 
                                        ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                          ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U)
                                              : 0U)
                                          : 0U))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? (0x1fU & ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0x14U)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                                 : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U)
                                                   : 0U)
                                               : 0U)))))
                    : 0U);
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0xfU));
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                        = (0x1fU & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU)
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU)
                                                 : 0U)
                                             : 0U) : 
                                        ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                          ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU)
                                              : 0U)
                                          : 0U))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                = (0x1fU & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xfU)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                                 : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                               : 0U))))
                             : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                               : 0U)))
                                 : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                               : 0U))))));
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
            = ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))
                ? VL_ULL(0) : (((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5
                                                [0U][1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5
                                                            [0U][0U]))));
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state)))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i = VL_ULL(0);
        }
    }
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [8U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [8U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [8U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [9U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [9U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [9U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xaU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xaU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xaU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xbU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xbU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xbU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xcU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xcU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xcU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xdU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xdU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xdU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xeU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xeU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xeU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xfU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xfU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xfU][2U];
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                          >> 0xdU)))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 1U;
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                    = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U) & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 3U)) 
                                        & ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                            ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 1U) 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)))
                                            : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 1U) 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  & (((~ 
                                                       ((IData)(vlTOPp->rst_i) 
                                                        | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))) 
                                                      & ((0x4000U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0xdU) 
                                                          | ((~ 
                                                              (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                               >> 0xcU)) 
                                                             | ((0x20U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                     >> 0x19U))) 
                                                                | (0U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                       >> 0x19U))))))
                                                          : 
                                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0xdU) 
                                                          | ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                              >> 0xcU) 
                                                             | ((0U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                     >> 0x19U))) 
                                                                | (0x20U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                       >> 0x19U)))))))) 
                                                     | (~ 
                                                        ((IData)(vlTOPp->rst_i) 
                                                         | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))))))));
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                = ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                    >> 1U) & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)));
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                if (
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))) {
                                                    if (
                                                        (0x20U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x19U)))) {
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                        = ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 3U)) & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 2U)) 
                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 1U) 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                & ((~ (IData)(vlTOPp->rst_i)) 
                                                   & ((0x23U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))))))));
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 ? ((IData)(1U) + (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                             : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? ((IData)(1U) + (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                             : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))));
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o = 0U;
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 1U;
        }
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 0xeU)))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 1U;
        }
    }
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1fU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1fU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1fU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1eU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1eU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1eU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1dU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1dU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1dU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1cU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1cU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1cU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1bU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1bU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1bU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1aU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1aU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1aU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x19U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x19U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x19U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x18U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x18U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x18U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x17U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x17U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x17U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x16U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x16U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x16U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x15U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x15U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x15U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x14U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x14U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x14U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x13U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x13U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x13U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x12U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x12U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x12U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x11U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x11U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x11U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x10U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x10U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x10U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xfU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xfU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xfU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xeU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xeU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xeU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xdU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xdU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xdU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xcU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xcU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xcU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xbU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xbU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xbU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xaU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xaU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xaU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [9U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [9U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [9U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [8U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [8U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [8U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__Vtableidx2 
        = ((0x20U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                     << 5U)) | ((0x10U & ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                                            & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                               | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                           << 4U) | 
                                          (0xfffffff0U 
                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                              << 3U)))) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S)));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt 
        = vlSymsp->TOP__test_top__core_top0.__Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt
        [vlSymsp->TOP__test_top__core_top0.__Vtableidx2];
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o 
        = (((vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o 
             == (0x1fU & (IData)(vlSymsp->TOP__test_top__core_top0.__Vcellout__exe0__csr_raddr_o))) 
            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))
            ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o
            : 0U);
    if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S)))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o 
                        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception)
                            ? (vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o 
                               - (IData)(4U)) : vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o);
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
            ? ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                             ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                      ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mepc)))
                : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                    ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                        ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                 ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                          ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec)
                                              ? ((0xfffffffcU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                  << 2U))
                                              : (0xfffffffcU 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))
                                          : (0xfffffffcU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))))
                    : 0U)) : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o)
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o
                               : 0U));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
                                            = (1U & 
                                               ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xdU) 
                                                | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xcU)));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
                        = (1U & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                  ? ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U) & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 1U) 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))
                                  : ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U) & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 1U) 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
                = (1U & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                          ? ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                              >> 4U) & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 3U)) 
                                        & ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 1U) 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            : ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 1U) 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o))))))
                          : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                              ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((4U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 1U) 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 : 
                                                ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 1U) 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))
                              : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o 
                        = (1U & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o 
                = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 5U) & ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 3U)) 
                                        & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 2U)) 
                                           & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 1U) 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o)))))
                                     : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 3U)) 
                                        & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 2U)) 
                                           & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 1U) 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o 
                        = (1U & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((4U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 1U) 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 : 
                                                ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 1U) 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o 
                = (1U & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                          ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                              ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o)))))
                              : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))
                          : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                              ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))
                              : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))));
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next 
        = ((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
            ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                    | (0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                    ? 3U : 1U) : 0U) : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                         ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                             ? 1U : 3U)
                                         : 0U));
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                            & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                           | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                              & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))
                                           ? 0xfU : 
                                          (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                            & (((0x1fU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xfU)) 
                                                == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                               | ((0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))
                                            ? 7U : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o)
            ? (VL_ULL(1) + (~ vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i))
            : VL_ULL(0));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)));
    vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__aligner_stall_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                     ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                     ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                        >> 0x20U)) : 
                            ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                              ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                         >> 0x20U))
                              : (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                         >> 0x20U))))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                 ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                            >> 0x20U))
                                 : (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                            >> 0x20U)))
                             : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i)))));
    if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state = 0U;
    } else {
        if ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state 
                = ((0x20U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp))
                    ? 2U : 1U);
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state = 1U;
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp = 0U;
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state = 0U;
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o 
        = (VL_NEGATE_I((IData)(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i)))) 
           & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? ((IData)(4U) 
                                           + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o)
                                        : 0U) : 0U)
                                : 0U) : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o)
                                                  : 0U)
                                              : 0U)
                                          : 0U));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o 
                                                | vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o)
                                             : 0U) : 0U)));
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                    = ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? ((0x4000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                   | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x19U)))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                      : 
                                                     VL_NEGATE_I(
                                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                  >> 0x1fU)))
                                                     : 0U))
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                   ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                                                 : 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x1fU 
                                                    >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    << vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                    : 0U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                   + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))
                                             : 0U) : 0U)))
                        : 0U);
            }
        }
    }
}

VL_INLINE_OPT void Vtest_top_core_top::_settle__TOP__test_top__core_top0__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_settle__TOP__test_top__core_top0__2\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
                        = ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                ? (0xffffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((2U == 
                                             (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                             ? (0xffffU 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 0x10U))
                                             : 0U))
                            : ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                ? (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((1U == 
                                             (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                             ? (0xffU 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 8U))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                (0xffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x10U))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x18U))))));
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
                        = ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                            ? vlSymsp->TOP__test_top.__PVT__host_rdata
                           [0U] : ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffff0000U 
                                        & (VL_NEGATE_I((IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                   [0U] 
                                                                   >> 0xfU)))) 
                                           << 0x10U)) 
                                       | (0xffffU & 
                                          vlSymsp->TOP__test_top.__PVT__host_rdata
                                          [0U])) : 
                                   ((2U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                     ? ((0xffff0000U 
                                         & (VL_NEGATE_I((IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                    [0U] 
                                                                    >> 0x1fU)))) 
                                            << 0x10U)) 
                                        | (0xffffU 
                                           & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                              [0U] 
                                              >> 0x10U)))
                                     : 0U)));
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
                            = ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffffff00U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                           [0U] 
                                                                           >> 7U)))) 
                                                   << 8U)) 
                                   | (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                      [0U])) : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                ((0xffffff00U 
                                                  & (VL_NEGATE_I((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                             [0U] 
                                                                             >> 0xfU)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                       [0U] 
                                                       >> 8U)))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                                  ? 
                                                 ((0xffffff00U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                              [0U] 
                                                                              >> 0x17U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x10U)))
                                                  : 
                                                 ((0xffffff00U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                              [0U] 
                                                                              >> 0x1fU)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x18U))))));
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_data_o = 0U;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_data_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_data_o = 0U;
                    }
                }
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_data_o 
                = ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                             ? ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                 ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o
                                 : ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                     ? ((0xffff0000U 
                                         & vlSymsp->TOP__test_top.__PVT__host_rdata
                                         [0U]) | (0xffffU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o))
                                     : ((2U == (3U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                         ? ((0xffff0000U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__host_rdata
                                               [0U]))
                                         : 0U))) : 
                            ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                              ? ((0U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                  ? ((0xffffff00U & 
                                      vlSymsp->TOP__test_top.__PVT__host_rdata
                                      [0U]) | (0xffU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o))
                                  : ((1U == (3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                      ? ((0xffff0000U 
                                          & vlSymsp->TOP__test_top.__PVT__host_rdata
                                          [0U]) | (
                                                   (0xff00U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                      [0U])))
                                      : ((2U == (3U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o))
                                          ? ((0xff000000U 
                                              & vlSymsp->TOP__test_top.__PVT__host_rdata
                                              [0U]) 
                                             | ((0xff0000U 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U])))
                                          : ((0xff000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
                                                 << 0x18U)) 
                                             | (0xffffffU 
                                                & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                [0U])))))
                              : 0U)));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                                  : 0U)
                                              : 0U)));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final 
                = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                   ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                                   : 0U)
                                                  : 0U)
                                              : 0U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                                  : 0U)
                                              : 0U))))
                    : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? (0xfffff000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((0x4000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0x14U)))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 
                                                  ((0xfffff000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                               >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 0x14U)))))
                                                 : 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (0xfffU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 
                                                  ((0xfffff000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                               >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 0x14U))))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 
                                                  ((0xfffff000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                               >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                         >> 0x14U))))))
                                             : 0U) : 0U)))
                        : 0U));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                            = ((0x2000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0xfU))
                                                : (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 0xfU))
                                                    : 0U));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                             : 0U) : 0U)));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final 
                = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? (0xfffff000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                 | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                 ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                                 : 0U)
                                             : 0U) : 0U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                                  : 0U)
                                              : 0U))))
                    : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                             : 0U) : 0U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                                  : 0U)
                                              : 0U)))));
        }
    }
}

VL_INLINE_OPT void Vtest_top_core_top::_sequent__TOP__test_top__core_top0__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_sequent__TOP__test_top__core_top0__3\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__id_exe_csr_we_o;
    CData/*4:0*/ __Vdly__id_exe_rd_o;
    CData/*0:0*/ __Vdly__id_exe_inst_is_load_o;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1;
    CData/*5:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    CData/*0:0*/ __Vdly__csr_file0__DOT__mstatus_mie;
    CData/*0:0*/ __Vdly__csr_file0__DOT__mstatus_mpie;
    SData/*11:0*/ __Vdly____Vcellout__id_exe0__csr_addr_o;
    IData/*31:0*/ __Vdly__if_id_inst_addr_o;
    IData/*31:0*/ __Vdly__id_exe_exception_o;
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[3];
    WData/*64:0*/ __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[3];
    WData/*64:0*/ __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[3];
    WData/*95:0*/ __Vtemp132[3];
    WData/*95:0*/ __Vtemp135[3];
    WData/*95:0*/ __Vtemp141[3];
    WData/*95:0*/ __Vtemp142[3];
    WData/*95:0*/ __Vtemp143[3];
    WData/*95:0*/ __Vtemp146[3];
    WData/*95:0*/ __Vtemp147[3];
    WData/*95:0*/ __Vtemp148[3];
    WData/*95:0*/ __Vtemp154[3];
    WData/*95:0*/ __Vtemp155[3];
    WData/*95:0*/ __Vtemp156[3];
    WData/*95:0*/ __Vtemp159[3];
    WData/*95:0*/ __Vtemp160[3];
    WData/*95:0*/ __Vtemp161[3];
    WData/*95:0*/ __Vtemp164[3];
    WData/*95:0*/ __Vtemp165[3];
    WData/*95:0*/ __Vtemp166[3];
    WData/*95:0*/ __Vtemp169[3];
    WData/*95:0*/ __Vtemp170[3];
    WData/*95:0*/ __Vtemp171[3];
    WData/*95:0*/ __Vtemp174[3];
    WData/*95:0*/ __Vtemp175[3];
    WData/*95:0*/ __Vtemp176[3];
    IData/*31:0*/ __Vtemp179;
    WData/*95:0*/ __Vtemp181[3];
    WData/*95:0*/ __Vtemp182[3];
    WData/*95:0*/ __Vtemp183[3];
    WData/*95:0*/ __Vtemp186[3];
    WData/*95:0*/ __Vtemp187[3];
    WData/*95:0*/ __Vtemp188[3];
    WData/*95:0*/ __Vtemp191[3];
    WData/*95:0*/ __Vtemp192[3];
    WData/*95:0*/ __Vtemp193[3];
    WData/*95:0*/ __Vtemp196[3];
    WData/*95:0*/ __Vtemp197[3];
    WData/*95:0*/ __Vtemp198[3];
    WData/*95:0*/ __Vtemp201[3];
    WData/*95:0*/ __Vtemp202[3];
    WData/*95:0*/ __Vtemp203[3];
    WData/*95:0*/ __Vtemp206[3];
    WData/*95:0*/ __Vtemp207[3];
    WData/*95:0*/ __Vtemp208[3];
    WData/*95:0*/ __Vtemp211[3];
    WData/*95:0*/ __Vtemp212[3];
    WData/*95:0*/ __Vtemp213[3];
    WData/*95:0*/ __Vtemp216[3];
    WData/*95:0*/ __Vtemp217[3];
    WData/*95:0*/ __Vtemp218[3];
    WData/*95:0*/ __Vtemp221[3];
    WData/*95:0*/ __Vtemp222[3];
    WData/*95:0*/ __Vtemp223[3];
    WData/*95:0*/ __Vtemp226[3];
    WData/*95:0*/ __Vtemp227[3];
    WData/*95:0*/ __Vtemp228[3];
    WData/*95:0*/ __Vtemp231[3];
    WData/*95:0*/ __Vtemp232[3];
    WData/*95:0*/ __Vtemp233[3];
    WData/*95:0*/ __Vtemp236[3];
    WData/*95:0*/ __Vtemp237[3];
    WData/*95:0*/ __Vtemp238[3];
    WData/*95:0*/ __Vtemp241[3];
    WData/*95:0*/ __Vtemp242[3];
    WData/*95:0*/ __Vtemp243[3];
    WData/*95:0*/ __Vtemp246[3];
    WData/*95:0*/ __Vtemp247[3];
    WData/*95:0*/ __Vtemp248[3];
    WData/*95:0*/ __Vtemp251[3];
    WData/*95:0*/ __Vtemp252[3];
    WData/*95:0*/ __Vtemp253[3];
    WData/*95:0*/ __Vtemp256[3];
    WData/*95:0*/ __Vtemp257[3];
    WData/*95:0*/ __Vtemp258[3];
    WData/*95:0*/ __Vtemp261[3];
    WData/*95:0*/ __Vtemp262[3];
    WData/*95:0*/ __Vtemp263[3];
    WData/*95:0*/ __Vtemp266[3];
    WData/*95:0*/ __Vtemp267[3];
    WData/*95:0*/ __Vtemp268[3];
    WData/*95:0*/ __Vtemp271[3];
    WData/*95:0*/ __Vtemp272[3];
    WData/*95:0*/ __Vtemp273[3];
    WData/*95:0*/ __Vtemp276[3];
    WData/*95:0*/ __Vtemp277[3];
    WData/*95:0*/ __Vtemp278[3];
    WData/*95:0*/ __Vtemp281[3];
    WData/*95:0*/ __Vtemp282[3];
    WData/*95:0*/ __Vtemp283[3];
    WData/*95:0*/ __Vtemp286[3];
    WData/*95:0*/ __Vtemp287[3];
    WData/*95:0*/ __Vtemp288[3];
    WData/*95:0*/ __Vtemp291[3];
    WData/*95:0*/ __Vtemp292[3];
    WData/*95:0*/ __Vtemp293[3];
    WData/*95:0*/ __Vtemp296[3];
    WData/*95:0*/ __Vtemp297[3];
    WData/*95:0*/ __Vtemp298[3];
    WData/*95:0*/ __Vtemp300[3];
    WData/*95:0*/ __Vtemp305[3];
    WData/*95:0*/ __Vtemp306[3];
    WData/*95:0*/ __Vtemp312[3];
    WData/*95:0*/ __Vtemp313[3];
    WData/*95:0*/ __Vtemp319[3];
    WData/*95:0*/ __Vtemp320[3];
    WData/*95:0*/ __Vtemp326[3];
    WData/*95:0*/ __Vtemp327[3];
    WData/*95:0*/ __Vtemp333[3];
    WData/*95:0*/ __Vtemp334[3];
    WData/*95:0*/ __Vtemp340[3];
    WData/*95:0*/ __Vtemp341[3];
    WData/*95:0*/ __Vtemp347[3];
    WData/*95:0*/ __Vtemp348[3];
    WData/*95:0*/ __Vtemp354[3];
    WData/*95:0*/ __Vtemp355[3];
    WData/*95:0*/ __Vtemp361[3];
    WData/*95:0*/ __Vtemp362[3];
    WData/*95:0*/ __Vtemp368[3];
    WData/*95:0*/ __Vtemp369[3];
    WData/*95:0*/ __Vtemp375[3];
    WData/*95:0*/ __Vtemp376[3];
    WData/*95:0*/ __Vtemp382[3];
    WData/*95:0*/ __Vtemp383[3];
    WData/*95:0*/ __Vtemp389[3];
    WData/*95:0*/ __Vtemp390[3];
    WData/*95:0*/ __Vtemp396[3];
    WData/*95:0*/ __Vtemp397[3];
    WData/*95:0*/ __Vtemp403[3];
    WData/*95:0*/ __Vtemp404[3];
    WData/*95:0*/ __Vtemp410[3];
    WData/*95:0*/ __Vtemp411[3];
    WData/*95:0*/ __Vtemp417[3];
    WData/*95:0*/ __Vtemp418[3];
    WData/*95:0*/ __Vtemp424[3];
    WData/*95:0*/ __Vtemp425[3];
    WData/*95:0*/ __Vtemp431[3];
    WData/*95:0*/ __Vtemp432[3];
    WData/*95:0*/ __Vtemp438[3];
    WData/*95:0*/ __Vtemp439[3];
    WData/*95:0*/ __Vtemp445[3];
    WData/*95:0*/ __Vtemp446[3];
    WData/*95:0*/ __Vtemp452[3];
    WData/*95:0*/ __Vtemp453[3];
    WData/*95:0*/ __Vtemp459[3];
    WData/*95:0*/ __Vtemp460[3];
    WData/*95:0*/ __Vtemp466[3];
    WData/*95:0*/ __Vtemp467[3];
    WData/*95:0*/ __Vtemp473[3];
    WData/*95:0*/ __Vtemp474[3];
    WData/*95:0*/ __Vtemp480[3];
    WData/*95:0*/ __Vtemp481[3];
    WData/*95:0*/ __Vtemp487[3];
    WData/*95:0*/ __Vtemp488[3];
    WData/*95:0*/ __Vtemp494[3];
    WData/*95:0*/ __Vtemp495[3];
    WData/*95:0*/ __Vtemp501[3];
    WData/*95:0*/ __Vtemp502[3];
    WData/*95:0*/ __Vtemp508[3];
    WData/*95:0*/ __Vtemp509[3];
    WData/*95:0*/ __Vtemp515[3];
    WData/*95:0*/ __Vtemp516[3];
    QData/*63:0*/ __Vdly__csr_file0__DOT__minstret;
    // Body
    __Vdly__csr_file0__DOT__minstret = vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__minstret;
    __Vdly__id_exe_exception_o = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o;
    __Vdly__if_id_inst_addr_o = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o;
    vlSymsp->TOP__test_top__core_top0.__Vdly__pc_wire 
        = vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire;
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    __Vdly____Vcellout__id_exe0__csr_addr_o = vlSymsp->TOP__test_top__core_top0.__Vcellout__id_exe0__csr_addr_o;
    __Vdly__id_exe_csr_we_o = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o;
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U];
    __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U];
    __Vdly__id_exe_inst_is_load_o = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o;
    __Vdly__id_exe_rd_o = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o;
    __Vdly__csr_file0__DOT__mstatus_mpie = vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mpie;
    __Vdly__csr_file0__DOT__mstatus_mie = vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32 = 0U;
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk1__DOT__device = 0x20U;
    }
    if ((1U & (~ (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))) 
                  | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk2__DOT__device = 0x20U;
    }
    if ((1U & (~ (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp))) 
                  | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk2__DOT__device = 0x20U;
    }
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk1__DOT__device = 0x10U;
    }
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                             >> 1U))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk1__DOT__device = 8U;
    }
    if ((1U & (~ (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                                >> 1U))) 
                  | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk2__DOT__device = 0x10U;
    }
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                             >> 2U))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk1__DOT__device = 4U;
    }
    if ((1U & (~ (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                                >> 2U))) 
                  | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk2__DOT__device = 8U;
    }
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                             >> 3U))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk1__DOT__device = 2U;
    }
    if ((1U & (~ (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                                >> 3U))) 
                  | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk2__DOT__device = 4U;
    }
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                             >> 4U))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk1__DOT__device = 1U;
    }
    if ((1U & (~ (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                                >> 4U))) 
                  | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk2__DOT__device = 2U;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__lower_half 
        = (0xffffU & (vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__inst_i 
                      >> 0x10U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__Vcellout__id_exe0__csr_addr_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o 
        = ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_external = 0U;
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mcycle 
        = ((IData)(vlTOPp->rst_i) ? VL_ULL(0) : (VL_ULL(1) 
                                                 + vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mcycle));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 2U) 
                                                 & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U)))
                                           ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                           : ((1U & 
                                               (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U))))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)
                                                   ? 0U
                                                   : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o)))));
    if (vlTOPp->rst_i) {
        __Vdly__csr_file0__DOT__minstret = VL_ULL(0);
    } else {
        if (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o) {
            __Vdly__csr_file0__DOT__minstret = (VL_ULL(1) 
                                                + vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__minstret);
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 3U)))
                                          ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)
                                          : ((~ (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                     >> 3U)))) 
                                             & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)) 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o)))));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o 
        = (1U & (~ (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))) 
                    | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception 
        = (0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o);
    __Vdly__id_exe_exception_o = ((IData)(vlTOPp->rst_i)
                                   ? 0U : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                            ? 0U : 
                                           ((1U & (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 2U) 
                                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 3U)))
                                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o
                                             : ((1U 
                                                 & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                     >> 2U) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                        >> 3U))))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))))));
    __Vdly__if_id_inst_addr_o = ((IData)(vlTOPp->rst_i)
                                  ? 0x80U : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o) 
                                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                              ? 0x80U
                                              : ((1U 
                                                  & (((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i) 
                                                      >> 1U) 
                                                     & ((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i) 
                                                        >> 2U)))
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                                  : 
                                                 ((1U 
                                                   & (((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i) 
                                                       >> 1U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i) 
                                                          >> 2U))))
                                                   ? 0x80U
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))));
    vlSymsp->TOP__test_top__core_top0.__Vdly__pc_wire 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
            ? (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o) 
                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o))
                ? vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o
                : ((1U & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                          | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__aligner_stall_o)))
                    ? vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire
                    : ((IData)(4U) + vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))
            : 0x80U);
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o)
            ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o
            : vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc);
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o 
        = (1U & (~ (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                                  >> 4U))) 
                    | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o 
        = (1U & (~ (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                                  >> 3U))) 
                    | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o 
        = (1U & (~ (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                                  >> 2U))) 
                    | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o 
        = (1U & (~ (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                                  >> 1U))) 
                    | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o 
        = (1U & (~ (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp))) 
                    | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))));
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) {
        if ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32 
                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o;
        }
    }
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) {
        if ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt = 0x20U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
                = (0x3fU & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt) 
                            - (IData)(1U)));
        }
    }
    __Vdly____Vcellout__id_exe0__csr_addr_o = ((IData)(vlTOPp->rst_i)
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                        >> 2U) 
                                                       & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 3U)))
                                                    ? (IData)(vlSymsp->TOP__test_top__core_top0.__Vcellout__id_exe0__csr_addr_o)
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                         >> 2U) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                            >> 3U))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)
                                                      ? 0U
                                                      : (IData)(vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o)))));
    __Vdly____Vcellout__id_exe0__csr_addr_o = ((IData)(vlTOPp->rst_i)
                                                ? 0U
                                                : (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                         >> 2U) 
                                                        & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                           >> 3U)))
                                                     ? (IData)(vlSymsp->TOP__test_top__core_top0.__Vcellout__id_exe0__csr_addr_o)
                                                     : 
                                                    ((1U 
                                                      & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 2U) 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                             >> 3U))))
                                                      ? 0U
                                                      : (IData)(vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i 
        = (3U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S));
    __Vdly__id_exe_csr_we_o = ((~ (IData)(vlTOPp->rst_i)) 
                               & ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                          >> 2U) & 
                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                          >> 3U))) ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o)
                                   : ((~ (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                           >> 2U) & 
                                          (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                              >> 3U)))) 
                                      & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o)))));
    __Vdly__id_exe_csr_we_o = ((~ (IData)(vlTOPp->rst_i)) 
                               & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o) 
                                      | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))) 
                                  & ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                             >> 2U) 
                                            & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                               >> 3U)))
                                      ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o)
                                      : ((~ (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                              >> 2U) 
                                             & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 3U)))) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o)))));
    if (((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) {
        if ((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)) {
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = ((1U & __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U]) 
                   | (0xfffffffeU & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                                     << 1U)));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = (1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
                         >> 0x1fU));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = (0xfffffffeU & __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U]);
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] = 0xffffffffU;
        } else {
            VL_EXTEND_WI(65,32, __Vtemp132, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
                = __Vtemp132[0U];
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = __Vtemp132[1U];
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = __Vtemp132[2U];
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))) {
            __Vtemp135[1U] = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub)
                               ? ((1U & ((IData)((((QData)((IData)(
                                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U])))) 
                                         >> 0x1fU)) 
                                  | (0xfffffffeU & 
                                     ((IData)(((((QData)((IData)(
                                                                 vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U]))) 
                                               >> 0x20U)) 
                                      << 1U))) : ((1U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U])))) 
                                                      >> 0x1fU)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(
                                                                ((((QData)((IData)(
                                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]))) 
                                                                 >> 0x20U)) 
                                                        << 1U))));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
                = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub)
                    ? (1U | (0xfffffffeU & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U])))) 
                                            << 1U)))
                    : (0xfffffffeU & ((IData)((((QData)((IData)(
                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U])))) 
                                      << 1U)));
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                = __Vtemp135[1U];
            __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub)
                    ? (1U & ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U]))) 
                                      >> 0x20U)) >> 0x1fU))
                    : (1U & ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]))) 
                                      >> 0x20U)) >> 0x1fU)));
        }
    }
    __Vdly__id_exe_inst_is_load_o = ((~ (IData)(vlTOPp->rst_i)) 
                                     & ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 3U)))
                                         ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o)
                                         : ((~ (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U)))) 
                                            & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)) 
                                               & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o))))));
    __Vdly__id_exe_inst_is_load_o = ((~ (IData)(vlTOPp->rst_i)) 
                                     & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))) 
                                        & ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                   >> 2U) 
                                                  & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                     >> 3U)))
                                            ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o)
                                            : ((~ (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 2U) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                       >> 3U)))) 
                                               & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o))))));
    __Vdly__id_exe_rd_o = ((IData)(vlTOPp->rst_i) ? 0U
                            : (0x1fU & ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 3U)))
                                         ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)
                                         : ((1U & (
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 2U) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                       >> 3U))))
                                             ? 0U : 
                                            ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)
                                              ? 0U : 
                                             (vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                              >> 7U))))));
    __Vdly__id_exe_rd_o = ((IData)(vlTOPp->rst_i) ? 0U
                            : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                                ? 0U : (0x1fU & ((1U 
                                                  & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 2U) 
                                                     & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                        >> 3U)))
                                                  ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)
                                                  : 
                                                 ((1U 
                                                   & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                       >> 2U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                          >> 3U))))
                                                   ? 0U
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                   >> 7U))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause_rem = 0U;
    } else {
        if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause_rem = 0U;
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mcause) {
                vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause_rem 
                    = (0x7ffffffU & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                     >> 4U));
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result 
        = (((3U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S)) 
            & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)))
            ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation)
                ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]
                : ((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                    << 0x1fU) | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                 >> 1U))) : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                              ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_software 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mie)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                                   >> 3U)
                                                : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_software))));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_timer 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mie)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                                   >> 7U)
                                                : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_timer))));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_external 
        = (1U & ((~ (IData)(vlTOPp->rst_i)) & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mie)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                                   >> 0xbU)
                                                : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_external))));
    if (vlTOPp->rst_i) {
        __Vdly__csr_file0__DOT__mstatus_mie = 0U;
        __Vdly__csr_file0__DOT__mstatus_mpie = 1U;
    } else {
        if ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus)) {
            __Vdly__csr_file0__DOT__mstatus_mie = (1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                                                      >> 3U));
            __Vdly__csr_file0__DOT__mstatus_mpie = 
                (1U & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                       >> 7U));
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o) {
                __Vdly__csr_file0__DOT__mstatus_mpie 
                    = vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie;
                __Vdly__csr_file0__DOT__mstatus_mie = 0U;
            } else {
                if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o) {
                    __Vdly__csr_file0__DOT__mstatus_mie 
                        = vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mpie;
                    __Vdly__csr_file0__DOT__mstatus_mpie = 1U;
                } else {
                    __Vdly__csr_file0__DOT__mstatus_mpie 
                        = vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mpie;
                    __Vdly__csr_file0__DOT__mstatus_mie 
                        = (1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus);
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtval = 0U;
    } else {
        if (((0x343U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtval 
                = vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mscratch = 0U;
    } else {
        if (((0x340U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mscratch 
                = vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o;
        }
    }
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                             >> 3U))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0 = 1U;
    } else {
        __Vtemp141[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [0U][0U];
        __Vtemp141[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [0U][1U];
        __Vtemp141[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [0U][2U];
        __Vtemp142[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [1U][0U];
        __Vtemp142[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [1U][1U];
        __Vtemp142[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp143, __Vtemp141, __Vtemp142);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[0U] 
            = __Vtemp143[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[1U] 
            = __Vtemp143[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[2U] 
            = (1U & __Vtemp143[2U]);
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2 = 1U;
        __Vtemp146[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [2U][0U];
        __Vtemp146[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [2U][1U];
        __Vtemp146[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [2U][2U];
        __Vtemp147[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [3U][0U];
        __Vtemp147[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [3U][1U];
        __Vtemp147[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp148, __Vtemp146, __Vtemp147);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[0U] 
            = __Vtemp148[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[1U] 
            = __Vtemp148[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[2U] 
            = (1U & __Vtemp148[2U]);
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec = 0U;
    } else {
        if (((0x305U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec 
                = vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o;
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mepc 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o)
                                           ? (0xfffffffcU 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o)
                                           : (((0x341U 
                                                == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
                                               & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))
                                               ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o
                                               : vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mepc)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause = 0U;
    } else {
        if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause 
                = vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o;
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mcause) {
                vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause 
                    = (0xfU & vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o);
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__interrupt_type = 0U;
    } else {
        if (vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o) {
            vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__interrupt_type 
                = vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o;
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mcause) {
                vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__interrupt_type 
                    = (1U & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
                             >> 0x1fU));
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 2U) 
                                                 & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U)))
                                           ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                                           : ((1U & 
                                               (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U))))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                                    & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                                       == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                    ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                     & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                        == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                     : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 2U) 
                                                 & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U)))
                                           ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                                           : ((1U & 
                                               (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U))))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                                    & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                                       == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                                    ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                     & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                        == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                                     : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_timer 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                        [1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                         [0U]))) 
                                                      - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                     >> 0x3fU))) 
                                         & (VL_ULL(0) 
                                            != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                             >> 2U))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0 = 1U;
    } else {
        __Vtemp154[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [0U][0U];
        __Vtemp154[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [0U][1U];
        __Vtemp154[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [0U][2U];
        __Vtemp155[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [1U][0U];
        __Vtemp155[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [1U][1U];
        __Vtemp155[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp156, __Vtemp154, __Vtemp155);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[0U] 
            = __Vtemp156[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[1U] 
            = __Vtemp156[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[2U] 
            = (1U & __Vtemp156[2U]);
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4 = 1U;
        __Vtemp159[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [2U][0U];
        __Vtemp159[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [2U][1U];
        __Vtemp159[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [2U][2U];
        __Vtemp160[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [3U][0U];
        __Vtemp160[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [3U][1U];
        __Vtemp160[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp161, __Vtemp159, __Vtemp160);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[0U] 
            = __Vtemp161[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[1U] 
            = __Vtemp161[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[2U] 
            = (1U & __Vtemp161[2U]);
        __Vtemp164[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [4U][0U];
        __Vtemp164[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [4U][1U];
        __Vtemp164[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [4U][2U];
        __Vtemp165[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [5U][0U];
        __Vtemp165[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [5U][1U];
        __Vtemp165[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp166, __Vtemp164, __Vtemp165);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[0U] 
            = __Vtemp166[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[1U] 
            = __Vtemp166[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[2U] 
            = (1U & __Vtemp166[2U]);
        __Vtemp169[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [6U][0U];
        __Vtemp169[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [6U][1U];
        __Vtemp169[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [6U][2U];
        __Vtemp170[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [7U][0U];
        __Vtemp170[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [7U][1U];
        __Vtemp170[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp171, __Vtemp169, __Vtemp170);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[0U] 
            = __Vtemp171[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[1U] 
            = __Vtemp171[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[2U] 
            = (1U & __Vtemp171[2U]);
    }
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                             >> 4U))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0 = 1U;
    } else {
        __Vtemp174[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [0U][0U];
        __Vtemp174[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [0U][1U];
        __Vtemp174[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [0U][2U];
        __Vtemp175[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [1U][0U];
        __Vtemp175[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [1U][1U];
        __Vtemp175[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp176, __Vtemp174, __Vtemp175);
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound2[0U] 
            = __Vtemp176[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound2[1U] 
            = __Vtemp176[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound2[2U] 
            = (1U & __Vtemp176[2U]);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[0U] 
            = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound2[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[1U] 
            = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound2[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[2U] 
            = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound2[2U];
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1 = 1U;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
        = ((IData)(vlTOPp->rst_i) ? 0x13U : ((1U & 
                                              (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 3U)))
                                              ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o
                                              : ((1U 
                                                  & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                      >> 2U) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                         >> 3U))))
                                                  ? 0x13U
                                                  : 
                                                 ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)
                                                   ? 0x13U
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o))));
    __Vtemp179 = ((IData)(vlTOPp->rst_i) ? 0x13U : 
                  (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o) 
                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o))
                    ? 0x13U : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i) 
                                       >> 1U) & ((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i) 
                                                 >> 2U)))
                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i) 
                                           >> 1U) & 
                                          (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i) 
                                              >> 2U))))
                                    ? 0x13U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                                                ? (
                                                   (vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1ffffcU 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)] 
                                                    << 0x18U) 
                                                   | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                       [
                                                       (0x1fffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (0x1ffffcU 
                                                            & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                       << 0x10U) 
                                                      | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                          [
                                                          (0x1fffffU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x1ffffcU 
                                                               & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                          << 8U) 
                                                         | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                         [
                                                         (0x1fffffU 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (0x1ffffcU 
                                                              & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))])))
                                                : 0U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
        = __Vtemp179;
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_software 
        = ((~ (IData)(vlTOPp->rst_i)) & (0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem));
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                             >> 1U))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0 = 1U;
    } else {
        __Vtemp181[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0U][0U];
        __Vtemp181[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0U][1U];
        __Vtemp181[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0U][2U];
        __Vtemp182[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [1U][0U];
        __Vtemp182[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [1U][1U];
        __Vtemp182[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp183, __Vtemp181, __Vtemp182);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[0U] 
            = __Vtemp183[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[1U] 
            = __Vtemp183[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[2U] 
            = (1U & __Vtemp183[2U]);
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8 = 1U;
        __Vtemp186[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [2U][0U];
        __Vtemp186[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [2U][1U];
        __Vtemp186[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [2U][2U];
        __Vtemp187[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [3U][0U];
        __Vtemp187[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [3U][1U];
        __Vtemp187[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp188, __Vtemp186, __Vtemp187);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[0U] 
            = __Vtemp188[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[1U] 
            = __Vtemp188[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[2U] 
            = (1U & __Vtemp188[2U]);
        __Vtemp191[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [4U][0U];
        __Vtemp191[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [4U][1U];
        __Vtemp191[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [4U][2U];
        __Vtemp192[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [5U][0U];
        __Vtemp192[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [5U][1U];
        __Vtemp192[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp193, __Vtemp191, __Vtemp192);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[0U] 
            = __Vtemp193[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[1U] 
            = __Vtemp193[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[2U] 
            = (1U & __Vtemp193[2U]);
        __Vtemp196[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [6U][0U];
        __Vtemp196[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [6U][1U];
        __Vtemp196[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [6U][2U];
        __Vtemp197[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [7U][0U];
        __Vtemp197[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [7U][1U];
        __Vtemp197[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp198, __Vtemp196, __Vtemp197);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[0U] 
            = __Vtemp198[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[1U] 
            = __Vtemp198[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[2U] 
            = (1U & __Vtemp198[2U]);
        __Vtemp201[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [8U][0U];
        __Vtemp201[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [8U][1U];
        __Vtemp201[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [8U][2U];
        __Vtemp202[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [9U][0U];
        __Vtemp202[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [9U][1U];
        __Vtemp202[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [9U][2U];
        VL_ADD_W(3, __Vtemp203, __Vtemp201, __Vtemp202);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[0U] 
            = __Vtemp203[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[1U] 
            = __Vtemp203[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[2U] 
            = (1U & __Vtemp203[2U]);
        __Vtemp206[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][0U];
        __Vtemp206[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][1U];
        __Vtemp206[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][2U];
        __Vtemp207[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][0U];
        __Vtemp207[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][1U];
        __Vtemp207[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][2U];
        VL_ADD_W(3, __Vtemp208, __Vtemp206, __Vtemp207);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[0U] 
            = __Vtemp208[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[1U] 
            = __Vtemp208[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[2U] 
            = (1U & __Vtemp208[2U]);
        __Vtemp211[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][0U];
        __Vtemp211[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][1U];
        __Vtemp211[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][2U];
        __Vtemp212[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][0U];
        __Vtemp212[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][1U];
        __Vtemp212[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][2U];
        VL_ADD_W(3, __Vtemp213, __Vtemp211, __Vtemp212);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[0U] 
            = __Vtemp213[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[1U] 
            = __Vtemp213[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[2U] 
            = (1U & __Vtemp213[2U]);
        __Vtemp216[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][0U];
        __Vtemp216[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][1U];
        __Vtemp216[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][2U];
        __Vtemp217[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][0U];
        __Vtemp217[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][1U];
        __Vtemp217[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][2U];
        VL_ADD_W(3, __Vtemp218, __Vtemp216, __Vtemp217);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[0U] 
            = __Vtemp218[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[1U] 
            = __Vtemp218[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[2U] 
            = (1U & __Vtemp218[2U]);
    }
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0 = 1U;
    } else {
        __Vtemp221[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0U][0U];
        __Vtemp221[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0U][1U];
        __Vtemp221[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0U][2U];
        __Vtemp222[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [1U][0U];
        __Vtemp222[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [1U][1U];
        __Vtemp222[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp223, __Vtemp221, __Vtemp222);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[0U] 
            = __Vtemp223[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[1U] 
            = __Vtemp223[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[2U] 
            = (1U & __Vtemp223[2U]);
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16 = 1U;
        __Vtemp226[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [2U][0U];
        __Vtemp226[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [2U][1U];
        __Vtemp226[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [2U][2U];
        __Vtemp227[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [3U][0U];
        __Vtemp227[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [3U][1U];
        __Vtemp227[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp228, __Vtemp226, __Vtemp227);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[0U] 
            = __Vtemp228[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[1U] 
            = __Vtemp228[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[2U] 
            = (1U & __Vtemp228[2U]);
        __Vtemp231[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [4U][0U];
        __Vtemp231[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [4U][1U];
        __Vtemp231[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [4U][2U];
        __Vtemp232[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [5U][0U];
        __Vtemp232[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [5U][1U];
        __Vtemp232[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp233, __Vtemp231, __Vtemp232);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[0U] 
            = __Vtemp233[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[1U] 
            = __Vtemp233[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[2U] 
            = (1U & __Vtemp233[2U]);
        __Vtemp236[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [6U][0U];
        __Vtemp236[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [6U][1U];
        __Vtemp236[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [6U][2U];
        __Vtemp237[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [7U][0U];
        __Vtemp237[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [7U][1U];
        __Vtemp237[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp238, __Vtemp236, __Vtemp237);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[0U] 
            = __Vtemp238[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[1U] 
            = __Vtemp238[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[2U] 
            = (1U & __Vtemp238[2U]);
        __Vtemp241[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [8U][0U];
        __Vtemp241[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [8U][1U];
        __Vtemp241[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [8U][2U];
        __Vtemp242[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [9U][0U];
        __Vtemp242[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [9U][1U];
        __Vtemp242[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [9U][2U];
        VL_ADD_W(3, __Vtemp243, __Vtemp241, __Vtemp242);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[0U] 
            = __Vtemp243[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[1U] 
            = __Vtemp243[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[2U] 
            = (1U & __Vtemp243[2U]);
        __Vtemp246[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][0U];
        __Vtemp246[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][1U];
        __Vtemp246[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][2U];
        __Vtemp247[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][0U];
        __Vtemp247[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][1U];
        __Vtemp247[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][2U];
        VL_ADD_W(3, __Vtemp248, __Vtemp246, __Vtemp247);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[0U] 
            = __Vtemp248[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[1U] 
            = __Vtemp248[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[2U] 
            = (1U & __Vtemp248[2U]);
        __Vtemp251[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][0U];
        __Vtemp251[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][1U];
        __Vtemp251[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][2U];
        __Vtemp252[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][0U];
        __Vtemp252[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][1U];
        __Vtemp252[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][2U];
        VL_ADD_W(3, __Vtemp253, __Vtemp251, __Vtemp252);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[0U] 
            = __Vtemp253[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[1U] 
            = __Vtemp253[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[2U] 
            = (1U & __Vtemp253[2U]);
        __Vtemp256[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][0U];
        __Vtemp256[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][1U];
        __Vtemp256[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][2U];
        __Vtemp257[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][0U];
        __Vtemp257[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][1U];
        __Vtemp257[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][2U];
        VL_ADD_W(3, __Vtemp258, __Vtemp256, __Vtemp257);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[0U] 
            = __Vtemp258[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[1U] 
            = __Vtemp258[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[2U] 
            = (1U & __Vtemp258[2U]);
        __Vtemp261[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][0U];
        __Vtemp261[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][1U];
        __Vtemp261[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][2U];
        __Vtemp262[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][0U];
        __Vtemp262[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][1U];
        __Vtemp262[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][2U];
        VL_ADD_W(3, __Vtemp263, __Vtemp261, __Vtemp262);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[0U] 
            = __Vtemp263[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[1U] 
            = __Vtemp263[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[2U] 
            = (1U & __Vtemp263[2U]);
        __Vtemp266[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][0U];
        __Vtemp266[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][1U];
        __Vtemp266[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][2U];
        __Vtemp267[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][0U];
        __Vtemp267[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][1U];
        __Vtemp267[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][2U];
        VL_ADD_W(3, __Vtemp268, __Vtemp266, __Vtemp267);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[0U] 
            = __Vtemp268[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[1U] 
            = __Vtemp268[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[2U] 
            = (1U & __Vtemp268[2U]);
        __Vtemp271[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][0U];
        __Vtemp271[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][1U];
        __Vtemp271[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][2U];
        __Vtemp272[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][0U];
        __Vtemp272[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][1U];
        __Vtemp272[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][2U];
        VL_ADD_W(3, __Vtemp273, __Vtemp271, __Vtemp272);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[0U] 
            = __Vtemp273[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[1U] 
            = __Vtemp273[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[2U] 
            = (1U & __Vtemp273[2U]);
        __Vtemp276[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][0U];
        __Vtemp276[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][1U];
        __Vtemp276[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][2U];
        __Vtemp277[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][0U];
        __Vtemp277[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][1U];
        __Vtemp277[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][2U];
        VL_ADD_W(3, __Vtemp278, __Vtemp276, __Vtemp277);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[0U] 
            = __Vtemp278[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[1U] 
            = __Vtemp278[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[2U] 
            = (1U & __Vtemp278[2U]);
        __Vtemp281[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][0U];
        __Vtemp281[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][1U];
        __Vtemp281[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][2U];
        __Vtemp282[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][0U];
        __Vtemp282[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][1U];
        __Vtemp282[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][2U];
        VL_ADD_W(3, __Vtemp283, __Vtemp281, __Vtemp282);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[0U] 
            = __Vtemp283[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[1U] 
            = __Vtemp283[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[2U] 
            = (1U & __Vtemp283[2U]);
        __Vtemp286[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][0U];
        __Vtemp286[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][1U];
        __Vtemp286[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][2U];
        __Vtemp287[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][0U];
        __Vtemp287[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][1U];
        __Vtemp287[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][2U];
        VL_ADD_W(3, __Vtemp288, __Vtemp286, __Vtemp287);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[0U] 
            = __Vtemp288[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[1U] 
            = __Vtemp288[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[2U] 
            = (1U & __Vtemp288[2U]);
        __Vtemp291[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][0U];
        __Vtemp291[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][1U];
        __Vtemp291[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][2U];
        __Vtemp292[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][0U];
        __Vtemp292[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][1U];
        __Vtemp292[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][2U];
        VL_ADD_W(3, __Vtemp293, __Vtemp291, __Vtemp292);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[0U] 
            = __Vtemp293[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[1U] 
            = __Vtemp293[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[2U] 
            = (1U & __Vtemp293[2U]);
        __Vtemp296[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][0U];
        __Vtemp296[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][1U];
        __Vtemp296[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][2U];
        __Vtemp297[0U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][0U];
        __Vtemp297[1U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][1U];
        __Vtemp297[2U] = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][2U];
        VL_ADD_W(3, __Vtemp298, __Vtemp296, __Vtemp297);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[0U] 
            = __Vtemp298[0U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[1U] 
            = __Vtemp298[1U];
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[2U] 
            = (1U & __Vtemp298[2U]);
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o);
    if ((1U & (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))) 
               | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req))))) {
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0 = 1U;
    } else {
        VL_EXTEND_WI(65,32, __Vtemp300, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[0U] 
            = ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp300[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[1U] 
            = ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp300[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[2U] 
            = ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp300[2U] : 0U);
        __Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32 = 1U;
        VL_EXTEND_WI(65,32, __Vtemp305, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp306, __Vtemp305, 1U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[0U] 
            = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp306[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[1U] 
            = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp306[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[2U] 
            = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp306[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp312, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp313, __Vtemp312, 2U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[0U] 
            = ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp313[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[1U] 
            = ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp313[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[2U] 
            = ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp313[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp319, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp320, __Vtemp319, 3U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[0U] 
            = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp320[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[1U] 
            = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp320[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[2U] 
            = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp320[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp326, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp327, __Vtemp326, 4U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[0U] 
            = ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp327[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[1U] 
            = ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp327[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[2U] 
            = ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp327[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp333, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp334, __Vtemp333, 5U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[0U] 
            = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp334[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[1U] 
            = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp334[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[2U] 
            = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp334[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp340, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp341, __Vtemp340, 6U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[0U] 
            = ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp341[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[1U] 
            = ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp341[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[2U] 
            = ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp341[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp347, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp348, __Vtemp347, 7U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[0U] 
            = ((0x80U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp348[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[1U] 
            = ((0x80U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp348[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[2U] 
            = ((0x80U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp348[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp354, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp355, __Vtemp354, 8U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[0U] 
            = ((0x100U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp355[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[1U] 
            = ((0x100U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp355[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[2U] 
            = ((0x100U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp355[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp361, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp362, __Vtemp361, 9U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[0U] 
            = ((0x200U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp362[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[1U] 
            = ((0x200U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp362[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[2U] 
            = ((0x200U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp362[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp368, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp369, __Vtemp368, 0xaU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[0U] 
            = ((0x400U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp369[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[1U] 
            = ((0x400U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp369[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[2U] 
            = ((0x400U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp369[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp375, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp376, __Vtemp375, 0xbU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[0U] 
            = ((0x800U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp376[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[1U] 
            = ((0x800U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp376[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[2U] 
            = ((0x800U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp376[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp382, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp383, __Vtemp382, 0xcU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[0U] 
            = ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp383[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[1U] 
            = ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp383[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[2U] 
            = ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp383[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp389, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp390, __Vtemp389, 0xdU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[0U] 
            = ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp390[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[1U] 
            = ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp390[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[2U] 
            = ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp390[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp396, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp397, __Vtemp396, 0xeU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[0U] 
            = ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp397[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[1U] 
            = ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp397[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[2U] 
            = ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp397[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp403, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp404, __Vtemp403, 0xfU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[0U] 
            = ((0x8000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp404[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[1U] 
            = ((0x8000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp404[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[2U] 
            = ((0x8000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp404[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp410, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp411, __Vtemp410, 0x10U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[0U] 
            = ((0x10000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp411[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[1U] 
            = ((0x10000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp411[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[2U] 
            = ((0x10000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp411[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp417, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp418, __Vtemp417, 0x11U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[0U] 
            = ((0x20000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp418[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[1U] 
            = ((0x20000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp418[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[2U] 
            = ((0x20000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp418[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp424, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp425, __Vtemp424, 0x12U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[0U] 
            = ((0x40000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp425[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[1U] 
            = ((0x40000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp425[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[2U] 
            = ((0x40000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp425[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp431, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp432, __Vtemp431, 0x13U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[0U] 
            = ((0x80000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp432[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[1U] 
            = ((0x80000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp432[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[2U] 
            = ((0x80000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp432[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp438, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp439, __Vtemp438, 0x14U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[0U] 
            = ((0x100000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp439[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[1U] 
            = ((0x100000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp439[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[2U] 
            = ((0x100000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp439[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp445, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp446, __Vtemp445, 0x15U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[0U] 
            = ((0x200000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp446[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[1U] 
            = ((0x200000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp446[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[2U] 
            = ((0x200000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp446[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp452, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp453, __Vtemp452, 0x16U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[0U] 
            = ((0x400000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp453[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[1U] 
            = ((0x400000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp453[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[2U] 
            = ((0x400000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp453[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp459, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp460, __Vtemp459, 0x17U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[0U] 
            = ((0x800000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp460[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[1U] 
            = ((0x800000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp460[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[2U] 
            = ((0x800000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp460[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp466, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp467, __Vtemp466, 0x18U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[0U] 
            = ((0x1000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp467[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[1U] 
            = ((0x1000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp467[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[2U] 
            = ((0x1000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp467[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp473, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp474, __Vtemp473, 0x19U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[0U] 
            = ((0x2000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp474[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[1U] 
            = ((0x2000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp474[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[2U] 
            = ((0x2000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp474[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp480, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp481, __Vtemp480, 0x1aU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[0U] 
            = ((0x4000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp481[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[1U] 
            = ((0x4000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp481[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[2U] 
            = ((0x4000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp481[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp487, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp488, __Vtemp487, 0x1bU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[0U] 
            = ((0x8000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp488[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[1U] 
            = ((0x8000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp488[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[2U] 
            = ((0x8000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp488[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp494, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp495, __Vtemp494, 0x1cU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[0U] 
            = ((0x10000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp495[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[1U] 
            = ((0x10000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp495[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[2U] 
            = ((0x10000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp495[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp501, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp502, __Vtemp501, 0x1dU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[0U] 
            = ((0x20000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp502[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[1U] 
            = ((0x20000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp502[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[2U] 
            = ((0x20000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp502[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp508, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp509, __Vtemp508, 0x1eU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[0U] 
            = ((0x40000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp509[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[1U] 
            = ((0x40000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp509[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[2U] 
            = ((0x40000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp509[2U]) : 0U);
        VL_EXTEND_WI(65,32, __Vtemp515, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        VL_SHIFTL_WWI(65,65,32, __Vtemp516, __Vtemp515, 0x1fU);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[0U] 
            = ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp516[0U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[1U] 
            = ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? __Vtemp516[1U] : 0U);
        __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[2U] 
            = ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)
                ? (1U & __Vtemp516[2U]) : 0U);
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__minstret 
        = __Vdly__csr_file0__DOT__minstret;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt;
    vlSymsp->TOP__test_top__core_top0.__Vcellout__id_exe0__csr_addr_o 
        = __Vdly____Vcellout__id_exe0__csr_addr_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o 
        = __Vdly__id_exe_csr_we_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o 
        = __Vdly__id_exe_inst_is_load_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o 
        = __Vdly__id_exe_rd_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
        = __Vdly__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mpie 
        = __Vdly__csr_file0__DOT__mstatus_mpie;
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[2U];
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[2U];
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[2U];
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[2U];
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[2U];
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][2U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][0U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][1U] = 0U;
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32) {
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[2U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][0U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[0U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][1U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[1U];
        vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][2U] 
            = __Vdlyvval__exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[2U];
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o = 0U;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x3eU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x1fU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o) 
              << 5U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x2fU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o) 
              << 4U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x37U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o) 
              << 3U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x3bU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o) 
              << 2U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp 
        = ((0x3dU & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp)) 
           | ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o) 
              << 1U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
           >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[1U] 
        = (IData)((VL_ULL(0x1ffffffff) & ((QData)((IData)(
                                                          vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                          - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp[2U] 
        = (IData)(((VL_ULL(0x1ffffffff) & ((QData)((IData)(
                                                           vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                           - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                   >> 0x20U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S 
        = ((1U & (((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o))) 
                  | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)))
            ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next));
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                  >> 2U) 
                                                 & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U)))
                                           ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o
                                           : ((1U & 
                                               (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                                                    >> 3U))))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o)
                                                   ? 0U
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][2U];
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 0U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))) {
            if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 0xbU;
            } else {
                if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 3U;
                } else {
                    if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 7U;
                    } else {
                        if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o = 0xbU;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o;
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 0U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))) {
            if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 1U;
            } else {
                if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 1U;
                } else {
                    if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 1U;
                    } else {
                        if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2 
        = (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
           == vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust 
        = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                  ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o) 
                 >> 0x1fU));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & (1U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 0x19U))));
    vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire 
        = (1U & (~ (IData)(vlTOPp->rst_i)));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
           & (1U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                              >> 0x19U))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[8U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[8U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[8U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[9U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[9U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[9U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xaU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xaU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xaU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xbU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xbU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xbU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xcU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xcU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xcU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xdU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xdU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xdU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xeU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xeU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xeU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xfU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xfU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0xfU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1fU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1fU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1fU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1eU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1eU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1eU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1dU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1dU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1dU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1cU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1cU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1cU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1bU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1bU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1bU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1aU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1aU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x1aU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x19U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x19U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x19U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x18U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x18U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x18U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x17U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x17U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x17U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x16U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x16U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x16U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x15U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x15U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x15U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x14U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x14U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x14U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x13U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x13U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x13U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x12U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x12U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x12U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x11U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x11U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x11U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x10U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x10U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0x10U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xfU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xfU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xfU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xeU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xeU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xeU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xdU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xdU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xdU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xcU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xcU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xcU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xbU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xbU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xbU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xaU][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xaU][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0xaU][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[9U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[9U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[9U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[8U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[8U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[8U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][0U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][1U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o 
        = __Vdly__if_id_inst_addr_o;
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_external) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_external));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_software) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_software));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_timer) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_timer));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie 
        = __Vdly__csr_file0__DOT__mstatus_mie;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
        = ((0x63U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
           & ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
               ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                   ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                       ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                           >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                           ? 1U : 0U) : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                          < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                          ? 1U : 0U))
                   : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                       ? (VL_GTES_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                           ? 1U : 0U) : (VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                          ? 1U : 0U)))
               : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 0xdU)) & ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2))
                                    : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2)))));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [8U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [8U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [8U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [9U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [9U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [9U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xaU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xaU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xaU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xbU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xbU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xbU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xcU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xcU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xcU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xdU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xdU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xdU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xeU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xeU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xeU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xfU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xfU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1
        [0xfU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1fU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1fU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1fU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1eU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1eU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1eU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1dU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1dU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1dU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1cU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1cU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1cU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1bU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1bU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1bU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1aU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1aU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x1aU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x19U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x19U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x19U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x18U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x18U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x18U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x17U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x17U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x17U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x16U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x16U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x16U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x15U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x15U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x15U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x14U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x14U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x14U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x13U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x13U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x13U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x12U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x12U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x12U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x11U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x11U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x11U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x10U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x10U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0x10U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xfU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xfU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xfU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xeU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xeU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xeU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xdU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xdU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xdU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xcU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xcU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xcU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xbU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xbU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xbU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xaU][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xaU][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0xaU][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [9U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [9U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [9U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [8U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [8U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [8U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [7U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [7U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [7U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [6U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [6U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [6U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [5U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [5U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [5U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [4U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [4U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [4U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [3U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [3U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [3U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [2U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [2U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [2U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [1U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [1U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [1U][2U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][0U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0U][0U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][1U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0U][1U];
    vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][2U] 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp
        [0U][2U];
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
        = ((0x63U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
            ? ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U))))))
                        : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U)))))))
                    : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U))))))
                        : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 7U))))))))
                : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                    ? 0U : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                + ((0xfffff000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                           >> 0x1fU)))) 
                                                   << 0xcU)) 
                                   | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 7U))))))
                             : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                + ((0xfffff000U & (
                                                   VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                           >> 0x1fU)))) 
                                                   << 0xcU)) 
                                   | ((0x800U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 7U)))))))))
            : 0U);
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mie 
        = ((0x304U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mcause 
        = ((0x342U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
           & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus 
        = (0x800U | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mpie) 
                      << 7U) | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                                << 3U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S 
        = ((IData)(vlTOPp->rst_i) ? 1U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt));
    vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o 
        = (((vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o 
             == (0x1fU & (IData)(vlSymsp->TOP__test_top__core_top0.__Vcellout__exe0__csr_raddr_o))) 
            & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))
            ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o
            : 0U);
    vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o 
        = __Vdly__id_exe_exception_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o 
        = (1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                >> 2U)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o 
        = (1U & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                 >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                               >> 1U)) 
                                           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
    vlSymsp->TOP__test_top__core_top0.__Vtableidx2 
        = ((0x20U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                     << 5U)) | ((0x10U & ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                                            & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                               | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                           << 4U) | 
                                          (0xfffffff0U 
                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                              << 3U)))) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S)));
    vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt 
        = vlSymsp->TOP__test_top__core_top0.__Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt
        [vlSymsp->TOP__test_top__core_top0.__Vtableidx2];
}

VL_INLINE_OPT void Vtest_top_core_top::_sequent__TOP__test_top__core_top0__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_sequent__TOP__test_top__core_top0__4\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o 
        = ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata);
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
                                           ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata));
    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o 
        = (1U & ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                  ? ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                         >> 2U)) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                        >> 1U)) & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))
                  : (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                      >> 2U) & ((~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                                    >> 1U)) & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))))));
}

VL_INLINE_OPT void Vtest_top_core_top::_sequent__TOP__test_top__core_top0__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_sequent__TOP__test_top__core_top0__5\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vtableidx1;
    CData/*1:0*/ __Vdly__aligner0__DOT__next_state;
    // Body
    __Vdly__aligner0__DOT__next_state = vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__next_state;
    __Vtableidx1 = ((4U & (vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire 
                           << 1U)) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__current_state));
    if (vlSymsp->TOP__test_top__core_top0.__Vtablechg1
        [__Vtableidx1]) {
        __Vdly__aligner0__DOT__next_state = vlSymsp->TOP__test_top__core_top0.__Vtable1___PVT__aligner0__DOT__next_state
            [__Vtableidx1];
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state));
    vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__current_state 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__next_state));
    if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i 
            = (1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state)));
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state)))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
            = ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))
                ? VL_ULL(0) : (((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5
                                                [0U][1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5
                                                            [0U][0U]))));
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state)))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i = VL_ULL(0);
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__next_state 
        = __Vdly__aligner0__DOT__next_state;
}

VL_INLINE_OPT void Vtest_top_core_top::_combo__TOP__test_top__core_top0__6(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_combo__TOP__test_top__core_top0__6\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                        : 0U) : 0U)
                                : 0U) : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : 0U));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                    = ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U)))
                        : 0U);
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                        : 0U) : 0U);
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                                if (
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))) {
                                                    if (
                                                        (0x20U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x19U)))) {
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                                                    }
                                                }
                                            } else {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                            }
                                        }
                                    } else {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o;
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)));
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 3U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 3U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x23U == 
                                           (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                           ? ((0U == 
                                               (7U 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 0U)))
                                           : ((3U == 
                                               (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                               ? ((0x4000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0xdU
                                                     : 0xcU))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 0xbU)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                     ? 0xaU
                                                     : 9U)))
                                               : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x23U == 
                                           (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                           ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                                           : 0U));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x23U == 
                                           (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                           ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                              + ((0xfffff000U 
                                                  & (VL_NEGATE_I((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                             >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | ((0xfe0U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 7U)))))
                                           : ((3U == 
                                               (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))
                                               ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                  + 
                                                  ((0xfffff000U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                               >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x14U))))
                                               : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o 
        = (((IData)(vlTOPp->rst_i) | (0x73U != (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))
            ? 0U : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o 
                            & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                         : (vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o 
                            | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                     : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                         : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o 
        = (((IData)(vlTOPp->rst_i) | (0x73U != (0x7fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)))
            ? 0U : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o
                     : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o
                         : 0U)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
                            = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U) & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 1U) 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)));
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o 
                                = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                          >> 1U) & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o));
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((0x18U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 0x19U))) 
                                                         & (2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                >> 0x14U))))))) {
                                                    if (
                                                        ((0U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                              >> 0x19U))) 
                                                         & (0U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                >> 0x14U))))) {
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o 
                                            = (0xfffU 
                                               & ((0x2000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0x14U)
                                                    : 0U)));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o 
                                                = (0xfffU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o 
                                                    = 
                                                    (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0x14U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    ((0x18U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                          >> 0x19U))) 
                                                     & (2U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                            >> 0x14U))))) {
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o 
                                            = (1U & 
                                               ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xdU) 
                                                | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xcU)));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                                                    = vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                        : 0x13U) : 0x13U)
                                : 0x13U) : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((2U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                  : 0x13U)
                                                 : 0x13U)
                                             : ((2U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                  : 0x13U)
                                                 : 0x13U)));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o = 0x13U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o 
                = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0x13U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                : 0x13U)
                                            : 0x13U)
                                        : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                : 0x13U)
                                            : 0x13U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0x13U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? 0x13U : (
                                                   (2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                     : 0x13U)
                                                    : 0x13U))))
                    : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0x13U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                : 0x13U)
                                            : 0x13U)
                                        : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                : 0x13U)
                                            : 0x13U)))
                        : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                            ? 0x13U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                        ? 0x13U : (
                                                   (2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o
                                                     : 0x13U)
                                                    : 0x13U)))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 1U;
        if ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                             : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x20U == (0x7fU & 
                                           (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x19U)))
                                 ? ((0x1fU >= (0x1fU 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                     ? VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, 
                                                      (0x1fU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                     : VL_NEGATE_I(
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    >> 0x1fU)))
                                 : ((0U == (0x7fU & 
                                            (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x19U)))
                                     ? ((0x1fU >= (0x1fU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                            >> (0x1fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                         : 0U) : 0U))
                             : (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                 < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? 1U : 0U) : (VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                ? 1U
                                                : 0U))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x1fU >= (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                 ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    << (0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                 : 0U) : ((0U == (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))
                                           ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                              + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                           : ((0x20U 
                                               == (0x7fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x19U)))
                                               ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                  - vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                               : 0U))))));
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                          >> 0xdU)))) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = 1U;
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                    = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                              >> 4U) & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 3U)) 
                                        & ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                            ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 1U) 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)))
                                            : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 1U) 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  & (((~ 
                                                       ((IData)(vlTOPp->rst_i) 
                                                        | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))) 
                                                      & ((0x4000U 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0xdU) 
                                                          | ((~ 
                                                              (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                               >> 0xcU)) 
                                                             | ((0x20U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                     >> 0x19U))) 
                                                                | (0U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                       >> 0x19U))))))
                                                          : 
                                                         ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0xdU) 
                                                          | ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                              >> 0xcU) 
                                                             | ((0U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                     >> 0x19U))) 
                                                                | (0x20U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                       >> 0x19U)))))))) 
                                                     | (~ 
                                                        ((IData)(vlTOPp->rst_i) 
                                                         | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))))))));
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                                = ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                    >> 1U) & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o)));
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                                if (
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))) {
                                                    if (
                                                        (0x20U 
                                                         != 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x19U)))) {
                                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o 
                        = ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 3U)) & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 2U)) 
                                          & ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                              >> 1U) 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                & ((~ (IData)(vlTOPp->rst_i)) 
                                                   & ((0x23U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))))))));
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                 ? ((IData)(1U) + (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                             : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o))));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                             : ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? ((IData)(1U) + (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                             : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))));
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o = 0U;
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 0U;
        if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = 1U;
        }
    }
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
    } else {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 0U;
        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                      >> 0xeU)))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = 1U;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                            = (0x1fU 
                                               & ((0x2000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 7U));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 7U));
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                        = (0x1fU & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 7U)
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 7U)
                                                 : 0U)
                                             : 0U) : 0U)));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o 
                = (0x1fU & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((2U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 0U)
                                                  : 0U)
                                              : ((2U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)))
                                 : 0U) : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U))))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                        = (0x1fU & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U)
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U)
                                                 : 0U)
                                             : 0U) : 
                                        ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                          ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0x14U)
                                              : 0U)
                                          : 0U))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o 
                = ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                    ? (0x1fU & ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0x14U)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                                 : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U)
                                                   : 0U)
                                               : 0U)))))
                    : 0U);
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0xfU));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                        >> 0xfU));
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                        = (0x1fU & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU)
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU)
                                                 : 0U)
                                             : 0U) : 
                                        ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                          ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xfU)
                                              : 0U)
                                          : 0U))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o 
                = (0x1fU & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                                                    | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xfU)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                                 : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                               : 0U))))
                             : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                 ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                               : 0U)))
                                 : ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                               : 0U))))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
                            = ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                           + ((0xfff00000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                          >> 0x1fU)))) 
                                                  << 0x14U)) 
                                              | ((0xff000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 9U)) 
                                                    | ((0x7e0U 
                                                        & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                             >> 0x14U)))))))
                                        : 0U) : 0U)
                                : 0U);
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o 
                                = ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                           + ((0xfffff000U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                          >> 0x1fU)))) 
                                                  << 0xcU)) 
                                              | (0xfffU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                    >> 0x14U))))
                                        : 0U) : 0U);
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        } else {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
                                            = (1U & 
                                               ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 0xdU) 
                                                | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xcU)));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
                        = (1U & ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                  ? ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U) & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 1U) 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))
                                  : ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                      >> 2U) & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 >> 1U) 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o 
                = (1U & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                          ? ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                              >> 4U) & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 3U)) 
                                        & ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 1U) 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            : ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 1U) 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o))))))
                          : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                              ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((4U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 1U) 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 : 
                                                ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 1U) 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))
                              : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o 
                        = (1U & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o 
                = (1U & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                          >> 5U) & ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                     ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 3U)) 
                                        & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 2U)) 
                                           & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 1U) 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o)))))
                                     : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 3U)) 
                                        & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 2U)) 
                                           & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 1U) 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                                            }
                                        }
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) {
                                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 1U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o 
                        = (1U & ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((4U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 ? 
                                                ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 1U) 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                 : 
                                                ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 1U) 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o = 0U;
            }
        } else {
            vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o 
                = (1U & ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                          ? ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                              ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o)))))
                              : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))
                          : ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                              ? ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))
                              : ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 3U)) & ((~ 
                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 2U)) 
                                                & ((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 1U) 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o))))));
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o);
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o 
        = ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o)
            ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o
            : vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc);
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o 
        = vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o;
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next 
        = ((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
            ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                    | (0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                    ? 3U : 1U) : 0U) : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                         ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                             ? 1U : 3U)
                                         : 0U));
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                                            & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                                           | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                              & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))
                                           ? 0xfU : 
                                          (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                            & (((0x1fU 
                                                 & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0xfU)) 
                                                == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                               | ((0x1fU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))
                                            ? 7U : 0U)));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o)
            ? (VL_ULL(1) + (~ vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i))
            : VL_ULL(0));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
           & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)));
    vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o)
            ? ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                             ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                      ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mepc)))
                : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                    ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                        ? 0U : ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                 ? 0U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                          ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec)
                                              ? ((0xfffffffcU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                  << 2U))
                                              : (0xfffffffcU 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))
                                          : (0xfffffffcU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))))
                    : 0U)) : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o)
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o
                               : 0U));
    if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S)))) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o 
                        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception)
                            ? (vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o 
                               - (IData)(4U)) : vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o);
                }
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i 
        = ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
           | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__aligner_stall_o));
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result 
        = ((1U & ((IData)(vlTOPp->rst_i) | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m))))
            ? 0U : ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                     ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                                     ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result
                             : ((0U != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                 ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                     ? VL_NEGATE_I(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                     : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)
                                 : vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result)))
                     : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                         ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                        >> 0x20U)) : 
                            ((0x80000000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)
                              ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                         >> 0x20U))
                              : (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                         >> 0x20U))))
                         : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                             ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust)
                                 ? (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result 
                                            >> 0x20U))
                                 : (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i 
                                            >> 0x20U)))
                             : (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i)))));
    if ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state = 0U;
    } else {
        if ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state))) {
            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state 
                = ((0x20U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp))
                    ? 2U : 1U);
        } else {
            if (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req) {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state = 1U;
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp = 0U;
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state = 0U;
            }
        }
    }
    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o 
        = (VL_NEGATE_I((IData)(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i)))) 
           & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result);
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                            = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o;
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                                                = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o;
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? ((IData)(4U) 
                                           + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o)
                                        : 0U) : 0U)
                                : 0U) : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o)
                                                  : 0U)
                                              : 0U)
                                          : 0U));
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                        = ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o 
                                                | vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o)
                                             : 0U) : 0U)));
                } else {
                    if ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o 
                    = ((0x10U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                             ? ((0x4000U 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                   | vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                        >> 0x19U)))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                      : 
                                                     VL_NEGATE_I(
                                                                 (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                  >> 0x1fU)))
                                                     : 0U))
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                   ^ vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)))
                                                 : 
                                                ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    < vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(1,32,32, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x1fU 
                                                    >= vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                    << vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)
                                                    : 0U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                   + vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))
                                             : 0U) : 0U)))
                        : 0U);
            }
        }
    }
}

VL_INLINE_OPT void Vtest_top_core_top::_sequent__TOP__test_top__core_top0__8(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_sequent__TOP__test_top__core_top0__8\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire 
        = vlSymsp->TOP__test_top__core_top0.__Vdly__pc_wire;
}

void Vtest_top_core_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top::_ctor_var_reset\n"); );
    // Body
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rom_data_i = VL_RAND_RESET_I(32);
    __PVT__rom_ce_o = VL_RAND_RESET_I(1);
    __PVT__rom_addr_o = VL_RAND_RESET_I(32);
    __PVT__ram_ce_o = VL_RAND_RESET_I(1);
    __PVT__ram_addr_o = VL_RAND_RESET_I(32);
    __PVT__ram_wdata_o = VL_RAND_RESET_I(32);
    __PVT__ram_rdata_i = VL_RAND_RESET_I(32);
    __PVT__ram_we_o = VL_RAND_RESET_I(1);
    __PVT__irq_external_i = VL_RAND_RESET_I(1);
    __PVT__irq_software_i = VL_RAND_RESET_I(1);
    __PVT__irq_timer_i = VL_RAND_RESET_I(1);
    __PVT__ctrl_stall_o = VL_RAND_RESET_I(6);
    __PVT__ctrl_flush_jump_o = VL_RAND_RESET_I(1);
    __PVT__ctrl_new_pc_o = VL_RAND_RESET_I(32);
    __PVT__ctrl_pc_o = VL_RAND_RESET_I(32);
    __PVT__pc_wire = VL_RAND_RESET_I(32);
    __PVT__ce_wire = VL_RAND_RESET_I(1);
    __PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_csr_we_o = VL_RAND_RESET_I(1);
    __PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    __PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    __PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_inst_is_load_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_rd_o = VL_RAND_RESET_I(5);
    __PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__id_exe_csr_we_o = VL_RAND_RESET_I(1);
    __PVT__id_exe_exception_o = VL_RAND_RESET_I(32);
    __PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_op_o = VL_RAND_RESET_I(4);
    __PVT__exe_csr_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_csr_rdata_i = VL_RAND_RESET_I(32);
    __PVT__exe_jump_enable_o = VL_RAND_RESET_I(1);
    __PVT__exe_jump_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_data_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_mem_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_mem_op_o = VL_RAND_RESET_I(4);
    __PVT__exe_mem_csr_waddr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_csr_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_csr_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_csr_we_o = VL_RAND_RESET_I(1);
    __PVT__exe_mem_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__exe_mem_exception_o = VL_RAND_RESET_I(32);
    __PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_halt_o = VL_RAND_RESET_I(1);
    __PVT__mem_ram_addr_o = VL_RAND_RESET_I(32);
    __PVT__mem_ram_w_request_o = VL_RAND_RESET_I(1);
    __PVT__mem_ram_data_o = VL_RAND_RESET_I(32);
    __PVT__mem_csr_waddr_o = VL_RAND_RESET_I(32);
    __PVT__mem_csr_wdata_o = VL_RAND_RESET_I(32);
    __PVT__mem_csr_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_inst_addr_o = VL_RAND_RESET_I(32);
    __PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    __PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__mem_wb_csr_waddr_o = VL_RAND_RESET_I(32);
    __PVT__mem_wb_csr_wdata_o = VL_RAND_RESET_I(32);
    __PVT__mem_wb_csr_we_o = VL_RAND_RESET_I(1);
    __PVT__mem_wb_instret_incr_o = VL_RAND_RESET_I(1);
    __PVT__csr_rdata_o = VL_RAND_RESET_I(32);
    __PVT__csr_file_csr_rdata_o = VL_RAND_RESET_I(32);
    __PVT__int_ctrl_interrupt_type_o = VL_RAND_RESET_I(1);
    __PVT__int_ctrl_interrupt_en_o = VL_RAND_RESET_I(1);
    __PVT__int_ctrl_cause_we_o = VL_RAND_RESET_I(1);
    __PVT__int_ctrl_trap_casue_o = VL_RAND_RESET_I(4);
    __PVT__int_ctrl_epc_we_o = VL_RAND_RESET_I(1);
    __PVT__int_ctrl_epc_o = VL_RAND_RESET_I(32);
    __PVT__int_ctrl_mstatus_ie_clear_o = VL_RAND_RESET_I(1);
    __PVT__int_ctrl_mstatus_ie_set_o = VL_RAND_RESET_I(1);
    __PVT__int_ctrl_flush_o = VL_RAND_RESET_I(1);
    __PVT__aligner_stall_o = VL_RAND_RESET_I(6);
    __Vcellinp__if_id0__stall_i = VL_RAND_RESET_I(6);
    __Vcellout__id0__csr_addr_o = VL_RAND_RESET_I(12);
    __Vcellout__id_exe0__csr_addr_o = VL_RAND_RESET_I(12);
    __Vcellout__exe0__csr_raddr_o = VL_RAND_RESET_I(12);
    __PVT__mem_mem_ce_o = VL_RAND_RESET_I(1);
    __PVT__ctrl0__DOT__current_pc = VL_RAND_RESET_I(32);
    __PVT__aligner0__DOT__inst_i = VL_RAND_RESET_I(32);
    __PVT__aligner0__DOT__inst_o = VL_RAND_RESET_I(32);
    __PVT__aligner0__DOT__lower_half = VL_RAND_RESET_I(16);
    __PVT__aligner0__DOT__current_state = VL_RAND_RESET_I(2);
    __PVT__aligner0__DOT__next_state = VL_RAND_RESET_I(2);
    __PVT__id0__DOT__exception_i = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__except_mret = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__except_ecall = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__op1_o_final = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__op2_o_final = VL_RAND_RESET_I(32);
    __PVT__id0__DOT__r_reg1_re_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__r_reg2_re_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__r_reg_we_o = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__inst_type_r__DOT__isType_r = VL_RAND_RESET_I(1);
    __PVT__id0__DOT__inst_type_r__DOT__isType_m = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__r_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__m_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__system_reg_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__system_csr_wdata_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_r0__DOT__isType_r = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2 = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__isType_m = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__a_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__b_o = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__div_result = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__div_req_o = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i = VL_RAND_RESET_Q(64);
    __PVT__exe0__DOT__exe_type_m0__DOT__result = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust = VL_RAND_RESET_I(1);
    __PVT__exe0__DOT__exe_type_m0__DOT__invert_result = VL_RAND_RESET_Q(64);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__inst_i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[__Vi0]);
    }}
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp = VL_RAND_RESET_I(6);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req = VL_RAND_RESET_I(1);
    exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[__Vi0]);
    }}
    exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[__Vi0]);
    }}
    exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[__Vi0]);
    }}
    exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[__Vi0]);
    }}
    exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5[__Vi0]);
    }}
    exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[__Vi0]);
    }}
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state = VL_RAND_RESET_I(2);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state = VL_RAND_RESET_I(2);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    __PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound2);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt = VL_RAND_RESET_I(6);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S = VL_RAND_RESET_I(3);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S_next = VL_RAND_RESET_I(3);
    __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__div_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, __PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result_tmp);
    __PVT__mem0__DOT__reg_wdata = VL_RAND_RESET_I(32);
    __PVT__csr_file0__DOT__mcycle = VL_RAND_RESET_Q(64);
    __PVT__csr_file0__DOT__minstret = VL_RAND_RESET_Q(64);
    __PVT__csr_file0__DOT__mstatus = VL_RAND_RESET_I(32);
    __PVT__csr_file0__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mie_external = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mie_timer = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mie_software = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__w_mie = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mtvec = VL_RAND_RESET_I(32);
    __PVT__csr_file0__DOT__mscratch = VL_RAND_RESET_I(32);
    __PVT__csr_file0__DOT__mepc = VL_RAND_RESET_I(32);
    __PVT__csr_file0__DOT__cause = VL_RAND_RESET_I(4);
    __PVT__csr_file0__DOT__cause_rem = VL_RAND_RESET_I(27);
    __PVT__csr_file0__DOT__interrupt_type = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__w_mcause = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mip_external = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mip_timer = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mip_software = VL_RAND_RESET_I(1);
    __PVT__csr_file0__DOT__mtval = VL_RAND_RESET_I(32);
    __PVT__interrupt_ctrl0__DOT__S = VL_RAND_RESET_I(4);
    __PVT__interrupt_ctrl0__DOT__S_nxt = VL_RAND_RESET_I(4);
    __PVT__interrupt_ctrl0__DOT__eip = VL_RAND_RESET_I(1);
    __PVT__interrupt_ctrl0__DOT__tip = VL_RAND_RESET_I(1);
    __PVT__interrupt_ctrl0__DOT__sip = VL_RAND_RESET_I(1);
    __PVT__interrupt_ctrl0__DOT__exception = VL_RAND_RESET_I(1);
    __Vtablechg1[0] = 1U;
    __Vtablechg1[1] = 1U;
    __Vtablechg1[2] = 1U;
    __Vtablechg1[3] = 0U;
    __Vtablechg1[4] = 1U;
    __Vtablechg1[5] = 1U;
    __Vtablechg1[6] = 1U;
    __Vtablechg1[7] = 0U;
    __Vtable1___PVT__aligner0__DOT__next_state[0] = 0U;
    __Vtable1___PVT__aligner0__DOT__next_state[1] = 0U;
    __Vtable1___PVT__aligner0__DOT__next_state[2] = 0U;
    __Vtable1___PVT__aligner0__DOT__next_state[3] = 0U;
    __Vtable1___PVT__aligner0__DOT__next_state[4] = 1U;
    __Vtable1___PVT__aligner0__DOT__next_state[5] = 2U;
    __Vtable1___PVT__aligner0__DOT__next_state[6] = 1U;
    __Vtable1___PVT__aligner0__DOT__next_state[7] = 0U;
    __Vtableidx2 = 0;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[0] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[1] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[2] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[3] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[4] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[5] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[6] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[7] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[8] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[9] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[10] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[11] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[12] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[13] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[14] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[15] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[16] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[17] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[18] = 4U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[19] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[20] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[21] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[22] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[23] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[24] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[25] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[26] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[27] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[28] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[29] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[30] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[31] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[32] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[33] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[34] = 8U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[35] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[36] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[37] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[38] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[39] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[40] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[41] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[42] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[43] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[44] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[45] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[46] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[47] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[48] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[49] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[50] = 4U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[51] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[52] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[53] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[54] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[55] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[56] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[57] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[58] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[59] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[60] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[61] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[62] = 2U;
    __Vtable2___PVT__interrupt_ctrl0__DOT__S_nxt[63] = 2U;
    __Vdly__pc_wire = VL_RAND_RESET_I(32);
}
