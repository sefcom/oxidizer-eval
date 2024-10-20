_QWORD *__fastcall uu_tail::paths::Input::from(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  void *v6; // rbp
  size_t v7; // r12
  void *v9; // rbx
  unsigned __int64 v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  void *dest; // [rsp+18h] [rbp-60h]
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h] BYREF
  void *src; // [rsp+30h] [rbp-48h]
  size_t n; // [rsp+38h] [rbp-40h] BYREF
  void *v17; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    goto LABEL_15;
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 < 0 )
    goto LABEL_15;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a2 + 8),
                          *(_QWORD *)(a2 + 16),
                          anon_ab742581333cf5e7f01380032d71b570_105_llvm_1562610066123874583,
                          1LL)
    || (std::sys::os_str::bytes::Slice::to_owned(&v10, v2, v3),
        v4 = v10,
        v13 = v11,
        v17 = dest,
        v10 == 0x8000000000000000LL) )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v10, 14LL, 0LL);
    v4 = 0x8000000000000000LL;
    v5 = v11;
    if ( v10 )
      alloc::raw_vec::handle_error(v11, dest);
    v6 = dest;
    v7 = 14LL;
    core::intrinsics::copy_nonoverlapping::precondition_check(
      &anon_ab742581333cf5e7f01380032d71b570_108_llvm_1562610066123874583,
      dest,
      1LL,
      1LL,
      14LL);
    qmemcpy(v6, "standard input", 14);
    goto LABEL_7;
  }
  std::sys::os_str::bytes::Slice::to_string_lossy(&v14);
  v9 = src;
  v7 = n;
  if ( v14 != 0x8000000000000000LL && (!src || (n & 0x8000000000000000LL) != 0LL) )
LABEL_15:
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v10, n, 0LL);
  v5 = v11;
  if ( v10 )
    alloc::raw_vec::handle_error(v11, dest);
  v6 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v9, dest, 1LL, 1LL, v7);
  memcpy(v6, v9, v7);
  if ( v14 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v14);
    if ( v11 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v10, v11, dest);
  }
LABEL_7:
  a1[3] = v4;
  a1[4] = v13;
  a1[5] = v17;
  *a1 = v5;
  a1[1] = v6;
  a1[2] = v7;
  return a1;
}
