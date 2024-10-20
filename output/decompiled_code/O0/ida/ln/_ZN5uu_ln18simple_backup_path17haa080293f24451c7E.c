_OWORD *__fastcall uu_ln::simple_backup_path(__int64 a1, __int64 a2, __int64 a3, const void *a4, signed __int64 a5)
{
  void *v7; // r14
  size_t v8; // r12
  char *v9; // rbp
  char *v10; // r13
  char *v11; // r13
  _OWORD *result; // rax
  __int128 v13; // [rsp+0h] [rbp-68h] BYREF
  size_t v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h] BYREF
  void *src; // [rsp+20h] [rbp-48h]
  size_t n; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]

  std::sys::os_str::bytes::Slice::to_str(&v15);
  if ( v15 || (v7 = src) == 0LL )
    core::option::unwrap_failed(&off_117B00);
  v18 = a1;
  v8 = n;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v15, n, 0LL);
  v9 = (char *)src;
  if ( v15 )
    alloc::raw_vec::handle_error(src, n);
  v10 = (char *)n;
  core::intrinsics::copy_nonoverlapping::precondition_check(v7, n, 1LL, 1LL, v8);
  memcpy(v10, v7, v8);
  *(_QWORD *)&v13 = v9;
  *((_QWORD *)&v13 + 1) = v10;
  v14 = v8;
  if ( a5 < 0 )
    core::panicking::panic_nounwind(anon_3d23f3f259898d4820b41200aa153f2c_22_llvm_14064086299070896970, 71LL);
  if ( !a4 )
    core::panicking::panic_nounwind(anon_df683e64b8c9978a64b8f4e8e668b506_19_llvm_10436422061628228747, 162LL);
  if ( (unsigned __int64)&v9[-v8] < a5 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v13, v8, a5);
    v10 = (char *)*((_QWORD *)&v13 + 1);
    v8 = v14;
  }
  v11 = &v10[v8];
  core::intrinsics::copy_nonoverlapping::precondition_check(a4, v11, 1LL, 1LL, a5);
  memcpy(v11, a4, a5);
  v14 += a5;
  result = (_OWORD *)v18;
  *(_QWORD *)(v18 + 16) = v14;
  *result = v13;
  return result;
}
