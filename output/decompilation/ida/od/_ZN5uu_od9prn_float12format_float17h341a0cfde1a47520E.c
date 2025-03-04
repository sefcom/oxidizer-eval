__int64 __fastcall uu_od::prn_float::format_float(__int64 a1, __int128 **a2, __int128 **a3, __m128 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  double v8; // xmm0_8
  int v9; // ebp
  __int64 (__fastcall *v10)(); // rax
  __int64 (__fastcall *v11)(); // rax
  __int128 **v12; // rsi
  __int128 *v14; // [rsp+0h] [rbp-D8h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+8h] [rbp-D0h]
  __int128 **v16; // [rsp+10h] [rbp-C8h]
  __int64 v17; // [rsp+18h] [rbp-C0h]
  __int128 **v18; // [rsp+20h] [rbp-B8h]
  __int64 v19; // [rsp+28h] [rbp-B0h]
  _QWORD v20[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-98h]
  __int64 v22; // [rsp+48h] [rbp-90h]
  __int64 v23; // [rsp+50h] [rbp-88h]
  __int64 v24; // [rsp+58h] [rbp-80h]
  char v25; // [rsp+60h] [rbp-78h]
  unsigned __int64 v26; // [rsp+68h] [rbp-70h] BYREF
  __int128 *v27; // [rsp+70h] [rbp-68h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+78h] [rbp-60h]
  __int128 **v29; // [rsp+80h] [rbp-58h]
  __int64 v30; // [rsp+88h] [rbp-50h]
  _QWORD *v31; // [rsp+90h] [rbp-48h]
  __int64 v32; // [rsp+98h] [rbp-40h]
  __m128 v33; // [rsp+A0h] [rbp-38h]

  v26 = a4.m128_u64[0];
  v6 = a4.m128_u64[0] & 0x7FF0000000000000LL;
  v7 = a4.m128_u64[0] << 12;
  if ( a4.m128_u64[0] << 12 )
  {
    if ( !v6 )
    {
LABEL_6:
      if ( *(double *)a4.m128_u64 == 0.0 && a4.m128_i64[0] < 0 )
      {
        v27 = (__int128 *)&off_142048;
        v28 = <&T as core::fmt::Display>::fmt;
        v29 = a2;
        v30 = 0LL;
        v20[0] = 2LL;
        v21 = 1LL;
        v22 = 1LL;
        v23 = 0LL;
        v24 = 32LL;
        v25 = 1;
      }
      else
      {
        if ( *(double *)a4.m128_u64 == 0.0 || fabs(*(double *)a4.m128_u64) >= INFINITY )
        {
          v27 = (__int128 *)&v26;
          v11 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        }
        else
        {
          v27 = (__int128 *)&v26;
          v11 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
        }
        v28 = v11;
        v29 = a2;
        v30 = 0LL;
        v20[0] = 2LL;
        v21 = 1LL;
        v22 = 1LL;
        v23 = 0LL;
        v24 = 32LL;
        v25 = 3;
      }
      v14 = &xmmword_DAD0;
      v15 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v18 = (__int128 **)v20;
      v19 = 1LL;
      v16 = &v27;
      v17 = 2LL;
      v12 = &v14;
      return core::option::Option<T>::map_or_else(a1, v12);
    }
  }
  else if ( !v6 || v6 == 0x7FF0000000000000LL )
  {
    goto LABEL_6;
  }
  v33 = a4;
  v8 = log10(fabs(*(double *)a4.m128_u64));
  v9 = (int)fmin(fmax(floor(v8), -2147483648.0), 2147483647.0);
  _powidf2((unsigned int)v9, v7, 10.0);
  if ( *(double *)v33.m128_u64 > 0.0 && *(double *)v33.m128_u64 < 10.0
    || *(double *)v33.m128_u64 < 0.0 && *(double *)v33.m128_u64 > -10.0 )
  {
    --v9;
  }
  if ( v9 < 0 || v9 >= (int)a3 )
  {
    if ( v9 == -1 )
    {
      v14 = (__int128 *)&v26;
      v10 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    }
    else
    {
      a3 = (__int128 **)((char *)a3 - 1);
      v14 = (__int128 *)&v26;
      v10 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
    }
    v15 = v10;
    v16 = a3;
  }
  else
  {
    v14 = (__int128 *)&v26;
    v15 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v16 = (__int128 **)((char *)a3 + ~(unsigned __int64)(unsigned int)v9);
  }
  v17 = 0LL;
  v18 = a2;
  v19 = 0LL;
  v20[0] = 1LL;
  v20[1] = 1LL;
  v21 = 1LL;
  v22 = 2LL;
  v23 = 0LL;
  v24 = 32LL;
  v25 = 3;
  v27 = &xmmword_DAD0;
  v28 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v31 = v20;
  v32 = 1LL;
  v29 = &v14;
  v30 = 3LL;
  v12 = &v27;
  return core::option::Option<T>::map_or_else(a1, v12);
}
