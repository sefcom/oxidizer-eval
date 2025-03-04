__int64 __fastcall uu_ln::numbered_backup_path(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _OWORD *v5; // rcx
  __int64 v6; // [rsp+0h] [rbp-138h] BYREF
  __int64 v7; // [rsp+8h] [rbp-130h]
  __int128 v8; // [rsp+10h] [rbp-128h] BYREF
  __int64 v9; // [rsp+20h] [rbp-118h]
  _QWORD v10[2]; // [rsp+28h] [rbp-110h] BYREF
  __int128 v11; // [rsp+38h] [rbp-100h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-F0h]
  __int128 v13; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD *v14; // [rsp+60h] [rbp-D8h]
  __int64 v15; // [rsp+68h] [rbp-D0h]
  __int64 v16; // [rsp+70h] [rbp-C8h]

  v7 = a1;
  v6 = 1LL;
  while ( 1 )
  {
    v10[0] = &v6;
    v10[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v13 = &off_12D0F0;
    *((_QWORD *)&v13 + 1) = 2LL;
    v16 = 0LL;
    v14 = v10;
    v15 = 1LL;
    core::option::Option<T>::map_or_else(&v11, &v13);
    v13 = v11;
    v14 = v12;
    uu_ln::simple_backup_path((__int64)&v8, a2, a3, *((__int64 *)&v11 + 1), (__int64)v12);
    core::ptr::drop_in_place<alloc::string::String>(&v13);
    std::fs::metadata(&v13, *((_QWORD *)&v8 + 1), v9);
    if ( (_QWORD)v13 == 2LL )
      break;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v13, *((_QWORD *)&v13 + 1));
    ++v6;
    core::ptr::drop_in_place<std::path::PathBuf>(&v8);
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, *((_QWORD *)&v13 + 1));
  result = v9;
  v5 = (_OWORD *)v7;
  *(_QWORD *)(v7 + 16) = v9;
  *v5 = v8;
  return result;
}
