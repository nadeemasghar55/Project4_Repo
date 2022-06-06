// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv___024root.h"

VL_INLINE_OPT void Vriscv___024root___sequent__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__testbench__DOT__count;
    IData/*31:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause;
    IData/*31:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus;
    IData/*31:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval;
    IData/*31:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc;
    IData/*31:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip;
    // Body
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg;
    __Vdly__testbench__DOT__count = vlSelf->testbench__DOT__count;
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__wb_memwr 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr;
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__pipefill 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__pipefill;
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_instret 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret;
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_cycle 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle;
    vlSelf->__Vdly__testbench__DOT__fillcount = vlSelf->testbench__DOT__fillcount;
    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc;
    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip;
    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause;
    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtval;
    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus;
    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc;
    vlSelf->__Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v0 = 0U;
    vlSelf->__Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->resetb)))) {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__i = 0x20U;
    }
    vlSelf->testbench__DOT__dmem_rresp = ((IData)(vlSelf->resetb) 
                                          & (IData)(vlSelf->testbench__DOT__dmem_rready));
    vlSelf->testbench__DOT__imem_rresp = ((IData)(vlSelf->resetb) 
                                          & (IData)(vlSelf->testbench__DOT__imem_ready));
    vlSelf->testbench__DOT__top__DOT__trresp = ((IData)(vlSelf->resetb) 
                                                & (IData)(vlSelf->testbench__DOT__top__DOT__trready));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__flush 
        = (1U & ((~ (IData)(vlSelf->resetb)) | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)));
    if (vlSelf->resetb) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_subtype 
                = (1U & ((vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                          >> 0x1eU) & (~ (IData)((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))))));
        }
        if (((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp) 
               | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp)) 
              | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp)) 
             | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp))) {
            vlSelf->testbench__DOT__exception = 1U;
        }
        if ((3U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) {
            vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg = 1U;
        } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg) {
            vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system 
                = (IData)((0x73U == (0x707fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)));
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_subtype = 0U;
        vlSelf->testbench__DOT__exception = 0U;
        vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system = 0U;
    }
    if (vlSelf->resetb) {
        __Vdly__testbench__DOT__count = ((vlSelf->testbench__DOT__next_pc 
                                          == vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc)
                                          ? (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__count)))
                                          : 0U);
        if (VL_UNLIKELY((0x64U < (IData)(vlSelf->testbench__DOT__count)))) {
            VL_WRITEF("Executing timeout\n");
            VL_FINISH_MT("../rtl/../testbench/testbench.v", 145, "");
        }
        vlSelf->testbench__DOT__next_pc = vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc;
    } else {
        vlSelf->testbench__DOT__next_pc = 0U;
        __Vdly__testbench__DOT__count = 0U;
    }
    if (vlSelf->resetb) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_illegal 
                = (1U & (~ (((((((((((((0x17U == (0x7fU 
                                                  & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                                       | (0x37U == 
                                          (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) 
                                     | (0x67U == (0x7fU 
                                                  & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) 
                                   | ((3U == (0x7fU 
                                              & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                                      & (((((0U == 
                                             (7U & 
                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                               >> 0xcU))) 
                                            | (1U == 
                                               (7U 
                                                & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                   >> 0xcU)))) 
                                           | (2U == 
                                              (7U & 
                                               (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                >> 0xcU)))) 
                                          | (4U == 
                                             (7U & 
                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                               >> 0xcU)))) 
                                         | (5U == (7U 
                                                   & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                      >> 0xcU)))))) 
                                  | ((0x23U == (0x7fU 
                                                & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                                     & (((0U == (7U 
                                                 & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                    >> 0xcU))) 
                                         | (1U == (7U 
                                                   & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                      >> 0xcU)))) 
                                        | (2U == (7U 
                                                  & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                     >> 0xcU)))))) 
                                 | (0x13U == (0x7fU 
                                              & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) 
                                | ((0x33U == (0x7fU 
                                              & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                                   & ((0U == (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                              >> 0x19U)) 
                                      | (0x20U == (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                   >> 0x19U))))) 
                               | (IData)((0x2000033U 
                                          == (0xfe00007fU 
                                              & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)))) 
                              | (0xfU == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) 
                             | (0x73U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) 
                            | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__c_valid))));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op 
                = (0x73U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_branch 
                = (0x63U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst));
        }
        if ((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr) 
              & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush))) 
             & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp)))) {
            vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__wb_memwr = 1U;
        } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr) {
            vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__wb_memwr = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            if ((2U != (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__pipefill))) {
                vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__pipefill 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__pipefill)));
            } else {
                vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_cycle 
                    = (1ULL + vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle);
                if ((1U & ((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
                           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush))))) {
                    vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_instret 
                        = (1ULL + vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret);
                }
            }
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_c_valid 
                = ((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch)) 
                   & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__c_valid));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel 
                = (0x1fU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                            >> 0x14U));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm_sel 
                = (((0x67U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                    | (3U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst))) 
                   | (0x13U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel 
                = (0x1fU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                            >> 0xfU));
        }
        if ((((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
              & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush))) 
             & (3U != (IData)(vlSelf->testbench__DOT__fillcount)))) {
            vlSelf->__Vdly__testbench__DOT__fillcount 
                = (3U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__fillcount)));
        }
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch_nxt 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch;
            vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__c_valid)
                    ? ((IData)(4U) + vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc)
                    : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)
                        ? ((IData)(4U) + vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc)
                        : ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_trap)
                            ? (((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall) 
                                & (2U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)))
                                ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc
                                : ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec)
                                    ? ((0xfffffffcU 
                                        & vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec) 
                                       + (0x3cU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause 
                                                   << 2U)))
                                    : (0xfffffffeU 
                                       & vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec)))
                            : (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__next_pc))));
        }
        vlSelf->testbench__DOT__top__DOT__timer_irq 
            = ((1ULL + vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime) 
               >= vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp);
        if ((((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
              & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr)) 
             & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)))) {
            if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                          >> 0xbU)))) {
                if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                              >> 0xaU)))) {
                    if ((0x200U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                        if ((0x100U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                            if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                          >> 7U)))) {
                                if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                              >> 6U)))) {
                                    if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                                                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_misa 
                                                                = 
                                                                ((2U 
                                                                  & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                                   ? 
                                                                  (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_misa 
                                                                   & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                                   : 
                                                                  (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_misa 
                                                                   | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                                  : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x40U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                                    if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mscratch 
                                                                = 
                                                                ((2U 
                                                                  & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                                   ? 
                                                                  (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mscratch 
                                                                   & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                                   : 
                                                                  (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mscratch 
                                                                   | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                                  : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                              >> 6U)))) {
                                    if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                                                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec 
                                                                = 
                                                                ((2U 
                                                                  & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                                   ? 
                                                                  (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec 
                                                                   & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                                   : 
                                                                  (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec 
                                                                   | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                                  : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & ((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
                   & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush))))) {
            if (((((((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp) 
                       | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr)) 
                      | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp)) 
                     | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp)) 
                    | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp)) 
                   | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq)) 
                  | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq)) 
                 | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt))) {
                if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause = 2U;
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr) {
                    if ((0x341U != (0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        if ((0x342U != (0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            if ((0x343U != (0xfffU 
                                            & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                if ((0x300U != (0xfffU 
                                                & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                    if ((0x344U == 
                                         (0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                                            = ((2U 
                                                & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                    ? 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                                                    & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                    : 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                                                    | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                                    }
                                }
                            }
                        }
                        if ((0x342U == (0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause 
                                = ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                    ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                        ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause 
                                           & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                        : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause 
                                           | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                    : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                        }
                    }
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause = 0U;
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause = 4U;
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause = 6U;
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                        = (0x80U | __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause = 0x80000007U;
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                        = (8U | __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause = 0x80000003U;
                } else {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                        = (0x800U | __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause = 0x8000000bU;
                }
            } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall) {
                __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip 
                    = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip;
                __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause 
                    = ((0U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))
                        ? 0xbU : ((1U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))
                                   ? 3U : ((2U == (3U 
                                                   & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))
                                            ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause
                                            : 2U)));
            }
        }
        if ((((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
              & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr)) 
             & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)))) {
            if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                          >> 0xbU)))) {
                if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                              >> 0xaU)))) {
                    if ((0x200U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                        if ((0x100U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                            if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                          >> 7U)))) {
                                if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                              >> 6U)))) {
                                    if ((1U & (~ (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                                            vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                                                                = 
                                                                ((2U 
                                                                  & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                                   ? 
                                                                  (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                                                                   & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                                   : 
                                                                  (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                                                                   | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                                  : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & ((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
                   & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush))))) {
            if (((((((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp) 
                       | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr)) 
                      | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp)) 
                     | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp)) 
                    | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp)) 
                   | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq)) 
                  | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq)) 
                 | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt))) {
                if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_insn;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                           | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                       << 4U)));
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr) {
                    if ((0x341U != (0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        if ((0x342U != (0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                            if ((0x343U == (0xfffU 
                                            & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
                                    = ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                        ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                            ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
                                               & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                            : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
                                               | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                        : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                            }
                            if ((0x343U != (0xfffU 
                                            & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                if ((0x300U == (0xfffU 
                                                & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                        = ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                            ? ((1U 
                                                & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                                ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                                   & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                                : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                                   | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                            : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                                }
                            }
                        }
                    }
                    if ((0x341U == (0xfffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                            = ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                                       & (~ vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                                       | vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data))
                                : vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data);
                    }
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__next_pc);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                           | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                       << 4U)));
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                           | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                       << 4U)));
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                           | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                       << 4U)));
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                } else {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval = 0U;
                    if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq) {
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                            = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                               | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                           << 4U)));
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                            = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                            = (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ret_pc 
                               << 1U);
                    } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq) {
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                            = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                               | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                           << 4U)));
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                            = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                            = (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ret_pc 
                               << 1U);
                    } else {
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                            = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                               | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                           << 4U)));
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                            = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                            = (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ret_pc 
                               << 1U);
                    }
                }
            } else if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall) {
                if ((0U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval = 0U;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                           | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                       << 4U)));
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                } else if ((1U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval = 0U;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = ((0xffffff7fU & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                           | (0x80U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                       << 4U)));
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = (0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus);
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                } else if ((2U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))) {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval = 0U;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = ((0xfffffff7U & __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus) 
                           | (8U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                                    >> 4U)));
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                } else {
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_insn;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                        = vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus;
                    __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
                        = (0xfffffffeU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc);
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr 
                = (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr);
        }
        vlSelf->testbench__DOT__top__DOT__data_sel 
            = (9U == (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                      >> 0x1cU));
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop_more 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop;
        }
        if ((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg) 
              & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r))) 
             & (~ ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r) 
                   | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush))))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT____Vlvbound_h7ac1a0fd__0 
                = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg)
                    ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata
                    : vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result);
            if ((0x1eU >= (0x1fU & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel) 
                                    - (IData)(1U))))) {
                vlSelf->__Vdlyvval__testbench__DOT__top__DOT__riscv__DOT__regs__v0 
                    = vlSelf->testbench__DOT__top__DOT__riscv__DOT____Vlvbound_h7ac1a0fd__0;
                vlSelf->__Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v0 = 1U;
                vlSelf->__Vdlyvdim0__testbench__DOT__top__DOT__riscv__DOT__regs__v0 
                    = (0x1fU & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel) 
                                - (IData)(1U)));
            }
        }
        vlSelf->testbench__DOT__count = __Vdly__testbench__DOT__count;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc;
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr 
                = (((0x73U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                    & (0U != (7U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                    >> 0xcU)))) & (~ (IData)(
                                                             (((0U 
                                                                == 
                                                                (0xf8000U 
                                                                 & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                                                               & (1U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                                      >> 0xcU)))) 
                                                              & (5U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                                     >> 0xcU)))))));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch 
                = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken) 
                   | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_trap));
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_illegal = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_branch = 0U;
        vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__wb_memwr = 0U;
        vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_cycle = 0ULL;
        vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_instret = 0ULL;
        vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__pipefill = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_c_valid = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm_sel = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel = 0U;
        vlSelf->__Vdly__testbench__DOT__fillcount = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch_nxt = 0U;
        vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__fetch_pc = 0U;
        vlSelf->testbench__DOT__top__DOT__timer_irq = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_misa = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec = 0U;
        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip = 0U;
        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie = 0U;
        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval = 0U;
        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus = 0U;
        __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr = 0U;
        vlSelf->testbench__DOT__top__DOT__data_sel = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop_more = 0U;
        vlSelf->__Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v1 = 1U;
        vlSelf->testbench__DOT__count = __Vdly__testbench__DOT__count;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mip;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mcause;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtval 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mtval;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mstatus;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc 
            = __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_mepc;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch = 0U;
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch) 
           | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch_nxt));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq 
        = (((((IData)(vlSelf->testbench__DOT__top__DOT__timer_irq) 
              & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                 >> 3U)) & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                            >> 7U)) & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op))) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
}

extern const VlUnpacked<QData/*55:0*/, 32> Vriscv__ConstPool__TABLE_he7da8a49_0;

VL_INLINE_OPT void Vriscv___024root___sequent__TOP__2(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    if (vlSelf->__Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v0) {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[vlSelf->__Vdlyvdim0__testbench__DOT__top__DOT__riscv__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__testbench__DOT__top__DOT__riscv__DOT__regs__v0;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v1) {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[1U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[2U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[3U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[4U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[5U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[6U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[7U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[8U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[9U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0xaU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0xbU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0xcU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0xdU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0xeU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0xfU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x10U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x11U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x12U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x13U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x14U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x15U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x16U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x17U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x18U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x19U] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x1aU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x1bU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x1cU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x1dU] = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0x1eU] = 0U;
    }
    vlSelf->testbench__DOT__fillcount = vlSelf->__Vdly__testbench__DOT__fillcount;
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop) 
           | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop_more));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr 
        = vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__wb_memwr;
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret 
        = vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_instret;
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle 
        = vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_cycle;
    vlSelf->testbench__DOT__top__DOT__drdata = ((IData)(vlSelf->testbench__DOT__top__DOT__data_sel)
                                                 ? vlSelf->testbench__DOT__top__DOT__trdata
                                                 : vlSelf->testbench__DOT__dmem_rdata);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__c_valid 
        = (((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag) 
            & (~ (IData)(vlSelf->testbench__DOT__top__DOT__illegal_ins_flag))) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_c_valid)));
    if (vlSelf->resetb) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_system 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break 
                = (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm);
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_ld_align_excp 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_insn 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_insn;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_pc 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_result;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_dst_sel;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg 
                = ((((((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu) 
                         | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_lui)) 
                        | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_auipc)) 
                       | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal)) 
                      | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr)) 
                     | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr)) 
                    | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mul)) 
                   | ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg) 
                      & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp))));
        }
        if (((IData)(vlSelf->testbench__DOT__top__DOT__twready) 
             & (0x90000008U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr))) {
            vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp 
                = ((0xffffffff00000000ULL & vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp) 
                   | (IData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata)));
        } else if (((IData)(vlSelf->testbench__DOT__top__DOT__twready) 
                    & (0x9000000cU == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr))) {
            vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp 
                = ((0xffffffffULL & vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp) 
                   | ((QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata)) 
                      << 0x20U));
        }
        if (((IData)(vlSelf->testbench__DOT__top__DOT__twready) 
             & (0x90000000U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr))) {
            vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime 
                = ((0xffffffff00000000ULL & vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime) 
                   | (IData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata)));
        } else if (((IData)(vlSelf->testbench__DOT__top__DOT__twready) 
                    & (0x90000004U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr))) {
            vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime 
                = ((0xffffffffULL & vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime) 
                   | ((QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata)) 
                      << 0x20U));
        } else if ((2U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__pipefill))) {
            vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime 
                = vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime_nxt;
        }
        if (((IData)(vlSelf->testbench__DOT__top__DOT__twready) 
             & (0x90000010U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr))) {
            vlSelf->testbench__DOT__ex_irq = (1U & 
                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                                               >> 0x10U));
            vlSelf->testbench__DOT__top__DOT__sw_irq 
                = (1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata);
        }
        if (((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
             & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb 
                = ((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                    ? ((0U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr))
                        ? 1U : ((1U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr))
                                 ? 2U : ((2U == (3U 
                                                 & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr))
                                          ? 4U : 8U)))
                    : ((1U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                        ? ((2U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr)
                            ? 0xcU : 3U) : 0xfU));
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_system = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_ld_align_excp = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_insn = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_pc = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg = 0U;
        vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp = 0ULL;
        vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime = 0ULL;
        vlSelf->testbench__DOT__ex_irq = 0U;
        vlSelf->testbench__DOT__top__DOT__sw_irq = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb = 0U;
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall 
        = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg 
        = vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg;
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__pipefill 
        = vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__pipefill;
    if (vlSelf->resetb) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__imm;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_insn 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc;
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_insn = 0x13U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc = 0U;
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata 
        = ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
            ? ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                ? 0U : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                         ? (0xffffU & vlSelf->testbench__DOT__top__DOT__drdata)
                         : ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                             ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                                 ? (0xffU & (vlSelf->testbench__DOT__top__DOT__drdata 
                                             >> 8U))
                                 : (0xffU & vlSelf->testbench__DOT__top__DOT__drdata))
                             : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                                 ? (0xffU & (vlSelf->testbench__DOT__top__DOT__drdata 
                                             >> 8U))
                                 : (0xffU & vlSelf->testbench__DOT__top__DOT__drdata)))))
            : ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                    ? 0U : vlSelf->testbench__DOT__top__DOT__drdata)
                : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op))
                    ? (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->testbench__DOT__top__DOT__drdata))
                    : ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                        ? ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                            ? (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->testbench__DOT__top__DOT__drdata)))
                        : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr))
                            ? (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->testbench__DOT__top__DOT__drdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->testbench__DOT__top__DOT__drdata)))))));
    if (vlSelf->resetb) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_dst_sel 
                = (0x1fU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                            >> 7U));
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_dst_sel = 0U;
    }
    __Vtableidx1 = vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel;
    vlSelf->testbench__DOT__regname = Vriscv__ConstPool__TABLE_he7da8a49_0
        [__Vtableidx1];
    if (vlSelf->resetb) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu 
                = ((0x13U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                   | ((0x33U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                      & ((0U == (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                 >> 0x19U)) | (0x20U 
                                               == (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                                   >> 0x19U)))));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_lui 
                = (0x37U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_auipc 
                = (0x17U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mul 
                = (IData)((0x2000033U == (0xfe00007fU 
                                          & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr 
                = ((0x73U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst)) 
                   & (0U != (7U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                                   >> 0xcU))));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal 
                = (0x6fU == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr 
                = (0x67U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst));
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_lui = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_auipc = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mul = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr = 0U;
    }
    vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime_nxt 
        = (1ULL + vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime);
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt 
        = (((((IData)(vlSelf->testbench__DOT__ex_irq) 
              & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                 >> 3U)) & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                            >> 0xbU)) & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op))) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq 
        = (((((IData)(vlSelf->testbench__DOT__top__DOT__sw_irq) 
              & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus 
                 >> 3U)) & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie 
                            >> 3U)) & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op))) 
           & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)));
    if (vlSelf->resetb) {
        if (((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)) 
             & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr;
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata 
                = ((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                    ? ((vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 
                        << 0x18U) | ((0xff0000U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 
                                          << 8U)) | 
                                        (0xffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))))
                    : ((1U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                        ? ((vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 
                            << 0x10U) | (0xffffU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                        : ((2U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                            ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2
                            : 0U)));
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata = 0U;
    }
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
    if (vlSelf->resetb) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc 
                = vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc;
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc = 0U;
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
        = (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
           + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm);
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
    vlSelf->testbench__DOT__top__DOT__twready = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr) 
                                                 & (9U 
                                                    == 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                                                     >> 0x1cU)));
    vlSelf->testbench__DOT__dmem_wready = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr) 
                                           & (9U != 
                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                                               >> 0x1cU)));
    if (vlSelf->resetb) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)))) {
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr 
                = (0x23U == (0x7fU & vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst));
            vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op 
                = (7U & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
                         >> 0xcU));
        }
    } else {
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr = 0U;
        vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op = 0U;
    }
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_mul 
        = VL_MULS_QQQ(64, (((QData)((IData)((- (IData)(
                                                       (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1))), 
                      (((QData)((IData)((- (IData)(
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))));
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
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
        = vlSelf->__Vdly__testbench__DOT__top__DOT__riscv__DOT__fetch_pc;
    vlSelf->testbench__DOT__dmem_rready = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg) 
                                           & (9U != 
                                              (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                               >> 0x1cU)));
    vlSelf->testbench__DOT__top__DOT__trready = ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg) 
                                                 & (9U 
                                                    == 
                                                    (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                                     >> 0x1cU)));
    vlSelf->testbench__DOT__wready = ((~ ((IData)(vlSelf->testbench__DOT__dmem_wready) 
                                          & (((0x9000001cU 
                                               == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr) 
                                              | (0x90000020U 
                                                 == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr)) 
                                             | (0x9000002cU 
                                                == vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr)))) 
                                      & (IData)(vlSelf->testbench__DOT__dmem_wready));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst 
        = ((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__flush) 
             | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_c_valid)) 
            | ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch) 
               & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__c_valid)))
            ? 0x13U : vlSelf->testbench__DOT__top__DOT__imem_rdata_decompressed);
    if (vlSelf->testbench__DOT__top__DOT__riscv__DOT__c_valid) {
        VL_WRITEF("Decompressed instr 0x%08x\n",32,
                  vlSelf->testbench__DOT__top__DOT__imem_rdata_decompressed);
    } else {
        VL_WRITEF("Normal instr 0x%08x at PC 0x%08x\n",
                  32,vlSelf->testbench__DOT__top__DOT__imem_rdata_decompressed,
                  32,vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc);
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
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r 
        = (1U & ((~ (IData)(vlSelf->resetb)) | (IData)(vlSelf->stall)));
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data 
        = ((4U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
            ? (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel)
            : vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1);
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
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                       + ((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag)
                                           ? 2U : 4U))
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))
                                : ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu 
                                                  >> 0x20U)))
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                       + ((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag)
                                           ? 2U : 4U))))
                            : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                ? ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs 
                                                  >> 0x20U)))
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                       + ((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag)
                                           ? 2U : 4U))
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm))
                                : ((1U & (IData)((vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs 
                                                  >> 0x20U)))
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                       + ((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag)
                                           ? 2U : 4U)))))
                        : ((2U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                            ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc
                            : ((1U & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op))
                                ? ((0ULL != vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs)
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                       + ((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag)
                                           ? 2U : 4U)))
                                : ((0ULL == vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs)
                                    ? (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc 
                                       + vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)
                                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                       + ((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag)
                                           ? 2U : 4U))))))
                    : (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                       + ((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag)
                           ? 2U : 4U)))));
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
    vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp 
        = ((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush)) 
           & (((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_branch) 
               | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr)) 
              | (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_illegal)));
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
                 & vlSelf->testbench__DOT__top__DOT__riscv__DOT__next_pc));
    vlSelf->testbench__DOT__imem_ready = (1U & (~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r)));
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

void Vriscv___024root___sequent__TOP__1(Vriscv___024root* vlSelf);

void Vriscv___024root___eval(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->resetb)) & (IData)(vlSelf->__Vclklast__TOP__resetb)))) {
        Vriscv___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vriscv___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->resetb)) & (IData)(vlSelf->__Vclklast__TOP__resetb)))) {
        Vriscv___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__resetb = vlSelf->resetb;
}

#ifdef VL_DEBUG
void Vriscv___024root___eval_debug_assertions(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->resetb & 0xfeU))) {
        Verilated::overWidthError("resetb");}
    if (VL_UNLIKELY((vlSelf->stall & 0xfeU))) {
        Verilated::overWidthError("stall");}
}
#endif  // VL_DEBUG
