__int64 __fastcall uu_realpath::canonicalize_relative(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v11; // [rsp+10h] [rbp-48h]
  __int64 v12; // [rsp+18h] [rbp-40h] BYREF
  char v13; // [rsp+20h] [rbp-38h]

  uucore::features::fs::canonicalize(&v9);
  v5 = v9;
  v6 = v10;
  result = -v9;
  if ( __OFSUB__(-v9, 1LL) )
  {
    a1[1] = v10;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v8 = v11;
  if ( a4 == 1 )
  {
    result = std::path::Path::is_dir(v10, v11);
    if ( !(_BYTE)result )
    {
      std::fs::read_dir(&v9, v6, v8);
      if ( (_BYTE)v10 == 2 )
      {
        a1[1] = v9;
        *a1 = 0x8000000000000000LL;
        return core::ptr::drop_in_place<std::path::PathBuf>(v5, v6);
      }
      v12 = v9;
      v13 = v10;
      result = core::ptr::drop_in_place<std::fs::ReadDir>(&v12);
    }
  }
  *a1 = v5;
  a1[1] = v6;
  a1[2] = v8;
  return result;
}