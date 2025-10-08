char uu_rm::is_readable()
{
  int dest; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v2; // [rsp+10h] [rbp-A8h]
  char v3; // [rsp+41h] [rbp-77h]

  std::fs::metadata(&dest);
  if ( dest != 2 )
    return v3 & 1;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v2);
  return 0;
}