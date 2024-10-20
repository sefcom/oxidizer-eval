__int64 __fastcall uu_ls::sort_entries::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  unsigned __int8 v9; // bl
  void *v10; // r14
  size_t v11; // r15
  void *v12; // r12
  size_t v13; // r13
  __int64 v14; // rbp
  int v15; // r15d
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 result; // rax
  __int64 v19; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+8h] [rbp-A0h]
  __int64 v21; // [rsp+10h] [rbp-98h]
  __int64 v22; // [rsp+18h] [rbp-90h] BYREF
  __int64 v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+28h] [rbp-80h] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h] BYREF
  void *s1; // [rsp+50h] [rbp-58h]
  size_t n; // [rsp+58h] [rbp-50h] BYREF
  __int64 v31; // [rsp+60h] [rbp-48h] BYREF
  void *s2; // [rsp+68h] [rbp-40h]
  size_t v33[7]; // [rsp+70h] [rbp-38h] BYREF

  if ( !*(_QWORD *)(a2 + 32) || *(__int64 *)(a2 + 40) < 0 )
    goto LABEL_36;
  std::sys::os_str::bytes::Slice::to_string_lossy(&v22);
  v4 = v23;
  v5 = v24;
  if ( v22 != 0x8000000000000000LL )
    core::slice::raw::from_raw_parts::precondition_check(v23, 1LL, 1LL, v24);
  if ( !*(_QWORD *)(a3 + 32) || *(__int64 *)(a3 + 40) < 0 )
    goto LABEL_36;
  std::sys::os_str::bytes::Slice::to_string_lossy(&v25);
  v6 = v26;
  v7 = v27;
  if ( v25 != 0x8000000000000000LL )
    core::slice::raw::from_raw_parts::precondition_check(v26, 1LL, 1LL, v27);
  v8 = uucore::features::version_cmp::version_cmp(v4, v5, v6, v7);
  if ( !*(_QWORD *)(a2 + 32)
    || *(__int64 *)(a2 + 40) < 0
    || (v9 = v8, std::sys::os_str::bytes::Slice::to_string_lossy(&v28), !*(_QWORD *)(a3 + 32))
    || *(__int64 *)(a3 + 40) < 0 )
  {
LABEL_36:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  std::sys::os_str::bytes::Slice::to_string_lossy(&v31);
  v10 = s1;
  v11 = n;
  if ( v28 != 0x8000000000000000LL )
    core::slice::raw::from_raw_parts::precondition_check(s1, 1LL, 1LL, n);
  v12 = s2;
  v13 = v33[0];
  if ( v31 != 0x8000000000000000LL )
    core::slice::raw::from_raw_parts::precondition_check(s2, 1LL, 1LL, v33[0]);
  v14 = v11 - v13;
  if ( v11 < v13 )
    v13 = v11;
  v15 = memcmp(v10, v12, v13);
  if ( v31 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v31);
    if ( v20 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v33, v19, v20, v21);
  }
  if ( v28 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v28);
    if ( v20 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v19, v20, v21);
  }
  if ( v25 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v25);
    if ( v20 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v27, v19, v20, v21);
  }
  if ( v22 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v22);
    if ( v20 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v24, v19, v20, v21);
  }
  v16 = v15;
  if ( !v15 )
    v16 = v14;
  v17 = (unsigned __int8)((v16 >> 63) + (v16 > 0));
  result = v9;
  if ( !v9 )
    return v17;
  return result;
}
