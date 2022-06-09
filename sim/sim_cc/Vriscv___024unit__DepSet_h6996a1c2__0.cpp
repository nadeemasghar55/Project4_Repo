// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv__Syms.h"
#include "Vriscv___024unit.h"

extern "C" char getch();

VL_INLINE_OPT void Vriscv___024unit____Vdpiimwrap_getch_TOP____024unit(CData/*7:0*/ &getch__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv___024unit____Vdpiimwrap_getch_TOP____024unit\n"); );
    // Body
    char getch__Vfuncrtn__Vcvt;
    getch__Vfuncrtn__Vcvt = getch();
    getch__Vfuncrtn = (0xffU & getch__Vfuncrtn__Vcvt);
}
