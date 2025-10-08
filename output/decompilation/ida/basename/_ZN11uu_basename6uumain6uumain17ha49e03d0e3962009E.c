__int64 __fastcall uu_basename::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool v4; // zf
  char v5; // al
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int128 v14; // kr00_16
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // [rsp+7h] [rbp-411h] BYREF
  __int64 v20; // [rsp+8h] [rbp-410h] BYREF
  __int128 v21; // [rsp+10h] [rbp-408h]
  __m256i v22; // [rsp+20h] [rbp-3F8h] BYREF
  __int128 v23; // [rsp+40h] [rbp-3D8h]
  __int128 v24; // [rsp+50h] [rbp-3C8h]
  __int64 v25; // [rsp+68h] [rbp-3B0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-3A8h]
  __int64 v27; // [rsp+78h] [rbp-3A0h]
  __m256i v28; // [rsp+80h] [rbp-398h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-378h]
  __int64 v30; // [rsp+B0h] [rbp-368h]
  _QWORD v31[4]; // [rsp+B8h] [rbp-360h] BYREF
  _QWORD v32[3]; // [rsp+D8h] [rbp-340h] BYREF
  _BYTE v33[24]; // [rsp+F0h] [rbp-328h] BYREF
  __int128 v34; // [rsp+108h] [rbp-310h] BYREF
  __int64 v35; // [rsp+118h] [rbp-300h]
  __m256i dest; // [rsp+120h] [rbp-2F8h] BYREF
  __int128 v37; // [rsp+140h] [rbp-2D8h]
  __int128 v38; // [rsp+150h] [rbp-2C8h]

  uucore::Args::collect_lossy(v33, a1, a2);
  uu_basename::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v22, &dest, v33);
  if ( __OFSUB__(-v22.m256i_i64[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v22.m256i_i64[1],
             &dest,
             v2,
             -v22.m256i_i64[0]);
  v30 = v24;
  v29 = v23;
  v28 = v22;
  v4 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          &v28,
                          aZero_0,
                          *(&uu_basename::options::ZERO + 1)) == 0;
  v5 = 10;
  if ( !v4 )
    v5 = 0;
  v19 = v5;
  v6 = (__int64)*(&uu_basename::options::NAME + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, &v28, aName, v6);
  clap_builder::parser::error::MatchesError::unwrap(&v22, aName, v6, &dest);
  if ( v22.m256i_i64[0] )
  {
    v38 = v24;
    v37 = v23;
    dest = v22;
  }
  else
  {
    dest.m256i_i64[0] = (__int64)core::ops::function::FnOnce::call_once;
    dest.m256i_i64[1] = (__int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    dest.m256i_i64[2] = (__int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    dest.m256i_i64[3] = 0LL;
    *((_QWORD *)&v37 + 1) = 0LL;
    *((_QWORD *)&v38 + 1) = 0LL;
  }
  core::iter::traits::iterator::Iterator::collect(&v25, &dest);
  v7 = v27;
  if ( !v27 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v22, "missing operandextra operand \x01", 15LL);
    dest.m256i_i64[2] = v22.m256i_i64[2];
    *(_OWORD *)dest.m256i_i8 = *(_OWORD *)v22.m256i_i8;
    dest.m256i_i32[6] = 1;
    v11 = alloc::boxed::Box<T>::new(&dest);
    v12 = v26;
    goto LABEL_15;
  }
  v8 = (__int64)*(&uu_basename::options::SUFFIX + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, &v28, aSuffix, v8);
  if ( !clap_builder::parser::error::MatchesError::unwrap(aSuffix, v8, &dest)
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           &v28,
                           aMultiple,
                           *(&uu_basename::options::MULTIPLE + 1)) )
  {
    if ( v7 == 2 )
    {
      v27 = 1LL;
      <alloc::string::String as core::clone::Clone>::clone(&v20, *(_QWORD *)(v26 + 8));
      goto LABEL_17;
    }
    if ( v7 == 1 )
      goto LABEL_13;
    v15 = v26;
    v16 = *(_QWORD *)(v26 + 16);
    v17 = *(_QWORD *)(v16 + 8);
    v18 = *(_QWORD *)(v16 + 16);
    v22.m256i_i64[0] = 0LL;
    v22.m256i_i64[1] = v17;
    v22.m256i_i64[2] = v18;
    v22.m256i_i8[24] = 1;
    v31[0] = &v22;
    v31[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&off_DE9A8;
    dest.m256i_i64[1] = 1LL;
    *(_QWORD *)&v37 = 0LL;
    dest.m256i_i64[2] = (__int64)v31;
    dest.m256i_i64[3] = 1LL;
    core::option::Option<T>::map_or_else(&v34, &dest);
    dest.m256i_i32[6] = 1;
    *(_OWORD *)dest.m256i_i8 = v34;
    dest.m256i_i64[2] = v35;
    v11 = alloc::boxed::Box<T>::new(&dest);
    v12 = v15;
LABEL_15:
    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v25, v12);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
    return v11;
  }
  v9 = (__int64)*(&uu_basename::options::SUFFIX + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, &v28, aSuffix, v9);
  v10 = clap_builder::parser::error::MatchesError::unwrap(aSuffix, v9, &dest);
  if ( v10 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&dest, v10);
    *(_OWORD *)v22.m256i_i8 = *(_OWORD *)&dest.m256i_u64[1];
    if ( dest.m256i_i64[0] != 0x8000000000000000LL )
    {
      v21 = *(_OWORD *)v22.m256i_i8;
      v20 = dest.m256i_i64[0];
      goto LABEL_17;
    }
  }
LABEL_13:
  v20 = 0LL;
  v21 = 1uLL;
LABEL_17:
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v31, &v25);
  v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v31);
  if ( v13 )
  {
    v14 = v21;
    do
    {
      uu_basename::basename(v32, *(_QWORD *)(v13 + 8), *(_QWORD *)(v13 + 16), v14, *((_QWORD *)&v14 + 1));
      v22.m256i_i64[0] = (__int64)v32;
      v22.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      v22.m256i_i64[2] = (__int64)&v19;
      v22.m256i_i64[3] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
      dest.m256i_i64[0] = (__int64)"\x01";
      dest.m256i_i64[1] = 2LL;
      *(_QWORD *)&v37 = 0LL;
      dest.m256i_i64[2] = (__int64)&v22;
      dest.m256i_i64[3] = 2LL;
      std::io::stdio::_print(&dest);
      core::ptr::drop_in_place<alloc::string::String>(v32[0], v32[1]);
      v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v31);
    }
    while ( v13 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v31);
  core::ptr::drop_in_place<alloc::string::String>(v20, v21);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
  return 0LL;
}