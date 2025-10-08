__int64 __fastcall uu_du::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r15
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __m128i *v19; // rbx
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rbx
  char v23; // al
  char v24; // al
  char v25; // r12
  char v26; // r14
  __int64 v27; // rax
  char v28; // bp
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rsi
  char v34; // r12
  char v35; // bp
  __int64 v36; // rax
  char v37; // r14
  bool v38; // zf
  char v39; // al
  __int128 v40; // rax
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __int64 i; // rbp
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 v50; // r12
  char v51; // al
  __m128i v52; // xmm0
  __m128i v53; // kr00_16
  __m256i *v54; // r15
  __int64 (__fastcall *v55)(); // r12
  __int64 v56; // rbp
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // rsi
  __int64 v65; // rax
  __int128 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int8 flag; // [rsp+0h] [rbp-7A8h]
  __int64 v70; // [rsp+0h] [rbp-7A8h]
  char v71; // [rsp+8h] [rbp-7A0h]
  __int64 v72; // [rsp+8h] [rbp-7A0h]
  char v73; // [rsp+10h] [rbp-798h]
  __int64 v74; // [rsp+10h] [rbp-798h]
  _OWORD v75[3]; // [rsp+18h] [rbp-790h] BYREF
  __int64 v76; // [rsp+48h] [rbp-760h]
  void *v77; // [rsp+50h] [rbp-758h]
  __int64 v78; // [rsp+58h] [rbp-750h]
  __m128i v79; // [rsp+60h] [rbp-748h] BYREF
  __m128i v80; // [rsp+70h] [rbp-738h] BYREF
  __int64 v81; // [rsp+80h] [rbp-728h]
  __m128i v82; // [rsp+88h] [rbp-720h] BYREF
  __int64 v83; // [rsp+98h] [rbp-710h]
  __m128i si128; // [rsp+A0h] [rbp-708h]
  __int64 v85; // [rsp+B0h] [rbp-6F8h]
  char v86; // [rsp+B8h] [rbp-6F0h]
  char v87; // [rsp+B9h] [rbp-6EFh]
  char v88; // [rsp+BAh] [rbp-6EEh]
  char v89; // [rsp+BBh] [rbp-6EDh]
  char v90; // [rsp+BCh] [rbp-6ECh]
  __m256i v91; // [rsp+C0h] [rbp-6E8h] BYREF
  __m128i v92; // [rsp+E0h] [rbp-6C8h] BYREF
  __int128 v93; // [rsp+F0h] [rbp-6B8h]
  __int128 v94; // [rsp+100h] [rbp-6A8h]
  __m128i v95; // [rsp+110h] [rbp-698h]
  __m128i v96; // [rsp+120h] [rbp-688h]
  __m128i v97; // [rsp+130h] [rbp-678h]
  __m128i v98; // [rsp+140h] [rbp-668h]
  _OWORD v99[3]; // [rsp+150h] [rbp-658h] BYREF
  __m128i v100; // [rsp+180h] [rbp-628h] BYREF
  __int64 v101; // [rsp+190h] [rbp-618h]
  __int64 v102; // [rsp+198h] [rbp-610h]
  __int64 v103; // [rsp+1A0h] [rbp-608h]
  __m128i v104; // [rsp+1A8h] [rbp-600h] BYREF
  __int128 v105; // [rsp+1B8h] [rbp-5F0h]
  __int128 v106; // [rsp+1C8h] [rbp-5E0h]
  __m128i v107; // [rsp+1D8h] [rbp-5D0h]
  __int128 v108; // [rsp+1E8h] [rbp-5C0h]
  __int64 v109; // [rsp+1F8h] [rbp-5B0h] BYREF
  __int64 v110; // [rsp+200h] [rbp-5A8h]
  __int64 v111; // [rsp+208h] [rbp-5A0h]
  __m128i v112; // [rsp+210h] [rbp-598h] BYREF
  __m256i *v113; // [rsp+220h] [rbp-588h]
  __int64 (__fastcall *v114)(); // [rsp+228h] [rbp-580h]
  __int64 v115; // [rsp+230h] [rbp-578h]
  __int128 v116; // [rsp+238h] [rbp-570h]
  __int64 v117; // [rsp+248h] [rbp-560h]
  __int64 v118; // [rsp+250h] [rbp-558h]
  __int64 v119; // [rsp+258h] [rbp-550h]
  __m128i v120[4]; // [rsp+260h] [rbp-548h] BYREF
  __m128i v121; // [rsp+2A8h] [rbp-500h] BYREF
  __int64 v122; // [rsp+2B8h] [rbp-4F0h]
  __m128i dest; // [rsp+2C0h] [rbp-4E8h] BYREF
  _BYTE v124[48]; // [rsp+2D0h] [rbp-4D8h]
  __int128 v125; // [rsp+300h] [rbp-4A8h]
  __m128i v126; // [rsp+310h] [rbp-498h]
  __m128i v127; // [rsp+320h] [rbp-488h]
  __m128i v128; // [rsp+330h] [rbp-478h]
  __m128i v129; // [rsp+340h] [rbp-468h]
  __int64 v130; // [rsp+350h] [rbp-458h]
  _BYTE v131[32]; // [rsp+588h] [rbp-220h] BYREF
  __m128i v132; // [rsp+5A8h] [rbp-200h] BYREF
  __int64 v133; // [rsp+5B8h] [rbp-1F0h]
  __m128i v134[4]; // [rsp+5C0h] [rbp-1E8h] BYREF
  _BYTE v135[24]; // [rsp+600h] [rbp-1A8h] BYREF
  _BYTE v136[24]; // [rsp+618h] [rbp-190h] BYREF
  __m128i v137[10]; // [rsp+630h] [rbp-178h] BYREF
  __m128i v138[13]; // [rsp+6D0h] [rbp-D8h] BYREF

  uu_du::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v91, &dest, a1, a2);
  if ( !__OFSUB__(-v91.m256i_i64[0], 1LL) )
  {
    v76 = v93;
    v4 = _mm_loadu_si128((const __m128i *)&v91.m256i_u64[2]);
    v75[2] = v92;
    v75[1] = v4;
    v75[0] = *(_OWORD *)v91.m256i_i8;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aS, 1LL);
    v71 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, asc_1E916, 1LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v75, aD, 1LL);
    v5 = clap_builder::parser::error::MatchesError::unwrap(aD, 1LL, &dest);
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 8);
      v6 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      v7 = 0LL;
    }
    uu_du::parse_depth(&dest, v7, v6, flag);
    v3 = dest.m128i_i64[1];
    v8 = *(_QWORD *)v124;
    if ( (dest.m128i_i8[0] & 1) != 0 )
      goto LABEL_93;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v75, aFiles0From, 11LL);
    v9 = clap_builder::parser::error::MatchesError::unwrap(aFiles0From, 11LL, &dest);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 8);
      v12 = *(_QWORD *)(v9 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, asc_1E923, 1LL) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v75, aFile, 4LL);
        if ( clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, &dest) )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v75, aFile, 4LL);
          v13 = clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, &dest);
          if ( !v13 )
            core::option::unwrap_failed(&off_144488);
          v14 = *(_QWORD *)(v13 + 8);
          v15 = *(_QWORD *)(v13 + 16);
          v91.m256i_i64[0] = 0LL;
          v91.m256i_i64[1] = v14;
          v91.m256i_i64[2] = v15;
          v91.m256i_i8[24] = 1;
          v112.m128i_i64[0] = (__int64)&v91;
          v112.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          dest.m128i_i64[0] = (__int64)&off_1443D8;
          dest.m128i_i64[1] = 2LL;
          *(_QWORD *)&v124[16] = 0LL;
          *(_QWORD *)v124 = &v112;
          *(_QWORD *)&v124[8] = 1LL;
          core::option::Option<T>::map_or_else(v135, &dest);
          v16 = alloc::boxed::Box<T>::new(v135);
          v17 = std::io::error::Error::_new(40LL, v16, &off_1444C0);
          goto LABEL_19;
        }
        v11 = *(_QWORD *)(v10 + 8);
        v12 = *(_QWORD *)(v10 + 16);
      }
      uu_du::read_files_from(&dest, v11, v12);
      v17 = dest.m128i_i64[1];
      if ( dest.m128i_i64[0] == 0x8000000000000000LL )
      {
LABEL_19:
        v3 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        goto LABEL_93;
      }
      v80 = dest;
      v81 = *(_QWORD *)v124;
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v75);
      clap_builder::parser::error::MatchesError::unwrap(v134, &dest);
      if ( v134[0].m128i_i64[0] )
      {
        if ( v71 )
        {
          core::iter::traits::iterator::Iterator::collect(&v80, v134);
        }
        else
        {
          <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&dest);
          v92 = *(__m128i *)&v124[16];
          *(_OWORD *)&v91.m256i_u64[2] = *(_OWORD *)v124;
          *(__m128i *)v91.m256i_i8 = dest;
          v21 = _mm_loadu_si128(v134);
          *(__m128i *)&v124[32] = v134[3];
          *(__m128i *)&v124[16] = v134[2];
          *(__m128i *)v124 = v134[1];
          dest = v21;
          *(_QWORD *)&v125 = &v91;
          core::iter::traits::iterator::Iterator::collect(&v80, &dest);
          core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v91);
        }
      }
      else
      {
        v18 = alloc::alloc::Global::alloc_impl(8LL, 24LL, 0LL);
        if ( !v18 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        v19 = (__m128i *)v18;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, asc_1E878, 1LL);
        v91.m256i_i64[2] = *(_QWORD *)v124;
        v20 = _mm_loadu_si128(&dest);
        *(__m128i *)v91.m256i_i8 = v20;
        v19[1].m128i_i64[0] = *(_QWORD *)v124;
        *v19 = v20;
        v80.m128i_i64[0] = 1LL;
        v80.m128i_i64[1] = (__int64)v19;
        v81 = 1LL;
      }
    }
    v73 = 3;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v75, aTime, 4LL) )
      v73 = uu_du::uumain::uumain::{{closure}}(v75);
    v22 = 1LL;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, asc_1EA1C, 1LL) )
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aSi, 2LL) )
      {
        v22 = 0LL;
      }
      else
      {
        v77 = &dword_0 + 1;
        v22 = 2LL;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aB, 1LL) )
        {
          v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aK, 1LL);
          v77 = &stru_400;
          if ( !v23 )
          {
            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aM, 1LL);
            v77 = &loc_100000;
            if ( !v24 )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v75, aBlockSize, 10LL);
              v60 = clap_builder::parser::error::MatchesError::unwrap(aBlockSize, 10LL, &dest);
              v62 = v60;
              if ( v60 )
              {
                v63 = *(_QWORD *)(v60 + 8);
                v61 = *(_QWORD *)(v60 + 16);
              }
              else
              {
                v63 = 0LL;
              }
              uu_du::read_block_size(&dest, v63, v61);
              v65 = v8;
              v29 = dest.m128i_i64[0];
              if ( dest.m128i_i64[0] )
                goto LABEL_51;
              v77 = (void *)dest.m128i_i64[1];
              v8 = v65;
              v22 = 2LL;
              if ( !dest.m128i_i64[1] )
              {
                *(_QWORD *)&v66 = core::option::Option<T>::map_or(v62);
                v91.m256i_i64[0] = 0LL;
                *(_OWORD *)&v91.m256i_u64[1] = v66;
                v91.m256i_i8[24] = 1;
                v112.m128i_i64[0] = (__int64)&off_144518;
                v112.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
                v113 = &v91;
                v114 = <os_display::Quoted as core::fmt::Display>::fmt;
                dest.m128i_i64[0] = (__int64)&off_1443F8;
                dest.m128i_i64[1] = 2LL;
                *(_QWORD *)&v124[16] = 0LL;
                *(_QWORD *)v124 = &v112;
                *(_QWORD *)&v124[8] = 2LL;
                core::option::Option<T>::map_or_else(v136, &dest);
                v67 = alloc::boxed::Box<T>::new(v136);
                v68 = std::io::error::Error::_new(40LL, v67, &off_1444C0);
                v29 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                goto LABEL_51;
              }
            }
          }
        }
      }
    }
    LOBYTE(v78) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aAll, 3LL);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aS_0, 1LL);
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aOneFileSystem, 15LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aDereference, 11LL) )
    {
      v27 = 0x8000000000000000LL;
    }
    else
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              v75,
                              "dereference-argsConnection resetentity not found",
                              16LL) )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&dest, v80.m128i_i64[1], v81);
        v91.m256i_i64[2] = *(_QWORD *)v124;
        *(__m128i *)v91.m256i_i8 = _mm_loadu_si128(&dest);
        goto LABEL_36;
      }
      v27 = 0x8000000000000002LL;
    }
    v91.m256i_i64[0] = v27;
LABEL_36:
    v102 = v22;
    v103 = v8;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aVerbose, 7LL);
    uu_du::build_exclude_patterns(&dest, v75);
    v29 = dest.m128i_i64[1];
    v30 = *(_QWORD *)v124;
    if ( dest.m128i_i64[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<uu_du::Deref>(&v91);
LABEL_51:
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v80);
      v3 = v29;
      goto LABEL_93;
    }
    v86 = v78;
    v87 = v25;
    v88 = v26;
    si128 = _mm_load_si128((const __m128i *)&v91);
    v85 = v91.m256i_i64[2];
    v89 = v71;
    v90 = v28;
    v82 = dest;
    v83 = *(_QWORD *)v124;
    if ( v73 == 3 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aYMDHM, 14LL);
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v75, aTimeStyle, 10LL);
      v31 = clap_builder::parser::error::MatchesError::unwrap(aTimeStyle, 10LL, &dest);
      if ( v31 )
      {
        v33 = *(_QWORD *)(v31 + 8);
        v32 = *(_QWORD *)(v31 + 16);
      }
      else
      {
        v33 = 0LL;
      }
      uu_du::parse_time_style(&dest, v33, v32);
      v29 = dest.m128i_i64[1];
      v30 = *(_QWORD *)v124;
      if ( (dest.m128i_i8[0] & 1) != 0 )
        goto LABEL_50;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, dest.m128i_i64[1], *(_QWORD *)v124);
    }
    v101 = *(_QWORD *)v124;
    v100 = _mm_loadu_si128(&dest);
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aC, 1LL);
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aInodes, 6LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v75, aThreshold, 9LL);
    v36 = clap_builder::parser::error::MatchesError::unwrap(aThreshold, 9LL, &dest);
    if ( v36 )
    {
      uu_du::uumain::uumain::{{closure}}(&dest, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16));
      v29 = dest.m128i_i64[0];
      if ( dest.m128i_i64[0] != 2 )
        v29 = dest.m128i_i64[1];
      v30 = *(_QWORD *)v124;
      if ( (dest.m128i_i8[0] & 1) != 0 )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v100);
LABEL_50:
        core::ptr::drop_in_place<uu_du::TraversalOptions>(&v82);
        goto LABEL_51;
      }
    }
    else
    {
      v29 = 2LL;
    }
    v37 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aApparentSize, 13LL) )
      v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aB, 1LL);
    v38 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, a0, 1LL) == 0;
    v39 = 10;
    if ( !v38 )
      v39 = 0;
    BYTE8(v108) = v34;
    BYTE9(v108) = v35;
    v104.m128i_i64[0] = v3;
    v104.m128i_i64[1] = v103;
    *(_QWORD *)&v105 = v29;
    *((_QWORD *)&v105 + 1) = v30;
    BYTE10(v108) = v37;
    *(_QWORD *)&v106 = v102;
    *((_QWORD *)&v106 + 1) = v77;
    BYTE12(v108) = v73;
    v107 = _mm_load_si128(&v100);
    *(_QWORD *)&v108 = v101;
    BYTE13(v108) = v39;
    BYTE11(v108) = flag;
    if ( v35
      && ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aApparentSize, 13LL)
       || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aB, 1LL)) )
    {
      *(_QWORD *)&v40 = uucore::util_name();
      *(_OWORD *)v91.m256i_i8 = v40;
      v112.m128i_i64[0] = (__int64)&v91;
      v112.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      dest.m128i_i64[0] = (__int64)&unk_144418;
      dest.m128i_i64[1] = 2LL;
      *(_QWORD *)&v124[16] = 0LL;
      *(_QWORD *)v124 = &v112;
      *(_QWORD *)&v124[8] = 1LL;
      std::io::stdio::_eprint(&dest);
      dest.m128i_i64[0] = (__int64)&off_144438;
      dest.m128i_i64[1] = 1LL;
      *(_QWORD *)v124 = 8LL;
      *(_OWORD *)&v124[8] = 0LL;
      std::io::stdio::_eprint(&dest);
    }
    std::sync::mpmc::channel(&dest);
    v41 = *(__m128i *)v124;
    v79 = dest;
    v125 = v108;
    v42 = _mm_loadu_si128(&v104);
    *(__m128i *)&v124[32] = v107;
    *(_OWORD *)&v124[16] = v106;
    *(_OWORD *)v124 = v105;
    dest = v42;
    v126 = v41;
    v91.m256i_i64[2] = 0x8000000000000000LL;
    v91.m256i_i64[0] = 0LL;
    v92.m128i_i8[8] = 0;
    std::thread::Builder::spawn_unchecked(&v112, &v91, &dest);
    core::result::Result<T,E>::expect(&v121, &v112);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v131, &v80);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v109, v131);
    for ( i = v109; v109 != 0x8000000000000000LL; i = v109 )
    {
      v45 = v110;
      v46 = v111;
      v70 = v110;
      if ( v83 )
      {
        alloc::string::String::from_utf8_lossy(&v112, v110, v111);
        v47 = v82.m128i_i64[1];
        v48 = v82.m128i_i64[1] + 56 * v83;
        v49 = v112.m128i_i64[1];
        v50 = (__int64)v113;
        do
        {
          if ( v47 == v48 )
          {
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v112);
            v45 = v70;
            goto LABEL_75;
          }
          v51 = glob::Pattern::matches(v47, v49, v50);
          v47 += 56LL;
        }
        while ( !v51 );
        if ( v90 )
        {
          v91.m256i_i64[0] = 0LL;
          v91.m256i_i64[1] = v49;
          v91.m256i_i64[2] = v50;
          v91.m256i_i8[24] = 1;
          *(_QWORD *)&v99[0] = &v91;
          *((_QWORD *)&v99[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          dest.m128i_i64[0] = (__int64)&unk_144448;
          dest.m128i_i64[1] = 2LL;
          *(_QWORD *)&v124[16] = 0LL;
          *(_QWORD *)v124 = v99;
          *(_QWORD *)&v124[8] = 1LL;
          std::io::stdio::_print(&dest);
        }
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v112);
        v44 = v70;
      }
      else
      {
LABEL_75:
        uu_du::Stat::new(&v112, v45, v46, 0LL, &v82);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v112), (__m128i)xmmword_1D730)) == 0xFFFF )
        {
          core::ptr::drop_in_place<core::result::Result<uu_du::Stat,std::io::error::Error>>(&v112);
          alloc::string::String::from_utf8_lossy(&v112, v70, v46);
          v52 = _mm_loadu_si128((const __m128i *)&v112.m128i_u64[1]);
          v91.m256i_i64[0] = 0LL;
          *(__m128i *)&v91.m256i_u64[1] = v52;
          v91.m256i_i8[24] = 1;
          *(_QWORD *)&v99[0] = &v91;
          *((_QWORD *)&v99[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          dest.m128i_i64[0] = (__int64)&off_144468;
          dest.m128i_i64[1] = 2LL;
          *(_QWORD *)&v124[16] = 0LL;
          *(_QWORD *)v124 = v99;
          *(_QWORD *)&v124[8] = 1LL;
          core::option::Option<T>::map_or_else(&v132, &dest);
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v112);
          *(_DWORD *)&v124[8] = 1;
          dest = _mm_loadu_si128(&v132);
          *(_QWORD *)v124 = v133;
          *(_QWORD *)v124 = alloc::boxed::Box<T>::new(&dest);
          *(_QWORD *)&v124[8] = &off_144560;
          dest = (__m128i)2uLL;
          std::sync::mpmc::Sender<T>::send(v138, v79.m128i_i64[0], v79.m128i_i64[1], &dest);
          v44 = v70;
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v138), (__m128i)xmmword_1D8E0)) != 0xFFFF )
          {
            v3 = uu_du::uumain::uumain::{{closure}}(v138);
            v44 = v70;
            if ( v3 )
              goto LABEL_91;
          }
        }
        else
        {
          v72 = i;
          v53 = v112;
          v54 = v113;
          v55 = v114;
          v56 = v115;
          v74 = v118;
          v78 = v119;
          <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&dest);
          v57 = _mm_loadu_si128(&dest);
          v99[2] = *(_OWORD *)&v124[16];
          v99[1] = *(_OWORD *)v124;
          v99[0] = v57;
          if ( (v53.m128i_i8[0] & 1) != 0 )
            hashbrown::map::HashMap<K,V,S,A>::insert(v99, v54, v55, v56);
          dest = v53;
          *(_QWORD *)&v124[8] = v55;
          *(_QWORD *)v124 = v54;
          *(_QWORD *)&v124[16] = v56;
          *(_QWORD *)&v124[40] = v117;
          *(_OWORD *)&v124[24] = v116;
          *(_QWORD *)&v125 = v74;
          *((_QWORD *)&v125 + 1) = v78;
          v58 = _mm_load_si128(v120);
          v129 = v120[3];
          v128 = v120[2];
          v127 = v120[1];
          v126 = v58;
          uu_du::du(&v91, &dest, &v82, 0LL, v99, &v79);
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)&v91), (__m128i)xmmword_1D730)) == 0xFFFF )
          {
            v3 = uu_du::uumain::uumain::{{closure}}(v91.m256i_i64[2]);
LABEL_90:
            i = v72;
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<uu_du::FileInfo>>(
              *(_QWORD *)&v99[0],
              *((_QWORD *)&v99[0] + 1));
            v44 = v70;
LABEL_91:
            core::mem::drop(i, v44);
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v131);
            core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v121);
            core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v79);
            goto LABEL_92;
          }
          v129 = v98;
          v128 = v97;
          v127 = v96;
          v59 = _mm_load_si128(&v92);
          v126 = v95;
          v125 = v94;
          *(_OWORD *)&v124[32] = v93;
          *(__m128i *)&v124[16] = v59;
          dest = *(__m128i *)v91.m256i_i8;
          *(_OWORD *)v124 = *(_OWORD *)&v91.m256i_u64[2];
          v130 = 0LL;
          std::sync::mpmc::Sender<T>::send(v137, v79.m128i_i64[0], v79.m128i_i64[1], &dest);
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v137), (__m128i)xmmword_1D8E0)) != 0xFFFF )
          {
            v3 = uu_du::uumain::uumain::{{closure}}(v137);
            if ( v3 )
              goto LABEL_90;
          }
          core::ptr::drop_in_place<std::collections::hash::set::HashSet<uu_du::FileInfo>>(
            *(_QWORD *)&v99[0],
            *((_QWORD *)&v99[0] + 1));
          i = v72;
          v44 = v70;
        }
      }
      core::mem::drop(i, v44);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v109, v131);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v131);
    dest = _mm_loadu_si128(&v79);
    core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&dest);
    *(_QWORD *)v124 = v122;
    dest = _mm_loadu_si128(&v121);
    std::thread::JoinInner<T>::join(&v91, &dest);
    v3 = v91.m256i_i64[1];
    if ( v91.m256i_i32[0] == 1 )
    {
      v3 = uu_du::uumain::uumain::{{closure}}(v91.m256i_i64[1], v91.m256i_i64[2]);
      goto LABEL_92;
    }
    if ( !v91.m256i_i64[1] )
    {
      core::ptr::drop_in_place<uu_du::TraversalOptions>(&v82);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v75);
      return 0LL;
    }
LABEL_92:
    core::ptr::drop_in_place<uu_du::TraversalOptions>(&v82);
LABEL_93:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v75);
    return v3;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           v91.m256i_i64[1],
           &dest,
           v2,
           -v91.m256i_i64[0]);
}