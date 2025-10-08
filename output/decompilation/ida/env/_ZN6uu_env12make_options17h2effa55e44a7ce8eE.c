_QWORD *__fastcall uu_env::make_options(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // rax
  __int128 v6; // rax
  __int128 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // r12
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  char flag; // [rsp+7h] [rbp-261h]
  __int128 v22; // [rsp+10h] [rbp-258h] BYREF
  __int64 v23; // [rsp+20h] [rbp-248h]
  __int128 v24; // [rsp+28h] [rbp-240h] BYREF
  __int64 v25; // [rsp+38h] [rbp-230h]
  __int128 v26; // [rsp+40h] [rbp-228h] BYREF
  __int128 v27; // [rsp+50h] [rbp-218h]
  __int128 v28; // [rsp+60h] [rbp-208h]
  __int128 v29; // [rsp+70h] [rbp-1F8h]
  __int128 v30; // [rsp+90h] [rbp-1D8h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-1C8h]
  __int128 v32; // [rsp+B0h] [rbp-1B8h]
  __int128 v33; // [rsp+C0h] [rbp-1A8h]
  _OWORD src[10]; // [rsp+D0h] [rbp-198h] BYREF
  _OWORD v35[4]; // [rsp+178h] [rbp-F0h] BYREF
  _QWORD v36[8]; // [rsp+1B8h] [rbp-B0h] BYREF
  _QWORD v37[14]; // [rsp+1F8h] [rbp-70h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aIgnoreEnvironm, 18LL);
  v3 = 0LL;
  v4 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNull, 4LL) )
    v4 = 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aChdir_0);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aChdir_0, src);
  if ( v5 )
  {
    v3 = *(_QWORD *)(v5 + 8);
    v2 = *(_QWORD *)(v5 + 16);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aFile, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(v36, aFile, 4LL, src);
  if ( v36[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v22, v36);
  }
  else
  {
    *(_QWORD *)&v6 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(0LL, 8LL, 16LL, &off_110C08);
    v22 = v6;
    v23 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aUnset, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(v37, aUnset, 5LL, src);
  if ( v37[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v24, v37);
  }
  else
  {
    *(_QWORD *)&v7 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(0LL, 8LL, 16LL, &off_110C20);
    v24 = v7;
    v25 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aArgv0);
  v8 = clap_builder::parser::error::MatchesError::unwrap(aArgv0, src);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    v8 = *(_QWORD *)(v8 + 16);
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)&src[1] = v23;
  src[0] = v22;
  *(_OWORD *)((char *)&src[1] + 8) = v24;
  *((_QWORD *)&src[2] + 1) = v25;
  BYTE8(src[9]) = flag;
  BYTE9(src[9]) = v4;
  *((_QWORD *)&src[7] + 1) = v3;
  *(_QWORD *)&src[8] = v2;
  *(_QWORD *)&src[3] = 0LL;
  *((_QWORD *)&src[3] + 1) = 8LL;
  src[4] = 0LL;
  src[5] = 8uLL;
  *((_QWORD *)&src[8] + 1) = v9;
  *(_QWORD *)&src[9] = v8;
  *(_QWORD *)&src[6] = 0LL;
  *((_QWORD *)&src[6] + 1) = 8LL;
  *(_QWORD *)&src[7] = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v26, a2, aIgnoreSignal, 13LL);
  v10 = a1;
  clap_builder::parser::error::MatchesError::unwrap(&v30, aIgnoreSignal, 13LL, &v26);
  if ( (_QWORD)v30 )
  {
    v29 = v33;
    v28 = v32;
    v27 = v31;
    v26 = v30;
    while ( 1 )
    {
      v11 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v26);
      if ( !v11 )
        break;
      v12 = uu_env::parse_signal_opt((__int64)src, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
      if ( v12 )
      {
        a1[1] = v12;
        a1[2] = v13;
LABEL_31:
        *v10 = 0x8000000000000000LL;
        core::ptr::drop_in_place<uu_env::Options>(src);
        return v10;
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v26, a2, aVars, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(v35, aVars, 4LL, &v26);
  if ( *(_QWORD *)&v35[0] )
  {
    v33 = v35[3];
    v32 = v35[2];
    v31 = v35[1];
    v30 = v35[0];
    v14 = 0;
    do
    {
      v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v30);
      if ( !v15 )
        break;
      v16 = *(_QWORD *)(v15 + 8);
      v17 = *(_QWORD *)(v15 + 16);
      if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v16, v17, asc_1E8A6, 1LL) )
      {
        BYTE8(src[9]) = 1;
      }
      else
      {
        uu_env::parse_name_value_opt((__int64)&v26, (__int64)src, v16, v17);
        v14 = BYTE8(v26);
        if ( (_QWORD)v26 )
        {
          v10 = a1;
          *(_OWORD *)(a1 + 1) = v26;
          goto LABEL_31;
        }
      }
    }
    while ( (v14 & 1) == 0 );
    v29 = v33;
    v28 = v32;
    v27 = v31;
    v26 = v30;
    v10 = a1;
    while ( 1 )
    {
      v18 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v26);
      if ( !v18 )
        break;
      v19 = uu_env::parse_program_opt((__int64)src, *(_QWORD *)(v18 + 8), *(_QWORD *)(v18 + 16));
      if ( v19 )
      {
        a1[1] = v19;
        a1[2] = &off_1107E8;
        goto LABEL_31;
      }
    }
  }
  memcpy(v10, src, 0xA0uLL);
  return v10;
}