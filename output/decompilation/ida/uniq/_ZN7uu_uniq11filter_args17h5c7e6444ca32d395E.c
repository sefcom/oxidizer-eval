_QWORD *__fastcall uu_uniq::filter_args(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // r13d
  unsigned int v10; // ebx
  __int64 v11; // r13
  __int64 v12; // rbx
  _QWORD *v14; // r13
  __int64 v16; // [rsp+0h] [rbp-78h]
  __int64 v17; // [rsp+8h] [rbp-70h] BYREF
  __int64 v18; // [rsp+10h] [rbp-68h]
  __int64 v19; // [rsp+18h] [rbp-60h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  _QWORD *v22; // [rsp+30h] [rbp-48h]
  unsigned __int8 *v23; // [rsp+38h] [rbp-40h]
  unsigned __int8 *v24; // [rsp+40h] [rbp-38h]

  v24 = a6;
  v23 = a5;
  v22 = a4;
  v6 = a2[2];
  v21 = a2[1];
  core::str::converts::from_utf8(&v17, v21, v6);
  if ( (_DWORD)v17 != 1 )
  {
    v7 = v18;
    v8 = v19;
    v9 = *v23;
    v10 = *v24;
    if ( (unsigned __int8)uu_uniq::should_extract_obs_skip_fields(v18, v19, *v23, *v24) )
    {
      uu_uniq::handle_extract_obs_skip_fields(&v17, v7, v8, a3);
    }
    else
    {
      if ( !(unsigned __int8)uu_uniq::should_extract_obs_skip_chars(v7, v8, v9, v10) )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, v7, v8);
        v11 = v17;
        v20 = v18;
        v12 = v19;
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v7, v8, asc_1B1CD, 2LL) )
        {
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
          *a3 = 0x8000000000000000LL;
        }
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v7, v8, aS, 2LL) )
        {
          v16 = v11;
          v14 = v22;
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v22);
          *v14 = 0x8000000000000000LL;
          v11 = v16;
        }
        goto LABEL_8;
      }
      uu_uniq::handle_extract_obs_skip_chars(&v17, v7, v8, v22);
    }
    v11 = v17;
    v20 = v18;
    v12 = v19;
LABEL_8:
    uu_uniq::handle_preceding_options(v7, v8, v23, v24);
    *a1 = v11;
    a1[1] = v20;
    a1[2] = v12;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(*a2, v21);
    return a1;
  }
  *a1 = *a2;
  a1[1] = v21;
  a1[2] = v6;
  return a1;
}