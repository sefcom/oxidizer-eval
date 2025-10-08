__int64 __fastcall just::config::Config::from_matches(__int64 a1, __int64 a2)
{
  __m128i *v2; // rbp
  __m256i *v3; // r15
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  char **v13; // rax
  __int64 v14; // rcx
  __m128i si128; // xmm0
  __int128 v16; // xmm1
  bool v17; // bl
  char **v18; // rax
  __m128i v19; // xmm0
  char *v20; // rcx
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // rax
  __int64 v28; // rax
  char *v29; // rax
  unsigned __int8 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char *v34; // rax
  unsigned __int8 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rax
  __m128i v41; // xmm0
  _BYTE *v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  char v45; // bl
  __int64 v46; // rax
  char v47; // bl
  char count; // al
  bool v49; // zf
  char v50; // al
  char v51; // r15
  __int64 v52; // rax
  char **v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rdx
  __m128i v57; // xmm0
  char v58; // [rsp+8h] [rbp-5B0h]
  char v59; // [rsp+9h] [rbp-5AFh]
  char v60; // [rsp+Ah] [rbp-5AEh]
  unsigned __int8 v61; // [rsp+Bh] [rbp-5ADh]
  unsigned __int8 v62; // [rsp+Ch] [rbp-5ACh]
  unsigned __int8 v63; // [rsp+Dh] [rbp-5ABh]
  unsigned __int8 v64; // [rsp+Eh] [rbp-5AAh]
  char v65; // [rsp+Fh] [rbp-5A9h]
  unsigned __int8 v66; // [rsp+10h] [rbp-5A8h]
  char v67; // [rsp+11h] [rbp-5A7h]
  char v68; // [rsp+12h] [rbp-5A6h]
  char v69; // [rsp+13h] [rbp-5A5h]
  char v70; // [rsp+14h] [rbp-5A4h]
  char v71; // [rsp+15h] [rbp-5A3h]
  char v72; // [rsp+16h] [rbp-5A2h]
  unsigned __int8 flag; // [rsp+17h] [rbp-5A1h]
  __m256i v74; // [rsp+20h] [rbp-598h] BYREF
  __m128i v75; // [rsp+40h] [rbp-578h]
  __m128i v76; // [rsp+50h] [rbp-568h]
  __int64 v77; // [rsp+60h] [rbp-558h]
  __m128i v78; // [rsp+70h] [rbp-548h] BYREF
  __int64 v79; // [rsp+80h] [rbp-538h]
  int v80; // [rsp+88h] [rbp-530h]
  int v81; // [rsp+8Ch] [rbp-52Ch]
  _BYTE v82[48]; // [rsp+90h] [rbp-528h] BYREF
  __m128i v83; // [rsp+C0h] [rbp-4F8h]
  __int64 v84; // [rsp+D0h] [rbp-4E8h]
  int v85; // [rsp+E4h] [rbp-4D4h]
  __m128i v86; // [rsp+E8h] [rbp-4D0h] BYREF
  unsigned __int64 v87; // [rsp+F8h] [rbp-4C0h]
  _BYTE v88[8]; // [rsp+100h] [rbp-4B8h] BYREF
  __int64 v89; // [rsp+108h] [rbp-4B0h]
  __int64 v90; // [rsp+110h] [rbp-4A8h]
  _BYTE v91[24]; // [rsp+118h] [rbp-4A0h] BYREF
  __m128i v92; // [rsp+130h] [rbp-488h]
  __int64 v93; // [rsp+140h] [rbp-478h]
  __m128i v94; // [rsp+150h] [rbp-468h] BYREF
  __int64 v95; // [rsp+160h] [rbp-458h]
  __m128i v96; // [rsp+170h] [rbp-448h] BYREF
  __int64 v97; // [rsp+180h] [rbp-438h]
  __m128i v98; // [rsp+190h] [rbp-428h] BYREF
  __int64 v99; // [rsp+1A0h] [rbp-418h]
  __m128i v100; // [rsp+1B0h] [rbp-408h] BYREF
  __m128i v101; // [rsp+1C0h] [rbp-3F8h]
  __m128i v102; // [rsp+1D0h] [rbp-3E8h]
  __m128i v103; // [rsp+1E0h] [rbp-3D8h] BYREF
  __int64 v104; // [rsp+1F0h] [rbp-3C8h]
  __m128i v105; // [rsp+1F8h] [rbp-3C0h] BYREF
  __int64 v106; // [rsp+208h] [rbp-3B0h]
  __m128i v107; // [rsp+220h] [rbp-398h] BYREF
  __int64 v108; // [rsp+230h] [rbp-388h]
  __m128i v109; // [rsp+240h] [rbp-378h]
  __int64 v110; // [rsp+250h] [rbp-368h]
  __m128i v111; // [rsp+260h] [rbp-358h]
  __int64 v112; // [rsp+270h] [rbp-348h]
  __m128i src[24]; // [rsp+280h] [rbp-338h] BYREF
  __m128i v114; // [rsp+400h] [rbp-1B8h]
  __int64 v115; // [rsp+410h] [rbp-1A8h]
  __m128i v116; // [rsp+420h] [rbp-198h] BYREF
  __m128i v117; // [rsp+430h] [rbp-188h]
  __m128i v118; // [rsp+440h] [rbp-178h]
  __m128i v119; // [rsp+458h] [rbp-160h] BYREF
  __int64 v120; // [rsp+468h] [rbp-150h]
  __m128i v121; // [rsp+470h] [rbp-148h] BYREF
  __int64 v122; // [rsp+480h] [rbp-138h]
  _QWORD v123[8]; // [rsp+488h] [rbp-130h] BYREF
  _QWORD v124[8]; // [rsp+4C8h] [rbp-F0h] BYREF
  _QWORD v125[8]; // [rsp+508h] [rbp-B0h] BYREF
  _QWORD v126[14]; // [rsp+548h] [rbp-70h] BYREF

  v78.m128i_i64[0] = 0LL;
  v79 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aSet_0, 3LL);
  clap_builder::parser::error::MatchesError::unwrap(&v74, aSet_0, 3LL, src);
  if ( v74.m256i_i64[0] )
  {
    v4 = _mm_loadu_si128((const __m128i *)&v74);
    src[3] = v76;
    src[2] = v75;
    src[1] = *(__m128i *)&v74.m256i_u64[2];
    src[0] = v4;
    v2 = &v116;
    while ( 1 )
    {
      v3 = (__m256i *)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(src);
      v5 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(src);
      if ( !v3 )
        break;
      v6 = v5;
      if ( !v5 )
        break;
      <alloc::string::String as core::clone::Clone>::clone(&v86, v3);
      <alloc::string::String as core::clone::Clone>::clone(v82, v6);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v116, &v78, &v86, v82);
      core::ptr::drop_in_place<regex::error::Error>(&v116);
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aArguments, 9LL);
  clap_builder::parser::error::MatchesError::unwrap(&v74, aArguments, 9LL, src);
  if ( v74.m256i_i64[0] )
  {
    v7 = _mm_loadu_si128((const __m128i *)&v74);
    src[3] = v76;
    src[2] = v75;
    src[1] = *(__m128i *)&v74.m256i_u64[2];
    src[0] = v7;
  }
  else
  {
    src[0].m128i_i64[0] = 0LL;
  }
  just::positional::Positional::from_values(&v86, src);
  if ( v90 )
  {
    v8 = v89;
    v9 = 48 * v90;
    v3 = &v74;
    v2 = (__m128i *)<alloc::string::String as core::clone::Clone>::clone;
    do
    {
      <alloc::string::String as core::clone::Clone>::clone(&v74, v8);
      v10 = v8 + 24;
      <alloc::string::String as core::clone::Clone>::clone(src, v10);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v82, &v78, &v74, src);
      core::ptr::drop_in_place<regex::error::Error>(v82);
      v8 = v10 + 24;
      v9 -= 48LL;
    }
    while ( v9 );
  }
  just::config::Config::search_config((__int64)src, a2, (__int64)&v86);
  v11 = src[0].m128i_i64[0];
  v74 = *(__m256i *)&src[0].m128i_u64[1];
  v75 = *(__m128i *)((char *)&src[2] + 8);
  if ( src[0].m128i_i64[0] != 0x8000000000000007LL )
  {
    v14 = src[3].m128i_i64[1];
    si128 = _mm_load_si128((const __m128i *)&v74);
    v16 = *(_OWORD *)&v74.m256i_u64[2];
    *(__m128i *)(a1 + 48) = v75;
    *(_OWORD *)(a1 + 32) = v16;
    *(__m128i *)(a1 + 16) = si128;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 64) = v14;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    v17 = 1;
    goto LABEL_50;
  }
  v100 = _mm_load_si128((const __m128i *)&v74);
  v101 = *(__m128i *)&v74.m256i_u64[2];
  v102 = v75;
  v12 = v87;
  if ( !v87 )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aChangelog, 9LL) && v79 )
    {
      v18 = &off_42E8B0;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDump, 4LL) && v79 )
    {
      v18 = &off_42E8C0;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aEdit_0, 4LL) && v79 )
    {
      v18 = &off_42E8D0;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFormat, 6LL) && v79 )
    {
      v18 = &off_42E8E0;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 a2,
                                 "INIT || data.env>",
                                 4LL)
           && v79 )
    {
      v18 = &off_42E8F0;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMan, 3LL) && v79 )
    {
      v18 = &off_42E900;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSummary, 7LL)
           && v79 )
    {
      v18 = &off_42E910;
    }
    else
    {
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVariables, 9LL)
        || !v79 )
      {
        goto LABEL_64;
      }
      v18 = &off_42E920;
    }
    v19 = _mm_loadu_si128((const __m128i *)v18);
    *(__m128i *)(a1 + 32) = v78;
    *(_QWORD *)(a1 + 48) = v79;
    *(_QWORD *)(a1 + 8) = 0x8000000000000006LL;
    *(__m128i *)(a1 + 16) = v19;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<just::search_config::SearchConfig>(&v100);
    v17 = 0;
LABEL_50:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v86);
    goto LABEL_61;
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aChangelog, 9LL) )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDump, 4LL) )
    {
      v13 = &off_42E8C0;
      goto LABEL_57;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aEdit_0, 4LL) )
    {
      v13 = &off_42E8D0;
      goto LABEL_57;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFormat, 6LL) )
    {
      v13 = &off_42E8E0;
      goto LABEL_57;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "INIT || data.env>", 4LL) )
    {
      v13 = &off_42E8F0;
      goto LABEL_57;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMan, 3LL) )
    {
      v13 = &off_42E900;
      goto LABEL_57;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSummary, 7LL) )
    {
      v13 = &off_42E910;
      goto LABEL_57;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVariables, 9LL) )
    {
      v13 = &off_42E920;
      goto LABEL_57;
    }
LABEL_64:
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aChangelog, 9LL) )
    {
      *(_QWORD *)v82 = 0x8000000000000000LL;
LABEL_66:
      LOBYTE(v2) = 1;
      LOBYTE(v3) = 1;
      goto LABEL_75;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aChoose, 6LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aChooser, 7LL);
      v25 = clap_builder::parser::error::MatchesError::unwrap(aChooser, 7LL, src);
      v26 = 0x8000000000000000LL;
      if ( v25 )
      {
        <alloc::string::String as core::clone::Clone>::clone(src, v25);
        v26 = src[0].m128i_i64[0];
        *(__m128i *)v74.m256i_i8 = _mm_loadu_si128((const __m128i *)&src[0].m128i_u64[1]);
      }
      v83.m128i_i64[0] = v79;
      *(__m128i *)&v82[32] = v78;
      *(_QWORD *)&v82[8] = v26;
      *(__m128i *)&v82[16] = _mm_load_si128((const __m128i *)&v74);
      *(_QWORD *)v82 = 0x8000000000000001LL;
      goto LABEL_73;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2);
    clap_builder::parser::error::MatchesError::unwrap(v123, src);
    if ( v123[0] )
    {
      core::iter::traits::iterator::Iterator::collect(&v74, v123);
      alloc::vec::Vec<T,A>::remove(src, &v74);
      *(_QWORD *)&v82[16] = v74.m256i_i64[2];
      *(_OWORD *)v82 = *(_OWORD *)v74.m256i_i8;
      v83 = v78;
      v84 = v79;
      *(__m128i *)&v82[24] = _mm_loadu_si128(src);
      *(_QWORD *)&v82[40] = src[1].m128i_i64[0];
LABEL_73:
      LOBYTE(v2) = 1;
      goto LABEL_74;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2);
    v42 = (_BYTE *)clap_builder::parser::error::MatchesError::unwrap(src);
    if ( v42 )
    {
      v82[8] = *v42;
      *(_QWORD *)v82 = 0x8000000000000003LL;
      goto LABEL_66;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDump, 4LL) )
    {
      *(_QWORD *)v82 = 0x8000000000000004LL;
      goto LABEL_66;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aEdit_0, 4LL) )
    {
      *(_QWORD *)v82 = 0x8000000000000005LL;
      goto LABEL_66;
    }
    v3 = (__m256i *)"EVALUATEExtenderbopomofoUgaritic) ";
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            "EVALUATEExtenderbopomofoUgaritic) ",
                            8LL) )
    {
      if ( v12 > 1 )
      {
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, &v86);
        src[2].m128i_i64[0] = 1LL;
        core::iter::traits::iterator::Iterator::collect(&v74, src);
        *(_QWORD *)(a1 + 32) = v74.m256i_i64[2];
        *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)&v74);
        *(_QWORD *)(a1 + 8) = 0x8000000000000005LL;
        *(_QWORD *)(a1 + 40) = "EVALUATEExtenderbopomofoUgaritic) ";
        *(_QWORD *)(a1 + 48) = 8LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<just::search_config::SearchConfig>(&v100);
        core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::string::String)>>(v88);
        core::ptr::drop_in_place<regex::error::Error>(v91);
        goto LABEL_62;
      }
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, &v86);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v82[8], src);
      v83.m128i_i64[0] = v79;
      *(__m128i *)&v82[32] = _mm_loadu_si128(&v78);
      *(_QWORD *)v82 = 0x8000000000000006LL;
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(src);
      LODWORD(v2) = 0;
      goto LABEL_74;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFormat, 6LL) )
    {
      *(_QWORD *)v82 = 0x8000000000000007LL;
      goto LABEL_66;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aGroups, 6LL) )
    {
      *(_QWORD *)v82 = 0x8000000000000008LL;
      goto LABEL_66;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "INIT || data.env>", 4LL) )
    {
      *(_QWORD *)v82 = 0x8000000000000009LL;
      goto LABEL_66;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aList, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(v124, aList, 4LL, src);
    if ( v124[0] )
    {
      just::config::Config::parse_module_path((__int64)src, (__int64)v124);
      v52 = src[0].m128i_i64[0];
      v74 = *(__m256i *)&src[0].m128i_u64[1];
      if ( src[0].m128i_i64[0] == 0x8000000000000007LL )
      {
        *(__m128i *)&v82[8] = _mm_load_si128((const __m128i *)&v74);
        *(_OWORD *)&v82[24] = *(_OWORD *)&v74.m256i_u64[2];
        *(_QWORD *)v82 = 0x800000000000000ALL;
        goto LABEL_66;
      }
    }
    else
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMan, 3LL) )
      {
        *(_QWORD *)v82 = 0x800000000000000BLL;
        goto LABEL_66;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aRequest, 7LL);
      v54 = clap_builder::parser::error::MatchesError::unwrap(aRequest, 7LL, src);
      if ( v54 )
      {
        src[0] = _mm_loadu_si128((const __m128i *)(v54 + 8));
        src[1].m128i_i64[0] = 0LL;
        serde_json::de::from_trait(&v74, src);
        if ( v74.m256i_i64[0] != 0x8000000000000001LL )
        {
          *(__m128i *)&v82[16] = _mm_loadu_si128((const __m128i *)&v74.m256i_u64[1]);
          *(_QWORD *)&v82[8] = v74.m256i_i64[0];
          *(_QWORD *)v82 = 0x800000000000000CLL;
          goto LABEL_66;
        }
        v55 = v74.m256i_i64[1];
        v56 = (_QWORD *)a1;
        *(_QWORD *)(a1 + 8) = 0x8000000000000003LL;
        *(_QWORD *)(a1 + 16) = v55;
        goto LABEL_156;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aShowCyan, 4LL);
      clap_builder::parser::error::MatchesError::unwrap(v125, aShowCyan, 4LL, src);
      if ( !v125[0] )
      {
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSummary, 7LL) )
        {
          *(_QWORD *)v82 = 0x800000000000000FLL;
          goto LABEL_66;
        }
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVariables, 9LL) )
        {
          *(_QWORD *)v82 = 0x8000000000000010LL;
          goto LABEL_66;
        }
        *(_QWORD *)&v82[24] = v87;
        *(__m128i *)&v82[8] = v86;
        *(__m128i *)&v82[32] = _mm_loadu_si128(&v78);
        v83.m128i_i64[0] = v79;
        *(_QWORD *)v82 = 0x800000000000000DLL;
        LODWORD(v2) = 0;
LABEL_74:
        LODWORD(v3) = 0;
LABEL_75:
        v58 = 1;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 a2,
                                 "UNSTABLEvariableBracketRcapacitys",
                                 8LL) )
          v58 = <just::subcommand::Subcommand as core::cmp::PartialEq>::eq(*(_QWORD *)v82);
        flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aExplain, 7LL);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2);
        v27 = (char *)clap_builder::parser::error::MatchesError::unwrap(&v74);
        if ( !v27 )
          core::option::unwrap_failed(&off_42E948);
        v72 = *v27;
        v71 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAllowMissing, 13LL);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2, aCeiling, 7LL);
        v28 = clap_builder::parser::error::MatchesError::unwrap(aCeiling, 7LL, &v74);
        if ( v28 )
        {
          <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
            &v74,
            *(_QWORD *)(v28 + 8),
            *(_QWORD *)(v28 + 16));
          v95 = v74.m256i_i64[2];
          v94 = _mm_loadu_si128((const __m128i *)&v74);
        }
        else
        {
          v94.m128i_i64[0] = 0x8000000000000000LL;
        }
        v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCheck, 5LL);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2);
        v29 = (char *)clap_builder::parser::error::MatchesError::unwrap(&v74);
        if ( v29 )
        {
          v69 = *v29;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2);
          v30 = (unsigned __int8 *)clap_builder::parser::error::MatchesError::unwrap(&v74);
          if ( v30 )
            v85 = dword_9FA14[*v30];
          else
            v85 = 10;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2, aCygpath, 7LL);
          v31 = clap_builder::parser::error::MatchesError::unwrap(aCygpath, 7LL, &v74);
          if ( v31 )
          {
            <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
              &v74,
              *(_QWORD *)(v31 + 8),
              *(_QWORD *)(v31 + 16));
            v104 = v74.m256i_i64[2];
            v103 = _mm_loadu_si128((const __m128i *)&v74);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2, aDotenvFilename, 15LL);
            v32 = clap_builder::parser::error::MatchesError::unwrap(aDotenvFilename, 15LL, &v74);
            if ( v32 )
            {
              <alloc::string::String as core::clone::Clone>::clone(&v74, v32);
              v97 = v74.m256i_i64[2];
              v96 = _mm_loadu_si128((const __m128i *)&v74);
            }
            else
            {
              v96.m128i_i64[0] = 0x8000000000000000LL;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2, aDotenvPath, 11LL);
            v33 = clap_builder::parser::error::MatchesError::unwrap(aDotenvPath, 11LL, &v74);
            if ( v33 )
            {
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v74, *(_QWORD *)(v33 + 8));
              v99 = v74.m256i_i64[2];
              v98 = _mm_loadu_si128((const __m128i *)&v74);
            }
            else
            {
              v98.m128i_i64[0] = 0x8000000000000000LL;
            }
            v68 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDryRun, 7LL);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2);
            v34 = (char *)clap_builder::parser::error::MatchesError::unwrap(&v74);
            if ( !v34 )
              core::option::unwrap_failed(&off_42E990);
            v67 = *v34;
            v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoHighlight, 12LL);
            std::env::current_dir(&v116);
            <core::result::Result<T,E> as snafu::ResultExt<T,E>>::context(&v74, &v116);
            v36 = v74.m256i_i64[0];
            v107 = *(__m128i *)&v74.m256i_u64[1];
            v108 = v74.m256i_i64[3];
            if ( v74.m256i_i64[0] == 0x8000000000000007LL )
            {
              v114 = _mm_load_si128(&v107);
              v115 = v108;
              v81 = (int)v3;
              v80 = (int)v2;
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2, aListHeading, 12LL);
              v37 = clap_builder::parser::error::MatchesError::unwrap(aListHeading, 12LL, &v74);
              if ( !v37 )
                core::option::unwrap_failed(&off_42E9A8);
              <alloc::string::String as core::clone::Clone>::clone(&v119, v37);
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2, aListPrefix, 11LL);
              v38 = clap_builder::parser::error::MatchesError::unwrap(aListPrefix, 11LL, &v74);
              if ( !v38 )
                core::option::unwrap_failed(&off_42E9C0);
              <alloc::string::String as core::clone::Clone>::clone(&v121, v38);
              v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aListSubmodules, 15LL);
              v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoDotenv, 9LL);
              v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoAliases, 10LL);
              v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoDeps, 7LL);
              v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aOne, 3LL);
              v39 = _mm_load_si128(&v100);
              v118 = v102;
              v117 = v101;
              v116 = v39;
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v74, a2, aShell, 5LL);
              v40 = clap_builder::parser::error::MatchesError::unwrap(aShell, 5LL, &v74);
              if ( v40 )
              {
                <alloc::string::String as core::clone::Clone>::clone(&v74, v40);
                v110 = v74.m256i_i64[2];
                v109 = _mm_loadu_si128((const __m128i *)&v74);
              }
              else
              {
                v109.m128i_i64[0] = 0x8000000000000000LL;
              }
              if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                      a2,
                                      aClearShellArgs_0,
                                      16LL) )
              {
                v92.m128i_i64[0] = 0LL;
                v92.m128i_i64[1] = 8LL;
                v93 = 0LL;
              }
              else
              {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v74, a2, aShellArg, 9LL);
                clap_builder::parser::error::MatchesError::unwrap(v126, aShellArg, 9LL, &v74);
                if ( v126[0] )
                {
                  core::iter::traits::iterator::Iterator::collect(&v74, v126);
                  v93 = v74.m256i_i64[2];
                  v92 = _mm_loadu_si128((const __m128i *)&v74);
                }
                else
                {
                  v92.m128i_i64[0] = 0x8000000000000000LL;
                }
              }
              v61 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aShellCommand, 13LL);
              v77 = v84;
              v43 = _mm_load_si128((const __m128i *)v82);
              v76 = v83;
              v75 = *(__m128i *)&v82[32];
              *(_OWORD *)&v74.m256i_u64[2] = *(_OWORD *)&v82[16];
              *(__m128i *)v74.m256i_i8 = v43;
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v105, a2, aTempdir, 7LL);
              v44 = clap_builder::parser::error::MatchesError::unwrap(aTempdir, 7LL, &v105);
              if ( v44 )
              {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v105, *(_QWORD *)(v44 + 8));
                v112 = v106;
                v111 = _mm_loadu_si128(&v105);
              }
              else
              {
                v111.m128i_i64[0] = 0x8000000000000000LL;
              }
              v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTimestamp, 9LL);
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
                &v105,
                a2,
                "TIMESTAMP-FORMATInvalid argumentInvalid exchange",
                16LL);
              v46 = clap_builder::parser::error::MatchesError::unwrap(
                      "TIMESTAMP-FORMATInvalid argumentInvalid exchange",
                      16LL,
                      &v105);
              if ( !v46 )
                core::option::unwrap_failed(&off_42E9D8);
              <alloc::string::String as core::clone::Clone>::clone(&v105, v46);
              v60 = v45;
              v59 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUnsorted, 8LL);
              if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL) )
              {
                v47 = 0;
              }
              else
              {
                count = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(a2, aVerbose, 7LL);
                v49 = count == 0;
                v50 = (count == 1) ^ 3;
                v47 = 1;
                if ( !v49 )
                  v47 = v50;
              }
              v51 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aYes, 3LL);
              src[8].m128i_i64[1] = v95;
              *(__m128i *)((char *)&src[7] + 8) = v94;
              src[0] = v103;
              src[1].m128i_i64[0] = v104;
              src[9] = v96;
              src[10].m128i_i64[0] = v97;
              *(__m128i *)((char *)&src[10] + 8) = v98;
              src[11].m128i_i64[1] = v99;
              src[2].m128i_i64[1] = v115;
              *(__m128i *)((char *)&src[1] + 8) = v114;
              src[4].m128i_i64[0] = v120;
              src[3] = v119;
              *(__m128i *)((char *)&src[4] + 8) = v121;
              src[5].m128i_i64[1] = v122;
              *(__m128i *)((char *)&src[16] + 8) = v116;
              *(__m128i *)((char *)&src[17] + 8) = v117;
              *(__m128i *)((char *)&src[18] + 8) = v118;
              src[12] = v109;
              src[13].m128i_i64[0] = v110;
              src[14].m128i_i64[1] = v93;
              *(__m128i *)((char *)&src[13] + 8) = v92;
              src[23].m128i_i64[1] = v84;
              *(__m128i *)((char *)&src[22] + 8) = v83;
              *(__m128i *)((char *)&src[21] + 8) = *(__m128i *)&v82[32];
              *(__m128i *)((char *)&src[20] + 8) = *(__m128i *)&v82[16];
              *(__m128i *)((char *)&src[19] + 8) = *(__m128i *)v82;
              src[16].m128i_i64[0] = v112;
              src[15] = v111;
              src[7].m128i_i64[0] = v106;
              src[6] = v105;
              memcpy((void *)a1, src, 0x180uLL);
              *(_DWORD *)(a1 + 384) = v85;
              *(_QWORD *)(a1 + 388) = 0LL;
              *(_BYTE *)(a1 + 396) = 0;
              *(_QWORD *)(a1 + 397) = 0xA0000000ALL;
              *(_BYTE *)(a1 + 405) = v69;
              *(_BYTE *)(a1 + 406) = v71;
              *(_BYTE *)(a1 + 407) = v70;
              *(_BYTE *)(a1 + 408) = v68;
              *(_BYTE *)(a1 + 409) = v67;
              *(_QWORD *)(a1 + 410) = _mm_insert_epi16(
                                        _mm_insert_epi16(
                                          _mm_cvtsi32_si128(flag | ((v35 ^ 1) << 8) | (v66 << 16) | ((unsigned __int8)(v65 ^ 1) << 24)),
                                          v64 | (v63 << 8),
                                          2),
                                        v62 | (v61 << 8),
                                        3).m128i_u64[0];
              *(_BYTE *)(a1 + 418) = v60;
              *(_BYTE *)(a1 + 419) = v59;
              *(_BYTE *)(a1 + 420) = v58;
              *(_BYTE *)(a1 + 421) = v51;
              *(_BYTE *)(a1 + 422) = v72;
              *(_BYTE *)(a1 + 423) = v47;
              if ( (_BYTE)v80 )
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v86);
              core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::string::String)>>(v88);
              core::ptr::drop_in_place<regex::error::Error>(v91);
              if ( (_BYTE)v81 )
                goto LABEL_62;
            }
            else
            {
              v41 = v75;
              *(__m128i *)(a1 + 56) = v76;
              *(__m128i *)(a1 + 40) = v41;
              *(_QWORD *)(a1 + 32) = v108;
              *(__m128i *)(a1 + 16) = _mm_load_si128(&v107);
              *(_QWORD *)(a1 + 8) = v36;
              *(_QWORD *)a1 = 0x8000000000000000LL;
              core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v98);
              core::ptr::drop_in_place<regex::error::Error>(&v96);
              core::ptr::drop_in_place<std::path::PathBuf>(&v103);
              core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v94);
              core::ptr::drop_in_place<just::subcommand::Subcommand>(v82);
              core::ptr::drop_in_place<just::search_config::SearchConfig>(&v100);
              if ( (_BYTE)v2 )
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v86);
              core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::string::String)>>(v88);
              core::ptr::drop_in_place<regex::error::Error>(v91);
              if ( (_BYTE)v3 )
                goto LABEL_62;
            }
            return a1;
          }
          v53 = &off_42E978;
        }
        else
        {
          v53 = &off_42E960;
        }
        core::option::unwrap_failed(v53);
      }
      just::config::Config::parse_module_path((__int64)src, (__int64)v125);
      v52 = src[0].m128i_i64[0];
      v74 = *(__m256i *)&src[0].m128i_u64[1];
      if ( src[0].m128i_i64[0] == 0x8000000000000007LL )
      {
        *(__m128i *)&v82[8] = _mm_load_si128((const __m128i *)&v74);
        *(_OWORD *)&v82[24] = *(_OWORD *)&v74.m256i_u64[2];
        *(_QWORD *)v82 = 0x800000000000000ELL;
        goto LABEL_66;
      }
    }
    v56 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 64) = src[3].m128i_i64[1];
    *(__m128i *)(a1 + 48) = *(__m128i *)((char *)&src[2] + 8);
    v57 = _mm_load_si128((const __m128i *)&v74);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v74.m256i_u64[2];
    *(__m128i *)(a1 + 16) = v57;
    *(_QWORD *)(a1 + 8) = v52;
LABEL_156:
    *v56 = 0x8000000000000000LL;
    core::ptr::drop_in_place<just::search_config::SearchConfig>(&v100);
    v17 = 1;
    goto LABEL_50;
  }
  v13 = &off_42E8B0;
LABEL_57:
  v17 = v79 == 0;
  if ( v79 )
  {
    *(_QWORD *)(a1 + 24) = v87;
    *(__m128i *)(a1 + 8) = v86;
    v20 = *v13;
    v21 = v13[1];
    *(_QWORD *)(a1 + 64) = v79;
    *(__m128i *)(a1 + 48) = _mm_loadu_si128(&v78);
    v22 = 40LL;
    v23 = 32LL;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v87;
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v86);
    v20 = *v13;
    v21 = v13[1];
    *(_QWORD *)(a1 + 8) = 0x8000000000000005LL;
    v22 = 48LL;
    v23 = 40LL;
  }
  *(_QWORD *)(a1 + v23) = v20;
  *(_QWORD *)(a1 + v22) = v21;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<just::search_config::SearchConfig>(&v100);
LABEL_61:
  core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::string::String)>>(v88);
  core::ptr::drop_in_place<regex::error::Error>(v91);
  if ( v17 )
LABEL_62:
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(&v78);
  return a1;
}