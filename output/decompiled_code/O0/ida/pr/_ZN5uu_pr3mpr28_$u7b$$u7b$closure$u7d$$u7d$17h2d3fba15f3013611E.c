_QWORD *__fastcall uu_pr::mpr::{{closure}}(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r12
  __int64 v6; // r13
  void *pages; // rax
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+18h] [rbp-C0h]
  __int128 v12; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-A8h]
  __int64 v14; // [rsp+40h] [rbp-98h]
  __int64 v15; // [rsp+48h] [rbp-90h]
  _OWORD v16[2]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-60h] BYREF
  __int128 v18; // [rsp+88h] [rbp-50h]
  __int64 v19; // [rsp+98h] [rbp-40h]
  __int64 v20; // [rsp+A0h] [rbp-38h]
  __int64 v21; // [rsp+A8h] [rbp-30h]

  uu_pr::open(&v12, *a4, a4[1]);
  if ( (_QWORD)v12 != 0x8000000000000005LL )
  {
    v16[1] = v13;
    v16[0] = v12;
    core::result::unwrap_failed(
      anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
      43LL,
      v16,
      &anon_7c75ec29d226220b36fc1f3bbd3b01ef_2_llvm_17389174869910011146,
      &anon_7c75ec29d226220b36fc1f3bbd3b01ef_168_llvm_17389174869910011146);
  }
  v5 = *((_QWORD *)&v12 + 1);
  v6 = v13;
  v14 = *((_QWORD *)&v12 + 1);
  v15 = v13;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v10, 0x10000LL, 0LL);
  if ( v10[0] )
    alloc::raw_vec::handle_error(v10[1], v11);
  if ( !v11 )
    core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
  v18 = 0LL;
  v19 = 0LL;
  v17[0] = v11;
  v17[1] = 0x10000LL;
  v20 = v5;
  v21 = v6;
  pages = uu_pr::read_stream_and_create_pages(*(__int128 **)a2, (__int64)v17, a3);
  v8 = **(_QWORD **)(a2 + 8);
  *a1 = 0LL;
  a1[4] = 0LL;
  a1[8] = pages;
  a1[9] = &off_2C8078;
  a1[10] = v8;
  return a1;
}
