#ifndef FFT_H
#define FFT_H
#include <stdint.h>
#include <stdbool.h>
#include <math.h>


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


typedef struct cplx
{
    fixed R;
    fixed I;
} cplx;

void
SWOpt_GenerateCoefficients(cplx* __restrict out_coeff, const uint32_t N, bool inverse);

uint32_t
SWOpt_ButterflyIterativeFft(cplx* __restrict x,
                            uint32_t N,
                            uint32_t lg2_N,
                            bool inverse,
                            const cplx* __restrict coeffs);

void
HWOpt_GenerateCoefficients(cplx* __restrict out_coeff, const uint32_t N, bool inverse);

uint32_t
HWOpt_ButterflyIterativeFft(cplx* __restrict const x,
                            const uint32_t N,
                            const uint32_t lg2_N,
                            const bool inverse,
                            const cplx* __restrict coeffs);

#endif	//FFT_H
