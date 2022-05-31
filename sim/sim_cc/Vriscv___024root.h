// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv.h for the primary calling header

#ifndef VERILATED_VRISCV___024ROOT_H_
#define VERILATED_VRISCV___024ROOT_H_  // guard

#include "verilated.h"

class Vriscv__Syms;
class Vriscv___024unit;

VL_MODULE(Vriscv___024root) {
  public:
    // CELLS
    Vriscv___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(resetb,0,0);
        VL_IN8(stall,0,0);
        CData/*0:0*/ testbench__DOT__exception;
        CData/*0:0*/ testbench__DOT__ex_irq;
        CData/*7:0*/ testbench__DOT__count;
        CData/*1:0*/ testbench__DOT__fillcount;
        CData/*0:0*/ testbench__DOT__imem_ready;
        CData/*0:0*/ testbench__DOT__imem_rresp;
        CData/*0:0*/ testbench__DOT__dmem_wready;
        CData/*0:0*/ testbench__DOT__dmem_rready;
        CData/*0:0*/ testbench__DOT__dmem_rresp;
        CData/*0:0*/ testbench__DOT__wready;
        CData/*0:0*/ testbench__DOT__top__DOT__timer_irq;
        CData/*0:0*/ testbench__DOT__top__DOT__twready;
        CData/*0:0*/ testbench__DOT__top__DOT__trready;
        CData/*0:0*/ testbench__DOT__top__DOT__trresp;
        CData/*0:0*/ testbench__DOT__top__DOT__data_sel;
        CData/*0:0*/ testbench__DOT__top__DOT__sw_irq;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__illegal_com_ins;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__compressed_ins;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__stall_r;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__flush;
        CData/*1:0*/ testbench__DOT__top__DOT__riscv__DOT__pipefill;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_imm_sel;
        CData/*4:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel;
        CData/*4:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel;
        CData/*4:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_dst_sel;
        CData/*2:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_alu_op;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_subtype;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_memwr;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_alu;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_csr;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_lui;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_auipc;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_jal;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_jalr;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_branch;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_system;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_system_op;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_systemcall;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_flush;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_trap;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_illegal;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_ill_branch;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_interrupt;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_mul;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_com;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg;
        CData/*2:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_alu_op;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_memwr;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg;
        CData/*4:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_branch;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_branch_nxt;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_nop;
    };
    struct {
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_nop_more;
        CData/*1:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_raddr;
        CData/*3:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_wstrb;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_flush;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__branch_taken;
        CData/*1:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_break;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_system;
        CData/*0:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_ld_align_excp;
        CData/*0:0*/ testbench__DOT__imem__DOT__aligned;
        CData/*1:0*/ __Vdly__testbench__DOT__fillcount;
        CData/*0:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg;
        CData/*0:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__wb_memwr;
        CData/*1:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__pipefill;
        CData/*4:0*/ __Vdlyvdim0__testbench__DOT__top__DOT__riscv__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__top__DOT__riscv__DOT__regs__v1;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__resetb;
        IData/*31:0*/ testbench__DOT__next_pc;
        IData/*31:0*/ testbench__DOT__i;
        IData/*31:0*/ testbench__DOT__dump;
        IData/*31:0*/ testbench__DOT__dmem_rdata;
        IData/*31:0*/ testbench__DOT__fp;
        IData/*31:0*/ testbench__DOT__top__DOT__trdata;
        IData/*31:0*/ testbench__DOT__top__DOT__drdata;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__inst;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__fetch_pc;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__if_pc;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_pc;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_pc;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__reg_rdata1;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__alu_op2;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_insn;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_imm;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_memaddr;
        IData/*30:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_ret_pc;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_csr_read;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_csr_data;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_mcause;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_result;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_waddr;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_wdata;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_rdata;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_mscratch;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_mstatus;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_misa;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_mie;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_mip;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_mtvec;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_mepc;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_mcause;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_mtval;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__i;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__imm;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__ex_result;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__next_pc;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_insn;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT__wb_raddress;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT____Vlvbound_h7ac1a0fd__0;
        IData/*31:0*/ testbench__DOT__top__DOT__riscv__DOT____Vlvbound_h9369a3c8__0;
        IData/*31:0*/ testbench__DOT__imem__DOT__data;
        IData/*31:0*/ testbench__DOT__imem__DOT__rdata1;
        IData/*31:0*/ testbench__DOT__imem__DOT__rdata2;
    };
    struct {
        IData/*31:0*/ testbench__DOT__imem__DOT__i;
        IData/*31:0*/ testbench__DOT__imem__DOT__file;
        IData/*31:0*/ testbench__DOT__imem__DOT__r;
        IData/*31:0*/ testbench__DOT__dmem__DOT__data;
        IData/*31:0*/ testbench__DOT__dmem__DOT__i;
        IData/*31:0*/ testbench__DOT__dmem__DOT__file;
        IData/*31:0*/ testbench__DOT__dmem__DOT__r;
        IData/*31:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__fetch_pc;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__top__DOT__riscv__DOT__regs__v0;
        QData/*55:0*/ testbench__DOT__regname;
        QData/*63:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_cycle;
        QData/*63:0*/ testbench__DOT__top__DOT__riscv__DOT__csr_instret;
        QData/*32:0*/ testbench__DOT__top__DOT__riscv__DOT__result_subs;
        QData/*32:0*/ testbench__DOT__top__DOT__riscv__DOT__result_subu;
        QData/*63:0*/ testbench__DOT__top__DOT__riscv__DOT__result_mul;
        QData/*63:0*/ testbench__DOT__top__DOT__clint__DOT__mtime;
        QData/*63:0*/ testbench__DOT__top__DOT__clint__DOT__mtimecmp;
        QData/*63:0*/ testbench__DOT__top__DOT__clint__DOT__mtime_nxt;
        QData/*63:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_cycle;
        QData/*63:0*/ __Vdly__testbench__DOT__top__DOT__riscv__DOT__csr_instret;
        VlUnpacked<IData/*31:0*/, 31> testbench__DOT__top__DOT__riscv__DOT__regs;
        VlUnpacked<IData/*31:0*/, 32768> testbench__DOT__imem__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32768> testbench__DOT__dmem__DOT__ram;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vriscv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv___024root(Vriscv__Syms* symsp, const char* name);
    ~Vriscv___024root();
    VL_UNCOPYABLE(Vriscv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
