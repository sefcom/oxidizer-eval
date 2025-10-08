__int64 __fastcall uu_cp::Options::from_matches(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rbx
  char flag; // bp
  char v12; // bl
  __int64 v13; // r15
  __int64 v14; // rax
  char v15; // r12
  char v16; // dl
  char v17; // bl
  char v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rbp
  __int128 v32; // kr00_16
  __int128 v33; // kr10_16
  __int128 v34; // kr20_16
  __int64 v35; // r15
  __int64 v36; // r13
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  char v39; // bp
  __int64 v40; // rax
  char v41; // r12
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rbx
  __int64 v45; // r15
  char v46; // al
  int v47; // ecx
  __int64 v48; // rax
  char v49; // r12
  __int64 v50; // rbx
  __int64 v51; // r15
  char v52; // al
  char v53; // bp
  __int128 v54; // xmm1
  _BYTE *v55; // rbx
  _QWORD *v56; // rdx
  __int128 v57; // xmm0
  __int64 v58; // rcx
  __int128 v59; // xmm0
  __int32 v60; // [rsp+4h] [rbp-304h]
  __int16 v61; // [rsp+8h] [rbp-300h]
  __int8 v62; // [rsp+Ch] [rbp-2FCh]
  __int8 v63; // [rsp+10h] [rbp-2F8h]
  __int32 v64; // [rsp+14h] [rbp-2F4h]
  char v65; // [rsp+18h] [rbp-2F0h]
  char v66; // [rsp+19h] [rbp-2EFh]
  char v67; // [rsp+1Ah] [rbp-2EEh]
  char v68; // [rsp+1Bh] [rbp-2EDh]
  char v69; // [rsp+1Ch] [rbp-2ECh]
  char v70; // [rsp+1Dh] [rbp-2EBh]
  char v71; // [rsp+1Eh] [rbp-2EAh]
  char v72; // [rsp+1Fh] [rbp-2E9h]
  char v73; // [rsp+20h] [rbp-2E8h]
  char v74; // [rsp+21h] [rbp-2E7h]
  char v75; // [rsp+22h] [rbp-2E6h]
  char v76; // [rsp+23h] [rbp-2E5h]
  char v77; // [rsp+24h] [rbp-2E4h]
  char v78; // [rsp+25h] [rbp-2E3h]
  char updated; // [rsp+26h] [rbp-2E2h]
  char v80; // [rsp+27h] [rbp-2E1h]
  __int128 v82; // [rsp+30h] [rbp-2D8h] BYREF
  __int64 v83; // [rsp+40h] [rbp-2C8h]
  int v84; // [rsp+54h] [rbp-2B4h]
  __m128i v85; // [rsp+58h] [rbp-2B0h] BYREF
  __int16 v86; // [rsp+68h] [rbp-2A0h]
  __int8 v87; // [rsp+6Ah] [rbp-29Eh]
  __int8 v88; // [rsp+6Bh] [rbp-29Dh]
  __int32 v89; // [rsp+6Ch] [rbp-29Ch]
  _BYTE v90[56]; // [rsp+70h] [rbp-298h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-260h]
  const char *v92; // [rsp+B0h] [rbp-258h]
  __int64 v93; // [rsp+B8h] [rbp-250h]
  const char *v94; // [rsp+C0h] [rbp-248h]
  __int64 v95; // [rsp+C8h] [rbp-240h]
  __int128 v96; // [rsp+D0h] [rbp-238h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-228h]
  __int64 v98; // [rsp+E8h] [rbp-220h]
  __int64 v99; // [rsp+F0h] [rbp-218h]
  __int64 v100; // [rsp+F8h] [rbp-210h]
  __int128 v101; // [rsp+100h] [rbp-208h] BYREF
  __int64 v102; // [rsp+110h] [rbp-1F8h]
  __int64 v103; // [rsp+120h] [rbp-1E8h] BYREF
  int v104; // [rsp+128h] [rbp-1E0h]
  __int64 v105; // [rsp+130h] [rbp-1D8h] BYREF
  int v106; // [rsp+138h] [rbp-1D0h]
  __int64 v107; // [rsp+140h] [rbp-1C8h] BYREF
  __int64 v108; // [rsp+148h] [rbp-1C0h]
  __int64 v109; // [rsp+150h] [rbp-1B8h]
  _OWORD v110[2]; // [rsp+158h] [rbp-1B0h] BYREF
  __int64 v111; // [rsp+178h] [rbp-190h] BYREF
  __int64 v112; // [rsp+180h] [rbp-188h]
  __int64 v113; // [rsp+188h] [rbp-180h]
  __int128 v114; // [rsp+190h] [rbp-178h] BYREF
  __int64 v115; // [rsp+1A0h] [rbp-168h]
  __int64 v116; // [rsp+1A8h] [rbp-160h] BYREF
  __int128 v117; // [rsp+1B0h] [rbp-158h]
  _BYTE v118[24]; // [rsp+1C0h] [rbp-148h]
  __int64 v119; // [rsp+1D8h] [rbp-130h]
  __int128 v120; // [rsp+1E0h] [rbp-128h]
  __int64 v121; // [rsp+1F0h] [rbp-118h]
  __int32 v122; // [rsp+1F8h] [rbp-110h]
  __int16 v123; // [rsp+1FCh] [rbp-10Ch]
  _QWORD v124[3]; // [rsp+208h] [rbp-100h] BYREF
  __int128 v125; // [rsp+220h] [rbp-E8h] BYREF
  __int64 v126; // [rsp+230h] [rbp-D8h]
  __int128 v127; // [rsp+238h] [rbp-D0h] BYREF
  __int64 v128; // [rsp+248h] [rbp-C0h]
  __int128 v129; // [rsp+250h] [rbp-B8h] BYREF
  __int64 v130; // [rsp+260h] [rbp-A8h]
  __int128 v131; // [rsp+268h] [rbp-A0h] BYREF
  __int64 v132; // [rsp+278h] [rbp-90h]
  int v133; // [rsp+280h] [rbp-88h] BYREF
  _BYTE *v134; // [rsp+288h] [rbp-80h]
  _BYTE v135[24]; // [rsp+2A8h] [rbp-60h] BYREF
  _BYTE v136[72]; // [rsp+2C0h] [rbp-48h] BYREF

  v3 = alloc::alloc::Global::alloc_impl(8LL, 0LL, 0LL);
  if ( !v3 )
    alloc::alloc::handle_alloc_error(8LL, 0LL);
  v124[0] = 0LL;
  v124[1] = v3;
  v124[2] = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v90, v124);
  v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v90);
  if ( v4 )
  {
    v6 = v4;
    v7 = v5;
    do
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, v6, v7)
        && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, v6, v7) == 2 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v96, v6, v7);
        v9 = a1;
        *(_QWORD *)(a1 + 32) = v97;
        *(_OWORD *)(a1 + 16) = v96;
        *(_QWORD *)(a1 + 8) = 0x8000000000000009LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v90);
        return v9;
      }
      v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v90);
      v7 = v8;
    }
    while ( v6 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v90);
  flag = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRecursive, 9LL) )
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aArchive, 7LL);
  uucore::features::backup_control::determine_backup_mode(v110, a2);
  if ( *(_QWORD *)&v110[0] )
  {
    v82 = v110[0];
    *(_QWORD *)&v96 = &v82;
    *((_QWORD *)&v96 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)v90 = &unk_20910;
    *(_QWORD *)&v90[8] = 1LL;
    *(_QWORD *)&v90[32] = 0LL;
    *(_QWORD *)&v90[16] = &v96;
    *(_QWORD *)&v90[24] = 1LL;
    core::option::Option<T>::map_or_else(&v131, v90);
    v9 = a1;
    *(_QWORD *)(a1 + 32) = v132;
    *(_OWORD *)(a1 + 16) = v131;
    *(_QWORD *)(a1 + 8) = 0x800000000000000ALL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      v82,
      *((_QWORD *)&v82 + 1));
    return v9;
  }
  v12 = BYTE8(v110[0]);
  updated = uucore::features::update_control::determine_update_mode(a2);
  v80 = v12;
  if ( v12 )
  {
    v13 = (__int64)*(&uucore::features::update_control::arguments::OPT_UPDATE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v90, a2, aUpdate, v13);
    v14 = clap_builder::parser::error::MatchesError::unwrap(aUpdate, v13, v90);
    if ( v14 )
    {
      if ( (unsigned __int8)uu_cp::Options::from_matches::{{closure}}(*(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16)) )
      {
        v9 = a1;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 16, aBackupIsMutual, 60LL);
        *(_QWORD *)(a1 + 8) = 0x8000000000000008LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return v9;
      }
    }
  }
  uucore::features::backup_control::determine_backup_suffix(&v114, a2);
  v15 = uu_cp::OverwriteMode::from_matches(a2);
  v17 = v16;
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoTargetDirect, 19LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v90, a2);
  v19 = clap_builder::parser::error::MatchesError::unwrap(v90);
  v78 = v17;
  v77 = v18;
  if ( v19 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v90, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16));
    v102 = *(_QWORD *)&v90[16];
    v101 = *(_OWORD *)v90;
    if ( *(_QWORD *)v90 != 0x8000000000000000LL )
    {
      v20 = *((_QWORD *)&v101 + 1);
      v21 = v102;
      if ( !(unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v101 + 1), v102) )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v90, v20, v21);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v90[16];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)v90;
        *(_QWORD *)(a1 + 8) = 0x800000000000000BLL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        goto LABEL_88;
      }
    }
  }
  else
  {
    *(_QWORD *)&v101 = 0x8000000000000000LL;
  }
  v76 = v15;
  v67 = flag;
  v107 = 0LL;
  v108 = 8LL;
  v109 = 0LL;
  *(_QWORD *)v90 = 0LL;
  *(_QWORD *)&v90[8] = 5LL;
  *(_QWORD *)&v90[16] = aPreserve;
  *(_QWORD *)&v90[24] = 8LL;
  *(_QWORD *)&v90[32] = aNoPreserve;
  *(_QWORD *)&v90[40] = 11LL;
  *(_QWORD *)&v90[48] = aArchive;
  v91 = 7LL;
  v92 = aPreserveDefaul;
  v93 = 27LL;
  v94 = aNoDereferenceP;
  v95 = 29LL;
  v22 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v90);
  if ( v22 )
  {
    v24 = v22;
    v25 = v23;
    do
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v133, a2, v24, v25);
      v27 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, v24, v25);
      if ( v133 == 2 && (v27 & 1) != 0 && v134 )
      {
        if ( *v134 == 1 )
        {
          v97 = v28;
          *(_QWORD *)&v96 = v24;
          *((_QWORD *)&v96 + 1) = v25;
          v98 = 0LL;
          v99 = 8LL;
          v100 = 0LL;
          alloc::vec::Vec<T,A>::push(&v107, &v96, &off_15E9E8);
        }
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences(&v96, a2, v24, v25);
        clap_builder::parser::error::MatchesError::unwrap(&v125, v24, v25, &v96);
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v127, a2, v24, v25);
        if ( (_QWORD)v125 && (_QWORD)v127 )
        {
          v130 = v126;
          v129 = v125;
          v83 = v128;
          v82 = v127;
          *(_QWORD *)&v96 = &v82;
          *((_QWORD *)&v96 + 1) = &v107;
          v97 = v24;
          v98 = v25;
          core::iter::traits::iterator::Iterator::fold(&v129, &v96);
        }
      }
      v24 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v90);
      v25 = v26;
    }
    while ( v24 );
    v29 = v108;
    v30 = v109;
  }
  else
  {
    v29 = 8LL;
    v30 = 0LL;
  }
  alloc::slice::<impl [T]>::sort_by(v29, v30);
  v61 = 0;
  v60 = 0;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v110, &v107);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v96, v110);
  v31 = v98;
  v63 = 0;
  v62 = 0;
  v64 = 0;
  if ( v98 == 0x8000000000000000LL )
  {
LABEL_36:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>(v110);
    if ( (v63 & 1) != 0 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v96, aSelinuxWasNotE, 48LL);
      *(_QWORD *)&v90[24] = v97;
      *(_OWORD *)&v90[8] = v96;
      *(_QWORD *)v90 = 0x8000000000000003LL;
      if ( (v62 & 1) != 0 )
      {
        *(_QWORD *)(a1 + 56) = *(_QWORD *)&v90[48];
        v32 = *(_OWORD *)v90;
        v33 = *(_OWORD *)&v90[16];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v90[32];
        *(_OWORD *)(a1 + 24) = v33;
        *(_OWORD *)(a1 + 8) = v32;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        goto LABEL_88;
      }
      uu_cp::show_error_if_needed(v90);
      core::ptr::drop_in_place<uu_cp::Error>(v90);
    }
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZ, 1LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aContext_0, 7LL)
      && (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v90, a2, aContext_0, 7LL),
          (v40 = clap_builder::parser::error::MatchesError::unwrap(aContext_0, 7LL, v90)) != 0) )
    {
      <alloc::string::String as core::clone::Clone>::clone(v90, v40);
      v83 = *(_QWORD *)&v90[16];
      v82 = *(_OWORD *)v90;
    }
    else
    {
      *(_QWORD *)&v82 = 0x8000000000000000LL;
    }
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAttributesOnly, 15LL);
    v75 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCopyContents, 13LL);
    v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCliSymbolicLin, 18LL);
    v73 = uu_cp::CopyMode::from_matches(a2);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoDereference, 14LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoDereferenceP, 29LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aArchive, 7LL)
      || (v65 = 1, v67) && (unsigned __int8)uu_cp::CopyMode::from_matches(a2) )
    {
      v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDereference, 11LL);
    }
    v72 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aOneFileSystem, 15LL);
    v71 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aParents, 7LL);
    v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDebug, 5LL);
    v66 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL) )
      v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDebug, 5LL);
    v69 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aStripTrailingS, 22LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v90, a2, aReflink_0, 7LL);
    v42 = clap_builder::parser::error::MatchesError::unwrap(aReflink_0, 7LL, v90);
    LOBYTE(v43) = 1;
    v84 = v43;
    if ( v42 )
    {
      v44 = *(_QWORD *)(v42 + 8);
      v45 = *(_QWORD *)(v42 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v44, v45, aAlways, 6LL) )
      {
        v84 = 0;
      }
      else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v44, v45, aAuto, 4LL) )
      {
        v46 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v44, v45, aNever, 5LL);
        LOBYTE(v47) = 2;
        v84 = v47;
        if ( !v46 )
        {
          *(_QWORD *)&v96 = 0LL;
          *((_QWORD *)&v96 + 1) = v44;
          v97 = v45;
          LOBYTE(v98) = 1;
          *(_QWORD *)&v110[0] = &v96;
          *((_QWORD *)&v110[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v90 = &off_15E9A8;
          *(_QWORD *)&v90[8] = 2LL;
          *(_QWORD *)&v90[32] = 0LL;
          *(_QWORD *)&v90[16] = v110;
          *(_QWORD *)&v90[24] = 1LL;
          v55 = v135;
          core::option::Option<T>::map_or_else(v135, v90);
          goto LABEL_84;
        }
      }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v90, a2, aSparse, 6LL);
    v48 = clap_builder::parser::error::MatchesError::unwrap(aSparse, 6LL, v90);
    v68 = v41;
    v49 = 1;
    if ( !v48 )
    {
LABEL_81:
      v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aProgress, 8LL);
      v53 = ((_QWORD)v82 != 0x8000000000000000LL) | v39;
      v120 = v82;
      v121 = v83;
      v123 = v61;
      v122 = v60;
      v54 = v114;
      v117 = v114;
      *(_QWORD *)v118 = v115;
      *(_OWORD *)&v118[8] = v101;
      v119 = v102;
      v9 = a1;
      *(_OWORD *)(a1 + 48) = v82;
      *(_WORD *)(a1 + 62) = HIWORD(v120);
      *(_QWORD *)(a1 + 64) = v121;
      *(_DWORD *)(a1 + 72) = v122;
      *(_WORD *)(a1 + 76) = v123;
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v118[16];
      *(_QWORD *)(a1 + 40) = v119;
      *(_OWORD *)a1 = v54;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)v118;
      *(_BYTE *)(a1 + 78) = v63;
      *(_BYTE *)(a1 + 79) = v62;
      *(_DWORD *)(a1 + 80) = v64;
      *(_BYTE *)(a1 + 84) = v76;
      *(_BYTE *)(a1 + 85) = v78;
      *(_BYTE *)(a1 + 86) = v68;
      *(_BYTE *)(a1 + 87) = v75;
      *(_BYTE *)(a1 + 88) = v74;
      *(_BYTE *)(a1 + 89) = v65;
      *(_BYTE *)(a1 + 90) = v77;
      *(_BYTE *)(a1 + 91) = v72;
      *(_BYTE *)(a1 + 92) = v71;
      *(_BYTE *)(a1 + 93) = v69;
      *(_BYTE *)(a1 + 94) = v67;
      *(_BYTE *)(a1 + 95) = v70;
      *(_BYTE *)(a1 + 96) = v66;
      *(_BYTE *)(a1 + 97) = v52;
      *(_BYTE *)(a1 + 98) = v53;
      *(_BYTE *)(a1 + 99) = v49;
      *(_BYTE *)(a1 + 100) = v84;
      *(_BYTE *)(a1 + 101) = v80;
      *(_BYTE *)(a1 + 102) = updated;
      *(_BYTE *)(a1 + 103) = v73;
      return v9;
    }
    v116 = v48;
    v50 = *(_QWORD *)(v48 + 8);
    v51 = *(_QWORD *)(v48 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v50, v51, aAlways, 6LL) )
    {
      v49 = 0;
      goto LABEL_81;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v50, v51, aAuto, 4LL) )
      goto LABEL_81;
    v49 = 2;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v50, v51, aNever, 5LL) )
      goto LABEL_81;
    *(_QWORD *)&v96 = &v116;
    *((_QWORD *)&v96 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v90 = &off_15E9C8;
    *(_QWORD *)&v90[8] = 2LL;
    *(_QWORD *)&v90[32] = 0LL;
    *(_QWORD *)&v90[16] = &v96;
    *(_QWORD *)&v90[24] = 1LL;
    v55 = v136;
    core::option::Option<T>::map_or_else(v136, v90);
LABEL_84:
    *(_QWORD *)(a1 + 32) = *((_QWORD *)v55 + 2);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v55;
    *(_QWORD *)(a1 + 8) = 0x8000000000000008LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v82);
    goto LABEL_88;
  }
  v64 = 0;
  v62 = 0;
  v63 = 0;
  while ( 1 )
  {
    v34 = v96;
    v35 = v99;
    v36 = v100;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v96, *((_QWORD *)&v96 + 1), aArchive, 7LL) )
    {
      v61 = 257;
      v60 = 16843009;
      v64 = 65793;
      v63 = 0;
      v62 = 0;
      goto LABEL_47;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v34,
                            *((_QWORD *)&v34 + 1),
                            aPreserveDefaul,
                            27LL) )
    {
      *(_WORD *)&v90[4] = v61;
      *(_DWORD *)v90 = v60;
      v90[6] = v63;
      v90[7] = v62;
      *(_DWORD *)&v90[8] = v64;
      v37 = (unsigned __int8 *)&unk_24A8C;
LABEL_46:
      uu_cp::Attributes::union(&v82, v90, v37);
      v60 = v82;
      v61 = WORD2(v82);
      v63 = BYTE6(v82);
      v62 = BYTE7(v82);
      v64 = DWORD2(v82);
      goto LABEL_47;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v34,
                            *((_QWORD *)&v34 + 1),
                            aNoDereferenceP,
                            29LL) )
    {
      *(_WORD *)&v90[4] = v61;
      *(_DWORD *)v90 = v60;
      v90[6] = v63;
      v90[7] = v62;
      *(_DWORD *)&v90[8] = v64;
      v37 = (unsigned __int8 *)&byte_24A80;
      goto LABEL_46;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v34,
                            *((_QWORD *)&v34 + 1),
                            aPreserve,
                            8LL) )
    {
      v85.m128i_i16[2] = v61;
      v85.m128i_i32[0] = v60;
      v85.m128i_i8[6] = v63;
      v85.m128i_i8[7] = v62;
      v85.m128i_i32[2] = v64;
      v111 = v31;
      v112 = v35;
      v113 = v36;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v82, &v111);
      uu_cp::Attributes::parse_iter((__int64)v90, &v82);
      v103 = *(_QWORD *)&v90[8];
      v38 = *(_QWORD *)v90;
      v104 = *(_DWORD *)&v90[16];
      if ( *(_QWORD *)v90 != 0x800000000000000CLL )
      {
        v56 = (_QWORD *)a1;
        *(_DWORD *)(a1 + 60) = *(_DWORD *)&v90[52];
        v57 = *(_OWORD *)&v90[20];
        *(_OWORD *)(a1 + 44) = *(_OWORD *)&v90[36];
        *(_OWORD *)(a1 + 28) = v57;
        *(_DWORD *)(a1 + 24) = v104;
        v58 = v103;
        goto LABEL_87;
      }
      uu_cp::Attributes::union(&v85.m128i_i8[12], (unsigned __int8 *)&v85, (unsigned __int8 *)&v103);
      goto LABEL_57;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v34,
                            *((_QWORD *)&v34 + 1),
                            aNoPreserve,
                            11LL)
      && v36 )
    {
      break;
    }
LABEL_47:
    core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(v31, v35);
LABEL_48:
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v96, v110);
    v31 = v98;
    if ( v98 == 0x8000000000000000LL )
      goto LABEL_36;
  }
  v85.m128i_i16[2] = v61;
  v85.m128i_i32[0] = v60;
  v85.m128i_i8[6] = v63;
  v85.m128i_i8[7] = v62;
  v85.m128i_i32[2] = v64;
  v111 = v31;
  v112 = v35;
  v113 = v36;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v82, &v111);
  uu_cp::Attributes::parse_iter((__int64)v90, &v82);
  v105 = *(_QWORD *)&v90[8];
  v38 = *(_QWORD *)v90;
  v106 = *(_DWORD *)&v90[16];
  if ( *(_QWORD *)v90 == 0x800000000000000CLL )
  {
    uu_cp::Attributes::diff((__int64)&v85.m128i_i64[1] + 4, &v85, (unsigned __int8 *)&v105);
LABEL_57:
    v60 = v85.m128i_i32[3];
    v61 = v86;
    v63 = v87;
    v62 = v88;
    v64 = v89;
    goto LABEL_48;
  }
  v56 = (_QWORD *)a1;
  *(_DWORD *)(a1 + 60) = *(_DWORD *)&v90[52];
  v59 = *(_OWORD *)&v90[20];
  *(_OWORD *)(a1 + 44) = *(_OWORD *)&v90[36];
  *(_OWORD *)(a1 + 28) = v59;
  *(_DWORD *)(a1 + 24) = v106;
  v58 = v105;
LABEL_87:
  v56[2] = v58;
  v56[1] = v38;
  *v56 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>(v110);
LABEL_88:
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v101);
  core::ptr::drop_in_place<alloc::string::String>(&v114);
  return a1;
}