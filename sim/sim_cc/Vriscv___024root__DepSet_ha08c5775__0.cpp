// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv__Syms.h"
#include "Vriscv___024root.h"

void Vriscv___024unit____Vdpiimwrap_getch_TOP____024unit(CData/*7:0*/ &getch__Vfuncrtn);

VL_INLINE_OPT void Vriscv___024root___sequent__TOP__1(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vfunc_getch__0__Vfuncout;
    CData/*7:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__3__Vfuncout;
    IData/*31:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__3__address;
    IData/*31:0*/ __Vtask_testbench__DOT__top__DOT__riscv__DOT__set_reg__4__data;
    CData/*7:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__5__Vfuncout;
    IData/*31:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__5__address;
    CData/*7:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__6__Vfuncout;
    IData/*31:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__6__address;
    CData/*7:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__7__Vfuncout;
    IData/*31:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__7__address;
    CData/*7:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__8__Vfuncout;
    IData/*31:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__8__address;
    CData/*7:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__9__Vfuncout;
    IData/*31:0*/ __Vfunc_testbench__DOT__dmem__DOT__getb__9__address;
    SData/*14:0*/ __Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__dmem__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dmem__DOT__ram__v0;
    SData/*14:0*/ __Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v1;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__dmem__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dmem__DOT__ram__v1;
    SData/*14:0*/ __Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v2;
    CData/*4:0*/ __Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v2;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__dmem__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dmem__DOT__ram__v2;
    SData/*14:0*/ __Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v3;
    CData/*4:0*/ __Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__testbench__DOT__dmem__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dmem__DOT__ram__v3;
    // Body
    __Vdlyvset__testbench__DOT__dmem__DOT__ram__v0 = 0U;
    __Vdlyvset__testbench__DOT__dmem__DOT__ram__v1 = 0U;
    __Vdlyvset__testbench__DOT__dmem__DOT__ram__v2 = 0U;
    __Vdlyvset__testbench__DOT__dmem__DOT__ram__v3 = 0U;
    if (((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_system) 
         & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break)) 
                         & (0xbeef005dU == vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                            [0x10U])))) {
            VL_WRITEF("\nExcuting %0# instructions, %0# cycles, %0#.%03# CPI\nProgram terminate\n",
                      64,vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret,
                      64,vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle,
                      64,VL_DIV_QQQ(64, vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle, vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret),
                      64,VL_MODDIV_QQQ(64, VL_DIV_QQQ(64, 
                                                      (0x3e8ULL 
                                                       * vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle), vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret), 0x3e8ULL));
            VL_FINISH_MT("../rtl/../testbench/testbench.v", 439, "");
        } else if (VL_UNLIKELY((((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break)) 
                                 & (0xbeef0040U == 
                                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                    [0x10U])) & (1U 
                                                 == 
                                                 vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                                 [9U])))) {
            vlSelf->testbench__DOT__i = 0U;
            while ((vlSelf->testbench__DOT__i < vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                    [0xbU])) {
                __Vfunc_testbench__DOT__dmem__DOT__getb__3__address 
                    = ((vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                        [0xaU] - (IData)(0x20000U)) 
                       + vlSelf->testbench__DOT__i);
                if (VL_UNLIKELY((0U != (__Vfunc_testbench__DOT__dmem__DOT__getb__3__address 
                                        >> 0x11U)))) {
                    VL_WRITEF("Address %08x out of range\n",
                              32,__Vfunc_testbench__DOT__dmem__DOT__getb__3__address);
                }
                if ((0U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__3__address))) {
                    __Vfunc_testbench__DOT__dmem__DOT__getb__3__Vfuncout 
                        = (0xffU & vlSelf->testbench__DOT__dmem__DOT__ram
                           [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__3__address 
                                        >> 2U))]);
                } else if ((1U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__3__address))) {
                    __Vfunc_testbench__DOT__dmem__DOT__getb__3__Vfuncout 
                        = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                    [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__3__address 
                                                 >> 2U))] 
                                    >> 8U));
                } else if ((2U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__3__address))) {
                    __Vfunc_testbench__DOT__dmem__DOT__getb__3__Vfuncout 
                        = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                    [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__3__address 
                                                 >> 2U))] 
                                    >> 0x10U));
                } else if ((3U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__3__address))) {
                    __Vfunc_testbench__DOT__dmem__DOT__getb__3__Vfuncout 
                        = (vlSelf->testbench__DOT__dmem__DOT__ram
                           [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__3__address 
                                        >> 2U))] >> 0x18U);
                }
                VL_WRITEF("%c",8,__Vfunc_testbench__DOT__dmem__DOT__getb__3__Vfuncout);
                vlSelf->testbench__DOT__i = ((IData)(1U) 
                                             + vlSelf->testbench__DOT__i);
            }
            __Vtask_testbench__DOT__top__DOT__riscv__DOT__set_reg__4__data 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                [0xbU];
            vlSelf->testbench__DOT__top__DOT__riscv__DOT____Vlvbound_h9369a3c8__0 
                = __Vtask_testbench__DOT__top__DOT__riscv__DOT__set_reg__4__data;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[9U] 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT____Vlvbound_h9369a3c8__0;
            Verilated::runFlushCallbacks();
        } else if ((1U & (~ (((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break)) 
                              & (0xbeef003fU == vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                 [0x10U])) & (0U == 
                                              vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                              [9U]))))) {
            if (VL_UNLIKELY((((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break)) 
                              & (0xbeef0088U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                 [0x10U])) & (0U != vlSelf->testbench__DOT__dump)))) {
                vlSelf->testbench__DOT__i = vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                    [9U];
                while ((vlSelf->testbench__DOT__i < 
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                        [0xaU])) {
                    __Vfunc_testbench__DOT__dmem__DOT__getb__8__address 
                        = (vlSelf->testbench__DOT__i 
                           - (IData)(0x20000U));
                    if (VL_UNLIKELY((0U != (__Vfunc_testbench__DOT__dmem__DOT__getb__8__address 
                                            >> 0x11U)))) {
                        VL_WRITEF("Address %08x out of range\n",
                                  32,__Vfunc_testbench__DOT__dmem__DOT__getb__8__address);
                    }
                    if ((0U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__8__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__8__Vfuncout 
                            = (0xffU & vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__8__address 
                                            >> 2U))]);
                    } else if ((1U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__8__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__8__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__8__address 
                                           >> 2U))] 
                                        >> 8U));
                    } else if ((2U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__8__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__8__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__8__address 
                                           >> 2U))] 
                                        >> 0x10U));
                    } else if ((3U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__8__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__8__Vfuncout 
                            = (vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__8__address 
                                            >> 2U))] 
                               >> 0x18U);
                    }
                    __Vfunc_testbench__DOT__dmem__DOT__getb__7__address 
                        = ((IData)(1U) + (vlSelf->testbench__DOT__i 
                                          - (IData)(0x20000U)));
                    if (VL_UNLIKELY((0U != (__Vfunc_testbench__DOT__dmem__DOT__getb__7__address 
                                            >> 0x11U)))) {
                        VL_WRITEF("Address %08x out of range\n",
                                  32,__Vfunc_testbench__DOT__dmem__DOT__getb__7__address);
                    }
                    if ((0U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__7__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__7__Vfuncout 
                            = (0xffU & vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__7__address 
                                            >> 2U))]);
                    } else if ((1U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__7__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__7__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__7__address 
                                           >> 2U))] 
                                        >> 8U));
                    } else if ((2U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__7__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__7__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__7__address 
                                           >> 2U))] 
                                        >> 0x10U));
                    } else if ((3U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__7__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__7__Vfuncout 
                            = (vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__7__address 
                                            >> 2U))] 
                               >> 0x18U);
                    }
                    __Vfunc_testbench__DOT__dmem__DOT__getb__6__address 
                        = ((IData)(2U) + (vlSelf->testbench__DOT__i 
                                          - (IData)(0x20000U)));
                    if (VL_UNLIKELY((0U != (__Vfunc_testbench__DOT__dmem__DOT__getb__6__address 
                                            >> 0x11U)))) {
                        VL_WRITEF("Address %08x out of range\n",
                                  32,__Vfunc_testbench__DOT__dmem__DOT__getb__6__address);
                    }
                    if ((0U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__6__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__6__Vfuncout 
                            = (0xffU & vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__6__address 
                                            >> 2U))]);
                    } else if ((1U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__6__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__6__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__6__address 
                                           >> 2U))] 
                                        >> 8U));
                    } else if ((2U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__6__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__6__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__6__address 
                                           >> 2U))] 
                                        >> 0x10U));
                    } else if ((3U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__6__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__6__Vfuncout 
                            = (vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__6__address 
                                            >> 2U))] 
                               >> 0x18U);
                    }
                    __Vfunc_testbench__DOT__dmem__DOT__getb__5__address 
                        = ((IData)(3U) + (vlSelf->testbench__DOT__i 
                                          - (IData)(0x20000U)));
                    if (VL_UNLIKELY((0U != (__Vfunc_testbench__DOT__dmem__DOT__getb__5__address 
                                            >> 0x11U)))) {
                        VL_WRITEF("Address %08x out of range\n",
                                  32,__Vfunc_testbench__DOT__dmem__DOT__getb__5__address);
                    }
                    if ((0U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__5__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__5__Vfuncout 
                            = (0xffU & vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__5__address 
                                            >> 2U))]);
                    } else if ((1U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__5__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__5__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__5__address 
                                           >> 2U))] 
                                        >> 8U));
                    } else if ((2U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__5__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__5__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__5__address 
                                           >> 2U))] 
                                        >> 0x10U));
                    } else if ((3U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__5__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__5__Vfuncout 
                            = (vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__5__address 
                                            >> 2U))] 
                               >> 0x18U);
                    }
                    VL_FWRITEF(vlSelf->testbench__DOT__dump,"%02x%02x%02x%02x\n",
                               8,__Vfunc_testbench__DOT__dmem__DOT__getb__5__Vfuncout,
                               8,(IData)(__Vfunc_testbench__DOT__dmem__DOT__getb__6__Vfuncout),
                               8,__Vfunc_testbench__DOT__dmem__DOT__getb__7__Vfuncout,
                               8,(IData)(__Vfunc_testbench__DOT__dmem__DOT__getb__8__Vfuncout));
                    vlSelf->testbench__DOT__i = ((IData)(4U) 
                                                 + vlSelf->testbench__DOT__i);
                }
            } else if (VL_UNLIKELY((((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break)) 
                                     & (0xbeef0099U 
                                        == vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                        [0x10U])) & 
                                    (0U != vlSelf->testbench__DOT__dump)))) {
                vlSelf->testbench__DOT__i = vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                    [9U];
                while ((vlSelf->testbench__DOT__i < 
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                        [0xaU])) {
                    __Vfunc_testbench__DOT__dmem__DOT__getb__9__address 
                        = (vlSelf->testbench__DOT__i 
                           - (IData)(0x20000U));
                    if (VL_UNLIKELY((0U != (__Vfunc_testbench__DOT__dmem__DOT__getb__9__address 
                                            >> 0x11U)))) {
                        VL_WRITEF("Address %08x out of range\n",
                                  32,__Vfunc_testbench__DOT__dmem__DOT__getb__9__address);
                    }
                    if ((0U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__9__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__9__Vfuncout 
                            = (0xffU & vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__9__address 
                                            >> 2U))]);
                    } else if ((1U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__9__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__9__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__9__address 
                                           >> 2U))] 
                                        >> 8U));
                    } else if ((2U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__9__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__9__Vfuncout 
                            = (0xffU & (vlSelf->testbench__DOT__dmem__DOT__ram
                                        [(0x7fffU & 
                                          (__Vfunc_testbench__DOT__dmem__DOT__getb__9__address 
                                           >> 2U))] 
                                        >> 0x10U));
                    } else if ((3U == (3U & __Vfunc_testbench__DOT__dmem__DOT__getb__9__address))) {
                        __Vfunc_testbench__DOT__dmem__DOT__getb__9__Vfuncout 
                            = (vlSelf->testbench__DOT__dmem__DOT__ram
                               [(0x7fffU & (__Vfunc_testbench__DOT__dmem__DOT__getb__9__address 
                                            >> 2U))] 
                               >> 0x18U);
                    }
                    VL_FWRITEF(vlSelf->testbench__DOT__dump,"%c",
                               8,__Vfunc_testbench__DOT__dmem__DOT__getb__9__Vfuncout);
                    vlSelf->testbench__DOT__i = ((IData)(1U) 
                                                 + vlSelf->testbench__DOT__i);
                }
            }
        }
    }
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
                        & (0U != VL_TESTPLUSARGS_I("trace"))) 
                       & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush))) 
                      & (3U == (IData)(vlSelf->testbench__DOT__fillcount))) 
                     & (0x13U != vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_insn)))) {
        VL_FWRITEF(vlSelf->testbench__DOT__fp,"%08x %08x",
                   32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_pc,
                   32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_insn);
        if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg) 
                         & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_ld_align_excp))))) {
            VL_FWRITEF(vlSelf->testbench__DOT__fp," read 0x%08x",
                       32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddress);
            if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg) {
                VL_FWRITEF(vlSelf->testbench__DOT__fp,", x%02# (%0s) <= 0x%08x\n",
                           5,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel,
                           56,vlSelf->testbench__DOT__regname,
                           32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata);
            } else {
                VL_FWRITEF(vlSelf->testbench__DOT__fp,"\n");
            }
        } else if (VL_UNLIKELY(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg)) {
            VL_FWRITEF(vlSelf->testbench__DOT__fp," x%02# (%0s) <= 0x%08x\n",
                       5,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel,
                       56,vlSelf->testbench__DOT__regname,
                       32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result);
        } else if (VL_LIKELY(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr)) {
            if ((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))) {
                if ((8U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))) {
                    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb) 
                                      >> 1U)))) {
                            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))))) {
                                VL_FWRITEF(vlSelf->testbench__DOT__fp," write 0x%08x <= 0x%08x\n",
                                           32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr,
                                           32,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                                               >> 0x18U));
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))) {
                    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb) 
                                  >> 1U)))) {
                        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))))) {
                            VL_FWRITEF(vlSelf->testbench__DOT__fp," write 0x%08x <= 0x%08x\n",
                                       32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr,
                                       32,(0xffU & 
                                           (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                                            >> 0x10U)));
                        }
                    }
                } else if ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))) {
                    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))))) {
                        VL_FWRITEF(vlSelf->testbench__DOT__fp," write 0x%08x <= 0x%08x\n",
                                   32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr,
                                   32,(0xffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                                                >> 8U)));
                    }
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb)))) {
                    VL_FWRITEF(vlSelf->testbench__DOT__fp," write 0x%08x <= 0x%08x\n",
                               32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr,
                               32,(0xffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata));
                }
            } else if ((1U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))) {
                if (VL_UNLIKELY((3U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb)))) {
                    VL_FWRITEF(vlSelf->testbench__DOT__fp," write 0x%08x <= 0x%08x\n",
                               32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr,
                               32,(0xffffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata));
                } else if (VL_UNLIKELY((0xcU == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb)))) {
                    VL_FWRITEF(vlSelf->testbench__DOT__fp," write 0x%08x <= 0x%08x\n",
                               32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr,
                               32,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                                   >> 0x10U));
                }
            } else if ((2U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))) {
                VL_FWRITEF(vlSelf->testbench__DOT__fp," write 0x%08x <= 0x%08x\n",
                           32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr,
                           32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata);
            } else {
                VL_FWRITEF(vlSelf->testbench__DOT__fp,"\n");
            }
        } else {
            VL_FWRITEF(vlSelf->testbench__DOT__fp,"\n");
        }
    }
    if (vlSelf->testbench__DOT__imem_ready) {
        vlSelf->testbench__DOT__imem__DOT__rdata2 = 
            vlSelf->testbench__DOT__imem__DOT__ram[
            (0x7fffU & ((IData)(1U) + (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                       >> 2U)))];
        vlSelf->testbench__DOT__imem__DOT__rdata1 = 
            vlSelf->testbench__DOT__imem__DOT__ram[
            (0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                        >> 2U))];
    }
    if (vlSelf->testbench__DOT__wready) {
        if ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))) {
            __Vdlyvval__testbench__DOT__dmem__DOT__ram__v0 
                = (0xffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata);
            __Vdlyvset__testbench__DOT__dmem__DOT__ram__v0 = 1U;
            __Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v0 = 0U;
            __Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v0 
                = (0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                              >> 2U));
        }
        if ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))) {
            __Vdlyvval__testbench__DOT__dmem__DOT__ram__v1 
                = (0xffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                            >> 8U));
            __Vdlyvset__testbench__DOT__dmem__DOT__ram__v1 = 1U;
            __Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v1 = 8U;
            __Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v1 
                = (0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                              >> 2U));
        }
        if ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))) {
            __Vdlyvval__testbench__DOT__dmem__DOT__ram__v2 
                = (0xffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                            >> 0x10U));
            __Vdlyvset__testbench__DOT__dmem__DOT__ram__v2 = 1U;
            __Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v2 = 0x10U;
            __Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v2 
                = (0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                              >> 2U));
        }
        if ((8U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))) {
            __Vdlyvval__testbench__DOT__dmem__DOT__ram__v3 
                = (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                   >> 0x18U);
            __Vdlyvset__testbench__DOT__dmem__DOT__ram__v3 = 1U;
            __Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v3 = 0x18U;
            __Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v3 
                = (0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                              >> 2U));
        }
    }
    if (vlSelf->testbench__DOT__top__DOT__trready) {
        if ((0x90000000U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)) {
            vlSelf->testbench__DOT__top__DOT__trdata 
                = (IData)(vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime);
        } else if ((0x90000004U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)) {
            vlSelf->testbench__DOT__top__DOT__trdata 
                = (IData)((vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime 
                           >> 0x20U));
        } else if ((0x90000008U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)) {
            vlSelf->testbench__DOT__top__DOT__trdata 
                = (IData)(vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp);
        } else if ((0x9000000cU == vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)) {
            vlSelf->testbench__DOT__top__DOT__trdata 
                = (IData)((vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp 
                           >> 0x20U));
        } else if ((0x90000010U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)) {
            vlSelf->testbench__DOT__top__DOT__trdata 
                = (((IData)(vlSelf->testbench__DOT__ex_irq) 
                    << 0x10U) | (IData)(vlSelf->testbench__DOT__top__DOT__sw_irq));
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__imem_ready) 
                     & (0U != (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                               >> 0x11U))))) {
        VL_WRITEF("IMEM address %x out of range\n",
                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc);
        VL_FINISH_MT("../rtl/../testbench/testbench.v", 407, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr) 
                     & (0x9000001cU == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr)))) {
        VL_WRITEF("%c",8,(0xffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata));
        Verilated::runFlushCallbacks();
    } else if (((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg) 
                & (0x90000020U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr))) {
        Vriscv___024unit____Vdpiimwrap_getch_TOP____024unit(__Vfunc_getch__0__Vfuncout);
        vlSelf->testbench__DOT__dmem_rdata = __Vfunc_getch__0__Vfuncout;
    } else if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr) 
                            & (0x9000002cU == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr)))) {
        VL_WRITEF("\nExcuting %0# instructions, %0# cycles, %0#.%03# CPI\nProgram terminate\n",
                  64,vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret,
                  64,vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle,
                  64,VL_DIV_QQQ(64, vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle, vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret),
                  64,VL_MODDIV_QQQ(64, VL_DIV_QQQ(64, 
                                                  (0x3e8ULL 
                                                   * vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle), vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret), 0x3e8ULL));
        VL_FINISH_MT("../rtl/../testbench/testbench.v", 425, "");
    } else if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__dmem_wready) 
                            & (0U != (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                                      >> 0x12U))))) {
        VL_WRITEF("DMEM address %x out of range\n",
                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr);
        VL_FINISH_MT("../rtl/../testbench/testbench.v", 430, "");
    }
    if (vlSelf->testbench__DOT__dmem_rready) {
        if (((IData)(vlSelf->testbench__DOT__wready) 
             & ((0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                            >> 2U)) == (0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                                                   >> 2U))))) {
            vlSelf->testbench__DOT__dmem_rdata = ((0xffffff00U 
                                                   & vlSelf->testbench__DOT__dmem_rdata) 
                                                  | (0xffU 
                                                     & ((1U 
                                                         & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))
                                                         ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata
                                                         : 
                                                        vlSelf->testbench__DOT__dmem__DOT__ram
                                                        [
                                                        (0x7fffU 
                                                         & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                                            >> 2U))])));
            vlSelf->testbench__DOT__dmem_rdata = ((0xffff00ffU 
                                                   & vlSelf->testbench__DOT__dmem_rdata) 
                                                  | (0xff00U 
                                                     & (((2U 
                                                          & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))
                                                          ? 
                                                         (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                                                          >> 8U)
                                                          : 
                                                         (vlSelf->testbench__DOT__dmem__DOT__ram
                                                          [
                                                          (0x7fffU 
                                                           & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                                              >> 2U))] 
                                                          >> 8U)) 
                                                        << 8U)));
            vlSelf->testbench__DOT__dmem_rdata = ((0xff00ffffU 
                                                   & vlSelf->testbench__DOT__dmem_rdata) 
                                                  | (0xff0000U 
                                                     & (((4U 
                                                          & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))
                                                          ? 
                                                         (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                                                          >> 0x10U)
                                                          : 
                                                         (vlSelf->testbench__DOT__dmem__DOT__ram
                                                          [
                                                          (0x7fffU 
                                                           & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                                              >> 2U))] 
                                                          >> 0x10U)) 
                                                        << 0x10U)));
            vlSelf->testbench__DOT__dmem_rdata = ((0xffffffU 
                                                   & vlSelf->testbench__DOT__dmem_rdata) 
                                                  | (((8U 
                                                       & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb))
                                                       ? 
                                                      (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                                                       >> 0x18U)
                                                       : 
                                                      (vlSelf->testbench__DOT__dmem__DOT__ram
                                                       [
                                                       (0x7fffU 
                                                        & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                                           >> 2U))] 
                                                       >> 0x18U)) 
                                                     << 0x18U));
        } else {
            vlSelf->testbench__DOT__dmem_rdata = vlSelf->testbench__DOT__dmem__DOT__ram
                [(0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                             >> 2U))];
        }
    }
    if (__Vdlyvset__testbench__DOT__dmem__DOT__ram__v0) {
        vlSelf->testbench__DOT__dmem__DOT__ram[__Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v0))) 
                & vlSelf->testbench__DOT__dmem__DOT__ram
                [__Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__testbench__DOT__dmem__DOT__ram__v0) 
                                   << (IData)(__Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v0))));
    }
    if (__Vdlyvset__testbench__DOT__dmem__DOT__ram__v1) {
        vlSelf->testbench__DOT__dmem__DOT__ram[__Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v1))) 
                & vlSelf->testbench__DOT__dmem__DOT__ram
                [__Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__testbench__DOT__dmem__DOT__ram__v1) 
                                   << (IData)(__Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v1))));
    }
    if (__Vdlyvset__testbench__DOT__dmem__DOT__ram__v2) {
        vlSelf->testbench__DOT__dmem__DOT__ram[__Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v2))) 
                & vlSelf->testbench__DOT__dmem__DOT__ram
                [__Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__testbench__DOT__dmem__DOT__ram__v2) 
                                   << (IData)(__Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v2))));
    }
    if (__Vdlyvset__testbench__DOT__dmem__DOT__ram__v3) {
        vlSelf->testbench__DOT__dmem__DOT__ram[__Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v3))) 
                & vlSelf->testbench__DOT__dmem__DOT__ram
                [__Vdlyvdim0__testbench__DOT__dmem__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__testbench__DOT__dmem__DOT__ram__v3) 
                                   << (IData)(__Vdlyvlsb__testbench__DOT__dmem__DOT__ram__v3))));
    }
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddress 
            = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr;
    }
}
