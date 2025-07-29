__int64 __fastcall FakeCrypt::fileops::encrypt_directory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-120h] BYREF
  char v8; // [rsp+10h] [rbp-118h]
  _BYTE v9[8]; // [rsp+18h] [rbp-110h] BYREF
  __int64 v10; // [rsp+20h] [rbp-108h]
  __int64 v11; // [rsp+28h] [rbp-100h]
  _OWORD v12[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-D8h]
  _OWORD v14[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+80h] [rbp-A8h]
  _QWORD v16[13]; // [rsp+88h] [rbp-A0h] BYREF
  char v17; // [rsp+F0h] [rbp-38h]

  std::fs::read_dir(&v7, a1, a2);
  if ( v8 == 2 )
    return core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v7);
  v16[0] = 0LL;
  v16[6] = 0LL;
  v16[12] = v7;
  v17 = v8;
  while ( 1 )
  {
    <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(v14, v16);
    if ( !*(_QWORD *)&v14[0] )
      break;
    v13 = v15;
    v12[1] = v14[1];
    v12[0] = v14[0];
    std::fs::DirEntry::path(v9, v12);
    if ( (unsigned __int8)std::path::Path::is_dir(v10, v11) )
      FakeCrypt::fileops::encrypt_directory(v10, v11, a3, a4);
    else
      FakeCrypt::fileops::encrypt_file(v10, v11);
    core::ptr::drop_in_place<std::path::PathBuf>(v9);
    core::ptr::drop_in_place<std::fs::DirEntry>(v12);
  }
  result = core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::fs::ReadDir>>(v16);
  if ( v8 == 2 )
    return core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v7);
  return result;
}