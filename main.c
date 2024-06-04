//main.c

#include 		"fft.h"
#include        <stdio.h>
#include        <math.h>

#define DO_FFT	1

#define M       3

//number of points
#define N       (1<<M)

fixed real[N], imag[N], real_fix[N], imag_fix[N], real_mul[N], imag_mul[N], real_2[N], imag_2[N];

int main() {
	int i;

	for (i = 0; i < N; i++) {
		real[i] = 1000 * cos(i * 2 * 3.1415926535 / N);
		imag[i] = 0;
		real_fix[i] = real[i];
		imag_fix[i] = imag[i];
		real_mul[i] = real[i];
		imag_mul[i] = imag[i];
		real_2[i] = real[i];
		imag_2[i] = imag[i];
	}

	printf("\nInput Data\n");
	for (i = 0; i < N; i++) {
		printf("%d: %d, %d\n", i, real[i], imag[i]);
	}
	//FFT

#if (DO_FFT==1)

	fix_fft(real_fix, imag_fix, M, 0);

	printf("\nFFT\n");
	for (i=0; i<N; i++)
	{
		printf("%d: %d, %d\n", i, real_fix[i], imag_fix[i]);
	}

	fft_mul(real_mul, imag_mul, M, 0);

	printf("\nFFT\n");
	for (i=0; i<N; i++)
	{
		printf("%d: %d, %d\n", i, real_mul[i], imag_mul[i]);
	}

	fft_FFT2(real_2, imag_2, M, 0);

	printf("\nFFT\n");
	for (i=0; i<N; i++)
	{
		printf("%d: %d, %d\n", i, real_2[i], imag_2[i]);
	}
#elif (DO_FFT==2)
	int a_r = 2;
	int a_i = 0;
	int b_r = 3;
	int b_i = 0;
	FFT_COM_MUL(a_r, b_r, a_i, b_i);
	printf("%d, %d, %d, %d\n", a_r, b_r, a_i, b_i);

	a_r = 4;
	FFT_COM_MUL(a_r, b_r, a_i, b_i);
	printf("%d, %d, %d, %d\n", a_r, b_r, a_i, b_i);

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

