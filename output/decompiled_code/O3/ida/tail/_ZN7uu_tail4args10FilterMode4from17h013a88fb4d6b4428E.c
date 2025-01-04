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
  __int64 v16; // rax
  __int128 v17; // [rsp+0h] [rbp-D8h] BYREF
  __int128 **v18; // [rsp+10h] [rbp-C8h]
  __int64 v19; // [rsp+18h] [rbp-C0h]
  __int64 v20; // [rsp+20h] [rbp-B8h]
  __int128 v21; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-98h]
  __int128 *v23; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+58h] [rbp-80h]
  __int128 v25; // [rsp+60h] [rbp-78h] BYREF
  __int128 v26; // [rsp+70h] [rbp-68h]
  __int128 v27; // [rsp+80h] [rbp-58h] BYREF
  __int128 **v28; // [rsp+90h] [rbp-48h]
  __int128 v29; // [rsp+98h] [rbp-40h] BYREF
  __int128 **v30; // [rsp+A8h] [rbp-30h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZeroTerminated, 15LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a2, aBytes_0, 5LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aBytes_0, 5LL, &v17);
  if ( v3 )
  {
    uu_tail::args::parse_num(&v21, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
    if ( (_DWORD)v21 == 3 )
    {
      v8 = *((_QWORD *)&v21 + 1);
      v9 = v22;
      result = 4LL;
LABEL_12:
      *a1 = result;
      a1[1] = v8;
      a1[2] = v9;
      return result;
    }
    v26 = v22;
    v25 = v21;
    v23 = &v25;
    v24 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_1BB360;
    *((_QWORD *)&v17 + 1) = 2LL;
    v20 = 0LL;
    v18 = &v23;
    v19 = 1LL;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      &v27,
      &v17,
      v4,
      v5,
      v6,
      v7);
    LODWORD(v19) = 1;
    v17 = v27;
    v18 = v28;
    v16 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
            &v17,
            &v17,
            v12,
            v13,
            v14,
            v15);
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a2, aLines, 5LL);
    v11 = clap_builder::parser::error::MatchesError::unwrap(aLines, 5LL, &v17);
    if ( !v11 )
    {
      result = 0LL;
      v8 = 10LL;
      v9 = 10LL;
      if ( flag )
        v9 = 0LL;
      goto LABEL_12;
    }
    uu_tail::args::parse_num(&v21, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
    if ( (_DWORD)v21 == 3 )
    {
      result = *((_QWORD *)&v21 + 1);
      v8 = v22;
      v9 = 10LL;
      if ( flag )
        v9 = 0LL;
      goto LABEL_12;
    }
    v26 = v22;
    v25 = v21;
    v23 = &v25;
    v24 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_1BB380;
    *((_QWORD *)&v17 + 1) = 1LL;
    v20 = 0LL;
    v18 = &v23;
    v19 = 1LL;
    ((void (__fastcall *)(__int128 *, __int128 *))core::option::Option<T>::map_or_else)(&v29, &v17);
    LODWORD(v19) = 1;
    v17 = v29;
    v18 = v30;
    v16 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v17);
  }
  a1[1] = v16;
  a1[2] = (__int64)&off_1BB3C8;
  *a1 = 5LL;
  return core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&v25);
}
