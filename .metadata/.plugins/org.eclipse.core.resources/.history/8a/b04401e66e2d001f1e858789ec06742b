#include "fft.h"

static inline cplx
W(const uint32_t k, const uint32_t N) //define the winkel
{
    const double angle = M_PI * k / N;
    const cplx res = { (fixed) (INT16_MAX * cos(angle)), (fixed) (-sin(angle) * INT16_MAX) };
    return res;
}

void
GenerateCoefficients(cplx* __restrict out_coeff, const uint32_t N, bool inverse) //generate the coeffient before calculation
{
    const fixed factor = inverse ? -1 : 1;
    uint32_t i = 0;
    for (; i < N; ++i)
    {
        cplx val = W(i, N);
        val.I = (fixed) (val.I * factor);
        out_coeff[i] = val;
    }
}
