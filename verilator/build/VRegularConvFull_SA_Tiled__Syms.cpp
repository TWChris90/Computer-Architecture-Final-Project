// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRegularConvFull_SA_Tiled__pch.h"
#include "VRegularConvFull_SA_Tiled.h"
#include "VRegularConvFull_SA_Tiled___024root.h"

// FUNCTIONS
VRegularConvFull_SA_Tiled__Syms::~VRegularConvFull_SA_Tiled__Syms()
{
}

VRegularConvFull_SA_Tiled__Syms::VRegularConvFull_SA_Tiled__Syms(VerilatedContext* contextp, const char* namep, VRegularConvFull_SA_Tiled* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
