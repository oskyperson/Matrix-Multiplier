// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol_tb__Syms.h"


VL_ATTR_COLD void Vcontrol_tb___024root__trace_init_sub__TOP__0(Vcontrol_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("control_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"counter_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+3,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+9,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+12,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+15,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+129,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+132,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+135,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declArray(c+140,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+3,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+9,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+12,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+15,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+129,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+132,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+135,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+21,0,"result_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("B_col", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+28,0,"divider",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("B_col", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+129,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+132,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+135,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+21,0,"result_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"valid_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("A_pass", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("B_pass", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("acc_arr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+49,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+52,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+55,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+145,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("left_col", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+146,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+63,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+147,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("top_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+67,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+71,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+148,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("top_row", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+75,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+79,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("left_col", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+83,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+87,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("filler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+90,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+93,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+94,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("filler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+97,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+101,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+152,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("left_col", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+105,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+108,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+109,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("filler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+93,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+112,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+116,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FULL_SYSTOLIC[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+154,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("filler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+119,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"A_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+122,0,"B_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+123,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"mult1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"valid_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+127,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcontrol_tb___024root__trace_init_top(Vcontrol_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_init_top\n"); );
    // Body
    Vcontrol_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcontrol_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcontrol_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcontrol_tb___024root__trace_register(Vcontrol_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vcontrol_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcontrol_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcontrol_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcontrol_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcontrol_tb___024root__trace_const_0_sub_0(Vcontrol_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcontrol_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_const_0\n"); );
    // Init
    Vcontrol_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_tb___024root*>(voidSelf);
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcontrol_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcontrol_tb___024root__trace_const_0_sub_0(Vcontrol_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+144,(3U),32);
    bufp->fullIData(oldp+145,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__acc),32);
    bufp->fullBit(oldp+146,(1U));
    bufp->fullIData(oldp+147,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__acc),32);
    bufp->fullIData(oldp+148,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__acc),32);
    bufp->fullIData(oldp+149,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__acc),32);
    bufp->fullIData(oldp+150,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__acc),32);
    bufp->fullIData(oldp+151,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__acc),32);
    bufp->fullIData(oldp+152,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__acc),32);
    bufp->fullIData(oldp+153,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__acc),32);
    bufp->fullIData(oldp+154,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__acc),32);
}

VL_ATTR_COLD void Vcontrol_tb___024root__trace_full_0_sub_0(Vcontrol_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcontrol_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_full_0\n"); );
    // Init
    Vcontrol_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_tb___024root*>(voidSelf);
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcontrol_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcontrol_tb___024root__trace_full_0_sub_0(Vcontrol_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->control_tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->control_tb__DOT__en));
    bufp->fullSData(oldp+3,(vlSelf->control_tb__DOT__A
                            [0U][0U]),16);
    bufp->fullSData(oldp+4,(vlSelf->control_tb__DOT__A
                            [0U][1U]),16);
    bufp->fullSData(oldp+5,(vlSelf->control_tb__DOT__A
                            [0U][2U]),16);
    bufp->fullSData(oldp+6,(vlSelf->control_tb__DOT__A
                            [1U][0U]),16);
    bufp->fullSData(oldp+7,(vlSelf->control_tb__DOT__A
                            [1U][1U]),16);
    bufp->fullSData(oldp+8,(vlSelf->control_tb__DOT__A
                            [1U][2U]),16);
    bufp->fullSData(oldp+9,(vlSelf->control_tb__DOT__A
                            [2U][0U]),16);
    bufp->fullSData(oldp+10,(vlSelf->control_tb__DOT__A
                             [2U][1U]),16);
    bufp->fullSData(oldp+11,(vlSelf->control_tb__DOT__A
                             [2U][2U]),16);
    bufp->fullSData(oldp+12,(vlSelf->control_tb__DOT__B
                             [0U][0U]),16);
    bufp->fullSData(oldp+13,(vlSelf->control_tb__DOT__B
                             [0U][1U]),16);
    bufp->fullSData(oldp+14,(vlSelf->control_tb__DOT__B
                             [0U][2U]),16);
    bufp->fullSData(oldp+15,(vlSelf->control_tb__DOT__B
                             [1U][0U]),16);
    bufp->fullSData(oldp+16,(vlSelf->control_tb__DOT__B
                             [1U][1U]),16);
    bufp->fullSData(oldp+17,(vlSelf->control_tb__DOT__B
                             [1U][2U]),16);
    bufp->fullSData(oldp+18,(vlSelf->control_tb__DOT__B
                             [2U][0U]),16);
    bufp->fullSData(oldp+19,(vlSelf->control_tb__DOT__B
                             [2U][1U]),16);
    bufp->fullSData(oldp+20,(vlSelf->control_tb__DOT__B
                             [2U][2U]),16);
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                  >> 9U))));
    bufp->fullSData(oldp+22,(vlSelf->control_tb__DOT__dut__DOT__A_row[0]),16);
    bufp->fullSData(oldp+23,(vlSelf->control_tb__DOT__dut__DOT__A_row[1]),16);
    bufp->fullSData(oldp+24,(vlSelf->control_tb__DOT__dut__DOT__A_row[2]),16);
    bufp->fullSData(oldp+25,(vlSelf->control_tb__DOT__dut__DOT__B_col[0]),16);
    bufp->fullSData(oldp+26,(vlSelf->control_tb__DOT__dut__DOT__B_col[1]),16);
    bufp->fullSData(oldp+27,(vlSelf->control_tb__DOT__dut__DOT__B_col[2]),16);
    bufp->fullCData(oldp+28,(vlSelf->control_tb__DOT__dut__DOT__divider),3);
    bufp->fullCData(oldp+29,(vlSelf->control_tb__DOT__dut__DOT__count),2);
    bufp->fullSData(oldp+30,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits),10);
    bufp->fullSData(oldp+31,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[0]),16);
    bufp->fullSData(oldp+32,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[1]),16);
    bufp->fullSData(oldp+33,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[2]),16);
    bufp->fullSData(oldp+34,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[3]),16);
    bufp->fullSData(oldp+35,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[4]),16);
    bufp->fullSData(oldp+36,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[5]),16);
    bufp->fullSData(oldp+37,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[6]),16);
    bufp->fullSData(oldp+38,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[7]),16);
    bufp->fullSData(oldp+39,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__A_pass[8]),16);
    bufp->fullSData(oldp+40,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[0]),16);
    bufp->fullSData(oldp+41,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[1]),16);
    bufp->fullSData(oldp+42,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[2]),16);
    bufp->fullSData(oldp+43,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[3]),16);
    bufp->fullSData(oldp+44,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[4]),16);
    bufp->fullSData(oldp+45,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[5]),16);
    bufp->fullSData(oldp+46,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[6]),16);
    bufp->fullSData(oldp+47,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[7]),16);
    bufp->fullSData(oldp+48,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__B_pass[8]),16);
    bufp->fullIData(oldp+49,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [0U][0U]),32);
    bufp->fullIData(oldp+50,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [0U][1U]),32);
    bufp->fullIData(oldp+51,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [0U][2U]),32);
    bufp->fullIData(oldp+52,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [1U][0U]),32);
    bufp->fullIData(oldp+53,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [1U][1U]),32);
    bufp->fullIData(oldp+54,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [1U][2U]),32);
    bufp->fullIData(oldp+55,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [2U][0U]),32);
    bufp->fullIData(oldp+56,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [2U][1U]),32);
    bufp->fullIData(oldp+57,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__acc_arr
                             [2U][2U]),32);
    bufp->fullSData(oldp+58,(vlSelf->control_tb__DOT__dut__DOT__A_row
                             [0U]),16);
    bufp->fullSData(oldp+59,(vlSelf->control_tb__DOT__dut__DOT__B_col
                             [0U]),16);
    bufp->fullIData(oldp+60,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__acc),32);
    bufp->fullSData(oldp+61,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__A_out),16);
    bufp->fullSData(oldp+62,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__B_out),16);
    bufp->fullBit(oldp+63,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__valid_out));
    bufp->fullIData(oldp+64,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__mult1),32);
    bufp->fullCData(oldp+65,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__0__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift),3);
    bufp->fullSData(oldp+66,(vlSelf->control_tb__DOT__dut__DOT__B_col
                             [1U]),16);
    bufp->fullBit(oldp+67,((1U & (IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits))));
    bufp->fullIData(oldp+68,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__acc),32);
    bufp->fullSData(oldp+69,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__A_out),16);
    bufp->fullSData(oldp+70,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__B_out),16);
    bufp->fullBit(oldp+71,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__valid_out));
    bufp->fullIData(oldp+72,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__mult1),32);
    bufp->fullCData(oldp+73,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__1__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift),3);
    bufp->fullSData(oldp+74,(vlSelf->control_tb__DOT__dut__DOT__B_col
                             [2U]),16);
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                  >> 1U))));
    bufp->fullIData(oldp+76,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__acc),32);
    bufp->fullSData(oldp+77,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__A_out),16);
    bufp->fullSData(oldp+78,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__B_out),16);
    bufp->fullBit(oldp+79,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__valid_out));
    bufp->fullIData(oldp+80,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__mult1),32);
    bufp->fullCData(oldp+81,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__2__KET____DOT__genblk1__DOT__top_row__DOT__valid_shift),3);
    bufp->fullSData(oldp+82,(vlSelf->control_tb__DOT__dut__DOT__A_row
                             [1U]),16);
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                  >> 2U))));
    bufp->fullIData(oldp+84,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__acc),32);
    bufp->fullSData(oldp+85,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__A_out),16);
    bufp->fullSData(oldp+86,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__B_out),16);
    bufp->fullBit(oldp+87,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__valid_out));
    bufp->fullIData(oldp+88,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__mult1),32);
    bufp->fullCData(oldp+89,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__3__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift),3);
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                  >> 3U))));
    bufp->fullIData(oldp+91,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__acc),32);
    bufp->fullSData(oldp+92,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__A_out),16);
    bufp->fullSData(oldp+93,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__B_out),16);
    bufp->fullBit(oldp+94,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__valid_out));
    bufp->fullIData(oldp+95,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__mult1),32);
    bufp->fullCData(oldp+96,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__4__KET____DOT__genblk1__DOT__filler__DOT__valid_shift),3);
    bufp->fullBit(oldp+97,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                  >> 4U))));
    bufp->fullIData(oldp+98,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__acc),32);
    bufp->fullSData(oldp+99,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__A_out),16);
    bufp->fullSData(oldp+100,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__B_out),16);
    bufp->fullBit(oldp+101,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__valid_out));
    bufp->fullIData(oldp+102,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__mult1),32);
    bufp->fullCData(oldp+103,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__5__KET____DOT__genblk1__DOT__filler__DOT__valid_shift),3);
    bufp->fullSData(oldp+104,(vlSelf->control_tb__DOT__dut__DOT__A_row
                              [2U]),16);
    bufp->fullBit(oldp+105,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                   >> 5U))));
    bufp->fullIData(oldp+106,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__acc),32);
    bufp->fullSData(oldp+107,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__A_out),16);
    bufp->fullSData(oldp+108,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__B_out),16);
    bufp->fullBit(oldp+109,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__valid_out));
    bufp->fullIData(oldp+110,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__mult1),32);
    bufp->fullCData(oldp+111,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__6__KET____DOT__genblk1__DOT__left_col__DOT__valid_shift),3);
    bufp->fullBit(oldp+112,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                   >> 6U))));
    bufp->fullIData(oldp+113,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__acc),32);
    bufp->fullSData(oldp+114,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__A_out),16);
    bufp->fullSData(oldp+115,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__B_out),16);
    bufp->fullBit(oldp+116,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__valid_out));
    bufp->fullIData(oldp+117,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__mult1),32);
    bufp->fullCData(oldp+118,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__7__KET____DOT__genblk1__DOT__filler__DOT__valid_shift),3);
    bufp->fullBit(oldp+119,((1U & ((IData)(vlSelf->control_tb__DOT__dut__DOT__array__DOT__valid_bits) 
                                   >> 7U))));
    bufp->fullIData(oldp+120,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__acc),32);
    bufp->fullSData(oldp+121,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__A_out),16);
    bufp->fullSData(oldp+122,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__B_out),16);
    bufp->fullBit(oldp+123,(vlSelf->control_tb__DOT__dut__DOT__array__DOT____Vcellout__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__valid_out));
    bufp->fullIData(oldp+124,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__mult1),32);
    bufp->fullCData(oldp+125,(vlSelf->control_tb__DOT__dut__DOT__array__DOT__FULL_SYSTOLIC__BRA__8__KET____DOT__genblk1__DOT__filler__DOT__valid_shift),3);
    bufp->fullIData(oldp+126,(vlSelf->control_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+127,(vlSelf->control_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+128,(vlSelf->control_tb__DOT__dut__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+129,(vlSelf->control_tb__DOT__result
                              [0U][0U]),32);
    bufp->fullIData(oldp+130,(vlSelf->control_tb__DOT__result
                              [0U][1U]),32);
    bufp->fullIData(oldp+131,(vlSelf->control_tb__DOT__result
                              [0U][2U]),32);
    bufp->fullIData(oldp+132,(vlSelf->control_tb__DOT__result
                              [1U][0U]),32);
    bufp->fullIData(oldp+133,(vlSelf->control_tb__DOT__result
                              [1U][1U]),32);
    bufp->fullIData(oldp+134,(vlSelf->control_tb__DOT__result
                              [1U][2U]),32);
    bufp->fullIData(oldp+135,(vlSelf->control_tb__DOT__result
                              [2U][0U]),32);
    bufp->fullIData(oldp+136,(vlSelf->control_tb__DOT__result
                              [2U][1U]),32);
    bufp->fullIData(oldp+137,(vlSelf->control_tb__DOT__result
                              [2U][2U]),32);
    bufp->fullBit(oldp+138,(vlSelf->control_tb__DOT__clk));
    bufp->fullBit(oldp+139,(vlSelf->control_tb__DOT__counter_en));
    bufp->fullWData(oldp+140,(vlSelf->control_tb__DOT__counter),100);
}
