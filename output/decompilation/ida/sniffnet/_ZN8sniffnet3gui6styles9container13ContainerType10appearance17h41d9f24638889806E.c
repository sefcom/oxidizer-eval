void *__fastcall sniffnet::gui::styles::container::ContainerType::appearance(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  unsigned __int8 v4; // cl
  int v5; // ebp
  __int64 v6; // r12
  __m128 v7; // xmm2
  int v8; // xmm3_4
  unsigned int v9; // eax
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  int v13; // xmm1_4
  __int128 v14; // xmm0
  void *result; // rax
  int v16; // [rsp+8h] [rbp-2B0h]
  int v17; // [rsp+Ch] [rbp-2ACh]
  int v18; // [rsp+10h] [rbp-2A8h]
  __m128 v19; // [rsp+20h] [rbp-298h]
  __int128 v20; // [rsp+30h] [rbp-288h]
  _BYTE v21[64]; // [rsp+40h] [rbp-278h] BYREF
  __m128 v22; // [rsp+80h] [rbp-238h]
  unsigned int v23; // [rsp+A0h] [rbp-218h]
  unsigned int v24; // [rsp+A4h] [rbp-214h]
  unsigned int v25; // [rsp+A8h] [rbp-210h]
  __m128 v26; // [rsp+B0h] [rbp-208h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-1F8h]
  _OWORD v28[2]; // [rsp+F0h] [rbp-1C8h]
  int v29; // [rsp+11Ch] [rbp-19Ch] BYREF
  __m128 v30; // [rsp+120h] [rbp-198h]
  _BYTE src[176]; // [rsp+130h] [rbp-188h] BYREF
  _BYTE dest[176]; // [rsp+1E0h] [rbp-D8h] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&v26, a3);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v21, a3);
  v4 = 6;
  if ( (unsigned __int8)(a2 - 3) < 0xBu )
    v4 = a2 - 3;
  v20 = v28[((v4 - 6) & 0xFD) != 0];
  v5 = 2;
  v6 = v4;
  switch ( v4 )
  {
    case 0u:
    case 5u:
      v7 = 0LL;
      v8 = 0;
      v9 = a2 - 4;
      if ( v9 > 8 )
        goto LABEL_22;
      goto LABEL_20;
    case 1u:
      v10 = (__m128)v22.m128_u64[0];
      v11 = (__m128)v25;
      v12 = (__m128)v22.m128_u32[2];
      goto LABEL_10;
    case 2u:
      v7 = v22;
      v8 = 0;
      v9 = a2 - 4;
      if ( v9 > 8 )
        goto LABEL_22;
      goto LABEL_20;
    case 3u:
    case 4u:
      v10 = (__m128)(unsigned __int64)v27;
      v11 = (__m128)v23;
      v12 = (__m128)DWORD2(v27);
LABEL_10:
      v7 = _mm_movelh_ps(v10, _mm_unpacklo_ps(v12, v11));
      v8 = 0;
      v9 = a2 - 4;
      if ( v9 > 8 )
        goto LABEL_22;
      goto LABEL_20;
    case 6u:
      if ( a2 == 2 )
        goto LABEL_13;
      sniffnet::gui::styles::types::gradient_type::get_gradient_headers(&v29);
      v5 = v29;
      memcpy(dest, src, sizeof(dest));
      v7 = v30;
      v8 = 0;
      v9 = a2 - 4;
      goto LABEL_20;
    case 7u:
    case 9u:
      v7 = v26;
      v8 = 0;
      v9 = a2 - 4;
      if ( v9 > 8 )
        goto LABEL_22;
      goto LABEL_20;
    case 8u:
LABEL_13:
      v7 = (__m128)v27;
      v8 = 0;
      v9 = a2 - 4;
      if ( v9 > 8 )
        goto LABEL_22;
      goto LABEL_20;
    case 0xAu:
      v7 = (__m128)xmmword_26D760;
      v8 = 0;
      v9 = a2 - 4;
      if ( v9 <= 8 )
      {
LABEL_20:
        v13 = 1097859072;
        switch ( v9 )
        {
          case 0u:
            v18 = 1082130432;
            v8 = 1097859072;
            goto LABEL_31;
          case 1u:
            v8 = 1088421888;
            v18 = 1065353216;
            goto LABEL_31;
          case 2u:
          case 3u:
          case 7u:
          case 8u:
            v8 = 1120403456;
            break;
          case 6u:
            v18 = 0x40000000;
            goto LABEL_33;
          default:
            break;
        }
      }
LABEL_22:
      v18 = dword_18E96FC[v6];
      if ( a2 == 7 )
      {
        v14 = v27;
        goto LABEL_28;
      }
      if ( a2 == 8 )
      {
        v14 = xmmword_26E830;
LABEL_28:
        v19 = (__m128)v14;
        v17 = v8;
        v16 = v8;
        goto LABEL_34;
      }
      v13 = v8;
      if ( a2 == 10 )
      {
LABEL_33:
        v16 = v8;
        v17 = v13;
        v19 = v22;
      }
      else
      {
LABEL_31:
        v16 = v8;
        v19 = _mm_movelh_ps((__m128)v22.m128_u64[0], _mm_unpacklo_ps((__m128)v22.m128_u32[2], (__m128)v24));
        v17 = v8;
      }
LABEL_34:
      *(_DWORD *)a1 = 1;
      *(_OWORD *)(a1 + 4) = v20;
      *(_DWORD *)(a1 + 20) = v5;
      *(__m128 *)(a1 + 24) = v7;
      result = memcpy((void *)(a1 + 40), dest, 0xB0uLL);
      *(__m128 *)(a1 + 216) = v19;
      *(_DWORD *)(a1 + 232) = v16;
      *(_DWORD *)(a1 + 236) = v16;
      *(_DWORD *)(a1 + 240) = v17;
      *(_DWORD *)(a1 + 244) = v17;
      *(_DWORD *)(a1 + 248) = v18;
      *(_OWORD *)(a1 + 252) = 0LL;
      *(_OWORD *)(a1 + 264) = 0LL;
      return result;
  }
}