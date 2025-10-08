__int64 __fastcall uu_ln::numbered_backup_path(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  int v6; // ebx
  __int64 result; // rax
  _OWORD *v8; // rcx
  __int64 v9; // [rsp+8h] [rbp-130h] BYREF
  __int64 v10; // [rsp+10h] [rbp-128h]
  __int128 v11; // [rsp+18h] [rbp-120h] BYREF
  __int64 v12; // [rsp+28h] [rbp-110h]
  _QWORD v13[2]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-F0h]
  __int64 v16; // [rsp+50h] [rbp-E8h]
  _QWORD dest[28]; // [rsp+58h] [rbp-E0h] BYREF

  v10 = a1;
  v9 = 1LL;
  while ( 1 )
  {
    v13[0] = &v9;
    v13[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    dest[0] = &off_F6218;
    dest[1] = 2LL;
    dest[4] = 0LL;
    dest[2] = v13;
    dest[3] = 1LL;
    core::option::Option<T>::map_or_else(v14, dest);
    uu_ln::simple_backup_path((__int64)&v11, a2, a3, v15, v16);
    core::ptr::drop_in_place<alloc::string::String>(v14);
    v5 = *((_QWORD *)&v11 + 1);
    std::fs::metadata(dest);
    v6 = dest[0];
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v5);
    if ( v6 == 2 )
      break;
    ++v9;
    core::ptr::drop_in_place<std::path::PathBuf>(&v11);
  }
  result = v12;
  v8 = (_OWORD *)v10;
  *(_QWORD *)(v10 + 16) = v12;
  *v8 = v11;
  return result;
}