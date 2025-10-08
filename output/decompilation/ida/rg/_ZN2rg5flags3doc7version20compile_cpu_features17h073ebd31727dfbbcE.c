__int64 __fastcall rg::flags::doc::version::compile_cpu_features(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 result; // rax
  const char **v6; // [rsp+0h] [rbp-D8h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+8h] [rbp-D0h]
  const char *v8; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-C0h]
  __int128 v10; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+30h] [rbp-A8h]
  void *v12; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-98h]
  const char ***v14; // [rsp+48h] [rbp-90h]
  __int64 v15; // [rsp+50h] [rbp-88h]
  __int64 v16; // [rsp+58h] [rbp-80h]
  _BYTE v17[24]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v19[64]; // [rsp+98h] [rbp-40h] BYREF

  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 8LL;
  v11 = 0LL;
  v8 = asc_8749F;
  v9 = 1LL;
  v6 = &v8;
  v7 = <&T as core::fmt::Display>::fmt;
  v12 = &unk_3EAC00;
  v13 = 2LL;
  v16 = 0LL;
  v14 = &v6;
  v15 = 1LL;
  core::option::Option<T>::map_or_else(v17, 0LL, a3, &v12);
  alloc::vec::Vec<T,A>::push(&v10, v17, &off_3EACA8);
  v8 = asc_69BA0;
  v9 = 1LL;
  v6 = &v8;
  v7 = <&T as core::fmt::Display>::fmt;
  v12 = &unk_3EAC20;
  v13 = 2LL;
  v16 = 0LL;
  v14 = &v6;
  v15 = 1LL;
  core::option::Option<T>::map_or_else(v18, 0LL, v3, &v12);
  alloc::vec::Vec<T,A>::push(&v10, v18, &off_3EACC0);
  v8 = asc_69BA0;
  v9 = 1LL;
  v6 = &v8;
  v7 = <&T as core::fmt::Display>::fmt;
  v12 = &unk_3EAC40;
  v13 = 2LL;
  v16 = 0LL;
  v14 = &v6;
  v15 = 1LL;
  core::option::Option<T>::map_or_else(v19, 0LL, v4, &v12);
  alloc::vec::Vec<T,A>::push(&v10, v19, &off_3EACD8);
  result = v11;
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  return result;
}