__int64 __fastcall uu_ls::cached_uid2usr::{{closure}}::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // [rsp+7h] [rbp-71h] BYREF
  __int128 v6; // [rsp+8h] [rbp-70h] BYREF
  __int64 v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int128 *v12; // [rsp+48h] [rbp-30h]
  __int64 (__fastcall **v13)(); // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  char v15; // [rsp+60h] [rbp-18h]

  v8 = a3;
  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 1LL;
  v7 = 0LL;
  v14 = 32LL;
  v15 = 3;
  v9 = 0LL;
  v11 = 0LL;
  v12 = &v6;
  v13 = &anon_af4f526f2bb93cc55be513d58d93e125_7_llvm_17079165128840404064;
  if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(a2, &v9) )
    core::result::unwrap_failed(
      anon_af4f526f2bb93cc55be513d58d93e125_9_llvm_17079165128840404064,
      55LL,
      &v5,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_af4f526f2bb93cc55be513d58d93e125_11_llvm_17079165128840404064);
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  std::io::error::repr_bitpacked::decode_repr(&v9, a3);
  if ( (unsigned __int8)v9 >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v10);
  return a1;
}
