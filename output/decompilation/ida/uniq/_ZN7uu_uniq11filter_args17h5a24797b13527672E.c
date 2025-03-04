__int64 __fastcall uu_uniq::filter_args(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char *a5, char *a6)
{
  __int64 v7; // rbp
  char v8; // r12
  char v9; // r15
  _QWORD *v11; // r12
  __int64 v12; // [rsp+0h] [rbp-88h]
  __int128 v13; // [rsp+8h] [rbp-80h] BYREF
  __int64 v14; // [rsp+18h] [rbp-70h]
  __int128 v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  _QWORD *v17; // [rsp+40h] [rbp-48h]
  char *v18; // [rsp+48h] [rbp-40h]
  char *v19; // [rsp+50h] [rbp-38h]

  v19 = a6;
  v18 = a5;
  v17 = a4;
  std::sys::os_str::bytes::Slice::to_str(&v13, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( !(_QWORD)v13 )
  {
    v7 = v14;
    v8 = *v18;
    v9 = *v19;
    v12 = *((_QWORD *)&v13 + 1);
    if ( uu_uniq::should_extract_obs_skip_fields(*((__int64 *)&v13 + 1), v14, *v18, *v19) )
    {
      uu_uniq::handle_extract_obs_skip_fields((__int64)&v13, v12, v7, a3);
    }
    else
    {
      if ( !(unsigned __int8)uu_uniq::should_extract_obs_skip_chars(v12, v7, v8, v9) )
      {
        std::sys::os_str::bytes::Slice::to_owned(&v13, v12, v7);
        v16 = v14;
        v15 = v13;
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v12, v7, asc_1F0E9, 2LL) )
        {
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
          *a3 = 0x8000000000000000LL;
        }
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v12, v7, aS, 2LL) )
        {
          v11 = v17;
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v17);
          *v11 = 0x8000000000000000LL;
        }
        goto LABEL_8;
      }
      uu_uniq::handle_extract_obs_skip_chars(&v13, v12, v7, v17);
    }
    v16 = v14;
    v15 = v13;
LABEL_8:
    uu_uniq::handle_preceding_options(v12, v7, v18, v19);
    *(_QWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(a2);
    return a1;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return a1;
}
