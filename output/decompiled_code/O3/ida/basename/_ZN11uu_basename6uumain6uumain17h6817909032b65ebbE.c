__int64 __fastcall uu_basename::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  char v4; // al
  __int64 v5; // r12
  const char *v6; // rsi
  void (__fastcall __noreturn *v7)(); // rax
  const char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 i; // rax
  __int128 v17; // xmm0
  char v18; // [rsp+7h] [rbp-411h] BYREF
  __int64 v19; // [rsp+8h] [rbp-410h] BYREF
  __int128 v20; // [rsp+10h] [rbp-408h]
  __m256i v21; // [rsp+20h] [rbp-3F8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-3D8h]
  const char *v23; // [rsp+50h] [rbp-3C8h]
  __int64 v24; // [rsp+58h] [rbp-3C0h]
  char v25[8]; // [rsp+68h] [rbp-3B0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-3A8h]
  __int64 v27; // [rsp+78h] [rbp-3A0h]
  __int128 v28; // [rsp+80h] [rbp-398h] BYREF
  __int64 v29; // [rsp+90h] [rbp-388h]
  __m256i v30; // [rsp+A0h] [rbp-378h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-358h]
  const char *v32; // [rsp+D0h] [rbp-348h]
  __int128 v33; // [rsp+D8h] [rbp-340h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-330h]
  __int128 v35; // [rsp+F0h] [rbp-328h] BYREF
  __int64 v36; // [rsp+100h] [rbp-318h]
  _BYTE v37[24]; // [rsp+108h] [rbp-310h] BYREF
  _BYTE dest[48]; // [rsp+120h] [rbp-2F8h] BYREF
  const char *v39; // [rsp+150h] [rbp-2C8h]
  __int64 v40; // [rsp+158h] [rbp-2C0h]

  uucore::Args::collect_lossy(&v33, a1, a2);
  uu_basename::uu_app(dest);
  v29 = v34;
  v28 = v33;
  clap_builder::builder::command::Command::try_get_matches_from(&v21, dest, &v28);
  if ( v21.m256i_i64[0] == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21.m256i_i64[1]);
  v32 = v23;
  v31 = v22;
  v30 = v21;
  v3 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          &v30,
                          aZero_0,
                          *(&uu_basename::options::ZERO + 1)) == 0;
  v4 = 10;
  if ( !v3 )
    v4 = 0;
  v18 = v4;
  v5 = (__int64)*(&uu_basename::options::NAME + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, &v30, aName, v5);
  v6 = aName;
  clap_builder::parser::error::MatchesError::unwrap(&v21, aName, v5, dest);
  v7 = (void (__fastcall __noreturn *)())v21.m256i_i64[0];
  if ( v21.m256i_i64[0] )
  {
    v8 = (const char *)v21.m256i_i64[1];
    v9 = *(_OWORD *)&v21.m256i_u64[2];
    v10 = v22;
    v6 = v23;
    v11 = v24;
  }
  else
  {
    v10 = 0LL;
    v9 = (unsigned __int64)"&";
    v8 = "&";
    v7 = core::ops::function::FnOnce::call_once;
    v11 = 0LL;
  }
  *(_QWORD *)dest = v7;
  *(_QWORD *)&dest[8] = v8;
  *(_OWORD *)&dest[16] = v9;
  *(_OWORD *)&dest[32] = v10;
  v39 = v6;
  v40 = v11;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v25, dest);
  if ( !v27 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v21);
    *(_QWORD *)&dest[16] = v21.m256i_i64[2];
    *(_OWORD *)dest = *(_OWORD *)v21.m256i_i8;
    *(_DWORD *)&dest[24] = 1;
    v14 = alloc::boxed::Box<T>::new(dest);
    goto LABEL_15;
  }
  v12 = (__int64)*(&uu_basename::options::SUFFIX + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    dest,
    &v30,
    "suffix0.0.28{} [-z] NAME [SUFFIX]\n"
    "{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend"
    " each output line with NUL, not newlinesrc/uu/basename/src/basename.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be"
    "1/library/core/src/str/pattern.rs \n"
    "{}src/uucore/src/lib/lib.rsmanpage\n",
    v12);
  if ( !clap_builder::parser::error::MatchesError::unwrap(
          "suffix0.0.28{} [-z] NAME [SUFFIX]\n"
          "{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies"
          " -aend each output line with NUL, not newlinesrc/uu/basename/src/basename.rs/rustc/8bfcae730a5db2438bbda727961"
          "75bba21427be1/library/core/src/str/pattern.rs \n"
          "{}src/uucore/src/lib/lib.rsmanpage\n",
          v12,
          dest)
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           &v30,
                           aMultiple,
                           *(&uu_basename::options::MULTIPLE + 1)) )
  {
    switch ( v27 )
    {
      case 1LL:
        goto LABEL_13;
      case 2LL:
        v27 = 1LL;
        <alloc::string::String as core::clone::Clone>::clone(&v19, *(_QWORD *)(v26 + 8));
        goto LABEL_17;
      case 0LL:
        *(_QWORD *)dest = &off_10C908;
        *(_QWORD *)&dest[8] = 1LL;
        *(_QWORD *)&dest[16] = 8LL;
        *(_OWORD *)&dest[24] = 0LL;
        core::panicking::panic_fmt(dest, &off_10C918);
    }
    v17 = *(_OWORD *)(*(_QWORD *)(v26 + 16) + 8LL);
    v21.m256i_i64[0] = 0LL;
    *(_OWORD *)&v21.m256i_u64[1] = v17;
    v21.m256i_i8[24] = 1;
    *(_QWORD *)&v28 = &v21;
    *((_QWORD *)&v28 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_10C930;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[16] = &v28;
    *(_OWORD *)&dest[24] = 1uLL;
    core::option::Option<T>::map_or_else(&v35, dest);
    *(_DWORD *)&dest[24] = 1;
    *(_OWORD *)dest = v35;
    *(_QWORD *)&dest[16] = v36;
    v14 = alloc::boxed::Box<T>::new(dest);
LABEL_15:
    v2 = v14;
    core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(v25);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v30);
    return v2;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    dest,
    &v30,
    "suffix0.0.28{} [-z] NAME [SUFFIX]\n"
    "{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend"
    " each output line with NUL, not newlinesrc/uu/basename/src/basename.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be"
    "1/library/core/src/str/pattern.rs \n"
    "{}src/uucore/src/lib/lib.rsmanpage\n",
    v12);
  v13 = clap_builder::parser::error::MatchesError::unwrap(
          "suffix0.0.28{} [-z] NAME [SUFFIX]\n"
          "{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies"
          " -aend each output line with NUL, not newlinesrc/uu/basename/src/basename.rs/rustc/8bfcae730a5db2438bbda727961"
          "75bba21427be1/library/core/src/str/pattern.rs \n"
          "{}src/uucore/src/lib/lib.rsmanpage\n",
          v12,
          dest);
  if ( v13 )
  {
    <alloc::string::String as core::clone::Clone>::clone(dest, v13);
    *(_OWORD *)v21.m256i_i8 = *(_OWORD *)&dest[8];
    if ( *(_QWORD *)dest != 0x8000000000000000LL )
    {
      v20 = *(_OWORD *)v21.m256i_i8;
      v19 = *(_QWORD *)dest;
      goto LABEL_17;
    }
  }
LABEL_13:
  v19 = 0LL;
  v20 = 1uLL;
LABEL_17:
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v28, v25);
  for ( i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28);
        i;
        i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28) )
  {
    uu_basename::basename(v37, *(_QWORD *)(i + 8), *(_QWORD *)(i + 16), v20, *((_QWORD *)&v20 + 1));
    v21.m256i_i64[0] = (__int64)v37;
    v21.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v21.m256i_i64[2] = (__int64)&v18;
    v21.m256i_i64[3] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &unk_13868;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[16] = &v21;
    *(_OWORD *)&dest[24] = 2uLL;
    std::io::stdio::_print(dest);
    core::ptr::drop_in_place<alloc::string::String>(v37);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(&v28);
  core::ptr::drop_in_place<alloc::string::String>(&v19);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v30);
  return 0LL;
}
