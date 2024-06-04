#include "fft.h"

int fft_FFT2(fixed fr[], fixed fi[], int m, int inverse)
{
    int mr,nn,i,j,l,k,istep, n, scale, shift;



    fixed qr,qi;		//even input
    fixed tr,ti;		//odd input
    fixed ur,ui;		//even output
    fixed vr,vi;		//odd output
    fixed wr,wi;		//twiddle factor
    WUR_a_r(tr);
    WUR_a_i(ti);
    WUR_b_r(qr);
    WUR_b_i(qi);
    WUR_u_r(ur);
    WUR_u_i(ui);
    WUR_v_r(vr);
    WUR_v_i(vi);
    WUR_w_r(wr);
    WUR_w_i(wi);

    //number of input data
    n = 1<<m;

    if(n > N_WAVE) return -1;

    mr = 0;
    nn = n - 1;
    scale = 0;

    /* decimation in time - re-order data */
    for(m=1; m<=nn; ++m) {
        l = n;
        do{
        	l >>= 1;
        }while(mr+l > nn);
        mr = (mr & (l-1)) + l;

        if(mr <= m) continue;
        tr = fr[m];
        fr[m] = fr[mr];
        fr[mr] = tr;

        ti = fi[m];
        fi[m] = fi[mr];
        fi[mr] = ti;
    }


    l = 1;
    k = LOG2_N_WAVE-1;
    while(l < n)
    {
        if(inverse)
        {
            /* variable scaling, depending upon data */
            shift = 0;
            for(i=0; i<n; ++i)
            {
                j = fr[i];
                if(j < 0) j = -j;

                m = fi[i];
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
            /* fixed scaling, for proper normalization -
               there will be log2(n) passes, so this
               results in an overall factor of 1/n,
               distributed to maximize arithmetic accuracy. */
            shift = 1;
        }

        /* it may not be obvious, but the shift will be performed
           on each data point exactly once, during this pass. */
        istep = l << 1;		//step width of current butterfly
        for(m=0; m<l; ++m)
        {
            j = m << k;
            /* 0 <= j < N_WAVE/2 */
            wr =  Sinewave[j+N_WAVE/4];
            wi = -Sinewave[j];

            if(inverse) wi = -wi;
            if(shift)
            {
                wr >>= 1;
                wi >>= 1;
            }

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

                FFT_2_f_LD();

                FFT_2_FFT();
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















