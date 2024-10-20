__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // r12
  size_t v5; // r15
  __int64 v6; // r13
  void *v7; // rbp
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  void *dest; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h]

  v12 = a3;
  v4 = *(const void **)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v4, 1LL, 1LL, v5);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, v5, 0LL);
  v6 = v10;
  if ( v9 )
    alloc::raw_vec::handle_error(v10, dest);
  v7 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v4, dest, 1LL, 1LL, v5);
  memcpy(v7, v4, v5);
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v5;
  *(_BYTE *)a1 = 7;
  std::io::error::repr_bitpacked::decode_repr(&v9, a3);
  if ( (unsigned __int8)v9 >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v10);
  return a1;
}
