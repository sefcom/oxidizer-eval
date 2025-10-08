__int64 __fastcall uu_ln::existing_backup_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rsi
  int v10; // ebp
  _QWORD v12[2]; // [rsp+0h] [rbp-F8h] BYREF
  _DWORD dest[56]; // [rsp+18h] [rbp-E0h] BYREF

  uu_ln::simple_backup_path((__int64)v12, a2, a3, (__int64)::a1, 4LL);
  v9 = v12[1];
  std::fs::metadata(dest);
  v10 = dest[0];
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v9);
  if ( v10 == 2 )
    uu_ln::simple_backup_path(a1, a2, a3, a4, a5);
  else
    uu_ln::numbered_backup_path(a1, a2, a3);
  return core::ptr::drop_in_place<std::path::PathBuf>(v12);
}