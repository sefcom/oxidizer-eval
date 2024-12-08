_QWORD *__fastcall uu_env::make_options(void *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // bl
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  char flag; // [rsp+Fh] [rbp-269h]
  __int128 v19; // [rsp+10h] [rbp-268h] BYREF
  __int128 v20; // [rsp+20h] [rbp-258h]
  __int128 v21; // [rsp+30h] [rbp-248h]
  __int128 v22; // [rsp+40h] [rbp-238h]
  __int128 v23; // [rsp+60h] [rbp-218h] BYREF
  __int64 v24; // [rsp+70h] [rbp-208h]
  __int128 v25; // [rsp+78h] [rbp-200h] BYREF
  __int64 v26; // [rsp+88h] [rbp-1F0h]
  _OWORD src[10]; // [rsp+90h] [rbp-1E8h] BYREF
  void *dest; // [rsp+138h] [rbp-140h]
  __int128 v29; // [rsp+140h] [rbp-138h] BYREF
  __int128 v30; // [rsp+150h] [rbp-128h]
  __int128 v31; // [rsp+160h] [rbp-118h]
  __int128 v32; // [rsp+170h] [rbp-108h]
  _OWORD v33[4]; // [rsp+180h] [rbp-F8h] BYREF
  _OWORD v34[4]; // [rsp+1C0h] [rbp-B8h] BYREF
  _OWORD v35[7]; // [rsp+200h] [rbp-78h] BYREF

  dest = a1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aIgnoreEnvironm, 18LL);
  v3 = 0LL;
  v4 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNull, 4LL) )
    v4 = 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aChdir_0, 5LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aChdir_0, 5LL, src);
  if ( v5 )
  {
    v3 = *(_QWORD *)(v5 + 8);
    v2 = *(_QWORD *)(v5 + 16);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aFile, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v19, aFile, 4LL, src);
  if ( (_QWORD)v19 )
  {
    v34[3] = v22;
    v34[2] = v21;
    v34[1] = v20;
    v34[0] = v19;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v23, v34);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, 0LL, 0LL);
    if ( *(_QWORD *)&src[0] )
      alloc::raw_vec::handle_error(*((_QWORD *)&src[0] + 1), *(_QWORD *)&src[1]);
    v23 = *(_OWORD *)((char *)src + 8);
    v24 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aUnset, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(&v19, aUnset, 5LL, src);
  if ( (_QWORD)v19 )
  {
    v35[3] = v22;
    v35[2] = v21;
    v35[1] = v20;
    v35[0] = v19;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v25, v35);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, 0LL, 0LL);
    if ( *(_QWORD *)&src[0] )
      alloc::raw_vec::handle_error(*((_QWORD *)&src[0] + 1), *(_QWORD *)&src[1]);
    v25 = *(_OWORD *)((char *)src + 8);
    v26 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aArgv0, 5LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aArgv0, 5LL, src);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    v6 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)&src[1] = v24;
  src[0] = v23;
  *(_OWORD *)((char *)&src[1] + 8) = v25;
  *((_QWORD *)&src[2] + 1) = v26;
  BYTE8(src[9]) = flag;
  BYTE9(src[9]) = v4;
  *((_QWORD *)&src[7] + 1) = v3;
  *(_QWORD *)&src[8] = v2;
  *(_QWORD *)&src[3] = 0LL;
  *((_QWORD *)&src[3] + 1) = 8LL;
  src[4] = 0LL;
  src[5] = 8uLL;
  *((_QWORD *)&src[8] + 1) = v7;
  *(_QWORD *)&src[9] = v6;
  *(_QWORD *)&src[6] = 0LL;
  *((_QWORD *)&src[6] + 1) = 8LL;
  *(_QWORD *)&src[7] = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, a2, aIgnoreSignal, 13LL);
  v8 = dest;
  clap_builder::parser::error::MatchesError::unwrap(&v29, aIgnoreSignal, 13LL, &v19);
  if ( (_QWORD)v29 )
  {
    v22 = v32;
    v21 = v31;
    v20 = v30;
    v19 = v29;
    while ( 1 )
    {
      v9 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v19);
      if ( !v9 )
        break;
      v10 = uu_env::parse_signal_opt((__int64)src, *(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16));
      if ( v10 )
      {
        v8[1] = v10;
        v8[2] = v11;
LABEL_34:
        *v8 = 0x8000000000000000LL;
        core::ptr::drop_in_place<uu_env::Options>(src);
        return v8;
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, a2, aVars, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(v33, aVars, 4LL, &v19);
  if ( *(_QWORD *)&v33[0] )
  {
    v32 = v33[3];
    v31 = v33[2];
    v30 = v33[1];
    v29 = v33[0];
    v12 = 0;
    while ( 1 )
    {
      v13 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v29);
      v14 = v13;
      if ( !v13 )
        break;
      if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                              *(_QWORD *)(v13 + 8),
                              *(_QWORD *)(v13 + 16)) )
      {
        BYTE8(src[9]) = 1;
        if ( (v12 & 1) != 0 )
          break;
      }
      else
      {
        uu_env::parse_name_value_opt((__int64)&v19, (__int64)src, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
        if ( (_QWORD)v19 )
        {
          v16 = *((_QWORD *)&v19 + 1);
          v8[1] = v19;
          v8[2] = v16;
          goto LABEL_34;
        }
        v12 = BYTE8(v19);
        if ( (BYTE8(v19) & 1) != 0 )
          break;
      }
    }
    v22 = v32;
    v21 = v31;
    v20 = v30;
    v19 = v29;
    while ( <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v19) )
    {
      v15 = uu_env::parse_program_opt((__int64)src);
      if ( v15 )
      {
        v8[1] = v15;
        v8[2] = &off_149000;
        goto LABEL_34;
      }
    }
  }
  memcpy(v8, src, 0xA0uLL);
  return v8;
}
