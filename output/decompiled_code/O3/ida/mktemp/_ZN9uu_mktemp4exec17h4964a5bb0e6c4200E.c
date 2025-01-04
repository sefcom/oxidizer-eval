        char a9)
{
  __int64 v11; // rsi
  __int64 v12; // rax
  char **v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h]
  _QWORD v18[3]; // [rsp+18h] [rbp-50h] BYREF
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h]

  if ( a9 )
    uu_mktemp::make_temp_dir(&v15, a2, a3, a4, a5, a6, a7, a8);
  else
    uu_mktemp::make_temp_file(&v15, a2, a3, a4, a5, a6, a7, a8);
  v11 = v17;
  if ( v15 != 0x8000000000000000LL )
  {
    v18[0] = v15;
    v18[1] = v16;
    v18[2] = v17;
    v12 = std::path::Path::file_name(v16, v17);
    if ( v12 )
    {
      std::sys::os_str::bytes::Slice::to_str(&v15, v12);
      if ( !v15 )
      {
        std::path::Path::join(&v19, a2, a3, v16, v17);
        *(_QWORD *)(a1 + 16) = v20;
        *(_OWORD *)a1 = v19;
        core::ptr::drop_in_place<std::path::PathBuf>(v18);
        return a1;
      }
      v14 = &off_136B78;
    }
    else
    {
      v14 = &off_136B60;
    }
    core::option::unwrap_failed(v14);
  }
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
