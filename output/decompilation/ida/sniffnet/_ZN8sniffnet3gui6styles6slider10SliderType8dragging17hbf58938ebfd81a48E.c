__int64 __fastcall sniffnet::gui::styles::slider::SliderType::dragging(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm1
  __m128 v3; // xmm0
  __int64 result; // rax
  float v5; // xmm4_4
  _BYTE v6[64]; // [rsp+8h] [rbp-E0h] BYREF
  __m128 v7; // [rsp+48h] [rbp-A0h]
  _BYTE v8[16]; // [rsp+78h] [rbp-70h] BYREF
  __m128 v9; // [rsp+88h] [rbp-60h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v8, a2);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v6, a2);
  *(_DWORD *)a1 = 2;
  v2 = v9;
  *(__m128 *)(a1 + 4) = v9;
  *(_DWORD *)(a1 + 196) = 2;
  v3 = v7;
  *(__m128 *)(a1 + 200) = v7;
  *(_DWORD *)(a1 + 392) = 1077936128;
  *(_OWORD *)(a1 + 396) = 0LL;
  *(_OWORD *)(a1 + 412) = xmmword_26EE20;
  result = 0x200000000LL;
  *(_QWORD *)(a1 + 428) = 0x200000000LL;
  *(__m128 *)(a1 + 436) = v2;
  v5 = _mm_shuffle_ps(_mm_movelh_ps((__m128)v7.m128_u32[1], v3), v3, 226).m128_f32[0];
  v3.m128_f32[0] = (*(float *)_mm_unpackhi_pd((__m128d)v3, (__m128d)v3).m128d_f64 + _mm_movehl_ps(v2, v2).m128_f32[0])
                 * 0.5;
  *(_WORD *)(a1 + 628) = 0;
  *(_DWORD *)(a1 + 632) = 1090519040;
  *(_DWORD *)(a1 + 648) = 0x40000000;
  *(double *)(a1 + 652) = (v5 + v2.m128_f32[0]) * 0.5;
  *(_DWORD *)(a1 + 660) = v3.m128_i32[0];
  *(_DWORD *)(a1 + 664) = 1065353216;
  return result;
}