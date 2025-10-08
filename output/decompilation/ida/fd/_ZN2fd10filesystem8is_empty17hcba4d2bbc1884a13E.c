__int64 __fastcall fd::filesystem::is_empty(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int16 v2; // dx
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  char v8; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  char v10; // [rsp+18h] [rbp-40h]
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (unsigned int)a1;
  if ( !fd::dir_entry::DirEntry::file_type(a1) )
    goto LABEL_8;
  v3 = v2 & 0xF000;
  if ( __OFSUB__(-(__int16)v3, 1) )
  {
    v5 = fd::dir_entry::DirEntry::metadata((__int64)a1);
    if ( v5 )
    {
      LOBYTE(v1) = *(_QWORD *)(v5 + 80) == 0LL;
      goto LABEL_9;
    }
LABEL_8:
    v1 = 0;
    goto LABEL_9;
  }
  if ( v3 != 0x4000 )
    goto LABEL_8;
  v4 = fd::dir_entry::DirEntry::path((__int64)a1);
  std::fs::read_dir(&v7, v4);
  if ( v8 == 2 )
  {
    v1 = 0;
LABEL_11:
    core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v7);
    goto LABEL_9;
  }
  v9 = v7;
  v10 = v8;
  <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v11, &v9);
  v1 = v11[0];
  core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(v11);
  core::ptr::drop_in_place<std::fs::ReadDir>(&v9);
  LOBYTE(v1) = v1 ^ 1;
  if ( v8 == 2 )
    goto LABEL_11;
LABEL_9:
  LOBYTE(v1) = v1 & 1;
  return v1;
}