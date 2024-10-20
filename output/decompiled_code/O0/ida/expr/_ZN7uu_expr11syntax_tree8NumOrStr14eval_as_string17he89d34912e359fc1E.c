__int64 __fastcall uu_expr::syntax_tree::NumOrStr::eval_as_string(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  char v5; // [rsp+7h] [rbp-81h] BYREF
  __int128 v6; // [rsp+8h] [rbp-80h] BYREF
  __int64 v7; // [rsp+18h] [rbp-70h]
  __int128 v8; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int128 *v13; // [rsp+60h] [rbp-28h]
  __int64 (__fastcall **v14)(); // [rsp+68h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-18h]
  char v16; // [rsp+78h] [rbp-10h]

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v2 = *(__int128 *)((char *)a2 + 8);
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 3);
    *(_OWORD *)a1 = v2;
  }
  else
  {
    v3 = *a2;
    v9 = a2[1];
    v8 = v3;
    *(_QWORD *)&v6 = 0LL;
    *((_QWORD *)&v6 + 1) = 1LL;
    v7 = 0LL;
    v15 = 32LL;
    v16 = 3;
    v10 = 0LL;
    v12 = 0LL;
    v13 = &v6;
    v14 = &anon_2bac4deccfcbd46877edd8deb52f270f_13_llvm_5724965477395591734;
    if ( (unsigned __int8)<num_bigint::bigint::BigInt as core::fmt::Display>::fmt(&v8, &v10) )
      core::result::unwrap_failed(
        anon_2bac4deccfcbd46877edd8deb52f270f_15_llvm_5724965477395591734,
        55LL,
        &v5,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_2bac4deccfcbd46877edd8deb52f270f_17_llvm_5724965477395591734);
    *(_QWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v8);
    if ( v11 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v9, v10, v11, v12);
  }
  return a1;
}
