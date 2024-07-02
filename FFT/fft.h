#ifndef FFT_H
#define FFT_H
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <xtensa/tie/fft_tie.h>

/* FIX_MPY() - fixed-point multiplication macro.
 This macro is a statement, not an expression (uses asm).
 BEWARE: make sure _DX is not clobbered by evaluating (A) or DEST.
 args are all of type fixed.
 Scaling ensures that 32767*32767 = 32767. */
#define FIX_MPY(DEST,A,B)       DEST = ((long)(A) * (long)(B))>>15

#define N_WAVE          1024    /* dimension of Sinewave[] */
#define LOG2_N_WAVE     10      /* log2(N_WAVE) */

typedef int16_t fixed;
extern fixed Sinewave[N_WAVE];

//function prototypes
fixed fix_mpy(fixed a, fixed b);
int fix_fft(fixed *fr, fixed *fi, int m, int inverse);

typedef struct cplx {
	fixed R;
	fixed I;
} cplx;

int fft_adv_dif(cplx*__restrict f, int m, int inverse,
		const cplx* __restrict coeffs);

int fft_adv_dit(cplx*__restrict f, int m, int inverse,
		const cplx* __restrict coeffs);

#endif	//FFT_H
