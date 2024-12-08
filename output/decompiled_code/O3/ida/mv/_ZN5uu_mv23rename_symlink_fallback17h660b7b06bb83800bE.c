__int64 __fastcall uu_mv::rename_symlink_fallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  std::fs::read_link(&v7, a1, a2);
  result = v8;
  if ( v7 != 0x8000000000000000LL )
  {
    v10[0] = v7;
    v10[1] = v8;
    v10[2] = v9;
    result = std::os::unix::fs::symlink(v10, a3, a4);
    if ( !result )
      return std::fs::remove_file(a1, a2);
  }
  return result;
}
