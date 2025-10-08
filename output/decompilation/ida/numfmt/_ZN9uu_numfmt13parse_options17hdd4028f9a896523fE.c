__int64 __fastcall uu_numfmt::parse_options(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int8 v4; // bp
  __int64 v5; // rax
  __int64 v6; // rax
  __int8 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rcx
  __int128 v21; // xmm0
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r12
  unsigned __int8 v26; // al
  _QWORD *v27; // rax
  __int8 v28; // r12
  _QWORD *v29; // r15
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r12
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  char v45; // r12
  char flag; // al
  __int128 v47; // xmm0
  __int128 v48; // xmm2
  __int128 v49; // xmm3
  __int8 v50; // [rsp+3h] [rbp-185h]
  char v51; // [rsp+4h] [rbp-184h]
  char v52; // [rsp+8h] [rbp-180h] BYREF
  _BYTE v53[48]; // [rsp+10h] [rbp-178h] BYREF
  __int128 v54; // [rsp+40h] [rbp-148h]
  __int128 v55; // [rsp+50h] [rbp-138h]
  __int64 v56; // [rsp+60h] [rbp-128h]
  __int64 v57; // [rsp+68h] [rbp-120h]
  _BYTE v58[24]; // [rsp+70h] [rbp-118h] BYREF
  __int64 v59; // [rsp+88h] [rbp-100h]
  __int64 v60; // [rsp+90h] [rbp-F8h]
  __m256i v61; // [rsp+98h] [rbp-F0h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-D0h]
  __int128 v63; // [rsp+C8h] [rbp-C0h]
  __int128 v64; // [rsp+D8h] [rbp-B0h]
  __int64 v65; // [rsp+E8h] [rbp-A0h]
  __int128 v66; // [rsp+F0h] [rbp-98h]
  __int64 v67; // [rsp+100h] [rbp-88h]
  __int64 v68; // [rsp+110h] [rbp-78h]
  __int64 v69; // [rsp+118h] [rbp-70h]
  __int64 v70; // [rsp+120h] [rbp-68h]
  __int64 v71; // [rsp+128h] [rbp-60h]
  __int128 v72; // [rsp+130h] [rbp-58h]
  __int64 v73; // [rsp+140h] [rbp-48h]
  __int128 v74; // [rsp+148h] [rbp-40h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, &unk_18EB4, 4LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(&unk_18EB4, 4LL, v53);
  if ( !v2 )
    core::option::unwrap_failed(&off_102880);
  uu_numfmt::parse_unit((__int64)&v61, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
  v3 = v61.m256i_i64[0];
  v4 = v61.m256i_i8[8];
  if ( !__OFSUB__(-v61.m256i_i64[0], 1LL) )
  {
    v15 = *(__int64 *)((char *)&v61.m256i_i64[1] + 1);
    *(_QWORD *)(a1 + 24) = v61.m256i_i64[2];
    *(_QWORD *)(a1 + 17) = v15;
    *(_QWORD *)(a1 + 8) = v3;
    *(_BYTE *)(a1 + 16) = v4;
LABEL_22:
    *(_QWORD *)a1 = 2LL;
    return a1;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, aTofromUnittoUn, 2LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aTofromUnittoUn, 2LL, v53);
  if ( !v5 )
    core::option::unwrap_failed(&off_102898);
  uu_numfmt::parse_unit((__int64)&v61, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
  v6 = v61.m256i_i64[0];
  v7 = v61.m256i_i8[8];
  if ( v61.m256i_i64[0] != 0x8000000000000000LL )
  {
    v16 = *(__int64 *)((char *)&v61.m256i_i64[1] + 1);
    *(_QWORD *)(a1 + 24) = v61.m256i_i64[2];
    *(_QWORD *)(a1 + 17) = v16;
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 16) = v7;
    goto LABEL_22;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, &aTofromUnittoUn[2], 9LL);
  v8 = clap_builder::parser::error::MatchesError::unwrap(&aTofromUnittoUn[2], 9LL, v53);
  if ( !v8 )
    core::option::unwrap_failed(&off_1028B0);
  uu_numfmt::parse_unit_size(v53, *(_QWORD *)(v8 + 8), *(_QWORD **)(v8 + 16));
  v9 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 != 0x8000000000000000LL )
    goto LABEL_21;
  v71 = *(_QWORD *)&v53[8];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, &aTofromUnittoUn[11], 7LL);
  v10 = clap_builder::parser::error::MatchesError::unwrap(&aTofromUnittoUn[11], 7LL, v53);
  if ( !v10 )
    core::option::unwrap_failed(&off_1028C8);
  uu_numfmt::parse_unit_size(v53, *(_QWORD *)(v10 + 8), *(_QWORD **)(v10 + 16));
  v9 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 != 0x8000000000000000LL )
    goto LABEL_21;
  v70 = *(_QWORD *)&v53[8];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, &aTofromUnittoUn[18], 7LL);
  v11 = clap_builder::parser::error::MatchesError::unwrap(&aTofromUnittoUn[18], 7LL, v53);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 8);
    v13 = *(_QWORD *)(v11 + 16);
    core::num::<impl isize>::from_ascii_radix(v53, v12, v13);
    v14 = *(_QWORD *)&v53[8];
    if ( (v53[0] | (*(_QWORD *)&v53[8] == 0LL)) != 1 )
      goto LABEL_16;
    uu_numfmt::parse_options::{{closure}}(v53, v12, v13);
    v9 = *(_QWORD *)v53;
    if ( *(_QWORD *)v53 == 0x8000000000000000LL )
    {
      v14 = *(_QWORD *)&v53[8];
      goto LABEL_16;
    }
LABEL_21:
    v21 = *(_OWORD *)&v53[8];
    *(_QWORD *)(a1 + 8) = v9;
    *(_OWORD *)(a1 + 16) = v21;
    goto LABEL_22;
  }
  v14 = 0LL;
LABEL_16:
  v69 = v14;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aHeader, 6LL) == 2 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, aHeader, 6LL);
    v17 = clap_builder::parser::error::MatchesError::unwrap(aHeader, 6LL, v53);
    if ( !v17 )
      core::option::unwrap_failed(&off_1028E0);
    v18 = *(_QWORD *)(v17 + 8);
    v19 = *(_QWORD *)(v17 + 16);
    core::num::<impl usize>::from_ascii_radix(v53, v18, v19);
    v20 = *(_QWORD *)&v53[8];
    if ( v53[0] | (*(_QWORD *)&v53[8] == 0LL) )
    {
      uu_numfmt::parse_options::{{closure}}(v53, v18, v19);
      v9 = *(_QWORD *)v53;
      if ( *(_QWORD *)v53 == 0x8000000000000000LL )
      {
        v20 = *(_QWORD *)&v53[8];
        goto LABEL_25;
      }
      goto LABEL_21;
    }
  }
  else
  {
    v20 = 0LL;
  }
LABEL_25:
  v68 = v20;
  v50 = v7;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, &unk_1AF84, 5LL);
  v23 = clap_builder::parser::error::MatchesError::unwrap(&unk_1AF84, 5LL, v53);
  if ( !v23 )
    core::option::unwrap_failed(&off_1028F8);
  v24 = *(_QWORD *)(v23 + 8);
  v25 = *(_QWORD *)(v23 + 16);
  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v53, v24, v25);
  *(_QWORD *)&v54 = 0LL;
  *((_QWORD *)&v54 + 1) = v25;
  LOWORD(v55) = 1;
  v26 = core::iter::traits::iterator::Iterator::try_fold(v53);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v26) )
  {
    v27 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 16LL);
    v28 = v7;
    if ( !v27 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    v29 = v27;
    *v27 = 1LL;
    v27[1] = -1LL;
    v60 = 1LL;
    v30 = 1LL;
    goto LABEL_32;
  }
  uucore::features::ranges::Range::from_list(v53, v24, v25);
  v30 = *(_QWORD *)&v53[8];
  v29 = *(_QWORD **)&v53[16];
  v31 = *(_QWORD *)&v53[24];
  v28 = v50;
  if ( (v53[0] & 1) != 0 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v53[8];
    *(_QWORD *)(a1 + 16) = v29;
    *(_QWORD *)(a1 + 24) = v31;
    goto LABEL_22;
  }
  v60 = *(_QWORD *)&v53[24];
LABEL_32:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, aFormat_0, 6LL);
  v32 = clap_builder::parser::error::MatchesError::unwrap(aFormat_0, 6LL, v53);
  if ( v32 )
  {
    <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(
      v53,
      *(_QWORD *)(v32 + 8),
      *(_QWORD *)(v32 + 16));
    *(_OWORD *)v58 = *(_OWORD *)&v53[8];
    *(_QWORD *)&v58[16] = *(_QWORD *)&v53[24];
    if ( *(_QWORD *)v53 == 2LL )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v58[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v58;
      *(_QWORD *)a1 = 2LL;
LABEL_54:
      core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v30, v29);
      return a1;
    }
    v65 = v56;
    v64 = v55;
    v63 = v54;
    v62 = *(_OWORD *)&v53[32];
    *(_OWORD *)&v61.m256i_u64[1] = *(_OWORD *)v58;
    v61.m256i_i64[3] = *(_QWORD *)&v58[16];
    v61.m256i_i64[0] = *(_QWORD *)v53;
    if ( (v56 & 1) != 0 && v28 != 5 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v53, aGroupingCannot, 37LL);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v53[16];
      v34 = *(_OWORD *)v53;
      goto LABEL_53;
    }
  }
  else
  {
    LOWORD(v65) = 0;
    v61.m256i_i64[0] = 0LL;
    v61.m256i_i64[2] = 0LL;
    *(_QWORD *)&v62 = 0LL;
    *((_QWORD *)&v62 + 1) = 1LL;
    v63 = 0LL;
    v64 = 1uLL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, aDelimiter, 9LL);
  v33 = clap_builder::parser::error::MatchesError::unwrap(aDelimiter, 9LL, v53);
  *(_QWORD *)&v53[8] = 0x8000000000000000LL;
  *(_OWORD *)&v53[16] = v74;
  *(_QWORD *)v53 = 0LL;
  core::option::Option<T>::map_or(v58, v33, v53);
  v66 = *(_OWORD *)&v58[8];
  v67 = v59;
  if ( *(_DWORD *)v58 == 1 )
  {
    *(_QWORD *)(a1 + 24) = v67;
    v34 = v66;
LABEL_53:
    *(_OWORD *)(a1 + 8) = v34;
    *(_QWORD *)a1 = 2LL;
    core::ptr::drop_in_place<uu_numfmt::options::FormatOptions>(&v61);
    goto LABEL_54;
  }
  v57 = v30;
  v73 = v67;
  v72 = v66;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, aRound, 5LL);
  v35 = clap_builder::parser::error::MatchesError::unwrap(aRound, 5LL, v53);
  if ( !v35 )
    core::option::unwrap_failed(&off_102910);
  v36 = *(_QWORD *)(v35 + 8);
  v37 = *(_QWORD *)(v35 + 16);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v37, aUp, 2LL) )
  {
    v51 = 0;
  }
  else
  {
    v51 = 1;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v37, aDown, 4LL) )
    {
      v51 = 2;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v37, aFromZero, 9LL) )
      {
        v51 = 3;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v37, aTowardsZero, 12LL) )
        {
          v38 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v37, aNearest, 7LL);
          LOBYTE(v42) = 4;
          v51 = 4;
          if ( !v38 )
          {
            *(_QWORD *)v53 = &off_102870;
            *(_QWORD *)&v53[8] = 1LL;
            *(_QWORD *)&v53[16] = &v52;
            *(_OWORD *)&v53[24] = 0LL;
            core::panicking::panic_fmt(v53, &off_102928, v39, v42, v40, v41);
          }
        }
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, aSuffix, 6LL);
  v43 = clap_builder::parser::error::MatchesError::unwrap(aSuffix, 6LL, v53);
  if ( v43 )
  {
    <alloc::string::String as core::clone::Clone>::clone(v53, v43);
    *(_QWORD *)&v58[16] = *(_QWORD *)&v53[16];
    *(_OWORD *)v58 = *(_OWORD *)v53;
  }
  else
  {
    *(_QWORD *)v58 = 0x8000000000000000LL;
    *(_OWORD *)&v58[8] = v74;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, a2, aInvalid, 7LL);
  v44 = clap_builder::parser::error::MatchesError::unwrap(aInvalid, 7LL, v53);
  if ( !v44 )
    core::option::unwrap_failed(&off_102940);
  <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(
    v53,
    *(_QWORD *)(v44 + 8),
    *(_QWORD *)(v44 + 16));
  v45 = core::result::Result<T,E>::unwrap(v53);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZeroTerminated, 15LL);
  *(_QWORD *)(a1 + 128) = v73;
  *(_OWORD *)(a1 + 112) = v72;
  *(_OWORD *)(a1 + 136) = *(_OWORD *)v58;
  *(_QWORD *)(a1 + 152) = *(_QWORD *)&v58[16];
  v47 = *(_OWORD *)v61.m256i_i8;
  v48 = v62;
  v49 = v63;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v61.m256i_u64[2];
  *(_OWORD *)(a1 + 32) = v48;
  *(_OWORD *)(a1 + 48) = v49;
  *(_OWORD *)(a1 + 64) = v64;
  *(_QWORD *)(a1 + 80) = v65;
  *(_OWORD *)a1 = v47;
  *(_QWORD *)(a1 + 88) = v57;
  *(_QWORD *)(a1 + 96) = v29;
  *(_QWORD *)(a1 + 104) = v60;
  *(_QWORD *)(a1 + 160) = v71;
  *(_QWORD *)(a1 + 168) = v70;
  *(_BYTE *)(a1 + 176) = v4;
  *(_BYTE *)(a1 + 177) = v50;
  *(_QWORD *)(a1 + 184) = v69;
  *(_QWORD *)(a1 + 192) = v68;
  *(_BYTE *)(a1 + 200) = flag;
  *(_BYTE *)(a1 + 201) = v45;
  *(_BYTE *)(a1 + 202) = v51;
  return a1;
}