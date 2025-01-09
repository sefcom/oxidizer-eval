__int64 __fastcall uu_realpath::canonicalize_relative(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+8h] [rbp-60h]
  __int64 v10; // [rsp+10h] [rbp-58h]
  __int64 v11; // [rsp+18h] [rbp-50h] BYREF
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  char v15; // [rsp+38h] [rbp-30h]

  uucore::features::fs::canonicalize(&v11);
  result = v11;
  v6 = v12;
  if ( v11 == 0x8000000000000000LL )
  {
    a1[1] = v12;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v7 = v13;
  v8 = v11;
  v9 = v12;
  v10 = v13;
  if ( a4 == 1 && !(unsigned __int8)std::path::Path::is_dir(v12, v13) )
  {
    std::fs::read_dir(&v11, v6, v7);
    if ( (_BYTE)v12 == 2 )
    {
      a1[1] = v11;
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<std::path::PathBuf>(&v8);
    }
    v14 = v11;
    v15 = v12;
    core::ptr::drop_in_place<std::fs::ReadDir>(&v14);
  }
  a1[2] = v10;
  *a1 = v8;
  result = v9;
  a1[1] = v9;
  return result;
}
