bool uu_dd::is_fifo()
{
  __int64 dest; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v2[6]; // [rsp+10h] [rbp-A8h] BYREF
  int v3; // [rsp+40h] [rbp-78h]

  std::sys::pal::unix::fs::stat(&dest);
  if ( dest != 2 )
    return (v3 & 0xF000) == 4096;
  std::io::error::repr_bitpacked::decode_repr(&dest, v2[0]);
  if ( (unsigned __int8)dest >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v2);
  return 0;
}
