unsigned __int64 __fastcall sniffnet::gui::styles::text::highlight(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  __int128 v5; // xmm0
  __m128 v6; // xmm4
  float v7; // xmm3_4
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  float v10; // [rsp+Ch] [rbp-16Ch]
  __m128 v11; // [rsp+10h] [rbp-168h]
  _BYTE v12[16]; // [rsp+20h] [rbp-158h] BYREF
  _OWORD v13[5]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v14[80]; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v15; // [rsp+D0h] [rbp-A8h]
  _BYTE v16[108]; // [rsp+F0h] [rbp-88h] BYREF
  unsigned __int8 v17; // [rsp+15Ch] [rbp-1Ch]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v12, a2);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v14, a2);
  v11 = (__m128)*(unsigned __int64 *)&v13[0];
  v10 = *((float *)v13 + 2);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v16, a2);
  result = v17;
  switch ( a3 )
  {
    case 0:
      v5 = v13[4];
      goto LABEL_13;
    case 1:
      result = (unsigned __int64)v13;
      v5 = v13[0];
      goto LABEL_13;
    case 2:
      v5 = v13[1];
      goto LABEL_13;
    case 3:
      v6 = v11;
      v7 = v10;
      v8 = (__m128)0x3F800000u;
      if ( v17 )
        goto LABEL_9;
      v8 = (__m128)0x3F333333u;
      v9 = (__m128)0x3F666666u;
      goto LABEL_10;
    case 4:
      v6 = v11;
      v7 = v10;
      v8 = (__m128)0x3F800000u;
      if ( v17 )
      {
        v9 = (__m128)0x3ECCCCCDu;
      }
      else
      {
        v8 = (__m128)0x3F333333u;
LABEL_9:
        v9 = (__m128)0x3F19999Au;
      }
LABEL_10:
      v8.m128_f32[0] = v8.m128_f32[0] * (float)(1.0 - v9.m128_f32[0]);
      _mm_storel_ps((double *)a1, _mm_add_ps(_mm_unpacklo_ps(v8, v8), _mm_mul_ps(v6, _mm_unpacklo_ps(v9, v9))));
      *(float *)(a1 + 8) = (float)(v7 * v9.m128_f32[0]) + v8.m128_f32[0];
      *(_DWORD *)(a1 + 12) = 1065353216;
      break;
    case 5:
    case 6:
      v5 = v15;
LABEL_13:
      *(_OWORD *)a1 = v5;
      break;
  }
  return result;
}