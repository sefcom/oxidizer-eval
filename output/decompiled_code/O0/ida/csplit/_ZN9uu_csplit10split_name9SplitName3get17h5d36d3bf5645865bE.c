_QWORD *__fastcall uu_csplit::split_name::SplitName::get(_QWORD *a1, __int64 a2, __int64 a3)
{
  const void *v3; // r13
  signed __int64 v4; // r12
  __int64 v6; // rbp
  void *v7; // rbx
  __int64 v8; // rax
  void *v9; // r15
  size_t v10; // r14
  __int64 v11; // r12
  void *v12; // rbx
  _QWORD *v13; // r15
  __int64 v15; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+8h] [rbp-80h]
  void *dest; // [rsp+10h] [rbp-78h]
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  void *v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h] BYREF
  void *src; // [rsp+40h] [rbp-48h]
  size_t n; // [rsp+48h] [rbp-40h] BYREF
  _QWORD *v25; // [rsp+50h] [rbp-38h]

  v25 = a1;
  v3 = *(const void **)(a2 + 8);
  if ( !v3 || (v4 = *(_QWORD *)(a2 + 16), v4 < 0) )
    core::panicking::panic_nounwind(anon_965c7e9797bf363381d1deac3dc9c421_2_llvm_809249241883912370, 162LL);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v15, *(_QWORD *)(a2 + 16), 0LL);
  v6 = v16;
  if ( v15 )
    alloc::raw_vec::handle_error(v16, dest);
  v7 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v3, dest, 1LL, 1LL, v4);
  memcpy(v7, v3, v4);
  v18 = v6;
  v19 = v7;
  v20 = v4;
  v8 = uucore::features::format::Format<F>::fmt(a2 + 24, &v18, a3);
  if ( v8 )
  {
    v21 = v8;
    core::result::unwrap_failed(
      anon_bb214e635f3e52e586c02a5eeb538d7c_31_llvm_3235605871402522358,
      43LL,
      &v21,
      &anon_bb214e635f3e52e586c02a5eeb538d7c_30_llvm_3235605871402522358,
      &anon_bb214e635f3e52e586c02a5eeb538d7c_43_llvm_3235605871402522358);
  }
  if ( !v19 || v20 < 0 )
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  alloc::string::String::from_utf8_lossy(&v22);
  v9 = src;
  v10 = n;
  if ( v22 != 0x8000000000000000LL && (!src || (n & 0x8000000000000000LL) != 0LL) )
    core::panicking::panic_nounwind(anon_bb214e635f3e52e586c02a5eeb538d7c_28_llvm_3235605871402522358, 162LL);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v15, n, 0LL);
  v11 = v16;
  if ( v15 )
    alloc::raw_vec::handle_error(v16, dest);
  v12 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v9, dest, 1LL, 1LL, v10);
  memcpy(v12, v9, v10);
  v13 = v25;
  *v25 = v11;
  v13[1] = v12;
  v13[2] = v10;
  if ( v18 )
    _rust_dealloc(v19, v18, 1LL);
  if ( v22 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v15, &v22);
    if ( v16 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v15, v16, dest);
  }
  return v13;
}
