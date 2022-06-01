// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vriscv__Syms.h"


void Vriscv___024root__trace_chg_sub_0(Vriscv___024root* vlSelf, VerilatedFst* tracep);

void Vriscv___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_chg_top_0\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vriscv___024root__trace_chg_sub_0(Vriscv___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->testbench__DOT__dump),32);
        tracep->chgIData(oldp+1,(vlSelf->testbench__DOT__fp),32);
        tracep->chgIData(oldp+2,(vlSelf->testbench__DOT__dmem__DOT__data),32);
        tracep->chgIData(oldp+3,(vlSelf->testbench__DOT__dmem__DOT__i),32);
        tracep->chgIData(oldp+4,(vlSelf->testbench__DOT__dmem__DOT__file),32);
        tracep->chgIData(oldp+5,(vlSelf->testbench__DOT__dmem__DOT__r),32);
        tracep->chgIData(oldp+6,(vlSelf->testbench__DOT__imem__DOT__data),32);
        tracep->chgIData(oldp+7,(vlSelf->testbench__DOT__imem__DOT__i),32);
        tracep->chgIData(oldp+8,(vlSelf->testbench__DOT__imem__DOT__file),32);
        tracep->chgIData(oldp+9,(vlSelf->testbench__DOT__imem__DOT__r),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+10,(vlSelf->testbench__DOT__exception));
        tracep->chgIData(oldp+11,(vlSelf->testbench__DOT__next_pc),32);
        tracep->chgCData(oldp+12,(vlSelf->testbench__DOT__count),8);
        tracep->chgBit(oldp+13,(vlSelf->testbench__DOT__imem_rresp));
        tracep->chgBit(oldp+14,(vlSelf->testbench__DOT__dmem_rresp));
        tracep->chgBit(oldp+15,(vlSelf->testbench__DOT__imem__DOT__aligned));
        tracep->chgBit(oldp+16,(vlSelf->testbench__DOT__top__DOT__timer_irq));
        tracep->chgBit(oldp+17,(vlSelf->testbench__DOT__top__DOT__trresp));
        tracep->chgBit(oldp+18,(vlSelf->testbench__DOT__top__DOT__data_sel));
        tracep->chgBit(oldp+19,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__flush));
        tracep->chgBit(oldp+20,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm_sel));
        tracep->chgCData(oldp+21,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src1_sel),5);
        tracep->chgCData(oldp+22,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel),5);
        tracep->chgBit(oldp+23,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_subtype));
        tracep->chgBit(oldp+24,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_wr));
        tracep->chgBit(oldp+25,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_branch));
        tracep->chgBit(oldp+26,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system));
        tracep->chgBit(oldp+27,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_system_op));
        tracep->chgBit(oldp+28,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_flush));
        tracep->chgBit(oldp+29,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_illegal));
        tracep->chgBit(oldp+30,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_timer_irq));
        tracep->chgBit(oldp+31,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch));
        tracep->chgBit(oldp+32,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_branch_nxt));
        tracep->chgBit(oldp+33,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop));
        tracep->chgBit(oldp+34,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_nop_more));
        tracep->chgCData(oldp+35,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddr),2);
        tracep->chgIData(oldp+36,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mscratch),32);
        tracep->chgIData(oldp+37,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mstatus),32);
        tracep->chgIData(oldp+38,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_misa),32);
        tracep->chgIData(oldp+39,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mie),32);
        tracep->chgIData(oldp+40,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mip),32);
        tracep->chgIData(oldp+41,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec),32);
        tracep->chgIData(oldp+42,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc),32);
        tracep->chgIData(oldp+43,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mcause),32);
        tracep->chgIData(oldp+44,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtval),32);
        tracep->chgIData(oldp+45,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+46,(vlSelf->testbench__DOT__i),32);
        tracep->chgIData(oldp+47,(vlSelf->testbench__DOT__dmem_rdata),32);
        tracep->chgIData(oldp+48,(vlSelf->testbench__DOT__imem__DOT__rdata1),32);
        tracep->chgIData(oldp+49,(vlSelf->testbench__DOT__imem__DOT__rdata2),32);
        tracep->chgIData(oldp+50,(vlSelf->testbench__DOT__top__DOT__trdata),32);
        tracep->chgIData(oldp+51,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_raddress),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgIData(oldp+52,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[0]),32);
        tracep->chgIData(oldp+53,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[1]),32);
        tracep->chgIData(oldp+54,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[2]),32);
        tracep->chgIData(oldp+55,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[3]),32);
        tracep->chgIData(oldp+56,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[4]),32);
        tracep->chgIData(oldp+57,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[5]),32);
        tracep->chgIData(oldp+58,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[6]),32);
        tracep->chgIData(oldp+59,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[7]),32);
        tracep->chgIData(oldp+60,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[8]),32);
        tracep->chgIData(oldp+61,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[9]),32);
        tracep->chgIData(oldp+62,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[10]),32);
        tracep->chgIData(oldp+63,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[11]),32);
        tracep->chgIData(oldp+64,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[12]),32);
        tracep->chgIData(oldp+65,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[13]),32);
        tracep->chgIData(oldp+66,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[14]),32);
        tracep->chgIData(oldp+67,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[15]),32);
        tracep->chgIData(oldp+68,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[16]),32);
        tracep->chgIData(oldp+69,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[17]),32);
        tracep->chgIData(oldp+70,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[18]),32);
        tracep->chgIData(oldp+71,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[19]),32);
        tracep->chgIData(oldp+72,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[20]),32);
        tracep->chgIData(oldp+73,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[21]),32);
        tracep->chgIData(oldp+74,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[22]),32);
        tracep->chgIData(oldp+75,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[23]),32);
        tracep->chgIData(oldp+76,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[24]),32);
        tracep->chgIData(oldp+77,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[25]),32);
        tracep->chgIData(oldp+78,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[26]),32);
        tracep->chgIData(oldp+79,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[27]),32);
        tracep->chgIData(oldp+80,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[28]),32);
        tracep->chgIData(oldp+81,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[29]),32);
        tracep->chgIData(oldp+82,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs[30]),32);
        tracep->chgIData(oldp+83,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [0U]),32);
        tracep->chgIData(oldp+84,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [1U]),32);
        tracep->chgIData(oldp+85,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [2U]),32);
        tracep->chgIData(oldp+86,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [3U]),32);
        tracep->chgIData(oldp+87,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [4U]),32);
        tracep->chgIData(oldp+88,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [5U]),32);
        tracep->chgIData(oldp+89,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [6U]),32);
        tracep->chgIData(oldp+90,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [7U]),32);
        tracep->chgIData(oldp+91,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [8U]),32);
        tracep->chgIData(oldp+92,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [9U]),32);
        tracep->chgIData(oldp+93,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [0xaU]),32);
        tracep->chgIData(oldp+94,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [0xbU]),32);
        tracep->chgIData(oldp+95,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [0xcU]),32);
        tracep->chgIData(oldp+96,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [0xdU]),32);
        tracep->chgIData(oldp+97,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [0xeU]),32);
        tracep->chgIData(oldp+98,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [0xfU]),32);
        tracep->chgIData(oldp+99,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                  [0x10U]),32);
        tracep->chgIData(oldp+100,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x11U]),32);
        tracep->chgIData(oldp+101,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x12U]),32);
        tracep->chgIData(oldp+102,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x13U]),32);
        tracep->chgIData(oldp+103,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x14U]),32);
        tracep->chgIData(oldp+104,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x15U]),32);
        tracep->chgIData(oldp+105,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x16U]),32);
        tracep->chgIData(oldp+106,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x17U]),32);
        tracep->chgIData(oldp+107,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x18U]),32);
        tracep->chgIData(oldp+108,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x19U]),32);
        tracep->chgIData(oldp+109,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x1aU]),32);
        tracep->chgIData(oldp+110,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x1bU]),32);
        tracep->chgIData(oldp+111,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x1cU]),32);
        tracep->chgIData(oldp+112,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x1dU]),32);
        tracep->chgIData(oldp+113,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                   [0x1eU]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+114,(vlSelf->testbench__DOT__ex_irq));
        tracep->chgCData(oldp+115,(vlSelf->testbench__DOT__fillcount),2);
        tracep->chgBit(oldp+116,(vlSelf->testbench__DOT__imem_ready));
        tracep->chgIData(oldp+117,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc),32);
        tracep->chgIData(oldp+118,(vlSelf->testbench__DOT__imem_rdata),32);
        tracep->chgBit(oldp+119,(vlSelf->testbench__DOT__dmem_wready));
        tracep->chgIData(oldp+120,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr),32);
        tracep->chgIData(oldp+121,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wdata),32);
        tracep->chgCData(oldp+122,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_wstrb),4);
        tracep->chgBit(oldp+123,(vlSelf->testbench__DOT__dmem_rready));
        tracep->chgIData(oldp+124,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr),32);
        tracep->chgBit(oldp+125,(vlSelf->testbench__DOT__wready));
        tracep->chgQData(oldp+126,(vlSelf->testbench__DOT__regname),56);
        tracep->chgIData(oldp+128,((0x3fffffffU & (
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                                    >> 2U) 
                                                   - (IData)(0x8000U)))),30);
        tracep->chgIData(oldp+129,((0x3fffffffU & (
                                                   (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                                                    >> 2U) 
                                                   - (IData)(0x8000U)))),30);
        tracep->chgSData(oldp+130,((0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memaddr 
                                               >> 2U))),15);
        tracep->chgSData(oldp+131,((0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_waddr 
                                               >> 2U))),15);
        tracep->chgIData(oldp+132,((vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                    >> 1U)),31);
        tracep->chgSData(oldp+133,((0x7fffU & (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                               >> 2U))),15);
        tracep->chgSData(oldp+134,((0x7fffU & ((IData)(1U) 
                                               + (vlSelf->testbench__DOT__top__DOT__riscv__DOT__fetch_pc 
                                                  >> 2U)))),15);
        tracep->chgBit(oldp+135,((2U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__pipefill))));
        tracep->chgBit(oldp+136,(vlSelf->testbench__DOT__top__DOT__twready));
        tracep->chgBit(oldp+137,(vlSelf->testbench__DOT__top__DOT__trready));
        tracep->chgBit(oldp+138,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_memwr));
        tracep->chgBit(oldp+139,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mem2reg));
        tracep->chgIData(oldp+140,(vlSelf->testbench__DOT__top__DOT__drdata),32);
        tracep->chgBit(oldp+141,(vlSelf->testbench__DOT__top__DOT__sw_irq));
        tracep->chgIData(oldp+142,(vlSelf->testbench__DOT__top__DOT__imem_rdata_decompressed),32);
        tracep->chgBit(oldp+143,(vlSelf->testbench__DOT__top__DOT__illegal_ins_flag));
        tracep->chgBit(oldp+144,(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag));
        tracep->chgQData(oldp+145,(vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime),64);
        tracep->chgQData(oldp+147,(vlSelf->testbench__DOT__top__DOT__clint__DOT__mtimecmp),64);
        tracep->chgQData(oldp+149,((1ULL + vlSelf->testbench__DOT__top__DOT__clint__DOT__mtime)),64);
        tracep->chgIData(oldp+151,(((IData)(vlSelf->testbench__DOT__top__DOT__compressed_ins_flag)
                                     ? 2U : 4U)),32);
        tracep->chgBit(oldp+152,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__stall_r));
        tracep->chgIData(oldp+153,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__inst),32);
        tracep->chgCData(oldp+154,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__pipefill),2);
        tracep->chgIData(oldp+155,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__if_pc),32);
        tracep->chgIData(oldp+156,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_pc),32);
        tracep->chgIData(oldp+157,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_pc),32);
        tracep->chgIData(oldp+158,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1),32);
        tracep->chgIData(oldp+159,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2),32);
        tracep->chgIData(oldp+160,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_insn),32);
        tracep->chgIData(oldp+161,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm),32);
        tracep->chgCData(oldp+162,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_dst_sel),5);
        tracep->chgCData(oldp+163,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu_op),3);
        tracep->chgBit(oldp+164,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_memwr));
        tracep->chgIData(oldp+165,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ret_pc),31);
        tracep->chgBit(oldp+166,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_alu));
        tracep->chgBit(oldp+167,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr));
        tracep->chgBit(oldp+168,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_lui));
        tracep->chgBit(oldp+169,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_auipc));
        tracep->chgBit(oldp+170,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jal));
        tracep->chgBit(oldp+171,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_jalr));
        tracep->chgBit(oldp+172,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall));
        tracep->chgIData(oldp+173,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_read),32);
        tracep->chgBit(oldp+174,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_trap));
        tracep->chgIData(oldp+175,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_csr_data),32);
        tracep->chgIData(oldp+176,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause),32);
        tracep->chgBit(oldp+177,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_branch));
        tracep->chgBit(oldp+178,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ld_align_excp));
        tracep->chgBit(oldp+179,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_st_align_excp));
        tracep->chgBit(oldp+180,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_ill_excp));
        tracep->chgBit(oldp+181,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_inst_align_excp));
        tracep->chgBit(oldp+182,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_sw_irq));
        tracep->chgBit(oldp+183,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_interrupt));
        tracep->chgBit(oldp+184,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mul));
        tracep->chgBit(oldp+185,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg));
        tracep->chgIData(oldp+186,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result),32);
        tracep->chgCData(oldp+187,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu_op),3);
        tracep->chgBit(oldp+188,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg));
        tracep->chgCData(oldp+189,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel),5);
        tracep->chgIData(oldp+190,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata),32);
        tracep->chgBit(oldp+191,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush));
        tracep->chgBit(oldp+192,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_ill_csr));
        tracep->chgQData(oldp+193,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_cycle),64);
        tracep->chgQData(oldp+195,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_instret),64);
        tracep->chgIData(oldp+197,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__imm),32);
        tracep->chgQData(oldp+198,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subs),33);
        tracep->chgQData(oldp+200,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_subu),33);
        tracep->chgIData(oldp+202,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_result),32);
        tracep->chgIData(oldp+203,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__next_pc),32);
        tracep->chgBit(oldp+204,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__branch_taken));
        tracep->chgQData(oldp+205,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__result_mul),64);
        tracep->chgQData(oldp+207,(((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1))) 
                                    * (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)))),64);
        tracep->chgQData(oldp+209,(((QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1)) 
                                    * (QData)((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)))),64);
        tracep->chgIData(oldp+211,(((0U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                     ? 0xffffffffU : 
                                    (((0x80000000U 
                                       == vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1) 
                                      & (0xffffffffU 
                                         == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                      ? 0x80000000U
                                      : VL_DIVS_III(32, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)))),32);
        tracep->chgIData(oldp+212,(((0U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                     ? 0xffffffffU : 
                                    VL_DIV_III(32, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))),32);
        tracep->chgIData(oldp+213,(((0U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                     ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1
                                     : (((0x80000000U 
                                          == vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1) 
                                         & (0xffffffffU 
                                            == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))
                                         ? 0U : VL_MODDIVS_III(32, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)))),32);
        tracep->chgIData(oldp+214,(((0U == vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2)
                                     ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1
                                     : VL_MODDIV_III(32, vlSelf->testbench__DOT__top__DOT__riscv__DOT__reg_rdata1, vlSelf->testbench__DOT__top__DOT__riscv__DOT__alu_op2))),32);
        tracep->chgIData(oldp+215,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_insn),32);
        tracep->chgCData(oldp+216,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_break),2);
        tracep->chgBit(oldp+217,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_system));
        tracep->chgBit(oldp+218,(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_ld_align_excp));
    }
    tracep->chgBit(oldp+219,(vlSelf->clk));
    tracep->chgBit(oldp+220,(vlSelf->resetb));
    tracep->chgBit(oldp+221,(vlSelf->stall));
    tracep->chgIData(oldp+222,(((0U == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel))
                                 ? 0U : ((((~ (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_flush)) 
                                           & (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_alu2reg)) 
                                          & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_dst_sel) 
                                             == (IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel)))
                                          ? ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_mem2reg)
                                              ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_rdata
                                              : vlSelf->testbench__DOT__top__DOT__riscv__DOT__wb_result)
                                          : ((0x1eU 
                                              >= (0x1fU 
                                                  & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel) 
                                                     - (IData)(1U))))
                                              ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__regs
                                             [(0x1fU 
                                               & ((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_src2_sel) 
                                                  - (IData)(1U)))]
                                              : 0U)))),32);
    tracep->chgIData(oldp+223,((((IData)(vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_systemcall) 
                                 & (2U == (3U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_imm)))
                                 ? vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mepc
                                 : ((1U & vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec)
                                     ? ((0xfffffffcU 
                                         & vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec) 
                                        + (0x3cU & 
                                           (vlSelf->testbench__DOT__top__DOT__riscv__DOT__ex_mcause 
                                            << 2U)))
                                     : (0xfffffffcU 
                                        & vlSelf->testbench__DOT__top__DOT__riscv__DOT__csr_mtvec)))),32);
}

void Vriscv___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_cleanup\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
