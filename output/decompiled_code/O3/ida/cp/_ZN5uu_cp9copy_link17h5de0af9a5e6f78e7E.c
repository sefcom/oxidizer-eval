_QWORD *__fastcall uu_cp::copy_link(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]

  std::fs::read_link(&v15);
  v9 = v16;
  if ( v15 == 0x8000000000000000LL )
  {
    *a1 = 2LL;
    a1[1] = v9;
  }
  else
  {
    v12 = v15;
    v13 = v16;
    v14 = v17;
    if ( ((unsigned __int8)std::path::Path::is_symlink(a4, a5) || (unsigned __int8)std::path::Path::is_file(a4, a5))
      && (v10 = std::fs::remove_file(a4, a5)) != 0 )
    {
      *a1 = 2LL;
      a1[1] = v10;
    }
    else
    {
      uu_cp::symlink_file((__int64)a1, v13, v14, a4, a5, a6);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v12);
  }
  return a1;
}
