__int64 __fastcall uu_tail::paths::path_is_tailable()
{
  unsigned int v0; // ebx
  int v2; // eax
  int v3; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v4; // [rsp+8h] [rbp-C0h]
  int v5; // [rsp+38h] [rbp-90h]

  LOBYTE(v0) = 1;
  if ( !(unsigned __int8)std::path::Path::is_file() )
  {
    std::sys::pal::unix::fs::stat(&v3);
    if ( v3 == 2 || (std::sys::pal::unix::fs::stat(&v3), v3 == 2) )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v4);
      return 0;
    }
    else
    {
      v2 = v5 & 0xF000;
      if ( v2 != 0x2000 && v2 != 0x8000 )
        LOBYTE(v0) = v2 == 4096;
    }
  }
  return v0;
}
