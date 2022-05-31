// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv___024root.h"

extern const VlUnpacked<QData/*55:0*/, 32> Vriscv__ConstPool__TABLE_he7da8a49_0;

VL_ATTR_COLD void Vriscv___024root___settle__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___settle__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->testbench__DOT__top__DOT__drdata = ((IData)(vlSelf->testbench__DOT__top__DOT__data_sel)
                                                 ? vlSelf->testbench__DOT__top__DOT__trdata
                                                 : vlSelf->testbench__DOT__dmem_rdata);
    vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime_nxt 
        = (1ULL + vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime);
    __Vtableidx1 = vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel;
    vlSelf->testbench__DOT__regname = Vriscv__ConstPool__TABLE_he7da8a49_0
        [__Vtableidx1];
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop) 
           | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop_more));
    vlSelf->testbench__DOT__top__DOT__twready = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr) 
                                                 & (9U 
                                                    == 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                                                     >> 0x1cU)));
    vlSelf->testbench__DOT__dmem_wready = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr) 
                                           & (9U != 
                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                                               >> 0x1cU)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch) 
           | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch_nxt));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__flush)
            ? 0x13U : ((IData)(vlSelf->testbench__DOT__imem__DOT__aligned)
                        ? vlSelf->testbench__DOT__imem__DOT__rdata1
                        : ((vlSelf->testbench__DOT__imem__DOT__rdata2 
                            << 0x10U) | (vlSelf->testbench__DOT__imem__DOT__rdata1 
                                         >> 0x10U))));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_branch = 0U;
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal)))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr)))) {
            if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_branch) {
                if ((1U & (~ ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))) {
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_branch = 1U;
                    }
                }
            }
        }
    }
    vlSelf->testbench__DOT__imem_ready = (1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata 
        = ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
            ? ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                ? 0U : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                         ? ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                             ? (vlSelf->testbench__DOT__top__DOT__drdata 
                                >> 0x10U) : (0xffffU 
                                             & vlSelf->testbench__DOT__top__DOT__drdata))
                         : ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                             ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                                 ? (vlSelf->testbench__DOT__top__DOT__drdata 
                                    >> 0x18U) : (0xffU 
                                                 & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                    >> 0x10U)))
                             : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                                 ? (0xffU & (vlSelf->testbench__DOT__top__DOT__drdata 
                                             >> 8U))
                                 : (0xffU & vlSelf->testbench__DOT__top__DOT__drdata)))))
            : ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                    ? 0U : vlSelf->testbench__DOT__top__DOT__drdata)
                : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                    ? ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                        ? (((- (IData)((vlSelf->testbench__DOT__top__DOT__drdata 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelf->testbench__DOT__top__DOT__drdata 
                                         >> 0x10U))
                        : (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->testbench__DOT__top__DOT__drdata)))
                    : ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                        ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                            ? (((- (IData)((vlSelf->testbench__DOT__top__DOT__drdata 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->testbench__DOT__top__DOT__drdata 
                                          >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                   >> 0x10U))))
                        : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                            ? (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->testbench__DOT__top__DOT__drdata)))))));
    vlSelf->testbench__DOT__wready = ((~ ((IData)(vlSelf->testbench__DOT__dmem_wready) 
                                          & (((0x9000001cU 
                                               == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr) 
                                              | (0x90000020U 
                                                 == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr)) 
                                             | (0x9000002cU 
                                                == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr)))) 
                                      & (IData)(vlSelf->testbench__DOT__dmem_wready));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq 
        = (((((IData)(vlSelf->testbench__DOT__top__DOT__timer_irq) 
              & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                 >> 3U)) & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                            >> 7U)) & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op))) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq 
        = (((((IData)(vlSelf->testbench__DOT__top__DOT__sw_irq) 
              & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                 >> 3U)) & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                            >> 3U)) & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op))) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt 
        = (((((IData)(vlSelf->testbench__DOT__ex_irq) 
              & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                 >> 3U)) & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                            >> 0xbU)) & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op))) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 0U;
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read = 0U;
    if (((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr) 
         & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)))) {
        if ((0x800U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
            if (VL_LIKELY((0x400U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                if ((0x200U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                    if (VL_LIKELY((0x100U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        if (VL_UNLIKELY((0x80U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        } else if (VL_UNLIKELY((0x40U 
                                                & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                        } else if (VL_UNLIKELY((0x20U 
                                                & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                        } else if (VL_LIKELY((0x10U 
                                              & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            if (VL_UNLIKELY((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                          12,(0xfffU 
                                              & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                          32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                                vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                            } else if ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                                if (VL_UNLIKELY((2U 
                                                 & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                              12,(0xfffU 
                                                  & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                                } else if (VL_UNLIKELY(
                                                       (1U 
                                                        & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                              12,(0xfffU 
                                                  & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                                } else {
                                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read = 0U;
                                }
                            } else if ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                                vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read = 0U;
                            } else if (VL_LIKELY((1U 
                                                  & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read = 0U;
                            } else {
                                VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                          12,(0xfffU 
                                              & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                          32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                                vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                            }
                        } else {
                            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                        }
                    } else {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    }
                } else if (VL_UNLIKELY((0x100U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if ((0x80U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                    if (VL_UNLIKELY((0x40U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else if (VL_UNLIKELY((0x20U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else if (VL_UNLIKELY((0x10U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else if (VL_UNLIKELY((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else if (VL_UNLIKELY((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else if ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                        if (VL_UNLIKELY((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                        } else {
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read 
                                = (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret 
                                           >> 0x20U));
                        }
                    } else if (VL_UNLIKELY((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else {
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read 
                            = (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle 
                                       >> 0x20U));
                    }
                } else if (VL_UNLIKELY((0x40U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if (VL_UNLIKELY((0x20U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if (VL_UNLIKELY((0x10U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if (VL_UNLIKELY((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if (VL_UNLIKELY((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                    if (VL_UNLIKELY((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else {
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read 
                            = (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret);
                    }
                } else if (VL_UNLIKELY((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else {
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read 
                        = (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle);
                }
            } else {
                VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                          12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                          32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
            }
        } else if (VL_UNLIKELY((0x400U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
        } else if (VL_LIKELY((0x200U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
            if (VL_LIKELY((0x100U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                if (VL_UNLIKELY((0x80U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if ((0x40U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                    if (VL_UNLIKELY((0x20U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else if (VL_UNLIKELY((0x10U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else if (VL_UNLIKELY((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else if ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                        if (VL_UNLIKELY((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                        } else if (VL_UNLIKELY((1U 
                                                & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                        } else {
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read 
                                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip;
                        }
                    } else {
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read 
                            = ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                ? ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtval
                                    : vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause)
                                : ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc
                                    : vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mscratch));
                    }
                } else if (VL_UNLIKELY((0x20U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if (VL_UNLIKELY((0x10U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if (VL_UNLIKELY((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else if ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                    if (VL_UNLIKELY((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                                  12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                    } else {
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read 
                            = ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec
                                : vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie);
                    }
                } else if (VL_UNLIKELY((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                              12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                              32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
                } else {
                    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read 
                        = ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                            ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_misa
                            : vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                }
            } else {
                VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                          12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                          32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
            }
        } else {
            VL_WRITEF("Unsupport CSR register 0x%0x at PC 0x%08x\n",
                      12,(0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),
                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = 1U;
        }
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__imm 
        = ((0x40U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
            ? ((0x20U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                ? ((0x10U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                    ? ((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                        ? 0U : ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                 ? 0U : ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                          ? ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                              ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                 >> 0x14U)
                                              : 0U)
                                          : 0U))) : 
                   ((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                     ? ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                         ? ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                             ? ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                 ? (((- (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                 >> 0x1fU))) 
                                     << 0x14U) | ((0xff000U 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst) 
                                                  | ((0x800U 
                                                      & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                           >> 0x14U)))))
                                 : 0U) : 0U) : 0U) : 
                    ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                      ? ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                          ? ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                              ? (((- (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                              >> 0x14U))
                              : 0U) : 0U) : ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                              ? ((1U 
                                                  & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                              >> 7U)))))
                                                  : 0U)
                                              : 0U))))
                : 0U) : ((0x20U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                          ? ((0x10U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                              ? ((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                  ? 0U : ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                           ? ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                               ? ((1U 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                               ? 0U : ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                        ? 0U : ((2U 
                                                 & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                              ? ((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                  ? 0U : ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                           ? ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                               ? ((1U 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                               ? ((1U 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                   ? 
                                                  (((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                         >> 0xcU))) 
                                                    | (5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                           >> 0xcU))))
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                       >> 0x14U))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                       >> 0x14U)))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                  ? 0U : ((4U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_illegal) 
                     & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush))))) {
        VL_WRITEF("Illegal instruction at PC 0x%08x\n",
                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_branch) 
                     & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush))))) {
        VL_WRITEF("Illegal branch instruction at PC 0x%08x\n",
                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm_sel)
            ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm
            : ((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel))
                ? 0U : ((((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush)) 
                          & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg)) 
                         & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel) 
                            == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel)))
                         ? ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg)
                             ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata
                             : vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result)
                         : ((0x1eU >= (0x1fU & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel) 
                                                - (IData)(1U))))
                             ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                            [(0x1fU & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel) 
                                       - (IData)(1U)))]
                             : 0U))));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
        = ((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel))
            ? 0U : ((((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush)) 
                      & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg)) 
                     & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel) 
                        == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel)))
                     ? ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg)
                         ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata
                         : vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result)
                     : ((0x1eU >= (0x1fU & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel) 
                                            - (IData)(1U))))
                         ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                        [(0x1fU & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel) 
                                   - (IData)(1U)))]
                         : 0U)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp 
        = ((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)) 
           & (((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_branch) 
               | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr)) 
              | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_illegal)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_mul 
        = VL_MULS_QQQ(64, (((QData)((IData)((- (IData)(
                                                       (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1))), 
                      (((QData)((IData)((- (IData)(
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
        = (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
           + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1))) 
                             - (((QData)((IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)))));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1)) 
                             - (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data 
        = ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
            ? (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel)
            : vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1);
    vlSelf->testbench__DOT__dmem_rready = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg) 
                                           & (9U != 
                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                               >> 0x1cU)));
    vlSelf->testbench__DOT__top__DOT__trready = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg) 
                                                 & (9U 
                                                    == 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                                     >> 0x1cU)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp 
        = (((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg) 
            & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush))) 
           & ((((1U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op)) 
                & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr) 
               | ((2U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op)) 
                  & (0U != (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)))) 
              | ((5U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op)) 
                 & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp 
        = (((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr) 
            & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush))) 
           & (((1U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op)) 
               & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr) 
              | ((2U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op)) 
                 & (0U != (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)))));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_result 
        = (((((((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr) 
                  | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal)) 
                 | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr)) 
                | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_lui)) 
               | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_auipc)) 
              | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr)) 
             | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mul)) 
            | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu))
            ? ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr)
                ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2
                : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal)
                    ? ((IData)(4U) + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc)
                    : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr)
                        ? ((IData)(4U) + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc)
                        : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_lui)
                            ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm
                            : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_auipc)
                                ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                   + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr)
                                    ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read
                                    : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mul)
                                        ? ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                            ? ((2U 
                                                & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                                     ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                                     ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1
                                                     : 
                                                    (((0x80000000U 
                                                       == vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1) 
                                                      & (0xffffffffU 
                                                         == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                                      ? 0U
                                                      : 
                                                     VL_MODDIVS_III(32, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                                     ? 0xffffffffU
                                                     : 
                                                    VL_DIV_III(32, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                                     ? 0xffffffffU
                                                     : 
                                                    (((0x80000000U 
                                                       == vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1) 
                                                      & (0xffffffffU 
                                                         == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                                      ? 0x80000000U
                                                      : 
                                                     VL_DIVS_III(32, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)))))
                                            : ((2U 
                                                & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? (IData)(
                                                              (((QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1)) 
                                                                * (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))) 
                                                               >> 0x20U))
                                                    : (IData)(
                                                              (((((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                                                >> 0x1fU))))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1))) 
                                                                * (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))) 
                                                               >> 0x20U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? (IData)(
                                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_mul 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_mul))))
                                        : ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                            ? ((2U 
                                                & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                    & vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                                    : 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                    | vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? 
                                                   ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_subtype)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, 
                                                                   (0x1fU 
                                                                    & vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                                     : 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)))
                                                    : 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                    ^ vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)))
                                            : ((2U 
                                                & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu 
                                                                >> 0x20U)))
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs 
                                                                >> 0x20U)))
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                                    : 
                                                   ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_subtype)
                                                     ? 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                     - vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                                     : 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                     + vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))))))))))))
            : 0U);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken 
        = (1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal)))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr)))) {
            if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_branch) {
                if ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))) {
                    if ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))) {
                        if ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))) {
                            if ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu 
                                               >> 0x20U)))) {
                                vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken = 0U;
                            }
                        } else if ((1U & (~ (IData)(
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu 
                                                     >> 0x20U))))) {
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken = 0U;
                        }
                    } else if ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))) {
                        if ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs 
                                           >> 0x20U)))) {
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken = 0U;
                        }
                    } else if ((1U & (~ (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs 
                                                 >> 0x20U))))) {
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken = 0U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))) {
                        if ((0ULL == vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs)) {
                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken = 0U;
                        }
                    } else if ((0ULL != vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs)) {
                        vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken = 0U;
                    }
                }
            } else {
                vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken = 0U;
            }
        }
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__next_pc 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal)
            ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
               + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
            : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr)
                ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                   + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_branch)
                    ? ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                        ? ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                            ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                ? ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu 
                                                  >> 0x20U)))
                                    ? ((IData)(4U) 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc)
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))
                                : ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu 
                                                  >> 0x20U)))
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    : ((IData)(4U) 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc)))
                            : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                ? ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs 
                                                  >> 0x20U)))
                                    ? ((IData)(4U) 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc)
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))
                                : ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs 
                                                  >> 0x20U)))
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    : ((IData)(4U) 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc))))
                        : ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                            ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc
                            : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                ? ((0ULL != vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs)
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    : ((IData)(4U) 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc))
                                : ((0ULL == vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs)
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    : ((IData)(4U) 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc)))))
                    : ((IData)(4U) + vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc))));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ret_pc 
        = (0x7fffffffU & ((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal) 
                            | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr)) 
                           | ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_branch) 
                              & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken)))
                           ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__next_pc 
                              >> 1U) : ((IData)(2U) 
                                        + (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                           >> 1U))));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp 
        = (1U & ((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)) 
                 & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__next_pc 
                    >> 1U)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_trap 
        = (((((((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp) 
                  | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp)) 
                 | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp)) 
                | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp)) 
               | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq)) 
              | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq)) 
             | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt)) 
            | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall)) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 0U;
    if (((((((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp) 
               | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp)) 
              | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp)) 
             | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp)) 
            | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq)) 
           | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq)) 
          | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt)) 
         | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall))) {
        if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 2U;
        } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 0U;
        } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 4U;
        } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 6U;
        } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 0x80000007U;
        } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 0x80000003U;
        } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 0x8000000bU;
        } else if ((0U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 0xbU;
        } else if ((1U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 3U;
        } else if (VL_LIKELY((2U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause;
        } else {
            VL_WRITEF("Illegal system call at PC 0x%08x\n\n",
                      32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = 2U;
        }
    }
}

VL_ATTR_COLD void Vriscv___024root___initial__TOP__0(Vriscv___024root* vlSelf);

VL_ATTR_COLD void Vriscv___024root___eval_initial(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__resetb = vlSelf->resetb;
    Vriscv___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vriscv___024root___eval_settle(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_settle\n"); );
    // Body
    Vriscv___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vriscv___024root___final(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___final\n"); );
}

VL_ATTR_COLD void Vriscv___024root___ctor_var_reset(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetb = VL_RAND_RESET_I(1);
    vlSelf->stall = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__exception = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__ex_irq = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__fillcount = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dump = 0;
    vlSelf->testbench__DOT__imem_ready = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__imem_rresp = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dmem_rready = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dmem_rresp = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__fp = 0;
    vlSelf->testbench__DOT__regname = VL_RAND_RESET_Q(56);
    vlSelf->testbench__DOT__top__DOT__timer_irq = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__twready = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__trready = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__trresp = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__trdata = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__drdata = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__data_sel = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__sw_irq = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__illegal_com_ins = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__compressed_ins = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__pipefill = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_insn = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm_sel = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_dst_sel = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_subtype = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ret_pc = VL_RAND_RESET_I(31);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_lui = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_auipc = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_branch = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_trap = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_illegal = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_branch = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mul = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_com = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch_nxt = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop_more = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mscratch = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_misa = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs = VL_RAND_RESET_Q(33);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu = VL_RAND_RESET_Q(33);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_result = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_mul = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_insn = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddress = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_system = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_ld_align_excp = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT____Vlvbound_h7ac1a0fd__0 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT____Vlvbound_h9369a3c8__0 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime_nxt = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32768; ++__Vi0) {
        vlSelf->testbench__DOT__imem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->testbench__DOT__imem__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__imem__DOT__rdata1 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__imem__DOT__rdata2 = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__imem__DOT__aligned = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__imem__DOT__file = 0;
    vlSelf->testbench__DOT__imem__DOT__r = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32768; ++__Vi0) {
        vlSelf->testbench__DOT__dmem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->testbench__DOT__dmem__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dmem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dmem__DOT__file = 0;
    vlSelf->testbench__DOT__dmem__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__testbench__DOT__fillcount = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__fetch_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__wb_memwr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__pipefill = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_cycle = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_instret = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvdim0__testbench__DOT__top__DOT__riscv__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__top__DOT__riscv__DOT__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v1 = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
