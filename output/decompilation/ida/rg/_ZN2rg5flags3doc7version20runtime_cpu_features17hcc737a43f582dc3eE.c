__int64 __fastcall rg::flags::doc::version::runtime_cpu_features(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rbp
  bool v4; // zf
  __int64 v5; // rdx
  const char *v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  const char **v9; // [rsp+8h] [rbp-E0h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+10h] [rbp-D8h]
  const char *v11; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+20h] [rbp-C8h]
  __int128 v13; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-B0h]
  void *v15; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-A0h]
  const char ***v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+58h] [rbp-90h]
  __int64 v19; // [rsp+60h] [rbp-88h]
  _BYTE v20[24]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v21[24]; // [rsp+88h] [rbp-60h] BYREF
  _BYTE v22[72]; // [rsp+A0h] [rbp-48h] BYREF

  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 8LL;
  v14 = 0LL;
  v11 = asc_8749F;
  v12 = 1LL;
  v9 = &v11;
  v10 = <&T as core::fmt::Display>::fmt;
  v15 = &unk_3EAC00;
  v16 = 2LL;
  v19 = 0LL;
  v17 = &v9;
  v18 = 1LL;
  core::option::Option<T>::map_or_else(v20, 0LL, a3, &v15);
  alloc::vec::Vec<T,A>::push(&v13, v20, &off_3EAC60);
  v3 = asc_69BA0;
  v4 = (unsigned __int8)std_detect::detect::cache::test(9LL) == 0;
  v6 = asc_69BA0;
  if ( !v4 )
    v6 = asc_8749F;
  v11 = v6;
  v12 = 1LL;
  v9 = &v11;
  v10 = <&T as core::fmt::Display>::fmt;
  v15 = &unk_3EAC20;
  v16 = 2LL;
  v19 = 0LL;
  v17 = &v9;
  v18 = 1LL;
  core::option::Option<T>::map_or_else(v21, 0LL, v5, &v15);
  alloc::vec::Vec<T,A>::push(&v13, v21, &off_3EAC78);
  if ( (unsigned __int8)std_detect::detect::cache::test(15LL) )
    v3 = asc_8749F;
  v11 = v3;
  v12 = 1LL;
  v9 = &v11;
  v10 = <&T as core::fmt::Display>::fmt;
  v15 = &unk_3EAC40;
  v16 = 2LL;
  v19 = 0LL;
  v17 = &v9;
  v18 = 1LL;
  core::option::Option<T>::map_or_else(v22, 0LL, v7, &v15);
  alloc::vec::Vec<T,A>::push(&v13, v22, &off_3EAC90);
  result = v14;
  *(_QWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v13;
  return result;
}