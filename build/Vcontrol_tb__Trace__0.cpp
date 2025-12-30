// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol_tb__Syms.h"


void Vcontrol_tb___024root__trace_chg_0_sub_0(Vcontrol_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontrol_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_chg_0\n"); );
    // Init
    Vcontrol_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_tb___024root*>(voidSelf);
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcontrol_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontrol_tb___024root__trace_chg_0_sub_0(Vcontrol_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->control_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->control_tb__DOT__en));
        bufp->chgSData(oldp+2,(vlSelf->control_tb__DOT__A
                               [0U][0U]),16);
        bufp->chgSData(oldp+3,(vlSelf->control_tb__DOT__A
                               [0U][1U]),16);
        bufp->chgSData(oldp+4,(vlSelf->control_tb__DOT__A
                               [0U][2U]),16);
        bufp->chgSData(oldp+5,(vlSelf->control_tb__DOT__A
                               [1U][0U]),16);
        bufp->chgSData(oldp+6,(vlSelf->control_tb__DOT__A
                               [1U][1U]),16);
        bufp->chgSData(oldp+7,(vlSelf->control_tb__DOT__A
                               [1U][2U]),16);
        bufp->chgSData(oldp+8,(vlSelf->control_tb__DOT__A
                               [2U][0U]),16);
        bufp->chgSData(oldp+9,(vlSelf->control_tb__DOT__A
                               [2U][1U]),16);
        bufp->chgSData(oldp+10,(vlSelf->control_tb__DOT__A
                                [2U][2U]),16);
        bufp->chgSData(oldp+11,(vlSelf->control_tb__DOT__B
                                [0U][0U]),16);
        bufp->chgSData(oldp+12,(vlSelf->control_tb__DOT__B
                                [0U][1U]),16);
        bufp->chgSData(oldp+13,(vlSelf->control_tb__DOT__B
                                [0U][2U]),16);
        bufp->chgSData(oldp+14,(vlSelf->control_tb__DOT__B
                                [1U][0U]),16);
        bufp->chgSData(oldp+15,(vlSelf->control_tb__DOT__B
                                [1U][1U]),16);
        bufp->chgSData(oldp+16,(vlSelf->control_tb__DOT__B
                                [1U][2U]),16);
        bufp->chgSData(oldp+17,(vlSelf->control_tb__DOT__B
                                [2U][0U]),16);
        bufp->chgSData(oldp+18,(vlSelf->control_tb__DOT__B
                                [2U][1U]),16);
        bufp->chgSData(oldp+19,(vlSelf->control_tb__DOT__B
                                [2U][2U]),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                     >> 9U))));
        bufp->chgSData(oldp+21,(vlSelf->control_tb__DOT__dut__DOT__A_row[0]),16);
        bufp->chgSData(oldp+22,(vlSelf->control_tb__DOT__dut__DOT__A_row[1]),16);
        bufp->chgSData(oldp+23,(vlSelf->control_tb__DOT__dut__DOT__A_row[2]),16);
        bufp->chgSData(oldp+24,(vlSelf->control_tb__DOT__dut__DOT__B_col[0]),16);
        bufp->chgSData(oldp+25,(vlSelf->control_tb__DOT__dut__DOT__B_col[1]),16);
        bufp->chgSData(oldp+26,(vlSelf->control_tb__DOT__dut__DOT__B_col[2]),16);
        bufp->chgCData(oldp+27,(vlSelf->control_tb__DOT__dut__DOT__divider),3);
        bufp->chgCData(oldp+28,(vlSelf->control_tb__DOT__dut__DOT__count),2);
        bufp->chgSData(oldp+29,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits),10);
        bufp->chgSData(oldp+30,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[0]),16);
        bufp->chgSData(oldp+31,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[1]),16);
        bufp->chgSData(oldp+32,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[2]),16);
        bufp->chgSData(oldp+33,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[3]),16);
        bufp->chgSData(oldp+34,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[4]),16);
        bufp->chgSData(oldp+35,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[5]),16);
        bufp->chgSData(oldp+36,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[6]),16);
        bufp->chgSData(oldp+37,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[7]),16);
        bufp->chgSData(oldp+38,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[8]),16);
        bufp->chgSData(oldp+39,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[0]),16);
        bufp->chgSData(oldp+40,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[1]),16);
        bufp->chgSData(oldp+41,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[2]),16);
        bufp->chgSData(oldp+42,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[3]),16);
        bufp->chgSData(oldp+43,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[4]),16);
        bufp->chgSData(oldp+44,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[5]),16);
        bufp->chgSData(oldp+45,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[6]),16);
        bufp->chgSData(oldp+46,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[7]),16);
        bufp->chgSData(oldp+47,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[8]),16);
        bufp->chgIData(oldp+48,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [0U][0U]),32);
        bufp->chgIData(oldp+49,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [0U][1U]),32);
        bufp->chgIData(oldp+50,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [0U][2U]),32);
        bufp->chgIData(oldp+51,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [1U][0U]),32);
        bufp->chgIData(oldp+52,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [1U][1U]),32);
        bufp->chgIData(oldp+53,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [1U][2U]),32);
        bufp->chgIData(oldp+54,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [2U][0U]),32);
        bufp->chgIData(oldp+55,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [2U][1U]),32);
        bufp->chgIData(oldp+56,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                                [2U][2U]),32);
        bufp->chgSData(oldp+57,(vlSelf->control_tb__DOT__dut__DOT__A_row
                                [0U]),16);
        bufp->chgSData(oldp+58,(vlSelf->control_tb__DOT__dut__DOT__B_col
                                [0U]),16);
        bufp->chgIData(oldp+59,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc),32);
        bufp->chgSData(oldp+60,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out),16);
        bufp->chgSData(oldp+61,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out),16);
        bufp->chgBit(oldp+62,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out));
        bufp->chgIData(oldp+63,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__mult1),32);
        bufp->chgCData(oldp+64,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift),3);
        bufp->chgSData(oldp+65,(vlSelf->control_tb__DOT__dut__DOT__B_col
                                [1U]),16);
        bufp->chgBit(oldp+66,((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits))));
        bufp->chgIData(oldp+67,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc),32);
        bufp->chgSData(oldp+68,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out),16);
        bufp->chgSData(oldp+69,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out),16);
        bufp->chgBit(oldp+70,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out));
        bufp->chgIData(oldp+71,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__mult1),32);
        bufp->chgCData(oldp+72,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift),3);
        bufp->chgSData(oldp+73,(vlSelf->control_tb__DOT__dut__DOT__B_col
                                [2U]),16);
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                     >> 1U))));
        bufp->chgIData(oldp+75,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc),32);
        bufp->chgSData(oldp+76,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out),16);
        bufp->chgSData(oldp+77,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out),16);
        bufp->chgBit(oldp+78,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out));
        bufp->chgIData(oldp+79,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__mult1),32);
        bufp->chgCData(oldp+80,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift),3);
        bufp->chgSData(oldp+81,(vlSelf->control_tb__DOT__dut__DOT__A_row
                                [1U]),16);
        bufp->chgBit(oldp+82,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                     >> 2U))));
        bufp->chgIData(oldp+83,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc),32);
        bufp->chgSData(oldp+84,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out),16);
        bufp->chgSData(oldp+85,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out),16);
        bufp->chgBit(oldp+86,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out));
        bufp->chgIData(oldp+87,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__mult1),32);
        bufp->chgCData(oldp+88,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift),3);
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                     >> 3U))));
        bufp->chgIData(oldp+90,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc),32);
        bufp->chgSData(oldp+91,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out),16);
        bufp->chgSData(oldp+92,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out),16);
        bufp->chgBit(oldp+93,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out));
        bufp->chgIData(oldp+94,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__mult1),32);
        bufp->chgCData(oldp+95,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift),3);
        bufp->chgBit(oldp+96,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                     >> 4U))));
        bufp->chgIData(oldp+97,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc),32);
        bufp->chgSData(oldp+98,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out),16);
        bufp->chgSData(oldp+99,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out),16);
        bufp->chgBit(oldp+100,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out));
        bufp->chgIData(oldp+101,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__mult1),32);
        bufp->chgCData(oldp+102,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift),3);
        bufp->chgSData(oldp+103,(vlSelf->control_tb__DOT__dut__DOT__A_row
                                 [2U]),16);
        bufp->chgBit(oldp+104,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                      >> 5U))));
        bufp->chgIData(oldp+105,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc),32);
        bufp->chgSData(oldp+106,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out),16);
        bufp->chgSData(oldp+107,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out),16);
        bufp->chgBit(oldp+108,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out));
        bufp->chgIData(oldp+109,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__mult1),32);
        bufp->chgCData(oldp+110,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift),3);
        bufp->chgBit(oldp+111,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                      >> 6U))));
        bufp->chgIData(oldp+112,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc),32);
        bufp->chgSData(oldp+113,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out),16);
        bufp->chgSData(oldp+114,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out),16);
        bufp->chgBit(oldp+115,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out));
        bufp->chgIData(oldp+116,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__mult1),32);
        bufp->chgCData(oldp+117,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift),3);
        bufp->chgBit(oldp+118,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                      >> 7U))));
        bufp->chgIData(oldp+119,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc),32);
        bufp->chgSData(oldp+120,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out),16);
        bufp->chgSData(oldp+121,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out),16);
        bufp->chgBit(oldp+122,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out));
        bufp->chgIData(oldp+123,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__mult1),32);
        bufp->chgCData(oldp+124,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift),3);
        bufp->chgIData(oldp+125,(vlSelf->control_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+126,(vlSelf->control_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+127,(vlSelf->control_tb__DOT__dut__DOT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+128,(vlSelf->control_tb__DOT__result
                                 [0U][0U]),32);
        bufp->chgIData(oldp+129,(vlSelf->control_tb__DOT__result
                                 [0U][1U]),32);
        bufp->chgIData(oldp+130,(vlSelf->control_tb__DOT__result
                                 [0U][2U]),32);
        bufp->chgIData(oldp+131,(vlSelf->control_tb__DOT__result
                                 [1U][0U]),32);
        bufp->chgIData(oldp+132,(vlSelf->control_tb__DOT__result
                                 [1U][1U]),32);
        bufp->chgIData(oldp+133,(vlSelf->control_tb__DOT__result
                                 [1U][2U]),32);
        bufp->chgIData(oldp+134,(vlSelf->control_tb__DOT__result
                                 [2U][0U]),32);
        bufp->chgIData(oldp+135,(vlSelf->control_tb__DOT__result
                                 [2U][1U]),32);
        bufp->chgIData(oldp+136,(vlSelf->control_tb__DOT__result
                                 [2U][2U]),32);
    }
    bufp->chgBit(oldp+137,(vlSelf->control_tb__DOT__clk));
    bufp->chgBit(oldp+138,(vlSelf->control_tb__DOT__counter_en));
    bufp->chgWData(oldp+139,(vlSelf->control_tb__DOT__counter),100);
}

void Vcontrol_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_cleanup\n"); );
    // Init
    Vcontrol_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_tb___024root*>(voidSelf);
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
