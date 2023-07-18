// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtest_top* t = (Vtest_top*)userthis;
    Vtest_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtest_top::traceChgThis(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 2U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 3U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 >> 1U) | (vlTOPp->__Vm_traceActivity 
                                           >> 4U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtest_top::traceChgThis__2(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
        vcdp->chgBus(c+9,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
        vcdp->chgBus(c+17,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
        vcdp->chgBus(c+25,(vlSymsp->TOP__test_top__core_top0.__PVT__aligner_stall_o),6);
        vcdp->chgBus(c+33,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
    }
}

void Vtest_top::traceChgThis__3(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+41,(((~ (IData)((((((QData)((IData)(
                                                           vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                           [1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                            [0U]))) 
                                         - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                        >> 0x3fU))) 
                            & (VL_ULL(0) != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp))));
        vcdp->chgBus(c+49,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
        vcdp->chgQuad(c+57,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp),64);
        vcdp->chgQuad(c+73,(((((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                               [1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                           [0U]))) 
                             - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)),64);
        vcdp->chgBit(c+89,((1U & (~ (IData)((((((QData)((IData)(
                                                                vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                [1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                 [0U]))) 
                                              - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                             >> 0x3fU))))));
        vcdp->chgBit(c+97,((VL_ULL(0) == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
        vcdp->chgBit(c+105,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o));
        vcdp->chgBus(c+113,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
        vcdp->chgBit(c+121,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o));
        vcdp->chgBit(c+129,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o));
        vcdp->chgBit(c+137,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o));
        vcdp->chgBit(c+145,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o));
        vcdp->chgBus(c+153,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                              ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                          >> 0xfU))
                              : 0U)),5);
        vcdp->chgBus(c+161,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                              ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                          >> 0x14U))
                              : 0U)),5);
        vcdp->chgBit(c+169,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
        vcdp->chgBit(c+177,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
        vcdp->chgBit(c+185,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
        vcdp->chgBus(c+193,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                              ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                          >> 7U)) : 0U)),5);
        vcdp->chgBit(c+201,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
        vcdp->chgBit(c+209,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m));
        vcdp->chgBit(c+217,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        vcdp->chgBit(c+225,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
        vcdp->chgBit(c+233,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m));
        vcdp->chgBit(c+241,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__signed_adjust));
        vcdp->chgArray(c+249,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[0]),65);
        vcdp->chgArray(c+252,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[1]),65);
        vcdp->chgArray(c+255,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[2]),65);
        vcdp->chgArray(c+258,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[3]),65);
        vcdp->chgArray(c+261,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[4]),65);
        vcdp->chgArray(c+264,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[5]),65);
        vcdp->chgArray(c+267,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[6]),65);
        vcdp->chgArray(c+270,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[7]),65);
        vcdp->chgArray(c+273,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[8]),65);
        vcdp->chgArray(c+276,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[9]),65);
        vcdp->chgArray(c+279,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[10]),65);
        vcdp->chgArray(c+282,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[11]),65);
        vcdp->chgArray(c+285,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[12]),65);
        vcdp->chgArray(c+288,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[13]),65);
        vcdp->chgArray(c+291,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[14]),65);
        vcdp->chgArray(c+294,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[15]),65);
        vcdp->chgArray(c+297,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[16]),65);
        vcdp->chgArray(c+300,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[17]),65);
        vcdp->chgArray(c+303,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[18]),65);
        vcdp->chgArray(c+306,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[19]),65);
        vcdp->chgArray(c+309,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[20]),65);
        vcdp->chgArray(c+312,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[21]),65);
        vcdp->chgArray(c+315,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[22]),65);
        vcdp->chgArray(c+318,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[23]),65);
        vcdp->chgArray(c+321,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[24]),65);
        vcdp->chgArray(c+324,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[25]),65);
        vcdp->chgArray(c+327,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[26]),65);
        vcdp->chgArray(c+330,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[27]),65);
        vcdp->chgArray(c+333,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[28]),65);
        vcdp->chgArray(c+336,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[29]),65);
        vcdp->chgArray(c+339,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[30]),65);
        vcdp->chgArray(c+342,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_temp[31]),65);
        vcdp->chgArray(c+1017,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[0]),65);
        vcdp->chgArray(c+1020,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[1]),65);
        vcdp->chgArray(c+1023,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[2]),65);
        vcdp->chgArray(c+1026,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[3]),65);
        vcdp->chgArray(c+1029,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[4]),65);
        vcdp->chgArray(c+1032,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[5]),65);
        vcdp->chgArray(c+1035,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[6]),65);
        vcdp->chgArray(c+1038,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[7]),65);
        vcdp->chgArray(c+1041,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[8]),65);
        vcdp->chgArray(c+1044,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[9]),65);
        vcdp->chgArray(c+1047,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[10]),65);
        vcdp->chgArray(c+1050,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[11]),65);
        vcdp->chgArray(c+1053,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[12]),65);
        vcdp->chgArray(c+1056,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[13]),65);
        vcdp->chgArray(c+1059,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[14]),65);
        vcdp->chgArray(c+1062,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next1[15]),65);
        vcdp->chgArray(c+1401,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[0]),65);
        vcdp->chgArray(c+1404,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[1]),65);
        vcdp->chgArray(c+1407,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[2]),65);
        vcdp->chgArray(c+1410,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[3]),65);
        vcdp->chgArray(c+1413,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[4]),65);
        vcdp->chgArray(c+1416,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[5]),65);
        vcdp->chgArray(c+1419,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[6]),65);
        vcdp->chgArray(c+1422,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next2[7]),65);
        vcdp->chgArray(c+1593,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[0]),65);
        vcdp->chgArray(c+1596,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[1]),65);
        vcdp->chgArray(c+1599,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[2]),65);
        vcdp->chgArray(c+1602,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next3[3]),65);
        vcdp->chgArray(c+1689,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[0]),65);
        vcdp->chgArray(c+1692,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next4[1]),65);
        vcdp->chgArray(c+1737,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__a_next5[0]),65);
        vcdp->chgArray(c+1761,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0]),65);
        vcdp->chgArray(c+1764,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1]),65);
        vcdp->chgArray(c+1767,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2]),65);
        vcdp->chgArray(c+1770,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3]),65);
        vcdp->chgArray(c+1773,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4]),65);
        vcdp->chgArray(c+1776,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5]),65);
        vcdp->chgArray(c+1779,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6]),65);
        vcdp->chgArray(c+1782,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7]),65);
        vcdp->chgArray(c+1785,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8]),65);
        vcdp->chgArray(c+1788,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9]),65);
        vcdp->chgArray(c+1791,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[10]),65);
        vcdp->chgArray(c+1794,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[11]),65);
        vcdp->chgArray(c+1797,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[12]),65);
        vcdp->chgArray(c+1800,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[13]),65);
        vcdp->chgArray(c+1803,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[14]),65);
        vcdp->chgArray(c+1806,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[15]),65);
        vcdp->chgArray(c+1809,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[16]),65);
        vcdp->chgArray(c+1812,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[17]),65);
        vcdp->chgArray(c+1815,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[18]),65);
        vcdp->chgArray(c+1818,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[19]),65);
        vcdp->chgArray(c+1821,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[20]),65);
        vcdp->chgArray(c+1824,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[21]),65);
        vcdp->chgArray(c+1827,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[22]),65);
        vcdp->chgArray(c+1830,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[23]),65);
        vcdp->chgArray(c+1833,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[24]),65);
        vcdp->chgArray(c+1836,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[25]),65);
        vcdp->chgArray(c+1839,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[26]),65);
        vcdp->chgArray(c+1842,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[27]),65);
        vcdp->chgArray(c+1845,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[28]),65);
        vcdp->chgArray(c+1848,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[29]),65);
        vcdp->chgArray(c+1851,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[30]),65);
        vcdp->chgArray(c+1854,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[31]),65);
        vcdp->chgArray(c+2529,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0]),65);
        vcdp->chgArray(c+2532,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1]),65);
        vcdp->chgArray(c+2535,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2]),65);
        vcdp->chgArray(c+2538,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3]),65);
        vcdp->chgArray(c+2541,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4]),65);
        vcdp->chgArray(c+2544,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5]),65);
        vcdp->chgArray(c+2547,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6]),65);
        vcdp->chgArray(c+2550,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7]),65);
        vcdp->chgArray(c+2553,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8]),65);
        vcdp->chgArray(c+2556,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9]),65);
        vcdp->chgArray(c+2559,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[10]),65);
        vcdp->chgArray(c+2562,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[11]),65);
        vcdp->chgArray(c+2565,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[12]),65);
        vcdp->chgArray(c+2568,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[13]),65);
        vcdp->chgArray(c+2571,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[14]),65);
        vcdp->chgArray(c+2574,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[15]),65);
        vcdp->chgArray(c+2913,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0]),65);
        vcdp->chgArray(c+2916,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1]),65);
        vcdp->chgArray(c+2919,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2]),65);
        vcdp->chgArray(c+2922,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3]),65);
        vcdp->chgArray(c+2925,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4]),65);
        vcdp->chgArray(c+2928,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5]),65);
        vcdp->chgArray(c+2931,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6]),65);
        vcdp->chgArray(c+2934,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7]),65);
        vcdp->chgArray(c+3105,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0]),65);
        vcdp->chgArray(c+3108,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1]),65);
        vcdp->chgArray(c+3111,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2]),65);
        vcdp->chgArray(c+3114,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3]),65);
        vcdp->chgArray(c+3201,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0]),65);
        vcdp->chgArray(c+3204,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1]),65);
        vcdp->chgBus(c+3249,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus),32);
        vcdp->chgBit(c+3257,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mie));
        vcdp->chgBit(c+3265,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__w_mcause));
        vcdp->chgBus(c+3273,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt),4);
        vcdp->chgBit(c+3281,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip));
        vcdp->chgBit(c+3289,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip));
        vcdp->chgBit(c+3297,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip));
        vcdp->chgBit(c+3305,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                               | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))));
        vcdp->chgBit(c+3313,((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie) 
                                     & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                         | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                        | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                    | (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                       >> 1U)))));
        vcdp->chgBus(c+3321,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
        vcdp->chgBus(c+3322,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
        vcdp->chgBus(c+3323,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
        vcdp->chgBus(c+3324,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
        vcdp->chgBus(c+3325,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
        vcdp->chgBus(c+3326,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
        vcdp->chgBus(c+3327,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
        vcdp->chgBus(c+3328,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
        vcdp->chgBus(c+3329,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
        vcdp->chgBus(c+3330,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
        vcdp->chgBus(c+3331,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
        vcdp->chgBus(c+3332,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
        vcdp->chgBus(c+3333,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
        vcdp->chgBus(c+3334,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
        vcdp->chgBus(c+3335,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
        vcdp->chgBus(c+3336,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
        vcdp->chgBus(c+3337,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
        vcdp->chgBus(c+3338,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
        vcdp->chgBus(c+3339,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
        vcdp->chgBus(c+3340,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
        vcdp->chgBus(c+3341,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
        vcdp->chgBus(c+3342,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
        vcdp->chgBus(c+3343,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
        vcdp->chgBus(c+3344,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
        vcdp->chgBus(c+3345,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
        vcdp->chgBus(c+3346,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
        vcdp->chgBus(c+3347,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
        vcdp->chgBus(c+3348,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
        vcdp->chgBus(c+3349,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
        vcdp->chgBus(c+3350,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
        vcdp->chgBus(c+3351,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
        vcdp->chgBus(c+3352,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
    }
}

void Vtest_top::traceChgThis__4(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3577,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o) 
                               & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i))) 
                              | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o) 
                                 & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i))))));
    }
}

void Vtest_top::traceChgThis__5(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3585,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
        vcdp->chgBus(c+3593,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
        vcdp->chgBit(c+3601,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o) 
                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o))));
        vcdp->chgBus(c+3609,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                               | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                               ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                               : 0U)),32);
        vcdp->chgBus(c+3617,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_r) 
                               | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__inst_type_r__DOT__isType_m))
                               ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                               : 0U)),32);
        vcdp->chgBus(c+3625,(((((IData)(vlSymsp->TOP__test_top__core_top0.__Vcellout__id_exe0__csr_addr_o) 
                                == (0xfffU & vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o)) 
                               & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o))
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o
                               : vlSymsp->TOP__test_top__core_top0.__PVT__csr_rdata_o)),32);
        vcdp->chgBus(c+3633,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp),6);
        vcdp->chgBit(c+3641,((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp))));
        vcdp->chgBit(c+3649,((1U & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                    >> 1U))));
        vcdp->chgBit(c+3657,((1U & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                    >> 2U))));
        vcdp->chgBit(c+3665,((1U & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                    >> 3U))));
        vcdp->chgBit(c+3673,((1U & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__ready_temp) 
                                    >> 4U))));
        vcdp->chgBus(c+3681,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                               ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o)
                                   ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o) 
                                       | (0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))
                                       ? 3U : 1U) : 0U)
                               : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S))
                                   ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt))
                                       ? 1U : 3U) : 0U))),3);
    }
}

void Vtest_top::traceChgThis__6(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3689,((vlSymsp->TOP__test_top.__PVT__device_req
                              [0U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                       [(0x1ffffcU 
                                         & vlSymsp->TOP__test_top.__PVT__device_addr
                                         [0U])] << 0x18U) 
                                      | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
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
                               : 0U)),32);
    }
}

void Vtest_top::traceChgThis__7(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3697,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_ready_i));
        vcdp->chgQuad(c+3705,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_result_i),64);
    }
}

void Vtest_top::traceChgThis__8(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp3[3];
    // Body
    {
        vcdp->chgBit(c+3721,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
        vcdp->chgBit(c+3729,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
        vcdp->chgBus(c+3737,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
        vcdp->chgBit(c+3745,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
        vcdp->chgBus(c+3753,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
        vcdp->chgBus(c+3761,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
        vcdp->chgBit(c+3769,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
        vcdp->chgBus(c+3777,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
        vcdp->chgBit(c+3785,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
        vcdp->chgBus(c+3793,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
        vcdp->chgBus(c+3801,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
        vcdp->chgBit(c+3809,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
        vcdp->chgBit(c+3817,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
        vcdp->chgBus(c+3825,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
        vcdp->chgBit(c+3833,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
        vcdp->chgBus(c+3841,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
        vcdp->chgBus(c+3849,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
        vcdp->chgBit(c+3857,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
        vcdp->chgBus(c+3865,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
        vcdp->chgBit(c+3873,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
        vcdp->chgBus(c+3881,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
        vcdp->chgBus(c+3889,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
        vcdp->chgBit(c+3897,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
        vcdp->chgBit(c+3905,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req));
        vcdp->chgBit(c+3913,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp));
        vcdp->chgBit(c+3921,(vlSymsp->TOP__test_top.__PVT__device_req
                             [0U]));
        vcdp->chgBit(c+3929,(vlSymsp->TOP__test_top.__PVT__device_we
                             [0U]));
        vcdp->chgBus(c+3937,(vlSymsp->TOP__test_top.__PVT__device_addr
                             [0U]),32);
        vcdp->chgBus(c+3945,(vlSymsp->TOP__test_top.__PVT__device_wdata
                             [0U]),32);
        vcdp->chgBus(c+3953,(vlSymsp->TOP__test_top.__Vcellout__clint0__data_o),32);
        vcdp->chgBus(c+3961,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                              [0U])),16);
        vcdp->chgBit(c+3969,((0xbff8U == (0xffffU & 
                                          vlSymsp->TOP__test_top.__PVT__device_addr
                                          [0U]))));
        vcdp->chgBit(c+3977,((0xbffcU == (0xffffU & 
                                          vlSymsp->TOP__test_top.__PVT__device_addr
                                          [0U]))));
        vcdp->chgBit(c+3985,((0x4000U == (0xffffU & 
                                          vlSymsp->TOP__test_top.__PVT__device_addr
                                          [0U]))));
        vcdp->chgBit(c+3993,((0x4004U == (0xffffU & 
                                          vlSymsp->TOP__test_top.__PVT__device_addr
                                          [0U]))));
        vcdp->chgBit(c+4001,((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U]))));
        vcdp->chgBit(c+4009,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_ce_o));
        vcdp->chgBus(c+4017,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_addr_o),32);
        vcdp->chgBus(c+4025,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_data_o),32);
        vcdp->chgBus(c+4033,(vlSymsp->TOP__test_top.__PVT__host_rdata
                             [0U]),32);
        vcdp->chgBit(c+4041,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_ram_w_request_o));
        vcdp->chgBus(c+4049,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
        vcdp->chgBit(c+4057,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_flush_jump_o));
        vcdp->chgBus(c+4065,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o),32);
        vcdp->chgBus(c+4073,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o),32);
        vcdp->chgBus(c+4081,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
        vcdp->chgBus(c+4089,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                               : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final))),32);
        vcdp->chgBus(c+4097,(((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                               : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata
                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))),32);
        vcdp->chgBit(c+4105,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
        vcdp->chgBus(c+4113,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
        vcdp->chgBus(c+4121,(vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o),32);
        vcdp->chgBit(c+4129,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
        vcdp->chgBus(c+4137,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                               << 1U) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))),32);
        vcdp->chgBus(c+4145,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
        vcdp->chgBus(c+4153,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
        vcdp->chgBit(c+4161,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
        vcdp->chgBit(c+4169,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
        vcdp->chgBus(c+4177,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
        vcdp->chgBus(c+4185,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
        vcdp->chgBus(c+4193,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
        vcdp->chgBit(c+4201,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
        vcdp->chgBus(c+4209,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
        vcdp->chgBus(c+4217,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
        vcdp->chgBus(c+4225,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
        vcdp->chgBit(c+4233,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
        vcdp->chgBus(c+4241,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
        vcdp->chgBus(c+4249,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
        vcdp->chgBit(c+4257,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
        vcdp->chgBus(c+4265,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
        vcdp->chgBit(c+4273,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
        vcdp->chgBus(c+4281,(vlSymsp->TOP__test_top__core_top0.__PVT__mem0__DOT__reg_wdata),32);
        vcdp->chgBus(c+4289,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o),32);
        vcdp->chgBus(c+4297,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
        vcdp->chgBit(c+4305,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
        vcdp->chgBus(c+4313,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o),32);
        vcdp->chgBus(c+4321,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o),32);
        vcdp->chgBus(c+4329,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o) 
                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__aligner_stall_o))),6);
        vcdp->chgBus(c+4337,(vlSymsp->TOP__test_top__core_top0.__Vcellinp__if_id0__stall_i),6);
        vcdp->chgBus(c+4345,(vlSymsp->TOP__test_top__core_top0.__Vcellout__id0__csr_addr_o),12);
        vcdp->chgBit(c+4353,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret));
        vcdp->chgBit(c+4361,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall));
        vcdp->chgBus(c+4369,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
        vcdp->chgBus(c+4377,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
        vcdp->chgBus(c+4385,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
        vcdp->chgBus(c+4393,((0xfffU & vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_waddr_o)),12);
        vcdp->chgBus(c+4401,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__r_reg_wdata_o),32);
        vcdp->chgBus(c+4409,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_reg_wdata_o),32);
        vcdp->chgBus(c+4417,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_reg_wdata_o),32);
        vcdp->chgBus(c+4425,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__system_csr_wdata_o),32);
        vcdp->chgBus(c+4433,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o),32);
        vcdp->chgBus(c+4441,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o),32);
        vcdp->chgBit(c+4449,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__is_q_operation));
        vcdp->chgBit(c+4457,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mult_req_o));
        vcdp->chgBit(c+4465,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_req_o));
        vcdp->chgBus(c+4473,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__result),32);
        vcdp->chgQuad(c+4481,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__invert_result),64);
        vcdp->chgBit(c+4497,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o))))));
        vcdp->chgBit(c+4505,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o))))));
        vcdp->chgBit(c+4513,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req));
        vcdp->chgBus(c+4521,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__next_state),2);
        vcdp->chgBit(c+4529,((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__req)))));
        VL_EXTEND_WI(65,32, __Vtemp3, vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o);
        vcdp->chgArray(c+4537,(__Vtemp3),65);
        vcdp->chgBit(c+4561,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__a_o)));
        vcdp->chgBit(c+4569,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__b_o)));
        vcdp->chgBus(c+4577,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                              [0U])),21);
    }
}

void Vtest_top::traceChgThis__9(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp4[3];
    // Body
    {
        vcdp->chgBit(c+4585,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
        vcdp->chgBit(c+4593,((0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem)));
        vcdp->chgBit(c+4601,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
        vcdp->chgBus(c+4609,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0]),32);
        vcdp->chgBus(c+4610,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1]),32);
        vcdp->chgBus(c+4625,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0]),32);
        vcdp->chgBus(c+4626,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1]),32);
        vcdp->chgBus(c+4641,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem),32);
        vcdp->chgQuad(c+4649,((((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                [1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                            [0U])))),64);
        vcdp->chgQuad(c+4665,((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem))),64);
        vcdp->chgBit(c+4681,((0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                              [0U])));
        vcdp->chgBus(c+4689,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
        vcdp->chgBus(c+4697,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
        vcdp->chgBit(c+4705,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                              & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU)) 
                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                 | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0x14U)) 
                                    == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
        vcdp->chgBit(c+4713,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
        vcdp->chgBus(c+4721,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
        vcdp->chgBus(c+4729,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
        vcdp->chgBus(c+4737,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
        vcdp->chgBit(c+4745,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
        vcdp->chgBus(c+4753,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
        vcdp->chgBus(c+4761,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
        vcdp->chgBus(c+4769,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
        vcdp->chgBus(c+4777,(vlSymsp->TOP__test_top__core_top0.__Vcellout__id_exe0__csr_addr_o),32);
        vcdp->chgBit(c+4785,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
        vcdp->chgBus(c+4793,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o),32);
        vcdp->chgBus(c+4801,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
        vcdp->chgBit(c+4809,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
        vcdp->chgBus(c+4817,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
        vcdp->chgBus(c+4825,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
        vcdp->chgBus(c+4833,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
        vcdp->chgBit(c+4841,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
        vcdp->chgBus(c+4849,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
        vcdp->chgBus(c+4857,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_waddr_o),32);
        vcdp->chgBus(c+4865,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
        vcdp->chgBit(c+4873,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
        vcdp->chgBus(c+4881,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o),32);
        vcdp->chgBus(c+4889,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o),32);
        vcdp->chgBus(c+4897,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
        vcdp->chgBit(c+4905,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
        vcdp->chgBus(c+4913,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
        vcdp->chgBus(c+4921,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),32);
        vcdp->chgBus(c+4929,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
        vcdp->chgBit(c+4937,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
        vcdp->chgBit(c+4945,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
        vcdp->chgBit(c+4953,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_external));
        vcdp->chgBit(c+4961,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_timer));
        vcdp->chgBit(c+4969,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_software));
        vcdp->chgBit(c+4977,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_external));
        vcdp->chgBit(c+4985,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_timer));
        vcdp->chgBit(c+4993,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_software));
        vcdp->chgBit(c+5001,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mie));
        vcdp->chgBus(c+5009,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec),32);
        vcdp->chgBus(c+5017,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mepc),32);
        vcdp->chgBit(c+5025,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o));
        vcdp->chgBus(c+5033,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o),4);
        vcdp->chgBus(c+5041,(((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                               ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                   ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                            ? 0U : 
                                           ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                             ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mepc)))
                               : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                   ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                       ? 0U : ((1U 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                ? 0U
                                                : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec)
                                                     ? 
                                                    ((0xfffffffcU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                      << 2U))
                                                     : 
                                                    (0xfffffffcU 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))
                                                    : 
                                                   (0xfffffffcU 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))))
                                   : 0U))),32);
        vcdp->chgBus(c+5049,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc),32);
        vcdp->chgBus(c+5057,(vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__lower_half),16);
        vcdp->chgBus(c+5065,(((0xffff0000U & (vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__inst_i 
                                              << 0x10U)) 
                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__lower_half))),32);
        vcdp->chgBus(c+5073,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
        vcdp->chgBus(c+5081,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                    >> 0xcU))),3);
        vcdp->chgBus(c+5089,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                       >> 0x19U))),7);
        vcdp->chgBus(c+5097,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                       >> 7U))),5);
        vcdp->chgBus(c+5105,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                       >> 0xfU))),5);
        vcdp->chgBus(c+5113,(((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                               ? ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                   ? ((0xfffff000U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                  >> 0x1fU)))) 
                                          << 0xcU)) 
                                      | (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U)))
                                   : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                       ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U))
                                       : ((0xfffff000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                                          | (0xfffU 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U)))))
                               : ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                   ? ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                       ? (0xfffU & 
                                          (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0x14U))
                                       : ((0xfffff000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                                          | (0xfffU 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U))))
                                   : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                       ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U))
                                       : ((0xfffff000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                                          | (0xfffU 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U))))))),32);
        vcdp->chgBus(c+5121,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                       >> 0x14U))),5);
        vcdp->chgBus(c+5129,(vlSymsp->TOP__test_top__core_top0.__Vcellout__id_exe0__csr_addr_o),12);
        vcdp->chgBus(c+5137,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
        vcdp->chgBus(c+5145,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                    >> 0xcU))),3);
        vcdp->chgBus(c+5153,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                       >> 0x19U))),7);
        vcdp->chgBit(c+5161,(((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                              & ((0U == (0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 0x19U))) 
                                 | (0x20U == (0x7fU 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x19U)))))));
        vcdp->chgBus(c+5169,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | (0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                           >> 0x14U)))),32);
        vcdp->chgBus(c+5177,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0xfe0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 7U))))),32);
        vcdp->chgBit(c+5185,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                              == vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)));
        vcdp->chgBus(c+5193,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_result),32);
        vcdp->chgBit(c+5201,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div_ready_i));
        vcdp->chgBit(c+5209,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                    >> 0x1fU))));
        vcdp->chgBit(c+5217,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                    >> 0x1fU))));
        vcdp->chgBit(c+5225,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o))))));
        vcdp->chgArray(c+5233,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0]),65);
        vcdp->chgArray(c+5236,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1]),65);
        vcdp->chgArray(c+5239,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2]),65);
        vcdp->chgArray(c+5242,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3]),65);
        vcdp->chgArray(c+5245,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4]),65);
        vcdp->chgArray(c+5248,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5]),65);
        vcdp->chgArray(c+5251,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6]),65);
        vcdp->chgArray(c+5254,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7]),65);
        vcdp->chgArray(c+5257,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8]),65);
        vcdp->chgArray(c+5260,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9]),65);
        vcdp->chgArray(c+5263,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[10]),65);
        vcdp->chgArray(c+5266,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[11]),65);
        vcdp->chgArray(c+5269,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[12]),65);
        vcdp->chgArray(c+5272,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[13]),65);
        vcdp->chgArray(c+5275,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[14]),65);
        vcdp->chgArray(c+5278,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[15]),65);
        vcdp->chgArray(c+5281,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[16]),65);
        vcdp->chgArray(c+5284,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[17]),65);
        vcdp->chgArray(c+5287,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[18]),65);
        vcdp->chgArray(c+5290,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[19]),65);
        vcdp->chgArray(c+5293,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[20]),65);
        vcdp->chgArray(c+5296,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[21]),65);
        vcdp->chgArray(c+5299,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[22]),65);
        vcdp->chgArray(c+5302,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[23]),65);
        vcdp->chgArray(c+5305,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[24]),65);
        vcdp->chgArray(c+5308,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[25]),65);
        vcdp->chgArray(c+5311,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[26]),65);
        vcdp->chgArray(c+5314,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[27]),65);
        vcdp->chgArray(c+5317,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[28]),65);
        vcdp->chgArray(c+5320,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[29]),65);
        vcdp->chgArray(c+5323,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[30]),65);
        vcdp->chgArray(c+5326,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[31]),65);
        vcdp->chgBit(c+6001,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o));
        vcdp->chgBus(c+6009,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk1__DOT__device),32);
        vcdp->chgBus(c+6017,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk2__DOT__device),32);
        vcdp->chgArray(c+6025,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0]),65);
        vcdp->chgArray(c+6028,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1]),65);
        vcdp->chgArray(c+6031,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2]),65);
        vcdp->chgArray(c+6034,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3]),65);
        vcdp->chgArray(c+6037,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4]),65);
        vcdp->chgArray(c+6040,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5]),65);
        vcdp->chgArray(c+6043,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6]),65);
        vcdp->chgArray(c+6046,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7]),65);
        vcdp->chgArray(c+6049,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8]),65);
        vcdp->chgArray(c+6052,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9]),65);
        vcdp->chgArray(c+6055,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[10]),65);
        vcdp->chgArray(c+6058,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[11]),65);
        vcdp->chgArray(c+6061,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[12]),65);
        vcdp->chgArray(c+6064,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[13]),65);
        vcdp->chgArray(c+6067,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[14]),65);
        vcdp->chgArray(c+6070,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[15]),65);
        vcdp->chgBit(c+6409,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o));
        vcdp->chgBus(c+6417,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk1__DOT__device),32);
        vcdp->chgBus(c+6425,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk2__DOT__device),32);
        vcdp->chgArray(c+6433,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0]),65);
        vcdp->chgArray(c+6436,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1]),65);
        vcdp->chgArray(c+6439,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2]),65);
        vcdp->chgArray(c+6442,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3]),65);
        vcdp->chgArray(c+6445,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4]),65);
        vcdp->chgArray(c+6448,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5]),65);
        vcdp->chgArray(c+6451,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6]),65);
        vcdp->chgArray(c+6454,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7]),65);
        vcdp->chgBit(c+6625,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o));
        vcdp->chgBus(c+6633,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk1__DOT__device),32);
        vcdp->chgBus(c+6641,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk2__DOT__device),32);
        vcdp->chgArray(c+6649,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0]),65);
        vcdp->chgArray(c+6652,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1]),65);
        vcdp->chgArray(c+6655,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2]),65);
        vcdp->chgArray(c+6658,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3]),65);
        vcdp->chgBit(c+6745,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o));
        vcdp->chgBus(c+6753,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk1__DOT__device),32);
        vcdp->chgBus(c+6761,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk2__DOT__device),32);
        vcdp->chgArray(c+6769,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0]),65);
        vcdp->chgArray(c+6772,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1]),65);
        vcdp->chgBit(c+6817,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o));
        vcdp->chgBus(c+6825,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk1__DOT__device),32);
        vcdp->chgBus(c+6833,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk2__DOT__device),32);
        vcdp->chgArray(c+6841,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0]),65);
        vcdp->chgBit(c+6865,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__exe_type_m0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o));
        vcdp->chgBus(c+6873,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk1__DOT__device),32);
        vcdp->chgBus(c+6881,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk2__DOT__device),32);
        vcdp->chgBit(c+6889,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt)))))));
        vcdp->chgBus(c+6897,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32),32);
        vcdp->chgArray(c+6905,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result),65);
        vcdp->chgBus(c+6929,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__cnt),6);
        vcdp->chgBus(c+6937,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U]),32);
        vcdp->chgBus(c+6945,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[2U] 
                               << 0x1fU) | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                                            >> 1U))),32);
        vcdp->chgBus(c+6953,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__S),3);
        vcdp->chgBit(c+6961,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U] 
                              >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)));
        vcdp->chgQuad(c+6969,((VL_ULL(0x1ffffffff) 
                               & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                  - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32))))),33);
        __Vtemp4[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[0U];
        __Vtemp4[1U] = (IData)((VL_ULL(0x1ffffffff) 
                                & ((QData)((IData)(
                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                   - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))));
        __Vtemp4[2U] = (IData)(((VL_ULL(0x1ffffffff) 
                                 & ((QData)((IData)(
                                                    vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__result[1U])) 
                                    - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__div0__DOT__reg32)))) 
                                >> 0x20U));
        vcdp->chgArray(c+6985,(__Vtemp4),65);
        vcdp->chgBit(c+7009,((0x73U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))));
        vcdp->chgBus(c+7017,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
        vcdp->chgQuad(c+7025,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mcycle),64);
        vcdp->chgQuad(c+7041,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__minstret),64);
        vcdp->chgBit(c+7057,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mstatus_mpie));
        vcdp->chgBit(c+7065,(((0x300U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        vcdp->chgBus(c+7073,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_external) 
                               << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_timer) 
                                            << 7U) 
                                           | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mie_software) 
                                              << 3U)))),32);
        vcdp->chgBit(c+7081,(((0x305U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        vcdp->chgBus(c+7089,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mscratch),32);
        vcdp->chgBit(c+7097,(((0x340U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        vcdp->chgBit(c+7105,(((0x341U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        vcdp->chgBus(c+7113,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__interrupt_type) 
                               << 0x1fU) | ((vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause_rem 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause)))),32);
        vcdp->chgBus(c+7121,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause),4);
        vcdp->chgBus(c+7129,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__cause_rem),27);
        vcdp->chgBit(c+7137,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__interrupt_type));
        vcdp->chgBus(c+7145,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_external) 
                               << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_timer) 
                                            << 7U) 
                                           | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mip_software) 
                                              << 3U)))),32);
        vcdp->chgBus(c+7153,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtval),32);
        vcdp->chgBit(c+7161,(((0x343U == vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o) 
                              & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        vcdp->chgBus(c+7169,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S),4);
        vcdp->chgBit(c+7177,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)));
        vcdp->chgBit(c+7185,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                    >> 1U))));
        vcdp->chgBus(c+7193,((0x3fffffffU & (vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec 
                                             >> 2U))),30);
        vcdp->chgBus(c+7201,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                               ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec)
                                   ? ((0xfffffffcU 
                                       & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec) 
                                      + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                         << 2U)) : 
                                  (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))
                               : (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))),32);
        vcdp->chgBus(c+7209,(((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec)
                               ? ((0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec) 
                                  + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                     << 2U)) : (0xfffffffcU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__csr_file0__DOT__mtvec))),32);
        vcdp->chgBus(c+7217,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                              << 2U)),32);
        vcdp->chgBit(c+7225,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception));
    }
}

void Vtest_top::traceChgThis__10(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+7233,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                               ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                   [(0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)] 
                                   << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                 [(0x1fffffU 
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
                               : 0U)),32);
    }
}

void Vtest_top::traceChgThis__11(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+7241,(vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__current_state),2);
        vcdp->chgBus(c+7249,(vlSymsp->TOP__test_top__core_top0.__PVT__aligner0__DOT__next_state),2);
        vcdp->chgBus(c+7257,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__mul0__DOT__current_state),2);
    }
}

void Vtest_top::traceChgThis__12(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+7265,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
        vcdp->chgBus(c+7273,(((IData)(4U) + vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),32);
        vcdp->chgBit(c+7281,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire 
                                    >> 1U))));
        vcdp->chgBus(c+7289,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
    }
}

void Vtest_top::traceChgThis__13(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+7297,(vlTOPp->rst_i));
        vcdp->chgBit(c+7305,(vlTOPp->clk_i));
        vcdp->chgBit(c+7313,(vlTOPp->halt_o));
        vcdp->chgBit(c+7321,(((~ (IData)(vlTOPp->rst_i)) 
                              & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
        vcdp->chgBit(c+7329,((1U & ((~ ((IData)(vlTOPp->rst_i) 
                                        | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))) 
                                    & ((0x4000U & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                        ? ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0xdU) 
                                           | ((~ (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
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
                                        : ((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
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
                                                        >> 0x19U)))))))))));
        vcdp->chgBit(c+7337,(((~ (IData)(vlTOPp->rst_i)) 
                              & ((0x23U != (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)) 
                                 & (3U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o))))));
        vcdp->chgBit(c+7345,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                       | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__exe_type_m0__DOT__isType_m)))))));
    }
}
