__int64 __fastcall uu_expr::syntax_tree::NumOrStr::eval_as_bigint(__int64 a1, __int128 *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v8; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h] BYREF
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  _OWORD v13[3]; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v8 = *(__int128 *)((char *)a2 + 8);
    v2 = *((_QWORD *)a2 + 3);
    v9 = v2;
    if ( !*((_QWORD *)&v8 + 1) || v2 < 0 )
      core::panicking::panic_nounwind(anon_2bac4deccfcbd46877edd8deb52f270f_29_llvm_5724965477395591734, 162LL);
    num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(
      v13,
      *((_QWORD *)&v8 + 1),
      v2,
      10LL);
    v3 = (_QWORD *)(a1 + 8);
    if ( *(_QWORD *)&v13[0] == 0x8000000000000000LL )
    {
      *v3 = 2LL;
      v4 = 1LL;
    }
    else
    {
      v6 = v13[0];
      *(_OWORD *)(a1 + 24) = v13[1];
      *(_OWORD *)v3 = v6;
      v4 = 0LL;
    }
    *(_QWORD *)a1 = v4;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v8);
    if ( v11 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v9, v10, v11, v12);
  }
  else
  {
    v5 = *a2;
    *(_OWORD *)(a1 + 24) = a2[1];
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 0LL;
  }
  return a1;
}
