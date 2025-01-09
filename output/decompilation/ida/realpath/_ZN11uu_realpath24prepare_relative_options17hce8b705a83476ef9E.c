_QWORD *__fastcall uu_realpath::prepare_relative_options(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // kr00_16
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int128 *v9; // rdi
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int128 v13; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-D8h]
  __int128 v15; // [rsp+18h] [rbp-D0h]
  __int64 v16; // [rsp+28h] [rbp-C0h]
  _QWORD *v17; // [rsp+38h] [rbp-B0h]
  __int128 v18; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-98h]
  __int128 v20; // [rsp+58h] [rbp-90h] BYREF
  __int64 v21; // [rsp+68h] [rbp-80h]
  __int128 v22; // [rsp+70h] [rbp-78h] BYREF
  __int64 v23; // [rsp+80h] [rbp-68h]
  __int128 v24; // [rsp+88h] [rbp-60h] BYREF
  __int64 v25; // [rsp+98h] [rbp-50h]
  __int128 v26; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-38h]

  v17 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, a2, aRelativeTo, 11LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aRelativeTo, 11LL, &v13);
  if ( v4 )
    core::ops::function::FnOnce::call_once(&v26, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
  else
    *(_QWORD *)&v26 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, a2, aRelativeBase, 13LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aRelativeBase, 13LL, &v13);
  if ( v5 )
  {
    core::ops::function::FnOnce::call_once(&v13, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
    v23 = v14;
    v22 = v13;
  }
  else
  {
    *(_QWORD *)&v22 = 0x8000000000000000LL;
  }
  v14 = v27;
  v13 = v26;
  uu_realpath::canonicalize_relative_option((unsigned __int64 *)&v20, &v13, a3);
  v6 = v20;
  v7 = v21;
  if ( (_QWORD)v20 == 0x8000000000000001LL )
  {
    v8 = v17;
    v17[1] = *((_QWORD *)&v20 + 1);
    v8[2] = v7;
    *v8 = 0x8000000000000001LL;
    v9 = &v22;
  }
  else
  {
    v24 = v20;
    v25 = v21;
    v14 = v23;
    v13 = v22;
    uu_realpath::canonicalize_relative_option((unsigned __int64 *)&v20, &v13, a3);
    v8 = v17;
    v10 = v21;
    if ( (_QWORD)v20 == 0x8000000000000001LL )
    {
      v17[1] = *((_QWORD *)&v20 + 1);
      v8[2] = v10;
      *v8 = 0x8000000000000001LL;
    }
    else
    {
      v18 = v20;
      v19 = v21;
      v12 = 0LL;
      if ( (_QWORD)v20 != 0x8000000000000000LL )
        v12 = *((_QWORD *)&v20 + 1);
      if ( (_QWORD)v6 == 0x8000000000000000LL
        || !v12
        || (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v6 + 1), v7, v12, v21) )
      {
        v14 = v25;
        v13 = v24;
        v16 = v19;
        v15 = v18;
        *(_OWORD *)v8 = v24;
        v8[4] = *((_QWORD *)&v15 + 1);
        v8[5] = v16;
        v8[2] = v14;
        v8[3] = v15;
        return v8;
      }
      *v8 = 0x8000000000000000LL;
      v8[3] = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v18);
    }
    v9 = &v24;
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v9);
  return v8;
}
