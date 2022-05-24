// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv.h for the primary calling header

#ifndef VERILATED_VRISCV___024UNIT_H_
#define VERILATED_VRISCV___024UNIT_H_  // guard

#include "verilated.h"

class Vriscv__Syms;
VL_MODULE(Vriscv___024unit) {
  public:

    // INTERNAL VARIABLES
    Vriscv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv___024unit(Vriscv__Syms* symsp, const char* name);
    ~Vriscv___024unit();
    VL_UNCOPYABLE(Vriscv___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
