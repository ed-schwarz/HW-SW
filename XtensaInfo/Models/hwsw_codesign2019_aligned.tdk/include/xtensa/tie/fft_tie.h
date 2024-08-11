/* Definitions for the fft_tie TIE package */

/*
 * Copyright (c) 2004-2010 by Tensilica Inc.  ALL RIGHTS RESERVED.
 * These coded instructions, statements, and computer programs are the
 * copyrighted works and confidential proprietary information of Tensilica Inc.
 * They may not be modified, copied, reproduced, distributed, or disclosed to
 * third parties in any manner, medium, or form, in whole or in part, without
 * the prior written consent of Tensilica Inc.
 */

/* Do not modify. This is automatically generated.*/

#ifndef _XTENSA_fft_tie_HEADER
#define _XTENSA_fft_tie_HEADER

#ifdef __XTENSA__
#ifdef __XCC__

#include <xtensa/tie/xt_core.h>

/*
 * The following prototypes describe intrinsic functions
 * corresponding to TIE instructions.  Some TIE instructions
 * may produce multiple results (designated as "out" operands
 * in the iclass section) or may have operands used as both
 * inputs and outputs (designated as "inout").  However, the C
 * and C++ languages do not provide syntax that can express
 * the in/out/inout constraints of TIE intrinsics.
 * Nevertheless, the compiler understands these constraints
 * and will check that the intrinsic functions are used
 * correctly.  To improve the readability of these prototypes,
 * the "out" and "inout" parameters are marked accordingly
 * with comments.
 */

extern unsigned _TIE_fft_tie_RUR_w_r(void);
extern void _TIE_fft_tie_WUR_w_r(unsigned v);
extern unsigned _TIE_fft_tie_RUR_w_i(void);
extern void _TIE_fft_tie_WUR_w_i(unsigned v);
extern unsigned _TIE_fft_tie_RUR_a_r(void);
extern void _TIE_fft_tie_WUR_a_r(unsigned v);
extern unsigned _TIE_fft_tie_RUR_a_i(void);
extern void _TIE_fft_tie_WUR_a_i(unsigned v);
extern unsigned _TIE_fft_tie_RUR_b_r(void);
extern void _TIE_fft_tie_WUR_b_r(unsigned v);
extern unsigned _TIE_fft_tie_RUR_b_i(void);
extern void _TIE_fft_tie_WUR_b_i(unsigned v);
extern unsigned _TIE_fft_tie_RUR_u_r(void);
extern void _TIE_fft_tie_WUR_u_r(unsigned v);
extern unsigned _TIE_fft_tie_RUR_u_i(void);
extern void _TIE_fft_tie_WUR_u_i(unsigned v);
extern unsigned _TIE_fft_tie_RUR_v_r(void);
extern void _TIE_fft_tie_WUR_v_r(unsigned v);
extern unsigned _TIE_fft_tie_RUR_v_i(void);
extern void _TIE_fft_tie_WUR_v_i(unsigned v);
extern unsigned _TIE_fft_tie_RUR_q_r(void);
extern void _TIE_fft_tie_WUR_q_r(unsigned v);
extern unsigned _TIE_fft_tie_RUR_q_i(void);
extern void _TIE_fft_tie_WUR_q_i(unsigned v);
extern unsigned _TIE_fft_tie_RUR_wv_0(void);
extern void _TIE_fft_tie_WUR_wv_0(unsigned v);
extern unsigned _TIE_fft_tie_RUR_wv_1(void);
extern void _TIE_fft_tie_WUR_wv_1(unsigned v);
extern unsigned _TIE_fft_tie_RUR_wv_2(void);
extern void _TIE_fft_tie_WUR_wv_2(unsigned v);
extern unsigned _TIE_fft_tie_RUR_wv_3(void);
extern void _TIE_fft_tie_WUR_wv_3(unsigned v);
extern unsigned _TIE_fft_tie_RUR_av_0(void);
extern void _TIE_fft_tie_WUR_av_0(unsigned v);
extern unsigned _TIE_fft_tie_RUR_av_1(void);
extern void _TIE_fft_tie_WUR_av_1(unsigned v);
extern unsigned _TIE_fft_tie_RUR_av_2(void);
extern void _TIE_fft_tie_WUR_av_2(unsigned v);
extern unsigned _TIE_fft_tie_RUR_av_3(void);
extern void _TIE_fft_tie_WUR_av_3(unsigned v);
extern unsigned _TIE_fft_tie_RUR_bv_0(void);
extern void _TIE_fft_tie_WUR_bv_0(unsigned v);
extern unsigned _TIE_fft_tie_RUR_bv_1(void);
extern void _TIE_fft_tie_WUR_bv_1(unsigned v);
extern unsigned _TIE_fft_tie_RUR_bv_2(void);
extern void _TIE_fft_tie_WUR_bv_2(unsigned v);
extern unsigned _TIE_fft_tie_RUR_bv_3(void);
extern void _TIE_fft_tie_WUR_bv_3(unsigned v);
extern unsigned _TIE_fft_tie_RUR_done(void);
extern void _TIE_fft_tie_WUR_done(unsigned v);
extern unsigned _TIE_fft_tie_RUR_shift(void);
extern void _TIE_fft_tie_WUR_shift(unsigned v);
extern unsigned _TIE_fft_tie_RUR_even_ix(void);
extern void _TIE_fft_tie_WUR_even_ix(unsigned v);
extern unsigned _TIE_fft_tie_RUR_odd_ix(void);
extern void _TIE_fft_tie_WUR_odd_ix(unsigned v);
extern unsigned _TIE_fft_tie_RUR_even_const(void);
extern void _TIE_fft_tie_WUR_even_const(unsigned v);
extern unsigned _TIE_fft_tie_RUR_w_ix(void);
extern void _TIE_fft_tie_WUR_w_ix(unsigned v);
extern unsigned _TIE_fft_tie_RUR_w_inc(void);
extern void _TIE_fft_tie_WUR_w_inc(unsigned v);
extern unsigned _TIE_fft_tie_RUR_m_ix(void);
extern void _TIE_fft_tie_WUR_m_ix(unsigned v);
extern unsigned _TIE_fft_tie_RUR_l(void);
extern void _TIE_fft_tie_WUR_l(unsigned v);
extern unsigned _TIE_fft_tie_RUR_n(void);
extern void _TIE_fft_tie_WUR_n(unsigned v);
extern unsigned _TIE_fft_tie_RUR_n_2(void);
extern void _TIE_fft_tie_WUR_n_2(unsigned v);
extern unsigned _TIE_fft_tie_RUR_lg2_n(void);
extern void _TIE_fft_tie_WUR_lg2_n(unsigned v);
extern unsigned _TIE_fft_tie_RUR_step(void);
extern void _TIE_fft_tie_WUR_step(unsigned v);
extern unsigned _TIE_fft_tie_RUR_ptr_data(void);
extern void _TIE_fft_tie_WUR_ptr_data(unsigned v);
extern unsigned _TIE_fft_tie_RUR_ptr_w(void);
extern void _TIE_fft_tie_WUR_ptr_w(unsigned v);
extern unsigned _TIE_fft_tie_RUR_debug_reg(void);
extern void _TIE_fft_tie_WUR_debug_reg(unsigned v);
extern unsigned _TIE_fft_tie_RUR_time_decimation(void);
extern void _TIE_fft_tie_WUR_time_decimation(unsigned v);
extern unsigned _TIE_fft_tie_RUR_qv_r_0(void);
extern void _TIE_fft_tie_WUR_qv_r_0(unsigned v);
extern unsigned _TIE_fft_tie_RUR_qv_r_1(void);
extern void _TIE_fft_tie_WUR_qv_r_1(unsigned v);
extern unsigned _TIE_fft_tie_RUR_qv_i_0(void);
extern void _TIE_fft_tie_WUR_qv_i_0(unsigned v);
extern unsigned _TIE_fft_tie_RUR_qv_i_1(void);
extern void _TIE_fft_tie_WUR_qv_i_1(unsigned v);
extern void _TIE_fft_tie_FFT_COM_MUL(unsigned a_r /*inout*/, unsigned b_r, unsigned a_i /*inout*/, unsigned b_i);
extern void _TIE_fft_tie_FFT_2_f_LD(void);
extern void _TIE_fft_tie_FFT_2_FFT(void);
extern void _TIE_fft_tie_FFT_8_FFT_DIT(void);
extern void _TIE_fft_tie_FFT_8_FFT_DIF(void);
extern void _TIE_fft_tie_FFT_BIT_REVERSE(unsigned n /*inout*/);
extern void _TIE_fft_tie_FFT_INIT(void);
extern void _TIE_fft_tie_FFT_LOAD_EVEN(void);
extern void _TIE_fft_tie_FFT_LOAD_ODD(void);
extern void _TIE_fft_tie_FFT_LOAD_W(void);
extern void _TIE_fft_tie_FFT_STORE_EVEN(void);
extern void _TIE_fft_tie_FFT_STORE_ODD(void);
extern unsigned _TIE_fft_tie_FFT_UPDATE(void);
#define RUR_w_r _TIE_fft_tie_RUR_w_r
#define Rw_r _TIE_fft_tie_RUR_w_r
#define RUR0 _TIE_fft_tie_RUR_w_r
#define WUR_w_r _TIE_fft_tie_WUR_w_r
#define Ww_r _TIE_fft_tie_WUR_w_r
#define WUR0 _TIE_fft_tie_WUR_w_r
#define RUR_w_i _TIE_fft_tie_RUR_w_i
#define Rw_i _TIE_fft_tie_RUR_w_i
#define RUR1 _TIE_fft_tie_RUR_w_i
#define WUR_w_i _TIE_fft_tie_WUR_w_i
#define Ww_i _TIE_fft_tie_WUR_w_i
#define WUR1 _TIE_fft_tie_WUR_w_i
#define RUR_a_r _TIE_fft_tie_RUR_a_r
#define Ra_r _TIE_fft_tie_RUR_a_r
#define RUR2 _TIE_fft_tie_RUR_a_r
#define WUR_a_r _TIE_fft_tie_WUR_a_r
#define Wa_r _TIE_fft_tie_WUR_a_r
#define WUR2 _TIE_fft_tie_WUR_a_r
#define RUR_a_i _TIE_fft_tie_RUR_a_i
#define Ra_i _TIE_fft_tie_RUR_a_i
#define RUR3 _TIE_fft_tie_RUR_a_i
#define WUR_a_i _TIE_fft_tie_WUR_a_i
#define Wa_i _TIE_fft_tie_WUR_a_i
#define WUR3 _TIE_fft_tie_WUR_a_i
#define RUR_b_r _TIE_fft_tie_RUR_b_r
#define Rb_r _TIE_fft_tie_RUR_b_r
#define RUR4 _TIE_fft_tie_RUR_b_r
#define WUR_b_r _TIE_fft_tie_WUR_b_r
#define Wb_r _TIE_fft_tie_WUR_b_r
#define WUR4 _TIE_fft_tie_WUR_b_r
#define RUR_b_i _TIE_fft_tie_RUR_b_i
#define Rb_i _TIE_fft_tie_RUR_b_i
#define RUR5 _TIE_fft_tie_RUR_b_i
#define WUR_b_i _TIE_fft_tie_WUR_b_i
#define Wb_i _TIE_fft_tie_WUR_b_i
#define WUR5 _TIE_fft_tie_WUR_b_i
#define RUR_u_r _TIE_fft_tie_RUR_u_r
#define Ru_r _TIE_fft_tie_RUR_u_r
#define RUR6 _TIE_fft_tie_RUR_u_r
#define WUR_u_r _TIE_fft_tie_WUR_u_r
#define Wu_r _TIE_fft_tie_WUR_u_r
#define WUR6 _TIE_fft_tie_WUR_u_r
#define RUR_u_i _TIE_fft_tie_RUR_u_i
#define Ru_i _TIE_fft_tie_RUR_u_i
#define RUR7 _TIE_fft_tie_RUR_u_i
#define WUR_u_i _TIE_fft_tie_WUR_u_i
#define Wu_i _TIE_fft_tie_WUR_u_i
#define WUR7 _TIE_fft_tie_WUR_u_i
#define RUR_v_r _TIE_fft_tie_RUR_v_r
#define Rv_r _TIE_fft_tie_RUR_v_r
#define RUR8 _TIE_fft_tie_RUR_v_r
#define WUR_v_r _TIE_fft_tie_WUR_v_r
#define Wv_r _TIE_fft_tie_WUR_v_r
#define WUR8 _TIE_fft_tie_WUR_v_r
#define RUR_v_i _TIE_fft_tie_RUR_v_i
#define Rv_i _TIE_fft_tie_RUR_v_i
#define RUR9 _TIE_fft_tie_RUR_v_i
#define WUR_v_i _TIE_fft_tie_WUR_v_i
#define Wv_i _TIE_fft_tie_WUR_v_i
#define WUR9 _TIE_fft_tie_WUR_v_i
#define RUR_q_r _TIE_fft_tie_RUR_q_r
#define Rq_r _TIE_fft_tie_RUR_q_r
#define RUR10 _TIE_fft_tie_RUR_q_r
#define WUR_q_r _TIE_fft_tie_WUR_q_r
#define Wq_r _TIE_fft_tie_WUR_q_r
#define WUR10 _TIE_fft_tie_WUR_q_r
#define RUR_q_i _TIE_fft_tie_RUR_q_i
#define Rq_i _TIE_fft_tie_RUR_q_i
#define RUR11 _TIE_fft_tie_RUR_q_i
#define WUR_q_i _TIE_fft_tie_WUR_q_i
#define Wq_i _TIE_fft_tie_WUR_q_i
#define WUR11 _TIE_fft_tie_WUR_q_i
#define RUR_wv_0 _TIE_fft_tie_RUR_wv_0
#define Rwv_0 _TIE_fft_tie_RUR_wv_0
#define RUR12 _TIE_fft_tie_RUR_wv_0
#define WUR_wv_0 _TIE_fft_tie_WUR_wv_0
#define Wwv_0 _TIE_fft_tie_WUR_wv_0
#define WUR12 _TIE_fft_tie_WUR_wv_0
#define RUR_wv_1 _TIE_fft_tie_RUR_wv_1
#define Rwv_1 _TIE_fft_tie_RUR_wv_1
#define RUR13 _TIE_fft_tie_RUR_wv_1
#define WUR_wv_1 _TIE_fft_tie_WUR_wv_1
#define Wwv_1 _TIE_fft_tie_WUR_wv_1
#define WUR13 _TIE_fft_tie_WUR_wv_1
#define RUR_wv_2 _TIE_fft_tie_RUR_wv_2
#define Rwv_2 _TIE_fft_tie_RUR_wv_2
#define RUR14 _TIE_fft_tie_RUR_wv_2
#define WUR_wv_2 _TIE_fft_tie_WUR_wv_2
#define Wwv_2 _TIE_fft_tie_WUR_wv_2
#define WUR14 _TIE_fft_tie_WUR_wv_2
#define RUR_wv_3 _TIE_fft_tie_RUR_wv_3
#define Rwv_3 _TIE_fft_tie_RUR_wv_3
#define RUR15 _TIE_fft_tie_RUR_wv_3
#define WUR_wv_3 _TIE_fft_tie_WUR_wv_3
#define Wwv_3 _TIE_fft_tie_WUR_wv_3
#define WUR15 _TIE_fft_tie_WUR_wv_3
#define RUR_av_0 _TIE_fft_tie_RUR_av_0
#define Rav_0 _TIE_fft_tie_RUR_av_0
#define RUR16 _TIE_fft_tie_RUR_av_0
#define WUR_av_0 _TIE_fft_tie_WUR_av_0
#define Wav_0 _TIE_fft_tie_WUR_av_0
#define WUR16 _TIE_fft_tie_WUR_av_0
#define RUR_av_1 _TIE_fft_tie_RUR_av_1
#define Rav_1 _TIE_fft_tie_RUR_av_1
#define RUR17 _TIE_fft_tie_RUR_av_1
#define WUR_av_1 _TIE_fft_tie_WUR_av_1
#define Wav_1 _TIE_fft_tie_WUR_av_1
#define WUR17 _TIE_fft_tie_WUR_av_1
#define RUR_av_2 _TIE_fft_tie_RUR_av_2
#define Rav_2 _TIE_fft_tie_RUR_av_2
#define RUR18 _TIE_fft_tie_RUR_av_2
#define WUR_av_2 _TIE_fft_tie_WUR_av_2
#define Wav_2 _TIE_fft_tie_WUR_av_2
#define WUR18 _TIE_fft_tie_WUR_av_2
#define RUR_av_3 _TIE_fft_tie_RUR_av_3
#define Rav_3 _TIE_fft_tie_RUR_av_3
#define RUR19 _TIE_fft_tie_RUR_av_3
#define WUR_av_3 _TIE_fft_tie_WUR_av_3
#define Wav_3 _TIE_fft_tie_WUR_av_3
#define WUR19 _TIE_fft_tie_WUR_av_3
#define RUR_bv_0 _TIE_fft_tie_RUR_bv_0
#define Rbv_0 _TIE_fft_tie_RUR_bv_0
#define RUR20 _TIE_fft_tie_RUR_bv_0
#define WUR_bv_0 _TIE_fft_tie_WUR_bv_0
#define Wbv_0 _TIE_fft_tie_WUR_bv_0
#define WUR20 _TIE_fft_tie_WUR_bv_0
#define RUR_bv_1 _TIE_fft_tie_RUR_bv_1
#define Rbv_1 _TIE_fft_tie_RUR_bv_1
#define RUR21 _TIE_fft_tie_RUR_bv_1
#define WUR_bv_1 _TIE_fft_tie_WUR_bv_1
#define Wbv_1 _TIE_fft_tie_WUR_bv_1
#define WUR21 _TIE_fft_tie_WUR_bv_1
#define RUR_bv_2 _TIE_fft_tie_RUR_bv_2
#define Rbv_2 _TIE_fft_tie_RUR_bv_2
#define RUR22 _TIE_fft_tie_RUR_bv_2
#define WUR_bv_2 _TIE_fft_tie_WUR_bv_2
#define Wbv_2 _TIE_fft_tie_WUR_bv_2
#define WUR22 _TIE_fft_tie_WUR_bv_2
#define RUR_bv_3 _TIE_fft_tie_RUR_bv_3
#define Rbv_3 _TIE_fft_tie_RUR_bv_3
#define RUR23 _TIE_fft_tie_RUR_bv_3
#define WUR_bv_3 _TIE_fft_tie_WUR_bv_3
#define Wbv_3 _TIE_fft_tie_WUR_bv_3
#define WUR23 _TIE_fft_tie_WUR_bv_3
#define RUR_done _TIE_fft_tie_RUR_done
#define Rdone _TIE_fft_tie_RUR_done
#define RUR24 _TIE_fft_tie_RUR_done
#define WUR_done _TIE_fft_tie_WUR_done
#define Wdone _TIE_fft_tie_WUR_done
#define WUR24 _TIE_fft_tie_WUR_done
#define RUR_shift _TIE_fft_tie_RUR_shift
#define Rshift _TIE_fft_tie_RUR_shift
#define RUR25 _TIE_fft_tie_RUR_shift
#define WUR_shift _TIE_fft_tie_WUR_shift
#define Wshift _TIE_fft_tie_WUR_shift
#define WUR25 _TIE_fft_tie_WUR_shift
#define RUR_even_ix _TIE_fft_tie_RUR_even_ix
#define Reven_ix _TIE_fft_tie_RUR_even_ix
#define RUR26 _TIE_fft_tie_RUR_even_ix
#define WUR_even_ix _TIE_fft_tie_WUR_even_ix
#define Weven_ix _TIE_fft_tie_WUR_even_ix
#define WUR26 _TIE_fft_tie_WUR_even_ix
#define RUR_odd_ix _TIE_fft_tie_RUR_odd_ix
#define Rodd_ix _TIE_fft_tie_RUR_odd_ix
#define RUR27 _TIE_fft_tie_RUR_odd_ix
#define WUR_odd_ix _TIE_fft_tie_WUR_odd_ix
#define Wodd_ix _TIE_fft_tie_WUR_odd_ix
#define WUR27 _TIE_fft_tie_WUR_odd_ix
#define RUR_even_const _TIE_fft_tie_RUR_even_const
#define Reven_const _TIE_fft_tie_RUR_even_const
#define RUR28 _TIE_fft_tie_RUR_even_const
#define WUR_even_const _TIE_fft_tie_WUR_even_const
#define Weven_const _TIE_fft_tie_WUR_even_const
#define WUR28 _TIE_fft_tie_WUR_even_const
#define RUR_w_ix _TIE_fft_tie_RUR_w_ix
#define Rw_ix _TIE_fft_tie_RUR_w_ix
#define RUR29 _TIE_fft_tie_RUR_w_ix
#define WUR_w_ix _TIE_fft_tie_WUR_w_ix
#define Ww_ix _TIE_fft_tie_WUR_w_ix
#define WUR29 _TIE_fft_tie_WUR_w_ix
#define RUR_w_inc _TIE_fft_tie_RUR_w_inc
#define Rw_inc _TIE_fft_tie_RUR_w_inc
#define RUR30 _TIE_fft_tie_RUR_w_inc
#define WUR_w_inc _TIE_fft_tie_WUR_w_inc
#define Ww_inc _TIE_fft_tie_WUR_w_inc
#define WUR30 _TIE_fft_tie_WUR_w_inc
#define RUR_m_ix _TIE_fft_tie_RUR_m_ix
#define Rm_ix _TIE_fft_tie_RUR_m_ix
#define RUR31 _TIE_fft_tie_RUR_m_ix
#define WUR_m_ix _TIE_fft_tie_WUR_m_ix
#define Wm_ix _TIE_fft_tie_WUR_m_ix
#define WUR31 _TIE_fft_tie_WUR_m_ix
#define RUR_l _TIE_fft_tie_RUR_l
#define Rl _TIE_fft_tie_RUR_l
#define RUR32 _TIE_fft_tie_RUR_l
#define WUR_l _TIE_fft_tie_WUR_l
#define Wl _TIE_fft_tie_WUR_l
#define WUR32 _TIE_fft_tie_WUR_l
#define RUR_n _TIE_fft_tie_RUR_n
#define Rn _TIE_fft_tie_RUR_n
#define RUR33 _TIE_fft_tie_RUR_n
#define WUR_n _TIE_fft_tie_WUR_n
#define Wn _TIE_fft_tie_WUR_n
#define WUR33 _TIE_fft_tie_WUR_n
#define RUR_n_2 _TIE_fft_tie_RUR_n_2
#define Rn_2 _TIE_fft_tie_RUR_n_2
#define RUR34 _TIE_fft_tie_RUR_n_2
#define WUR_n_2 _TIE_fft_tie_WUR_n_2
#define Wn_2 _TIE_fft_tie_WUR_n_2
#define WUR34 _TIE_fft_tie_WUR_n_2
#define RUR_lg2_n _TIE_fft_tie_RUR_lg2_n
#define Rlg2_n _TIE_fft_tie_RUR_lg2_n
#define RUR35 _TIE_fft_tie_RUR_lg2_n
#define WUR_lg2_n _TIE_fft_tie_WUR_lg2_n
#define Wlg2_n _TIE_fft_tie_WUR_lg2_n
#define WUR35 _TIE_fft_tie_WUR_lg2_n
#define RUR_step _TIE_fft_tie_RUR_step
#define Rstep _TIE_fft_tie_RUR_step
#define RUR36 _TIE_fft_tie_RUR_step
#define WUR_step _TIE_fft_tie_WUR_step
#define Wstep _TIE_fft_tie_WUR_step
#define WUR36 _TIE_fft_tie_WUR_step
#define RUR_ptr_data _TIE_fft_tie_RUR_ptr_data
#define Rptr_data _TIE_fft_tie_RUR_ptr_data
#define RUR37 _TIE_fft_tie_RUR_ptr_data
#define WUR_ptr_data _TIE_fft_tie_WUR_ptr_data
#define Wptr_data _TIE_fft_tie_WUR_ptr_data
#define WUR37 _TIE_fft_tie_WUR_ptr_data
#define RUR_ptr_w _TIE_fft_tie_RUR_ptr_w
#define Rptr_w _TIE_fft_tie_RUR_ptr_w
#define RUR38 _TIE_fft_tie_RUR_ptr_w
#define WUR_ptr_w _TIE_fft_tie_WUR_ptr_w
#define Wptr_w _TIE_fft_tie_WUR_ptr_w
#define WUR38 _TIE_fft_tie_WUR_ptr_w
#define RUR_debug_reg _TIE_fft_tie_RUR_debug_reg
#define Rdebug_reg _TIE_fft_tie_RUR_debug_reg
#define RUR39 _TIE_fft_tie_RUR_debug_reg
#define WUR_debug_reg _TIE_fft_tie_WUR_debug_reg
#define Wdebug_reg _TIE_fft_tie_WUR_debug_reg
#define WUR39 _TIE_fft_tie_WUR_debug_reg
#define RUR_time_decimation _TIE_fft_tie_RUR_time_decimation
#define Rtime_decimation _TIE_fft_tie_RUR_time_decimation
#define RUR40 _TIE_fft_tie_RUR_time_decimation
#define WUR_time_decimation _TIE_fft_tie_WUR_time_decimation
#define Wtime_decimation _TIE_fft_tie_WUR_time_decimation
#define WUR40 _TIE_fft_tie_WUR_time_decimation
#define RUR_qv_r_0 _TIE_fft_tie_RUR_qv_r_0
#define Rqv_r_0 _TIE_fft_tie_RUR_qv_r_0
#define RUR41 _TIE_fft_tie_RUR_qv_r_0
#define WUR_qv_r_0 _TIE_fft_tie_WUR_qv_r_0
#define Wqv_r_0 _TIE_fft_tie_WUR_qv_r_0
#define WUR41 _TIE_fft_tie_WUR_qv_r_0
#define RUR_qv_r_1 _TIE_fft_tie_RUR_qv_r_1
#define Rqv_r_1 _TIE_fft_tie_RUR_qv_r_1
#define RUR42 _TIE_fft_tie_RUR_qv_r_1
#define WUR_qv_r_1 _TIE_fft_tie_WUR_qv_r_1
#define Wqv_r_1 _TIE_fft_tie_WUR_qv_r_1
#define WUR42 _TIE_fft_tie_WUR_qv_r_1
#define RUR_qv_i_0 _TIE_fft_tie_RUR_qv_i_0
#define Rqv_i_0 _TIE_fft_tie_RUR_qv_i_0
#define RUR43 _TIE_fft_tie_RUR_qv_i_0
#define WUR_qv_i_0 _TIE_fft_tie_WUR_qv_i_0
#define Wqv_i_0 _TIE_fft_tie_WUR_qv_i_0
#define WUR43 _TIE_fft_tie_WUR_qv_i_0
#define RUR_qv_i_1 _TIE_fft_tie_RUR_qv_i_1
#define Rqv_i_1 _TIE_fft_tie_RUR_qv_i_1
#define RUR44 _TIE_fft_tie_RUR_qv_i_1
#define WUR_qv_i_1 _TIE_fft_tie_WUR_qv_i_1
#define Wqv_i_1 _TIE_fft_tie_WUR_qv_i_1
#define WUR44 _TIE_fft_tie_WUR_qv_i_1
#define FFT_COM_MUL _TIE_fft_tie_FFT_COM_MUL
#define FFT_2_f_LD _TIE_fft_tie_FFT_2_f_LD
#define FFT_2_FFT _TIE_fft_tie_FFT_2_FFT
#define FFT_8_FFT_DIT _TIE_fft_tie_FFT_8_FFT_DIT
#define FFT_8_FFT_DIF _TIE_fft_tie_FFT_8_FFT_DIF
#define FFT_BIT_REVERSE _TIE_fft_tie_FFT_BIT_REVERSE
#define FFT_INIT _TIE_fft_tie_FFT_INIT
#define FFT_LOAD_EVEN _TIE_fft_tie_FFT_LOAD_EVEN
#define FFT_LOAD_ODD _TIE_fft_tie_FFT_LOAD_ODD
#define FFT_LOAD_W _TIE_fft_tie_FFT_LOAD_W
#define FFT_STORE_EVEN _TIE_fft_tie_FFT_STORE_EVEN
#define FFT_STORE_ODD _TIE_fft_tie_FFT_STORE_ODD
#define FFT_UPDATE _TIE_fft_tie_FFT_UPDATE

#ifndef RUR
#define RUR(NUM) RUR##NUM()
#endif

#ifndef WUR
#define WUR(VAL, NUM) WUR##NUM(VAL)
#endif

#endif /* __XCC__ */

#endif /* __XTENSA__ */

#endif /* !_XTENSA_fft_tie_HEADER */
