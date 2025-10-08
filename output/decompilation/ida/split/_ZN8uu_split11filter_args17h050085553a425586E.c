_QWORD *__fastcall uu_split::filter_args(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int8 *v10; // rcx
  __int64 v11; // r13
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h]
  __int64 v16; // [rsp+18h] [rbp-50h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  unsigned __int8 *v19; // [rsp+30h] [rbp-38h]

  v19 = a4;
  v6 = a2[1];
  v7 = a2[2];
  core::str::converts::from_utf8(&v16, v6, v7);
  if ( (_DWORD)v16 == 1 )
  {
    *a1 = *a2;
    a1[1] = v6;
    a1[2] = v7;
  }
  else
  {
    v8 = v17;
    v9 = v18;
    if ( (unsigned __int8)uu_split::should_extract_obs_lines(v17, v18, *v19, *a5) )
      uu_split::handle_extract_obs_lines(&v16, v8, v9, a3);
    else
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, v8, v9);
    v10 = a5;
    v15 = v16;
    v14 = v17;
    v11 = v18;
    uu_split::handle_preceding_options(v8, v9, v19, v10);
    *a1 = v15;
    a1[1] = v14;
    a1[2] = v11;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(*a2, v6);
  }
  return a1;
}