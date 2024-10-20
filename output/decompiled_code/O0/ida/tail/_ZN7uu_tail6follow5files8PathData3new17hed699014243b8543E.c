        size_t a6)
{
  void *v10; // r15
  __int64 v12; // [rsp+8h] [rbp-70h]
  void *src; // [rsp+18h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  void *desta; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  v17 = a2;
  v18 = a3;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v14, a6, 0LL);
  src = a4;
  v12 = v15;
  if ( v14 )
    alloc::raw_vec::handle_error(v15, desta);
  v10 = desta;
  core::intrinsics::copy_nonoverlapping::precondition_check(a5, desta, 1LL, 1LL, a6);
  memcpy(v10, a5, a6);
  dest[25] = a2;
  dest[26] = a3;
  memcpy(dest, src, 0xB0uLL);
  dest[22] = v12;
  dest[23] = v10;
  dest[24] = a6;
  return dest;
}
