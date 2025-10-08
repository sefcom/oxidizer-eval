__int64 __fastcall fd::filesystem::path_absolute_form(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r12
  __int128 v9; // [rsp+8h] [rbp-60h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]

  v4 = a2;
  if ( (unsigned __int8)std::path::Path::is_absolute(a2, a3) )
    return std::path::Path::to_path_buf(a1, a2, a3);
  v6 = std::path::Path::strip_prefix(a2, a3);
  v8 = v7;
  std::env::current_dir(&v9);
  if ( __OFSUB__(0LL, (_QWORD)v9) )
  {
    result = v10;
    *(_QWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
  }
  else
  {
    if ( v6 )
      v4 = v6;
    else
      v8 = a3;
    v12 = v10;
    v11 = v9;
    return fd::filesystem::path_absolute_form::{{closure}}(a1, v4, v8, &v11);
  }
  return result;
}