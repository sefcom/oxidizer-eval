__int64 __fastcall forc_debug::cli::get_history_file_path(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rax
  __int128 v6; // [rsp+8h] [rbp-50h] BYREF
  __int64 v7; // [rsp+18h] [rbp-40h]
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]

  dirs::home_dir(&v6);
  v1 = v6;
  if ( __OFSUB__(-(__int64)v6, 1LL) )
  {
    result = std::io::error::Error::new(0LL, aCouldNotFindHo, 29LL);
    *(_BYTE *)a1 = 56;
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    v3 = *((_QWORD *)&v6 + 1);
    std::path::Path::join(&v6, *((_QWORD *)&v6 + 1), v7, aForc, 5LL);
    v4 = *((_QWORD *)&v6 + 1);
    std::path::Path::join(&v8, *((_QWORD *)&v6 + 1), v7, aDebug, 6LL);
    core::ptr::drop_in_place<std::path::PathBuf>(v6, v4);
    v5 = std::fs::create_dir_all(&v8);
    if ( v5 )
    {
      *(_BYTE *)a1 = 56;
      *(_QWORD *)(a1 + 8) = v5;
    }
    else
    {
      std::path::Path::join(&v6, v9, v10, aHistory, 7LL);
      *(_QWORD *)(a1 + 24) = v7;
      *(_OWORD *)(a1 + 8) = v6;
      *(_BYTE *)a1 = 61;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v8, v9);
    return core::ptr::drop_in_place<std::path::PathBuf>(v1, v3);
  }
  return result;
}