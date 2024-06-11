/*  fft.c - Fixed-point Fast Fourier Transform  */
/*
 fix_fft()       perform FFT or inverse FFT
 fix_mpy()       perform fixed-point multiplication.
 Sinewave[1024]  sinewave normalized to 32767 (= 1.0).

 All data are fixed-point short integers, in which
 -32768 to +32768 represent -1.0 to +1.0. Integer arithmetic
 is used for speed, instead of the more natural floating-point.

 For the forward FFT (time -> freq), fixed scaling is
 performed to prevent arithmetic overflow, and to map a 0dB
 sine/cosine wave (i.e. amplitude = 32767) to two -6dB freq
 coefficients; the one in the lower half is reported as 0dB.

 For the inverse FFT (freq -> time), fixed scaling cannot be
 done, as two 0dB coefficients would sum to a peak amplitude of
 64K, overflowing the 32k range of the fixed-point integers.
 Thus, the fix_fft() routine performs variable scaling, and
 returns a value which is the number of bits LEFT by which
 the output must be shifted to get the actual amplitude
 (i.e. if fix_fft() returns 3, each value of fr[] and fi[]
 must be multiplied by 8 (2^3) for proper scaling.
 Clearly, this cannot be done within the fixed-point short
 integers. In practice, if the result is to be used as a
 filter, the scale_shift can usually be ignored, as the
 result will be approximately correctly normalized as is.


 Source Code taken by http://www.jjj.de/crs4: integer_fft.c
 Last Modified by Sebastian Haas at Oct. 2014.
 */

#include "fft.h"

/*
 *	fix_fft() - perform fast Fourier transform.
 *
 *  if n>0 FFT is done, if n<0 inverse FFT is done
 *	fr[n],fi[n] are real,imaginary arrays, INPUT AND RESULT.
 *	size of data = 2^m
 *  set inverse to 0=dft, 1=idft
 */
int fix_coeffs(fixed fr[], fixed fi[], int m, int inverse,
		const cplx* __restrict coeffs) {
	int mr, nn, i, j, l, k, istep, n, scale, shift;

	fixed qr, qi; //even input
	fixed tr, ti; //odd input
	fixed wr, wi; //twiddle factor

	//number of input data
	n = 1 << m;

	int c = 0; //counter for twiddle factor

	if (n > N_WAVE)
		return -1;

	mr = 0;
	nn = n - 1;
	scale = 0;

	/* decimation in time - re-order data */
	for (m = 1; m <= nn; ++m) {
		l = n;
		do {
			l >>= 1;
		} while (mr + l > nn);
		mr = (mr & (l - 1)) + l;

		if (mr <= m)
			continue;
		tr = fr[m];
		fr[m] = fr[mr];
		fr[mr] = tr;

		ti = fi[m];
		fi[m] = fi[mr];
		fi[mr] = ti;
	}

	l = 1;
	k = LOG2_N_WAVE - 1;
	while (l < n) {
		if (inverse) {
			/* variable scaling, depending upon data */
			shift = 0;
			for (i = 0; i < n; ++i) {
				j = fr[i];
				if (j < 0)
					j = -j;

				m = fi[i];
				if (m < 0)
					m = -m;

				if (j > 16383 || m > 16383) {
					shift = 1;
					break;
				}
			}
			if (shift)
				++scale;
		} else {
			/* fixed scaling, for proper normalization -
			 there will be log2(n) passes, so this
			 results in an overall factor of 1/n,
			 distributed to maximize arithmetic accuracy. */
			shift = 1;
		}

		/* it may not be obvious, but the shift will be performed
		 on each data point exactly once, during this pass. */
		istep = l << 1; //step width of current butterfly
		for (m = 0; m < l; ++m) {
			j = m << k;
			/* 0 <= j < N_WAVE/2 */
			wr = Sinewave[j + N_WAVE / 4];
			wi = -Sinewave[j];
			//const cplx W_16 = coeffs[c];
			cplx coeff = coeffs[c];
			fixed w_r = coeff.R;
			fixed w_i = coeff.I;
			c = c + 1;
			if (inverse)
				wi = -wi;
			if (shift) {
				wr >>= 1;
				wi >>= 1;
				w_r >>= 1;
				w_i >>= 1;
			}
			for (i = m; i < n; i += istep) {

				j = i + l;

				tr = fr[j];
				ti = fi[j];
				qr = fr[i];
				qi = fi[i];

				FFT_COM_MUL(tr, w_r, ti, w_i);
				//tr is output real
				//ti is output imaginary
				//wr is input of coefficient real
				//wi is input of coefficient real
				//fr[j] is index of input iteration real
				//fi[j] is index of input iteration imaginary

				if (shift) {
					qr >>= 1;
					qi >>= 1;
				}

				fr[j] = qr - tr;
				fi[j] = qi - ti;
				fr[i] = qr + tr;
				fi[i] = qi + ti;
			}
		}
		--k;
		l = istep;
	}

	return scale;
}
