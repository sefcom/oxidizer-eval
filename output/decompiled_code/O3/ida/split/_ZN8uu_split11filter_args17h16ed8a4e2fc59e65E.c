__int64 __fastcall uu_split::filter_args(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v7; // r13
  __int64 v8; // rbp
  __int128 v10; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v12; // [rsp+18h] [rbp-50h]
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+30h] [rbp-38h]

  v12 = a5;
  std::sys::os_str::bytes::Slice::to_str(&v10, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( (_QWORD)v10 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  else
  {
    v7 = *((_QWORD *)&v10 + 1);
    v8 = v11;
    if ( (unsigned __int8)uu_split::should_extract_obs_lines(*((_QWORD *)&v10 + 1), v11, *a4, *v12) )
      uu_split::handle_extract_obs_lines(&v10, v7, v8, a3);
    else
      std::sys::os_str::bytes::Slice::to_owned(&v10, v7, v8);
    v14 = v11;
    v13 = v10;
    uu_split::handle_preceding_options(v7, v8, a4, v12);
    *(_QWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(a2);
  }
  return a1;
}
