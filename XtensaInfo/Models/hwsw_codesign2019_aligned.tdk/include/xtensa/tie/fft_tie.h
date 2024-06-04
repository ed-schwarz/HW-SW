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

extern unsigned _TIE_fft_tie_FFT_SIMPLE_MUL(unsigned a, unsigned b);
extern void _TIE_fft_tie_FFT_COM_MUL(unsigned a_r /*inout*/, unsigned b_r, unsigned a_i /*inout*/, unsigned b_i);
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
extern void _TIE_fft_tie_FFT_2_f_LD(void);
extern void _TIE_fft_tie_FFT_2_FFT(void);
#define FFT_SIMPLE_MUL _TIE_fft_tie_FFT_SIMPLE_MUL
#define FFT_COM_MUL _TIE_fft_tie_FFT_COM_MUL
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
#define FFT_2_f_LD _TIE_fft_tie_FFT_2_f_LD
#define FFT_2_FFT _TIE_fft_tie_FFT_2_FFT

#ifndef RUR
#define RUR(NUM) RUR##NUM()
#endif

#ifndef WUR
#define WUR(VAL, NUM) WUR##NUM(VAL)
#endif

#endif /* __XCC__ */

#endif /* __XTENSA__ */

#endif /* !_XTENSA_fft_tie_HEADER */
