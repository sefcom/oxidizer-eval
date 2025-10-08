char __fastcall uu_rmdir::dir_not_empty(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // [rsp+4h] [rbp-64h] BYREF
  __int64 v6; // [rsp+8h] [rbp-60h] BYREF
  char v7; // [rsp+10h] [rbp-58h]
  __int64 v8; // [rsp+18h] [rbp-50h] BYREF
  char v9; // [rsp+20h] [rbp-48h]
  _QWORD v10[8]; // [rsp+28h] [rbp-40h] BYREF

  std::io::error::repr_bitpacked::decode_repr(v10, *a1);
  switch ( LOBYTE(v10[0]) )
  {
    case 0:
      v5 = HIDWORD(v10[0]);
      if ( (unsigned __int8)<i32 as core::slice::cmp::SliceContains>::slice_contains(&v5, "'", 2LL) )
        return 1;
      if ( !(unsigned __int8)<i32 as core::slice::cmp::SliceContains>::slice_contains(&v5, &unk_179C0, 4LL) )
        return 0;
      std::fs::read_dir(&v6, a2, a3);
      if ( v7 == 2 )
        goto LABEL_7;
      v8 = v6;
      v9 = v7;
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v10, &v8);
      if ( v10[0] )
      {
        core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(v10);
        core::ptr::drop_in_place<std::fs::ReadDir>(&v8);
        if ( v7 == 2 )
          core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v6);
        return 1;
      }
      else
      {
        core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(v10);
        core::ptr::drop_in_place<std::fs::ReadDir>(&v8);
        if ( v7 == 2 )
LABEL_7:
          core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v6);
        return 0;
      }
    case 1:
    case 2:
    case 3:
      return 0;
  }
}