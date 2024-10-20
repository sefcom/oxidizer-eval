__int64 __fastcall uu_ls::display_symlink_count(__int64 a1, __int64 a2)
{
  char v3; // [rsp+Fh] [rbp-69h] BYREF
  __int128 v4; // [rsp+10h] [rbp-68h] BYREF
  __int64 v5; // [rsp+20h] [rbp-58h]
  __int64 v6; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v7[7]; // [rsp+30h] [rbp-48h] BYREF
  char v8; // [rsp+68h] [rbp-10h]

  v6 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)&v4 = 0LL;
  *((_QWORD *)&v4 + 1) = 1LL;
  v5 = 0LL;
  v7[6] = 32LL;
  v8 = 3;
  v7[0] = 0LL;
  v7[2] = 0LL;
  v7[4] = &v4;
  v7[5] = &anon_af4f526f2bb93cc55be513d58d93e125_7_llvm_17079165128840404064;
  if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v6, v7) )
    core::result::unwrap_failed(
      anon_af4f526f2bb93cc55be513d58d93e125_9_llvm_17079165128840404064,
      55LL,
      &v3,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_af4f526f2bb93cc55be513d58d93e125_11_llvm_17079165128840404064);
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  return a1;
}
