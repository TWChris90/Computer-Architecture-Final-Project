// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegularConvFull_SA_Tiled.h for the primary calling header

#include "VRegularConvFull_SA_Tiled__pch.h"
#include "VRegularConvFull_SA_Tiled___024root.h"

VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___eval_static(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___eval_initial(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___eval_final(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___dump_triggers__stl(VRegularConvFull_SA_Tiled___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRegularConvFull_SA_Tiled___024root___eval_phase__stl(VRegularConvFull_SA_Tiled___024root* vlSelf);

VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___eval_settle(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_settle\n"); );
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
            VRegularConvFull_SA_Tiled___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../build/verilog/RegularConvFull_SA_Tiled_case15.sv", 1391, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRegularConvFull_SA_Tiled___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___dump_triggers__stl(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___stl_sequent__TOP__0(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_7 = 
        (0U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_8 = 
        (1U == (IData)(vlSelf->RegularConvFull_SA_Tiled__DOT__state));
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
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_x_in_0_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_x_in_0_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_x_in_0_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_x_in_0_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_x_in_0_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_x_in_0_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_x_in_0_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_x_in_0_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_x_in_0_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_x_in_0_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_x_in_0_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_x_in_0_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_x_in_0_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_x_in_0_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_x_in_0_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_x_in_0_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[2U] 
        = (((IData)(vlSelf->io_x_in_0_11) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_10) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_9) << 8U) 
                 | (IData)(vlSelf->io_x_in_0_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[3U] 
        = (((IData)(vlSelf->io_x_in_0_15) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_14) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_13) << 8U) 
                 | (IData)(vlSelf->io_x_in_0_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[4U] 
        = (((IData)(vlSelf->io_x_in_0_19) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_18) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_17) << 8U) 
                 | (IData)(vlSelf->io_x_in_0_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[5U] 
        = (((IData)(vlSelf->io_x_in_0_23) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_22) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_21) << 8U) 
                 | (IData)(vlSelf->io_x_in_0_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[6U] 
        = (((IData)(vlSelf->io_x_in_1_2) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_1_1) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_1_0) << 8U) 
                 | (IData)(vlSelf->io_x_in_0_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[7U] 
        = (((IData)(vlSelf->io_x_in_1_6) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_1_5) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_1_4) << 8U) 
                 | (IData)(vlSelf->io_x_in_1_3))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[8U] 
        = (((IData)(vlSelf->io_x_in_1_10) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_1_9) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_1_8) << 8U) 
                 | (IData)(vlSelf->io_x_in_1_7))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[9U] 
        = (((IData)(vlSelf->io_x_in_1_14) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_1_13) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_1_12) << 8U) 
                 | (IData)(vlSelf->io_x_in_1_11))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0xaU] 
        = (((IData)(vlSelf->io_x_in_1_18) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_1_17) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_1_16) << 8U) 
                 | (IData)(vlSelf->io_x_in_1_15))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0xbU] 
        = (((IData)(vlSelf->io_x_in_1_22) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_1_21) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_1_20) << 8U) 
                 | (IData)(vlSelf->io_x_in_1_19))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0xcU] 
        = (((IData)(vlSelf->io_x_in_2_1) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_1_24) << 8U) 
                 | (IData)(vlSelf->io_x_in_1_23))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0xdU] 
        = (((IData)(vlSelf->io_x_in_2_5) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_2_4) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_2_3) << 8U) 
                 | (IData)(vlSelf->io_x_in_2_2))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0xeU] 
        = (((IData)(vlSelf->io_x_in_2_9) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_2_8) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_2_7) << 8U) 
                 | (IData)(vlSelf->io_x_in_2_6))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0xfU] 
        = (((IData)(vlSelf->io_x_in_2_13) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_2_12) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_2_11) << 8U) 
                 | (IData)(vlSelf->io_x_in_2_10))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x10U] 
        = (((IData)(vlSelf->io_x_in_2_17) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_2_16) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_2_15) << 8U) 
                 | (IData)(vlSelf->io_x_in_2_14))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x11U] 
        = (((IData)(vlSelf->io_x_in_2_21) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_2_20) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_2_19) << 8U) 
                 | (IData)(vlSelf->io_x_in_2_18))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x12U] 
        = (((IData)(vlSelf->io_x_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_2_24) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_2_23) << 8U) 
                 | (IData)(vlSelf->io_x_in_2_22))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x13U] 
        = (((IData)(vlSelf->io_x_in_3_4) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_3_3) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_3_2) << 8U) 
                 | (IData)(vlSelf->io_x_in_3_1))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x14U] 
        = (((IData)(vlSelf->io_x_in_3_8) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_3_7) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_3_6) << 8U) 
                 | (IData)(vlSelf->io_x_in_3_5))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x15U] 
        = (((IData)(vlSelf->io_x_in_3_12) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_3_11) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_3_10) << 8U) 
                 | (IData)(vlSelf->io_x_in_3_9))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x16U] 
        = (((IData)(vlSelf->io_x_in_3_16) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_3_15) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_3_14) << 8U) 
                 | (IData)(vlSelf->io_x_in_3_13))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x17U] 
        = (((IData)(vlSelf->io_x_in_3_20) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_3_19) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_3_18) << 8U) 
                 | (IData)(vlSelf->io_x_in_3_17))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x18U] 
        = (((IData)(vlSelf->io_x_in_3_24) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_3_23) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_3_22) << 8U) 
                 | (IData)(vlSelf->io_x_in_3_21))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x19U] 
        = (((IData)(vlSelf->io_x_in_4_3) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_4_2) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_4_1) << 8U) 
                 | (IData)(vlSelf->io_x_in_4_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x1aU] 
        = (((IData)(vlSelf->io_x_in_4_7) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_4_6) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_4_5) << 8U) 
                 | (IData)(vlSelf->io_x_in_4_4))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x1bU] 
        = (((IData)(vlSelf->io_x_in_4_11) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_4_10) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_4_9) << 8U) 
                 | (IData)(vlSelf->io_x_in_4_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x1cU] 
        = (((IData)(vlSelf->io_x_in_4_15) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_4_14) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_4_13) << 8U) 
                 | (IData)(vlSelf->io_x_in_4_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x1dU] 
        = (((IData)(vlSelf->io_x_in_4_19) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_4_18) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_4_17) << 8U) 
                 | (IData)(vlSelf->io_x_in_4_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x1eU] 
        = (((IData)(vlSelf->io_x_in_4_23) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_4_22) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_4_21) << 8U) 
                 | (IData)(vlSelf->io_x_in_4_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x1fU] 
        = (((IData)(vlSelf->io_x_in_5_2) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_5_1) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_5_0) << 8U) 
                 | (IData)(vlSelf->io_x_in_4_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x20U] 
        = (((IData)(vlSelf->io_x_in_5_6) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_5_5) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_5_4) << 8U) 
                 | (IData)(vlSelf->io_x_in_5_3))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x21U] 
        = (((IData)(vlSelf->io_x_in_5_10) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_5_9) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_5_8) << 8U) 
                 | (IData)(vlSelf->io_x_in_5_7))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x22U] 
        = (((IData)(vlSelf->io_x_in_5_14) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_5_13) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_5_12) << 8U) 
                 | (IData)(vlSelf->io_x_in_5_11))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x23U] 
        = (((IData)(vlSelf->io_x_in_5_18) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_5_17) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_5_16) << 8U) 
                 | (IData)(vlSelf->io_x_in_5_15))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x24U] 
        = (((IData)(vlSelf->io_x_in_5_22) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_5_21) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_5_20) << 8U) 
                 | (IData)(vlSelf->io_x_in_5_19))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x25U] 
        = (((IData)(vlSelf->io_x_in_6_1) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_5_24) << 8U) 
                 | (IData)(vlSelf->io_x_in_5_23))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x26U] 
        = (((IData)(vlSelf->io_x_in_6_5) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_6_4) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_6_3) << 8U) 
                 | (IData)(vlSelf->io_x_in_6_2))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x27U] 
        = (((IData)(vlSelf->io_x_in_6_9) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_6_8) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_6_7) << 8U) 
                 | (IData)(vlSelf->io_x_in_6_6))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x28U] 
        = (((IData)(vlSelf->io_x_in_6_13) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_6_12) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_6_11) << 8U) 
                 | (IData)(vlSelf->io_x_in_6_10))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x29U] 
        = (((IData)(vlSelf->io_x_in_6_17) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_6_16) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_6_15) << 8U) 
                 | (IData)(vlSelf->io_x_in_6_14))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x2aU] 
        = (((IData)(vlSelf->io_x_in_6_21) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_6_20) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_6_19) << 8U) 
                 | (IData)(vlSelf->io_x_in_6_18))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x2bU] 
        = (((IData)(vlSelf->io_x_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_6_24) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_6_23) << 8U) 
                 | (IData)(vlSelf->io_x_in_6_22))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x2cU] 
        = (((IData)(vlSelf->io_x_in_7_4) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_7_3) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_7_2) << 8U) 
                 | (IData)(vlSelf->io_x_in_7_1))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x2dU] 
        = (((IData)(vlSelf->io_x_in_7_8) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_7_7) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_7_6) << 8U) 
                 | (IData)(vlSelf->io_x_in_7_5))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x2eU] 
        = (((IData)(vlSelf->io_x_in_7_12) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_7_11) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_7_10) << 8U) 
                 | (IData)(vlSelf->io_x_in_7_9))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x2fU] 
        = (((IData)(vlSelf->io_x_in_7_16) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_7_15) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_7_14) << 8U) 
                 | (IData)(vlSelf->io_x_in_7_13))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x30U] 
        = (((IData)(vlSelf->io_x_in_7_20) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_7_19) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_7_18) << 8U) 
                 | (IData)(vlSelf->io_x_in_7_17))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x31U] 
        = (((IData)(vlSelf->io_x_in_7_24) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_7_23) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_7_22) << 8U) 
                 | (IData)(vlSelf->io_x_in_7_21))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x32U] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | (IData)(vlSelf->io_x_in_0_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x33U] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x34U] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x35U] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x36U] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x37U] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x38U] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x39U] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x3aU] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x3bU] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x3cU] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x3dU] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x3eU] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT__im2col__DOT___GEN[0x3fU] 
        = (((IData)(vlSelf->io_x_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_x_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_x_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_x_in_0_0) | 
                    (((IData)(vlSelf->io_x_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_x_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_x_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_w_in_0_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_0_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_0_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_w_in_0_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_w_in_0_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_w_in_0_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_w_in_0_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_w_in_0_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_w_in_0_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_0_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_0_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_w_in_0_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_w_in_0_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_w_in_0_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_w_in_0_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_w_in_0_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[2U] 
        = (((IData)(vlSelf->io_w_in_0_11) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_10) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_9) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[3U] 
        = (((IData)(vlSelf->io_w_in_0_15) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_14) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_13) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[4U] 
        = (((IData)(vlSelf->io_w_in_0_19) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_18) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_17) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[5U] 
        = (((IData)(vlSelf->io_w_in_0_23) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_22) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_21) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[6U] 
        = (((IData)(vlSelf->io_w_in_0_27) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_26) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_25) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[7U] 
        = (((IData)(vlSelf->io_w_in_0_31) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_30) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_29) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_28))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[8U] 
        = (((IData)(vlSelf->io_w_in_0_35) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_34) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_33) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_32))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[9U] 
        = (((IData)(vlSelf->io_w_in_0_39) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_38) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_37) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_36))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0xaU] 
        = (((IData)(vlSelf->io_w_in_0_43) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_42) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_41) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_40))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0xbU] 
        = (((IData)(vlSelf->io_w_in_0_47) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_46) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_45) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_44))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0xcU] 
        = (((IData)(vlSelf->io_w_in_0_51) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_50) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_49) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_48))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0xdU] 
        = (((IData)(vlSelf->io_w_in_0_55) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_54) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_53) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_52))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0xeU] 
        = (((IData)(vlSelf->io_w_in_0_59) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_58) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_57) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_56))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0xfU] 
        = (((IData)(vlSelf->io_w_in_0_63) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_62) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_61) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_60))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x10U] 
        = (((IData)(vlSelf->io_w_in_0_67) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_66) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_65) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_64))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x11U] 
        = (((IData)(vlSelf->io_w_in_0_71) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_70) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_69) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_68))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x12U] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | (IData)(vlSelf->io_w_in_0_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x13U] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x14U] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x15U] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x16U] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x17U] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x18U] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x19U] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x1aU] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x1bU] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x1cU] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x1dU] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x1eU] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN[0x1fU] 
        = (((IData)(vlSelf->io_w_in_0_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_0_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_0_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_0_0) | 
                    (((IData)(vlSelf->io_w_in_0_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_0_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_0_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_w_in_1_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_1_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_1_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_w_in_1_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_w_in_1_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_w_in_1_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_w_in_1_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_w_in_1_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_w_in_1_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_1_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_1_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_w_in_1_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_w_in_1_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_w_in_1_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_w_in_1_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_w_in_1_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[2U] 
        = (((IData)(vlSelf->io_w_in_1_11) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_10) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_9) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[3U] 
        = (((IData)(vlSelf->io_w_in_1_15) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_14) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_13) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[4U] 
        = (((IData)(vlSelf->io_w_in_1_19) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_18) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_17) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[5U] 
        = (((IData)(vlSelf->io_w_in_1_23) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_22) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_21) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[6U] 
        = (((IData)(vlSelf->io_w_in_1_27) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_26) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_25) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[7U] 
        = (((IData)(vlSelf->io_w_in_1_31) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_30) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_29) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_28))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[8U] 
        = (((IData)(vlSelf->io_w_in_1_35) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_34) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_33) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_32))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[9U] 
        = (((IData)(vlSelf->io_w_in_1_39) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_38) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_37) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_36))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0xaU] 
        = (((IData)(vlSelf->io_w_in_1_43) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_42) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_41) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_40))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0xbU] 
        = (((IData)(vlSelf->io_w_in_1_47) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_46) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_45) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_44))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0xcU] 
        = (((IData)(vlSelf->io_w_in_1_51) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_50) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_49) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_48))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0xdU] 
        = (((IData)(vlSelf->io_w_in_1_55) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_54) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_53) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_52))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0xeU] 
        = (((IData)(vlSelf->io_w_in_1_59) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_58) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_57) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_56))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0xfU] 
        = (((IData)(vlSelf->io_w_in_1_63) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_62) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_61) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_60))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x10U] 
        = (((IData)(vlSelf->io_w_in_1_67) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_66) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_65) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_64))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x11U] 
        = (((IData)(vlSelf->io_w_in_1_71) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_70) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_69) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_68))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x12U] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | (IData)(vlSelf->io_w_in_1_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x13U] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x14U] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x15U] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x16U] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x17U] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x18U] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x19U] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x1aU] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x1bU] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x1cU] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x1dU] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x1eU] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_0[0x1fU] 
        = (((IData)(vlSelf->io_w_in_1_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_1_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_1_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_1_0) | 
                    (((IData)(vlSelf->io_w_in_1_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_1_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_1_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_w_in_2_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_2_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_2_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_w_in_2_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_w_in_2_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_w_in_2_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_w_in_2_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_w_in_2_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_w_in_2_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_2_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_2_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_w_in_2_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_w_in_2_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_w_in_2_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_w_in_2_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_w_in_2_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[2U] 
        = (((IData)(vlSelf->io_w_in_2_11) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_10) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_9) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[3U] 
        = (((IData)(vlSelf->io_w_in_2_15) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_14) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_13) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[4U] 
        = (((IData)(vlSelf->io_w_in_2_19) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_18) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_17) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[5U] 
        = (((IData)(vlSelf->io_w_in_2_23) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_22) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_21) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[6U] 
        = (((IData)(vlSelf->io_w_in_2_27) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_26) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_25) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[7U] 
        = (((IData)(vlSelf->io_w_in_2_31) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_30) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_29) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_28))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[8U] 
        = (((IData)(vlSelf->io_w_in_2_35) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_34) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_33) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_32))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[9U] 
        = (((IData)(vlSelf->io_w_in_2_39) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_38) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_37) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_36))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0xaU] 
        = (((IData)(vlSelf->io_w_in_2_43) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_42) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_41) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_40))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0xbU] 
        = (((IData)(vlSelf->io_w_in_2_47) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_46) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_45) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_44))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0xcU] 
        = (((IData)(vlSelf->io_w_in_2_51) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_50) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_49) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_48))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0xdU] 
        = (((IData)(vlSelf->io_w_in_2_55) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_54) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_53) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_52))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0xeU] 
        = (((IData)(vlSelf->io_w_in_2_59) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_58) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_57) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_56))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0xfU] 
        = (((IData)(vlSelf->io_w_in_2_63) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_62) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_61) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_60))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x10U] 
        = (((IData)(vlSelf->io_w_in_2_67) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_66) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_65) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_64))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x11U] 
        = (((IData)(vlSelf->io_w_in_2_71) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_70) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_69) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_68))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x12U] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | (IData)(vlSelf->io_w_in_2_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x13U] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x14U] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x15U] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x16U] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x17U] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x18U] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x19U] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x1aU] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x1bU] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x1cU] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x1dU] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x1eU] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_1[0x1fU] 
        = (((IData)(vlSelf->io_w_in_2_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_2_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_2_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_2_0) | 
                    (((IData)(vlSelf->io_w_in_2_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_2_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_2_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_w_in_3_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_3_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_3_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_w_in_3_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_w_in_3_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_w_in_3_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_w_in_3_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_w_in_3_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_w_in_3_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_3_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_3_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_w_in_3_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_w_in_3_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_w_in_3_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_w_in_3_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_w_in_3_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[2U] 
        = (((IData)(vlSelf->io_w_in_3_11) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_10) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_9) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[3U] 
        = (((IData)(vlSelf->io_w_in_3_15) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_14) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_13) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[4U] 
        = (((IData)(vlSelf->io_w_in_3_19) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_18) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_17) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[5U] 
        = (((IData)(vlSelf->io_w_in_3_23) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_22) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_21) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[6U] 
        = (((IData)(vlSelf->io_w_in_3_27) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_26) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_25) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[7U] 
        = (((IData)(vlSelf->io_w_in_3_31) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_30) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_29) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_28))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[8U] 
        = (((IData)(vlSelf->io_w_in_3_35) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_34) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_33) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_32))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[9U] 
        = (((IData)(vlSelf->io_w_in_3_39) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_38) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_37) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_36))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0xaU] 
        = (((IData)(vlSelf->io_w_in_3_43) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_42) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_41) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_40))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0xbU] 
        = (((IData)(vlSelf->io_w_in_3_47) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_46) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_45) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_44))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0xcU] 
        = (((IData)(vlSelf->io_w_in_3_51) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_50) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_49) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_48))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0xdU] 
        = (((IData)(vlSelf->io_w_in_3_55) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_54) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_53) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_52))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0xeU] 
        = (((IData)(vlSelf->io_w_in_3_59) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_58) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_57) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_56))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0xfU] 
        = (((IData)(vlSelf->io_w_in_3_63) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_62) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_61) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_60))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x10U] 
        = (((IData)(vlSelf->io_w_in_3_67) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_66) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_65) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_64))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x11U] 
        = (((IData)(vlSelf->io_w_in_3_71) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_70) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_69) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_68))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x12U] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | (IData)(vlSelf->io_w_in_3_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x13U] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x14U] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x15U] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x16U] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x17U] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x18U] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x19U] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x1aU] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x1bU] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x1cU] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x1dU] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x1eU] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_2[0x1fU] 
        = (((IData)(vlSelf->io_w_in_3_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_3_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_3_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_3_0) | 
                    (((IData)(vlSelf->io_w_in_3_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_3_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_3_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_w_in_4_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_4_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_4_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_w_in_4_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_w_in_4_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_w_in_4_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_w_in_4_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_w_in_4_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_w_in_4_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_4_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_4_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_w_in_4_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_w_in_4_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_w_in_4_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_w_in_4_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_w_in_4_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[2U] 
        = (((IData)(vlSelf->io_w_in_4_11) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_10) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_9) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[3U] 
        = (((IData)(vlSelf->io_w_in_4_15) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_14) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_13) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[4U] 
        = (((IData)(vlSelf->io_w_in_4_19) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_18) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_17) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[5U] 
        = (((IData)(vlSelf->io_w_in_4_23) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_22) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_21) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[6U] 
        = (((IData)(vlSelf->io_w_in_4_27) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_26) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_25) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[7U] 
        = (((IData)(vlSelf->io_w_in_4_31) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_30) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_29) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_28))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[8U] 
        = (((IData)(vlSelf->io_w_in_4_35) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_34) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_33) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_32))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[9U] 
        = (((IData)(vlSelf->io_w_in_4_39) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_38) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_37) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_36))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0xaU] 
        = (((IData)(vlSelf->io_w_in_4_43) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_42) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_41) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_40))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0xbU] 
        = (((IData)(vlSelf->io_w_in_4_47) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_46) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_45) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_44))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0xcU] 
        = (((IData)(vlSelf->io_w_in_4_51) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_50) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_49) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_48))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0xdU] 
        = (((IData)(vlSelf->io_w_in_4_55) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_54) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_53) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_52))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0xeU] 
        = (((IData)(vlSelf->io_w_in_4_59) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_58) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_57) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_56))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0xfU] 
        = (((IData)(vlSelf->io_w_in_4_63) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_62) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_61) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_60))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x10U] 
        = (((IData)(vlSelf->io_w_in_4_67) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_66) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_65) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_64))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x11U] 
        = (((IData)(vlSelf->io_w_in_4_71) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_70) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_69) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_68))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x12U] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | (IData)(vlSelf->io_w_in_4_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x13U] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x14U] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x15U] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x16U] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x17U] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x18U] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x19U] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x1aU] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x1bU] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x1cU] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x1dU] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x1eU] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_3[0x1fU] 
        = (((IData)(vlSelf->io_w_in_4_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_4_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_4_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_4_0) | 
                    (((IData)(vlSelf->io_w_in_4_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_4_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_4_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_w_in_5_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_5_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_5_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_w_in_5_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_w_in_5_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_w_in_5_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_w_in_5_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_w_in_5_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_w_in_5_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_5_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_5_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_w_in_5_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_w_in_5_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_w_in_5_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_w_in_5_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_w_in_5_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[2U] 
        = (((IData)(vlSelf->io_w_in_5_11) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_10) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_9) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[3U] 
        = (((IData)(vlSelf->io_w_in_5_15) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_14) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_13) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[4U] 
        = (((IData)(vlSelf->io_w_in_5_19) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_18) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_17) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[5U] 
        = (((IData)(vlSelf->io_w_in_5_23) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_22) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_21) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[6U] 
        = (((IData)(vlSelf->io_w_in_5_27) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_26) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_25) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[7U] 
        = (((IData)(vlSelf->io_w_in_5_31) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_30) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_29) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_28))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[8U] 
        = (((IData)(vlSelf->io_w_in_5_35) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_34) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_33) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_32))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[9U] 
        = (((IData)(vlSelf->io_w_in_5_39) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_38) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_37) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_36))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0xaU] 
        = (((IData)(vlSelf->io_w_in_5_43) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_42) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_41) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_40))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0xbU] 
        = (((IData)(vlSelf->io_w_in_5_47) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_46) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_45) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_44))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0xcU] 
        = (((IData)(vlSelf->io_w_in_5_51) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_50) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_49) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_48))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0xdU] 
        = (((IData)(vlSelf->io_w_in_5_55) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_54) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_53) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_52))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0xeU] 
        = (((IData)(vlSelf->io_w_in_5_59) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_58) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_57) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_56))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0xfU] 
        = (((IData)(vlSelf->io_w_in_5_63) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_62) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_61) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_60))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x10U] 
        = (((IData)(vlSelf->io_w_in_5_67) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_66) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_65) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_64))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x11U] 
        = (((IData)(vlSelf->io_w_in_5_71) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_70) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_69) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_68))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x12U] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | (IData)(vlSelf->io_w_in_5_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x13U] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x14U] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x15U] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x16U] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x17U] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x18U] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x19U] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x1aU] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x1bU] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x1cU] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x1dU] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x1eU] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_4[0x1fU] 
        = (((IData)(vlSelf->io_w_in_5_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_5_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_5_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_5_0) | 
                    (((IData)(vlSelf->io_w_in_5_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_5_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_5_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_w_in_6_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_6_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_6_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_w_in_6_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_w_in_6_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_w_in_6_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_w_in_6_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_w_in_6_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_w_in_6_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_6_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_6_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_w_in_6_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_w_in_6_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_w_in_6_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_w_in_6_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_w_in_6_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[2U] 
        = (((IData)(vlSelf->io_w_in_6_11) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_10) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_9) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[3U] 
        = (((IData)(vlSelf->io_w_in_6_15) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_14) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_13) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[4U] 
        = (((IData)(vlSelf->io_w_in_6_19) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_18) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_17) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[5U] 
        = (((IData)(vlSelf->io_w_in_6_23) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_22) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_21) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[6U] 
        = (((IData)(vlSelf->io_w_in_6_27) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_26) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_25) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[7U] 
        = (((IData)(vlSelf->io_w_in_6_31) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_30) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_29) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_28))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[8U] 
        = (((IData)(vlSelf->io_w_in_6_35) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_34) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_33) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_32))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[9U] 
        = (((IData)(vlSelf->io_w_in_6_39) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_38) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_37) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_36))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0xaU] 
        = (((IData)(vlSelf->io_w_in_6_43) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_42) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_41) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_40))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0xbU] 
        = (((IData)(vlSelf->io_w_in_6_47) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_46) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_45) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_44))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0xcU] 
        = (((IData)(vlSelf->io_w_in_6_51) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_50) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_49) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_48))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0xdU] 
        = (((IData)(vlSelf->io_w_in_6_55) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_54) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_53) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_52))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0xeU] 
        = (((IData)(vlSelf->io_w_in_6_59) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_58) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_57) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_56))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0xfU] 
        = (((IData)(vlSelf->io_w_in_6_63) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_62) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_61) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_60))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x10U] 
        = (((IData)(vlSelf->io_w_in_6_67) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_66) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_65) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_64))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x11U] 
        = (((IData)(vlSelf->io_w_in_6_71) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_70) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_69) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_68))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x12U] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | (IData)(vlSelf->io_w_in_6_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x13U] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x14U] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x15U] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x16U] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x17U] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x18U] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x19U] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x1aU] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x1bU] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x1cU] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x1dU] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x1eU] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_5[0x1fU] 
        = (((IData)(vlSelf->io_w_in_6_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_6_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_6_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_6_0) | 
                    (((IData)(vlSelf->io_w_in_6_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_6_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_6_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0U] 
        = (IData)((((QData)((IData)(vlSelf->io_w_in_7_7)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_7_6)) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_7_5)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->io_w_in_7_4)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->io_w_in_7_3) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->io_w_in_7_2) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->io_w_in_7_1) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->io_w_in_7_0)))))))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[1U] 
        = (IData)(((((QData)((IData)(vlSelf->io_w_in_7_7)) 
                     << 0x38U) | (((QData)((IData)(vlSelf->io_w_in_7_6)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->io_w_in_7_5)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->io_w_in_7_4)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->io_w_in_7_3) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->io_w_in_7_2) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->io_w_in_7_1) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->io_w_in_7_0)))))))))) 
                   >> 0x20U));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[2U] 
        = (((IData)(vlSelf->io_w_in_7_11) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_10) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_9) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_8))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[3U] 
        = (((IData)(vlSelf->io_w_in_7_15) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_14) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_13) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_12))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[4U] 
        = (((IData)(vlSelf->io_w_in_7_19) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_18) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_17) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_16))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[5U] 
        = (((IData)(vlSelf->io_w_in_7_23) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_22) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_21) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_20))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[6U] 
        = (((IData)(vlSelf->io_w_in_7_27) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_26) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_25) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_24))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[7U] 
        = (((IData)(vlSelf->io_w_in_7_31) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_30) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_29) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_28))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[8U] 
        = (((IData)(vlSelf->io_w_in_7_35) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_34) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_33) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_32))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[9U] 
        = (((IData)(vlSelf->io_w_in_7_39) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_38) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_37) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_36))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0xaU] 
        = (((IData)(vlSelf->io_w_in_7_43) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_42) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_41) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_40))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0xbU] 
        = (((IData)(vlSelf->io_w_in_7_47) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_46) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_45) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_44))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0xcU] 
        = (((IData)(vlSelf->io_w_in_7_51) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_50) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_49) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_48))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0xdU] 
        = (((IData)(vlSelf->io_w_in_7_55) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_54) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_53) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_52))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0xeU] 
        = (((IData)(vlSelf->io_w_in_7_59) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_58) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_57) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_56))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0xfU] 
        = (((IData)(vlSelf->io_w_in_7_63) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_62) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_61) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_60))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x10U] 
        = (((IData)(vlSelf->io_w_in_7_67) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_66) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_65) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_64))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x11U] 
        = (((IData)(vlSelf->io_w_in_7_71) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_70) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_69) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_68))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x12U] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | (IData)(vlSelf->io_w_in_7_0))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x13U] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x14U] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x15U] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x16U] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x17U] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x18U] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x19U] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x1aU] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x1bU] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x1cU] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x1dU] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x1eU] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
    vlSelf->RegularConvFull_SA_Tiled__DOT___GEN_6[0x1fU] 
        = (((IData)(vlSelf->io_w_in_7_0) << 0x18U) 
           | (((IData)(vlSelf->io_w_in_7_0) << 0x10U) 
              | (((IData)(vlSelf->io_w_in_7_0) << 8U) 
                 | ((IData)(vlSelf->io_w_in_7_0) | 
                    (((IData)(vlSelf->io_w_in_7_0) 
                      >> 8U) | (((IData)(vlSelf->io_w_in_7_0) 
                                 >> 0x10U) | ((IData)(vlSelf->io_w_in_7_0) 
                                              >> 0x18U)))))));
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
