__int64 uu_tail::platform::unix::get_errno()
{
  unsigned int v0; // ebx
  unsigned __int64 v2; // [rsp+8h] [rbp-20h] BYREF
  _BYTE v3[4]; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+14h] [rbp-14h]

  v2 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
  std::io::error::repr_bitpacked::decode_repr(v3);
  if ( v3[0] )
    core::option::unwrap_failed(&off_173968);
  v0 = v4;
  core::ptr::drop_in_place<std::io::error::Error>(&v2);
  return v0;
}