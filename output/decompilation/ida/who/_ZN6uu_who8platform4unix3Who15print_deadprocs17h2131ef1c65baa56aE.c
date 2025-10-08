__int64 __fastcall uu_who::platform::unix::Who::print_deadprocs(int a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r15d
  int v14; // r12d
  int v16; // [rsp+5Ch] [rbp-ECh] BYREF
  char **v17; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v18; // [rsp+68h] [rbp-E0h]
  __int64 v19; // [rsp+78h] [rbp-D0h]
  __int64 v20; // [rsp+80h] [rbp-C8h]
  __int128 v21; // [rsp+90h] [rbp-B8h] BYREF
  char *v22; // [rsp+A0h] [rbp-A8h]
  __int64 (__fastcall *v23)(); // [rsp+A8h] [rbp-A0h]
  _BYTE v24[24]; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v25; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-70h]
  _BYTE v27[24]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v28[24]; // [rsp+100h] [rbp-48h] BYREF

  uucore::features::utmpx::Utmpx::terminal_suffix(&v21);
  *(_QWORD *)v24 = &v21;
  *(_QWORD *)&v24[8] = <alloc::string::String as core::fmt::Display>::fmt;
  v17 = &off_FEF78;
  *(_QWORD *)&v18 = 1LL;
  v20 = 0LL;
  *((_QWORD *)&v18 + 1) = v24;
  v19 = 1LL;
  core::option::Option<T>::map_or_else(&v25, &v17, v2, v3, v4, v5);
  core::ptr::drop_in_place<alloc::string::String>(&v21);
  *(_OWORD *)v27 = v25;
  *(_QWORD *)&v27[16] = v26;
  *(_DWORD *)v24 = *(_DWORD *)(a2 + 4);
  *(_QWORD *)&v25 = v24;
  *((_QWORD *)&v25 + 1) = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
  v17 = (char **)&unk_18A60;
  *(_QWORD *)&v18 = 1LL;
  v20 = 0LL;
  *((_QWORD *)&v18 + 1) = &v25;
  v19 = 1LL;
  core::option::Option<T>::map_or_else(&v21, &v17, v6, v7, v8, v9);
  *(_OWORD *)v28 = v21;
  *(_QWORD *)&v28[16] = v22;
  v16 = *(_DWORD *)(a2 + 332);
  *(_QWORD *)&v21 = &v16;
  *((_QWORD *)&v21 + 1) = core::fmt::num::imp::<impl core::fmt::Display for i16>::fmt;
  v22 = (char *)&v16 + 2;
  v23 = core::fmt::num::imp::<impl core::fmt::Display for i16>::fmt;
  v17 = &off_FEF88;
  *(_QWORD *)&v18 = 2LL;
  v20 = 0LL;
  *((_QWORD *)&v18 + 1) = &v21;
  v19 = 2LL;
  core::option::Option<T>::map_or_else(
    &v25,
    &v17,
    v10,
    core::fmt::num::imp::<impl core::fmt::Display for i16>::fmt,
    v11,
    v12);
  *(_OWORD *)v24 = v25;
  *(_QWORD *)&v24[16] = v26;
  uucore::features::utmpx::Utmpx::tty_device(&v21, a2);
  v13 = DWORD2(v21);
  v14 = (int)v22;
  uu_who::platform::unix::time_string((__int64)&v17, a2);
  uu_who::platform::unix::Who::print_line(
    a1,
    1,
    0,
    32,
    v13,
    v14,
    v18,
    1uLL,
    *(__int128 *)&v28[8],
    *(__int128 *)&v27[8],
    *(__int128 *)&v24[8]);
  core::ptr::drop_in_place<alloc::string::String>(&v17);
  core::ptr::drop_in_place<alloc::string::String>(&v21);
  core::ptr::drop_in_place<alloc::string::String>(v24);
  core::ptr::drop_in_place<alloc::string::String>(v28);
  return core::ptr::drop_in_place<alloc::string::String>(v27);
}