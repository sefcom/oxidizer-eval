__int64 __fastcall uu_ls::show_dir_name(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int128 v8; // [rsp+0h] [rbp-98h] BYREF
  __int64 v9; // [rsp+10h] [rbp-88h]
  void *v10; // [rsp+18h] [rbp-80h] BYREF
  __int64 v11; // [rsp+20h] [rbp-78h]
  __int128 **v12; // [rsp+28h] [rbp-70h]
  __int64 v13; // [rsp+30h] [rbp-68h]
  __int64 v14; // [rsp+38h] [rbp-60h]
  __int128 *v15; // [rsp+48h] [rbp-50h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+50h] [rbp-48h]
  __int128 v17; // [rsp+58h] [rbp-40h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h]

  uucore::features::quoting_style::escape_name_inner(&v17, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), a3 + 245, 1LL);
  if ( *(_BYTE *)(a3 + 239) != 0 && *(_BYTE *)(a3 + 238) == 0 )
  {
    v4 = *((_QWORD *)&v17 + 1);
    uu_ls::create_hyperlink(&v8, *((_QWORD *)&v17 + 1), v18, a1);
    v15 = &v8;
    v16 = <alloc::string::String as core::fmt::Display>::fmt;
    v10 = &unk_1AC710;
    v11 = 2LL;
    v14 = 0LL;
    v12 = &v15;
    v13 = 1LL;
    result = std::io::Write::write_fmt(a2, &v10);
    if ( result )
    {
      v10 = (void *)result;
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v10, &off_1AC200, &off_1AC730);
    }
    if ( (_QWORD)v8 )
      result = _rust_dealloc(*((_QWORD *)&v8 + 1), v8, 1LL);
    v6 = v17;
    if ( (_QWORD)v17 )
    {
      v7 = v4;
      return _rust_dealloc(v7, v6, 1LL);
    }
  }
  else
  {
    v9 = v18;
    v8 = v17;
    v15 = &v8;
    v16 = <alloc::string::String as core::fmt::Display>::fmt;
    v10 = &unk_1AC710;
    v11 = 2LL;
    v14 = 0LL;
    v12 = &v15;
    v13 = 1LL;
    result = std::io::Write::write_fmt(a2, &v10);
    if ( result )
    {
      v10 = (void *)result;
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v10, &off_1AC200, &off_1AC730);
    }
    v6 = v8;
    if ( (_QWORD)v8 )
    {
      v7 = *((_QWORD *)&v8 + 1);
      return _rust_dealloc(v7, v6, 1LL);
    }
  }
  return result;
}
