__int64 (__fastcall **__fastcall uu_runcon::parse_command_line(_QWORD *dest))()
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 (__fastcall **result)(); // rax
  __int8 flag; // bp
  _OWORD *v5; // rsi
  void (__fastcall __noreturn *v6)(); // rax
  const char *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v19; // [rsp+0h] [rbp-2F8h] BYREF
  __int64 v20; // [rsp+10h] [rbp-2E8h]
  __int128 v21; // [rsp+20h] [rbp-2D8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-2C8h]
  _OWORD src[10]; // [rsp+40h] [rbp-2B8h] BYREF
  __int128 v24; // [rsp+E0h] [rbp-218h]
  __int64 v25; // [rsp+F0h] [rbp-208h]
  __int128 v26; // [rsp+F8h] [rbp-200h] BYREF
  int v27; // [rsp+108h] [rbp-1F0h]
  __int128 v28; // [rsp+10Ch] [rbp-1ECh]
  __int128 v29; // [rsp+11Ch] [rbp-1DCh]
  int v30; // [rsp+12Ch] [rbp-1CCh]
  _BYTE v31[48]; // [rsp+130h] [rbp-1C8h] BYREF
  __int128 v32; // [rsp+160h] [rbp-198h]
  __m256i v33; // [rsp+170h] [rbp-188h]
  __m256i v34; // [rsp+190h] [rbp-168h]
  __int128 v35; // [rsp+1B0h] [rbp-148h] BYREF
  __int128 v36; // [rsp+1C0h] [rbp-138h]
  __int128 v37; // [rsp+1D0h] [rbp-128h]
  __int128 v38; // [rsp+1E0h] [rbp-118h]
  __int128 v39; // [rsp+1F0h] [rbp-108h]
  __int64 v40; // [rsp+200h] [rbp-F8h]
  __int128 v41; // [rsp+210h] [rbp-E8h]
  __m256i v42; // [rsp+220h] [rbp-D8h]
  __int128 v43; // [rsp+240h] [rbp-B8h]
  __int64 v44; // [rsp+250h] [rbp-A8h]
  __int128 v45; // [rsp+258h] [rbp-A0h]
  __int64 v46; // [rsp+268h] [rbp-90h]
  __int128 v47; // [rsp+270h] [rbp-88h] BYREF
  __int64 v48; // [rsp+280h] [rbp-78h]
  __int128 v49; // [rsp+288h] [rbp-70h]
  __int128 v50; // [rsp+298h] [rbp-60h]
  __int128 v51; // [rsp+2A8h] [rbp-50h]
  __int128 v52; // [rsp+2B8h] [rbp-40h]
  __int128 v53; // [rsp+2D0h] [rbp-28h]

  v1 = 0x8000000000000000LL;
  clap_builder::builder::command::Command::try_get_matches_from(src);
  if ( __OFSUB__(-*(_QWORD *)&src[0], 1LL) )
  {
    dest[1] = alloc::boxed::Box<T>::new(*((_QWORD *)&src[0] + 1), 125LL, v2, -*(_QWORD *)&src[0]);
    result = &off_EACE8;
    dest[2] = &off_EACE8;
    *dest = 0x8000000000000000LL;
    return result;
  }
  v28 = *(_OWORD *)((char *)&src[1] + 4);
  v29 = *(_OWORD *)((char *)&src[2] + 4);
  v30 = DWORD1(src[3]);
  v26 = src[0];
  v27 = src[1];
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aCompute, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, &v26);
  v5 = src;
  clap_builder::parser::error::MatchesError::unwrap(v31, src);
  v6 = *(void (__fastcall __noreturn **)())v31;
  if ( *(_QWORD *)v31 )
  {
    v7 = *(const char **)&v31[8];
    v8 = *(_OWORD *)&v31[16];
    v9 = *(_OWORD *)&v31[32];
    v10 = *((_QWORD *)&v32 + 1);
    v5 = (_OWORD *)v32;
  }
  else
  {
    v9 = 0LL;
    v8 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v7 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v6 = core::ops::function::FnOnce::call_once;
    v10 = 0LL;
  }
  *(_QWORD *)&v35 = v6;
  *((_QWORD *)&v35 + 1) = v7;
  v36 = v8;
  v37 = v9;
  *(_QWORD *)&v38 = v5;
  *((_QWORD *)&v38 + 1) = v10;
  if ( flag
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v26, aUser, 4LL)
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v26, aRole, 4LL)
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v26, aType, 4LL)
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v26, aRange, 5LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, &v26, aUser, 4LL);
    v11 = clap_builder::parser::error::MatchesError::unwrap(aUser, 4LL, src);
    if ( v11 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
      v40 = *(_QWORD *)&src[1];
      v39 = src[0];
    }
    else
    {
      *(_QWORD *)&v39 = 0x8000000000000000LL;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, &v26, aRole, 4LL);
    v12 = clap_builder::parser::error::MatchesError::unwrap(aRole, 4LL, src);
    if ( v12 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
      v25 = *(_QWORD *)&src[1];
      v24 = src[0];
    }
    else
    {
      *(_QWORD *)&v24 = 0x8000000000000000LL;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, &v26, aType, 4LL);
    v13 = clap_builder::parser::error::MatchesError::unwrap(aType, 4LL, src);
    if ( v13 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *(_QWORD *)(v13 + 8), *(_QWORD *)(v13 + 16));
      v22 = *(_QWORD *)&src[1];
      v21 = src[0];
    }
    else
    {
      *(_QWORD *)&v21 = 0x8000000000000000LL;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, &v26, aRange, 5LL);
    v14 = clap_builder::parser::error::MatchesError::unwrap(aRange, 5LL, src);
    if ( v14 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
      *(_QWORD *)&v31[16] = *(_QWORD *)&src[1];
      *(_OWORD *)v31 = src[0];
    }
    else
    {
      *(_QWORD *)v31 = 0x8000000000000000LL;
    }
    v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v35);
    if ( v15 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *(_QWORD *)(v15 + 8), *(_QWORD *)(v15 + 16));
      v1 = *(_QWORD *)&src[0];
      v53 = *(_OWORD *)((char *)src + 8);
    }
    v42.m256i_i64[0] = v40;
    v41 = v39;
    *(_OWORD *)&v42.m256i_u64[1] = v24;
    v42.m256i_i64[3] = v25;
    v43 = v21;
    v44 = v22;
    v45 = *(_OWORD *)v31;
    v46 = *(_QWORD *)&v31[16];
    v33.m256i_i64[3] = *(_QWORD *)&v31[16];
    v33.m256i_i64[0] = v22;
    *(_OWORD *)&v33.m256i_u64[1] = *(_OWORD *)v31;
    v32 = v21;
    *(__m256i *)&v31[16] = v42;
    *(_OWORD *)v31 = v39;
    v34.m256i_i64[0] = v1;
    *(_OWORD *)&v34.m256i_u64[1] = v53;
    v34.m256i_i8[24] = flag;
    *(__int32 *)((char *)&v34.m256i_i32[6] + 1) = v24;
    v34.m256i_i32[7] = *(_DWORD *)((char *)&v24 + 3);
    core::iter::traits::iterator::Iterator::collect(&v21, &v35);
    *(__m256i *)((char *)&src[7] + 8) = v34;
    *(__m256i *)((char *)&src[5] + 8) = v33;
    *(_OWORD *)((char *)&src[4] + 8) = v32;
    *(_OWORD *)((char *)&src[3] + 8) = *(_OWORD *)&v31[32];
    *(_OWORD *)((char *)&src[2] + 8) = *(_OWORD *)&v31[16];
    *(_OWORD *)((char *)&src[1] + 8) = *(_OWORD *)v31;
    src[0] = v21;
    *(_QWORD *)&src[1] = v22;
    goto LABEL_26;
  }
  v16 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v35);
  if ( !v16 )
  {
    *(_QWORD *)&v19 = 0x8000000000000000LL;
    goto LABEL_34;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *(_QWORD *)(v16 + 8), *(_QWORD *)(v16 + 16));
  v20 = *(_QWORD *)&src[1];
  v19 = src[0];
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
  {
LABEL_34:
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v19);
    *dest = 0LL;
    dest[1] = 8LL;
    dest[2] = 0LL;
    dest[3] = 0x8000000000000001LL;
    return (__int64 (__fastcall **)())core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v26);
  }
  v17 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v35);
  if ( !v17
    || (<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *(_QWORD *)(v17 + 8), *(_QWORD *)(v17 + 16)),
        *(_QWORD *)&src[0] == 0x8000000000000000LL) )
  {
    LODWORD(src[0]) = 10;
    v18 = alloc::boxed::Box<T>::new(src);
    v47 = v19;
    v48 = v20;
    v49 = v35;
    v50 = v36;
    v51 = v37;
    v52 = v38;
    dest[1] = v18;
    dest[2] = &off_EAC60;
    *dest = 0x8000000000000000LL;
    core::ptr::drop_in_place<uu_runcon::parse_command_line<core::iter::adapters::cloned::Cloned<core::slice::iter::Iter<std::ffi::os_str::OsString>>>::{{closure}}>(&v47);
    return (__int64 (__fastcall **)())core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v26);
  }
  v48 = v20;
  v47 = v19;
  v49 = v35;
  v50 = v36;
  v51 = v37;
  v52 = v38;
  *(_QWORD *)v31 = *(_QWORD *)&src[0];
  *(_OWORD *)&v31[8] = *(_OWORD *)((char *)src + 8);
  uu_runcon::parse_command_line::{{closure}}(src, &v47, v31);
LABEL_26:
  memcpy(dest, src, 0x98uLL);
  return (__int64 (__fastcall **)())core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v26);
}