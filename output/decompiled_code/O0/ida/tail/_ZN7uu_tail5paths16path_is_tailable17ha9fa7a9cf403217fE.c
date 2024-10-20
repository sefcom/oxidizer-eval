__int64 __fastcall uu_tail::paths::path_is_tailable()
{
  unsigned int v0; // ebx
  int v2; // eax
  __int64 v3; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD v4[6]; // [rsp+8h] [rbp-C0h] BYREF
  int v5; // [rsp+38h] [rbp-90h]

  LOBYTE(v0) = 1;
  if ( !(unsigned __int8)std::path::Path::is_file() )
  {
    std::sys::pal::unix::fs::stat(&v3);
    if ( v3 == 2 || (std::sys::pal::unix::fs::stat(&v3), v3 == 2) )
    {
      std::io::error::repr_bitpacked::decode_repr(&v3, v4[0]);
      if ( (unsigned __int8)v3 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v4);
      return 0;
    }
    v2 = v5 & 0xF000;
    if ( v2 != 4096 && v2 != 0x2000 && v2 != 0x8000 )
      return 0;
  }
  return v0;
}
