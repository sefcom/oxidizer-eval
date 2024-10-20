_QWORD *__fastcall uu_tail::paths::Input::resolve(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v8; // rsi
  __int128 v10; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+18h] [rbp-B0h]
  __int128 v12; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-98h]
  __int128 v14; // [rsp+40h] [rbp-88h] BYREF
  __int64 v15; // [rsp+50h] [rbp-78h]
  __int128 v16; // [rsp+60h] [rbp-68h] BYREF
  __int64 v17; // [rsp+70h] [rbp-58h]
  __int128 v18; // [rsp+78h] [rbp-50h] BYREF
  __int64 v19; // [rsp+88h] [rbp-40h]
  __int128 v20; // [rsp+90h] [rbp-38h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-28h]

  if ( a2[3] != 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(&v10, aDevStdin, 10LL);
    v15 = v11;
    v14 = v10;
    if ( !(unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(a2 + 3, &v14) )
    {
      if ( (_QWORD)v14 )
        _rust_dealloc(*((_QWORD *)&v14 + 1), v14, 1LL);
      v5 = a2[4];
      if ( v5 )
      {
        v6 = a2[5];
        if ( v6 >= 0 )
        {
          std::sys::pal::unix::fs::canonicalize(&v18, v5, v6);
          if ( (_QWORD)v18 == 0x8000000000000000LL )
          {
            *a1 = 0x8000000000000000LL;
            std::io::error::repr_bitpacked::decode_repr(&v10, *((_QWORD *)&v18 + 1));
            if ( (unsigned __int8)v10 >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v10 + 8);
          }
          else
          {
            a1[2] = v19;
            *(_OWORD *)a1 = v18;
          }
          return a1;
        }
      }
LABEL_30:
      core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
    }
    if ( (_QWORD)v14 )
      _rust_dealloc(*((_QWORD *)&v14 + 1), v14, 1LL);
  }
  std::sys::os_str::bytes::Slice::to_owned(&v10, aDevStdin, 10LL);
  v3 = *((_QWORD *)&v10 + 1);
  if ( !*((_QWORD *)&v10 + 1) || v11 < 0 )
    goto LABEL_30;
  v4 = v10;
  std::sys::pal::unix::fs::canonicalize(&v20, *((_QWORD *)&v10 + 1), v11);
  if ( (_QWORD)v20 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v12 = 0x8000000000000000LL;
    std::io::error::repr_bitpacked::decode_repr(&v10, *((_QWORD *)&v20 + 1));
    if ( (unsigned __int8)v10 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v10 + 8);
  }
  else
  {
    v12 = v20;
    v13 = v21;
    std::sys::os_str::bytes::Slice::to_owned(&v10, aDevFd0, 9LL);
    v17 = v11;
    v16 = v10;
    if ( !(unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(&v12, &v16) )
    {
      if ( (_QWORD)v16 )
        _rust_dealloc(*((_QWORD *)&v16 + 1), v16, 1LL);
      a1[2] = v13;
      *(_OWORD *)a1 = v12;
      if ( v4 )
        goto LABEL_24;
      return a1;
    }
    if ( (_QWORD)v16 )
      _rust_dealloc(*((_QWORD *)&v16 + 1), v16, 1LL);
  }
  v8 = v12;
  *a1 = 0x8000000000000000LL;
  if ( 2 * v8 )
    _rust_dealloc(*((_QWORD *)&v12 + 1), v8, 1LL);
  if ( v4 )
LABEL_24:
    _rust_dealloc(v3, v4, 1LL);
  return a1;
}
