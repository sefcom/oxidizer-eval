double __fastcall uu_numfmt::format::round_with_precision(char a1, unsigned __int64 a2, double a3)
{
  __m128d v3; // xmm0
  char v5; // [rsp+7h] [rbp-11h] BYREF
  double v6; // [rsp+8h] [rbp-10h]
  double v7; // [rsp+10h] [rbp-8h]

  v7 = a3;
  v3 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a2, (__m128i)xmmword_16090), (__m128d)xmmword_15FD0);
  v5 = a1;
  v6 = pow(10.0, _mm_unpackhi_pd(v3, v3).m128d_f64[0] + v3.m128d_f64[0]);
  v3.m128d_f64[0] = uu_numfmt::options::RoundMethod::round(&v5);
  return v3.m128d_f64[0] / v6;
}
