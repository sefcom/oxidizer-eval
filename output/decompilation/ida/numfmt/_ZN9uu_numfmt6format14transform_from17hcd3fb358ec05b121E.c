void __fastcall uu_numfmt::format::transform_from(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  __int64 v8; // rdx
  double v9; // xmm0_8
  char v10; // cl
  char v11; // al
  __m128d v12; // xmm1
  int v13; // edi
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  double v15; // [rsp+10h] [rbp-48h]
  char v16; // [rsp+18h] [rbp-40h]
  char v17; // [rsp+19h] [rbp-3Fh]
  int v18; // [rsp+1Ah] [rbp-3Eh]
  __int16 v19; // [rsp+1Eh] [rbp-3Ah]
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]

  uu_numfmt::format::parse_suffix((__int64)&v14, a2, a3);
  v8 = v14;
  v9 = v15;
  v10 = v16;
  v11 = v17;
  if ( __OFSUB__(-v14, 1LL) )
  {
    v12 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a4, (__m128i)xmmword_19750), (__m128d)xmmword_196E0);
    uu_numfmt::format::remove_suffix(
      (__int64)&v20,
      v16,
      v17,
      a5,
      v15 * (_mm_unpackhi_pd(v12, v12).m128d_f64[0] + v12.m128d_f64[0]));
    if ( (_QWORD)v20 == 0x8000000000000000LL )
    {
      *(double *)(a1 + 8) = uu_numfmt::format::transform_from::{{closure}}(a5, *((double *)&v20 + 1));
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = v21;
      *(_OWORD *)a1 = v20;
    }
  }
  else
  {
    v13 = v18;
    *(_WORD *)(a1 + 22) = v19;
    *(_DWORD *)(a1 + 18) = v13;
    *(_QWORD *)a1 = v8;
    *(double *)(a1 + 8) = v9;
    *(_BYTE *)(a1 + 16) = v10;
    *(_BYTE *)(a1 + 17) = v11;
  }
}