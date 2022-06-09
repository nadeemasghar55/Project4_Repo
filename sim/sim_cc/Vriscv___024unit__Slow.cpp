// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv__Syms.h"
#include "Vriscv___024unit.h"

void Vriscv___024unit___ctor_var_reset(Vriscv___024unit* vlSelf);

Vriscv___024unit::Vriscv___024unit(Vriscv__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv___024unit___ctor_var_reset(this);
}

void Vriscv___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vriscv___024unit::~Vriscv___024unit() {
}
