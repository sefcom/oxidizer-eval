char __fastcall uu_tail::paths::path_is_tailable(__int64 a1, __int64 a2)
{
  char is_file; // cl
  char result; // al
  int v4; // ebp
  _DWORD dest[52]; // [rsp+8h] [rbp-D0h] BYREF

  is_file = std::path::Path::is_file(a1, a2);
  result = 1;
  if ( !is_file )
  {
    std::fs::metadata(dest);
    v4 = dest[0];
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest);
    if ( v4 == 2 )
    {
      return 0;
    }
    else
    {
      std::fs::metadata(dest);
      return core::result::Result<T,E>::is_ok_and(dest, a1);
    }
  }
  return result;
}