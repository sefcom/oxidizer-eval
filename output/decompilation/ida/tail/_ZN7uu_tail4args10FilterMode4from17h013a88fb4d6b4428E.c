__int64 __fastcall uu_tail::args::FilterMode::from(__int64 *a1, __int64 a2)
{
  char flag; // bp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // [rsp+0h] [rbp-D8h] BYREF
  __int128 **v26; // [rsp+10h] [rbp-C8h]
  __int64 v27; // [rsp+18h] [rbp-C0h]
  __int64 v28; // [rsp+20h] [rbp-B8h]
  __int128 v29; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+40h] [rbp-98h]
  __int128 *v31; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+58h] [rbp-80h]
  __int128 v33; // [rsp+60h] [rbp-78h] BYREF
  __int128 v34; // [rsp+70h] [rbp-68h]
  __int128 v35; // [rsp+80h] [rbp-58h] BYREF
  __int128 **v36; // [rsp+90h] [rbp-48h]
  __int128 v37; // [rsp+98h] [rbp-40h] BYREF
  __int128 **v38; // [rsp+A8h] [rbp-30h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZeroTerminated, 15LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aBytes_0, 5LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aBytes_0, 5LL, &v25);
  if ( v3 )
  {
    uu_tail::args::parse_num((__int64 *)&v29, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
    if ( (_DWORD)v29 == 3 )
    {
      v8 = *((_QWORD *)&v29 + 1);
      v9 = v30;
      result = 4LL;
LABEL_12:
      *a1 = result;
      a1[1] = v8;
      a1[2] = v9;
      return result;
    }
    v34 = v30;
    v33 = v29;
    v31 = &v33;
    v32 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)&v25 = &off_1BB360;
    *((_QWORD *)&v25 + 1) = 2LL;
    v28 = 0LL;
    v26 = &v31;
    v27 = 1LL;
    core::option::Option<T>::map_or_else(&v35, &v25, v4, v5, v6, v7);
    LODWORD(v27) = 1;
    v25 = v35;
    v26 = v36;
    v20 = alloc::boxed::Box<T>::new(&v25, &v25, v16, v17, v18, v19);
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aLines, 5LL);
    v11 = clap_builder::parser::error::MatchesError::unwrap(aLines, 5LL, &v25);
    if ( !v11 )
    {
      result = 0LL;
      v8 = 10LL;
      v9 = 10LL;
      if ( flag )
        v9 = 0LL;
      goto LABEL_12;
    }
    uu_tail::args::parse_num((__int64 *)&v29, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
    if ( (_DWORD)v29 == 3 )
    {
      result = *((_QWORD *)&v29 + 1);
      v8 = v30;
      v9 = 10LL;
      if ( flag )
        v9 = 0LL;
      goto LABEL_12;
    }
    v34 = v30;
    v33 = v29;
    v31 = &v33;
    v32 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)&v25 = &off_1BB380;
    *((_QWORD *)&v25 + 1) = 1LL;
    v28 = 0LL;
    v26 = &v31;
    v27 = 1LL;
    core::option::Option<T>::map_or_else(&v37, &v25, v12, v13, v14, v15);
    LODWORD(v27) = 1;
    v25 = v37;
    v26 = v38;
    v20 = alloc::boxed::Box<T>::new(&v25, &v25, v21, v22, v23, v24);
  }
  a1[1] = v20;
  a1[2] = (__int64)&off_1BB3C8;
  *a1 = 5LL;
  return core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&v33);
}
