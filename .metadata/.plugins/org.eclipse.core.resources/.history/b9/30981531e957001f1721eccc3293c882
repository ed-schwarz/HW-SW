#include "fft.h"
/*
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
		for (; a < N + a_start; ++a) {
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
	if (N != 2) {
		for (i = 0; i < length / N; i++) {
			Prepare_Data(x, N, lg2_N, i * N);
		}
	}
}

int fft_FFT8(cplx*__restrict f, int m, int inverse, const cplx* __restrict coeffs) {
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



	Prepare_Data(f, n, m, 0);

    l = 1;
    k = LOG2_N_WAVE-1;
    while(l < n)
    {
        if(inverse)
        {

            shift = 0;
            for(i=0; i<n; ++i)
            {
                j = f[i].R;
                if(j < 0) j = -j;

                m = f[i].I;
                if(m < 0) m = -m;

                if(j > 16383 || m > 16383)
                {
                    shift = 1;
                    break;
                }
            }
            if(shift) ++scale;
        }
        else
        {

            shift = 1;
        }


        istep = l << 1;		//step width of current butterfly
        for(m=0; m < n/2; m++){
        	//m = odd
        	//m + istep = even

        }



        for(m=0; m<l; ++m)
        {
            j = m << k;

            wr =  Sinewave[j+N_WAVE/4];
            wi = -Sinewave[j];

            if(inverse) wi = -wi;
            if(shift)
            {
                wr >>= 1;
                wi >>= 1;
            }
            WUR_w_r(wr);
            WUR_w_i(wi);
            for(i=m; i<n; i+=istep)
            {

                j = i + l;

                tr = fr[j];
                ti = fi[j];
                qr = fr[i];
                qi = fi[i];


                if(shift)
                {
                        qr >>= 1;
                        qi >>= 1;
                }

                WUR_a_r(tr);
                WUR_a_i(ti);
                WUR_b_r(qr);
                WUR_b_i(qi);

                FFT_2_f_LD();

                FFT_2_FFT();

                ur = RUR_u_r();
                ui = RUR_u_i();
                vr = RUR_v_r();
                vi = RUR_v_i();

                fr[j] = ur;
                fi[j] = ui;
                fr[i] = vr;
                fi[i] = vi;
            }
        }
        --k;
        l = istep;
    }

    return scale;
}
*/
