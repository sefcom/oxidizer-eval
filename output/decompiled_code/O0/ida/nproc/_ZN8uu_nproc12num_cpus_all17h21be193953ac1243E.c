__int64 uu_nproc::num_cpus_all()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+8h] [rbp-10h] BYREF
  _BYTE v6[8]; // [rsp+10h] [rbp-8h] BYREF

  v0 = sysconf(83);
  if ( v0 == 1 )
  {
    v2 = std::thread::available_parallelism();
    result = v1;
    if ( v2 )
    {
      std::io::error::repr_bitpacked::decode_repr(v5, v1);
      if ( v5[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v6);
      return 1LL;
    }
  }
  else
  {
    v4 = 1LL;
    if ( v0 > 1 )
      return v0;
    return v4;
  }
  return result;
}
