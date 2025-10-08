void *__fastcall sniffnet::gui::styles::button::ButtonType::active(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v4; // cl
  int v5; // r15d
  unsigned int v6; // eax
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  int v9; // ebp
  __m128 v10; // xmm0
  int v11; // xmm5_4
  int v12; // ecx
  unsigned int v13; // r15d
  __int128 v14; // xmm0
  __m128 v15; // xmm0
  __int128 v16; // xmm0
  __m128 v17; // xmm0
  void *result; // rax
  __m128 v19; // [rsp+0h] [rbp-2B8h]
  __m128 v20; // [rsp+10h] [rbp-2A8h]
  int v21; // [rsp+20h] [rbp-298h]
  __m64 v22; // [rsp+40h] [rbp-278h] BYREF
  float v23; // [rsp+48h] [rbp-270h]
  __int128 v24; // [rsp+50h] [rbp-268h]
  __m128 v25; // [rsp+70h] [rbp-248h]
  __int128 v26; // [rsp+80h] [rbp-238h]
  __int128 v27; // [rsp+90h] [rbp-228h]
  __m128 v28; // [rsp+A0h] [rbp-218h]
  _BYTE v29[64]; // [rsp+B0h] [rbp-208h] BYREF
  __m128 v30; // [rsp+F0h] [rbp-1C8h]
  __m128 v31; // [rsp+100h] [rbp-1B8h]
  unsigned int v32; // [rsp+114h] [rbp-1A4h]
  unsigned int v33; // [rsp+118h] [rbp-1A0h]
  char v34; // [rsp+11Ch] [rbp-19Ch]
  int v35; // [rsp+124h] [rbp-194h] BYREF
  __m128 v36; // [rsp+128h] [rbp-190h]
  _BYTE v37[176]; // [rsp+138h] [rbp-180h] BYREF
  _BYTE src[176]; // [rsp+1E8h] [rbp-D0h] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&v22, a3);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v29, a3);
  v4 = 9;
  if ( (unsigned __int8)(a2 - 3) < 0xDu )
    v4 = a2 - 3;
  v5 = v4;
  v6 = v4 - 1;
  v7 = 0LL;
  switch ( v4 )
  {
    case 1u:
      v7 = _mm_movelh_ps((__m128)v30.m128_u64[0], _mm_unpacklo_ps((__m128)v30.m128_u32[2], (__m128)v33));
      v8 = (__m128)xmmword_26F970;
      v9 = 2;
      goto LABEL_17;
    case 2u:
    case 3u:
      v10 = 0LL;
      v10.m128_f32[0] = (v30.m128_f32[2] + v23) * 0.5;
      v7 = _mm_shuffle_ps(
             _mm_cvtpd_ps(_mm_mul_pd(_mm_add_pd(_mm_cvtps_pd((__m64)v30.m128_u64[0]), _mm_cvtps_pd(v22)), (__m128d)xmmword_26DFA0)),
             _mm_shuffle_ps(v10, (__m128)xmmword_26E830, 48),
             132);
      v8 = (__m128)xmmword_26F0B0;
      v9 = 2;
      if ( v6 > 8 )
        goto LABEL_17;
      goto LABEL_5;
    case 5u:
      v8 = (__m128)xmmword_270170;
      v9 = 2;
      v7 = v25;
      goto LABEL_17;
    case 6u:
    case 7u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
      v8 = (__m128)xmmword_26F0B0;
      v9 = 2;
      goto LABEL_5;
    case 9u:
      if ( a2 == 2 )
      {
        v8 = (__m128)xmmword_26F970;
        v9 = 2;
        v7 = (__m128)v24;
      }
      else
      {
        sniffnet::gui::styles::types::gradient_type::get_gradient_buttons(&v35);
        v9 = v35;
        memcpy(src, v37, sizeof(src));
        v7 = v36;
LABEL_6:
        v8 = (__m128)xmmword_26F970;
      }
      goto LABEL_17;
    default:
      v7 = v30;
      v8 = (__m128)xmmword_26F0B0;
      v9 = 2;
      if ( v6 <= 8 )
      {
LABEL_5:
        switch ( v4 )
        {
          case 1u:
          case 2u:
          case 9u:
            goto LABEL_6;
          case 3u:
          case 4u:
            v8 = (__m128)0x41F0000000000000uLL;
            break;
          case 5u:
          case 6u:
            v8 = (__m128)xmmword_270170;
            break;
          case 7u:
            v8 = 0LL;
            v11 = 0;
            goto LABEL_19;
          default:
            break;
        }
      }
LABEL_17:
      if ( a2 > 0xFu )
        goto LABEL_39;
      v11 = 0;
      v12 = 59328;
      if ( _bittest(&v12, a2) )
        goto LABEL_19;
      if ( a2 == 4 )
      {
        v11 = 1082130432;
LABEL_27:
        v20 = _mm_movelh_ps((__m128)v30.m128_u64[0], _mm_unpacklo_ps((__m128)v30.m128_u32[2], (__m128)v32));
        v13 = v5 - 5;
        goto LABEL_28;
      }
LABEL_39:
      v11 = 0x40000000;
LABEL_19:
      if ( a2 == 4 )
        goto LABEL_27;
      if ( a2 != 11 )
      {
        v20 = (__m128)v24;
        v13 = v5 - 5;
        if ( v13 > 7 )
          goto LABEL_30;
LABEL_28:
        switch ( v13 )
        {
          case 0u:
            v14 = xmmword_26E830;
            goto LABEL_35;
          case 4u:
            v14 = v26;
            goto LABEL_35;
          case 5u:
            if ( v34 )
              v15 = (__m128)0x3E4CCCCDu;
            else
              v15 = (__m128)0x3F333333u;
            v19 = _mm_movelh_ps((__m128)(unsigned __int64)v27, _mm_unpacklo_ps((__m128)DWORD2(v27), v15));
            v21 = v11;
            if ( (a2 & 0xFE) == 6 )
              goto LABEL_42;
            goto LABEL_36;
          case 6u:
            v14 = v24;
            goto LABEL_35;
          case 7u:
            v17 = 0LL;
            v17.m128_f32[0] = (*((float *)&v24 + 2) + *((float *)&v26 + 2)) * 0.5;
            v19 = _mm_shuffle_ps(
                    _mm_cvtpd_ps(
                      _mm_mul_pd(
                        _mm_add_pd(_mm_cvtps_pd(*(__m64 *)&v24), _mm_cvtps_pd(*(__m64 *)&v26)),
                        (__m128d)xmmword_26DFA0)),
                    _mm_shuffle_ps(v17, (__m128)xmmword_26E830, 48),
                    132);
            v21 = v11;
            if ( (a2 & 0xFE) == 6 )
              goto LABEL_42;
            goto LABEL_36;
          default:
            goto LABEL_30;
        }
      }
      v20 = v31;
      v13 = v5 - 5;
      if ( v13 <= 7 )
        goto LABEL_28;
LABEL_30:
      v14 = v27;
LABEL_35:
      v19 = (__m128)v14;
      v21 = v11;
      if ( (a2 & 0xFE) == 6 )
LABEL_42:
        v16 = xmmword_26F400;
      else
LABEL_36:
        v16 = 0LL;
      v28 = _mm_unpacklo_ps(v8, v8);
      *(_DWORD *)a1 = v9;
      *(__m128 *)(a1 + 4) = v7;
      result = memcpy((void *)(a1 + 20), src, 0xB0uLL);
      *(__m128 *)(a1 + 196) = v19;
      *(__m128 *)(a1 + 212) = v20;
      *(__m128 *)(a1 + 228) = v28;
      *(_DWORD *)(a1 + 244) = v21;
      *(_QWORD *)(a1 + 248) = 0LL;
      *(_DWORD *)(a1 + 256) = 0;
      *(_OWORD *)(a1 + 260) = v16;
      return result;
  }
}