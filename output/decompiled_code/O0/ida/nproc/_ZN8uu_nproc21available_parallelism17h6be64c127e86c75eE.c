__int64 uu_nproc::available_parallelism()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 result; // rax
  _BYTE v3[8]; // [rsp+8h] [rbp-10h] BYREF
  _BYTE v4[8]; // [rsp+10h] [rbp-8h] BYREF

  v1 = std::thread::available_parallelism();
  result = v0;
  if ( v1 )
  {
    std::io::error::repr_bitpacked::decode_repr(v3, v0);
    if ( v3[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v4);
    return 1LL;
  }
  return result;
}
