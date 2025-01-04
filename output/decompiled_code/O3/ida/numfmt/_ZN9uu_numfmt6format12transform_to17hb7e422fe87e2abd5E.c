        double a6)
{
  __int64 v8; // rdx
  __int64 v9; // xmm0_8
  char v10; // cl
  __int64 result; // rax
  __m128d v12; // xmm1
  double v13; // xmm0_8
  double **v14; // rsi
  double v15; // [rsp+0h] [rbp-128h] BYREF
  __int128 *v16; // [rsp+8h] [rbp-120h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+10h] [rbp-118h]
  double **v18; // [rsp+18h] [rbp-110h]
  __int64 (__fastcall *v19)(); // [rsp+20h] [rbp-108h]
  __int128 *v20; // [rsp+28h] [rbp-100h]
  __int64 v21; // [rsp+30h] [rbp-F8h]
  double v22; // [rsp+38h] [rbp-F0h] BYREF
  double *v23; // [rsp+40h] [rbp-E8h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+48h] [rbp-E0h]
  double *v25; // [rsp+50h] [rbp-D8h]
  __int64 (__fastcall *v26)(); // [rsp+58h] [rbp-D0h]
  __int128 *v27; // [rsp+60h] [rbp-C8h]
  __int64 v28; // [rsp+68h] [rbp-C0h]
  __int128 v29; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+80h] [rbp-A8h]
  __int64 v31; // [rsp+90h] [rbp-98h]
  __int64 v32; // [rsp+98h] [rbp-90h]
  char v33; // [rsp+A0h] [rbp-88h]
  __int64 v34; // [rsp+A8h] [rbp-80h]
  __int64 v35; // [rsp+B8h] [rbp-70h]
  __int64 v36; // [rsp+C8h] [rbp-60h]
  __int64 v37; // [rsp+D0h] [rbp-58h]
  char v38; // [rsp+D8h] [rbp-50h]
  __int128 v39; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-30h]

  uu_numfmt::format::consider_suffix((__int64)&v29, a3, a4, a5, a6);
  v8 = v29;
  v9 = *((_QWORD *)&v29 + 1);
  v10 = v30;
  result = BYTE1(v30);
  if ( (_QWORD)v29 != 0x8000000000000000LL )
  {
    *(_WORD *)(a1 + 30) = HIWORD(v30);
    *(_DWORD *)(a1 + 26) = *(_DWORD *)((char *)&v30 + 2);
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = v9;
    *(_BYTE *)(a1 + 24) = v10;
    *(_BYTE *)(a1 + 25) = result;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v12 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a2, (__m128i)xmmword_15E90), (__m128d)xmmword_15DD0);
  v13 = *((double *)&v29 + 1) / (_mm_unpackhi_pd(v12, v12).m128d_f64[0] + v12.m128d_f64[0]);
  v22 = v13;
  if ( BYTE1(v30) == 2 )
  {
    v15 = uu_numfmt::format::round_with_precision(a4, a5, v13);
    v23 = &v15;
    v24 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v25 = (double *)a5;
    v26 = 0LL;
    *(_QWORD *)&v29 = 1LL;
    *((_QWORD *)&v29 + 1) = 1LL;
    v30 = 2LL;
    v31 = 0LL;
    v32 = 32LL;
    v33 = 3;
    v16 = &xmmword_16000;
    v17 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v20 = &v29;
    v21 = 1LL;
LABEL_11:
    v18 = &v23;
    v19 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v14 = (double **)&v16;
    goto LABEL_12;
  }
  if ( !a5 )
  {
    LOWORD(v15) = v30 & 0x1FF;
    v23 = &v22;
    v24 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v25 = &v15;
    v26 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
    if ( fabs(v13) >= 10.0 )
    {
      v29 = 0LL;
    }
    else
    {
      *(_QWORD *)&v29 = 0LL;
      *((_QWORD *)&v29 + 1) = 1LL;
    }
    v30 = 2LL;
    v31 = 0LL;
    v32 = 32LL;
    v33 = 3;
    v34 = 2LL;
    v35 = 2LL;
    v36 = 1LL;
    v37 = 32LL;
    v38 = 3;
    v16 = (__int128 *)&unk_1A370;
    v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v20 = &v29;
    v21 = 2LL;
    goto LABEL_11;
  }
  LOWORD(v15) = v30 & 0x1FF;
  v16 = (__int128 *)&v22;
  v17 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
  v18 = (double **)&v15;
  v19 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
  v20 = (__int128 *)a5;
  v21 = 0LL;
  *(_QWORD *)&v29 = 1LL;
  *((_QWORD *)&v29 + 1) = 2LL;
  v30 = 2LL;
  v31 = 0LL;
  v32 = 32LL;
  v33 = 3;
  v34 = 2LL;
  v35 = 2LL;
  v36 = 1LL;
  v37 = 32LL;
  v38 = 3;
  v23 = (double *)&unk_1A370;
  v24 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v27 = &v29;
  v28 = 2LL;
  v25 = (double *)&v16;
  v26 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v14 = &v23;
LABEL_12:
  core::option::Option<T>::map_or_else(&v39, v14);
  result = v40;
  *(_QWORD *)(a1 + 24) = v40;
  *(_OWORD *)(a1 + 8) = v39;
  *(_QWORD *)a1 = 0LL;
  return result;
}
