#ifndef FFT_H
#define FFT_H
#include <xtensa/tie/fft_tie.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include 		<string.h>
#include		<stdbool.h>
/* FIX_MPY() - fixed-point multiplication macro.
 This macro is a statement, not an expression (uses asm).
 BEWARE: make sure _DX is not clobbered by evaluating (A) or DEST.
 args are all of type fixed.
 Scaling ensures that 32767*32767 = 32767. */
#define FIX_MPY(DEST,A,B)       DEST = ((long)(A) * (long)(B))>>15

#define N_WAVE          1024    /* dimension of Sinewave[] */
#define LOG2_N_WAVE     10      /* log2(N_WAVE) */

#ifndef fixed
#define fixed short
#endif

extern fixed Sinewave[N_WAVE];

typedef struct cplx {
	fixed R;fixed I;
} cplx;

//function prototypes
fixed fix_mpy(fixed a, fixed b);
int fix_fft(fixed *fr, fixed *fi, int m, int inverse);
int fft_mul(fixed fr[], fixed fi[], int m, int inverse);
int fft_FFT2(fixed fr[], fixed fi[], int m, int inverse);
void GenerateCoefficients(cplx* __restrict out_coeff, const uint32_t N,
		bool inverse);
static inline uint32_t BitReverse(uint32_t n);
uint32_t Prepare_Data(cplx* __restrict const x, const uint32_t N,
		const uint32_t lg2_N, const uint32_t a_start);
uint32_t Between_Shuffle(cplx* __restrict const x, const uint32_t N,
		const uint32_t lg2_N, const uint32_t length);
int fft_FFT8(cplx*__restrict f, int m, int inverse);

#endif	//FFT_H
