__int64 __fastcall sniffnet::gui::styles::donut::DonutType::active(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __m128 v3; // xmm2
  float v4; // xmm1_4
  __m128 v5; // xmm2
  unsigned __int64 v6; // [rsp+8h] [rbp-E0h] BYREF
  float v7; // [rsp+10h] [rbp-D8h]
  __int128 v8; // [rsp+18h] [rbp-D0h]
  __int128 v9; // [rsp+28h] [rbp-C0h]
  __int128 v10; // [rsp+58h] [rbp-90h]
  _BYTE v11[64]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v12; // [rsp+A8h] [rbp-40h]
  float v13; // [rsp+D0h] [rbp-18h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&v6, a2);
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v11, a2);
  v3 = (__m128)LODWORD(v13);
  v4 = (float)((float)(*((float *)&v12 + 2) - v7) * v13) + v7;
  *(_OWORD *)(a1 + 32) = v8;
  *(_OWORD *)(a1 + 48) = v9;
  *(_OWORD *)(a1 + 16) = v10;
  v5 = _mm_add_ps(
         _mm_mul_ps(_mm_unpacklo_ps(v3, v3), _mm_sub_ps((__m128)(unsigned __int64)v12, (__m128)v6)),
         (__m128)v6);
  *(_OWORD *)(a1 + 64) = v12;
  _mm_storel_ps((double *)a1, v5);
  *(float *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = 1065353216;
  return result;
}