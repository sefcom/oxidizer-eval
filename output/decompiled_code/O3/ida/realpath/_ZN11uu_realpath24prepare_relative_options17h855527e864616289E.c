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
  __int128 v16; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-D8h]
  __int128 v18; // [rsp+18h] [rbp-D0h]
  __int64 v19; // [rsp+28h] [rbp-C0h]
  _QWORD *v20; // [rsp+38h] [rbp-B0h]
  __int128 v21; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-98h]
  __int128 v23; // [rsp+58h] [rbp-90h] BYREF
  __int64 v24; // [rsp+68h] [rbp-80h]
  __int128 v25; // [rsp+70h] [rbp-78h] BYREF
  __int64 v26; // [rsp+80h] [rbp-68h]
  __int128 v27; // [rsp+88h] [rbp-60h] BYREF
  __int64 v28; // [rsp+98h] [rbp-50h]
  __int128 v29; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-38h]

  v20 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, a2, aRelativeTo, 11LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aRelativeTo, 11LL, &v16);
  if ( v6 )
    core::ops::function::FnOnce::call_once(&v29, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
  else
    *(_QWORD *)&v29 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, a2, aRelativeBase, 13LL);
  v7 = clap_builder::parser::error::MatchesError::unwrap(aRelativeBase, 13LL, &v16);
  if ( v7 )
  {
    core::ops::function::FnOnce::call_once(&v16, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
    v26 = v17;
    v25 = v16;
  }
  else
  {
    *(_QWORD *)&v25 = 0x8000000000000000LL;
  }
  v17 = v30;
  v16 = v29;
  ((void (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD))uu_realpath::canonicalize_relative_option)(
    &v23,
    &v16,
    a3,
    a4);
  v10 = v23;
  v11 = v24;
  if ( (_QWORD)v23 == 0x8000000000000001LL )
  {
    v12 = v20;
    v20[1] = *((_QWORD *)&v23 + 1);
    v12[2] = v11;
    *v12 = 0x8000000000000001LL;
    v13 = &v25;
  }
  else
  {
    v27 = v23;
    v28 = v24;
    v17 = v26;
    v16 = v25;
    ((void (__fastcall *)(__int128 *, __int128 *, _QWORD, _QWORD, __int64, __int64))uu_realpath::canonicalize_relative_option)(
      &v23,
      &v16,
      a3,
      a4,
      v8,
      v9);
    v12 = v20;
    v14 = v24;
    if ( (_QWORD)v23 == 0x8000000000000001LL )
    {
      v20[1] = *((_QWORD *)&v23 + 1);
      v12[2] = v14;
      *v12 = 0x8000000000000001LL;
    }
    else
    {
      v21 = v23;
      v22 = v24;
      if ( (_QWORD)v10 == 0x8000000000000000LL
        || (_QWORD)v23 == 0x8000000000000000LL
        || (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v10 + 1), v11, *((_QWORD *)&v23 + 1), v24) )
      {
        v17 = v28;
        v16 = v27;
        v19 = v22;
        v18 = v21;
        *(_OWORD *)v12 = v27;
        v12[4] = *((_QWORD *)&v18 + 1);
        v12[5] = v19;
        v12[2] = v17;
        v12[3] = v18;
        return v12;
      }
      *v12 = 0x8000000000000000LL;
      v12[3] = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v21);
    }
    v13 = &v27;
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v13);
  return v12;
}
