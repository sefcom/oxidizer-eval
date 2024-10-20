__int64 *__fastcall uu_pr::build_options::{{closure}}(__int64 *a1, __int64 a2)
{
  void *v2; // r14
  __int64 v3; // r15
  unsigned __int64 v4; // rdx
  int v5; // eax
  const void *v6; // r15
  size_t v7; // r14
  __int64 v8; // r12
  void *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  char v13; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v14; // [rsp+10h] [rbp-88h] BYREF
  __int64 v15; // [rsp+18h] [rbp-80h]
  void *dest; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  int v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+44h] [rbp-54h]
  char v22; // [rsp+48h] [rbp-50h]
  __int16 v23; // [rsp+50h] [rbp-48h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h]
  unsigned __int64 v26; // [rsp+68h] [rbp-30h]

  v2 = *(void **)(a2 + 8);
  if ( !v2 || (v3 = *(_QWORD *)(a2 + 16), v3 < 0) )
    core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
  LODWORD(v14) = 0;
  core::char::methods::encode_utf8_raw(58LL, &v14, 4LL);
  if ( v4 >= 0x100 )
    core::result::unwrap_failed(
      "char len should be less than 255backreferences are not supported\x01",
      32LL,
      &v13,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
  v5 = v14;
  v14 = 0LL;
  v15 = v3;
  dest = v2;
  v17 = v3;
  v18 = 0LL;
  v19 = v3;
  v20 = v5;
  v21 = 58;
  v22 = v4;
  v23 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24, &v14);
  if ( !v25 || (v25 & 7) != 0 || v26 >> 59 )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( !v26 )
    core::panicking::panic_bounds_check(0LL, 0LL, &anon_7c75ec29d226220b36fc1f3bbd3b01ef_141_llvm_17389174869910011146);
  v6 = *(const void **)v25;
  v7 = *(_QWORD *)(v25 + 8);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v14, v7, 0LL);
  v8 = v15;
  if ( v14 )
    alloc::raw_vec::handle_error(v15, dest);
  v9 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v6, dest, 1LL, 1LL, v7);
  memcpy(v9, v6, v7);
  *a1 = v8;
  a1[1] = (__int64)v9;
  a1[2] = v7;
  if ( v24 )
  {
    if ( v24 >> 60 )
      core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
    v10 = 16 * v24;
    v14 = v25;
    v15 = 8LL;
    v11 = 16LL;
  }
  else
  {
    v11 = 8LL;
    v10 = 0LL;
  }
  *(__int64 *)((char *)&v14 + v11) = v10;
  if ( v15 && dest )
    _rust_dealloc(v14, dest, v15);
  return a1;
}
