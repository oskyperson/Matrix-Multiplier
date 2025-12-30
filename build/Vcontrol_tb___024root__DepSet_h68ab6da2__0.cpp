// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_tb.h for the primary calling header

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb___024root.h"

VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0(Vcontrol_tb___024root* vlSelf);
VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__1(Vcontrol_tb___024root* vlSelf);

void Vcontrol_tb___024root___eval_initial(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0 
        = vlSelf->control_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__rst__0 
        = vlSelf->control_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__1(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->control_tb__DOT__clk = 0U;
    vlSelf->control_tb__DOT__en = 0U;
    vlSelf->control_tb__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h9e28a54c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge control_tb.clk)", 
                                                       "testbench/control_tb.sv", 
                                                       23);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9e28a54c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge control_tb.clk)", 
                                                       "testbench/control_tb.sv", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->control_tb__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h9e28a54c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge control_tb.clk)", 
                                                       "testbench/control_tb.sv", 
                                                       26);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9e28a54c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge control_tb.clk)", 
                                                       "testbench/control_tb.sv", 
                                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->control_tb__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h9e28a54c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge control_tb.clk)", 
                                                       "testbench/control_tb.sv", 
                                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9e28a54c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge control_tb.clk)", 
                                                       "testbench/control_tb.sv", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->control_tb__DOT__counter[0U] = 0U;
    vlSelf->control_tb__DOT__counter[1U] = 0U;
    vlSelf->control_tb__DOT__counter[2U] = 0U;
    vlSelf->control_tb__DOT__counter[3U] = 0U;
    vlSelf->control_tb__DOT__counter_en = 0U;
    vlSelf->control_tb__DOT__A[0U][0U] = 5U;
    vlSelf->control_tb__DOT__A[0U][1U] = 0xcU;
    vlSelf->control_tb__DOT__A[0U][2U] = 7U;
    vlSelf->control_tb__DOT__A[1U][0U] = 3U;
    vlSelf->control_tb__DOT__A[1U][1U] = 8U;
    vlSelf->control_tb__DOT__A[1U][2U] = 1U;
    vlSelf->control_tb__DOT__A[2U][0U] = 6U;
    vlSelf->control_tb__DOT__A[2U][1U] = 2U;
    vlSelf->control_tb__DOT__A[2U][2U] = 4U;
    vlSelf->control_tb__DOT__B[0U][0U] = 1U;
    vlSelf->control_tb__DOT__B[0U][1U] = 3U;
    vlSelf->control_tb__DOT__B[0U][2U] = 5U;
    vlSelf->control_tb__DOT__B[1U][0U] = 2U;
    vlSelf->control_tb__DOT__B[1U][1U] = 7U;
    vlSelf->control_tb__DOT__B[1U][2U] = 0U;
    vlSelf->control_tb__DOT__B[2U][0U] = 4U;
    vlSelf->control_tb__DOT__B[2U][1U] = 6U;
    vlSelf->control_tb__DOT__B[2U][2U] = 8U;
    VL_WRITEF("Matrix A:\n%0# %0# %0#\n%0# %0# %0#\n%0# %0# %0#\nMatrix B:\n%0# %0# %0#\n%0# %0# %0#\n%0# %0# %0#\n",
              16,vlSelf->control_tb__DOT__A[0U][0U],
              16,vlSelf->control_tb__DOT__A[0U][1U],
              16,vlSelf->control_tb__DOT__A[0U][2U],
              16,vlSelf->control_tb__DOT__A[1U][0U],
              16,vlSelf->control_tb__DOT__A[1U][1U],
              16,vlSelf->control_tb__DOT__A[1U][2U],
              16,vlSelf->control_tb__DOT__A[2U][0U],
              16,vlSelf->control_tb__DOT__A[2U][1U],
              16,vlSelf->control_tb__DOT__A[2U][2U],
              16,vlSelf->control_tb__DOT__B[0U][0U],
              16,vlSelf->control_tb__DOT__B[0U][1U],
              16,vlSelf->control_tb__DOT__B[0U][2U],
              16,vlSelf->control_tb__DOT__B[1U][0U],
              16,vlSelf->control_tb__DOT__B[1U][1U],
              16,vlSelf->control_tb__DOT__B[1U][2U],
              16,vlSelf->control_tb__DOT__B[2U][0U],
              16,vlSelf->control_tb__DOT__B[2U][1U],
              16,vlSelf->control_tb__DOT__B[2U][2U]);
    vlSelf->control_tb__DOT__en = 1U;
    vlSelf->control_tb__DOT__counter_en = 1U;
    VL_WRITEF("BLAH BLAH\n");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vcontrol_tb___024root___eval_act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcontrol_tb___024root___nba_sequent__TOP__0(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__control_tb__DOT__dut__DOT__count;
    __Vdly__control_tb__DOT__dut__DOT__count = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__divider;
    __Vdly__control_tb__DOT__dut__DOT__divider = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out = 0;
    SData/*15:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out = 0;
    CData/*2:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0;
    CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out = 0;
    // Body
    vlSelf->__Vdlyvset__control_tb__DOT__result__v0 = 0U;
    __Vdly__control_tb__DOT__dut__DOT__divider = vlSelf->control_tb__DOT__dut__DOT__divider;
    __Vdly__control_tb__DOT__dut__DOT__count = vlSelf->control_tb__DOT__dut__DOT__count;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out;
    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out;
    if (vlSelf->control_tb__DOT__rst) {
        vlSelf->control_tb__DOT__dut__DOT__unnamedblk3__DOT__i = 3U;
        if ((2U == (IData)(vlSelf->control_tb__DOT__dut__DOT__divider))) {
            __Vdly__control_tb__DOT__dut__DOT__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->control_tb__DOT__dut__DOT__count)));
            __Vdly__control_tb__DOT__dut__DOT__divider = 0U;
        } else {
            __Vdly__control_tb__DOT__dut__DOT__divider 
                = (7U & ((IData)(1U) + (IData)(vlSelf->control_tb__DOT__dut__DOT__divider)));
        }
        vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h8971e76d__0 
            = vlSelf->control_tb__DOT__A[((2U >= (IData)(vlSelf->control_tb__DOT__dut__DOT__count))
                                           ? (IData)(vlSelf->control_tb__DOT__dut__DOT__count)
                                           : 0U)][0U];
        vlSelf->control_tb__DOT__dut__DOT__A_row[0U] 
            = vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h8971e76d__0;
        vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0 
            = ((2U >= (IData)(vlSelf->control_tb__DOT__dut__DOT__count))
                ? vlSelf->control_tb__DOT__B[0U][vlSelf->control_tb__DOT__dut__DOT__count]
                : 0U);
        vlSelf->control_tb__DOT__dut__DOT__B_col[0U] 
            = vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0;
        vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h8971e76d__0 
            = vlSelf->control_tb__DOT__A[((2U >= (IData)(vlSelf->control_tb__DOT__dut__DOT__count))
                                           ? (IData)(vlSelf->control_tb__DOT__dut__DOT__count)
                                           : 0U)][1U];
        vlSelf->control_tb__DOT__dut__DOT__A_row[1U] 
            = vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h8971e76d__0;
        if ((2U >= (IData)(vlSelf->control_tb__DOT__dut__DOT__count))) {
            vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0 
                = vlSelf->control_tb__DOT__B[1U][vlSelf->control_tb__DOT__dut__DOT__count];
            vlSelf->control_tb__DOT__dut__DOT__B_col[1U] 
                = vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0;
            vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0 
                = vlSelf->control_tb__DOT__B[2U][vlSelf->control_tb__DOT__dut__DOT__count];
        } else {
            vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0 = 0U;
            vlSelf->control_tb__DOT__dut__DOT__B_col[1U] 
                = vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0;
            vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0 = 0U;
        }
        vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h8971e76d__0 
            = vlSelf->control_tb__DOT__A[((2U >= (IData)(vlSelf->control_tb__DOT__dut__DOT__count))
                                           ? (IData)(vlSelf->control_tb__DOT__dut__DOT__count)
                                           : 0U)][2U];
        vlSelf->control_tb__DOT__dut__DOT__A_row[2U] 
            = vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h8971e76d__0;
        vlSelf->control_tb__DOT__dut__DOT__B_col[2U] 
            = vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0;
        if (vlSelf->control_tb__DOT__en) {
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__A_row
                [2U];
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__A_row
                [1U];
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__B_col
                [2U];
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__B_col
                [1U];
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__B_col
                [0U];
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__A_row
                [0U];
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
                = (1U | (6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift) 
                               << 1U)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__mult1 
                    = (vlSelf->control_tb__DOT__dut__DOT__A_row
                       [0U] * vlSelf->control_tb__DOT__dut__DOT__B_col
                       [0U]);
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
            }
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
                = ((6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift) 
                          << 1U)) | (1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                           >> 5U)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__mult1 
                    = (vlSelf->control_tb__DOT__dut__DOT__A_row
                       [2U] * (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out));
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
            }
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
                = ((6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift) 
                          << 1U)) | (1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                           >> 2U)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__mult1 
                    = (vlSelf->control_tb__DOT__dut__DOT__A_row
                       [1U] * (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out));
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
            }
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift 
                = ((6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift) 
                          << 1U)) | (1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                           >> 1U)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__mult1 
                    = ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out) 
                       * vlSelf->control_tb__DOT__dut__DOT__B_col
                       [2U]);
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out = 0U;
            }
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift 
                = ((6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift) 
                          << 1U)) | (1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__mult1 
                    = ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out) 
                       * vlSelf->control_tb__DOT__dut__DOT__B_col
                       [1U]);
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out = 0U;
            }
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
                = ((6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift) 
                          << 1U)) | (1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                           >> 7U)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__mult1 
                    = ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out) 
                       * (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out));
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
            }
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
                = ((6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift) 
                          << 1U)) | (1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                           >> 6U)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__mult1 
                    = ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out) 
                       * (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out));
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
            }
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
                = ((6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift) 
                          << 1U)) | (1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                           >> 4U)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__mult1 
                    = ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out) 
                       * (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out));
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
            }
            __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
                = ((6U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift) 
                          << 1U)) | (1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                           >> 3U)));
            if ((0U != (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift))) {
                if ((4U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift))) {
                    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc 
                        = (vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__mult1 
                           + vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc);
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0U;
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out = 1U;
                } else {
                    __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
                }
                vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__mult1 
                    = ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out) 
                       * (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out));
            } else {
                __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
            }
        } else {
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out;
            vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out;
            __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out 
                = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out;
        }
    } else {
        __Vdly__control_tb__DOT__dut__DOT__count = 3U;
        __Vdly__control_tb__DOT__dut__DOT__divider = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc = 0U;
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__mult1 = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out = 0U;
        __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->control_tb__DOT__rst)))) {
        vlSelf->control_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 3U;
        vlSelf->control_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
        vlSelf->__Vdlyvset__control_tb__DOT__result__v0 = 1U;
    }
    vlSelf->control_tb__DOT__dut__DOT__count = __Vdly__control_tb__DOT__dut__DOT__count;
    vlSelf->control_tb__DOT__dut__DOT__divider = __Vdly__control_tb__DOT__dut__DOT__divider;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out 
        = __Vdly__control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[8U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[8U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[7U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[6U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[5U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[0U][0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[3U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[2U][0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[1U][0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[0U][2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[0U][1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[7U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[5U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[2U][2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[6U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[4U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[2U][1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[4U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[1U][2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits 
        = ((0x200U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits)) 
           | (((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out) 
               << 8U) | (((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out) 
                          << 7U) | (((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out) 
                                     << 6U) | (((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out) 
                                                << 5U) 
                                               | (((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out))))))))));
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[3U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[1U][1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc;
}

VL_INLINE_OPT void Vcontrol_tb___024root___nba_sequent__TOP__1(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    VlWide<4>/*99:0*/ __Vdly__control_tb__DOT__counter;
    VL_ZERO_W(100, __Vdly__control_tb__DOT__counter);
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    __Vdly__control_tb__DOT__counter[0U] = vlSelf->control_tb__DOT__counter[0U];
    __Vdly__control_tb__DOT__counter[1U] = vlSelf->control_tb__DOT__counter[1U];
    __Vdly__control_tb__DOT__counter[2U] = vlSelf->control_tb__DOT__counter[2U];
    __Vdly__control_tb__DOT__counter[3U] = vlSelf->control_tb__DOT__counter[3U];
    if (VL_UNLIKELY(vlSelf->control_tb__DOT__counter_en)) {
        VL_WRITEF("CYCLE \n\n");
        __Vtemp_2[0U] = 1U;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_ADD_W(4, __Vtemp_3, __Vtemp_2, vlSelf->control_tb__DOT__counter);
        __Vdly__control_tb__DOT__counter[0U] = __Vtemp_3[0U];
        __Vdly__control_tb__DOT__counter[1U] = __Vtemp_3[1U];
        __Vdly__control_tb__DOT__counter[2U] = __Vtemp_3[2U];
        __Vdly__control_tb__DOT__counter[3U] = (0xfU 
                                                & __Vtemp_3[3U]);
        VL_WRITEF("%0# %0# %0#\n%0# %0# %0#\n%0# %0# %0#\n",
                  32,vlSelf->control_tb__DOT__result
                  [0U][0U],32,vlSelf->control_tb__DOT__result
                  [0U][1U],32,vlSelf->control_tb__DOT__result
                  [0U][2U],32,vlSelf->control_tb__DOT__result
                  [1U][0U],32,vlSelf->control_tb__DOT__result
                  [1U][1U],32,vlSelf->control_tb__DOT__result
                  [1U][2U],32,vlSelf->control_tb__DOT__result
                  [2U][0U],32,vlSelf->control_tb__DOT__result
                  [2U][1U],32,vlSelf->control_tb__DOT__result
                  [2U][2U]);
    }
    __Vtemp_4[0U] = 0x5fU;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    if (VL_UNLIKELY(VL_LT_W(4, __Vtemp_4, vlSelf->control_tb__DOT__counter))) {
        VL_FINISH_MT("testbench/control_tb.sv", 80, "");
        vlSelf->control_tb__DOT__counter_en = 0U;
    }
    vlSelf->control_tb__DOT__counter[0U] = __Vdly__control_tb__DOT__counter[0U];
    vlSelf->control_tb__DOT__counter[1U] = __Vdly__control_tb__DOT__counter[1U];
    vlSelf->control_tb__DOT__counter[2U] = __Vdly__control_tb__DOT__counter[2U];
    vlSelf->control_tb__DOT__counter[3U] = __Vdly__control_tb__DOT__counter[3U];
}

VL_INLINE_OPT void Vcontrol_tb___024root___nba_sequent__TOP__2(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__Vdlyvset__control_tb__DOT__result__v0) {
        vlSelf->control_tb__DOT__result[0U][0U] = 0U;
        vlSelf->control_tb__DOT__result[0U][1U] = 0U;
        vlSelf->control_tb__DOT__result[0U][2U] = 0U;
        vlSelf->control_tb__DOT__result[1U][0U] = 0U;
        vlSelf->control_tb__DOT__result[1U][1U] = 0U;
        vlSelf->control_tb__DOT__result[1U][2U] = 0U;
        vlSelf->control_tb__DOT__result[2U][0U] = 0U;
        vlSelf->control_tb__DOT__result[2U][1U] = 0U;
        vlSelf->control_tb__DOT__result[2U][2U] = 0U;
    }
    vlSelf->control_tb__DOT__result[2U][2U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [2U][2U];
    vlSelf->control_tb__DOT__result[2U][1U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [2U][1U];
    vlSelf->control_tb__DOT__result[2U][0U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [2U][0U];
    vlSelf->control_tb__DOT__result[1U][2U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [1U][2U];
    vlSelf->control_tb__DOT__result[1U][1U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [1U][1U];
    vlSelf->control_tb__DOT__result[1U][0U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [1U][0U];
    vlSelf->control_tb__DOT__result[0U][2U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [0U][2U];
    vlSelf->control_tb__DOT__result[0U][1U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [0U][1U];
    vlSelf->control_tb__DOT__result[0U][0U] = vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
        [0U][0U];
}

void Vcontrol_tb___024root___eval_nba(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vcontrol_tb___024root___timing_resume(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9e28a54c__0.resume("@(posedge control_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcontrol_tb___024root___timing_commit(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9e28a54c__0.commit("@(posedge control_tb.clk)");
    }
}

void Vcontrol_tb___024root___eval_triggers__act(Vcontrol_tb___024root* vlSelf);

bool Vcontrol_tb___024root___eval_phase__act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontrol_tb___024root___eval_triggers__act(vlSelf);
    Vcontrol_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcontrol_tb___024root___timing_resume(vlSelf);
        Vcontrol_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontrol_tb___024root___eval_phase__nba(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontrol_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__nba(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__act(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontrol_tb___024root___eval(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcontrol_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/control_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcontrol_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/control_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcontrol_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcontrol_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontrol_tb___024root___eval_debug_assertions(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
