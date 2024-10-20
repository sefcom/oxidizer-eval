_QWORD *__fastcall uu_pr::open::{{closure}}(_QWORD *a1, const void *a2, size_t a3, __int64 a4)
{
  __int64 v6; // r13
  void *v7; // rbp
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  void *dest; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h]

  v12 = a4;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, a3, 0LL);
  v6 = v10;
  if ( v9 )
    alloc::raw_vec::handle_error(v10, dest);
  v7 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest, 1LL, 1LL, a3);
  memcpy(v7, a2, a3);
  *a1 = 0x8000000000000004LL;
  a1[1] = v6;
  a1[2] = v7;
  a1[3] = a3;
  std::io::error::repr_bitpacked::decode_repr(&v9, a4);
  if ( (unsigned __int8)v9 >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v10);
  return a1;
}
