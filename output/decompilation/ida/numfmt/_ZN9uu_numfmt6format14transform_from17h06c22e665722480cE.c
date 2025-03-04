void __fastcall uu_numfmt::format::transform_from(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  __int64 v7; // rdx
  __int64 v8; // xmm0_8
  char v9; // cl
  char v10; // al
  __m128d v11; // xmm1
  double v12; // xmm0_8
  __int128 x; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+10h] [rbp-28h]

  uu_numfmt::format::parse_suffix((__int64)&x, a2, a3);
  v7 = x;
  v8 = *((_QWORD *)&x + 1);
  v9 = v14;
  v10 = BYTE1(v14);
  if ( (_QWORD)x == 0x8000000000000000LL )
  {
    v11 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a4, (__m128i)xmmword_15E90), (__m128d)xmmword_15DD0);
    uu_numfmt::format::remove_suffix(
      (__int64)&x,
      v14,
      SBYTE1(v14),
      a5,
      *((double *)&x + 1) * (_mm_unpackhi_pd(v11, v11).m128d_f64[0] + v11.m128d_f64[0]));
    if ( (_QWORD)x == 0x8000000000000000LL )
    {
      if ( a5 == 5 )
      {
        *(_QWORD *)&v12 = ~(unsigned __int64)*(_OWORD *)&_mm_cmpeq_sd(
                                                           (__m128d)0LL,
                                                           (__m128d)*((unsigned __int64 *)&x + 1)) & *((_QWORD *)&x + 1);
      }
      else if ( *((double *)&x + 1) >= 0.0 )
      {
        v12 = ceil(*((double *)&x + 1));
      }
      else
      {
        v12 = -ceil(fabs(*((double *)&x + 1)));
      }
      *(double *)(a1 + 8) = v12;
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = x;
    }
  }
  else
  {
    *(_WORD *)(a1 + 22) = HIWORD(v14);
    *(_DWORD *)(a1 + 18) = *(_DWORD *)((char *)&v14 + 2);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 16) = v9;
    *(_BYTE *)(a1 + 17) = v10;
  }
}
