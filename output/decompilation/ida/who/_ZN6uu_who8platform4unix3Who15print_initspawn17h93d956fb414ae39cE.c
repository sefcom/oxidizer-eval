__int64 __fastcall uu_who::platform::unix::Who::print_initspawn(int a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r12d
  int v11; // r13d
  int v13; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+78h] [rbp-90h] BYREF
  __int64 v16; // [rsp+88h] [rbp-80h]
  _BYTE v17[24]; // [rsp+90h] [rbp-78h] BYREF
  char **v18; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+B8h] [rbp-50h]
  __int64 v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]

  uucore::features::utmpx::Utmpx::terminal_suffix(&v15);
  *(_QWORD *)v17 = &v15;
  *(_QWORD *)&v17[8] = <alloc::string::String as core::fmt::Display>::fmt;
  v18 = &off_FEF78;
  *(_QWORD *)&v19 = 1LL;
  v21 = 0LL;
  *((_QWORD *)&v19 + 1) = v17;
  v20 = 1LL;
  core::option::Option<T>::map_or_else(v14, &v18, v2, v3, v4, v5);
  core::ptr::drop_in_place<alloc::string::String>(&v15);
  *(_OWORD *)v17 = *(_OWORD *)v14;
  *(_QWORD *)&v17[16] = *(_QWORD *)&v14[16];
  v13 = *(_DWORD *)(a2 + 4);
  *(_QWORD *)v14 = &v13;
  *(_QWORD *)&v14[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
  v18 = (char **)&unk_18A60;
  *(_QWORD *)&v19 = 1LL;
  v21 = 0LL;
  *((_QWORD *)&v19 + 1) = v14;
  v20 = 1LL;
  core::option::Option<T>::map_or_else(&v15, &v18, v6, v7, v8, v9);
  *(_OWORD *)v14 = v15;
  *(_QWORD *)&v14[16] = v16;
  uucore::features::utmpx::Utmpx::tty_device(&v15, a2);
  v10 = DWORD2(v15);
  v11 = v16;
  uu_who::platform::unix::time_string((__int64)&v18, a2);
  uu_who::platform::unix::Who::print_line(
    a1,
    1,
    0,
    32,
    v10,
    v11,
    v19,
    1uLL,
    *(__int128 *)&v14[8],
    *(__int128 *)&v17[8],
    1uLL);
  core::ptr::drop_in_place<alloc::string::String>(&v18);
  core::ptr::drop_in_place<alloc::string::String>(&v15);
  core::ptr::drop_in_place<alloc::string::String>(v14);
  return core::ptr::drop_in_place<alloc::string::String>(v17);
}