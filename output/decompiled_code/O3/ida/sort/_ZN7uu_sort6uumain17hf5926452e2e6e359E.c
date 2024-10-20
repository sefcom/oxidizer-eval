__int64 __fastcall uu_sort::uumain(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v2)(); // r15
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  _OWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // r14
  __int64 (__fastcall *v16)(); // rsi
  char v17; // bl
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  _OWORD *v34; // rax
  __int128 v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int128 v45; // rax
  __int128 v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __m256i *v51; // rbx
  __int128 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int64 v59; // rax
  bool v60; // zf
  char v61; // al
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int128 v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int128 v74; // xmm0
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int128 v81; // xmm0
  __int64 v82; // rax
  void *v83; // rbx
  __int64 v84; // r14
  char v85; // al
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  void *v89; // rcx
  int v90; // edx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int128 v93; // xmm1
  __int64 v94; // rax
  char v95; // bl
  char v96; // r12
  char v97; // r13
  __int64 v98; // rbp
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int64 v104; // rbx
  __int64 v105; // r13
  __int64 (__fastcall *v106)(); // rsi
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int128 v114; // rax
  __int128 v115; // rax
  unsigned int v116; // ebx
  __int128 v117; // kr70_16
  __int64 v118; // rsi
  __int64 (__fastcall **v120)(); // rdx
  __m256i v121; // [rsp+0h] [rbp-568h] BYREF
  __int128 v122; // [rsp+20h] [rbp-548h]
  __int128 v123; // [rsp+30h] [rbp-538h]
  __m256i v124; // [rsp+40h] [rbp-528h] BYREF
  _BYTE v125[21]; // [rsp+60h] [rbp-508h]
  char v126; // [rsp+75h] [rbp-4F3h]
  char v127; // [rsp+76h] [rbp-4F2h]
  char v128; // [rsp+77h] [rbp-4F1h]
  __int128 v129; // [rsp+80h] [rbp-4E8h] BYREF
  unsigned __int64 v130[4]; // [rsp+90h] [rbp-4D8h]
  __int64 v131; // [rsp+B0h] [rbp-4B8h] BYREF
  unsigned __int128 v132; // [rsp+B8h] [rbp-4B0h]
  __m256i v133; // [rsp+D0h] [rbp-498h] BYREF
  __int128 v134; // [rsp+F0h] [rbp-478h]
  __int64 v135; // [rsp+100h] [rbp-468h]
  __int64 v136; // [rsp+108h] [rbp-460h] BYREF
  __int128 v137; // [rsp+110h] [rbp-458h]
  __m256i v138[2]; // [rsp+120h] [rbp-448h] BYREF
  __int128 v139; // [rsp+160h] [rbp-408h] BYREF
  __int128 v140; // [rsp+170h] [rbp-3F8h] BYREF
  __int64 v141; // [rsp+180h] [rbp-3E8h]
  __int64 v142; // [rsp+188h] [rbp-3E0h]
  _QWORD v143[7]; // [rsp+190h] [rbp-3D8h] BYREF
  __int64 v144; // [rsp+1C8h] [rbp-3A0h]
  __int64 v145; // [rsp+1D0h] [rbp-398h]
  int v146; // [rsp+1D8h] [rbp-390h]
  __int64 v147; // [rsp+1DCh] [rbp-38Ch]
  int v148; // [rsp+1E4h] [rbp-384h]
  __int128 v149; // [rsp+1E8h] [rbp-380h]
  unsigned int v150; // [rsp+1F8h] [rbp-370h]
  __m256i v151; // [rsp+200h] [rbp-368h] BYREF
  __int128 v152; // [rsp+220h] [rbp-348h]
  _OWORD v153[2]; // [rsp+230h] [rbp-338h] BYREF
  __int128 v154; // [rsp+250h] [rbp-318h]
  __int64 (__fastcall **v155)(); // [rsp+260h] [rbp-308h]
  char v156; // [rsp+268h] [rbp-300h]
  unsigned __int64 v157; // [rsp+4C8h] [rbp-A0h]
  __int64 v158; // [rsp+4D0h] [rbp-98h]
  __int64 v159; // [rsp+4D8h] [rbp-90h]
  __int64 v160; // [rsp+4E0h] [rbp-88h] BYREF
  __int128 v161; // [rsp+4E8h] [rbp-80h] BYREF
  __int64 v162; // [rsp+4F8h] [rbp-70h]
  _OWORD v163[3]; // [rsp+500h] [rbp-68h] BYREF
  __int64 (__fastcall **v164)(); // [rsp+530h] [rbp-38h]

  LOWORD(v150) = 2566;
  v147 = 0LL;
  v148 = 0;
  *(_QWORD *)&v139 = 0LL;
  *((_QWORD *)&v139 + 1) = 8LL;
  v140 = 0LL;
  v146 = 1114112;
  v141 = 1LL;
  v142 = 0LL;
  v144 = 1000000000LL;
  v3 = 0x8000000000000000LL;
  v143[0] = 0x8000000000000000LL;
  v145 = 32LL;
  memset(&v143[3], 0, 25);
  uu_sort::uu_app(&v151);
  clap_builder::builder::command::Command::try_get_matches_from(&v121, &v151, a1, a2);
  if ( v121.m256i_i64[0] != 0x8000000000000000LL )
  {
    v135 = v123;
    v134 = v122;
    v133 = v121;
    LOBYTE(v147) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aDebug, 5LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v133, aFiles0From, 11LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v151, &v133, aFiles0From, 11LL);
      clap_builder::parser::error::MatchesError::unwrap(&v121, aFiles0From, 11LL, &v151);
      v157 = 0x8000000000000000LL;
      if ( v121.m256i_i64[0]
        && (v153[0] = v123,
            v152 = v122,
            v151 = v121,
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v138, &v151),
            *(_OWORD *)v124.m256i_i8 = *(_OWORD *)&v138[0].m256i_u64[1],
            v138[0].m256i_i64[0] != 0x8000000000000000LL) )
      {
        v137 = *(_OWORD *)v124.m256i_i8;
        v136 = v138[0].m256i_i64[0];
        v7 = v124.m256i_i64[0];
        *(_QWORD *)&v129 = 0LL;
        *((_QWORD *)&v129 + 1) = 8LL;
        v130[0] = 0LL;
        if ( v124.m256i_i64[1] )
        {
          v158 = v124.m256i_i64[0] + 24 * v124.m256i_i64[1];
          while ( 1 )
          {
            v159 = v7;
            uu_sort::open(&v151, v7);
            v2 = (__int64 (__fastcall **)())v151.m256i_i64[2];
            v6 = (_OWORD *)v151.m256i_i64[1];
            if ( v151.m256i_i64[0] )
              break;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(
              v163,
              0x2000LL,
              v151.m256i_i64[1],
              v151.m256i_i64[2]);
            v155 = v164;
            v154 = v163[2];
            v153[1] = v163[1];
            v153[0] = v163[0];
            v151.m256i_i64[0] = 0x8000000000000001LL;
            v151.m256i_i64[3] = 0x8000000000000001LL;
            v156 = 0;
            while ( *(_QWORD *)&v153[0] )
            {
              <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v121, v153);
              if ( v121.m256i_i64[0] == 0x8000000000000001LL )
              {
                if ( *(_QWORD *)&v153[0] )
                {
                  if ( *((_QWORD *)&v153[0] + 1) )
                    _rust_dealloc(*(_QWORD *)&v153[0], *((_QWORD *)&v153[0] + 1), 1LL);
                  v15 = *((_QWORD *)&v154 + 1);
                  v2 = v155;
                  if ( *v155 )
                    ((void (__fastcall *)(_QWORD))*v155)(*((_QWORD *)&v154 + 1));
                  v16 = v2[1];
                  if ( v16 )
                    _rust_dealloc(v15, v16, v2[2]);
                }
                *(_QWORD *)&v153[0] = 0LL;
                break;
              }
              if ( v121.m256i_i64[0] == 0x8000000000000000LL )
              {
                if ( (unsigned __int64)(v121.m256i_i8[8] & 3) - 2 >= 2 && (v121.m256i_i8[8] & 3) != 0 )
                {
                  v8 = v121.m256i_i64[1] - 1;
                  v2 = *(__int64 (__fastcall ***)())(v121.m256i_i64[1] - 1);
                  v9 = *(_QWORD *)(v121.m256i_i64[1] + 7);
                  if ( *(_QWORD *)v9 )
                    (*(void (__fastcall **)(_QWORD))v9)(*(_QWORD *)(v121.m256i_i64[1] - 1));
                  v10 = *(_QWORD *)(v9 + 8);
                  if ( v10 )
                    _rust_dealloc(v2, v10, *(_QWORD *)(v9 + 16));
                  _rust_dealloc(v8, 24LL, 8LL);
                }
              }
              else
              {
                *(_OWORD *)v124.m256i_i8 = *(_OWORD *)v121.m256i_i8;
                v124.m256i_i64[2] = v121.m256i_i64[2];
                core::str::converts::from_utf8(&v121);
                if ( v121.m256i_i64[0] )
                {
                  *(_OWORD *)v138[0].m256i_i8 = *(_OWORD *)&v121.m256i_u64[1];
                  core::result::unwrap_failed(aCouldNotParseS, 50LL, v138, &unk_18EE48, &off_18F310);
                }
                std::sys::os_str::bytes::Slice::to_owned(&v121, v121.m256i_i64[1], v121.m256i_i64[2]);
                v138[0].m256i_i64[2] = v121.m256i_i64[2];
                *(_OWORD *)v138[0].m256i_i8 = *(_OWORD *)v121.m256i_i8;
                v11 = v130[0];
                if ( v130[0] == (_QWORD)v129 )
                  alloc::raw_vec::RawVec<T,A>::grow_one(&v129);
                v12 = *((_QWORD *)&v129 + 1);
                v13 = 3 * v11;
                v14 = *(_OWORD *)v138[0].m256i_i8;
                *(_QWORD *)(*((_QWORD *)&v129 + 1) + 8 * v13 + 16) = v138[0].m256i_i64[2];
                *(_OWORD *)(v12 + 8 * v13) = v14;
                v130[0] = v11 + 1;
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v124);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v124);
              }
            }
            core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::io::Split<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>(&v151);
            v7 = v159 + 24;
            if ( v159 + 24 == v158 )
              goto LABEL_10;
          }
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v129);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v129);
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v136);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v136);
          goto LABEL_155;
        }
      }
      else
      {
        v136 = 0LL;
        v137 = 8uLL;
        *(_QWORD *)&v129 = 0LL;
        *((_QWORD *)&v129 + 1) = 8LL;
        v130[0] = 0LL;
      }
LABEL_10:
      v131 = v129;
      v132 = __PAIR128__(v130[0], *((unsigned __int64 *)&v129 + 1));
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v136);
      v3 = v157;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v136);
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v151, &v133, aFiles, 5LL);
      clap_builder::parser::error::MatchesError::unwrap(&v121, aFiles, 5LL, &v151);
      if ( v121.m256i_i64[0]
        && (v153[0] = v123,
            v152 = v122,
            v151 = v121,
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v138, &v151),
            *(_OWORD *)v151.m256i_i8 = *(_OWORD *)&v138[0].m256i_u64[1],
            v138[0].m256i_i64[0] != 0x8000000000000000LL) )
      {
        v132 = *(_OWORD *)v151.m256i_i8;
        v131 = v138[0].m256i_i64[0];
      }
      else
      {
        v131 = 0LL;
        v132 = 8uLL;
      }
    }
    v17 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v133,
                             aHumanNumericSo,
                             18LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aSort, 4LL);
      v18 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v151);
      if ( !v18
        || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                               *(_QWORD *)(v18 + 8),
                               *(_QWORD *)(v18 + 16),
                               aHumanNumeric,
                               13LL) )
      {
        v17 = 3;
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aMonthSort, 10LL) )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aSort, 4LL);
          v19 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v151);
          if ( !v19
            || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   *(_QWORD *)(v19 + 8),
                                   *(_QWORD *)(v19 + 16),
                                   aMonth,
                                   5LL) )
          {
            v17 = 2;
            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                     &v133,
                                     aGeneralNumeric,
                                     20LL) )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aSort, 4LL);
              v20 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v151);
              if ( !v20
                || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                       *(_QWORD *)(v20 + 8),
                                       *(_QWORD *)(v20 + 16),
                                       aGeneralNumeric_0,
                                       15LL) )
              {
                if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                        &v133,
                                        aNumericSort,
                                        12LL)
                  || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aSort, 4LL),
                      (v21 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v151)) != 0)
                  && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                        *(_QWORD *)(v21 + 8),
                                        *(_QWORD *)(v21 + 16),
                                        aNumeric,
                                        7LL) )
                {
                  v17 = 0;
                }
                else
                {
                  v17 = 4;
                  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                           &v133,
                                           aVersionSort,
                                           12LL) )
                  {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aSort, 4LL);
                    v22 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v151);
                    if ( !v22
                      || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                             *(_QWORD *)(v22 + 8),
                                             *(_QWORD *)(v22 + 16),
                                             aVersion,
                                             7LL) )
                    {
                      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                              &v133,
                                              aRandomSort,
                                              11LL)
                        || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
                              &v151,
                              &v133,
                              aSort,
                              4LL),
                            v23 = clap_builder::parser::error::MatchesError::unwrap(aSort, 4LL, &v151),
                            v17 = 6,
                            v23)
                        && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                              *(_QWORD *)(v23 + 8),
                                              *(_QWORD *)(v23 + 16),
                                              aRandom,
                                              6LL) )
                      {
                        uu_sort::get_rand_string(&v151);
                        v149 = *(_OWORD *)v151.m256i_i8;
                        HIBYTE(v148) = 1;
                        v17 = 5;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    LOBYTE(v150) = v17;
    BYTE3(v147) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aDictionaryOrde, 16LL);
    BYTE4(v147) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aIgnoreNonprint, 18LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v133, aParallel, 8LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aParallel, 8LL);
      v24 = clap_builder::parser::error::MatchesError::unwrap(aParallel, 8LL, &v151);
      if ( v24
        && (<alloc::string::String as core::clone::Clone>::clone(&v151, v24),
            v25 = v151.m256i_i64[0],
            v151.m256i_i64[0] != 0x8000000000000000LL) )
      {
        v26 = v3;
        v28 = v151.m256i_i64[2];
        v27 = v151.m256i_i64[1];
      }
      else
      {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v151, 1LL, 0LL);
        v25 = v151.m256i_i64[1];
        if ( v151.m256i_i64[0] )
          alloc::raw_vec::handle_error(v151.m256i_i64[1], v151.m256i_i64[2]);
        v26 = v3;
        v27 = v151.m256i_i64[2];
        *(_BYTE *)v151.m256i_i64[2] = 48;
        v28 = 1LL;
      }
      v2 = (__int64 (__fastcall **)())&v140 + 1;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop((char *)&v140 + 8);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v140 + 8);
      *((_QWORD *)&v140 + 1) = v25;
      v141 = v27;
      v142 = v28;
      std::env::set_var(aRayonNumThread, 17LL, (char *)&v140 + 8);
      v3 = v26;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aBufferSize, 11LL);
    v29 = clap_builder::parser::error::MatchesError::unwrap(aBufferSize, 11LL, &v151);
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 8);
      v31 = *(_QWORD *)(v29 + 16);
      uu_sort::GlobalSettings::parse_byte_count(v138, v30, v31);
      if ( v138[0].m256i_i32[0] != 3 )
      {
        v121 = v138[0];
        ((void (__fastcall *)(__m256i *, __m256i *, __int64, __int64, const char *, __int64))uu_sort::format_error_message)(
          &v124,
          &v121,
          v30,
          v31,
          aBufferSize,
          11LL);
        v151.m256i_i32[6] = 2;
        *(_OWORD *)v151.m256i_i8 = *(_OWORD *)v124.m256i_i8;
        v151.m256i_i64[2] = v124.m256i_i64[2];
        v34 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v34 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v6 = v34;
        v35 = *(_OWORD *)v151.m256i_i8;
        v34[1] = *(_OWORD *)&v151.m256i_u64[2];
        *v34 = v35;
        core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&v121);
        v2 = &off_18F388;
        goto LABEL_154;
      }
      v32 = v138[0].m256i_i64[1];
    }
    else
    {
      v32 = 1000000000LL;
    }
    v144 = v32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aTemporaryDirec, 19LL);
    v33 = clap_builder::parser::error::MatchesError::unwrap(aTemporaryDirec, 19LL, &v151);
    if ( v33
      && (std::sys::os_str::bytes::Slice::to_owned(&v151, *(_QWORD *)(v33 + 8), *(_QWORD *)(v33 + 16)),
          *(_OWORD *)v121.m256i_i8 = *(_OWORD *)&v151.m256i_u64[1],
          v151.m256i_i64[0] != v3) )
    {
      *(_OWORD *)&v151.m256i_u64[1] = *(_OWORD *)v121.m256i_i8;
    }
    else
    {
      std::env::temp_dir(&v151);
    }
    uu_sort::tmp_dir::TmpDirWrapper::new(v138, &v151);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aCompressProgra, 16LL);
    v36 = clap_builder::parser::error::MatchesError::unwrap(aCompressProgra, 16LL, &v151);
    if ( v36 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v151, v36);
      v2 = (__int64 (__fastcall **)())v151.m256i_i64[1];
      v37 = v151.m256i_i64[0];
      v38 = v3;
      v3 = v151.m256i_i64[2];
      if ( v143[0] == v38 )
      {
LABEL_86:
        v143[0] = v37;
        v143[1] = v2;
        v143[2] = v3;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aBatchSize, 10LL);
        v39 = clap_builder::parser::error::MatchesError::unwrap(aBatchSize, 10LL, &v151);
        v40 = v39;
        if ( v39 )
        {
          v160 = v39;
          core::num::<impl core::str::traits::FromStr for usize>::from_str(
            &v136,
            *(_QWORD *)(v39 + 8),
            *(_QWORD *)(v39 + 16));
          if ( (_BYTE)v136 )
          {
            if ( BYTE1(v136) == 2 )
            {
              *(_QWORD *)&v45 = uucore::util_name();
              *(_OWORD *)v121.m256i_i8 = v45;
              v124.m256i_i64[0] = (__int64)&v121;
              v124.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
              v151.m256i_i64[0] = (__int64)&unk_18F160;
              v151.m256i_i64[1] = 2LL;
              *(_QWORD *)&v152 = 0LL;
              v151.m256i_i64[2] = (__int64)&v124;
              v151.m256i_i64[3] = 1LL;
              std::io::stdio::_eprint(&v151);
              v46 = *(_OWORD *)(v40 + 8);
              v121.m256i_i64[0] = 0LL;
              *(_OWORD *)&v121.m256i_u64[1] = v46;
              v121.m256i_i8[24] = 1;
              v124.m256i_i64[0] = (__int64)&v121;
              v124.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
              v151.m256i_i64[0] = (__int64)&off_18F270;
              v151.m256i_i64[1] = 2LL;
              *(_QWORD *)&v152 = 0LL;
              v151.m256i_i64[2] = (__int64)&v124;
              v151.m256i_i64[3] = 1LL;
              std::io::stdio::_eprint(&v151);
              uu_sort::get_rlimit(&v121);
              v2 = (__int64 (__fastcall **)())v121.m256i_i64[1];
              v6 = (_OWORD *)v121.m256i_i64[0];
              if ( v121.m256i_i64[0] )
              {
LABEL_153:
                core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(v138);
LABEL_154:
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v131);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v131);
LABEL_155:
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v133);
                goto LABEL_156;
              }
              *(_QWORD *)&v129 = v121.m256i_i64[1];
              v124.m256i_i64[0] = (__int64)&v129;
              v124.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              v151.m256i_i64[0] = (__int64)&off_18F290;
              v151.m256i_i64[1] = 1LL;
              *(_QWORD *)&v152 = 0LL;
              v151.m256i_i64[2] = (__int64)&v124;
              v151.m256i_i64[3] = 1LL;
              v51 = &v121;
              ((void (__fastcall *)(__m256i *, __m256i *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
                &v121,
                &v151,
                v47,
                v48,
                v49,
                v50);
            }
            else
            {
              v58 = *(_OWORD *)(v40 + 8);
              v121.m256i_i8[24] = 1;
              *(_QWORD *)&v129 = &v121;
              *((_QWORD *)&v129 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
              v151.m256i_i64[0] = (__int64)&off_18F2A0;
              v151.m256i_i64[1] = 1LL;
              *(_QWORD *)&v152 = 0LL;
              v151.m256i_i64[2] = (__int64)&v129;
              v151.m256i_i64[3] = 1LL;
              v51 = &v124;
              alloc::fmt::format::format_inner(
                &v124,
                &v151,
                v41,
                v42,
                v43,
                v44,
                0LL,
                v58,
                *((_QWORD *)&v58 + 1),
                v121.m256i_i32[6]);
            }
            v151.m256i_i64[2] = v51->m256i_i64[2];
            *(_OWORD *)v151.m256i_i8 = *(_OWORD *)v51->m256i_i8;
            v151.m256i_i32[6] = 2;
            v59 = _rust_alloc(32LL, 8LL);
            if ( !v59 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_151;
          }
          if ( (unsigned __int64)v137 < 2 )
          {
            *(_QWORD *)&v52 = uucore::util_name();
            *(_OWORD *)v121.m256i_i8 = v52;
            v124.m256i_i64[0] = (__int64)&v121;
            v124.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            v151.m256i_i64[0] = (__int64)&unk_18F160;
            v151.m256i_i64[1] = 2LL;
            *(_QWORD *)&v152 = 0LL;
            v151.m256i_i64[2] = (__int64)&v124;
            v151.m256i_i64[3] = 1LL;
            std::io::stdio::_eprint(&v151);
            v121.m256i_i64[0] = (__int64)&v160;
            v121.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            v151.m256i_i64[0] = (__int64)&off_18F1C0;
            v151.m256i_i64[1] = 2LL;
            *(_QWORD *)&v152 = 0LL;
            v151.m256i_i64[2] = (__int64)&v121;
            v151.m256i_i64[3] = 1LL;
            std::io::stdio::_eprint(&v151);
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v151, 36LL, 0LL);
            v53 = v151.m256i_i64[1];
            if ( !v151.m256i_i64[0] )
            {
              v54 = v151.m256i_i64[2];
              *(_OWORD *)(v151.m256i_i64[2] + 16) = *(_OWORD *)&aMinimumBatchSi[16];
              *(_OWORD *)v54 = *(_OWORD *)aMinimumBatchSi;
              *(_DWORD *)(v54 + 32) = 657598240;
              v151.m256i_i32[6] = 2;
              v151.m256i_i64[0] = v53;
              v151.m256i_i64[1] = v54;
              v151.m256i_i64[2] = 36LL;
              v55 = _rust_alloc(32LL, 8LL);
              if ( !v55 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v6 = (_OWORD *)v55;
              v56 = *(_OWORD *)v151.m256i_i8;
              v57 = *(_OWORD *)&v151.m256i_u64[2];
              goto LABEL_152;
            }
LABEL_174:
            alloc::raw_vec::handle_error(v53, v151.m256i_i64[2]);
          }
          v145 = v137;
        }
        v60 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 &v133,
                                 aZeroTerminated,
                                 15LL) == 0;
        v61 = 10;
        if ( !v60 )
          v61 = 0;
        BYTE1(v150) = v61;
        BYTE5(v147) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aMerge, 5LL);
        BYTE1(v148) = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v133, aCheck, 5LL);
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                &v133,
                                aCheckSilent,
                                12LL)
          || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aCheck, 5LL),
              (v62 = clap_builder::parser::error::MatchesError::unwrap(aCheck, 5LL, &v151)) != 0)
          && ((v63 = *(_QWORD *)(v62 + 8),
               v64 = *(_QWORD *)(v62 + 16),
               (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v63, v64, aSilent, 6LL))
           || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v63, v64, aQuiet, 5LL)) )
        {
          *(_WORD *)((char *)&v148 + 1) = 257;
        }
        BYTE2(v147) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aIgnoreCase, 11LL);
        BYTE1(v147) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aIgnoreLeadingB, 21LL);
        BYTE6(v147) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aReverse, 7LL);
        HIBYTE(v147) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aStable, 6LL);
        LOBYTE(v148) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v133, aUnique, 6LL);
        if ( *((_QWORD *)&v132 + 1) )
        {
          if ( *((_QWORD *)&v132 + 1) != 1LL && BYTE1(v148) )
          {
            v69 = *(_OWORD *)(v132 + 32);
            v121.m256i_i8[24] = 1;
            *(_QWORD *)&v129 = &v121;
            *((_QWORD *)&v129 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            v151.m256i_i64[0] = (__int64)&off_18F2F0;
            v151.m256i_i64[1] = 2LL;
            *(_QWORD *)&v152 = 0LL;
            v151.m256i_i64[2] = (__int64)&v129;
            v151.m256i_i64[3] = 1LL;
            alloc::fmt::format::format_inner(
              &v124,
              &v151,
              v65,
              v66,
              v67,
              v68,
              1LL,
              v69,
              *((_QWORD *)&v69 + 1),
              v121.m256i_i32[6]);
            v151.m256i_i32[6] = 2;
            *(_OWORD *)v151.m256i_i8 = *(_OWORD *)v124.m256i_i8;
            v151.m256i_i64[2] = v124.m256i_i64[2];
            v59 = _rust_alloc(32LL, 8LL);
            if ( !v59 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_151;
          }
        }
        else
        {
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v151, 1LL, 0LL);
          v53 = v151.m256i_i64[1];
          if ( v151.m256i_i64[0] )
            goto LABEL_174;
          v70 = v151.m256i_i64[2];
          *(_BYTE *)v151.m256i_i64[2] = 45;
          v151.m256i_i64[0] = v53;
          v151.m256i_i64[1] = v70;
          v151.m256i_i64[2] = 1LL;
          v71 = *((_QWORD *)&v132 + 1);
          if ( *((_QWORD *)&v132 + 1) == v131 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v131);
          v72 = v132;
          v73 = 3 * v71;
          v74 = *(_OWORD *)v151.m256i_i8;
          *(_QWORD *)(v132 + 8 * v73 + 16) = v151.m256i_i64[2];
          *(_OWORD *)(v72 + 8 * v73) = v74;
          *((_QWORD *)&v132 + 1) = v71 + 1;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aFieldSeparator, 15LL);
        v75 = clap_builder::parser::error::MatchesError::unwrap(aFieldSeparator, 15LL, &v151);
        v76 = v75;
        if ( v75 )
        {
          std::sys::os_str::bytes::Slice::to_str(&v151, *(_QWORD *)(v75 + 8), *(_QWORD *)(v75 + 16));
          if ( v151.m256i_i64[0] )
          {
            v81 = *(_OWORD *)(v76 + 8);
            v124.m256i_i64[0] = 1LL;
            *(_OWORD *)&v124.m256i_u64[1] = v81;
            v124.m256i_i8[24] = 1;
            *(_QWORD *)&v129 = &v124;
            *((_QWORD *)&v129 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            v151.m256i_i64[0] = (__int64)&off_18F340;
            v151.m256i_i64[1] = 1LL;
            *(_QWORD *)&v152 = 0LL;
            v151.m256i_i64[2] = (__int64)&v129;
            v151.m256i_i64[3] = 1LL;
            ((void (__fastcall *)(__m256i *, __m256i *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
              &v121,
              &v151,
              v77,
              v78,
              v79,
              v80);
            v121.m256i_i32[6] = 2;
            v82 = _rust_alloc(32LL, 8LL);
            if ( !v82 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v6 = (_OWORD *)v82;
            v56 = *(_OWORD *)v121.m256i_i8;
            v57 = *(_OWORD *)&v121.m256i_u64[2];
            goto LABEL_152;
          }
          v84 = v151.m256i_i64[2];
          v83 = (void *)v151.m256i_i64[1];
          v85 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v151.m256i_i64[1], v151.m256i_i64[2], a0, 2LL);
          v89 = &unk_1F4F6;
          if ( v85 )
            v83 = &unk_1F4F6;
          LOBYTE(v89) = v85 | (v84 == 1);
          if ( (_BYTE)v89 != 1 )
          {
            v121.m256i_i8[24] = 1;
            *(_QWORD *)&v129 = &v121;
            *((_QWORD *)&v129 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            v151.m256i_i64[0] = (__int64)&off_18F2C8;
            v151.m256i_i64[1] = 1LL;
            *(_QWORD *)&v152 = 0LL;
            v151.m256i_i64[2] = (__int64)&v129;
            v151.m256i_i64[3] = 1LL;
            alloc::fmt::format::format_inner(&v124, &v151, v86, v89, v87, v88, 0LL, v83, v84, v121.m256i_i32[6]);
            v151.m256i_i32[6] = 2;
            *(_OWORD *)v151.m256i_i8 = *(_OWORD *)v124.m256i_i8;
            v151.m256i_i64[2] = v124.m256i_i64[2];
            v59 = alloc::alloc::exchange_malloc(32LL, 8LL);
LABEL_151:
            v6 = (_OWORD *)v59;
            v56 = *(_OWORD *)v151.m256i_i8;
            v57 = *(_OWORD *)&v151.m256i_u64[2];
LABEL_152:
            v6[1] = v57;
            *v6 = v56;
            v2 = &off_18F200;
            goto LABEL_153;
          }
          v151.m256i_i64[0] = (__int64)v83;
          v151.m256i_i64[1] = (__int64)v83 + 1;
          if ( !(unsigned int)core::str::validations::next_code_point(&v151) || v90 == 1114112 )
            core::option::unwrap_failed(&off_18F2B0);
          v146 = v90;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v151, &v133, aKey, 3LL);
        clap_builder::parser::error::MatchesError::unwrap(&v121, aKey, 3LL, &v151);
        if ( v121.m256i_i64[0] )
        {
          v153[0] = v123;
          v152 = v122;
          v151 = v121;
          while ( 1 )
          {
            v94 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v151);
            if ( !v94 )
              break;
            uu_sort::FieldSelector::parse(&v124, *(_QWORD *)(v94 + 8), *(_QWORD *)(v94 + 16), &v139);
            v95 = v128;
            v2 = (__int64 (__fastcall **)())v124.m256i_i64[1];
            v6 = (_OWORD *)v124.m256i_i64[0];
            if ( v128 == 2 )
              goto LABEL_153;
            *(unsigned __int64 *)((char *)&v130[1] + 5) = *(_QWORD *)&v125[13];
            *(_OWORD *)v130 = *(_OWORD *)v125;
            v129 = *(_OWORD *)&v124.m256i_u64[2];
            v96 = v126;
            v97 = v127;
            if ( v126 == 5 && !HIBYTE(v148) )
            {
              uu_sort::get_rand_string(&v124);
              v149 = *(_OWORD *)v124.m256i_i8;
              HIBYTE(v148) = 1;
            }
            v98 = v140;
            if ( (_QWORD)v140 == (_QWORD)v139 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v139);
            v91 = *((_QWORD *)&v139 + 1);
            v92 = 56 * v98;
            *(_QWORD *)(*((_QWORD *)&v139 + 1) + v92) = v6;
            *(_QWORD *)(v91 + v92 + 8) = v2;
            v93 = *(_OWORD *)v130;
            *(_OWORD *)(v91 + v92 + 16) = v129;
            *(_OWORD *)(v91 + v92 + 32) = v93;
            *(_QWORD *)(v91 + v92 + 45) = *(unsigned __int64 *)((char *)&v130[1] + 5);
            *(_BYTE *)(v91 + v92 + 53) = v96;
            *(_BYTE *)(v91 + v92 + 54) = v97;
            *(_BYTE *)(v91 + v92 + 55) = v95;
            *(_QWORD *)&v140 = v98 + 1;
          }
        }
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v133, aKey, 3LL) )
        {
          v124.m256i_i64[0] = 1LL;
          v124.m256i_i64[1] = 1LL;
          v124.m256i_i8[16] = BYTE1(v147);
          v121.m256i_i8[16] = 2;
          uu_sort::FieldSelector::new(
            &v151,
            &v124,
            &v121,
            ((unsigned __int64)BYTE6(v147) << 32) | *(unsigned int *)((char *)&v147 + 1) | ((unsigned __int64)v150 << 40));
          if ( BYTE7(v153[0]) == 2 )
          {
            v121.m256i_i64[2] = v151.m256i_i64[2];
            *(_OWORD *)v121.m256i_i8 = *(_OWORD *)v151.m256i_i8;
            core::result::unwrap_failed(aCalledResultUn, 43LL, &v121, &off_18EE68, &off_18F2D8);
          }
          *(_QWORD *)&v123 = *(_QWORD *)&v153[0];
          v122 = v152;
          v121 = v151;
          v99 = v140;
          if ( (_QWORD)v140 == (_QWORD)v139 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v139);
          v100 = *((_QWORD *)&v139 + 1);
          v101 = 56 * v99;
          *(_QWORD *)(*((_QWORD *)&v139 + 1) + v101 + 48) = v123;
          v102 = *(_OWORD *)v121.m256i_i8;
          v103 = *(_OWORD *)&v121.m256i_u64[2];
          *(_OWORD *)(v100 + v101 + 32) = v122;
          *(_OWORD *)(v100 + v101 + 16) = v103;
          *(_OWORD *)(v100 + v101) = v102;
          *(_QWORD *)&v140 = v99 + 1;
        }
        if ( *((_QWORD *)&v132 + 1) )
        {
          v104 = v132;
          v105 = 24LL * *((_QWORD *)&v132 + 1);
          while ( 1 )
          {
            uu_sort::open(&v151, v104);
            v2 = (__int64 (__fastcall **)())v151.m256i_i64[2];
            v6 = (_OWORD *)v151.m256i_i64[1];
            if ( v151.m256i_i64[0] )
              break;
            if ( *(_QWORD *)v151.m256i_i64[2] )
              (*(void (__fastcall **)(__int64))v151.m256i_i64[2])(v151.m256i_i64[1]);
            v106 = v2[1];
            if ( v106 )
              _rust_dealloc(v6, v106, v2[2]);
            v104 += 24LL;
            v105 -= 24LL;
            if ( !v105 )
              goto LABEL_148;
          }
        }
        else
        {
LABEL_148:
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v151, &v133, aOutput, 6LL);
          v107 = clap_builder::parser::error::MatchesError::unwrap(aOutput, 6LL, &v151);
          if ( v107 )
          {
            v109 = *(_QWORD *)(v107 + 8);
            v108 = *(_QWORD *)(v107 + 16);
          }
          else
          {
            v109 = 0LL;
          }
          uu_sort::Output::new(&v121, v109, v108);
          v2 = (__int64 (__fastcall **)())v121.m256i_i64[2];
          v6 = (_OWORD *)v121.m256i_i64[1];
          if ( v121.m256i_i64[0] != 0x8000000000000001LL )
          {
            v124 = v121;
            uu_sort::GlobalSettings::init_precomputed(&v139);
            v151 = v124;
            v6 = (_OWORD *)uu_sort::exec(v132, *((_QWORD *)&v132 + 1), &v139, &v151, v138);
            v2 = v120;
            uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(v138);
            core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>(v138);
            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v131);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v133);
            goto LABEL_156;
          }
        }
        goto LABEL_153;
      }
    }
    else
    {
      v37 = v3;
      if ( v143[0] == v3 )
        goto LABEL_86;
    }
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v143);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v143);
    goto LABEL_86;
  }
  v4 = v121.m256i_i64[1];
  v138[0].m256i_i64[0] = v121.m256i_i64[1];
  v5 = clap_builder::error::Error<F>::print(v138);
  if ( v5 )
  {
    v151.m256i_i64[0] = v5;
    core::result::unwrap_failed(aCalledResultUn, 43LL, &v151, &off_18EE88, &off_18F328);
  }
  if ( (*(_BYTE *)(v4 + 213) & 0x1D) != 0xC )
  {
    uucore::mods::error::set_exit_code(2LL);
    v4 = v138[0].m256i_i64[0];
  }
  core::ptr::drop_in_place<clap_builder::error::Error>(v4);
  v6 = 0LL;
LABEL_156:
  core::ptr::drop_in_place<uu_sort::GlobalSettings>(&v139);
  if ( v6 )
  {
    v124.m256i_i64[0] = (__int64)v6;
    v124.m256i_i64[1] = (__int64)v2;
    *(_QWORD *)&v139 = &v124;
    *((_QWORD *)&v139 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v151.m256i_i64[0] = (__int64)asc_1F080;
    v151.m256i_i64[1] = 1LL;
    *(_QWORD *)&v152 = 0LL;
    v151.m256i_i64[2] = (__int64)&v139;
    v151.m256i_i64[3] = 1LL;
    alloc::fmt::format::format_inner(
      &v161,
      &v151,
      v110,
      v111,
      v112,
      v113,
      v121.m256i_i64[0],
      v121.m256i_i64[1],
      v121.m256i_i64[2],
      v121.m256i_i32[6]);
    v139 = v161;
    *(_QWORD *)&v140 = v162;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v161 + 1), v162, 1LL, 0LL) )
    {
      *(_QWORD *)&v114 = uucore::util_name();
      *(_OWORD *)v121.m256i_i8 = v114;
      v138[0].m256i_i64[0] = (__int64)&v121;
      v138[0].m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v151.m256i_i64[0] = (__int64)&unk_18F160;
      v151.m256i_i64[1] = 2LL;
      *(_QWORD *)&v152 = 0LL;
      v151.m256i_i64[2] = (__int64)v138;
      v151.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v151);
      v121.m256i_i64[0] = (__int64)&v139;
      v121.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      v151.m256i_i64[0] = (__int64)&unk_18F180;
      v151.m256i_i64[1] = 2LL;
      *(_QWORD *)&v152 = 0LL;
      v151.m256i_i64[2] = (__int64)&v121;
      v151.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v151);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(v124.m256i_i64[1] + 104))(v124.m256i_i64[0]) )
    {
      *(_QWORD *)&v115 = uucore::execution_phrase();
      *(_OWORD *)v121.m256i_i8 = v115;
      v138[0].m256i_i64[0] = (__int64)&v121;
      v138[0].m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v151.m256i_i64[0] = (__int64)&off_18F1A0;
      v151.m256i_i64[1] = 2LL;
      *(_QWORD *)&v152 = 0LL;
      v151.m256i_i64[2] = (__int64)v138;
      v151.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v151);
    }
    v116 = (*(__int64 (__fastcall **)(__int64))(v124.m256i_i64[1] + 96))(v124.m256i_i64[0]);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v139);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v139);
    v117 = *(_OWORD *)v124.m256i_i8;
    if ( *(_QWORD *)v124.m256i_i64[1] )
      (*(void (__fastcall **)(__int64))v124.m256i_i64[1])(v124.m256i_i64[0]);
    v118 = *(_QWORD *)(*((_QWORD *)&v117 + 1) + 8LL);
    if ( v118 )
      _rust_dealloc(v117, v118, *(_QWORD *)(*((_QWORD *)&v117 + 1) + 16LL));
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return v116;
}
