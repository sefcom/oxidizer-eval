_BYTE *__fastcall uu_df::filesystem::Filesystem::from_mount(
        _BYTE *dest,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char v8[152]; // [rsp+0h] [rbp-198h] BYREF
  _QWORD src[32]; // [rsp+98h] [rbp-100h] BYREF

  if ( uu_df::filesystem::is_over_mounted(a2, a3, a4) )
  {
    dest[8] = 0;
    *(_QWORD *)dest = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a5);
  }
  else
  {
    <uucore::features::fsext::MountInfo as core::clone::Clone>::clone(v8, a4);
    uu_df::filesystem::Filesystem::new(src, v8, a5);
    if ( __OFSUB__(0LL, src[0]) )
    {
      dest[8] = 2;
      *(_QWORD *)dest = 0x8000000000000000LL;
    }
    else
    {
      memcpy(dest, src, 0xE8uLL);
    }
  }
  return dest;
}