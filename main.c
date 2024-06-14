//main.c

#include 		"fft.h"
#include        <stdio.h>
#include        <math.h>

#define FFT_Type	3

#define M       3

//number of points
#define N       (1<<M)

fixed real[N], imag[N], real_fix[N], imag_fix[N], real_mul[N], imag_mul[N];
static cplx f[N];

#if (FFT_Type==3)
static cplx fwd_coeffs[N/2];


static void
Test_SWOpt()
{
    //static cplx fwd_coeffs[N];

    // Generate Input & coefficients
    {
        //GenerateComplexSignal(cplx_sig);
        //GenerateComplexSignal(ref_cplx_sig);
        GenerateCoefficients(fwd_coeffs, N/2, false);
        //GenerateCoefficients(bwd_coeffs, N, true);
    }
}
#endif

int main() {
	int i;

	for (i = 0; i < N; i++) {
		real[i] = 1000 * cos(i * 2 * 3.1415926535 / N);
		imag[i] = 0;
		real_fix[i] = real[i];
		imag_fix[i] = imag[i];
		real_mul[i] = real[i];
		imag_mul[i] = imag[i];

		f[i].R = real[i];
		f[i].I = imag[i];
	}


#if (FFT_Type==3)
	Test_SWOpt();
#endif

	printf("\nInput Data\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real[i], imag[i]);
	}
	printf("\nInput Data Complex\n");
		for (i = 0; i < N; i++) {
			printf("%d: %d, %d\n", i, f[i].R, f[i].I);
		}

	//FFT

#if (FFT_Type==0)

	fix_fft(real, imag, M, 0);

	printf("\nFFT pure C\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real[i], imag[i]);
	}

#elif (FFT_Type==1)
	fft_mul(real, imag, M, 0);

	printf("\nFFT TIE complex multiplication\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real[i], imag[i]);
	}

#elif (FFT_Type==2)

	fix_fft(real_fix, imag_fix, M, 0);

	printf("\nFFT pure C\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real_fix[i], imag_fix[i]);
	}

	fft_FFT2(real_mul, imag_mul, M, 0);

	printf("\nFFT TIE Node\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real_mul[i], imag_mul[i]);
	}

#elif (FFT_Type==3)
	fix_fft(real_fix, imag_fix, M, 0);

	printf("\nFFT pure C\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real_fix[i], imag_fix[i]);
	}

	fix_coeffs(real_mul, imag_mul, M, 0, fwd_coeffs);

	printf("\nFFT Coefficients\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real_mul[i], imag_mul[i]);
	}

#elif (FFT_Type==4)

	fix_fft(real_fix, imag_fix, M, 0);

	printf("\nFFT pure C\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real_fix[i], imag_fix[i]);
	}

	fft_FFT8(f, M, 0);

	printf("\nFFT TIE Node\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, f[i].R, f[i].I);
	}

#else

	//IFFT
	fix_fft(real, imag, M, 1);

	printf("\nIFFT\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real[i], imag[i]);
	}

#endif

	return 0;
}

