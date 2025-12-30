// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_tb.h for the primary calling header

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb___024root.h"

VL_ATTR_COLD void Vcontrol_tb___024root___eval_static(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcontrol_tb___024root___eval_final(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__stl(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcontrol_tb___024root___eval_phase__stl(Vcontrol_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_tb___024root___eval_settle(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcontrol_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/control_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcontrol_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__stl(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontrol_tb___024root___stl_sequent__TOP__0(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[3U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[4U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[5U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[6U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[7U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[8U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[3U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[4U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[5U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[6U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[7U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[8U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[0U][0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[0U][1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[0U][2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[1U][0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[1U][1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[1U][2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[2U][0U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[2U][1U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc;
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[2U][2U] 
        = vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc;
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

VL_ATTR_COLD void Vcontrol_tb___024root___eval_stl(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcontrol_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vcontrol_tb___024root___eval_triggers__stl(Vcontrol_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcontrol_tb___024root___eval_phase__stl(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcontrol_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcontrol_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge control_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge control_tb.clk or negedge control_tb.rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__nba(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge control_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge control_tb.clk or negedge control_tb.rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontrol_tb___024root___ctor_var_reset(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->control_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__counter_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->control_tb__DOT__A[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->control_tb__DOT__B[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->control_tb__DOT__result[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    VL_RAND_RESET_W(100, vlSelf->control_tb__DOT__counter);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->control_tb__DOT__dut__DOT__A_row[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->control_tb__DOT__dut__DOT__B_col[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->control_tb__DOT__dut__DOT__divider = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__count = VL_RAND_RESET_I(2);
    vlSelf->control_tb__DOT__dut__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->control_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->control_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h8971e76d__0 = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0 = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out = VL_RAND_RESET_I(16);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__mult1 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__control_tb__DOT__result__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
