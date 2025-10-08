__int64 __fastcall uu_stat::print_float(
        unsigned __int8 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        double a6)
{
  __int64 v8; // rax
  const char *v9; // rsi
  const char *v10; // r8
  __int128 v12; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-A8h]
  __int64 v14; // [rsp+18h] [rbp-A0h]
  __int64 v15; // [rsp+20h] [rbp-98h]
  _QWORD v16[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp-50h] BYREF
  __int128 v19; // [rsp+80h] [rbp-38h] BYREF
  _QWORD *v20; // [rsp+90h] [rbp-28h]

  v8 = a1[3];
  v9 = (const char *)&unk_1D51F;
  if ( (v8 & 1) == 0 )
    v9 = (_BYTE *)(&dword_0 + 1);
  v10 = asc_1D520;
  if ( a1[4] )
    v8 = 1LL;
  else
    v10 = v9;
  v16[0] = v10;
  v16[1] = v8;
  uu_stat::precision_trunc((__int64)v18, a3, a4, a6);
  v17[0] = v16;
  v17[1] = <&T as core::fmt::Display>::fmt;
  v17[2] = v18;
  v17[3] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v12 = &unk_1CFD0;
  *((_QWORD *)&v12 + 1) = 2LL;
  v15 = 0LL;
  v13 = v17;
  v14 = 2LL;
  core::option::Option<T>::map_or_else(&v19, &v12);
  v12 = v19;
  v13 = v20;
  uu_stat::pad_and_print(*((__int64 *)&v19 + 1), (__int64)v20, a1[2], a2, a5);
  core::ptr::drop_in_place<alloc::string::String>(&v12);
  return core::ptr::drop_in_place<alloc::string::String>(v18);
}