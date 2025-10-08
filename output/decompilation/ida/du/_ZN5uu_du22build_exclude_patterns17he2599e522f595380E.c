__int64 __fastcall uu_du::build_exclude_patterns(__int64 a1, __int64 a2)
{
  void *v2; // rsi
  void (__fastcall __noreturn *v3)(); // rax
  const char *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 v7; // rdx
  const char *v8; // rsi
  void (__fastcall __noreturn *v9)(); // rax
  const char *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int128 v17; // [rsp+18h] [rbp-2B0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-2A0h]
  __int128 v19; // [rsp+30h] [rbp-298h] BYREF
  __int64 v20; // [rsp+40h] [rbp-288h]
  char **v21; // [rsp+50h] [rbp-278h] BYREF
  _BYTE v22[24]; // [rsp+58h] [rbp-270h]
  __int128 v23; // [rsp+70h] [rbp-258h]
  const char *v24; // [rsp+80h] [rbp-248h]
  __int64 v25; // [rsp+88h] [rbp-240h]
  __int128 v26; // [rsp+90h] [rbp-238h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-228h]
  __int128 v28; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-210h]
  void (__fastcall __noreturn *v30)(); // [rsp+C0h] [rbp-208h] BYREF
  const char *v31; // [rsp+C8h] [rbp-200h]
  __int128 v32; // [rsp+D0h] [rbp-1F8h]
  __int128 v33; // [rsp+E0h] [rbp-1E8h]
  void *v34; // [rsp+F0h] [rbp-1D8h]
  __int64 v35; // [rsp+F8h] [rbp-1D0h]
  __int64 v36; // [rsp+100h] [rbp-1C8h]
  __int64 v37; // [rsp+120h] [rbp-1A8h]
  __int128 v38; // [rsp+140h] [rbp-188h] BYREF
  __int64 v39; // [rsp+150h] [rbp-178h]
  _QWORD v40[2]; // [rsp+158h] [rbp-170h] BYREF
  __int128 v41; // [rsp+168h] [rbp-160h]
  __int128 v42; // [rsp+178h] [rbp-150h]
  const char *v43; // [rsp+188h] [rbp-140h]
  __int64 v44; // [rsp+190h] [rbp-138h]
  __int64 v45; // [rsp+198h] [rbp-130h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp-128h]
  __int64 v47; // [rsp+1B0h] [rbp-118h]
  _BYTE v48[136]; // [rsp+1D0h] [rbp-F8h] BYREF
  _BYTE v49[112]; // [rsp+258h] [rbp-70h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v48, a2, &unk_21424, 12LL);
  v2 = &unk_21424;
  clap_builder::parser::error::MatchesError::unwrap(&v30, &unk_21424, 12LL, v48);
  v3 = v30;
  if ( v30 )
  {
    v4 = v31;
    v5 = v32;
    v6 = v33;
    v2 = v34;
    v7 = v35;
  }
  else
  {
    v6 = 0LL;
    v5 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v3 = core::ops::function::FnOnce::call_once;
    v4 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v7 = 0LL;
  }
  v30 = v3;
  v31 = v4;
  v32 = v5;
  v33 = v6;
  v34 = v2;
  v35 = v7;
  v36 = 0LL;
  v37 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v48, a2, aExclude, 7LL);
  v8 = aExclude;
  clap_builder::parser::error::MatchesError::unwrap(&v21, aExclude, 7LL, v48);
  v9 = (void (__fastcall __noreturn *)())v21;
  if ( v21 )
  {
    v10 = *(const char **)v22;
    v11 = *(_OWORD *)&v22[8];
    v12 = v23;
    v8 = v24;
    v13 = v25;
  }
  else
  {
    v12 = 0LL;
    v11 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v10 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v9 = core::ops::function::FnOnce::call_once;
    v13 = 0LL;
  }
  v40[0] = v9;
  v40[1] = v10;
  v41 = v11;
  v42 = v12;
  v43 = v8;
  v44 = v13;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = 8LL;
  v18 = 0LL;
  core::iter::traits::iterator::Iterator::chain(v48, v40, &v30);
  while ( 1 )
  {
    core::iter::adapters::chain::and_then_or_clear(&v21, v49);
    core::option::Option<T>::or_else(&v28, &v21, v48);
    if ( (_QWORD)v28 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>(v48);
      v14 = a1;
      *(_QWORD *)(a1 + 16) = v18;
      *(_OWORD *)a1 = v17;
      return v14;
    }
    v20 = v29;
    v19 = v28;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose_0, 7LL) )
    {
      *(_QWORD *)&v26 = &v19;
      *((_QWORD *)&v26 + 1) = <alloc::string::String as core::fmt::Debug>::fmt;
      v21 = &off_145D38;
      *(_QWORD *)v22 = 2LL;
      *(_QWORD *)&v23 = 0LL;
      *(_QWORD *)&v22[8] = &v26;
      *(_QWORD *)&v22[16] = 1LL;
      std::io::stdio::_print(&v21);
    }
    uucore::features::parser::parse_glob::from_str(&v45, *((_QWORD *)&v19 + 1), v20);
    if ( v45 == 0x8000000000000000LL )
      break;
    alloc::vec::Vec<T,A>::push(&v17, &v45);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
  }
  v39 = v47;
  v38 = v46;
  <T as alloc::string::SpecToString>::spec_to_string(&v26, &v38);
  *(_QWORD *)&v22[16] = v27;
  *(_OWORD *)v22 = v26;
  v21 = (char **)&byte_4;
  v14 = a1;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v21);
  *(_QWORD *)(a1 + 16) = &off_145D90;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::string::String>(&v19);
  core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::adapters::cloned::Cloned<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>>,core::iter::adapters::flatten::FlatMap<clap_builder::parser::matches::arg_matches::ValuesRef<alloc::string::String>,alloc::vec::Vec<alloc::string::String>,uu_du::file_as_vec<&alloc::string::String>>>>(v48);
  core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(&v17);
  return v14;
}