void __fastcall forc_debug::server::DapServer::log_test_results(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 v3; // r13
  char *v4; // rdx
  __int64 v5; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-E0h] BYREF
  void *v7; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+18h] [rbp-D0h]
  __int128 *v9; // [rsp+20h] [rbp-C8h]
  __int64 v10; // [rsp+28h] [rbp-C0h]
  __int64 v11; // [rsp+30h] [rbp-B8h]
  __int128 v12; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD *v13; // [rsp+50h] [rbp-98h]
  _QWORD v14[2]; // [rsp+58h] [rbp-90h] BYREF
  __int128 v15; // [rsp+68h] [rbp-80h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp-70h]
  __int64 (__fastcall *v17)(); // [rsp+80h] [rbp-68h]
  __int64 *v18; // [rsp+88h] [rbp-60h]
  __int64 (__fastcall *v19)(); // [rsp+90h] [rbp-58h]
  __int64 *v20; // [rsp+98h] [rbp-50h]
  __int64 (__fastcall *v21)(); // [rsp+A0h] [rbp-48h]
  __int128 v22[4]; // [rsp+A8h] [rbp-40h] BYREF

  if ( !a1[217] )
  {
    v1 = a1[213];
    v2 = a1[214];
    core::iter::traits::iterator::Iterator::collect(&v7, v1, v1 + 208 * v2);
    alloc::str::join_generic_copy(&v15, v8, v9);
    v13 = v16;
    v12 = v15;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v7);
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v1, v1 + 208 * v2);
    v3 = v2 - v5;
    v4 = aFailedok;
    if ( !v3 )
      v4 = &aFailedok[6];
    v14[0] = v4;
    v14[1] = 4LL * (v3 != 0) + 2;
    v6 = v3;
    *(_QWORD *)&v15 = &v12;
    *((_QWORD *)&v15 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v16 = v14;
    v17 = <&T as core::fmt::Display>::fmt;
    v18 = &v5;
    v19 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v20 = &v6;
    v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v7 = &unk_1F8CF40;
    v8 = 5LL;
    v11 = 0LL;
    v9 = &v15;
    v10 = 4LL;
    core::option::Option<T>::map_or_else(v22, 0LL, v4, &v7);
    forc_debug::server::DapServer::log(a1[311], v22);
    core::ptr::drop_in_place<alloc::string::String>(&v12);
  }
}