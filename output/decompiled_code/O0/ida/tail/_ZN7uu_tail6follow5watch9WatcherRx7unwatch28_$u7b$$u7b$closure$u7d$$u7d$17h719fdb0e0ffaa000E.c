_OWORD *__fastcall uu_tail::follow::watch::WatcherRx::unwatch::{{closure}}(__int64 a1)
{
  _OWORD *v1; // rax
  __int128 v2; // xmm0
  _OWORD *v3; // rbx
  __int128 v5; // [rsp+8h] [rbp-90h] BYREF
  __int64 v6; // [rsp+18h] [rbp-80h]
  __int128 v7; // [rsp+20h] [rbp-78h] BYREF
  __int128 v8; // [rsp+30h] [rbp-68h]
  _QWORD v9[7]; // [rsp+48h] [rbp-50h] BYREF
  char v10; // [rsp+80h] [rbp-18h]

  *(_QWORD *)&v5 = 0LL;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6 = 0LL;
  v9[6] = 32LL;
  v10 = 3;
  v9[0] = 0LL;
  v9[2] = 0LL;
  v9[4] = &v5;
  v9[5] = &anon_05a4d4ca64bdea474ebd4b0eb3197a7a_7_llvm_11384070901547909942;
  if ( (unsigned __int8)<notify::error::Error as core::fmt::Display>::fmt(a1, v9) )
    core::result::unwrap_failed(
      anon_05a4d4ca64bdea474ebd4b0eb3197a7a_9_llvm_11384070901547909942,
      55LL,
      &v7,
      &anon_20ef18d13cf93ce582f7d0f9a5fb04d7_13_llvm_2907708705472026727,
      &anon_05a4d4ca64bdea474ebd4b0eb3197a7a_11_llvm_11384070901547909942);
  *(_QWORD *)&v8 = v6;
  v7 = v5;
  DWORD2(v8) = 1;
  v1 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v2 = v7;
  v1[1] = v8;
  *v1 = v2;
  v3 = v1;
  core::ptr::drop_in_place<notify::error::Error>(a1);
  return v3;
}
