__int64 __fastcall uu_cp::Options::from_matches(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rbx
  char flag; // bl
  char v10; // bp
  char updated; // r15
  char v12; // al
  char v13; // dl
  char v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __m128i *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int8 v26; // r13
  __int8 v27; // bp
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r15
  __m128i v31; // kr00_16
  __int64 v32; // rax
  unsigned __int8 v33; // al
  __int128 v34; // kr30_16
  __int128 v35; // kr40_16
  __m128i v36; // xmm0
  __int64 v37; // rax
  char v38; // r12
  __int64 v39; // rbx
  __int64 v40; // r15
  char v41; // al
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int32 v51; // [rsp+Ch] [rbp-2ECh]
  __int16 v52; // [rsp+10h] [rbp-2E8h]
  __int32 v53; // [rsp+14h] [rbp-2E4h]
  unsigned __int8 v54; // [rsp+18h] [rbp-2E0h]
  char v55; // [rsp+19h] [rbp-2DFh]
  char v56; // [rsp+1Ah] [rbp-2DEh]
  unsigned __int8 v57; // [rsp+1Bh] [rbp-2DDh]
  char v58; // [rsp+1Ch] [rbp-2DCh]
  unsigned __int8 v59; // [rsp+1Dh] [rbp-2DBh]
  unsigned __int8 v60; // [rsp+1Eh] [rbp-2DAh]
  char v61; // [rsp+1Fh] [rbp-2D9h]
  unsigned __int8 v62; // [rsp+20h] [rbp-2D8h]
  unsigned __int8 v63; // [rsp+21h] [rbp-2D7h]
  unsigned __int8 v64; // [rsp+22h] [rbp-2D6h]
  char v65; // [rsp+23h] [rbp-2D5h]
  char v66; // [rsp+24h] [rbp-2D4h]
  char v67; // [rsp+25h] [rbp-2D3h]
  unsigned __int8 v68; // [rsp+26h] [rbp-2D2h]
  char v69; // [rsp+27h] [rbp-2D1h]
  char v70; // [rsp+34h] [rbp-2C4h]
  __m128i v71; // [rsp+38h] [rbp-2C0h] BYREF
  __int16 v72; // [rsp+48h] [rbp-2B0h]
  __int8 v73; // [rsp+4Ah] [rbp-2AEh]
  __int8 v74; // [rsp+4Bh] [rbp-2ADh]
  __int32 v75; // [rsp+4Ch] [rbp-2ACh]
  _BYTE v76[64]; // [rsp+50h] [rbp-2A8h] BYREF
  const char *v77; // [rsp+90h] [rbp-268h]
  __int64 v78; // [rsp+98h] [rbp-260h]
  __int64 v79; // [rsp+A0h] [rbp-258h]
  __int64 v80; // [rsp+A8h] [rbp-250h]
  __m128i v81; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-238h]
  __m128i v83; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v84; // [rsp+E0h] [rbp-218h]
  __m128i v85; // [rsp+E8h] [rbp-210h] BYREF
  __int64 v86; // [rsp+F8h] [rbp-200h]
  __m128i v87; // [rsp+100h] [rbp-1F8h] BYREF
  __int64 v88; // [rsp+110h] [rbp-1E8h]
  __int64 v89; // [rsp+118h] [rbp-1E0h] BYREF
  int v90; // [rsp+120h] [rbp-1D8h]
  __int64 v91; // [rsp+128h] [rbp-1D0h] BYREF
  int v92; // [rsp+130h] [rbp-1C8h]
  __int64 v93; // [rsp+138h] [rbp-1C0h] BYREF
  __int64 v94; // [rsp+140h] [rbp-1B8h]
  __int64 v95; // [rsp+148h] [rbp-1B0h]
  __m128i v96; // [rsp+150h] [rbp-1A8h] BYREF
  __int64 v97; // [rsp+160h] [rbp-198h]
  __m128i v98; // [rsp+170h] [rbp-188h] BYREF
  __int64 v99; // [rsp+190h] [rbp-168h] BYREF
  __m128i v100; // [rsp+198h] [rbp-160h] BYREF
  __int64 v101; // [rsp+1A8h] [rbp-150h]
  __m128i v102; // [rsp+1B0h] [rbp-148h]
  __int64 v103; // [rsp+1C0h] [rbp-138h]
  __int128 v104; // [rsp+1C8h] [rbp-130h]
  _BYTE v105[14]; // [rsp+1D8h] [rbp-120h]
  __int128 v106; // [rsp+1F0h] [rbp-108h] BYREF
  __int64 v107; // [rsp+200h] [rbp-F8h]
  __m128i v108; // [rsp+208h] [rbp-F0h] BYREF
  __int64 v109; // [rsp+218h] [rbp-E0h]
  __int128 v110; // [rsp+220h] [rbp-D8h] BYREF
  __int64 v111; // [rsp+230h] [rbp-C8h]
  __m128i v112; // [rsp+240h] [rbp-B8h] BYREF
  __int64 v113; // [rsp+250h] [rbp-A8h]
  __m128i v114; // [rsp+258h] [rbp-A0h] BYREF
  __int64 v115; // [rsp+268h] [rbp-90h]
  __m128i v116; // [rsp+270h] [rbp-88h] BYREF
  __int64 v117; // [rsp+280h] [rbp-78h]
  int v118; // [rsp+288h] [rbp-70h] BYREF
  _BYTE *v119; // [rsp+290h] [rbp-68h]
  _BYTE v120[72]; // [rsp+2B0h] [rbp-48h] BYREF

  v2 = (_QWORD *)alloc::alloc::Global::alloc_impl();
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 16LL);
  *v2 = aContext_0;
  v2[1] = 7LL;
  alloc::slice::hack::into_vec(v120, v2, 1LL);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v76, v120);
  v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v76);
  if ( v3 )
  {
    v5 = v3;
    v6 = v4;
    do
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, v5, v6)
        && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, v5, v6) == 2 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v83, v5, v6);
        v8 = a1;
        *(_QWORD *)(a1 + 32) = v84;
        *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v83);
        *(_QWORD *)(a1 + 8) = 10LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v76);
        return v8;
      }
      v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v76);
      v6 = v7;
    }
    while ( v5 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v76);
  flag = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRecursive, 9LL) )
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aArchive, 7LL);
  uucore::features::backup_control::determine_backup_mode(&v98, a2);
  if ( v98.m128i_i64[0] )
  {
    v81 = v98;
    v83.m128i_i64[0] = (__int64)&v81;
    v83.m128i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)v76 = &unk_1E8A0;
    *(_QWORD *)&v76[8] = 1LL;
    *(_QWORD *)&v76[32] = 0LL;
    *(_QWORD *)&v76[16] = &v83;
    *(_QWORD *)&v76[24] = 1LL;
    core::option::Option<T>::map_or_else(&v112, v76);
    v8 = a1;
    *(_QWORD *)(a1 + 32) = v113;
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v112);
    *(_QWORD *)(a1 + 8) = 11LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v81.m128i_i64[0], v81.m128i_i64[1]);
    return v8;
  }
  v10 = v98.m128i_i8[8];
  updated = uucore::features::update_control::determine_update_mode(a2);
  uucore::features::backup_control::determine_backup_suffix(&v100, a2);
  v12 = uu_cp::OverwriteMode::from_matches(a2);
  v69 = v13;
  v14 = v12;
  v68 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoTargetDirect, 19LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v76, a2, "target-directory/", 16LL);
  v15 = clap_builder::parser::error::MatchesError::unwrap("target-directory/", 16LL, v76);
  if ( v15 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v76, v15, v16, 0x8000000000000000LL);
    v88 = *(_QWORD *)&v76[16];
    v87 = _mm_loadu_si128((const __m128i *)v76);
    if ( v87.m128i_i64[0] != 0x8000000000000000LL && !(unsigned __int8)std::path::Path::is_dir(v87.m128i_i64[1], v88) )
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v76, &v87, v17, v18);
      v19 = (__m128i *)a1;
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v76[16];
      *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)v76);
      *(_QWORD *)(a1 + 8) = 12LL;
LABEL_72:
      v19->m128i_i64[0] = 0x8000000000000000LL;
      goto LABEL_73;
    }
  }
  else
  {
    v87.m128i_i64[0] = 0x8000000000000000LL;
  }
  v65 = v14;
  v66 = updated;
  v67 = v10;
  v56 = flag;
  v93 = 0LL;
  v94 = 8LL;
  v95 = 0LL;
  *(_QWORD *)v76 = aPreserve;
  *(_QWORD *)&v76[8] = 8LL;
  *(_QWORD *)&v76[16] = aNoPreserve;
  *(_QWORD *)&v76[24] = 11LL;
  *(_QWORD *)&v76[32] = aArchive;
  *(_QWORD *)&v76[40] = 7LL;
  *(_QWORD *)&v76[48] = aPreserveDefaul;
  *(_QWORD *)&v76[56] = 27LL;
  v77 = aNoDereferenceP;
  v78 = 29LL;
  v79 = 0LL;
  v80 = 5LL;
  while ( 1 )
  {
    v20 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(v76);
    v22 = v20;
    if ( !v20 )
      break;
    v23 = v21;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v118, a2, v20, v21);
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, v22, v23);
    if ( v118 == 2 && v24 == 1 && v119 )
    {
      if ( *v119 )
      {
        v84 = v25;
        v83.m128i_i64[0] = v22;
        v83.m128i_i64[1] = v23;
        v85.m128i_i64[0] = 0LL;
        v85.m128i_i64[1] = 8LL;
        v86 = 0LL;
        alloc::vec::Vec<T,A>::push(&v93, &v83);
      }
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences(&v83, a2, v22, v23);
      clap_builder::parser::error::MatchesError::unwrap(&v106, v22, v23, &v83);
      clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v108, a2, v22, v23);
      if ( (_QWORD)v106 && v108.m128i_i64[0] )
      {
        v111 = v107;
        v110 = v106;
        v82 = v109;
        v81 = _mm_loadu_si128(&v108);
        v83.m128i_i64[0] = (__int64)&v81;
        v83.m128i_i64[1] = (__int64)&v93;
        v84 = v22;
        v85.m128i_i64[0] = v23;
        core::iter::traits::iterator::Iterator::fold(&v110, &v83);
      }
    }
  }
  core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>(v76);
  alloc::slice::<impl [T]>::sort_by(v94, v95);
  v52 = 0;
  v51 = 0;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v98, &v93);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v83, &v98);
  v26 = 0;
  v27 = 0;
  v53 = 0;
  if ( v85.m128i_i64[0] == 0x8000000000000000LL )
  {
LABEL_28:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>(&v98);
    if ( (v26 & 1) != 0 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v83, aSelinuxWasNotE, 48LL);
      *(_QWORD *)&v76[24] = v84;
      *(__m128i *)&v76[8] = _mm_loadu_si128(&v83);
      *(_QWORD *)v76 = 4LL;
      if ( (v27 & 1) != 0 )
      {
        v34 = *(_OWORD *)v76;
        v35 = *(_OWORD *)&v76[16];
        v36 = _mm_loadu_si128((const __m128i *)&v76[32]);
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v76[48];
        *(__m128i *)(a1 + 40) = v36;
        *(_OWORD *)(a1 + 24) = v35;
        *(_OWORD *)(a1 + 8) = v34;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        goto LABEL_73;
      }
      uu_cp::show_error_if_needed(v76);
      core::ptr::drop_in_place<uu_cp::Error>(v76);
    }
    v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAttributesOnly, 15LL);
    v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCopyContents, 13LL);
    v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCliSymbolicLin, 18LL);
    v61 = uu_cp::CopyMode::from_matches(a2);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoDereference, 14LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoDereferenceP, 29LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aArchive, 7LL)
      || (v54 = 1, v56) && (unsigned __int8)uu_cp::CopyMode::from_matches(a2) )
    {
      v54 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDereference, 11LL);
    }
    v60 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aOneFileSystem, 15LL);
    v59 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aParents, 7LL);
    v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDebug, 5LL);
    v55 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL) )
      v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDebug, 5LL);
    v57 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aStripTrailingS, 22LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v76, a2, aReflink_0, 7LL);
    v28 = clap_builder::parser::error::MatchesError::unwrap(aReflink_0, 7LL, v76);
    v70 = 1;
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 8);
      v30 = *(_QWORD *)(v28 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v30, aAlways, 6LL) )
      {
        v70 = 0;
      }
      else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v30, "auto", 4LL) )
      {
        v70 = 2;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v30, aNever, 5LL) )
        {
          v83.m128i_i64[0] = 0LL;
          v83.m128i_i64[1] = v29;
          v84 = v30;
          v85.m128i_i8[0] = 1;
          v81.m128i_i64[0] = (__int64)&v83;
          v81.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v76 = &off_1B5580;
          *(_QWORD *)&v76[8] = 2LL;
          *(_QWORD *)&v76[32] = 0LL;
          *(_QWORD *)&v76[16] = &v81;
          *(_QWORD *)&v76[24] = 1LL;
          core::option::Option<T>::map_or_else(&v114, v76);
          v19 = (__m128i *)a1;
          *(_QWORD *)(a1 + 32) = v115;
          v43 = _mm_loadu_si128(&v114);
          goto LABEL_71;
        }
      }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v76, a2, aSparse, 6LL);
    v37 = clap_builder::parser::error::MatchesError::unwrap(aSparse, 6LL, v76);
    v38 = 1;
    if ( !v37 )
    {
LABEL_68:
      v84 = v101;
      v83 = v100;
      *(_QWORD *)&v76[16] = v88;
      *(__m128i *)v76 = _mm_load_si128(&v87);
      v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aProgress, 8LL);
      *(_WORD *)&v105[12] = v52;
      *(_DWORD *)&v105[8] = v51;
      v42 = v83;
      v102 = v83;
      v103 = v84;
      *(_QWORD *)v105 = *(_QWORD *)&v76[16];
      v104 = *(_OWORD *)v76;
      v8 = a1;
      *(_QWORD *)(a1 + 46) = *(_QWORD *)&v105[6];
      *(_QWORD *)(a1 + 32) = *((_QWORD *)&v104 + 1);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)v105;
      *(_QWORD *)(a1 + 16) = v103;
      *(_QWORD *)(a1 + 24) = v104;
      *(__m128i *)a1 = v42;
      *(_BYTE *)(a1 + 54) = v26;
      *(_BYTE *)(a1 + 55) = v27;
      *(_DWORD *)(a1 + 56) = v53;
      *(_BYTE *)(a1 + 60) = v65;
      *(_BYTE *)(a1 + 61) = v69;
      *(_QWORD *)(a1 + 62) = _mm_insert_epi16(
                               _mm_insert_epi16(
                                 _mm_cvtsi32_si128(v64 | (v63 << 8) | (v62 << 16) | (v54 << 24)),
                                 v68 | (v60 << 8),
                                 2),
                               v59 | (v57 << 8),
                               3).m128i_u64[0];
      *(_BYTE *)(a1 + 70) = v56;
      *(_BYTE *)(a1 + 71) = v58;
      *(_BYTE *)(a1 + 72) = v55;
      *(_BYTE *)(a1 + 73) = v41;
      *(_BYTE *)(a1 + 74) = v38;
      *(_BYTE *)(a1 + 75) = v70;
      *(_BYTE *)(a1 + 76) = v67;
      *(_BYTE *)(a1 + 77) = v66;
      *(_BYTE *)(a1 + 78) = v61;
      return v8;
    }
    v99 = v37;
    v39 = *(_QWORD *)(v37 + 8);
    v40 = *(_QWORD *)(v37 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v40, aAlways, 6LL) )
    {
      v38 = 0;
      goto LABEL_68;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v40, "auto", 4LL) )
      goto LABEL_68;
    v38 = 2;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v40, aNever, 5LL) )
      goto LABEL_68;
    v83.m128i_i64[0] = (__int64)&v99;
    v83.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)v76 = &off_1B55A0;
    *(_QWORD *)&v76[8] = 2LL;
    *(_QWORD *)&v76[32] = 0LL;
    *(_QWORD *)&v76[16] = &v83;
    *(_QWORD *)&v76[24] = 1LL;
    core::option::Option<T>::map_or_else(&v116, v76);
    v19 = (__m128i *)a1;
    *(_QWORD *)(a1 + 32) = v117;
    v43 = _mm_loadu_si128(&v116);
LABEL_71:
    v19[1] = v43;
    v19->m128i_i64[1] = 9LL;
    goto LABEL_72;
  }
  v53 = 0;
  v27 = 0;
  v26 = 0;
  while ( 1 )
  {
    v31 = v83;
    v97 = v86;
    v96 = _mm_loadu_si128(&v85);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v83.m128i_i64[0],
                            v83.m128i_i64[1],
                            aArchive,
                            7LL) )
    {
      v52 = 257;
      v51 = 16843009;
      v53 = (int)&unk_10101;
      v26 = 0;
      v27 = 0;
      goto LABEL_50;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v31.m128i_i64[0],
                            v31.m128i_i64[1],
                            aPreserveDefaul,
                            27LL) )
    {
      *(_WORD *)&v76[4] = v52;
      *(_DWORD *)v76 = v51;
      v76[6] = v26;
      v76[7] = v27;
      *(_DWORD *)&v76[8] = v53;
      uu_cp::Attributes::union(&v81, v76);
LABEL_49:
      v51 = v81.m128i_i32[0];
      v52 = v81.m128i_i16[2];
      v26 = v81.m128i_i8[6];
      v27 = v81.m128i_i8[7];
      v53 = v81.m128i_i32[2];
      goto LABEL_50;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v31.m128i_i64[0],
                            v31.m128i_i64[1],
                            aNoDereferenceP,
                            29LL) )
    {
      *(_WORD *)&v76[4] = v52;
      *(_DWORD *)v76 = v51;
      v76[6] = v26;
      v76[7] = v27;
      *(_DWORD *)&v76[8] = v53;
      uu_cp::Attributes::union(&v81, v76);
      goto LABEL_49;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v31.m128i_i64[0],
                            v31.m128i_i64[1],
                            aPreserve,
                            8LL) )
    {
      v71.m128i_i16[2] = v52;
      v71.m128i_i32[0] = v51;
      v71.m128i_i8[6] = v26;
      v71.m128i_i8[7] = v27;
      v71.m128i_i32[2] = v53;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v81, &v96);
      uu_cp::Attributes::parse_iter((__int64)v76, (__int128 *)v81.m128i_i8);
      v89 = *(_QWORD *)&v76[8];
      v32 = *(_QWORD *)v76;
      v90 = *(_DWORD *)&v76[16];
      if ( *(_QWORD *)v76 != 13LL )
      {
        v45 = *(_OWORD *)&v76[20];
        v46 = *(_OWORD *)&v76[36];
        v47 = (_QWORD *)a1;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v76[48];
        *(_OWORD *)(a1 + 44) = v46;
        *(_OWORD *)(a1 + 28) = v45;
        *(_DWORD *)(a1 + 24) = v90;
        v48 = v89;
        goto LABEL_77;
      }
      uu_cp::Attributes::union(&v71.m128i_i8[12], (unsigned __int8 *)&v71, (unsigned __int8 *)&v89);
      goto LABEL_59;
    }
    v33 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31.m128i_i64[0], v31.m128i_i64[1], aNoPreserve, 11LL);
    if ( ((v97 != 0) & v33) == 1 )
      break;
LABEL_50:
    core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v96);
LABEL_51:
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v83, &v98);
    if ( v85.m128i_i64[0] == 0x8000000000000000LL )
      goto LABEL_28;
  }
  v71.m128i_i16[2] = v52;
  v71.m128i_i32[0] = v51;
  v71.m128i_i8[6] = v26;
  v71.m128i_i8[7] = v27;
  v71.m128i_i32[2] = v53;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v81, &v96);
  uu_cp::Attributes::parse_iter((__int64)v76, (__int128 *)v81.m128i_i8);
  v91 = *(_QWORD *)&v76[8];
  v32 = *(_QWORD *)v76;
  v92 = *(_DWORD *)&v76[16];
  if ( *(_QWORD *)v76 == 13LL )
  {
    uu_cp::Attributes::diff((__int64)&v71.m128i_i64[1] + 4, &v71, (unsigned __int8 *)&v91);
LABEL_59:
    v51 = v71.m128i_i32[3];
    v52 = v72;
    v26 = v73;
    v27 = v74;
    v53 = v75;
    goto LABEL_51;
  }
  v49 = *(_OWORD *)&v76[20];
  v50 = *(_OWORD *)&v76[36];
  v47 = (_QWORD *)a1;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v76[48];
  *(_OWORD *)(a1 + 44) = v50;
  *(_OWORD *)(a1 + 28) = v49;
  *(_DWORD *)(a1 + 24) = v92;
  v48 = v91;
LABEL_77:
  v47[2] = v48;
  v47[1] = v32;
  *v47 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>(&v98);
LABEL_73:
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v87);
  core::ptr::drop_in_place<alloc::string::String>(&v100);
  return a1;
}
