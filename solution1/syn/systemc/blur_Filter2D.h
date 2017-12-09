// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _blur_Filter2D_HH_
#define _blur_Filter2D_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "blur_mux_3to1_sel2_8_1.h"
#include "blur_Filter2D_k_buf_0_val_3.h"

namespace ap_rtl {

struct blur_Filter2D : public sc_module {
    // Port declarations 28
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<12> > p_src_rows_V_dout;
    sc_in< sc_logic > p_src_rows_V_empty_n;
    sc_out< sc_logic > p_src_rows_V_read;
    sc_in< sc_lv<12> > p_src_cols_V_dout;
    sc_in< sc_logic > p_src_cols_V_empty_n;
    sc_out< sc_logic > p_src_cols_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_V_dout;
    sc_in< sc_logic > p_src_data_stream_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_V_read;
    sc_out< sc_lv<8> > p_dst_data_stream_V_din;
    sc_in< sc_logic > p_dst_data_stream_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_V_write;
    sc_in< sc_lv<8> > p_kernel_val_0_0_read;
    sc_in< sc_lv<8> > p_kernel_val_0_1_read;
    sc_in< sc_lv<8> > p_kernel_val_0_2_read;
    sc_in< sc_lv<8> > p_kernel_val_1_0_read;
    sc_in< sc_lv<8> > p_kernel_val_1_1_read;
    sc_in< sc_lv<8> > p_kernel_val_1_2_read;
    sc_in< sc_lv<8> > p_kernel_val_2_0_read;
    sc_in< sc_lv<8> > p_kernel_val_2_1_read;
    sc_in< sc_lv<8> > p_kernel_val_2_2_read;


    // Module declarations
    blur_Filter2D(sc_module_name name);
    SC_HAS_PROCESS(blur_Filter2D);

    ~blur_Filter2D();

    sc_trace_file* mVcdFile;

    blur_Filter2D_k_buf_0_val_3* k_buf_0_val_3_U;
    blur_Filter2D_k_buf_0_val_3* k_buf_0_val_4_U;
    blur_Filter2D_k_buf_0_val_3* k_buf_0_val_5_U;
    blur_mux_3to1_sel2_8_1<1,1,8,8,8,2,8>* blur_mux_3to1_sel2_8_1_U20;
    blur_mux_3to1_sel2_8_1<1,1,8,8,8,2,8>* blur_mux_3to1_sel2_8_1_U21;
    blur_mux_3to1_sel2_8_1<1,1,8,8,8,2,8>* blur_mux_3to1_sel2_8_1_U22;
    blur_mux_3to1_sel2_8_1<1,1,8,8,8,2,8>* blur_mux_3to1_sel2_8_1_U23;
    blur_mux_3to1_sel2_8_1<1,1,8,8,8,2,8>* blur_mux_3to1_sel2_8_1_U24;
    blur_mux_3to1_sel2_8_1<1,1,8,8,8,2,8>* blur_mux_3to1_sel2_8_1_U25;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_25;
    sc_signal< sc_lv<12> > p_027_0_i_i_reg_342;
    sc_signal< bool > ap_sig_bdd_68;
    sc_signal< sc_lv<12> > p_src_rows_V_read_reg_1548;
    sc_signal< sc_lv<13> > rows_cast_i_fu_353_p1;
    sc_signal< sc_lv<13> > rows_cast_i_reg_1559;
    sc_signal< sc_lv<12> > p_src_cols_V_read_reg_1570;
    sc_signal< sc_lv<13> > cols_cast_i_fu_357_p1;
    sc_signal< sc_lv<13> > cols_cast_i_reg_1577;
    sc_signal< sc_lv<1> > tmp_4_i_fu_361_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_102;
    sc_signal< sc_lv<13> > heightloop_fu_367_p2;
    sc_signal< sc_lv<13> > heightloop_reg_1666;
    sc_signal< sc_lv<1> > tmp_3_i_phi_fu_324_p4;
    sc_signal< sc_lv<13> > widthloop_fu_372_p2;
    sc_signal< sc_lv<13> > widthloop_reg_1671;
    sc_signal< sc_lv<2> > p_neg392_i_cast_i_fu_380_p2;
    sc_signal< sc_lv<2> > p_neg392_i_cast_i_reg_1676;
    sc_signal< sc_lv<13> > p_anchor_2_1_cast_i_fu_394_p1;
    sc_signal< sc_lv<13> > p_anchor_2_1_cast_i_reg_1683;
    sc_signal< sc_lv<1> > tmp_129_i_fu_398_p2;
    sc_signal< sc_lv<1> > tmp_129_i_reg_1688;
    sc_signal< sc_lv<14> > tmp_140_i_fu_414_p2;
    sc_signal< sc_lv<14> > tmp_140_i_reg_1695;
    sc_signal< sc_lv<1> > tmp_22_i_fu_420_p2;
    sc_signal< sc_lv<1> > tmp_22_i_reg_1702;
    sc_signal< sc_lv<14> > tmp_26_i_fu_436_p2;
    sc_signal< sc_lv<14> > tmp_26_i_reg_1707;
    sc_signal< sc_lv<2> > tmp_5_fu_442_p2;
    sc_signal< sc_lv<2> > tmp_5_reg_1712;
    sc_signal< sc_lv<16> > OP2_V_0_i_fu_448_p1;
    sc_signal< sc_lv<16> > OP2_V_0_i_reg_1717;
    sc_signal< sc_lv<16> > OP2_V_0_1_i_fu_451_p1;
    sc_signal< sc_lv<16> > OP2_V_0_1_i_reg_1722;
    sc_signal< sc_lv<16> > OP2_V_0_2_i_fu_454_p1;
    sc_signal< sc_lv<16> > OP2_V_0_2_i_reg_1727;
    sc_signal< sc_lv<16> > OP2_V_1_i_fu_457_p1;
    sc_signal< sc_lv<16> > OP2_V_1_i_reg_1732;
    sc_signal< sc_lv<16> > OP2_V_1_1_i_fu_460_p1;
    sc_signal< sc_lv<16> > OP2_V_1_1_i_reg_1737;
    sc_signal< sc_lv<16> > OP2_V_1_2_i_fu_463_p1;
    sc_signal< sc_lv<16> > OP2_V_1_2_i_reg_1742;
    sc_signal< sc_lv<16> > OP2_V_2_i_fu_466_p1;
    sc_signal< sc_lv<16> > OP2_V_2_i_reg_1747;
    sc_signal< sc_lv<16> > OP2_V_2_1_i_fu_469_p1;
    sc_signal< sc_lv<16> > OP2_V_2_1_i_reg_1752;
    sc_signal< sc_lv<16> > OP2_V_2_2_i_fu_472_p1;
    sc_signal< sc_lv<16> > OP2_V_2_2_i_reg_1757;
    sc_signal< sc_lv<12> > i_V_fu_484_p2;
    sc_signal< sc_lv<12> > i_V_reg_1765;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_151;
    sc_signal< sc_lv<1> > tmp_14_i_fu_490_p2;
    sc_signal< sc_lv<1> > tmp_14_i_reg_1770;
    sc_signal< sc_lv<1> > tmp_12_i_fu_479_p2;
    sc_signal< sc_lv<1> > ult_fu_495_p2;
    sc_signal< sc_lv<1> > ult_reg_1774;
    sc_signal< sc_lv<1> > icmp_fu_510_p2;
    sc_signal< sc_lv<1> > icmp_reg_1779;
    sc_signal< sc_lv<1> > tmp_98_i_fu_516_p2;
    sc_signal< sc_lv<1> > tmp_98_i_reg_1784;
    sc_signal< sc_lv<1> > tmp_98_1_i_fu_521_p2;
    sc_signal< sc_lv<1> > tmp_98_1_i_reg_1788;
    sc_signal< sc_lv<1> > tmp_98_2_i_fu_527_p2;
    sc_signal< sc_lv<1> > tmp_98_2_i_reg_1792;
    sc_signal< sc_lv<1> > tmp_120_i_fu_533_p2;
    sc_signal< sc_lv<1> > tmp_120_i_reg_1796;
    sc_signal< sc_lv<2> > tmp_2_fu_768_p3;
    sc_signal< sc_lv<2> > tmp_2_reg_1803;
    sc_signal< sc_lv<2> > tmp_6_fu_811_p3;
    sc_signal< sc_lv<2> > tmp_6_reg_1808;
    sc_signal< sc_lv<2> > tmp_14_fu_854_p3;
    sc_signal< sc_lv<2> > tmp_14_reg_1813;
    sc_signal< sc_lv<1> > rev_fu_862_p2;
    sc_signal< sc_lv<1> > rev_reg_1818;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_184;
    sc_signal< sc_lv<2> > row_assign_8_i_fu_867_p2;
    sc_signal< sc_lv<2> > row_assign_8_i_reg_1823;
    sc_signal< sc_lv<2> > row_assign_8_1_t_i_fu_871_p2;
    sc_signal< sc_lv<2> > row_assign_8_1_t_i_reg_1828;
    sc_signal< sc_lv<2> > row_assign_8_2_t_i_fu_875_p2;
    sc_signal< sc_lv<2> > row_assign_8_2_t_i_reg_1833;
    sc_signal< sc_lv<1> > tmp_16_i_fu_883_p2;
    sc_signal< sc_lv<1> > tmp_16_i_reg_1838;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_4;
    sc_signal< bool > ap_sig_bdd_202;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_lv<1> > ap_reg_ppstg_tmp_16_i_reg_1838_pp0_it1;
    sc_signal< sc_lv<1> > or_cond_i_i_i_reg_1847;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond_i_i_i_reg_1847_pp0_it1;
    sc_signal< bool > ap_sig_bdd_227;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it2;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it3;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it4;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it5;
    sc_signal< sc_lv<1> > or_cond_i_i_reg_1879;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond_i_i_reg_1879_pp0_it5;
    sc_signal< bool > ap_sig_bdd_243;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it6;
    sc_signal< sc_lv<1> > ap_reg_ppstg_tmp_16_i_reg_1838_pp0_it2;
    sc_signal< sc_lv<12> > j_V_fu_888_p2;
    sc_signal< sc_lv<1> > or_cond_i_i_i_fu_935_p2;
    sc_signal< sc_lv<1> > brmerge_fu_941_p2;
    sc_signal< sc_lv<1> > brmerge_reg_1851;
    sc_signal< sc_lv<13> > ImagLoc_x_cast_i_mux_fu_946_p3;
    sc_signal< sc_lv<13> > ImagLoc_x_cast_i_mux_reg_1857;
    sc_signal< sc_lv<13> > p_p2_i_i_i_fu_968_p3;
    sc_signal< sc_lv<13> > p_p2_i_i_i_reg_1862;
    sc_signal< sc_lv<1> > tmp_24_i_fu_976_p2;
    sc_signal< sc_lv<1> > tmp_24_i_reg_1867;
    sc_signal< sc_lv<1> > brmerge_i_fu_981_p2;
    sc_signal< sc_lv<1> > brmerge_i_reg_1872;
    sc_signal< sc_lv<1> > ap_reg_ppstg_brmerge_i_reg_1872_pp0_it1;
    sc_signal< sc_lv<1> > or_cond_i_i_fu_986_p2;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond_i_i_reg_1879_pp0_it1;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond_i_i_reg_1879_pp0_it2;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond_i_i_reg_1879_pp0_it3;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond_i_i_reg_1879_pp0_it4;
    sc_signal< sc_lv<11> > k_buf_0_val_3_addr_reg_1883;
    sc_signal< sc_lv<2> > col_assign_1_t_i_fu_1042_p2;
    sc_signal< sc_lv<2> > col_assign_1_t_i_reg_1889;
    sc_signal< sc_lv<11> > k_buf_0_val_4_addr_reg_1896;
    sc_signal< sc_lv<11> > k_buf_0_val_5_addr_reg_1902;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_0_0_fu_1166_p3;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_0_0_reg_1908;
    sc_signal< sc_lv<8> > ap_reg_ppstg_src_kernel_win_0_val_0_0_reg_1908_pp0_it3;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_1_0_fu_1184_p3;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_1_0_reg_1913;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_2_0_fu_1202_p3;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_2_0_reg_1919;
    sc_signal< sc_lv<17> > tmp12_fu_1241_p2;
    sc_signal< sc_lv<17> > tmp12_reg_1925;
    sc_signal< sc_lv<17> > p_Val2_7_0_1_i_fu_1298_p2;
    sc_signal< sc_lv<17> > p_Val2_7_0_1_i_reg_1930;
    sc_signal< sc_lv<17> > tmp9_fu_1329_p2;
    sc_signal< sc_lv<17> > tmp9_reg_1935;
    sc_signal< sc_lv<16> > p_Val2_4_1_1_i_fu_1339_p2;
    sc_signal< sc_lv<16> > p_Val2_4_1_1_i_reg_1940;
    sc_signal< sc_lv<18> > tmp11_fu_1359_p2;
    sc_signal< sc_lv<18> > tmp11_reg_1945;
    sc_signal< sc_lv<1> > isneg_reg_1950;
    sc_signal< sc_lv<8> > p_Val2_2_fu_1453_p1;
    sc_signal< sc_lv<8> > p_Val2_2_reg_1956;
    sc_signal< sc_lv<12> > p_Result_3_i_i_i_reg_1961;
    sc_signal< sc_lv<8> > p_Val2_s_fu_1496_p3;
    sc_signal< sc_lv<8> > p_Val2_s_reg_1966;
    sc_signal< sc_lv<11> > k_buf_0_val_3_address0;
    sc_signal< sc_logic > k_buf_0_val_3_ce0;
    sc_signal< sc_lv<8> > k_buf_0_val_3_q0;
    sc_signal< sc_lv<11> > k_buf_0_val_3_address1;
    sc_signal< sc_logic > k_buf_0_val_3_ce1;
    sc_signal< sc_logic > k_buf_0_val_3_we1;
    sc_signal< sc_lv<8> > k_buf_0_val_3_d1;
    sc_signal< sc_lv<11> > k_buf_0_val_4_address0;
    sc_signal< sc_logic > k_buf_0_val_4_ce0;
    sc_signal< sc_lv<8> > k_buf_0_val_4_q0;
    sc_signal< sc_lv<11> > k_buf_0_val_4_address1;
    sc_signal< sc_logic > k_buf_0_val_4_ce1;
    sc_signal< sc_logic > k_buf_0_val_4_we1;
    sc_signal< sc_lv<8> > k_buf_0_val_4_d1;
    sc_signal< sc_lv<11> > k_buf_0_val_5_address0;
    sc_signal< sc_logic > k_buf_0_val_5_ce0;
    sc_signal< sc_lv<8> > k_buf_0_val_5_q0;
    sc_signal< sc_lv<11> > k_buf_0_val_5_address1;
    sc_signal< sc_logic > k_buf_0_val_5_ce1;
    sc_signal< sc_logic > k_buf_0_val_5_we1;
    sc_signal< sc_lv<8> > k_buf_0_val_5_d1;
    sc_signal< sc_lv<1> > tmp_3_i_reg_320;
    sc_signal< sc_lv<12> > p_014_0_i_i_reg_331;
    sc_signal< sc_logic > ap_sig_cseq_ST_st12_fsm_5;
    sc_signal< bool > ap_sig_bdd_382;
    sc_signal< sc_lv<64> > tmp_63_i_fu_1035_p1;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_0_1_fu_146;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_0_1_1_fu_150;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_1_1_fu_154;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_1_1_1_fu_158;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_2_1_fu_162;
    sc_signal< sc_lv<8> > src_kernel_win_0_val_2_1_1_fu_166;
    sc_signal< sc_lv<8> > right_border_buf_0_val_0_1_fu_170;
    sc_signal< sc_lv<8> > col_buf_0_val_0_0_fu_1076_p3;
    sc_signal< sc_lv<8> > right_border_buf_0_val_0_1_1_fu_174;
    sc_signal< sc_lv<8> > right_border_buf_0_val_2_1_fu_178;
    sc_signal< sc_lv<8> > right_border_buf_0_val_1_1_fu_182;
    sc_signal< sc_lv<8> > col_buf_0_val_1_0_fu_1094_p3;
    sc_signal< sc_lv<8> > right_border_buf_0_val_1_1_1_fu_186;
    sc_signal< sc_lv<8> > right_border_buf_0_val_2_1_1_fu_190;
    sc_signal< sc_lv<8> > col_buf_0_val_2_0_fu_1112_p3;
    sc_signal< sc_lv<2> > tmp_fu_377_p1;
    sc_signal< sc_lv<1> > not_tmp_76_i_fu_389_p2;
    sc_signal< sc_lv<13> > tmp_139_i_fu_403_p3;
    sc_signal< sc_lv<14> > tmp_139_cast_i_fu_410_p1;
    sc_signal< sc_lv<13> > tmp_25_i_fu_425_p3;
    sc_signal< sc_lv<14> > tmp_25_cast_i_fu_432_p1;
    sc_signal< sc_lv<2> > tmp_11_fu_386_p1;
    sc_signal< sc_lv<13> > tmp_11_cast_i_fu_475_p1;
    sc_signal< sc_lv<11> > tmp_12_fu_500_p4;
    sc_signal< sc_lv<13> > tmp_123_i_fu_538_p2;
    sc_signal< sc_lv<1> > tmp_16_fu_544_p3;
    sc_signal< sc_lv<1> > tmp_125_i_fu_558_p2;
    sc_signal< sc_lv<1> > rev1_fu_552_p2;
    sc_signal< sc_lv<1> > tmp_18_fu_569_p3;
    sc_signal< sc_lv<13> > p_assign_7_i_fu_577_p2;
    sc_signal< sc_lv<13> > p_p2_i413_i_i_fu_583_p3;
    sc_signal< sc_lv<13> > p_assign_6_1_i_fu_603_p2;
    sc_signal< sc_lv<1> > tmp_27_fu_609_p3;
    sc_signal< sc_lv<1> > tmp_125_1_i_fu_623_p2;
    sc_signal< sc_lv<1> > rev2_fu_617_p2;
    sc_signal< sc_lv<1> > tmp_28_fu_634_p3;
    sc_signal< sc_lv<13> > p_assign_7_1_i_fu_642_p2;
    sc_signal< sc_lv<13> > p_p2_i413_i_1_i_fu_648_p3;
    sc_signal< sc_lv<13> > p_assign_6_2_i_fu_668_p2;
    sc_signal< sc_lv<1> > tmp_32_fu_674_p3;
    sc_signal< sc_lv<1> > tmp_125_2_i_fu_688_p2;
    sc_signal< sc_lv<1> > rev3_fu_682_p2;
    sc_signal< sc_lv<1> > tmp_33_fu_699_p3;
    sc_signal< sc_lv<13> > p_assign_7_2_i_fu_707_p2;
    sc_signal< sc_lv<13> > p_p2_i413_i_2_i_fu_713_p3;
    sc_signal< sc_lv<1> > or_cond_i412_i_i_fu_563_p2;
    sc_signal< sc_lv<2> > tmp_36_fu_738_p1;
    sc_signal< sc_lv<2> > tmp_21_fu_596_p1;
    sc_signal< sc_lv<2> > tmp_23_fu_599_p1;
    sc_signal< sc_lv<1> > tmp_137_i_fu_591_p2;
    sc_signal< sc_lv<2> > tmp_37_fu_750_p1;
    sc_signal< sc_lv<2> > tmp_38_fu_754_p2;
    sc_signal< sc_lv<1> > brmerge1_fu_733_p2;
    sc_signal< sc_lv<2> > tmp_1_fu_742_p3;
    sc_signal< sc_lv<2> > tmp_s_fu_760_p3;
    sc_signal< sc_lv<1> > or_cond_i412_i_1_i_fu_628_p2;
    sc_signal< sc_lv<2> > tmp_39_fu_781_p1;
    sc_signal< sc_lv<2> > tmp_30_fu_661_p1;
    sc_signal< sc_lv<2> > tmp_31_fu_664_p1;
    sc_signal< sc_lv<1> > tmp_137_1_i_fu_656_p2;
    sc_signal< sc_lv<2> > tmp_40_fu_793_p1;
    sc_signal< sc_lv<2> > tmp_41_fu_797_p2;
    sc_signal< sc_lv<1> > brmerge2_fu_776_p2;
    sc_signal< sc_lv<2> > tmp_3_fu_785_p3;
    sc_signal< sc_lv<2> > tmp_4_fu_803_p3;
    sc_signal< sc_lv<1> > or_cond_i412_i_2_i_fu_693_p2;
    sc_signal< sc_lv<2> > tmp_42_fu_824_p1;
    sc_signal< sc_lv<2> > tmp_34_fu_726_p1;
    sc_signal< sc_lv<2> > tmp_35_fu_729_p1;
    sc_signal< sc_lv<1> > tmp_137_2_i_fu_721_p2;
    sc_signal< sc_lv<2> > tmp_43_fu_836_p1;
    sc_signal< sc_lv<2> > tmp_44_fu_840_p2;
    sc_signal< sc_lv<1> > brmerge3_fu_819_p2;
    sc_signal< sc_lv<2> > tmp_7_fu_828_p3;
    sc_signal< sc_lv<2> > tmp_13_fu_846_p3;
    sc_signal< sc_lv<13> > tmp_15_cast_i_fu_879_p1;
    sc_signal< sc_lv<11> > tmp_45_fu_894_p4;
    sc_signal< sc_lv<13> > ImagLoc_x_fu_910_p2;
    sc_signal< sc_lv<1> > tmp_46_fu_916_p3;
    sc_signal< sc_lv<1> > tmp_21_i_fu_930_p2;
    sc_signal< sc_lv<1> > rev4_fu_924_p2;
    sc_signal< sc_lv<1> > tmp_47_fu_954_p3;
    sc_signal< sc_lv<13> > p_assign_1_fu_962_p2;
    sc_signal< sc_lv<1> > icmp1_fu_904_p2;
    sc_signal< sc_lv<14> > p_p2_i_i_cast_i_fu_994_p1;
    sc_signal< sc_lv<14> > ImagLoc_x_cast_i_mux_cast_fu_991_p1;
    sc_signal< sc_lv<14> > p_assign_2_fu_997_p2;
    sc_signal< sc_lv<1> > sel_tmp7_fu_1009_p2;
    sc_signal< sc_lv<1> > sel_tmp8_fu_1014_p2;
    sc_signal< sc_lv<14> > sel_tmp_fu_1002_p3;
    sc_signal< sc_lv<14> > x_fu_1019_p3;
    sc_signal< sc_lv<32> > col_assign_cast_i_fu_1027_p1;
    sc_signal< sc_lv<2> > tmp_48_fu_1031_p1;
    sc_signal< sc_lv<8> > tmp_8_fu_1065_p5;
    sc_signal< sc_lv<8> > tmp_9_fu_1083_p5;
    sc_signal< sc_lv<8> > tmp_10_fu_1101_p5;
    sc_signal< sc_lv<8> > tmp_15_fu_1155_p5;
    sc_signal< sc_lv<8> > tmp_17_fu_1173_p5;
    sc_signal< sc_lv<8> > tmp_19_fu_1191_p5;
    sc_signal< sc_lv<8> > p_Val2_4_2_i_fu_1219_p0;
    sc_signal< sc_lv<8> > p_Val2_4_2_i_fu_1219_p1;
    sc_signal< sc_lv<16> > p_Val2_4_2_i_fu_1219_p2;
    sc_signal< sc_lv<8> > p_Val2_4_2_1_i_fu_1232_p0;
    sc_signal< sc_lv<8> > p_Val2_4_2_1_i_fu_1232_p1;
    sc_signal< sc_lv<16> > p_Val2_4_2_1_i_fu_1232_p2;
    sc_signal< sc_lv<17> > tmp_145_2_1_cast_i_cast_fu_1237_p1;
    sc_signal< sc_lv<17> > tmp_145_2_cast_i_cast_fu_1224_p1;
    sc_signal< sc_lv<8> > p_Val2_4_0_i_fu_1276_p0;
    sc_signal< sc_lv<8> > p_Val2_4_0_i_fu_1276_p1;
    sc_signal< sc_lv<16> > p_Val2_4_0_i_fu_1276_p2;
    sc_signal< sc_lv<8> > p_Val2_4_0_1_i_fu_1289_p0;
    sc_signal< sc_lv<8> > p_Val2_4_0_1_i_fu_1289_p1;
    sc_signal< sc_lv<16> > p_Val2_4_0_1_i_fu_1289_p2;
    sc_signal< sc_lv<17> > tmp_145_0_1_cast_i_fu_1294_p1;
    sc_signal< sc_lv<17> > tmp_145_0_cast_i_fu_1281_p1;
    sc_signal< sc_lv<8> > p_Val2_4_0_2_i_fu_1307_p0;
    sc_signal< sc_lv<8> > p_Val2_4_0_2_i_fu_1307_p1;
    sc_signal< sc_lv<16> > p_Val2_4_0_2_i_fu_1307_p2;
    sc_signal< sc_lv<8> > p_Val2_4_1_i_fu_1320_p0;
    sc_signal< sc_lv<8> > p_Val2_4_1_i_fu_1320_p1;
    sc_signal< sc_lv<16> > p_Val2_4_1_i_fu_1320_p2;
    sc_signal< sc_lv<17> > tmp_145_1_cast_i_cast_fu_1325_p1;
    sc_signal< sc_lv<17> > tmp_145_0_2_cast_i_cast_fu_1312_p1;
    sc_signal< sc_lv<8> > p_Val2_4_1_1_i_fu_1339_p0;
    sc_signal< sc_lv<8> > p_Val2_4_1_1_i_fu_1339_p1;
    sc_signal< sc_lv<8> > p_Val2_4_1_2_i_fu_1347_p0;
    sc_signal< sc_lv<8> > p_Val2_4_1_2_i_fu_1347_p1;
    sc_signal< sc_lv<16> > p_Val2_4_1_2_i_fu_1347_p2;
    sc_signal< sc_lv<18> > tmp_145_1_2_cast_i_cast_fu_1352_p1;
    sc_signal< sc_lv<18> > tmp12_cast_fu_1356_p1;
    sc_signal< sc_lv<18> > p_Val2_7_0_1_cast_i_fu_1389_p1;
    sc_signal< sc_lv<18> > tmp9_cast_fu_1392_p1;
    sc_signal< sc_lv<18> > p_Val2_7_1_i_fu_1395_p2;
    sc_signal< sc_lv<19> > tmp_145_1_1_cast_i_fu_1405_p1;
    sc_signal< sc_lv<19> > p_Val2_7_1_cast_i_fu_1401_p1;
    sc_signal< sc_lv<19> > tmp10_fu_1408_p2;
    sc_signal< sc_lv<19> > tmp11_cast_fu_1414_p1;
    sc_signal< sc_lv<19> > p_Val2_7_2_1_i_fu_1417_p2;
    sc_signal< sc_lv<8> > p_Val2_4_2_2_i_fu_1430_p0;
    sc_signal< sc_lv<8> > p_Val2_4_2_2_i_fu_1430_p1;
    sc_signal< sc_lv<16> > p_Val2_4_2_2_i_fu_1430_p2;
    sc_signal< sc_lv<20> > tmp_145_2_2_i_fu_1435_p1;
    sc_signal< sc_lv<20> > p_Val2_7_2_1_cast_i_fu_1423_p1;
    sc_signal< sc_lv<20> > p_Val2_1_fu_1439_p2;
    sc_signal< sc_lv<1> > not_i_i_i_i_fu_1472_p2;
    sc_signal< sc_lv<1> > tmp_2_i_i_i_fu_1467_p2;
    sc_signal< sc_lv<1> > overflow_fu_1477_p2;
    sc_signal< sc_lv<1> > tmp_i_i_i_fu_1491_p2;
    sc_signal< sc_lv<8> > p_mux_i_i_cast_i_fu_1483_p3;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_lv<16> > p_Val2_4_0_1_i_fu_1289_p00;
    sc_signal< sc_lv<16> > p_Val2_4_0_2_i_fu_1307_p00;
    sc_signal< sc_lv<16> > p_Val2_4_0_i_fu_1276_p00;
    sc_signal< sc_lv<16> > p_Val2_4_1_1_i_fu_1339_p00;
    sc_signal< sc_lv<16> > p_Val2_4_1_2_i_fu_1347_p00;
    sc_signal< sc_lv<16> > p_Val2_4_1_i_fu_1320_p00;
    sc_signal< sc_lv<16> > p_Val2_4_2_1_i_fu_1232_p00;
    sc_signal< sc_lv<16> > p_Val2_4_2_2_i_fu_1430_p00;
    sc_signal< sc_lv<16> > p_Val2_4_2_i_fu_1219_p00;
    sc_signal< bool > ap_sig_bdd_1235;
    sc_signal< bool > ap_sig_bdd_1237;
    sc_signal< bool > ap_sig_bdd_1234;
    sc_signal< bool > ap_sig_bdd_1240;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_st1_fsm_0;
    static const sc_lv<6> ap_ST_st2_fsm_1;
    static const sc_lv<6> ap_ST_st3_fsm_2;
    static const sc_lv<6> ap_ST_st4_fsm_3;
    static const sc_lv<6> ap_ST_pp0_stg0_fsm_4;
    static const sc_lv<6> ap_ST_st12_fsm_5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<13> ap_const_lv13_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<14> ap_const_lv14_2;
    static const sc_lv<14> ap_const_lv14_3FFE;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<13> ap_const_lv13_1FFF;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<13> ap_const_lv13_1FFE;
    static const sc_lv<13> ap_const_lv13_1FFD;
    static const sc_lv<13> ap_const_lv13_3;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<8> ap_const_lv8_FF;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ImagLoc_x_cast_i_mux_cast_fu_991_p1();
    void thread_ImagLoc_x_cast_i_mux_fu_946_p3();
    void thread_ImagLoc_x_fu_910_p2();
    void thread_OP2_V_0_1_i_fu_451_p1();
    void thread_OP2_V_0_2_i_fu_454_p1();
    void thread_OP2_V_0_i_fu_448_p1();
    void thread_OP2_V_1_1_i_fu_460_p1();
    void thread_OP2_V_1_2_i_fu_463_p1();
    void thread_OP2_V_1_i_fu_457_p1();
    void thread_OP2_V_2_1_i_fu_469_p1();
    void thread_OP2_V_2_2_i_fu_472_p1();
    void thread_OP2_V_2_i_fu_466_p1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_102();
    void thread_ap_sig_bdd_1234();
    void thread_ap_sig_bdd_1235();
    void thread_ap_sig_bdd_1237();
    void thread_ap_sig_bdd_1240();
    void thread_ap_sig_bdd_151();
    void thread_ap_sig_bdd_184();
    void thread_ap_sig_bdd_202();
    void thread_ap_sig_bdd_227();
    void thread_ap_sig_bdd_243();
    void thread_ap_sig_bdd_25();
    void thread_ap_sig_bdd_382();
    void thread_ap_sig_bdd_68();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_4();
    void thread_ap_sig_cseq_ST_st12_fsm_5();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_brmerge1_fu_733_p2();
    void thread_brmerge2_fu_776_p2();
    void thread_brmerge3_fu_819_p2();
    void thread_brmerge_fu_941_p2();
    void thread_brmerge_i_fu_981_p2();
    void thread_col_assign_1_t_i_fu_1042_p2();
    void thread_col_assign_cast_i_fu_1027_p1();
    void thread_col_buf_0_val_0_0_fu_1076_p3();
    void thread_col_buf_0_val_1_0_fu_1094_p3();
    void thread_col_buf_0_val_2_0_fu_1112_p3();
    void thread_cols_cast_i_fu_357_p1();
    void thread_heightloop_fu_367_p2();
    void thread_i_V_fu_484_p2();
    void thread_icmp1_fu_904_p2();
    void thread_icmp_fu_510_p2();
    void thread_j_V_fu_888_p2();
    void thread_k_buf_0_val_3_address0();
    void thread_k_buf_0_val_3_address1();
    void thread_k_buf_0_val_3_ce0();
    void thread_k_buf_0_val_3_ce1();
    void thread_k_buf_0_val_3_d1();
    void thread_k_buf_0_val_3_we1();
    void thread_k_buf_0_val_4_address0();
    void thread_k_buf_0_val_4_address1();
    void thread_k_buf_0_val_4_ce0();
    void thread_k_buf_0_val_4_ce1();
    void thread_k_buf_0_val_4_d1();
    void thread_k_buf_0_val_4_we1();
    void thread_k_buf_0_val_5_address0();
    void thread_k_buf_0_val_5_address1();
    void thread_k_buf_0_val_5_ce0();
    void thread_k_buf_0_val_5_ce1();
    void thread_k_buf_0_val_5_d1();
    void thread_k_buf_0_val_5_we1();
    void thread_not_i_i_i_i_fu_1472_p2();
    void thread_not_tmp_76_i_fu_389_p2();
    void thread_or_cond_i412_i_1_i_fu_628_p2();
    void thread_or_cond_i412_i_2_i_fu_693_p2();
    void thread_or_cond_i412_i_i_fu_563_p2();
    void thread_or_cond_i_i_fu_986_p2();
    void thread_or_cond_i_i_i_fu_935_p2();
    void thread_overflow_fu_1477_p2();
    void thread_p_Val2_1_fu_1439_p2();
    void thread_p_Val2_2_fu_1453_p1();
    void thread_p_Val2_4_0_1_i_fu_1289_p0();
    void thread_p_Val2_4_0_1_i_fu_1289_p00();
    void thread_p_Val2_4_0_1_i_fu_1289_p1();
    void thread_p_Val2_4_0_1_i_fu_1289_p2();
    void thread_p_Val2_4_0_2_i_fu_1307_p0();
    void thread_p_Val2_4_0_2_i_fu_1307_p00();
    void thread_p_Val2_4_0_2_i_fu_1307_p1();
    void thread_p_Val2_4_0_2_i_fu_1307_p2();
    void thread_p_Val2_4_0_i_fu_1276_p0();
    void thread_p_Val2_4_0_i_fu_1276_p00();
    void thread_p_Val2_4_0_i_fu_1276_p1();
    void thread_p_Val2_4_0_i_fu_1276_p2();
    void thread_p_Val2_4_1_1_i_fu_1339_p0();
    void thread_p_Val2_4_1_1_i_fu_1339_p00();
    void thread_p_Val2_4_1_1_i_fu_1339_p1();
    void thread_p_Val2_4_1_1_i_fu_1339_p2();
    void thread_p_Val2_4_1_2_i_fu_1347_p0();
    void thread_p_Val2_4_1_2_i_fu_1347_p00();
    void thread_p_Val2_4_1_2_i_fu_1347_p1();
    void thread_p_Val2_4_1_2_i_fu_1347_p2();
    void thread_p_Val2_4_1_i_fu_1320_p0();
    void thread_p_Val2_4_1_i_fu_1320_p00();
    void thread_p_Val2_4_1_i_fu_1320_p1();
    void thread_p_Val2_4_1_i_fu_1320_p2();
    void thread_p_Val2_4_2_1_i_fu_1232_p0();
    void thread_p_Val2_4_2_1_i_fu_1232_p00();
    void thread_p_Val2_4_2_1_i_fu_1232_p1();
    void thread_p_Val2_4_2_1_i_fu_1232_p2();
    void thread_p_Val2_4_2_2_i_fu_1430_p0();
    void thread_p_Val2_4_2_2_i_fu_1430_p00();
    void thread_p_Val2_4_2_2_i_fu_1430_p1();
    void thread_p_Val2_4_2_2_i_fu_1430_p2();
    void thread_p_Val2_4_2_i_fu_1219_p0();
    void thread_p_Val2_4_2_i_fu_1219_p00();
    void thread_p_Val2_4_2_i_fu_1219_p1();
    void thread_p_Val2_4_2_i_fu_1219_p2();
    void thread_p_Val2_7_0_1_cast_i_fu_1389_p1();
    void thread_p_Val2_7_0_1_i_fu_1298_p2();
    void thread_p_Val2_7_1_cast_i_fu_1401_p1();
    void thread_p_Val2_7_1_i_fu_1395_p2();
    void thread_p_Val2_7_2_1_cast_i_fu_1423_p1();
    void thread_p_Val2_7_2_1_i_fu_1417_p2();
    void thread_p_Val2_s_fu_1496_p3();
    void thread_p_anchor_2_1_cast_i_fu_394_p1();
    void thread_p_assign_1_fu_962_p2();
    void thread_p_assign_2_fu_997_p2();
    void thread_p_assign_6_1_i_fu_603_p2();
    void thread_p_assign_6_2_i_fu_668_p2();
    void thread_p_assign_7_1_i_fu_642_p2();
    void thread_p_assign_7_2_i_fu_707_p2();
    void thread_p_assign_7_i_fu_577_p2();
    void thread_p_dst_data_stream_V_din();
    void thread_p_dst_data_stream_V_write();
    void thread_p_mux_i_i_cast_i_fu_1483_p3();
    void thread_p_neg392_i_cast_i_fu_380_p2();
    void thread_p_p2_i413_i_1_i_fu_648_p3();
    void thread_p_p2_i413_i_2_i_fu_713_p3();
    void thread_p_p2_i413_i_i_fu_583_p3();
    void thread_p_p2_i_i_cast_i_fu_994_p1();
    void thread_p_p2_i_i_i_fu_968_p3();
    void thread_p_src_cols_V_read();
    void thread_p_src_data_stream_V_read();
    void thread_p_src_rows_V_read();
    void thread_rev1_fu_552_p2();
    void thread_rev2_fu_617_p2();
    void thread_rev3_fu_682_p2();
    void thread_rev4_fu_924_p2();
    void thread_rev_fu_862_p2();
    void thread_row_assign_8_1_t_i_fu_871_p2();
    void thread_row_assign_8_2_t_i_fu_875_p2();
    void thread_row_assign_8_i_fu_867_p2();
    void thread_rows_cast_i_fu_353_p1();
    void thread_sel_tmp7_fu_1009_p2();
    void thread_sel_tmp8_fu_1014_p2();
    void thread_sel_tmp_fu_1002_p3();
    void thread_src_kernel_win_0_val_0_0_fu_1166_p3();
    void thread_src_kernel_win_0_val_1_0_fu_1184_p3();
    void thread_src_kernel_win_0_val_2_0_fu_1202_p3();
    void thread_tmp10_fu_1408_p2();
    void thread_tmp11_cast_fu_1414_p1();
    void thread_tmp11_fu_1359_p2();
    void thread_tmp12_cast_fu_1356_p1();
    void thread_tmp12_fu_1241_p2();
    void thread_tmp9_cast_fu_1392_p1();
    void thread_tmp9_fu_1329_p2();
    void thread_tmp_11_cast_i_fu_475_p1();
    void thread_tmp_11_fu_386_p1();
    void thread_tmp_120_i_fu_533_p2();
    void thread_tmp_123_i_fu_538_p2();
    void thread_tmp_125_1_i_fu_623_p2();
    void thread_tmp_125_2_i_fu_688_p2();
    void thread_tmp_125_i_fu_558_p2();
    void thread_tmp_129_i_fu_398_p2();
    void thread_tmp_12_fu_500_p4();
    void thread_tmp_12_i_fu_479_p2();
    void thread_tmp_137_1_i_fu_656_p2();
    void thread_tmp_137_2_i_fu_721_p2();
    void thread_tmp_137_i_fu_591_p2();
    void thread_tmp_139_cast_i_fu_410_p1();
    void thread_tmp_139_i_fu_403_p3();
    void thread_tmp_13_fu_846_p3();
    void thread_tmp_140_i_fu_414_p2();
    void thread_tmp_145_0_1_cast_i_fu_1294_p1();
    void thread_tmp_145_0_2_cast_i_cast_fu_1312_p1();
    void thread_tmp_145_0_cast_i_fu_1281_p1();
    void thread_tmp_145_1_1_cast_i_fu_1405_p1();
    void thread_tmp_145_1_2_cast_i_cast_fu_1352_p1();
    void thread_tmp_145_1_cast_i_cast_fu_1325_p1();
    void thread_tmp_145_2_1_cast_i_cast_fu_1237_p1();
    void thread_tmp_145_2_2_i_fu_1435_p1();
    void thread_tmp_145_2_cast_i_cast_fu_1224_p1();
    void thread_tmp_14_fu_854_p3();
    void thread_tmp_14_i_fu_490_p2();
    void thread_tmp_15_cast_i_fu_879_p1();
    void thread_tmp_16_fu_544_p3();
    void thread_tmp_16_i_fu_883_p2();
    void thread_tmp_18_fu_569_p3();
    void thread_tmp_1_fu_742_p3();
    void thread_tmp_21_fu_596_p1();
    void thread_tmp_21_i_fu_930_p2();
    void thread_tmp_22_i_fu_420_p2();
    void thread_tmp_23_fu_599_p1();
    void thread_tmp_24_i_fu_976_p2();
    void thread_tmp_25_cast_i_fu_432_p1();
    void thread_tmp_25_i_fu_425_p3();
    void thread_tmp_26_i_fu_436_p2();
    void thread_tmp_27_fu_609_p3();
    void thread_tmp_28_fu_634_p3();
    void thread_tmp_2_fu_768_p3();
    void thread_tmp_2_i_i_i_fu_1467_p2();
    void thread_tmp_30_fu_661_p1();
    void thread_tmp_31_fu_664_p1();
    void thread_tmp_32_fu_674_p3();
    void thread_tmp_33_fu_699_p3();
    void thread_tmp_34_fu_726_p1();
    void thread_tmp_35_fu_729_p1();
    void thread_tmp_36_fu_738_p1();
    void thread_tmp_37_fu_750_p1();
    void thread_tmp_38_fu_754_p2();
    void thread_tmp_39_fu_781_p1();
    void thread_tmp_3_fu_785_p3();
    void thread_tmp_3_i_phi_fu_324_p4();
    void thread_tmp_40_fu_793_p1();
    void thread_tmp_41_fu_797_p2();
    void thread_tmp_42_fu_824_p1();
    void thread_tmp_43_fu_836_p1();
    void thread_tmp_44_fu_840_p2();
    void thread_tmp_45_fu_894_p4();
    void thread_tmp_46_fu_916_p3();
    void thread_tmp_47_fu_954_p3();
    void thread_tmp_48_fu_1031_p1();
    void thread_tmp_4_fu_803_p3();
    void thread_tmp_4_i_fu_361_p2();
    void thread_tmp_5_fu_442_p2();
    void thread_tmp_63_i_fu_1035_p1();
    void thread_tmp_6_fu_811_p3();
    void thread_tmp_7_fu_828_p3();
    void thread_tmp_98_1_i_fu_521_p2();
    void thread_tmp_98_2_i_fu_527_p2();
    void thread_tmp_98_i_fu_516_p2();
    void thread_tmp_fu_377_p1();
    void thread_tmp_i_i_i_fu_1491_p2();
    void thread_tmp_s_fu_760_p3();
    void thread_ult_fu_495_p2();
    void thread_widthloop_fu_372_p2();
    void thread_x_fu_1019_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
