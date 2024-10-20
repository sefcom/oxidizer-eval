_QWORD *__fastcall uu_tail::paths::Input::resolve(_QWORD *a1, _QWORD *a2)
{
  __int128 v2; // kr00_16
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  __int128 v6; // kr10_16
  __int64 v7; // rbp
  __int128 v8; // kr20_16
  __int128 v10; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]

  if ( a2[3] == 0x8000000000000000LL )
  {
LABEL_5:
    std::sys::os_str::bytes::Slice::to_owned(&v13, aDevStdin_0, 10LL);
    v5 = v14;
    std::sys::pal::unix::fs::canonicalize(&v10, v14, v15);
    v6 = v10;
    if ( (_QWORD)v10 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v10 + 1));
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      v12 = v5;
      v7 = v11;
      std::sys::os_str::bytes::Slice::to_owned(&v10, aDevFd0, 9LL);
      v8 = v10;
      if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(
                              *((_QWORD *)&v6 + 1),
                              v7,
                              *((_QWORD *)&v10 + 1),
                              v11) )
      {
        if ( (_QWORD)v8 )
          _rust_dealloc(*((_QWORD *)&v8 + 1), v8, 1LL);
        *a1 = 0x8000000000000000LL;
        v5 = v12;
        if ( (_QWORD)v6 )
          _rust_dealloc(*((_QWORD *)&v6 + 1), v6, 1LL);
      }
      else
      {
        if ( (_QWORD)v8 )
          _rust_dealloc(*((_QWORD *)&v8 + 1), v8, 1LL);
        *(_OWORD *)a1 = v6;
        a1[2] = v7;
        v5 = v12;
      }
    }
    if ( v13 )
      _rust_dealloc(v5, v13, 1LL);
    return a1;
  }
  std::sys::os_str::bytes::Slice::to_owned(&v10, aDevStdin_0, 10LL);
  v2 = v10;
  v3 = a2[4];
  v4 = a2[5];
  if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(v3, v4, *((_QWORD *)&v10 + 1), v11) )
  {
    if ( (_QWORD)v2 )
      _rust_dealloc(*((_QWORD *)&v2 + 1), v2, 1LL);
    goto LABEL_5;
  }
  if ( (_QWORD)v2 )
    _rust_dealloc(*((_QWORD *)&v2 + 1), v2, 1LL);
  std::sys::pal::unix::fs::canonicalize(&v10, v3, v4);
  if ( (_QWORD)v10 == 0x8000000000000000LL )
  {
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v10 + 1));
  }
  else
  {
    a1[2] = v11;
    *(_OWORD *)a1 = v10;
  }
  return a1;
}
