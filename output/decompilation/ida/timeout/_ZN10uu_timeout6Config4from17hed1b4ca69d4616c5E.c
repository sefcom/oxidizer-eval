__int64 __fastcall uu_timeout::Config::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // r12
  char v11; // r13
  char flag; // [rsp+7h] [rbp-101h]
  int v14; // [rsp+8h] [rbp-100h]
  int v15; // [rsp+Ch] [rbp-FCh]
  __int128 v16; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v17; // [rsp+20h] [rbp-E8h]
  __int128 v18; // [rsp+30h] [rbp-D8h]
  __int128 v19; // [rsp+40h] [rbp-C8h]
  __int128 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+68h] [rbp-A0h]
  __int128 v22; // [rsp+78h] [rbp-90h]
  __int128 v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  _QWORD v26[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v27[3]; // [rsp+B8h] [rbp-50h] BYREF
  char v28; // [rsp+D0h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, a2, &unk_1D1E7, 6LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(&unk_1D1E7, 6LL, &v16);
  if ( v2 )
  {
    v3 = v2;
    if ( (uucore::features::signals::signal_by_name_or_value(*(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16)) & 1) == 0 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      v6 = *(_QWORD *)(v3 + 16);
      v27[0] = 0LL;
      v27[1] = v5;
      v27[2] = v6;
      v28 = 1;
      v26[0] = v27;
      v26[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = &unk_1126C0;
      *((_QWORD *)&v16 + 1) = 2LL;
      *(_QWORD *)&v18 = 0LL;
      *(_QWORD *)&v17 = v26;
      *((_QWORD *)&v17 + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v20, &v16);
      DWORD2(v21) = 125;
      *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v20);
      *(_QWORD *)(a1 + 16) = &off_112700;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
  }
  else if ( (uucore::features::signals::signal_by_name_or_value(aTerm, 4LL) & 1) == 0 )
  {
    core::option::unwrap_failed(&off_112768);
  }
  v7 = v4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, a2, &unk_1D1DD, 10LL);
  v8 = clap_builder::parser::error::MatchesError::unwrap(&unk_1D1DD, 10LL, &v16);
  if ( v8 )
  {
    uucore::features::parser::parse_time::from_str(&v20, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16), 1LL);
    if ( (_QWORD)v20 != 0x8000000000000000LL )
    {
LABEL_13:
      *(_QWORD *)&v17 = v21;
      v16 = v20;
      DWORD2(v17) = 125;
      *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v16);
      *(_QWORD *)(a1 + 16) = &off_112700;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
    v24 = *((_QWORD *)&v20 + 1);
    v14 = v21;
  }
  else
  {
    v14 = 1000000000;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, a2, aDuration, 8LL);
  v9 = clap_builder::parser::error::MatchesError::unwrap(aDuration, 8LL, &v16);
  if ( !v9 )
    core::option::unwrap_failed(&off_112780);
  uucore::features::parser::parse_time::from_str(&v20, *(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16), 1LL);
  if ( (_QWORD)v20 != 0x8000000000000000LL )
    goto LABEL_13;
  v25 = *((_QWORD *)&v20 + 1);
  v15 = v21;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPreserveStatus, 15LL);
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aForeground, 10LL);
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, a2);
  clap_builder::parser::error::MatchesError::unwrap(&v20, &v16);
  if ( !(_QWORD)v20 )
    core::option::unwrap_failed(&off_112798);
  v19 = v23;
  v18 = v22;
  v17 = v21;
  v16 = v20;
  core::iter::traits::iterator::Iterator::collect(a1, &v16);
  *(_QWORD *)(a1 + 24) = v25;
  *(_DWORD *)(a1 + 32) = v15;
  *(_QWORD *)(a1 + 40) = v24;
  *(_DWORD *)(a1 + 48) = v14;
  *(_QWORD *)(a1 + 56) = v7;
  *(_BYTE *)(a1 + 64) = v10;
  *(_BYTE *)(a1 + 65) = flag;
  *(_BYTE *)(a1 + 66) = v11;
  return a1;
}