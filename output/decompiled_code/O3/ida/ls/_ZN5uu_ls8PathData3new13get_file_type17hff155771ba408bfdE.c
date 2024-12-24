__int64 __fastcall uu_ls::PathData::new::get_file_type(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r14d
  unsigned int v6; // ebp
  int v8; // [rsp+8h] [rbp-E0h] BYREF
  _DWORD v9[14]; // [rsp+18h] [rbp-D0h] BYREF

  if ( a4 )
  {
    std::fs::metadata(v9, a2, a3);
    if ( v9[0] != 2 )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v9);
      return 1;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v9);
  }
  std::fs::DirEntry::file_type(&v8, a1);
  if ( v8 )
  {
    std::fs::symlink_metadata(v9, a2, a3);
    v5 = v9[0];
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v9);
    v6 = (v5 == 2) + 1;
  }
  else
  {
    v6 = 1;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::FileType,std::io::error::Error>>(&v8);
  return v6;
}
