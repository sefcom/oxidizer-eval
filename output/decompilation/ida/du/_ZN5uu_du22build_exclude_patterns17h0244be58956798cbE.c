__int64 __fastcall uu_du::build_exclude_patterns(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  void (__fastcall __noreturn *v4)(); // rax
  const char *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rdx
  const char *v9; // rsi
  void (__fastcall __noreturn *v10)(); // rax
  const char *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __m256i v18; // [rsp+0h] [rbp-2E8h] BYREF
  __int128 v19; // [rsp+20h] [rbp-2C8h]
  const char *v20; // [rsp+30h] [rbp-2B8h]
  __int64 v21; // [rsp+38h] [rbp-2B0h]
  __int64 v22; // [rsp+40h] [rbp-2A8h]
  __int128 v23; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-290h]
  __int128 v25; // [rsp+60h] [rbp-288h] BYREF
  __int64 v26; // [rsp+70h] [rbp-278h]
  __int128 *v27; // [rsp+80h] [rbp-268h] BYREF
  __int128 v28; // [rsp+88h] [rbp-260h]
  __int64 v29; // [rsp+98h] [rbp-250h]
  __int128 v30; // [rsp+A0h] [rbp-248h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-238h]
  __int128 v32; // [rsp+B8h] [rbp-230h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-220h]
  __int128 v34; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-208h]
  _QWORD v36[2]; // [rsp+F0h] [rbp-1F8h] BYREF
  __int128 v37; // [rsp+100h] [rbp-1E8h]
  __int128 v38; // [rsp+110h] [rbp-1D8h]
  const char *v39; // [rsp+120h] [rbp-1C8h]
  __int64 v40; // [rsp+128h] [rbp-1C0h]
  __m256i v41; // [rsp+130h] [rbp-1B8h] BYREF
  __int128 v42; // [rsp+150h] [rbp-198h]
  const char *v43; // [rsp+160h] [rbp-188h]
  _QWORD v44[2]; // [rsp+170h] [rbp-178h] BYREF
  __int128 v45; // [rsp+180h] [rbp-168h]
  __int128 v46; // [rsp+190h] [rbp-158h]
  const char *v47; // [rsp+1A0h] [rbp-148h]
  __int64 v48; // [rsp+1A8h] [rbp-140h]
  __int64 v49; // [rsp+1B0h] [rbp-138h]
  __int64 v50; // [rsp+1D0h] [rbp-118h]
  char v51[136]; // [rsp+1F0h] [rbp-F8h] BYREF
  char v52[112]; // [rsp+278h] [rbp-70h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v51, a2, aExcludeFrom, 12LL);
  v3 = aExcludeFrom;
  clap_builder::parser::error::MatchesError::unwrap(&v18, aExcludeFrom, 12LL, v51);
  v4 = (void (__fastcall __noreturn *)())v18.m256i_i64[0];
  if ( v18.m256i_i64[0] )
  {
    v5 = (const char *)v18.m256i_i64[1];
    v6 = *(_OWORD *)&v18.m256i_u64[2];
    v7 = v19;
    v3 = v20;
    v8 = v21;
  }
  else
  {
    v7 = 0LL;
    v6 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v5 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v4 = core::ops::function::FnOnce::call_once;
    v8 = 0LL;
  }
  v44[0] = v4;
  v44[1] = v5;
  v45 = v6;
  v46 = v7;
  v47 = v3;
  v48 = v8;
  v49 = 0LL;
  v50 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v51, a2, aExclude, 7LL);
  v9 = aExclude;
  clap_builder::parser::error::MatchesError::unwrap(&v18, aExclude, 7LL, v51);
  v10 = (void (__fastcall __noreturn *)())v18.m256i_i64[0];
  v22 = a1;
  if ( v18.m256i_i64[0] )
  {
    v11 = (const char *)v18.m256i_i64[1];
    v12 = *(_OWORD *)&v18.m256i_u64[2];
    v13 = v19;
    v9 = v20;
    v14 = v21;
  }
  else
  {
    v13 = 0LL;
    v12 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v11 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v10 = core::ops::function::FnOnce::call_once;
    v14 = 0LL;
  }
  v36[0] = v10;
  v36[1] = v11;
  v37 = v12;
  v38 = v13;
  v39 = v9;
  v40 = v14;
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = 8LL;
  v24 = 0LL;
  core::iter::traits::iterator::Iterator::chain(v51, v36, v44);
  while ( 1 )
  {
    core::iter::adapters::chain::and_then_or_clear(&v18, v52);
    core::option::Option<T>::or_else(&v32, &v18, v51);
    if ( (_QWORD)v32 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>(v51);
      v15 = v22;
      *(_QWORD *)(v22 + 16) = v24;
      *(_OWORD *)v15 = v23;
      return v15;
    }
    v26 = v33;
    v25 = v32;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose_0, 7LL) )
    {
      *(_QWORD *)&v30 = &v25;
      v27 = &v30;
      *(_QWORD *)&v28 = <&T as core::fmt::Debug>::fmt;
      v18.m256i_i64[0] = (__int64)&off_184500;
      v18.m256i_i64[1] = 2LL;
      *(_QWORD *)&v19 = 0LL;
      v18.m256i_i64[2] = (__int64)&v27;
      v18.m256i_i64[3] = 1LL;
      std::io::stdio::_print(&v18);
    }
    uucore::parser::parse_glob::from_str(&v18, *((_QWORD *)&v25 + 1), v26);
    if ( v18.m256i_i64[0] == 0x8000000000000000LL )
      break;
    v43 = v20;
    v42 = v19;
    v41 = v18;
    alloc::vec::Vec<T,A>::push(&v23, &v41);
    core::ptr::drop_in_place<alloc::string::String>(&v25);
  }
  v35 = v18.m256i_i64[3];
  v34 = *(_OWORD *)&v18.m256i_u64[1];
  <T as alloc::string::ToString>::to_string(&v30, &v34);
  v29 = v31;
  v28 = v30;
  v27 = (_OWORD *)&byte_4;
  v16 = alloc::boxed::Box<T>::new(&v27);
  v15 = v22;
  *(_QWORD *)(v22 + 8) = v16;
  *(_QWORD *)(v15 + 16) = &off_184558;
  *(_QWORD *)v15 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::string::String>(&v25);
  core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>(v51);
  core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(&v23);
  return v15;
}
