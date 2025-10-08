__int16 __fastcall sniffnet::gui::styles::rule::RuleType::appearance(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v4; // xmm0
  __int16 result; // ax
  __int64 v6; // [rsp+0h] [rbp-E8h] BYREF
  __m128 v7; // [rsp+40h] [rbp-A8h]
  unsigned int v8; // [rsp+64h] [rbp-84h]
  _BYTE v9[16]; // [rsp+70h] [rbp-78h] BYREF
  __m128 v10; // [rsp+80h] [rbp-68h]
  __m128 v11; // [rsp+90h] [rbp-58h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v9, a3);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(&v6, a3);
  switch ( *(_WORD *)a2 )
  {
    case 0:
      v4 = _mm_movelh_ps((__m128)v7.m128_u64[0], _mm_unpacklo_ps((__m128)v7.m128_u32[2], (__m128)v8));
      result = 3;
      break;
    case 1:
      v4 = *(__m128 *)(a2 + 4);
      result = *(_WORD *)(a2 + 2);
      break;
    case 2:
      result = 5;
      v4 = v10;
      break;
    case 3:
      result = 5;
      v4 = v11;
      break;
    case 4:
      result = 5;
      v4 = v7;
      break;
  }
  *(__m128 *)(a1 + 8) = v4;
  *(_WORD *)(a1 + 40) = result;
  *(_WORD *)a1 = 0;
  *(_OWORD *)(a1 + 24) = 0LL;
  return result;
}