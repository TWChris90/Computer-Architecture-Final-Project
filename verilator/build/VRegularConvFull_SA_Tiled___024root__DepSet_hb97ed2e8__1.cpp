// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegularConvFull_SA_Tiled.h for the primary calling header

#include "VRegularConvFull_SA_Tiled__pch.h"
#include "VRegularConvFull_SA_Tiled___024root.h"

void VRegularConvFull_SA_Tiled___024root___ico_sequent__TOP__0(VRegularConvFull_SA_Tiled___024root* vlSelf);

void VRegularConvFull_SA_Tiled___024root___eval_ico(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VRegularConvFull_SA_Tiled___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VRegularConvFull_SA_Tiled___024root___eval_triggers__ico(VRegularConvFull_SA_Tiled___024root* vlSelf);

bool VRegularConvFull_SA_Tiled___024root___eval_phase__ico(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VRegularConvFull_SA_Tiled___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VRegularConvFull_SA_Tiled___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VRegularConvFull_SA_Tiled___024root___eval_act(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_act\n"); );
}

VL_INLINE_OPT void VRegularConvFull_SA_Tiled___024root___nba_sequent__TOP__0(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__doneReg;
    __Vdly__RegularConvFull_SA_Tiled__DOT__doneReg = 0;
    CData/*3:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__posReg;
    __Vdly__RegularConvFull_SA_Tiled__DOT__posReg = 0;
    CData/*0:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__bufSel;
    __Vdly__RegularConvFull_SA_Tiled__DOT__bufSel = 0;
    CData/*6:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__gkIdx;
    __Vdly__RegularConvFull_SA_Tiled__DOT__gkIdx = 0;
    CData/*3:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__capIdx;
    __Vdly__RegularConvFull_SA_Tiled__DOT__capIdx = 0;
    CData/*2:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__tileIdx;
    __Vdly__RegularConvFull_SA_Tiled__DOT__tileIdx = 0;
    CData/*0:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__compValid;
    __Vdly__RegularConvFull_SA_Tiled__DOT__compValid = 0;
    CData/*0:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__compLastTile;
    __Vdly__RegularConvFull_SA_Tiled__DOT__compLastTile = 0;
    CData/*2:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__state;
    __Vdly__RegularConvFull_SA_Tiled__DOT__state = 0;
    CData/*0:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__running;
    __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__running = 0;
    CData/*6:0*/ __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx;
    __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx = 0;
    // Body
    __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx 
        = vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx;
    __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__running 
        = vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running;
    __Vdly__RegularConvFull_SA_Tiled__DOT__compLastTile 
        = vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile;
    __Vdly__RegularConvFull_SA_Tiled__DOT__compValid 
        = vlSelf->RegularConvFull_SA_Tiled__DOT__compValid;
    __Vdly__RegularConvFull_SA_Tiled__DOT__tileIdx 
        = vlSelf->RegularConvFull_SA_Tiled__DOT__tileIdx;
    __Vdly__RegularConvFull_SA_Tiled__DOT__capIdx = vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx;
    __Vdly__RegularConvFull_SA_Tiled__DOT__gkIdx = vlSelf->RegularConvFull_SA_Tiled__DOT__gkIdx;
    __Vdly__RegularConvFull_SA_Tiled__DOT__bufSel = vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel;
    __Vdly__RegularConvFull_SA_Tiled__DOT__doneReg 
        = vlSelf->RegularConvFull_SA_Tiled__DOT__doneReg;
    __Vdly__RegularConvFull_SA_Tiled__DOT__posReg = vlSelf->RegularConvFull_SA_Tiled__DOT__posReg;
    __Vdly__RegularConvFull_SA_Tiled__DOT__state = vlSelf->RegularConvFull_SA_Tiled__DOT__state;
    if (vlSelf->reset) {
        __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__running = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_8 = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__doneReg = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__posReg = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_9 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_0 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_1 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_2 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_3 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_4 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_5 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_6 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_7 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_8 = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_9 = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__bufSel = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__gkIdx = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__capIdx = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__tileIdx = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__compValid = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__compBufSel = 0U;
        vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__compLastTile = 0U;
        __Vdly__RegularConvFull_SA_Tiled__DOT__state = 0U;
    } else {
        vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__unnamedblk1__DOT___GEN_0 
            = (0x47U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx));
        __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__running 
            = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__im2col__io_start) 
               | ((~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running) 
                      & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__unnamedblk1__DOT___GEN_0))) 
                  & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)));
        if (vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__im2col__io_start) {
            __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx = 0U;
        } else if ((1U & (~ ((~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__unnamedblk1__DOT___GEN_0))))) {
            __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx)));
        }
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10 
            = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_7) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_8));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_21 
            = (0U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_22 
            = (1U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_23 
            = (2U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_24 
            = (3U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_25 
            = (4U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_26 
            = (5U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_27 
            = (6U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_28 
            = (7U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_29 
            = (8U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_30 
            = (9U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9 
            = (2U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_11 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (0U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg))))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_12 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (1U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg))))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_13 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (2U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg))))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_14 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (3U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg))))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_15 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (4U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg))))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_16 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (5U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg))))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_17 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (6U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg))))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_18 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (7U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg))))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_19 
            = (8U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_20 
            = (1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                     | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile)) 
                           & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_19)))));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31 
            = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
               & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__isLastGlobal 
            = (0x47U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__gkIdx));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__isTileEnd 
            = ((9U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx)) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__isLastGlobal));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_32 
            = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running) 
               & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__isTileEnd));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_33 
            = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
               & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_32));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_34 
            = (3U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state));
        vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_35 
            = (4U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state));
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_11)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_12)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_13)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_14)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_15)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_16)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_17)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_18)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_20)))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
            vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
        }
        __Vdly__RegularConvFull_SA_Tiled__DOT__doneReg 
            = ((~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_7)) 
               & (((~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_8) 
                        | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9)) 
                       | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_34))) 
                   & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_35)) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__doneReg)));
        if (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_7) {
            __Vdly__RegularConvFull_SA_Tiled__DOT__posReg = 0U;
            if (vlSelf->io_start) {
                __Vdly__RegularConvFull_SA_Tiled__DOT__state = 1U;
            }
        } else {
            vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36 
                = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid) 
                   & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile));
            if ((1U & (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_8) 
                           | (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                                 & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36)))) 
                          | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_19))))) {
                __Vdly__RegularConvFull_SA_Tiled__DOT__posReg 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg)));
            }
            if (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_8) {
                if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)))) {
                    __Vdly__RegularConvFull_SA_Tiled__DOT__state = 2U;
                }
            } else if (vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) {
                if (vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36) {
                    __Vdly__RegularConvFull_SA_Tiled__DOT__state 
                        = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_19)
                            ? 4U : 3U);
                }
            } else if (vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_34) {
                if ((1U & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)))) {
                    __Vdly__RegularConvFull_SA_Tiled__DOT__state = 1U;
                }
            } else if (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_35) 
                        & (~ (IData)(vlSelf->io_start)))) {
                __Vdly__RegularConvFull_SA_Tiled__DOT__state = 0U;
            }
        }
        if (vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_0 = 0U;
            vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_1 = 0U;
            vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_2 = 0U;
            vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_3 = 0U;
            vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_4 = 0U;
            vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_5 = 0U;
            vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_6 = 0U;
            vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_7 = 0U;
            __Vdly__RegularConvFull_SA_Tiled__DOT__gkIdx = 0U;
            __Vdly__RegularConvFull_SA_Tiled__DOT__capIdx = 0U;
            __Vdly__RegularConvFull_SA_Tiled__DOT__tileIdx = 0U;
        } else {
            if (vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) {
                __Vdly__RegularConvFull_SA_Tiled__DOT__gkIdx 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__gkIdx)));
                __Vdly__RegularConvFull_SA_Tiled__DOT__capIdx 
                    = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__isTileEnd)
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx))));
            }
            if (vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_33) {
                __Vdly__RegularConvFull_SA_Tiled__DOT__tileIdx 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__tileIdx)));
            }
            if (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                 & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid))) {
                vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_0 
                    = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0;
                vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_1 
                    = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1;
                vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_2 
                    = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2;
                vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_3 
                    = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3;
                vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_4 
                    = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4;
                vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_5 
                    = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5;
                vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_6 
                    = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6;
                vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_7 
                    = vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_21))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_22))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_23))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_24))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_25))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_26))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_27))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_28))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_29))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ ((((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9) 
                              & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
                             & (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel))) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_30))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_9 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_21))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_0 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_22))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_1 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_23))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_2 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_24))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_3 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_25))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_4 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_26))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_5 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_27))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_6 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_28))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_7 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_29))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_8 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_31) 
                             & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)) 
                            & (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_30))))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_9 
                = vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out;
        }
        __Vdly__RegularConvFull_SA_Tiled__DOT__bufSel 
            = ((~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10)) 
               & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_33) 
                  ^ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel)));
        __Vdly__RegularConvFull_SA_Tiled__DOT__compValid 
            = ((~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10)) 
               & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_9)
                   ? (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_32)
                   : (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compValid)));
        if ((1U & (~ ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_10) 
                      | (~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT___GEN_33)))))) {
            vlSelf->RegularConvFull_SA_Tiled__DOT__compBufSel 
                = vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel;
            vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx 
                = vlSelf->RegularConvFull_SA_Tiled__DOT__tileIdx;
            __Vdly__RegularConvFull_SA_Tiled__DOT__compLastTile 
                = vlSelf->RegularConvFull_SA_Tiled__DOT__unnamedblk1__DOT__isLastGlobal;
        }
    }
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx 
        = __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx;
    vlSelf->RegularConvFull_SA_Tiled__DOT__bufSel = __Vdly__RegularConvFull_SA_Tiled__DOT__bufSel;
    vlSelf->RegularConvFull_SA_Tiled__DOT__gkIdx = __Vdly__RegularConvFull_SA_Tiled__DOT__gkIdx;
    vlSelf->RegularConvFull_SA_Tiled__DOT__capIdx = __Vdly__RegularConvFull_SA_Tiled__DOT__capIdx;
    vlSelf->RegularConvFull_SA_Tiled__DOT__tileIdx 
        = __Vdly__RegularConvFull_SA_Tiled__DOT__tileIdx;
    vlSelf->RegularConvFull_SA_Tiled__DOT__compValid 
        = __Vdly__RegularConvFull_SA_Tiled__DOT__compValid;
    vlSelf->RegularConvFull_SA_Tiled__DOT__compLastTile 
        = __Vdly__RegularConvFull_SA_Tiled__DOT__compLastTile;
    vlSelf->RegularConvFull_SA_Tiled__DOT__doneReg 
        = __Vdly__RegularConvFull_SA_Tiled__DOT__doneReg;
    vlSelf->RegularConvFull_SA_Tiled__DOT__posReg = __Vdly__RegularConvFull_SA_Tiled__DOT__posReg;
    vlSelf->RegularConvFull_SA_Tiled__DOT__state = __Vdly__RegularConvFull_SA_Tiled__DOT__state;
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running 
        = __Vdly__RegularConvFull_SA_Tiled__DOT__im2col__DOT__running;
    vlSelf->io_y_out_0_0 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_0;
    vlSelf->io_y_out_0_1 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_1;
    vlSelf->io_y_out_0_2 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_2;
    vlSelf->io_y_out_0_3 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_3;
    vlSelf->io_y_out_0_4 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_4;
    vlSelf->io_y_out_0_5 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_5;
    vlSelf->io_y_out_0_6 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_6;
    vlSelf->io_y_out_0_7 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_7;
    vlSelf->io_y_out_0_8 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_0_8;
    vlSelf->io_y_out_1_0 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_0;
    vlSelf->io_y_out_1_1 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_1;
    vlSelf->io_y_out_1_2 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_2;
    vlSelf->io_y_out_1_3 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_3;
    vlSelf->io_y_out_1_4 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_4;
    vlSelf->io_y_out_1_5 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_5;
    vlSelf->io_y_out_1_6 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_6;
    vlSelf->io_y_out_1_7 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_7;
    vlSelf->io_y_out_1_8 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_1_8;
    vlSelf->io_y_out_2_0 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_0;
    vlSelf->io_y_out_2_1 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_1;
    vlSelf->io_y_out_2_2 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_2;
    vlSelf->io_y_out_2_3 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_3;
    vlSelf->io_y_out_2_4 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_4;
    vlSelf->io_y_out_2_5 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_5;
    vlSelf->io_y_out_2_6 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_6;
    vlSelf->io_y_out_2_7 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_7;
    vlSelf->io_y_out_2_8 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_2_8;
    vlSelf->io_y_out_3_0 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_0;
    vlSelf->io_y_out_3_1 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_1;
    vlSelf->io_y_out_3_2 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_2;
    vlSelf->io_y_out_3_3 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_3;
    vlSelf->io_y_out_3_4 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_4;
    vlSelf->io_y_out_3_5 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_5;
    vlSelf->io_y_out_3_6 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_6;
    vlSelf->io_y_out_3_7 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_7;
    vlSelf->io_y_out_3_8 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_3_8;
    vlSelf->io_y_out_4_0 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_0;
    vlSelf->io_y_out_4_1 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_1;
    vlSelf->io_y_out_4_2 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_2;
    vlSelf->io_y_out_4_3 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_3;
    vlSelf->io_y_out_4_4 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_4;
    vlSelf->io_y_out_4_5 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_5;
    vlSelf->io_y_out_4_6 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_6;
    vlSelf->io_y_out_4_7 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_7;
    vlSelf->io_y_out_4_8 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_4_8;
    vlSelf->io_y_out_5_0 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_0;
    vlSelf->io_y_out_5_1 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_1;
    vlSelf->io_y_out_5_2 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_2;
    vlSelf->io_y_out_5_3 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_3;
    vlSelf->io_y_out_5_4 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_4;
    vlSelf->io_y_out_5_5 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_5;
    vlSelf->io_y_out_5_6 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_6;
    vlSelf->io_y_out_5_7 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_7;
    vlSelf->io_y_out_5_8 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_5_8;
    vlSelf->io_y_out_6_0 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_0;
    vlSelf->io_y_out_6_1 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_1;
    vlSelf->io_y_out_6_2 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_2;
    vlSelf->io_y_out_6_3 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_3;
    vlSelf->io_y_out_6_4 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_4;
    vlSelf->io_y_out_6_5 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_5;
    vlSelf->io_y_out_6_6 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_6;
    vlSelf->io_y_out_6_7 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_7;
    vlSelf->io_y_out_6_8 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_6_8;
    vlSelf->io_y_out_7_0 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_0;
    vlSelf->io_y_out_7_1 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_1;
    vlSelf->io_y_out_7_2 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_2;
    vlSelf->io_y_out_7_3 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_3;
    vlSelf->io_y_out_7_4 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_4;
    vlSelf->io_y_out_7_5 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_5;
    vlSelf->io_y_out_7_6 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_6;
    vlSelf->io_y_out_7_7 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_7;
    vlSelf->io_y_out_7_8 = vlSelf->RegularConvFull_SA_Tiled__DOT__yReg_7_8;
    vlSelf->io_done = vlSelf->RegularConvFull_SA_Tiled__DOT__doneReg;
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_7 = 
        (0U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_8 = 
        (1U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state));
    vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__im2col__io_start 
        = ((0U != (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state)) 
           & ((~ (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)) 
              & (1U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state))));
    if (vlSelf->RegularConvFull_SA_Tiled__DOT__compBufSel) {
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_0 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_0;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_1 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_1;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_2 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_2;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_3 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_3;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_4 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_4;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_5 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_5;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_6 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_6;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_7 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_7;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_8 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_8;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_9 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf1_9;
    } else {
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_0 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_0;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_1 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_1;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_2 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_2;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_3 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_3;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_4 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_4;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_5 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_5;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_6 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_6;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_7 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_7;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_8 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_8;
        vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_9 
            = vlSelf->RegularConvFull_SA_Tiled__DOT__buf0_9;
    }
    vlSelf->__VdfgTmp_h253f9622__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_0) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_0));
    vlSelf->__VdfgTmp_h6f194d20__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_1) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_1));
    vlSelf->__VdfgTmp_h833787a9__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_2) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_2));
    vlSelf->__VdfgTmp_h343a0d58__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_3) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_3));
    vlSelf->__VdfgTmp_h51b718ad__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_4) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_4));
    vlSelf->__VdfgTmp_he7b49c68__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_5) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_5));
    vlSelf->__VdfgTmp_hf82e5777__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_6) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_6));
    vlSelf->__VdfgTmp_h60eec2de__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_7) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_7));
    vlSelf->__VdfgTmp_h44c2a434__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_8) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_8));
    vlSelf->__VdfgTmp_hec570ddb__0 = ((0xff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_9) 
                                                                 >> 7U)))) 
                                                  << 8U)) 
                                      | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT____Vcellinp__core__io_x_tile_9));
}

VL_INLINE_OPT void VRegularConvFull_SA_Tiled___024root___nba_sequent__TOP__1(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->RegularConvFull_SA_Tiled__DOT___im2col_io_a_out 
        = ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__running)
            ? (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(11,11,32, 
                                                       (((IData)(5U) 
                                                         * 
                                                         (((IData)(5U) 
                                                           * 
                                                           (0x7fU 
                                                            & VL_DIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U)))) 
                                                          + 
                                                          (0xfU 
                                                           & ((7U 
                                                               & VL_DIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                              + 
                                                              VL_DIV_III(4, 
                                                                         (0xfU 
                                                                          & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))) 
                                                        + 
                                                        (7U 
                                                         & ((3U 
                                                             & VL_MODDIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                            + 
                                                            (3U 
                                                             & VL_MODDIV_III(4, 
                                                                             (0xfU 
                                                                              & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))), 3U)))
                          ? 0U : (vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[
                                  (((IData)(7U) + (0x7ffU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (((IData)(5U) 
                                                                     * 
                                                                     (((IData)(5U) 
                                                                       * 
                                                                       (0x7fU 
                                                                        & VL_DIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U)))) 
                                                                      + 
                                                                      (0xfU 
                                                                       & ((7U 
                                                                           & VL_DIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                                          + 
                                                                          VL_DIV_III(4, 
                                                                                (0xfU 
                                                                                & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))) 
                                                                    + 
                                                                    (7U 
                                                                     & ((3U 
                                                                         & VL_MODDIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                                        + 
                                                                        (3U 
                                                                         & VL_MODDIV_III(4, 
                                                                                (0xfU 
                                                                                & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))), 3U))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (((IData)(5U) 
                                                                    * 
                                                                    (((IData)(5U) 
                                                                      * 
                                                                      (0x7fU 
                                                                       & VL_DIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U)))) 
                                                                     + 
                                                                     (0xfU 
                                                                      & ((7U 
                                                                          & VL_DIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                                         + 
                                                                         VL_DIV_III(4, 
                                                                                (0xfU 
                                                                                & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))) 
                                                                   + 
                                                                   (7U 
                                                                    & ((3U 
                                                                        & VL_MODDIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                                       + 
                                                                       (3U 
                                                                        & VL_MODDIV_III(4, 
                                                                                (0xfU 
                                                                                & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))), 3U))))) 
                        | (vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[
                           (0x3fU & (VL_SHIFTL_III(11,11,32, 
                                                   (((IData)(5U) 
                                                     * 
                                                     (((IData)(5U) 
                                                       * 
                                                       (0x7fU 
                                                        & VL_DIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U)))) 
                                                      + 
                                                      (0xfU 
                                                       & ((7U 
                                                           & VL_DIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                          + 
                                                          VL_DIV_III(4, 
                                                                     (0xfU 
                                                                      & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))) 
                                                    + 
                                                    (7U 
                                                     & ((3U 
                                                         & VL_MODDIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                        + 
                                                        (3U 
                                                         & VL_MODDIV_III(4, 
                                                                         (0xfU 
                                                                          & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))), 3U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (((IData)(5U) 
                                                                    * 
                                                                    (((IData)(5U) 
                                                                      * 
                                                                      (0x7fU 
                                                                       & VL_DIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U)))) 
                                                                     + 
                                                                     (0xfU 
                                                                      & ((7U 
                                                                          & VL_DIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                                         + 
                                                                         VL_DIV_III(4, 
                                                                                (0xfU 
                                                                                & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))) 
                                                                   + 
                                                                   (7U 
                                                                    & ((3U 
                                                                        & VL_MODDIV_III(4, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__posReg), (IData)(3U))) 
                                                                       + 
                                                                       (3U 
                                                                        & VL_MODDIV_III(4, 
                                                                                (0xfU 
                                                                                & VL_MODDIV_III(7, (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT__kIdx), (IData)(9U))), (IData)(3U)))))), 3U)))))
            : 0U);
    vlSelf->__VdfgTmp_h226cdba8__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(0xaU) 
                                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))));
    vlSelf->__VdfgTmp_h1caede9b__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h658a8d60__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h65e68f32__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h1a8248ae__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h611358c0__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h03a32599__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h211bf92b__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hef0116ef__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_he8ba7ba5__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(9U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_he2c76adf__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(0xaU) 
                                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))));
    vlSelf->__VdfgTmp_hfd816f10__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_ha6e4d3e7__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_ha648ddb9__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hfbed1925__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_ha262e947__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h8cf2040e__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_he27a4fa0__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h28503764__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h2995ca2a__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(9U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h8c739e36__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(0xaU) 
                                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))));
    vlSelf->__VdfgTmp_h7eb59b69__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h485137fe__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h49ed35d0__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h6749e93c__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h4dd7189e__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h6fa6cc67__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h8ddebbb9__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hb3c4d37d__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hb2be3e43__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(9U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h584c6713__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(0xaU) 
                                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))));
    vlSelf->__VdfgTmp_h6d8e7a40__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h04ab8deb__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h04f78bb9__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h6352c815__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h1921f88b__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h7ab1d542__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h59391990__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h9edf2254__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h919a872e__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(9U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h15f0c081__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(0xaU) 
                                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))));
    vlSelf->__VdfgTmp_h668ecfb2__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h59d29bd9__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h59769c2b__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h7cdd5187__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h552c4179__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h77bc72b0__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h15242e02__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hd35e0746__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hd285a09c__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(9U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h3b8e5239__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(0xaU) 
                                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))));
    vlSelf->__VdfgTmp_h0ecc6f74__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hf7e838c1__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hf6043e9f__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h10e0fd03__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hfa73eda1__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h19c38076__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h3a7b4c84__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h7c1d9740__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h42db320a__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(9U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h15ec6400__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(0xaU) 
                                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))));
    vlSelf->__VdfgTmp_h002e7b3d__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h59c20f48__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h596609a6__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h7adaf50a__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h5549fae8__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h7339d63f__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h14b19b8d__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hcf5fa0c9__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_hcc110413__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(9U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h64aef413__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(0xaU) 
                                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))), 3U)))));
    vlSelf->__VdfgTmp_h7610f0de__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h2f4c8d4b__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h2f288fb9__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h0c45430d__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h2bf272eb__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h05622620__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_h6bfa118e__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_ha1c028ca__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(8U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->__VdfgTmp_ha21d9404__0 = (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, 
                                                                  (0x7fU 
                                                                   & ((IData)(9U) 
                                                                      + 
                                                                      ((IData)(0xaU) 
                                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U))))) 
                                               | (vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                    (0x7fU 
                                                                     & ((IData)(9U) 
                                                                        + 
                                                                        ((IData)(0xaU) 
                                                                         * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x7fU 
                                                                    & ((IData)(9U) 
                                                                       + 
                                                                       ((IData)(0xaU) 
                                                                        * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))), 3U)))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h226cdba8__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))
                                               ? (IData)(vlSelf->__VdfgTmp_h226cdba8__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h253f9622__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_1__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h1caede9b__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h1caede9b__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h6f194d20__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_2__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h658a8d60__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h658a8d60__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h833787a9__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_3__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h65e68f32__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h65e68f32__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h343a0d58__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_4__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h1a8248ae__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h1a8248ae__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h51b718ad__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_5__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h611358c0__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h611358c0__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_he7b49c68__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_6__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h03a32599__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h03a32599__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hf82e5777__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_7__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h211bf92b__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h211bf92b__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h60eec2de__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_8__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hef0116ef__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hef0116ef__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h44c2a434__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_9__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_he8ba7ba5__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_he8ba7ba5__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hec570ddb__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_10__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))) 
                                               & ((IData)(vlSelf->__VdfgTmp_he2c76adf__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))
                                               ? (IData)(vlSelf->__VdfgTmp_he2c76adf__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h253f9622__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_11__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hfd816f10__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hfd816f10__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h6f194d20__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_12__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_ha6e4d3e7__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_ha6e4d3e7__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h833787a9__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_13__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_ha648ddb9__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_ha648ddb9__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h343a0d58__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_14__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hfbed1925__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hfbed1925__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h51b718ad__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_15__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_ha262e947__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_ha262e947__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_he7b49c68__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_16__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h8cf2040e__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h8cf2040e__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hf82e5777__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_17__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_he27a4fa0__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_he27a4fa0__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h60eec2de__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_18__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h28503764__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h28503764__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h44c2a434__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_19__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h2995ca2a__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h2995ca2a__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hec570ddb__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_20__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h8c739e36__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))
                                               ? (IData)(vlSelf->__VdfgTmp_h8c739e36__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h253f9622__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_21__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h7eb59b69__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h7eb59b69__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h6f194d20__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_22__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h485137fe__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h485137fe__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h833787a9__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_23__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h49ed35d0__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h49ed35d0__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h343a0d58__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_24__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h6749e93c__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h6749e93c__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h51b718ad__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_25__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h4dd7189e__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h4dd7189e__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_he7b49c68__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_26__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h6fa6cc67__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h6fa6cc67__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hf82e5777__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_27__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h8ddebbb9__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h8ddebbb9__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h60eec2de__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_28__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hb3c4d37d__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hb3c4d37d__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h44c2a434__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_29__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hb2be3e43__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hb2be3e43__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hec570ddb__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_30__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h584c6713__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))
                                               ? (IData)(vlSelf->__VdfgTmp_h584c6713__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h253f9622__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_31__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h6d8e7a40__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h6d8e7a40__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h6f194d20__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_32__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h04ab8deb__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h04ab8deb__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h833787a9__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_33__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h04f78bb9__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h04f78bb9__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h343a0d58__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_34__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h6352c815__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h6352c815__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h51b718ad__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_35__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h1921f88b__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h1921f88b__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_he7b49c68__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_36__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h7ab1d542__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h7ab1d542__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hf82e5777__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_37__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h59391990__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h59391990__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h60eec2de__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_38__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h9edf2254__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h9edf2254__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h44c2a434__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_39__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h919a872e__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h919a872e__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hec570ddb__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_40__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h15f0c081__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))
                                               ? (IData)(vlSelf->__VdfgTmp_h15f0c081__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h253f9622__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_41__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h668ecfb2__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h668ecfb2__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h6f194d20__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_42__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h59d29bd9__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h59d29bd9__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h833787a9__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_43__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h59769c2b__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h59769c2b__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h343a0d58__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_44__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h7cdd5187__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h7cdd5187__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h51b718ad__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_45__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h552c4179__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h552c4179__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_he7b49c68__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_46__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h77bc72b0__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h77bc72b0__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hf82e5777__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_47__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h15242e02__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h15242e02__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h60eec2de__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_48__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hd35e0746__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hd35e0746__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h44c2a434__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_49__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hd285a09c__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hd285a09c__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hec570ddb__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_50__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h3b8e5239__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))
                                               ? (IData)(vlSelf->__VdfgTmp_h3b8e5239__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h253f9622__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_51__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h0ecc6f74__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h0ecc6f74__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h6f194d20__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_52__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hf7e838c1__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hf7e838c1__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h833787a9__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_53__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hf6043e9f__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hf6043e9f__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h343a0d58__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_54__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h10e0fd03__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h10e0fd03__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h51b718ad__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_55__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hfa73eda1__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hfa73eda1__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_he7b49c68__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_56__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h19c38076__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h19c38076__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hf82e5777__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_57__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h3a7b4c84__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h3a7b4c84__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h60eec2de__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_58__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h7c1d9740__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h7c1d9740__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h44c2a434__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_59__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h42db320a__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h42db320a__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hec570ddb__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_60__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h15ec6400__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))
                                               ? (IData)(vlSelf->__VdfgTmp_h15ec6400__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h253f9622__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_61__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h002e7b3d__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h002e7b3d__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h6f194d20__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_62__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h59c20f48__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h59c20f48__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h833787a9__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_63__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h596609a6__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h596609a6__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h343a0d58__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_64__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h7adaf50a__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h7adaf50a__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h51b718ad__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_65__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h5549fae8__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h5549fae8__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_he7b49c68__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_66__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h7339d63f__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h7339d63f__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hf82e5777__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_67__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h14b19b8d__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h14b19b8d__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h60eec2de__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_68__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hcf5fa0c9__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hcf5fa0c9__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h44c2a434__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_69__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_hcc110413__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_hcc110413__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hec570ddb__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_70__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h64aef413__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(0xaU) 
                                                     * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))
                                               ? (IData)(vlSelf->__VdfgTmp_h64aef413__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h253f9622__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_71__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h7610f0de__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h7610f0de__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h6f194d20__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_72__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h2f4c8d4b__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h2f4c8d4b__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h833787a9__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_73__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h2f288fb9__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h2f288fb9__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h343a0d58__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_74__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h0c45430d__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(4U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h0c45430d__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h51b718ad__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_75__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h2bf272eb__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h2bf272eb__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_he7b49c68__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_76__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h05622620__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h05622620__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hf82e5777__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_77__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h6bfa118e__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_h6bfa118e__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h60eec2de__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_78__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_ha1c028ca__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_ha1c028ca__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_h44c2a434__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_79__DOT__prod 
        = (0xffffU & (((0xff00U & ((- (IData)(((0x48U 
                                                > (0x7fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      ((IData)(0xaU) 
                                                       * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx))))) 
                                               & ((IData)(vlSelf->__VdfgTmp_ha21d9404__0) 
                                                  >> 7U)))) 
                                   << 8U)) | ((0x48U 
                                               > (0x7fU 
                                                  & ((IData)(9U) 
                                                     + 
                                                     ((IData)(0xaU) 
                                                      * (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__compTileIdx)))))
                                               ? (IData)(vlSelf->__VdfgTmp_ha21d9404__0)
                                               : 0U)) 
                      * (IData)(vlSelf->__VdfgTmp_hec570ddb__0)));
    vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_0 
        = ((((((((((vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_0 
                    + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe__DOT__prod) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe__DOT__prod))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_1__DOT__prod) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_1__DOT__prod))) 
                  + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_2__DOT__prod) 
                                        >> 0xfU)))) 
                      << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_2__DOT__prod))) 
                 + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_3__DOT__prod) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_3__DOT__prod))) 
                + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_4__DOT__prod) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_4__DOT__prod))) 
               + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_5__DOT__prod) 
                                     >> 0xfU)))) << 0x10U) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_5__DOT__prod))) 
              + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_6__DOT__prod) 
                                    >> 0xfU)))) << 0x10U) 
                 | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_6__DOT__prod))) 
             + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_7__DOT__prod) 
                                   >> 0xfU)))) << 0x10U) 
                | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_7__DOT__prod))) 
            + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_8__DOT__prod) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_8__DOT__prod))) 
           + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_9__DOT__prod) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_9__DOT__prod)));
    vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_1 
        = ((((((((((vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_1 
                    + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_10__DOT__prod) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_10__DOT__prod))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_11__DOT__prod) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_11__DOT__prod))) 
                  + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_12__DOT__prod) 
                                        >> 0xfU)))) 
                      << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_12__DOT__prod))) 
                 + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_13__DOT__prod) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_13__DOT__prod))) 
                + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_14__DOT__prod) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_14__DOT__prod))) 
               + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_15__DOT__prod) 
                                     >> 0xfU)))) << 0x10U) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_15__DOT__prod))) 
              + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_16__DOT__prod) 
                                    >> 0xfU)))) << 0x10U) 
                 | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_16__DOT__prod))) 
             + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_17__DOT__prod) 
                                   >> 0xfU)))) << 0x10U) 
                | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_17__DOT__prod))) 
            + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_18__DOT__prod) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_18__DOT__prod))) 
           + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_19__DOT__prod) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_19__DOT__prod)));
    vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_2 
        = ((((((((((vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_2 
                    + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_20__DOT__prod) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_20__DOT__prod))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_21__DOT__prod) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_21__DOT__prod))) 
                  + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_22__DOT__prod) 
                                        >> 0xfU)))) 
                      << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_22__DOT__prod))) 
                 + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_23__DOT__prod) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_23__DOT__prod))) 
                + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_24__DOT__prod) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_24__DOT__prod))) 
               + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_25__DOT__prod) 
                                     >> 0xfU)))) << 0x10U) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_25__DOT__prod))) 
              + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_26__DOT__prod) 
                                    >> 0xfU)))) << 0x10U) 
                 | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_26__DOT__prod))) 
             + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_27__DOT__prod) 
                                   >> 0xfU)))) << 0x10U) 
                | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_27__DOT__prod))) 
            + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_28__DOT__prod) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_28__DOT__prod))) 
           + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_29__DOT__prod) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_29__DOT__prod)));
    vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_3 
        = ((((((((((vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_3 
                    + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_30__DOT__prod) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_30__DOT__prod))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_31__DOT__prod) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_31__DOT__prod))) 
                  + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_32__DOT__prod) 
                                        >> 0xfU)))) 
                      << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_32__DOT__prod))) 
                 + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_33__DOT__prod) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_33__DOT__prod))) 
                + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_34__DOT__prod) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_34__DOT__prod))) 
               + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_35__DOT__prod) 
                                     >> 0xfU)))) << 0x10U) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_35__DOT__prod))) 
              + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_36__DOT__prod) 
                                    >> 0xfU)))) << 0x10U) 
                 | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_36__DOT__prod))) 
             + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_37__DOT__prod) 
                                   >> 0xfU)))) << 0x10U) 
                | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_37__DOT__prod))) 
            + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_38__DOT__prod) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_38__DOT__prod))) 
           + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_39__DOT__prod) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_39__DOT__prod)));
    vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_4 
        = ((((((((((vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_4 
                    + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_40__DOT__prod) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_40__DOT__prod))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_41__DOT__prod) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_41__DOT__prod))) 
                  + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_42__DOT__prod) 
                                        >> 0xfU)))) 
                      << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_42__DOT__prod))) 
                 + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_43__DOT__prod) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_43__DOT__prod))) 
                + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_44__DOT__prod) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_44__DOT__prod))) 
               + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_45__DOT__prod) 
                                     >> 0xfU)))) << 0x10U) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_45__DOT__prod))) 
              + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_46__DOT__prod) 
                                    >> 0xfU)))) << 0x10U) 
                 | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_46__DOT__prod))) 
             + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_47__DOT__prod) 
                                   >> 0xfU)))) << 0x10U) 
                | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_47__DOT__prod))) 
            + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_48__DOT__prod) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_48__DOT__prod))) 
           + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_49__DOT__prod) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_49__DOT__prod)));
    vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_5 
        = ((((((((((vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_5 
                    + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_50__DOT__prod) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_50__DOT__prod))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_51__DOT__prod) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_51__DOT__prod))) 
                  + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_52__DOT__prod) 
                                        >> 0xfU)))) 
                      << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_52__DOT__prod))) 
                 + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_53__DOT__prod) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_53__DOT__prod))) 
                + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_54__DOT__prod) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_54__DOT__prod))) 
               + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_55__DOT__prod) 
                                     >> 0xfU)))) << 0x10U) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_55__DOT__prod))) 
              + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_56__DOT__prod) 
                                    >> 0xfU)))) << 0x10U) 
                 | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_56__DOT__prod))) 
             + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_57__DOT__prod) 
                                   >> 0xfU)))) << 0x10U) 
                | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_57__DOT__prod))) 
            + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_58__DOT__prod) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_58__DOT__prod))) 
           + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_59__DOT__prod) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_59__DOT__prod)));
    vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_6 
        = ((((((((((vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_6 
                    + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_60__DOT__prod) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_60__DOT__prod))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_61__DOT__prod) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_61__DOT__prod))) 
                  + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_62__DOT__prod) 
                                        >> 0xfU)))) 
                      << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_62__DOT__prod))) 
                 + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_63__DOT__prod) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_63__DOT__prod))) 
                + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_64__DOT__prod) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_64__DOT__prod))) 
               + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_65__DOT__prod) 
                                     >> 0xfU)))) << 0x10U) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_65__DOT__prod))) 
              + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_66__DOT__prod) 
                                    >> 0xfU)))) << 0x10U) 
                 | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_66__DOT__prod))) 
             + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_67__DOT__prod) 
                                   >> 0xfU)))) << 0x10U) 
                | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_67__DOT__prod))) 
            + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_68__DOT__prod) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_68__DOT__prod))) 
           + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_69__DOT__prod) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_69__DOT__prod)));
    vlSelf->RegularConvFull_SA_Tiled__DOT___core_io_psum_out_7 
        = ((((((((((vlSelf->RegularConvFull_SA_Tiled__DOT__psumReg_7 
                    + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_70__DOT__prod) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_70__DOT__prod))) 
                   + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_71__DOT__prod) 
                                         >> 0xfU)))) 
                       << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_71__DOT__prod))) 
                  + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_72__DOT__prod) 
                                        >> 0xfU)))) 
                      << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_72__DOT__prod))) 
                 + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_73__DOT__prod) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_73__DOT__prod))) 
                + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_74__DOT__prod) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_74__DOT__prod))) 
               + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_75__DOT__prod) 
                                     >> 0xfU)))) << 0x10U) 
                  | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_75__DOT__prod))) 
              + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_76__DOT__prod) 
                                    >> 0xfU)))) << 0x10U) 
                 | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_76__DOT__prod))) 
             + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_77__DOT__prod) 
                                   >> 0xfU)))) << 0x10U) 
                | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_77__DOT__prod))) 
            + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_78__DOT__prod) 
                                  >> 0xfU)))) << 0x10U) 
               | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_78__DOT__prod))) 
           + (((- (IData)((1U & ((IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_79__DOT__prod) 
                                 >> 0xfU)))) << 0x10U) 
              | (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__core__DOT__sa__DOT__pe_79__DOT__prod)));
}

void VRegularConvFull_SA_Tiled___024root___eval_nba(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRegularConvFull_SA_Tiled___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VRegularConvFull_SA_Tiled___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VRegularConvFull_SA_Tiled___024root___eval_triggers__act(VRegularConvFull_SA_Tiled___024root* vlSelf);

bool VRegularConvFull_SA_Tiled___024root___eval_phase__act(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRegularConvFull_SA_Tiled___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRegularConvFull_SA_Tiled___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegularConvFull_SA_Tiled___024root___eval_phase__nba(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRegularConvFull_SA_Tiled___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___dump_triggers__ico(VRegularConvFull_SA_Tiled___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___dump_triggers__nba(VRegularConvFull_SA_Tiled___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___dump_triggers__act(VRegularConvFull_SA_Tiled___024root* vlSelf);
#endif  // VL_DEBUG

void VRegularConvFull_SA_Tiled___024root___eval(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VRegularConvFull_SA_Tiled___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../build/verilog/RegularConvFull_SA_Tiled_case15.sv", 1391, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VRegularConvFull_SA_Tiled___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRegularConvFull_SA_Tiled___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../build/verilog/RegularConvFull_SA_Tiled_case15.sv", 1391, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRegularConvFull_SA_Tiled___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../build/verilog/RegularConvFull_SA_Tiled_case15.sv", 1391, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRegularConvFull_SA_Tiled___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRegularConvFull_SA_Tiled___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRegularConvFull_SA_Tiled___024root___eval_debug_assertions(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_start & 0xfeU))) {
        Verilated::overWidthError("io_start");}
}
#endif  // VL_DEBUG
