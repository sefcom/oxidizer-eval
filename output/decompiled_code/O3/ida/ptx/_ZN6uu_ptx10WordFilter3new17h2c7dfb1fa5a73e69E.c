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
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  _BYTE v21[48]; // [rsp+0h] [rbp-188h] BYREF
  __int128 v22; // [rsp+30h] [rbp-158h]
  _BYTE v23[48]; // [rsp+40h] [rbp-148h] BYREF
  __int128 v24; // [rsp+70h] [rbp-118h]
  __int128 v25; // [rsp+80h] [rbp-108h] BYREF
  __m256i v26; // [rsp+90h] [rbp-F8h]
  __int128 v27; // [rsp+B0h] [rbp-D8h]
  _BYTE v28[48]; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+F0h] [rbp-98h] BYREF
  __m256i v30; // [rsp+100h] [rbp-88h]
  __int128 v31; // [rsp+120h] [rbp-68h] BYREF
  __m256i v32; // [rsp+130h] [rbp-58h]
  _QWORD v33[7]; // [rsp+150h] [rbp-38h] BYREF

  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
         a2,
         anon_2a006399170f7188a90d81ab0d3d1c41_22_llvm_26549548904132577,
         9LL);
  if ( v4 )
  {
    uu_ptx::read_word_filter_file(
      (__int64)v21,
      a2,
      (__int64)anon_2a006399170f7188a90d81ab0d3d1c41_22_llvm_26549548904132577,
      9LL);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v23,
      v21);
    v5 = *(_QWORD *)&v23[8];
    v6 = *(_QWORD *)v23;
    v7 = *(_QWORD *)&v23[16];
    if ( !*(_QWORD *)v23 )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)&v23[8];
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
    v26.m256i_i64[0] = *(_QWORD *)&v23[40];
    v25 = *(_OWORD *)&v23[24];
  }
  else
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v21);
    v5 = *(_QWORD *)&v21[8];
    v6 = *(_QWORD *)v21;
    v7 = *(_QWORD *)&v21[16];
    v25 = *(_OWORD *)&v21[24];
    v26.m256i_i64[0] = *(_QWORD *)&v21[40];
  }
  *(_QWORD *)&v29 = v6;
  *((_QWORD *)&v29 + 1) = v5;
  v30.m256i_i64[0] = v7;
  *(_OWORD *)&v30.m256i_u64[1] = v25;
  v30.m256i_i64[3] = v26.m256i_i64[0];
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
         a2,
         anon_2a006399170f7188a90d81ab0d3d1c41_21_llvm_26549548904132577,
         11LL);
  if ( v8 )
  {
    uu_ptx::read_word_filter_file(
      (__int64)v21,
      a2,
      (__int64)anon_2a006399170f7188a90d81ab0d3d1c41_21_llvm_26549548904132577,
      11LL);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v23,
      v21);
    v9 = *(_QWORD *)&v23[8];
    v10 = *(_QWORD *)v23;
    v11 = *(_QWORD *)&v23[16];
    if ( !*(_QWORD *)v23 )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)&v23[8];
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_30:
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v29);
      return a1;
    }
    v26.m256i_i64[0] = *(_QWORD *)&v23[40];
    v25 = *(_OWORD *)&v23[24];
  }
  else
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v21);
    v9 = *(_QWORD *)&v21[8];
    v10 = *(_QWORD *)v21;
    v11 = *(_QWORD *)&v21[16];
    v25 = *(_OWORD *)&v21[24];
    v26.m256i_i64[0] = *(_QWORD *)&v21[40];
  }
  *(_QWORD *)&v31 = v10;
  *((_QWORD *)&v31 + 1) = v9;
  v32.m256i_i64[0] = v11;
  *(_OWORD *)&v32.m256i_u64[1] = v25;
  v32.m256i_i64[3] = v26.m256i_i64[0];
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                           a2,
                           anon_2a006399170f7188a90d81ab0d3d1c41_18_llvm_26549548904132577,
                           10LL)
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_17_llvm_26549548904132577,
                          11LL) )
  {
    *(_QWORD *)v28 = 0LL;
    goto LABEL_12;
  }
  uu_ptx::read_char_filter_file((__int64)v21);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v23,
    v21);
  v15 = *(_QWORD *)&v23[16];
  if ( !*(_QWORD *)v23 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v23[8];
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v31);
    goto LABEL_30;
  }
  v26 = *(__m256i *)&v23[16];
  v25 = *(_OWORD *)v23;
  if ( *(_BYTE *)(a3 + 88) )
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(
      v21,
      *(_QWORD *)&v23[40],
      *(_QWORD *)v23,
      *(_QWORD *)&v23[16]);
    *(_OWORD *)&v23[32] = *(_OWORD *)&v21[32];
    *(_OWORD *)&v23[16] = *(_OWORD *)&v21[16];
    *(_OWORD *)v23 = *(_OWORD *)v21;
  }
  else
  {
    <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(
      v23,
      *(_QWORD *)&v23[40],
      *(_QWORD *)v23,
      *(_QWORD *)&v23[16]);
  }
  *(__m256i *)&v21[16] = v26;
  *(_OWORD *)v21 = v25;
  <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(v23, v21);
  *(_OWORD *)v28 = *(_OWORD *)v23;
  *(_OWORD *)&v28[16] = *(_OWORD *)&v23[16];
  *(_OWORD *)&v28[32] = *(_OWORD *)&v23[32];
LABEL_12:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_17_llvm_26549548904132577,
                          11LL)
    && (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v21),
        (v12 = clap_builder::parser::error::MatchesError::unwrap(
                 anon_2a006399170f7188a90d81ab0d3d1c41_17_llvm_26549548904132577,
                 11LL,
                 v21)) != 0)
    && *(_QWORD *)(v12 + 16) )
  {
    <alloc::string::String as core::clone::Clone>::clone(v21, v12);
  }
  else
  {
    if ( *(_QWORD *)v28 )
    {
      *(_QWORD *)&v23[40] = *(_QWORD *)&v28[40];
      *(_OWORD *)&v23[24] = *(_OWORD *)&v28[24];
      *(_OWORD *)&v23[8] = *(_OWORD *)&v28[8];
      *(_QWORD *)v23 = *(_QWORD *)v28;
      <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21, v23);
      *(_OWORD *)v23 = *(_OWORD *)v21;
      *(_OWORD *)&v23[16] = *(_OWORD *)&v21[16];
      *(_OWORD *)&v23[32] = *(_OWORD *)&v21[32];
      v24 = v22;
      <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v25, v23);
      v33[0] = &v25;
      v33[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v21 = &off_2EE460;
      *(_QWORD *)&v21[8] = 2LL;
      *(_QWORD *)&v21[32] = 0LL;
      *(_QWORD *)&v21[16] = v33;
      *(_QWORD *)&v21[24] = 1LL;
      ((void (__fastcall *)(_BYTE *, _BYTE *))core::option::Option<T>::map_or_else)(v23, v21);
      core::ptr::drop_in_place<alloc::string::String>(&v25);
      v13 = *(_QWORD *)v23;
      v27 = *(_OWORD *)&v23[8];
      v14 = 0;
      goto LABEL_27;
    }
    if ( *(_BYTE *)(a3 + 88) )
      <T as alloc::slice::hack::ConvertVec>::to_vec(v21, aW_0, 3LL);
    else
      <T as alloc::slice::hack::ConvertVec>::to_vec(v21, asc_5ECD8, 7LL);
  }
  v13 = *(_QWORD *)v21;
  v27 = *(_OWORD *)&v21[8];
  v14 = 1;
LABEL_27:
  v16 = v29;
  v17 = *(_OWORD *)v30.m256i_i8;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v30.m256i_u64[2];
  *(_OWORD *)(a1 + 40) = v17;
  *(_OWORD *)(a1 + 24) = v16;
  v18 = *(_OWORD *)v32.m256i_i8;
  v19 = *(_OWORD *)&v32.m256i_u64[2];
  *(_OWORD *)(a1 + 72) = v31;
  *(_OWORD *)(a1 + 88) = v18;
  *(_OWORD *)(a1 + 104) = v19;
  *(_QWORD *)a1 = v13;
  *(_OWORD *)(a1 + 8) = v27;
  *(_BYTE *)(a1 + 120) = v4;
  *(_BYTE *)(a1 + 121) = v8;
  if ( v14 )
    core::ptr::drop_in_place<core::option::Option<std::collections::hash::set::HashSet<char>>>(v28);
  return a1;
}
