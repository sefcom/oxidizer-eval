__int64 __fastcall uu_numfmt::format::transform_to(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        char a4,
        unsigned __int64 a5,
        double a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  double v13; // xmm0_8
  __int64 v14; // rcx
  __int64 result; // rax
  __m128d v16; // xmm1
  double v17; // xmm0_8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edi
  double **v23; // rsi
  _UNKNOWN **v24; // rax
  double v25; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+8h] [rbp-B0h] BYREF
  double v27; // [rsp+10h] [rbp-A8h]
  __int64 v28; // [rsp+18h] [rbp-A0h]
  __int128 v29; // [rsp+20h] [rbp-98h]
  __int64 v30; // [rsp+30h] [rbp-88h]
  double v31; // [rsp+38h] [rbp-80h] BYREF
  double *v32; // [rsp+40h] [rbp-78h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+48h] [rbp-70h]
  char ***v34; // [rsp+50h] [rbp-68h]
  __int64 (__fastcall *v35)(); // [rsp+58h] [rbp-60h]
  void *v36; // [rsp+60h] [rbp-58h]
  __int64 v37; // [rsp+68h] [rbp-50h]
  __int128 v38; // [rsp+70h] [rbp-48h] BYREF
  __int64 v39; // [rsp+80h] [rbp-38h]

  uu_numfmt::format::consider_suffix((__int64)&v26, a3, a4, a5, a6);
  v12 = v26;
  v13 = v27;
  v14 = (unsigned __int8)v28;
  result = BYTE1(v28);
  if ( !__OFSUB__(-v26, 1LL) )
  {
    WORD2(v32) = HIWORD(v28);
    v22 = *(_DWORD *)((char *)&v28 + 2);
    LODWORD(v32) = *(_DWORD *)((char *)&v28 + 2);
    *(_WORD *)(a1 + 30) = HIWORD(v28);
    *(_DWORD *)(a1 + 26) = v22;
    *(_QWORD *)(a1 + 8) = v12;
    *(double *)(a1 + 16) = v13;
    *(_BYTE *)(a1 + 24) = v14;
    *(_BYTE *)(a1 + 25) = result;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v16 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a2, (__m128i)xmmword_19750), (__m128d)xmmword_196E0);
  v17 = v27 / (_mm_unpackhi_pd(v16, v16).m128d_f64[0] + v16.m128d_f64[0]);
  v31 = v17;
  if ( BYTE1(v28) == 2 )
  {
    v25 = uu_numfmt::format::round_with_precision(a4, a5, v17);
    if ( a5 > 0xFFFF )
    {
      v26 = (__int64)&off_102460;
      *(_QWORD *)&v27 = 1LL;
      v28 = 8LL;
      v29 = 0LL;
      ((void (__fastcall __noreturn *)(__int64 *, char **, __int64, __int64, __int64, __int64, _DWORD))core::panicking::panic_fmt)(
        &v26,
        &off_102470,
        v18,
        v19,
        v20,
        v21,
        LODWORD(v25));
    }
    v32 = &v25;
    v33 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v34 = 0LL;
    LOWORD(v35) = a5;
    v26 = (__int64)&unk_198C0;
    *(_QWORD *)&v27 = 1LL;
    *((_QWORD *)&v29 + 1) = &unk_1AB58;
    v30 = 1LL;
  }
  else
  {
    if ( a5 )
    {
      *(_WORD *)((char *)&v25 + 1) = v28 & 0x1FF;
      LOBYTE(v25) = a3;
      if ( a5 > 0xFFFF )
      {
        v26 = (__int64)&off_102460;
        *(_QWORD *)&v27 = 1LL;
        v28 = 8LL;
        v29 = 0LL;
        ((void (__fastcall __noreturn *)(__int64 *, char **, __int64, __int64, __int64, __int64, _DWORD))core::panicking::panic_fmt)(
          &v26,
          &off_102488,
          v12,
          v14,
          v10,
          v11,
          LODWORD(v25));
      }
      v26 = (__int64)&v31;
      v27 = COERCE_DOUBLE(core::fmt::float::<impl core::fmt::Display for f64>::fmt);
      v28 = (__int64)&v25;
      *(_QWORD *)&v29 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
      *((_QWORD *)&v29 + 1) = 0LL;
      LOWORD(v30) = a5;
      v32 = (double *)&unk_195A0;
      v33 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v36 = &unk_1AC48;
      v37 = 2LL;
      v34 = (char ***)&v26;
      v35 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v23 = &v32;
      goto LABEL_14;
    }
    *(_WORD *)((char *)&v25 + 1) = v28 & 0x1FF;
    LOBYTE(v25) = a3;
    v32 = &v31;
    v33 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v34 = (char ***)&v25;
    v35 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
    v26 = (__int64)&unk_195A0;
    *(_QWORD *)&v27 = 2LL;
    if ( fabs(v17) >= 10.0 )
      v24 = (_UNKNOWN **)&unk_1AB88;
    else
      v24 = &off_1ABE8;
    *((_QWORD *)&v29 + 1) = v24;
    v30 = 2LL;
  }
  v28 = (__int64)&v32;
  *(_QWORD *)&v29 = 2LL;
  v23 = (double **)&v26;
LABEL_14:
  core::option::Option<T>::map_or_else(&v38, v23);
  result = v39;
  *(_QWORD *)(a1 + 24) = v39;
  *(_OWORD *)(a1 + 8) = v38;
  *(_QWORD *)a1 = 0LL;
  return result;
}