__int64 __fastcall uu_ptx::WordFilter::new(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // cl
  __int64 v18; // r15
  __int64 v19; // r13
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v26; // [rsp+8h] [rbp-1A0h]
  __int64 v27; // [rsp+8h] [rbp-1A0h]
  __int128 v28; // [rsp+10h] [rbp-198h] BYREF
  __m256i v29; // [rsp+20h] [rbp-188h]
  _BYTE v30[48]; // [rsp+48h] [rbp-160h] BYREF
  __int64 v31; // [rsp+88h] [rbp-120h]
  __int128 v32; // [rsp+90h] [rbp-118h] BYREF
  __m256i v33; // [rsp+A0h] [rbp-108h]
  __m256i v34; // [rsp+C0h] [rbp-E8h]
  __int128 v35; // [rsp+E0h] [rbp-C8h]
  __int128 v36; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+100h] [rbp-A8h]
  __int128 v38; // [rsp+110h] [rbp-98h] BYREF
  __m256i v39; // [rsp+120h] [rbp-88h]
  _QWORD v40[2]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v41; // [rsp+150h] [rbp-58h]
  __int64 v42; // [rsp+160h] [rbp-48h] BYREF
  __int128 v43; // [rsp+168h] [rbp-40h]

  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aOnlyFile, 9LL);
  if ( v4 )
  {
    uu_ptx::read_word_filter_file((__int64)v30, a2, (__int64)aOnlyFile, 9LL);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v28,
      v30);
    v5 = *((_QWORD *)&v28 + 1);
    v6 = v28;
    v7 = v29.m256i_i64[0];
    if ( !(_QWORD)v28 )
    {
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v28 + 1);
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
    v33.m256i_i64[0] = v29.m256i_i64[3];
    v32 = *(_OWORD *)&v29.m256i_u64[1];
  }
  else
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v30);
    v5 = *(_QWORD *)&v30[8];
    v6 = *(_QWORD *)v30;
    v7 = *(_QWORD *)&v30[16];
    v32 = *(_OWORD *)&v30[24];
    v33.m256i_i64[0] = *(_QWORD *)&v30[40];
  }
  *(_QWORD *)&v38 = v6;
  *((_QWORD *)&v38 + 1) = v5;
  v39.m256i_i64[0] = v7;
  *(_OWORD *)&v39.m256i_u64[1] = v32;
  v39.m256i_i64[3] = v33.m256i_i64[0];
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aIgnoreFile, 11LL);
  if ( v8 )
  {
    uu_ptx::read_word_filter_file((__int64)v30, a2, (__int64)aIgnoreFile, 11LL);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v28,
      v30);
    v9 = *((_QWORD *)&v28 + 1);
    v10 = v28;
    v11 = v29.m256i_i64[0];
    if ( !(_QWORD)v28 )
    {
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v28 + 1);
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_28:
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v38);
      return a1;
    }
    v34.m256i_i64[2] = v29.m256i_i64[3];
    *(_OWORD *)v34.m256i_i8 = *(_OWORD *)&v29.m256i_u64[1];
  }
  else
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v30);
    v9 = *(_QWORD *)&v30[8];
    v10 = *(_QWORD *)v30;
    v11 = *(_QWORD *)&v30[16];
    *(_OWORD *)v34.m256i_i8 = *(_OWORD *)&v30[24];
    v34.m256i_i64[2] = *(_QWORD *)&v30[40];
  }
  *(_QWORD *)&v32 = v10;
  *((_QWORD *)&v32 + 1) = v9;
  v33.m256i_i64[0] = v11;
  *(_OWORD *)&v33.m256i_u64[1] = *(_OWORD *)v34.m256i_i8;
  v33.m256i_i64[3] = v34.m256i_i64[2];
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aBreakFile, 10LL)
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aWordRegexp, 11LL) )
  {
    v12 = 0LL;
    goto LABEL_12;
  }
  uu_ptx::read_char_filter_file((__int64)v30);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v28,
    v30);
  v31 = a3;
  v18 = v28;
  v19 = v29.m256i_i64[0];
  if ( !(_QWORD)v28 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v28 + 1);
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v32);
    goto LABEL_28;
  }
  v27 = *((_QWORD *)&v28 + 1);
  v37 = v29.m256i_i64[3];
  v36 = *(_OWORD *)&v29.m256i_u64[1];
  if ( *(_BYTE *)(v31 + 88) )
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v30);
    v29 = *(__m256i *)&v30[16];
    v28 = *(_OWORD *)v30;
  }
  else
  {
    core::iter::traits::iterator::Iterator::collect(&v28);
  }
  *(_QWORD *)v30 = v18;
  *(_QWORD *)&v30[8] = v27;
  *(_QWORD *)&v30[16] = v19;
  *(_OWORD *)&v30[24] = v36;
  *(_QWORD *)&v30[40] = v37;
  <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v28, v30);
  v26 = *((_QWORD *)&v28 + 1);
  v12 = v28;
  v34 = v29;
  a3 = v31;
LABEL_12:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aWordRegexp, 11LL)
    && (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v30),
        (v15 = clap_builder::parser::error::MatchesError::unwrap(aWordRegexp, 11LL, v30)) != 0)
    && *(_QWORD *)(v15 + 16)
    && (<alloc::string::String as core::clone::Clone>::clone(v30, v15),
        v16 = *(_QWORD *)v30,
        v41 = *(_OWORD *)&v30[8],
        v14 = -*(_QWORD *)v30,
        !__OFSUB__(-*(_QWORD *)v30, 1LL)) )
  {
    v20 = v41;
  }
  else
  {
    if ( v12 )
    {
      v29 = v34;
      *(_QWORD *)&v28 = v12;
      *((_QWORD *)&v28 + 1) = v26;
      <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(v30, &v28, v13, v14);
      core::iter::traits::iterator::Iterator::collect(&v28, v30);
      regex::escape(&v36, *((_QWORD *)&v28 + 1), v29.m256i_i64[0]);
      v40[0] = &v36;
      v40[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v30 = &off_251748;
      *(_QWORD *)&v30[8] = 2LL;
      *(_QWORD *)&v30[16] = v40;
      *(_OWORD *)&v30[24] = 1uLL;
      core::option::Option<T>::map_or_else(&v42, v30);
      core::ptr::drop_in_place<alloc::string::String>(&v36);
      core::ptr::drop_in_place<alloc::string::String>(&v28);
      v16 = v42;
      v35 = v43;
      v17 = 1;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(a3 + 88) )
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, aW_0, 3LL, v14);
    else
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, asc_55AD6, 7LL, v14);
    v16 = *(_QWORD *)v30;
    v20 = *(_OWORD *)&v30[8];
  }
  v35 = v20;
  v17 = 0;
LABEL_31:
  v21 = v38;
  v22 = *(_OWORD *)v39.m256i_i8;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v39.m256i_u64[2];
  *(_OWORD *)(a1 + 40) = v22;
  *(_OWORD *)(a1 + 24) = v21;
  v23 = *(_OWORD *)v33.m256i_i8;
  v24 = *(_OWORD *)&v33.m256i_u64[2];
  *(_OWORD *)(a1 + 72) = v32;
  *(_OWORD *)(a1 + 88) = v23;
  *(_OWORD *)(a1 + 104) = v24;
  *(_QWORD *)a1 = v16;
  *(_OWORD *)(a1 + 8) = v35;
  *(_BYTE *)(a1 + 120) = v4;
  *(_BYTE *)(a1 + 121) = v8;
  if ( !((unsigned __int8)v17 | (v12 == 0)) )
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<char>>(v12, v26);
  return a1;
}