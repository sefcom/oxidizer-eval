__int64 __fastcall uu_od::prn_float::format_float(__int64 a1, __int16 a2, unsigned __int64 a3, __m128i a4)
{
  void *v4; // rax
  __int64 (__fastcall *v5)(); // rax
  double v7; // xmm0_8
  __int64 v8; // rbx
  unsigned __int64 **v9; // rsi
  __int64 (__fastcall *v11)(); // rax
  unsigned __int64 *v12; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-98h]
  unsigned __int64 **v14; // [rsp+18h] [rbp-90h]
  __int128 v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+30h] [rbp-78h]
  unsigned __int64 v17; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 *v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+48h] [rbp-60h]
  unsigned __int64 **v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  void *v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  __m128i v24; // [rsp+70h] [rbp-38h]

  v17 = a4.m128i_i64[0];
  if ( (a4.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0x7FF0000000000000LL
    && (a4.m128i_i64[0] & 0x7FF0000000000000LL) != 0
    && (a4.m128i_i64[0] & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
  {
    v24 = a4;
    v7 = log10(*(double *)_mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_1A790), a4).m128i_i64);
    v8 = (unsigned int)(int)fmin(fmax(floor(v7), -2147483648.0), 2147483647.0);
    _powidf2(v8, 10.0);
    if ( *(double *)v24.m128i_i64 > 0.0 && *(double *)v24.m128i_i64 < 10.0
      || *(double *)v24.m128i_i64 < 0.0 && *(double *)v24.m128i_i64 > -10.0 )
    {
      LODWORD(v8) = v8 - 1;
    }
    if ( (int)v8 < (int)a3 && (int)v8 >= 0 )
    {
      a3 += ~(_DWORD)v8;
      if ( a3 > 0xFFFF )
      {
        v12 = (unsigned __int64 *)&off_1038D8;
        v13 = 1LL;
        v14 = (unsigned __int64 **)&byte_8;
        v15 = 0LL;
        core::panicking::panic_fmt(&v12, &off_1038E8);
      }
    }
    else if ( (_DWORD)v8 != -1 )
    {
      LOWORD(a3) = a3 - 1;
      v12 = &v17;
      v11 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
LABEL_24:
      v13 = (__int64)v11;
      v14 = 0LL;
      LOWORD(v15) = a3;
      *((_QWORD *)&v15 + 1) = 0LL;
      LOWORD(v16) = a2;
      v18 = (unsigned __int64 *)&unk_1A940;
      v19 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v22 = &unk_1D258;
      v23 = 1LL;
      v20 = &v12;
      v21 = 3LL;
      v9 = &v18;
      return core::option::Option<T>::map_or_else(a1, v9);
    }
    v12 = &v17;
    v11 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    goto LABEL_24;
  }
  if ( *(double *)a4.m128i_i64 != 0.0 )
  {
    if ( (a4.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFuLL) <= 0x7FEFFFFFFFFFFFFFLL )
    {
      v18 = &v17;
      v5 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
      goto LABEL_18;
    }
LABEL_8:
    v18 = &v17;
    v5 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
LABEL_18:
    v19 = v5;
    v20 = 0LL;
    LOWORD(v21) = a2;
    v12 = (unsigned __int64 *)&unk_1A940;
    v13 = 1LL;
    v4 = &unk_1D228;
    goto LABEL_19;
  }
  if ( !a4.m128i_i64[0] )
    goto LABEL_8;
  v18 = (unsigned __int64 *)&off_103900;
  v19 = <&T as core::fmt::Display>::fmt;
  v20 = 0LL;
  LOWORD(v21) = a2;
  v12 = (unsigned __int64 *)&unk_1A940;
  v13 = 1LL;
  v4 = &unk_1D2A8;
LABEL_19:
  *((_QWORD *)&v15 + 1) = v4;
  v16 = 1LL;
  v14 = &v18;
  *(_QWORD *)&v15 = 2LL;
  v9 = &v12;
  return core::option::Option<T>::map_or_else(a1, v9);
}