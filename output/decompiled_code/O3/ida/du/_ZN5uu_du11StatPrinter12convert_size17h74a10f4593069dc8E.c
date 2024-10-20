__int64 __fastcall uu_du::StatPrinter::convert_size(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __m128d v5; // xmm1
  double v6; // xmm0_8
  __int64 v7; // rax
  __m128d v8; // xmm1
  char v9; // al
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char v14; // [rsp+Fh] [rbp-79h] BYREF
  __int128 v15; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h]
  _QWORD v17[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int128 *v19; // [rsp+48h] [rbp-40h]
  __int64 (__fastcall **v20)(); // [rsp+50h] [rbp-38h]
  __int64 v21; // [rsp+58h] [rbp-30h]
  char v22; // [rsp+60h] [rbp-28h]
  unsigned __int64 v23; // [rsp+68h] [rbp-20h] BYREF
  unsigned __int64 v24[3]; // [rsp+70h] [rbp-18h] BYREF

  v23 = a3;
  if ( *(_BYTE *)(a2 + 73) )
  {
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v15 + 1) = 1LL;
    v16 = 0LL;
    v21 = 32LL;
    v22 = 3;
    v17[0] = 0LL;
    v18 = 0LL;
    v19 = &v15;
    v20 = &off_134628;
    if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v23, v17, a3) )
      core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v14, &unk_134690, &off_134658);
LABEL_3:
    result = v16;
    *(_QWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
    return result;
  }
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      v10 = *(_QWORD *)(a2 + 40);
      if ( !v10 )
        core::panicking::panic_const::panic_const_div_by_zero(&off_134AE8);
      v11 = a3 + v10 - 1;
      if ( (v10 | v11) >> 32 )
      {
        v12 = v11 / v10;
        v13 = (a3 + v10 - 1) % v10;
      }
      else
      {
        v13 = (unsigned int)v11 % (unsigned int)v10;
        v12 = (unsigned int)v11 / (unsigned int)v10;
      }
      v24[0] = v12;
      *(_QWORD *)&v15 = 0LL;
      *((_QWORD *)&v15 + 1) = 1LL;
      v16 = 0LL;
      v21 = 32LL;
      v22 = 3;
      v17[0] = 0LL;
      v18 = 0LL;
      v19 = &v15;
      v20 = &off_134628;
      if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(v24, v17, v13) )
        core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v14, &unk_134690, &off_134658);
      goto LABEL_3;
    }
    v5 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a3, (__m128i)xmmword_164A0), (__m128d)xmmword_16410);
    v6 = _mm_unpackhi_pd(v5, v5).m128d_f64[0] + v5.m128d_f64[0];
    *(_QWORD *)&v15 = 0xF0E0D0C0B0A0908LL;
    if ( a3 >= 0x400 )
    {
      v6 = v6 * 0.0009765625;
      if ( v6 >= 1024.0 )
      {
        v6 = v6 * 0.0009765625;
        v7 = 1LL;
        if ( v6 < 1024.0 )
          goto LABEL_22;
        v6 = v6 * 0.0009765625;
        v7 = 2LL;
        if ( v6 < 1024.0 )
          goto LABEL_22;
        v6 = v6 * 0.0009765625;
        v7 = 3LL;
        if ( v6 < 1024.0 )
          goto LABEL_22;
        v6 = v6 * 0.0009765625;
        v7 = 4LL;
        if ( v6 < 1024.0 )
          goto LABEL_22;
        v6 = v6 * 0.0009765625;
        v7 = 5LL;
        if ( v6 < 1024.0 )
          goto LABEL_22;
        v6 = v6 * 0.0009765625;
        v7 = 6LL;
        if ( v6 < 1024.0 )
          goto LABEL_22;
        v6 = v6 * 0.0009765625;
        goto LABEL_34;
      }
      goto LABEL_21;
    }
  }
  else
  {
    v8 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a3, (__m128i)xmmword_164A0), (__m128d)xmmword_16410);
    v6 = _mm_unpackhi_pd(v8, v8).m128d_f64[0] + v8.m128d_f64[0];
    *(_QWORD *)&v15 = 0x706050403020100LL;
    if ( a3 >= 0x3E8 )
    {
      v6 = v6 / 1000.0;
      if ( v6 >= 1000.0 )
      {
        v6 = v6 / 1000.0;
        v7 = 1LL;
        if ( v6 < 1000.0 )
          goto LABEL_22;
        v6 = v6 / 1000.0;
        v7 = 2LL;
        if ( v6 < 1000.0 )
          goto LABEL_22;
        v6 = v6 / 1000.0;
        v7 = 3LL;
        if ( v6 < 1000.0 )
          goto LABEL_22;
        v6 = v6 / 1000.0;
        v7 = 4LL;
        if ( v6 < 1000.0 )
          goto LABEL_22;
        v6 = v6 / 1000.0;
        v7 = 5LL;
        if ( v6 < 1000.0 )
          goto LABEL_22;
        v6 = v6 / 1000.0;
        v7 = 6LL;
        if ( v6 < 1000.0 )
          goto LABEL_22;
        v6 = v6 / 1000.0;
LABEL_34:
        v7 = 7LL;
        goto LABEL_22;
      }
LABEL_21:
      v7 = 0LL;
LABEL_22:
      BYTE1(v17[0]) = *((_BYTE *)&v15 + v7);
      v9 = 1;
      goto LABEL_23;
    }
  }
  v9 = 0;
LABEL_23:
  *(double *)&v17[1] = v6;
  LOBYTE(v17[0]) = v9;
  return uucore::features::format::human::format_prefixed(a1, v17);
}
