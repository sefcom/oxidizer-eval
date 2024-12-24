__int64 __fastcall uu_cp::file_or_link_exists(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _DWORD v4[48]; // [rsp+8h] [rbp-C0h] BYREF

  std::fs::symlink_metadata(v4, a1, a2);
  LOBYTE(v2) = v4[0] != 2;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v4);
  return v2;
}
