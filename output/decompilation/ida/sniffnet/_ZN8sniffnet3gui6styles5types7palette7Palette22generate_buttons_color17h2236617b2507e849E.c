void __fastcall sniffnet::gui::styles::types::palette::Palette::generate_buttons_color(__int64 a1, float *a2)
{
  __m128 v2; // xmm0
  float v3; // xmm1_4
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  float v6; // xmm1_4
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  __m128 v9; // xmm0

  v2 = (__m128)*(unsigned __int64 *)a2;
  v3 = a2[2];
  if ( (float)((float)(_mm_shuffle_ps(v2, v2, 85).m128_f32[0] + v2.m128_f32[0]) + v3) <= 1.5 )
  {
    v7 = _mm_add_ps(v2, (__m128)xmmword_26FC10);
    v8 = _mm_min_ps((__m128)xmmword_26F0E0, v7);
    v9 = _mm_cmpunord_ps(v7, v7);
    v5 = _mm_or_ps(_mm_andnot_ps(v9, v8), _mm_and_ps((__m128)xmmword_26F0E0, v9));
    v6 = fminf(v3 + 0.15000001, 1.0);
  }
  else
  {
    v4 = _mm_add_ps(v2, (__m128)xmmword_2718B0);
    v5 = _mm_and_ps(_mm_cmpord_ps(v4, v4), _mm_max_ps((__m128)0LL, v4));
    v6 = fmaxf(v3 + -0.15000001, 0.0);
  }
  _mm_storel_ps((double *)a1, v5);
  *(float *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = 1065353216;
}