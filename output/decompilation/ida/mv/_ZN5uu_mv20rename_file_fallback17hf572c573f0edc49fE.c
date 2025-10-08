__int64 __fastcall uu_mv::rename_file_fallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  _QWORD v9[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v11[8]; // [rsp+28h] [rbp-40h] BYREF

  v9[0] = a1;
  v9[1] = a2;
  v10[0] = a3;
  v10[1] = a4;
  if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4) )
  {
    v6 = std::fs::remove_file(a3, a4);
    v11[0] = a3;
    v11[1] = a4;
    v11[2] = a1;
    v11[3] = a2;
    if ( v6 )
      return uu_mv::rename_file_fallback::{{closure}}(v11, v6);
  }
  if ( (std::fs::copy(a1, a2, a3, a4) & 1) != 0 )
    return v8;
  result = uucore::features::fsxattr::copy_xattrs(v9, v10);
  if ( !result )
    return std::fs::remove_file(a1, a2);
  return result;
}