_QWORD *__fastcall uu_tail::args::Settings::from::{{closure}}(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // r15
  void *v4; // r12
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  void *v8; // [rsp+10h] [rbp-28h]

  v1 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 48LL);
  v2 = (_QWORD *)v1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v6, 14LL, 0LL);
  v3 = v7;
  if ( v6 )
    alloc::raw_vec::handle_error(v7, v8);
  v4 = v8;
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &anon_ab742581333cf5e7f01380032d71b570_108_llvm_1562610066123874583,
    v8,
    1LL,
    1LL,
    14LL);
  qmemcpy(v4, "standard input", 14);
  if ( ((unsigned __int8)v2 & 7) != 0 )
    core::panicking::panic_misaligned_pointer_dereference(
      8LL,
      v2,
      &anon_ab742581333cf5e7f01380032d71b570_59_llvm_1562610066123874583);
  *v2 = v3;
  v2[1] = v4;
  v2[2] = 14LL;
  v2[3] = 0x8000000000000000LL;
  *a1 = 1LL;
  a1[1] = v2;
  a1[2] = 1LL;
  return a1;
}
