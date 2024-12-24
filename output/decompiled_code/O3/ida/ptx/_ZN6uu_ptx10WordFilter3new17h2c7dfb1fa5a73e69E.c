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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  _BYTE v25[48]; // [rsp+0h] [rbp-188h] BYREF
  __int128 v26; // [rsp+30h] [rbp-158h]
  _BYTE v27[48]; // [rsp+40h] [rbp-148h] BYREF
  __int128 v28; // [rsp+70h] [rbp-118h]
  __int128 v29; // [rsp+80h] [rbp-108h] BYREF
  __m256i v30; // [rsp+90h] [rbp-F8h]
  __int128 v31; // [rsp+B0h] [rbp-D8h]
  _BYTE v32[48]; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-98h] BYREF
  __m256i v34; // [rsp+100h] [rbp-88h]
  __int128 v35; // [rsp+120h] [rbp-68h] BYREF
  __m256i v36; // [rsp+130h] [rbp-58h]
  _QWORD v37[7]; // [rsp+150h] [rbp-38h] BYREF

  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
         a2,
         anon_2a006399170f7188a90d81ab0d3d1c41_22_llvm_26549548904132577,
         9LL);
  if ( v4 )
  {
    uu_ptx::read_word_filter_file(
      (__int64)v25,
      a2,
      (__int64)anon_2a006399170f7188a90d81ab0d3d1c41_22_llvm_26549548904132577,
      9LL);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v27,
      v25);
    v5 = *(_QWORD *)&v27[8];
    v6 = *(_QWORD *)v27;
    v7 = *(_QWORD *)&v27[16];
    if ( !*(_QWORD *)v27 )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)&v27[8];
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
    v30.m256i_i64[0] = *(_QWORD *)&v27[40];
    v29 = *(_OWORD *)&v27[24];
  }
  else
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v25);
    v5 = *(_QWORD *)&v25[8];
    v6 = *(_QWORD *)v25;
    v7 = *(_QWORD *)&v25[16];
    v29 = *(_OWORD *)&v25[24];
    v30.m256i_i64[0] = *(_QWORD *)&v25[40];
  }
  *(_QWORD *)&v33 = v6;
  *((_QWORD *)&v33 + 1) = v5;
  v34.m256i_i64[0] = v7;
  *(_OWORD *)&v34.m256i_u64[1] = v29;
  v34.m256i_i64[3] = v30.m256i_i64[0];
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
         a2,
         anon_2a006399170f7188a90d81ab0d3d1c41_21_llvm_26549548904132577,
         11LL);
  if ( v8 )
  {
    uu_ptx::read_word_filter_file(
      (__int64)v25,
      a2,
      (__int64)anon_2a006399170f7188a90d81ab0d3d1c41_21_llvm_26549548904132577,
      11LL);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v27,
      v25);
    v9 = *(_QWORD *)&v27[8];
    v10 = *(_QWORD *)v27;
    v11 = *(_QWORD *)&v27[16];
    if ( !*(_QWORD *)v27 )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)&v27[8];
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_30:
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v33);
      return a1;
    }
    v30.m256i_i64[0] = *(_QWORD *)&v27[40];
    v29 = *(_OWORD *)&v27[24];
  }
  else
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v25);
    v9 = *(_QWORD *)&v25[8];
    v10 = *(_QWORD *)v25;
    v11 = *(_QWORD *)&v25[16];
    v29 = *(_OWORD *)&v25[24];
    v30.m256i_i64[0] = *(_QWORD *)&v25[40];
  }
  *(_QWORD *)&v35 = v10;
  *((_QWORD *)&v35 + 1) = v9;
  v36.m256i_i64[0] = v11;
  *(_OWORD *)&v36.m256i_u64[1] = v29;
  v36.m256i_i64[3] = v30.m256i_i64[0];
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                           a2,
                           anon_2a006399170f7188a90d81ab0d3d1c41_18_llvm_26549548904132577,
                           10LL)
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_17_llvm_26549548904132577,
                          11LL) )
  {
    *(_QWORD *)v32 = 0LL;
    goto LABEL_12;
  }
  uu_ptx::read_char_filter_file((__int64)v25);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v27,
    v25);
  v19 = *(_QWORD *)&v27[16];
  if ( !*(_QWORD *)v27 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v27[8];
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v35);
    goto LABEL_30;
  }
  v30 = *(__m256i *)&v27[16];
  v29 = *(_OWORD *)v27;
  if ( *(_BYTE *)(a3 + 88) )
  {
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(
      v25,
      *(_QWORD *)&v27[40],
      *(_QWORD *)v27,
      *(_QWORD *)&v27[16]);
    *(_OWORD *)&v27[32] = *(_OWORD *)&v25[32];
    *(_OWORD *)&v27[16] = *(_OWORD *)&v25[16];
    *(_OWORD *)v27 = *(_OWORD *)v25;
  }
  else
  {
    <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(
      v27,
      *(_QWORD *)&v27[40],
      *(_QWORD *)v27,
      *(_QWORD *)&v27[16]);
  }
  *(__m256i *)&v25[16] = v30;
  *(_OWORD *)v25 = v29;
  <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(v27, v25);
  *(_OWORD *)v32 = *(_OWORD *)v27;
  *(_OWORD *)&v32[16] = *(_OWORD *)&v27[16];
  *(_OWORD *)&v32[32] = *(_OWORD *)&v27[32];
LABEL_12:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a2,
                          anon_2a006399170f7188a90d81ab0d3d1c41_17_llvm_26549548904132577,
                          11LL)
    && (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v25),
        (v12 = clap_builder::parser::error::MatchesError::unwrap(
                 anon_2a006399170f7188a90d81ab0d3d1c41_17_llvm_26549548904132577,
                 11LL,
                 v25)) != 0)
    && *(_QWORD *)(v12 + 16) )
  {
    <alloc::string::String as core::clone::Clone>::clone(v25, v12);
  }
  else
  {
    if ( *(_QWORD *)v32 )
    {
      *(_QWORD *)&v27[40] = *(_QWORD *)&v32[40];
      *(_OWORD *)&v27[24] = *(_OWORD *)&v32[24];
      *(_OWORD *)&v27[8] = *(_OWORD *)&v32[8];
      *(_QWORD *)v27 = *(_QWORD *)v32;
      <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(v25, v27);
      *(_OWORD *)v27 = *(_OWORD *)v25;
      *(_OWORD *)&v27[16] = *(_OWORD *)&v25[16];
      *(_OWORD *)&v27[32] = *(_OWORD *)&v25[32];
      v28 = v26;
      <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v29, v27);
      v37[0] = &v29;
      v37[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v25 = &off_2EE460;
      *(_QWORD *)&v25[8] = 2LL;
      *(_QWORD *)&v25[32] = 0LL;
      *(_QWORD *)&v25[16] = v37;
      *(_QWORD *)&v25[24] = 1LL;
      core::option::Option<T>::map_or_else(v27, v25, v13, v14, v15, v16);
      core::ptr::drop_in_place<alloc::string::String>(&v29);
      v17 = *(_QWORD *)v27;
      v31 = *(_OWORD *)&v27[8];
      v18 = 0;
      goto LABEL_27;
    }
    if ( *(_BYTE *)(a3 + 88) )
      <T as alloc::slice::hack::ConvertVec>::to_vec(v25, aW_0, 3LL);
    else
      <T as alloc::slice::hack::ConvertVec>::to_vec(v25, asc_5ECD8, 7LL);
  }
  v17 = *(_QWORD *)v25;
  v31 = *(_OWORD *)&v25[8];
  v18 = 1;
LABEL_27:
  v20 = v33;
  v21 = *(_OWORD *)v34.m256i_i8;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v34.m256i_u64[2];
  *(_OWORD *)(a1 + 40) = v21;
  *(_OWORD *)(a1 + 24) = v20;
  v22 = *(_OWORD *)v36.m256i_i8;
  v23 = *(_OWORD *)&v36.m256i_u64[2];
  *(_OWORD *)(a1 + 72) = v35;
  *(_OWORD *)(a1 + 88) = v22;
  *(_OWORD *)(a1 + 104) = v23;
  *(_QWORD *)a1 = v17;
  *(_OWORD *)(a1 + 8) = v31;
  *(_BYTE *)(a1 + 120) = v4;
  *(_BYTE *)(a1 + 121) = v8;
  if ( v18 )
    core::ptr::drop_in_place<core::option::Option<std::collections::hash::set::HashSet<char>>>(v32);
  return a1;
}
