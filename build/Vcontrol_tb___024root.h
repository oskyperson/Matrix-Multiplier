// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol_tb.h for the primary calling header

#ifndef VERILATED_VCONTROL_TB___024ROOT_H_
#define VERILATED_VCONTROL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcontrol_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontrol_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ control_tb__DOT__clk;
        CData/*0:0*/ control_tb__DOT__rst;
        CData/*0:0*/ control_tb__DOT__en;
        CData/*0:0*/ control_tb__DOT__counter_en;
        CData/*2:0*/ control_tb__DOT__dut__DOT__divider;
        CData/*1:0*/ control_tb__DOT__dut__DOT__count;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out;
        CData/*0:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
        CData/*2:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift;
        CData/*0:0*/ __Vdlyvset__control_tb__DOT__result__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_tb__DOT__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ control_tb__DOT__dut__DOT____Vlvbound_h8971e76d__0;
        SData/*15:0*/ control_tb__DOT__dut__DOT____Vlvbound_h5b5a13c8__0;
        SData/*9:0*/ control_tb__DOT__dut__DOT__array__DOT__valid_bits;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out;
        SData/*15:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out;
        VlWide<4>/*99:0*/ control_tb__DOT__counter;
        IData/*31:0*/ control_tb__DOT__dut__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ control_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ control_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc;
    };
    struct {
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__mult1;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__mult1;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__mult1;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__mult1;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__mult1;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__mult1;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__mult1;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__mult1;
        IData/*31:0*/ control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__mult1;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 3> control_tb__DOT__A;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 3>, 3> control_tb__DOT__B;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 3> control_tb__DOT__result;
        VlUnpacked<SData/*15:0*/, 3> control_tb__DOT__dut__DOT__A_row;
        VlUnpacked<SData/*15:0*/, 3> control_tb__DOT__dut__DOT__B_col;
        VlUnpacked<SData/*15:0*/, 9> control_tb__DOT__dut__DOT__array__DOT__A_pass;
        VlUnpacked<SData/*15:0*/, 9> control_tb__DOT__dut__DOT__array__DOT__B_pass;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 3> control_tb__DOT__dut__DOT__array__DOT__acc_arr;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9e28a54c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontrol_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol_tb___024root(Vcontrol_tb__Syms* symsp, const char* v__name);
    ~Vcontrol_tb___024root();
    VL_UNCOPYABLE(Vcontrol_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
