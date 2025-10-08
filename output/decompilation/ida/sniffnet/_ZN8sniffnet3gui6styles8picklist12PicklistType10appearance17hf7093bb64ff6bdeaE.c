__int64 __fastcall sniffnet::gui::styles::picklist::PicklistType::appearance(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  double v3; // xmm0_8
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  double v6; // xmm3_8
  __int64 v7; // [rsp+8h] [rbp-E0h] BYREF
  float v8; // [rsp+10h] [rbp-D8h]
  __int128 v9; // [rsp+18h] [rbp-D0h]
  __int128 v10; // [rsp+58h] [rbp-90h]
  _BYTE v11[64]; // [rsp+68h] [rbp-80h] BYREF
  __m128 v12; // [rsp+A8h] [rbp-40h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&v7, a2);
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v11, a2);
  *(_OWORD *)(a1 + 444) = v10;
  *(_OWORD *)(a1 + 392) = v9;
  v3 = v8;
  *(_DWORD *)a1 = 2;
  v4 = v12;
  v5 = (__m128)v12.m128_u32[1];
  *(__m128 *)(a1 + 4) = v12;
  *(float *)&v3 = (*(float *)_mm_unpackhi_pd((__m128d)v4, (__m128d)v4).m128d_f64 + v3) * 0.5;
  *(_OWORD *)(a1 + 408) = xmmword_26D790;
  *(_DWORD *)(a1 + 424) = 0x40000000;
  v6 = *(float *)&v7;
  *(_OWORD *)(a1 + 428) = v10;
  *(_DWORD *)(a1 + 196) = 2;
  *(double *)(a1 + 200) = (_mm_shuffle_ps(_mm_movelh_ps(v5, v4), v4, 226).m128_f32[0] + v6) * 0.5;
  *(_DWORD *)(a1 + 208) = LODWORD(v3);
  *(_DWORD *)(a1 + 212) = 1065353216;
  return result;
}