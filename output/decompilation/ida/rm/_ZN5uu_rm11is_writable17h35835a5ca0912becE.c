char uu_rm::is_writable()
{
  int dest; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v2; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v3; // [rsp+40h] [rbp-78h]

  std::fs::metadata(&dest);
  if ( dest != 2 )
    return v3 >> 7;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v2);
  return 0;
}