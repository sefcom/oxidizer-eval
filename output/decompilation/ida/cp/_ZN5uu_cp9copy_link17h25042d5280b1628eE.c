__int64 __fastcall uu_cp::copy_link(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rax
  _QWORD v13[3]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h]

  std::fs::read_link(v13);
  result = v13[0];
  v10 = v13[1];
  if ( v13[0] == 0x8000000000000000LL )
  {
    *a1 = 0x8000000000000001LL;
    a1[1] = v10;
  }
  else
  {
    v14 = a6;
    v11 = v13[2];
    if ( ((unsigned __int8)std::path::Path::is_symlink(a4, a5) || (unsigned __int8)std::path::Path::is_file(a4, a5))
      && (v12 = std::fs::remove_file(a4, a5)) != 0 )
    {
      *a1 = 0x8000000000000001LL;
      a1[1] = v12;
    }
    else
    {
      uu_cp::symlink_file((__int64)a1, v10, v11, a4, a5, v14);
    }
    return core::ptr::drop_in_place<std::path::PathBuf>(v13);
  }
  return result;
}