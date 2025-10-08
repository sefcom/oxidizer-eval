void __fastcall alacritty::event::TouchZoom::font_delta(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  __m128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __m128 v6; // xmm1
  float v7; // [rsp+0h] [rbp-38h]

  v7 = ((float (*)(void))alacritty::event::TouchZoom::distance)();
  v2 = (*(_QWORD *)(a2 + 48) != *(_QWORD *)(a1 + 48)) << 6;
  v3 = *(__m128 *)a2;
  v4 = *(_OWORD *)(a2 + 16);
  v5 = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + v2 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + v2 + 32) = v5;
  *(_OWORD *)(a1 + v2 + 16) = v4;
  *(__m128 *)(a1 + v2) = v3;
  *(double *)v3.m128_u64 = alacritty::event::TouchZoom::distance(a1);
  v3.m128_f32[0] = (float)((float)(v3.m128_f32[0] - v7) * 0.0099999998) + *(float *)(a1 + 128);
  v6 = _mm_cmpunord_ss(v3, v3);
  *(float *)(a1 + 128) = v3.m128_f32[0]
                       - (float)(floorf(COERCE_DOUBLE(v3.m128_u64[0] & 0x7FFFFFFF7FFFFFFFLL))
                               * COERCE_FLOAT(v6.m128_i32[0] & 0x7FC00000 | _mm_andnot_ps(
                                                                              v6,
                                                                              _mm_or_ps(
                                                                                _mm_and_ps((__m128)xmmword_E98C0, v3),
                                                                                (__m128)xmmword_E9C90)).m128_u32[0]));
}