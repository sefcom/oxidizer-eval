        unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // kr00_16
  __int64 v11; // r15
  _QWORD *v12; // r12
  __int128 *v13; // rdi
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int128 v17; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-D8h]
  __int128 v19; // [rsp+18h] [rbp-D0h]
  __int64 v20; // [rsp+28h] [rbp-C0h]
  _QWORD *v21; // [rsp+38h] [rbp-B0h]
  __int128 v22; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-98h]
  __int128 v24; // [rsp+58h] [rbp-90h] BYREF
  __int64 v25; // [rsp+68h] [rbp-80h]
  __int128 v26; // [rsp+70h] [rbp-78h] BYREF
  __int64 v27; // [rsp+80h] [rbp-68h]
  __int128 v28; // [rsp+88h] [rbp-60h] BYREF
  __int64 v29; // [rsp+98h] [rbp-50h]
  __int128 v30; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-38h]

  v21 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a2, aRelativeTo, 11LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aRelativeTo, 11LL, &v17);
  if ( v6 )
    core::ops::function::FnOnce::call_once(&v30, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
  else
    *(_QWORD *)&v30 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a2, aRelativeBase, 13LL);
  v7 = clap_builder::parser::error::MatchesError::unwrap(aRelativeBase, 13LL, &v17);
  if ( v7 )
  {
    core::ops::function::FnOnce::call_once(&v17, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
    v27 = v18;
    v26 = v17;
  }
  else
  {
    *(_QWORD *)&v26 = 0x8000000000000000LL;
  }
  v18 = v31;
  v17 = v30;
  ((void (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD))uu_realpath::canonicalize_relative_option)(
    &v24,
    &v17,
    a3,
    a4);
  v10 = v24;
  v11 = v25;
  if ( (_QWORD)v24 == 0x8000000000000001LL )
  {
    v12 = v21;
    v21[1] = *((_QWORD *)&v24 + 1);
    v12[2] = v11;
    *v12 = 0x8000000000000001LL;
    v13 = &v26;
  }
  else
  {
    v28 = v24;
    v29 = v25;
    v18 = v27;
    v17 = v26;
    ((void (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD, __int64, __int64))uu_realpath::canonicalize_relative_option)(
      &v24,
      &v17,
      a3,
      a4,
      v8,
      v9);
    v12 = v21;
    v14 = v25;
    if ( (_QWORD)v24 == 0x8000000000000001LL )
    {
      v21[1] = *((_QWORD *)&v24 + 1);
      v12[2] = v14;
      *v12 = 0x8000000000000001LL;
    }
    else
    {
      v22 = v24;
      v23 = v25;
      v16 = 0LL;
      if ( (_QWORD)v24 != 0x8000000000000000LL )
        v16 = *((_QWORD *)&v24 + 1);
      if ( (_QWORD)v10 == 0x8000000000000000LL
        || !v16
        || (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v10 + 1), v11, v16, v25) )
      {
        v18 = v29;
        v17 = v28;
        v20 = v23;
        v19 = v22;
        *(_OWORD *)v12 = v28;
        v12[4] = *((_QWORD *)&v19 + 1);
        v12[5] = v20;
        v12[2] = v18;
        v12[3] = v19;
        return v12;
      }
      *v12 = 0x8000000000000000LL;
      v12[3] = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v22);
    }
    v13 = &v28;
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v13);
  return v12;
}
