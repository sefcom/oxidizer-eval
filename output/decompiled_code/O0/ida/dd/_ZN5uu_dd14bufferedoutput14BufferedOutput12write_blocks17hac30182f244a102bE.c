        unsigned __int64 a4)
{
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rdx
  signed __int64 v11; // rbp
  char *v12; // r12
  signed __int64 v13; // r14
  __int64 v14; // rbx
  void *v15; // rbx
  signed __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 *result; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  void *v21; // rbx
  __int128 v22; // [rsp+10h] [rbp-88h]
  __int128 v23; // [rsp+20h] [rbp-78h]
  __int64 v24[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v25; // [rsp+40h] [rbp-58h]
  __int128 v26; // [rsp+50h] [rbp-48h]

  v4 = a2[2];
  v5 = __CFADD__(a4, v4);
  v6 = a4 + v4;
  if ( v5 )
    core::panicking::panic_const::panic_const_add_overflow(
      &anon_133ddf28914458581e1f74587f6c4456_19_llvm_5851302437860897088,
      a2,
      a3,
      a4);
  v8 = *(_QWORD *)(a2[5] + 120LL);
  if ( !v8 )
    core::panicking::panic_const::panic_const_rem_by_zero(&anon_133ddf28914458581e1f74587f6c4456_20_llvm_5851302437860897088);
  if ( (v8 | v6) >> 32 )
    v10 = v6 % v8;
  else
    v10 = (unsigned int)v6 % (unsigned int)v8;
  v11 = 0LL;
  if ( a4 >= v10 )
    v11 = a4 - v10;
  core::slice::raw::from_raw_parts::precondition_check(a3, 1LL, 1LL, v11);
  v12 = &a3[v11];
  v13 = a4 - v11;
  core::slice::raw::from_raw_parts::precondition_check(&a3[v11], 1LL, 1LL, v13);
  if ( v11 < 0 )
    goto LABEL_22;
  core::slice::raw::from_raw_parts::precondition_check(a3, 1LL, 1LL, v11);
  v14 = a2[2];
  if ( *a2 - v14 < (unsigned __int64)v11 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v11);
    v14 = a2[2];
  }
  v15 = (void *)(a2[1] + v14);
  core::intrinsics::copy_nonoverlapping::precondition_check(a3, v15, 1LL, 1LL, v11);
  memcpy(v15, a3, v11);
  v16 = a2[2] + v11;
  a2[2] = v16;
  v17 = a2[1];
  if ( !v17 || v16 < 0 )
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  uu_dd::Output::write_blocks(v24, (__int64)(a2 + 3), v17, v16);
  if ( v24[0] )
  {
    result = (__int64 *)a1;
    *(_QWORD *)(a1 + 8) = v24[1];
    v19 = 1LL;
    goto LABEL_21;
  }
  v23 = v26;
  v22 = v25;
  if ( !a2[1] || (__int64)a2[2] < 0 )
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
  a2[2] = 0LL;
  if ( v13 < 0 )
LABEL_22:
    core::panicking::panic_nounwind(anon_9b87b42699a6e8db798014e3917c8532_16_llvm_5650560785558774950, 71LL);
  core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL, v13);
  v20 = a2[2];
  if ( *a2 - v20 < (unsigned __int64)v13 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v13);
    v20 = a2[2];
  }
  v21 = (void *)(a2[1] + v20);
  core::intrinsics::copy_nonoverlapping::precondition_check(v12, v21, 1LL, 1LL, v13);
  memcpy(v21, v12, v13);
  a2[2] += v13;
  result = (__int64 *)a1;
  *(_OWORD *)(a1 + 32) = v23;
  *(_OWORD *)(a1 + 16) = v22;
  v19 = 0LL;
LABEL_21:
  *result = v19;
  return result;
}
