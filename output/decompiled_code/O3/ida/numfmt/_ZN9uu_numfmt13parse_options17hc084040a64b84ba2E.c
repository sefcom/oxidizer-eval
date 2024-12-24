char *__fastcall uu_numfmt::parse_options(char *dest, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int8 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int8 v8; // si
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r12
  unsigned __int8 v24; // al
  _QWORD *v25; // rax
  __int8 v26; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // r12
  char v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // r14
  char v38; // [rsp+7h] [rbp-201h]
  char v39; // [rsp+8h] [rbp-200h] BYREF
  _BYTE v40[24]; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-1E0h]
  __m256i src[5]; // [rsp+30h] [rbp-1D8h] BYREF
  __m256i v43; // [rsp+D0h] [rbp-138h] BYREF
  __m256i v44; // [rsp+F0h] [rbp-118h]
  __int128 v45; // [rsp+110h] [rbp-F8h]
  __int64 v46; // [rsp+120h] [rbp-E8h]
  __int128 v47; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+140h] [rbp-C8h]
  __int128 v49; // [rsp+150h] [rbp-B8h]
  __int64 v50; // [rsp+160h] [rbp-A8h]
  __int64 v51; // [rsp+170h] [rbp-98h]
  __int64 v52; // [rsp+178h] [rbp-90h]
  __int128 v53; // [rsp+180h] [rbp-88h]
  __int64 v54; // [rsp+190h] [rbp-78h]
  __m128d v55; // [rsp+1A0h] [rbp-68h]
  __m128d v56; // [rsp+1B0h] [rbp-58h]
  __int128 v57; // [rsp+1C8h] [rbp-40h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aFrom, 4LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aFrom, 4LL, src);
  if ( !v3 )
    core::option::unwrap_failed(&off_1363B0);
  uu_numfmt::parse_unit((__int64)&v43, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
  v4 = v43.m256i_i64[0];
  v5 = v43.m256i_i8[8];
  if ( v43.m256i_i64[0] != 0x8000000000000000LL )
  {
    v16 = *(__int64 *)((char *)&v43.m256i_i64[1] + 1);
    *((_QWORD *)dest + 3) = v43.m256i_i64[2];
    *(_QWORD *)(dest + 17) = v16;
    *((_QWORD *)dest + 1) = v4;
    dest[16] = v5;
LABEL_32:
    *(_QWORD *)dest = 2LL;
    return dest;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aTo, 2LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aTo, 2LL, src);
  if ( !v6 )
    core::option::unwrap_failed(&off_1363C8);
  uu_numfmt::parse_unit((__int64)&v43, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
  v7 = v43.m256i_i64[0];
  v8 = v43.m256i_i8[8];
  if ( v43.m256i_i64[0] != 0x8000000000000000LL )
  {
    v17 = *(__int64 *)((char *)&v43.m256i_i64[1] + 1);
    *((_QWORD *)dest + 3) = v43.m256i_i64[2];
    *(_QWORD *)(dest + 17) = v17;
    *((_QWORD *)dest + 1) = v7;
    dest[16] = v8;
    goto LABEL_32;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aFromUnit, 9LL);
  v9 = clap_builder::parser::error::MatchesError::unwrap(aFromUnit, 9LL, src);
  if ( !v9 )
    core::option::unwrap_failed(&off_1363E0);
  uu_numfmt::parse_unit_size(src, *(char ***)(v9 + 8), *(_QWORD *)(v9 + 16));
  v10 = src[0].m256i_i64[0];
  v11 = *(_OWORD *)&src[0].m256i_u64[1];
  if ( src[0].m256i_i64[0] != 0x8000000000000000LL )
    goto LABEL_31;
  v56 = *(__m128d *)&src[0].m256i_u64[1];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aToUnit, 7LL);
  v12 = clap_builder::parser::error::MatchesError::unwrap(aToUnit, 7LL, src);
  if ( !v12 )
    core::option::unwrap_failed(&off_1363F8);
  uu_numfmt::parse_unit_size(src, *(char ***)(v12 + 8), *(_QWORD *)(v12 + 16));
  v10 = src[0].m256i_i64[0];
  v11 = *(_OWORD *)&src[0].m256i_u64[1];
  if ( src[0].m256i_i64[0] != 0x8000000000000000LL )
    goto LABEL_31;
  v55 = *(__m128d *)&src[0].m256i_u64[1];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aPadding, 7LL);
  v13 = clap_builder::parser::error::MatchesError::unwrap(aPadding, 7LL, src);
  if ( v13 )
  {
    v14 = v13;
    core::num::<impl core::str::traits::FromStr for isize>::from_str(
      src,
      *(_QWORD *)(v13 + 8),
      *(_QWORD *)(v13 + 16),
      *(double *)&v11);
    if ( src[0].m256i_i8[0] || (v15 = src[0].m256i_i64[1]) == 0 )
    {
      uu_numfmt::parse_options::{{closure}}(src, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
      v10 = src[0].m256i_i64[0];
      if ( src[0].m256i_i64[0] != 0x8000000000000000LL )
      {
LABEL_30:
        v11 = *(_OWORD *)&src[0].m256i_u64[1];
LABEL_31:
        *((_QWORD *)dest + 1) = v10;
        *((_OWORD *)dest + 1) = v11;
        goto LABEL_32;
      }
      v15 = src[0].m256i_i64[1];
    }
  }
  else
  {
    v15 = 0LL;
  }
  v52 = v15;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aHeader, 6LL) == 2 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aHeader, 6LL);
    v18 = clap_builder::parser::error::MatchesError::unwrap(aHeader, 6LL, src);
    if ( !v18 )
      core::option::unwrap_failed(&off_136410);
    v19 = v18;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(src, *(_QWORD *)(v18 + 8), *(_QWORD *)(v18 + 16));
    if ( src[0].m256i_i8[0] || (v20 = src[0].m256i_i64[1]) == 0 )
    {
      uu_numfmt::parse_options::{{closure}}(src, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16));
      v10 = src[0].m256i_i64[0];
      if ( src[0].m256i_i64[0] == 0x8000000000000000LL )
      {
        v20 = src[0].m256i_i64[1];
        goto LABEL_24;
      }
      goto LABEL_30;
    }
  }
  else
  {
    v20 = 0LL;
  }
LABEL_24:
  v51 = v20;
  v38 = v5;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aField, 5LL);
  v21 = clap_builder::parser::error::MatchesError::unwrap(aField, 5LL, src);
  if ( !v21 )
    core::option::unwrap_failed(&off_136428);
  v22 = *(_QWORD *)(v21 + 8);
  v23 = *(_QWORD *)(v21 + 16);
  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(src, v22, v23);
  src[1].m256i_i64[2] = 0LL;
  src[1].m256i_i64[3] = v23;
  src[2].m256i_i16[0] = 1;
  v24 = core::iter::traits::iterator::Iterator::try_fold(src);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v24) )
  {
    v25 = (_QWORD *)alloc::alloc::Global::alloc_impl(16LL);
    v26 = v8;
    if ( !v25 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *v25 = 1LL;
    v25[1] = -1LL;
    alloc::slice::hack::into_vec(&v47, v25, 1LL);
    goto LABEL_35;
  }
  uucore::features::ranges::Range::from_list(src, v22, v23);
  *(_OWORD *)v43.m256i_i8 = *(_OWORD *)&src[0].m256i_u64[1];
  v43.m256i_i64[2] = src[0].m256i_i64[3];
  v26 = v8;
  if ( src[0].m256i_i64[0] )
  {
    *((_QWORD *)dest + 3) = v43.m256i_i64[2];
    *(_OWORD *)(dest + 8) = *(_OWORD *)v43.m256i_i8;
    goto LABEL_32;
  }
  v48 = v43.m256i_i64[2];
  v47 = *(_OWORD *)v43.m256i_i8;
LABEL_35:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aFormat_0, 6LL);
  v28 = clap_builder::parser::error::MatchesError::unwrap(aFormat_0, 6LL, src);
  if ( v28 )
  {
    <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(
      src,
      *(_QWORD *)(v28 + 8),
      *(_QWORD *)(v28 + 16));
    *(_OWORD *)v40 = *(_OWORD *)&src[0].m256i_u64[1];
    *(_QWORD *)&v40[16] = src[0].m256i_i64[3];
    if ( src[0].m256i_i64[0] == 2 )
    {
      *((_QWORD *)dest + 3) = *(_QWORD *)&v40[16];
      *(_OWORD *)(dest + 8) = *(_OWORD *)v40;
      *(_QWORD *)dest = 2LL;
LABEL_45:
      core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::ranges::Range>>(&v47);
      return dest;
    }
    v46 = src[2].m256i_i64[2];
    v45 = *(_OWORD *)src[2].m256i_i8;
    v44 = src[1];
    *(_OWORD *)&v43.m256i_u64[1] = *(_OWORD *)v40;
    v43.m256i_i64[3] = *(_QWORD *)&v40[16];
    v43.m256i_i64[0] = src[0].m256i_i64[0];
    if ( v26 != 5 && src[2].m256i_i8[16] )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(src, aGroupingCannot, 37LL);
      *((_QWORD *)dest + 3) = src[0].m256i_i64[2];
      v30 = *(_OWORD *)src[0].m256i_i8;
      goto LABEL_44;
    }
  }
  else
  {
    LOWORD(v46) = 0;
    v43.m256i_i64[0] = 0LL;
    v43.m256i_i64[2] = 0LL;
    v44.m256i_i64[0] = 0LL;
    v44.m256i_i64[1] = 1LL;
    *(_OWORD *)&v44.m256i_u64[2] = 0LL;
    v45 = 1uLL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aDelimiter, 9LL);
  v29 = clap_builder::parser::error::MatchesError::unwrap(aDelimiter, 9LL, src);
  src[0].m256i_i64[1] = 0x8000000000000000LL;
  *(_OWORD *)&src[0].m256i_u64[2] = v57;
  src[0].m256i_i64[0] = 0LL;
  core::option::Option<T>::map_or(v40, v29, src);
  v49 = *(_OWORD *)&v40[8];
  v50 = v41;
  if ( *(_QWORD *)v40 )
  {
    *((_QWORD *)dest + 3) = v50;
    v30 = v49;
LABEL_44:
    *(_OWORD *)(dest + 8) = v30;
    *(_QWORD *)dest = 2LL;
    core::ptr::drop_in_place<uu_numfmt::options::FormatOptions>(&v43);
    goto LABEL_45;
  }
  v54 = v50;
  v53 = v49;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aRound_0, 5LL);
  v31 = clap_builder::parser::error::MatchesError::unwrap(aRound_0, 5LL, src);
  if ( !v31 )
    core::option::unwrap_failed(&off_136440);
  v32 = *(_QWORD *)(v31 + 8);
  v33 = *(_QWORD *)(v31 + 16);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, aUp, 2LL) )
  {
    v34 = 0;
  }
  else
  {
    v34 = 1;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, aDown, 4LL) )
    {
      v34 = 2;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, aFromZero, 9LL) )
      {
        v34 = 3;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, aTowardsZero, 12LL) )
        {
          v34 = 4;
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, aNearest, 7LL) )
          {
            src[0].m256i_i64[0] = (__int64)&off_136458;
            src[0].m256i_i64[1] = 1LL;
            src[0].m256i_i64[2] = (__int64)&v39;
            *(_OWORD *)&src[0].m256i_u64[3] = 0LL;
            core::panicking::panic_fmt(src, &off_136468);
          }
        }
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aSuffix, 6LL);
  v35 = clap_builder::parser::error::MatchesError::unwrap(aSuffix, 6LL, src);
  if ( v35 )
  {
    <alloc::string::String as core::clone::Clone>::clone(src, v35);
    *(_QWORD *)&v40[16] = src[0].m256i_i64[2];
    *(_OWORD *)v40 = *(_OWORD *)src[0].m256i_i8;
  }
  else
  {
    *(_QWORD *)v40 = 0x8000000000000000LL;
    *(_OWORD *)&v40[8] = v57;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aInvalid, 7LL);
  v36 = clap_builder::parser::error::MatchesError::unwrap(aInvalid, 7LL, src);
  if ( !v36 )
    core::option::unwrap_failed(&off_136480);
  <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(
    src,
    *(_QWORD *)(v36 + 8),
    *(_QWORD *)(v36 + 16));
  v37 = core::result::Result<T,E>::unwrap(src);
  src[3].m256i_i64[1] = v48;
  *(_OWORD *)&src[2].m256i_u64[3] = v47;
  *(_OWORD *)&src[3].m256i_u64[2] = v53;
  src[4].m256i_i64[0] = v54;
  *(_OWORD *)&src[4].m256i_u64[1] = *(_OWORD *)v40;
  src[4].m256i_i64[3] = *(_QWORD *)&v40[16];
  src[0] = v43;
  src[1] = v44;
  *(_OWORD *)src[2].m256i_i8 = v45;
  src[2].m256i_i64[2] = v46;
  memcpy(dest, src, 0xA0uLL);
  *((__m128d *)dest + 10) = _mm_unpacklo_pd(v56, v55);
  dest[176] = v38;
  dest[177] = v8;
  *((_QWORD *)dest + 23) = v52;
  *((_QWORD *)dest + 24) = v51;
  dest[200] = v37;
  dest[201] = v34;
  return dest;
}
