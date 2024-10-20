bool __fastcall uu_tail::platform::unix::supports_pid_checks(__pid_t a1)
{
  unsigned __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+0h] [rbp-18h] BYREF
  _BYTE v4[16]; // [rsp+8h] [rbp-10h] BYREF

  if ( !kill(a1, 0) )
    return 1;
  v1 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
  std::io::error::repr_bitpacked::decode_repr(v3, v1);
  if ( v3[0] >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v4);
  return HIDWORD(v1) != 38;
}
