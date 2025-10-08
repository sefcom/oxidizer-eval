__int64 __fastcall uu_cp::file_or_link_exists(__int64 a1)
{
  unsigned int v1; // ebp
  _DWORD dest[48]; // [rsp+8h] [rbp-C0h] BYREF

  std::fs::symlink_metadata(dest);
  LOBYTE(v1) = dest[0] != 2;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, a1);
  return v1;
}