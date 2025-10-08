__int64 __fastcall uu_ls::PathData::new::get_file_type(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+0h] [rbp-C8h] BYREF

  if ( a4 )
  {
    std::fs::metadata(&v5);
    if ( v5 != 2 )
      goto LABEL_7;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v5, a2);
  }
  std::fs::DirEntry::file_type(&v5, a1);
  if ( (v5 & 1) == 0 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::FileType,std::io::error::Error>>(&v5);
    return 1LL;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::FileType,std::io::error::Error>>(&v5);
  std::fs::symlink_metadata(&v5);
  if ( v5 == 2 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v5, a2);
    return 2LL;
  }
LABEL_7:
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v5, a2);
  return 1LL;
}