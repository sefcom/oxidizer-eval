__int64 __fastcall uu_ln::relative_path(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD v12[3]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF

  uucore::features::fs::canonicalize(v12);
  if ( __OFSUB__(0LL, v12[0]) )
  {
    result = core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(v12, a2);
LABEL_6:
    a1[1] = a2;
    a1[2] = a3;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v10 = std::path::Path::parent(a4, a5);
  if ( !v10 )
    core::option::unwrap_failed(&off_F60F8);
  v11 = v10;
  uucore::features::fs::canonicalize(v13);
  if ( v13[0] == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(v13, v11);
    result = core::ptr::drop_in_place<std::path::PathBuf>(v12);
    goto LABEL_6;
  }
  return uucore::features::fs::make_path_relative_to(a1, v12, v13);
}