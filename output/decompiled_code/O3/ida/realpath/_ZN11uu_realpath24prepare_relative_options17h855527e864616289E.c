_QWORD *__fastcall uu_realpath::prepare_relative_options(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // kr00_16
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int128 *v9; // rdi
  __int64 v10; // rcx
  __int128 v12; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-D8h]
  __int128 v14; // [rsp+18h] [rbp-D0h]
  __int64 v15; // [rsp+28h] [rbp-C0h]
  _QWORD *v16; // [rsp+38h] [rbp-B0h]
  __int128 v17; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-98h]
  __int128 v19; // [rsp+58h] [rbp-90h] BYREF
  __int64 v20; // [rsp+68h] [rbp-80h]
  __int128 v21; // [rsp+70h] [rbp-78h] BYREF
  __int64 v22; // [rsp+80h] [rbp-68h]
  __int128 v23; // [rsp+88h] [rbp-60h] BYREF
  __int64 v24; // [rsp+98h] [rbp-50h]
  __int128 v25; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-38h]

  v16 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a2, aRelativeTo, 11LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aRelativeTo, 11LL, &v12);
  if ( v4 )
    core::ops::function::FnOnce::call_once(&v25, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
  else
    *(_QWORD *)&v25 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a2, aRelativeBase, 13LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aRelativeBase, 13LL, &v12);
  if ( v5 )
  {
    core::ops::function::FnOnce::call_once(&v12, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
    v22 = v13;
    v21 = v12;
  }
  else
  {
    *(_QWORD *)&v21 = 0x8000000000000000LL;
  }
  v13 = v26;
  v12 = v25;
  uu_realpath::canonicalize_relative_option((unsigned __int64 *)&v19, &v12, a3);
  v6 = v19;
  v7 = v20;
  if ( (_QWORD)v19 == 0x8000000000000001LL )
  {
    v8 = v16;
    v16[1] = *((_QWORD *)&v19 + 1);
    v8[2] = v7;
    *v8 = 0x8000000000000001LL;
    v9 = &v21;
  }
  else
  {
    v23 = v19;
    v24 = v20;
    v13 = v22;
    v12 = v21;
    uu_realpath::canonicalize_relative_option((unsigned __int64 *)&v19, &v12, a3);
    v8 = v16;
    v10 = v20;
    if ( (_QWORD)v19 == 0x8000000000000001LL )
    {
      v16[1] = *((_QWORD *)&v19 + 1);
      v8[2] = v10;
      *v8 = 0x8000000000000001LL;
    }
    else
    {
      v17 = v19;
      v18 = v20;
      if ( (_QWORD)v6 == 0x8000000000000000LL
        || (_QWORD)v19 == 0x8000000000000000LL
        || (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v6 + 1), v7, *((_QWORD *)&v19 + 1), v20) )
      {
        v13 = v24;
        v12 = v23;
        v15 = v18;
        v14 = v17;
        *(_OWORD *)v8 = v23;
        v8[4] = *((_QWORD *)&v14 + 1);
        v8[5] = v15;
        v8[2] = v13;
        v8[3] = v14;
        return v8;
      }
      *v8 = 0x8000000000000000LL;
      v8[3] = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v17);
    }
    v9 = &v23;
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v9);
  return v8;
}
