_QWORD *__fastcall uu_realpath::prepare_relative_options(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // kr00_16
  __int64 v9; // r15
  _QWORD *v10; // r12
  __int128 *v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int128 v15; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-D8h]
  __int128 v17; // [rsp+18h] [rbp-D0h]
  __int64 v18; // [rsp+28h] [rbp-C0h]
  _QWORD *v19; // [rsp+38h] [rbp-B0h]
  __int128 v20; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-98h]
  __int128 v22; // [rsp+58h] [rbp-90h] BYREF
  __int64 v23; // [rsp+68h] [rbp-80h]
  __int128 v24; // [rsp+70h] [rbp-78h] BYREF
  __int64 v25; // [rsp+80h] [rbp-68h]
  __int128 v26; // [rsp+88h] [rbp-60h] BYREF
  __int64 v27; // [rsp+98h] [rbp-50h]
  __int128 v28; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-38h]

  v19 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a2, aRelativeTo, 11LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aRelativeTo, 11LL, &v15);
  if ( v6 )
    core::ops::function::FnOnce::call_once(&v28, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
  else
    *(_QWORD *)&v28 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a2, aRelativeBase, 13LL);
  v7 = clap_builder::parser::error::MatchesError::unwrap(aRelativeBase, 13LL, &v15);
  if ( v7 )
  {
    core::ops::function::FnOnce::call_once(&v15, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
    v25 = v16;
    v24 = v15;
  }
  else
  {
    *(_QWORD *)&v24 = 0x8000000000000000LL;
  }
  v16 = v29;
  v15 = v28;
  uu_realpath::canonicalize_relative_option((unsigned __int64 *)&v22, &v15, a3, a4);
  v8 = v22;
  v9 = v23;
  if ( (_QWORD)v22 == 0x8000000000000001LL )
  {
    v10 = v19;
    v19[1] = *((_QWORD *)&v22 + 1);
    v10[2] = v9;
    *v10 = 0x8000000000000001LL;
    v11 = &v24;
  }
  else
  {
    v26 = v22;
    v27 = v23;
    v16 = v25;
    v15 = v24;
    uu_realpath::canonicalize_relative_option((unsigned __int64 *)&v22, &v15, a3, a4);
    v10 = v19;
    v12 = v23;
    if ( (_QWORD)v22 == 0x8000000000000001LL )
    {
      v19[1] = *((_QWORD *)&v22 + 1);
      v10[2] = v12;
      *v10 = 0x8000000000000001LL;
    }
    else
    {
      v20 = v22;
      v21 = v23;
      v14 = 0LL;
      if ( (_QWORD)v22 != 0x8000000000000000LL )
        v14 = *((_QWORD *)&v22 + 1);
      if ( (_QWORD)v8 == 0x8000000000000000LL
        || !v14
        || (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v8 + 1), v9, v14, v23) )
      {
        v16 = v27;
        v15 = v26;
        v18 = v21;
        v17 = v20;
        *(_OWORD *)v10 = v26;
        v10[4] = *((_QWORD *)&v17 + 1);
        v10[5] = v18;
        v10[2] = v16;
        v10[3] = v17;
        return v10;
      }
      *v10 = 0x8000000000000000LL;
      v10[3] = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v20);
    }
    v11 = &v26;
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v11);
  return v10;
}
