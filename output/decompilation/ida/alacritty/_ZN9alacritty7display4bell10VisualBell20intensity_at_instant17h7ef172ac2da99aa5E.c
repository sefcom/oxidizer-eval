double __fastcall alacritty::display::bell::VisualBell::intensity_at_instant(
        unsigned __int64 *a1,
        signed __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  double result; // xmm0_8
  unsigned int v5; // eax
  signed __int64 v6; // rcx
  __m128i v7; // xmm0
  unsigned int v8; // edx
  __m128d si128; // xmm1
  __m128d v10; // xmm4
  double v11; // xmm4_8
  double v12; // xmm1_8
  double v13; // xmm0_8
  double v14; // xmm3_8
  double v15; // xmm2_8
  signed __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+8h] [rbp-20h]

  v16 = a2;
  v17 = a3;
  v3 = *((_DWORD *)a1 + 2);
  result = 0.0;
  if ( v3 != 0 || *a1 != 0 )
  {
    v5 = *((_DWORD *)a1 + 6);
    if ( v5 != 1000000000 )
    {
      v6 = a1[2];
      if ( a2 == v6 )
      {
        if ( a3 < v5 )
          return result;
      }
      else if ( a2 < v6 )
      {
        return result;
      }
      v7 = _mm_unpacklo_epi64(
             (__m128i)(unsigned __int64)std::time::Instant::saturating_duration_since(&v16, v6, v5),
             (__m128i)*a1);
      si128 = (__m128d)_mm_load_si128((const __m128i *)&xmmword_E9250);
      v10 = _mm_add_pd(
              _mm_div_pd(
                _mm_sub_pd(
                  (__m128d)_mm_or_si128(
                             _mm_unpacklo_epi64(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v3)),
                             (__m128i)si128),
                  si128),
                (__m128d)xmmword_E8540),
              _mm_add_pd(
                _mm_sub_pd(
                  (__m128d)_mm_or_si128(_mm_srli_epi64(v7, 0x20u), (__m128i)xmmword_E8290),
                  (__m128d)xmmword_E82A0),
                (__m128d)_mm_or_si128(
                           _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_E9C80), v7),
                           (__m128i)xmmword_E9250)));
      v11 = fmin(v10.m128d_f64[0] / _mm_unpackhi_pd(v10, v10).m128d_f64[0], 1.0);
      switch ( *((_BYTE *)a1 + 32) )
      {
        case 0:
        case 1:
          v12 = 0.1;
          v13 = 0.25;
          v14 = 1.0;
          v15 = 0.25;
          goto LABEL_18;
        case 2:
          v13 = 0.39;
          v12 = 0.575;
          v15 = 0.5649999999999999;
          goto LABEL_15;
        case 3:
          v13 = 0.25;
          v12 = 0.46;
          v15 = 0.45;
          v14 = 0.9399999999999999;
          goto LABEL_18;
        case 4:
          v13 = 0.215;
          v12 = 0.61;
          v15 = 0.355;
          goto LABEL_15;
        case 5:
          v13 = 0.165;
          v12 = 0.84;
          v15 = 0.44;
          goto LABEL_15;
        case 6:
          v13 = 0.23;
          v15 = 0.32;
          goto LABEL_17;
        case 7:
          v13 = 0.19;
          v15 = 0.22;
LABEL_17:
          v12 = 1.0;
          v14 = 1.0;
          goto LABEL_18;
        case 8:
          v13 = 0.075;
          v12 = 0.82;
          v15 = 0.165;
LABEL_15:
          v14 = 1.0;
LABEL_18:
          v11 = alacritty::display::bell::cubic_bezier(v13, v12, v15, v14, v11);
          break;
        case 9:
          return 1.0 - v11;
      }
      return 1.0 - v11;
    }
  }
  return result;
}