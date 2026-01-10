// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegularConvFull_SA_Tiled.h for the primary calling header

#include "VRegularConvFull_SA_Tiled__pch.h"
#include "VRegularConvFull_SA_Tiled__Syms.h"
#include "VRegularConvFull_SA_Tiled___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___dump_triggers__stl(VRegularConvFull_SA_Tiled___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegularConvFull_SA_Tiled___024root___eval_triggers__stl(VRegularConvFull_SA_Tiled___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegularConvFull_SA_Tiled__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegularConvFull_SA_Tiled___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegularConvFull_SA_Tiled___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
