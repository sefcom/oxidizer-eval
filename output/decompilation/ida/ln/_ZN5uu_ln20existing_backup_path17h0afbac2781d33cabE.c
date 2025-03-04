__int64 __fastcall uu_ln::existing_backup_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE v9[8]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v10; // [rsp+10h] [rbp-E8h]
  __int64 v11; // [rsp+18h] [rbp-E0h]
  __int64 v12; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D0h]

  uu_ln::simple_backup_path((__int64)v9, a2, a3, (__int64)::a1, 4LL);
  std::fs::metadata(&v12, v10, v11);
  if ( v12 == 2 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v13);
    uu_ln::simple_backup_path(a1, a2, a3, a4, a5);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v12, v13);
    uu_ln::numbered_backup_path(a1, a2, a3);
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(v9);
}
