__int64 uu_tail::platform::unix::get_errno()
{
  unsigned __int64 v0; // rbx
  unsigned int v1; // ebp
  _BYTE v3[4]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+4h] [rbp-24h]

  v0 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
  std::io::error::repr_bitpacked::decode_repr(v3, v0);
  if ( v3[0] )
    core::option::unwrap_failed(&off_1BC368);
  v1 = v4;
  core::ptr::drop_in_place<std::io::error::Error>(v0);
  return v1;
}
