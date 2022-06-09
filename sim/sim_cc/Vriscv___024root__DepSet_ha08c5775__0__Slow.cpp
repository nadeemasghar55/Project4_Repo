// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv__Syms.h"
#include "Vriscv___024root.h"

VL_ATTR_COLD void Vriscv___024root___initial__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h80bc0284__0;
    // Body
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I("help")))) {
        VL_WRITEF("\n    +no-meminit   memory uninitialized\n    +dump         dump vcd file\n    +trace        generate trace log\n\n");
        VL_FINISH_MT("../rtl/../testbench/testbench.v", 101, "");
    }
    vlSelf->testbench__DOT__dump = VL_FOPEN_NN(std::string("dump.txt")
                                               , std::string("w"));
    if ((0U != VL_TESTPLUSARGS_I("dump"))) {
        vlSymsp->_vm_contextp__->dumpfile(std::string("wave.fst"));
        vlSymsp->_traceDumpOpen();
    }
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I("trace")))) {
        __Vtemp_h80bc0284__0[0U] = 0x2e6c6f67U;
        __Vtemp_h80bc0284__0[1U] = 0x72616365U;
        __Vtemp_h80bc0284__0[2U] = 0x74U;
        vlSelf->testbench__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_h80bc0284__0)
                                                 , 
                                                 std::string("w"));
    }
    vlSelf->testbench__DOT__imem__DOT__file = VL_FOPEN_NN(
                                                          std::string("imem.bin")
                                                          , 
                                                          std::string("rb"));
    if (VL_LIKELY((0U != vlSelf->testbench__DOT__imem__DOT__file))) {
        vlSelf->testbench__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x8000U, vlSelf->testbench__DOT__imem__DOT__i)) {
            vlSelf->testbench__DOT__imem__DOT__r = VL_FREAD_I(32
                                                              ,0
                                                              ,0
                                                              , &(vlSelf->testbench__DOT__imem__DOT__data)
                                                              , vlSelf->testbench__DOT__imem__DOT__file
                                                              , 0
                                                              , 0);
            if ((0U != vlSelf->testbench__DOT__imem__DOT__r)) {
                vlSelf->testbench__DOT__imem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__imem__DOT__i)] 
                    = ((0xffffff00U & vlSelf->testbench__DOT__imem__DOT__ram
                        [(0x7fffU & vlSelf->testbench__DOT__imem__DOT__i)]) 
                       | (vlSelf->testbench__DOT__imem__DOT__data 
                          >> 0x18U));
                vlSelf->testbench__DOT__imem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__imem__DOT__i)] 
                    = ((0xffff00ffU & vlSelf->testbench__DOT__imem__DOT__ram
                        [(0x7fffU & vlSelf->testbench__DOT__imem__DOT__i)]) 
                       | (0xff00U & (vlSelf->testbench__DOT__imem__DOT__data 
                                     >> 8U)));
                vlSelf->testbench__DOT__imem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__imem__DOT__i)] 
                    = ((0xff00ffffU & vlSelf->testbench__DOT__imem__DOT__ram
                        [(0x7fffU & vlSelf->testbench__DOT__imem__DOT__i)]) 
                       | (0xff0000U & (vlSelf->testbench__DOT__imem__DOT__data 
                                       << 8U)));
                vlSelf->testbench__DOT__imem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__imem__DOT__i)] 
                    = ((0xffffffU & vlSelf->testbench__DOT__imem__DOT__ram
                        [(0x7fffU & vlSelf->testbench__DOT__imem__DOT__i)]) 
                       | (vlSelf->testbench__DOT__imem__DOT__data 
                          << 0x18U));
            } else if ((0U == VL_TESTPLUSARGS_I("no-meminit"))) {
                vlSelf->testbench__DOT__imem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__imem__DOT__i)] = 0U;
            }
            vlSelf->testbench__DOT__imem__DOT__i = 
                ((IData)(1U) + vlSelf->testbench__DOT__imem__DOT__i);
        }
        VL_FCLOSE_I(vlSelf->testbench__DOT__imem__DOT__file); vlSelf->testbench__DOT__imem__DOT__file = 0;
    } else {
        VL_WRITEF("Warning: can not open file imem.bin\n");
        VL_FINISH_MT("../rtl/../testbench/memmodel.v", 254, "");
    }
    vlSelf->testbench__DOT__dmem__DOT__file = VL_FOPEN_NN(
                                                          std::string("dmem.bin")
                                                          , 
                                                          std::string("rb"));
    if (VL_LIKELY((0U != vlSelf->testbench__DOT__dmem__DOT__file))) {
        vlSelf->testbench__DOT__dmem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x8000U, vlSelf->testbench__DOT__dmem__DOT__i)) {
            vlSelf->testbench__DOT__dmem__DOT__r = VL_FREAD_I(32
                                                              ,0
                                                              ,0
                                                              , &(vlSelf->testbench__DOT__dmem__DOT__data)
                                                              , vlSelf->testbench__DOT__dmem__DOT__file
                                                              , 0
                                                              , 0);
            if ((0U != vlSelf->testbench__DOT__dmem__DOT__r)) {
                vlSelf->testbench__DOT__dmem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__dmem__DOT__i)] 
                    = ((0xffffff00U & vlSelf->testbench__DOT__dmem__DOT__ram
                        [(0x7fffU & vlSelf->testbench__DOT__dmem__DOT__i)]) 
                       | (vlSelf->testbench__DOT__dmem__DOT__data 
                          >> 0x18U));
                vlSelf->testbench__DOT__dmem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__dmem__DOT__i)] 
                    = ((0xffff00ffU & vlSelf->testbench__DOT__dmem__DOT__ram
                        [(0x7fffU & vlSelf->testbench__DOT__dmem__DOT__i)]) 
                       | (0xff00U & (vlSelf->testbench__DOT__dmem__DOT__data 
                                     >> 8U)));
                vlSelf->testbench__DOT__dmem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__dmem__DOT__i)] 
                    = ((0xff00ffffU & vlSelf->testbench__DOT__dmem__DOT__ram
                        [(0x7fffU & vlSelf->testbench__DOT__dmem__DOT__i)]) 
                       | (0xff0000U & (vlSelf->testbench__DOT__dmem__DOT__data 
                                       << 8U)));
                vlSelf->testbench__DOT__dmem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__dmem__DOT__i)] 
                    = ((0xffffffU & vlSelf->testbench__DOT__dmem__DOT__ram
                        [(0x7fffU & vlSelf->testbench__DOT__dmem__DOT__i)]) 
                       | (vlSelf->testbench__DOT__dmem__DOT__data 
                          << 0x18U));
            } else if ((0U == VL_TESTPLUSARGS_I("no-meminit"))) {
                vlSelf->testbench__DOT__dmem__DOT__ram[(0x7fffU 
                                                        & vlSelf->testbench__DOT__dmem__DOT__i)] = 0U;
            }
            vlSelf->testbench__DOT__dmem__DOT__i = 
                ((IData)(1U) + vlSelf->testbench__DOT__dmem__DOT__i);
        }
        VL_FCLOSE_I(vlSelf->testbench__DOT__dmem__DOT__file); vlSelf->testbench__DOT__dmem__DOT__file = 0;
    } else {
        VL_WRITEF("Warning: can not open file dmem.bin\n");
        VL_FINISH_MT("../rtl/../testbench/memmodel.v", 118, "");
    }
}
