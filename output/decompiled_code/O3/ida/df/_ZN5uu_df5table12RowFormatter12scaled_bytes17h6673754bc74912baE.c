__int64 __fastcall uu_df::table::RowFormatter::scaled_bytes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 v3; // al
  __m128i si128; // xmm3
  __m128d v5; // xmm2
  __m128d v6; // xmm1
  double v8[2]; // [rsp+0h] [rbp-10h] BYREF

  v3 = *(_BYTE *)(a2 + 84);
  if ( v3 != 2 )
    return uu_df::blocks::to_magnitude_and_suffix(a1, a3, 0LL, v3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_B900);
  v5 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a3, si128), (__m128d)xmmword_B8A0);
  v6 = _mm_sub_pd(
         (__m128d)_mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(a2 + 72)), si128),
         (__m128d)xmmword_B8A0);
  v8[0] = ceil(
            (_mm_unpackhi_pd(v5, v5).m128d_f64[0] + v5.m128d_f64[0])
          / (_mm_unpackhi_pd(v6, v6).m128d_f64[0] + v6.m128d_f64[0]));
  return <T as alloc::string::ToString>::to_string(a1, v8);
}
