unsigned __int64 __fastcall alacritty::display::meter::Meter::add_sample(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __m128d v4; // xmm1
  double v5; // xmm2_8
  double v6; // xmm2_8
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 >= 0xA )
    core::panicking::panic_bounds_check(v3, 10LL, &off_8823C0);
  v4 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a2, (__m128i)xmmword_E7D90), (__m128d)xmmword_E77F0);
  v5 = (_mm_unpackhi_pd(v4, v4).m128d_f64[0] + v4.m128d_f64[0]) * 1000000.0;
  v4.m128d_f64[0] = *(double *)(a1 + 8 * v3);
  v6 = v5 + (double)a3 / 1000.0;
  *(double *)(a1 + 8 * v3) = v6;
  *(double *)(a1 + 80) = v6 / 10.0 + *(double *)(a1 + 80) - v4.m128d_f64[0] / 10.0;
  result = *(_QWORD *)(a1 + 88) - 5 * (((*(_QWORD *)(a1 + 88) + 1LL) / 5uLL) & 0xFFFFFFFFFFFFFFFELL) + 1;
  *(_QWORD *)(a1 + 88) = result;
  return result;
}