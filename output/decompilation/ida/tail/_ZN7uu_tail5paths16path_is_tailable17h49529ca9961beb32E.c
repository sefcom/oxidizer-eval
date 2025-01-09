char __fastcall uu_tail::paths::path_is_tailable(__int64 a1, __int64 a2)
{
  char is_file; // cl
  char result; // al
  __int64 v4; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+8h] [rbp-C0h]

  is_file = std::path::Path::is_file(a1, a2);
  result = 1;
  if ( !is_file )
  {
    std::fs::metadata(&v4, a1, a2);
    if ( v4 == 2 )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v5);
      return 0;
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v4, v5);
      std::fs::metadata(&v4, a1, a2);
      return core::result::Result<T,E>::map_or(&v4);
    }
  }
  return result;
}
