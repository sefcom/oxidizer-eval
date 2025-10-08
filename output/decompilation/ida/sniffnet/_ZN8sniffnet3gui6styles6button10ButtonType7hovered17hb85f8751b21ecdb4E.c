void *__fastcall sniffnet::gui::styles::button::ButtonType::hovered(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int128 v4; // xmm4
  int v5; // eax
  int v6; // eax
  unsigned __int8 v7; // cl
  int v8; // r12d
  __m128 v9; // xmm3
  int v10; // ebp
  unsigned int v11; // eax
  __m128 v12; // xmm2
  unsigned __int8 v13; // r15
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  unsigned int v16; // r14d
  __m128 v17; // xmm0
  unsigned int v18; // r12d
  __int128 *v19; // rax
  void *result; // rax
  int v21; // [rsp+8h] [rbp-2C0h]
  int v22; // [rsp+Ch] [rbp-2BCh]
  int v23; // [rsp+10h] [rbp-2B8h]
  __m128 v24; // [rsp+20h] [rbp-2A8h]
  __m64 v25; // [rsp+30h] [rbp-298h] BYREF
  float v26; // [rsp+38h] [rbp-290h]
  _OWORD v27[3]; // [rsp+40h] [rbp-288h] BYREF
  char v28; // [rsp+70h] [rbp-258h] BYREF
  char v29; // [rsp+80h] [rbp-248h] BYREF
  __m128 v30; // [rsp+90h] [rbp-238h]
  __int128 v31; // [rsp+A0h] [rbp-228h]
  char v32[64]; // [rsp+B0h] [rbp-218h] BYREF
  __m128 v33; // [rsp+F0h] [rbp-1D8h]
  __m128 v34; // [rsp+100h] [rbp-1C8h]
  unsigned int v35; // [rsp+114h] [rbp-1B4h]
  _BYTE v36[20]; // [rsp+120h] [rbp-1A8h] BYREF
  _BYTE src[176]; // [rsp+134h] [rbp-194h] BYREF
  _BYTE dest[176]; // [rsp+1F0h] [rbp-D8h] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&v25, a3);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v32, a3);
  v4 = 0x4000000000000000uLL;
  if ( a2 <= 0xFu )
  {
    v5 = 58368;
    if ( _bittest(&v5, a2) )
    {
      v4 = 0LL;
      v21 = 0;
      v22 = 0;
      goto LABEL_7;
    }
    v6 = 192;
    if ( _bittest(&v6, a2) )
      v4 = xmmword_26DD10;
  }
  v22 = dword_275108[(a2 & 0xFE) == 6];
  v21 = 1065353216;
LABEL_7:
  v7 = 9;
  if ( (unsigned __int8)(a2 - 3) < 0xDu )
    v7 = a2 - 3;
  v8 = v7;
  v31 = v4;
  switch ( v7 )
  {
    case 2u:
      v12 = (__m128)xmmword_26F970;
      v10 = 2;
      v9 = v33;
      v13 = a2 - 4;
      if ( (unsigned __int8)(a2 - 4) < 0xCu )
        goto LABEL_31;
      goto LABEL_26;
    case 5u:
      v12 = (__m128)xmmword_270170;
      v10 = 2;
      v9 = (__m128)v27[2];
      v13 = a2 - 4;
      if ( (unsigned __int8)(a2 - 4) < 0xCu )
        goto LABEL_31;
      goto LABEL_26;
    case 7u:
      v9 = _mm_movelh_ps((__m128)v33.m128_u64[0], _mm_unpacklo_ps((__m128)v33.m128_u32[2], (__m128)v35));
      v12 = 0LL;
      v23 = 0x40000000;
      v10 = 2;
LABEL_35:
      v17 = v33;
      goto LABEL_38;
    case 9u:
      if ( a2 == 2 )
      {
        v15 = 0LL;
        v15.m128_f32[0] = (*((float *)v27 + 2) + v26) * 0.5;
        v9 = _mm_shuffle_ps(
               _mm_cvtpd_ps(_mm_mul_pd(_mm_add_pd(_mm_cvtps_pd(*(__m64 *)&v27[0]), _mm_cvtps_pd(v25)), (__m128d)xmmword_26DFA0)),
               _mm_shuffle_ps(v15, (__m128)xmmword_26E830, 48),
               132);
        v12 = (__m128)xmmword_26F970;
        v10 = 2;
      }
      else
      {
        sniffnet::gui::styles::types::gradient_type::get_gradient_hovered_buttons(v36);
        v10 = *(_DWORD *)v36;
        memcpy(dest, src, sizeof(dest));
        v9 = *(__m128 *)&v36[4];
LABEL_30:
        v12 = (__m128)xmmword_26F970;
        v13 = a2 - 4;
        if ( (unsigned __int8)(a2 - 4) < 0xCu )
        {
LABEL_31:
          v23 = dword_18E96CC[v13];
          v16 = a2 - 4;
LABEL_32:
          switch ( v16 )
          {
            case 0u:
            case 5u:
              v24 = _mm_movelh_ps((__m128)v33.m128_u64[0], _mm_unpacklo_ps((__m128)v33.m128_u32[2], (__m128)v35));
              v18 = v8 - 5;
              if ( v18 <= 7 )
                goto LABEL_39;
LABEL_43:
              v19 = (__int128 *)&v29;
              break;
            case 6u:
              goto LABEL_35;
            case 7u:
              v17 = v34;
              goto LABEL_38;
            default:
              goto LABEL_37;
          }
          goto LABEL_44;
        }
      }
LABEL_26:
      v23 = 0x40000000;
      v16 = a2 - 4;
      if ( v16 <= 7 )
        goto LABEL_32;
LABEL_37:
      v17 = (__m128)v27[0];
LABEL_38:
      v24 = v17;
      v18 = v8 - 5;
LABEL_39:
      switch ( v18 )
      {
        case 0u:
          v19 = &xmmword_26E830;
          break;
        case 4u:
        case 7u:
          v19 = (__int128 *)&v28;
          break;
        case 5u:
        case 6u:
          v19 = v27;
          break;
        default:
          goto LABEL_43;
      }
LABEL_44:
      v30 = _mm_unpacklo_ps(v12, v12);
      *(_OWORD *)v36 = *v19;
      *(_DWORD *)a1 = v10;
      *(__m128 *)(a1 + 4) = v9;
      result = memcpy((void *)(a1 + 20), dest, 0xB0uLL);
      *(_OWORD *)(a1 + 196) = *(_OWORD *)v36;
      *(__m128 *)(a1 + 212) = v24;
      *(__m128 *)(a1 + 228) = v30;
      *(_DWORD *)(a1 + 244) = v23;
      *(_QWORD *)(a1 + 248) = 0LL;
      *(_DWORD *)(a1 + 256) = 0;
      *(_DWORD *)(a1 + 260) = v21;
      _mm_storel_ps((double *)(a1 + 264), (__m128)v31);
      *(_DWORD *)(a1 + 272) = v22;
      return result;
    case 0xAu:
    case 0xBu:
    case 0xCu:
      v9 = 0LL;
      v10 = 2;
      v11 = a2 - 4;
      goto LABEL_11;
    default:
      v14 = 0LL;
      v14.m128_f32[0] = (v33.m128_f32[2] + v26) * 0.5;
      v9 = _mm_shuffle_ps(
             _mm_cvtpd_ps(_mm_mul_pd(_mm_add_pd(_mm_cvtps_pd((__m64)v33.m128_u64[0]), _mm_cvtps_pd(v25)), (__m128d)xmmword_26DFA0)),
             _mm_shuffle_ps(v14, (__m128)xmmword_26E830, 48),
             132);
      v10 = 2;
      v11 = a2 - 4;
      if ( v11 <= 6 )
      {
LABEL_11:
        switch ( v11 )
        {
          case 0u:
          case 1u:
            goto LABEL_30;
          case 2u:
          case 3u:
            v12 = (__m128)0x41F0000000000000uLL;
            v13 = a2 - 4;
            if ( (unsigned __int8)(a2 - 4) < 0xCu )
              goto LABEL_31;
            goto LABEL_26;
          case 4u:
          case 5u:
            v12 = (__m128)xmmword_270170;
            v13 = a2 - 4;
            if ( (unsigned __int8)(a2 - 4) < 0xCu )
              goto LABEL_31;
            goto LABEL_26;
          case 6u:
            v12 = 0LL;
            v23 = 0x40000000;
            v17 = v33;
            goto LABEL_38;
          default:
            break;
        }
      }
      v12 = (__m128)xmmword_26F0B0;
      v13 = a2 - 4;
      if ( (unsigned __int8)(a2 - 4) < 0xCu )
        goto LABEL_31;
      goto LABEL_26;
  }
}