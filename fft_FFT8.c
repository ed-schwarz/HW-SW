#include "fft.h"

static inline uint32_t BitReverse(uint32_t n) {
	n = (n & 0xffff0000) >> 16 | (n & 0x0000ffff) << 16;
	n = (n & 0xff00ff00) >> 8 | (n & 0x00ff00ff) << 8;
	n = (n & 0xf0f0f0f0) >> 4 | (n & 0x0f0f0f0f) << 4;
	n = (n & 0xcccccccc) >> 2 | (n & 0x33333333) << 2;
	n = (n & 0xaaaaaaaa) >> 1 | (n & 0x55555555) << 1;
	return n;
}

uint32_t Prepare_Data(cplx* __restrict const x, const uint32_t N,
		const uint32_t lg2_N, const uint32_t a_start) {
	// Decimate
	{
		const uint32_t shift_amount = 32 - lg2_N;
		uint32_t a = a_start;
		uint32_t c = 0;
		for (; a < N; ++a) {
			c = a;
			FFT_BIT_REVERSE(c);
			const uint32_t b = c >> shift_amount;
			const bool swap = a < b;
			if (swap) {
				const cplx tmp_a = x[a];
				x[a] = x[b];
				x[b] = tmp_a;
			}
		}
	}
	return 0;
}

uint32_t Between_Shuffle(cplx* __restrict const x, const uint32_t N,
		const uint32_t lg2_N, const uint32_t length) {

	int i;
	for (i = 0; i < length / N; i++) {
		Prepare_Data(x, N, lg2_N, i * N);
	}
}

int fft_FFT8(cplx*__restrict f, int m, int inverse) {
	int mr, nn, i, j, l, k, r, istep, n, scale, shift;
	//number of input data
	n = 1 << m;
	cplx q; //even input
	cplx t; //odd input
	cplx u; //even output
	cplx v; //odd output
	cplx w[n / 2]; //twiddle factor
	uint32_t lg2_l = 0;

	if (n > N_WAVE)
		return -1;

	mr = 0;
	nn = n - 1;
	scale = 0;
	r = 0;

	/* decimation in time - re-order data */

	Prepare_Data(f, n, m, 0);

	l = 1;
	k = LOG2_N_WAVE - 1;
	while (l < n) {
		if (inverse) {
			/* variable scaling, depending upon data */
			shift = 0;
			for (i = 0; i < n; ++i) {
				j = f[i].R;
				if (j < 0)
					j = -j;

				m = f[i].I;
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
		Between_Shuffle(f, l, lg2_l, n);
		lg2_l += 1;

		while (r < n / 2) {
			for (m = 0; m < l; ++m) {
				j = m << k;
				/* 0 <= j < N_WAVE/2 */
				w[r].R = Sinewave[j + N_WAVE / 4];
				w[r].I = -Sinewave[j];

				if (inverse)
					w[r].I = -w[r].I;
				if (shift) {
					w[r].R >>= 1;
					w[r].I >>= 1;
				}
				r++;
			}
		}

		for (i = 0; i < n; i += 2) {
			j = i + 1;
			WUR_w_r(w[i / 2].R);
			WUR_w_i(w[i / 2].I);
			t = f[j];
			q = f[i];

			if (shift) {
				q.R >>= 1;
				q.I >>= 1;
			}

			WUR_a_r(t.R);
			WUR_a_i(t.I);
			WUR_b_r(q.R);
			WUR_b_i(q.I);

			FFT_2_f_LD();

			FFT_2_FFT();

			u.R = RUR_u_r();
			u.I = RUR_u_i();
			v.R = RUR_v_r();
			v.I = RUR_v_i();

			f[j] = u;
			f[i] = v;
		}
		//this loop with TIE instead

		--k;
		l = istep;
	}

	return scale;
}

