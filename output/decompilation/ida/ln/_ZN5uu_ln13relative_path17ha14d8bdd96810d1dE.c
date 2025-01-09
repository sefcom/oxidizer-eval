__int64 __fastcall uu_ln::relative_path(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-C8h]
  __int128 v13; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-B0h]
  __int128 v15; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-98h]
  __int128 v17; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18; // [rsp+60h] [rbp-78h]
  __int128 v19; // [rsp+70h] [rbp-68h] BYREF
  __int64 v20; // [rsp+80h] [rbp-58h]
  __int128 v21; // [rsp+90h] [rbp-48h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-38h]

  uucore::features::fs::canonicalize(&v11, a2, a3, 2LL, 1LL);
  if ( (_QWORD)v11 == 0x8000000000000000LL )
  {
LABEL_2:
    result = core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v11);
LABEL_3:
    a1[1] = a2;
    a1[2] = a3;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v16 = v12;
  v15 = v11;
  v9 = std::path::Path::parent(a4, a5);
  if ( !v9 )
    core::option::unwrap_failed(&off_12D040);
  uucore::features::fs::canonicalize(&v13, v9, v10, 2LL, 1LL);
  if ( (_QWORD)v13 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v13);
    result = core::ptr::drop_in_place<std::path::PathBuf>(&v15);
    if ( (_QWORD)v11 != 0x8000000000000000LL )
      goto LABEL_3;
    goto LABEL_2;
  }
  v18 = v14;
  v17 = v13;
  v20 = v16;
  v19 = v15;
  uucore::features::fs::make_path_relative_to(&v21, &v19, &v17);
  result = v22;
  a1[2] = v22;
  *(_OWORD *)a1 = v21;
  if ( (_QWORD)v13 == 0x8000000000000000LL )
    result = core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v13);
  if ( (_QWORD)v11 == 0x8000000000000000LL )
    return core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v11);
  return result;
}
