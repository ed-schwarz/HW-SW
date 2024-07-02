//main.c

#include 		"fft.h"
#include        <stdio.h>
#include        <math.h>

#define FFT_Type	3

#define M       3

//number of points
#define N       (1<<M)

fixed real[N], imag[N], real_fix[N], imag_fix[N], real_mul[N], imag_mul[N];
//for Backwward propagation
static fixed bwd_real_mul[N], bwd_imag_mul[N], bwd_real_fix[N], bwd_imag_fix[N];
static cplx f[N], bwd_f[N];
bool equal;

#if (FFT_Type>=3)
static cplx fwd_coeffs[N/2];
static cplx bwd_coeffs[N/2];
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
int Test_fft_ref(){

		fix_fft(real_fix, imag_fix, M, 0);
	    memcpy(bwd_real_fix, real_fix, sizeof(real_fix));
	    memcpy(bwd_imag_fix, imag_fix, sizeof(imag_fix));
	    fix_fft(bwd_real_fix, bwd_imag_fix, M, 1);

	}

int Test_fft_adv(){

    fft_adv_dit(f, M, 0, fwd_coeffs);
    memcpy(bwd_f, f, sizeof(f));
	//fft_adv(bwd_f, M, 1, bwd_coeffs, 1);
		}

#if (FFT_Type==0)

	fix_fft(real, imag, M, 0);

	printf("\nFFT pure C\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real[i], imag[i]);
	}

#elif (FFT_Type==1)

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

#elif (FFT_Type==1)
	//precalculation of Coefficients 
    	GenerateCoefficients(fwd_coeffs, N/2, false);
    	GenerateCoefficients(bwd_coeffs, N/2, true);
	Test_fft_ref();
	Test_fft_adv();

	/*
	printf("\nFFT pure C\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real_fix[i], imag_fix[i]);
	}


	printf("\nFFT TIE Node\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, f[i].R, f[i].I);
	}

	printf("\nBWD FFT pure C\n");
	printf("\n Index no.\t | BWD Real, Imag\t | Input Real, Imag\t| Diff Input/Output\n");
	for (i = 0; i < N; i++) {
		//printf("%d: %d, %d\n", i, bwd_real_fix[i], bwd_imag_fix[i]);
		printf("%d:\t\t %d, %d \t\t %d, %d \t\t %d, %d  \n", i, bwd_real_fix[i], bwd_imag_fix[i], real[i], imag[i], bwd_real_fix[i]-real[i], bwd_imag_fix[i]-imag[i]);
	}

	printf("\nBwd FFT TIE Node\n");
	printf("\n Index no.\t | BWD Real, Imag\t | Input Real, Imag\t| Diff Input/Output\n");
	for (i = 0; i < N; i++) {
		//printf("%d: %d, %d\n", i, bwd_f[i].R, bwd_f[i].I);
		printf("%d:\t\t %d, %d \t\t %d, %d \t\t %d, %d  \n", i, bwd_f[i].R, bwd_f[i].I, real[i], imag[i], bwd_f[i].R-real[i], bwd_f[i].I-imag[i]);

	}
	*/
	equal = true;
	for (i = 0; i < N; i++) {
			if(f[i].R != real_fix[i] || f[i].I != imag_fix[i])
			{
				equal = false;
				printf("\nCorrect C value\n");
				printf("%d: %d, %d\n", i, real_fix[i], imag_fix[i]);
				printf("Wrong TIE value\n");
				printf("%d: %d, %d\n", i, f[i].R, f[i].I);
			}
		}
	if(equal){
		printf("FFT Pass");
	}
	else {
		printf("FFT Fail");
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

