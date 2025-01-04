        __int64 a6)
{
  char v7; // r14
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  const char *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r13
  const char *v15; // rcx
  __int64 v16; // rbx
  __int64 *v17; // r14
  const char *v18; // rbp
  char v19; // al
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm0
  _BYTE *v31; // rsi
  __int64 v32; // rdi
  _BYTE *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // bp
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rbp
  __int64 v47; // r14
  int v48; // eax
  _BYTE *v49; // rax
  __int64 v50; // rax
  __int32 v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // r12
  __int64 v63; // rax
  __int64 v64; // r15
  char v65; // r14
  __int64 v66; // rax
  __int128 v67; // xmm0
  __int64 v68; // r15
  __int64 v69; // r14
  char v70; // r15
  __int64 v71; // r14
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  char v74; // bl
  _QWORD *v75; // rax
  _QWORD *v76; // rcx
  unsigned __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  char v83; // [rsp+9h] [rbp-33Fh]
  char v84; // [rsp+9h] [rbp-33Fh]
  unsigned __int8 flag; // [rsp+Ah] [rbp-33Eh]
  char v86; // [rsp+Bh] [rbp-33Dh] BYREF
  int v87; // [rsp+Ch] [rbp-33Ch]
  __int64 v88; // [rsp+10h] [rbp-338h]
  unsigned __int8 v89; // [rsp+1Fh] [rbp-329h]
  __m256i v90; // [rsp+20h] [rbp-328h] BYREF
  __int128 v91; // [rsp+40h] [rbp-308h]
  __int128 v92; // [rsp+50h] [rbp-2F8h]
  __int64 v93; // [rsp+60h] [rbp-2E8h]
  int v94; // [rsp+7Ch] [rbp-2CCh]
  __int64 v95; // [rsp+80h] [rbp-2C8h]
  int v96; // [rsp+8Ch] [rbp-2BCh]
  __m256i v97; // [rsp+90h] [rbp-2B8h] BYREF
  __int128 v98; // [rsp+B0h] [rbp-298h]
  __int128 v99; // [rsp+C0h] [rbp-288h]
  __int64 v100; // [rsp+D0h] [rbp-278h]
  __int128 v101; // [rsp+E0h] [rbp-268h] BYREF
  __int128 v102; // [rsp+F0h] [rbp-258h]
  unsigned __int64 v103; // [rsp+100h] [rbp-248h]
  unsigned __int64 v104; // [rsp+108h] [rbp-240h]
  unsigned __int64 v105; // [rsp+110h] [rbp-238h]
  __int64 v106; // [rsp+118h] [rbp-230h]
  __int64 v107; // [rsp+120h] [rbp-228h]
  __int64 v108; // [rsp+128h] [rbp-220h] BYREF
  _BYTE v109[24]; // [rsp+130h] [rbp-218h] BYREF
  __int64 v110; // [rsp+148h] [rbp-200h]
  __int64 v111; // [rsp+150h] [rbp-1F8h]
  __int64 v112; // [rsp+158h] [rbp-1F0h]
  __int128 v113; // [rsp+160h] [rbp-1E8h] BYREF
  __int64 v114; // [rsp+170h] [rbp-1D8h]
  __int128 v115; // [rsp+180h] [rbp-1C8h] BYREF
  __int64 v116; // [rsp+190h] [rbp-1B8h]
  __int128 v117; // [rsp+1A0h] [rbp-1A8h] BYREF
  __int64 v118; // [rsp+1B0h] [rbp-198h]
  __int128 v119; // [rsp+1C0h] [rbp-188h] BYREF
  __int64 v120; // [rsp+1D0h] [rbp-178h]
  __int128 v121; // [rsp+1E0h] [rbp-168h] BYREF
  __int64 v122; // [rsp+1F0h] [rbp-158h]
  unsigned __int64 v123; // [rsp+1F8h] [rbp-150h] BYREF
  _OWORD v124[2]; // [rsp+200h] [rbp-148h] BYREF
  __int64 v125; // [rsp+220h] [rbp-128h]
  _BYTE v126[32]; // [rsp+228h] [rbp-120h] BYREF
  __int128 v127; // [rsp+248h] [rbp-100h] BYREF
  __int64 v128; // [rsp+258h] [rbp-F0h]
  _BYTE v129[32]; // [rsp+260h] [rbp-E8h] BYREF
  __int128 v130; // [rsp+280h] [rbp-C8h]
  __int128 v131; // [rsp+290h] [rbp-B8h]
  __int128 v132; // [rsp+2A0h] [rbp-A8h]
  __int128 v133; // [rsp+2B0h] [rbp-98h]
  __int128 v134; // [rsp+2C0h] [rbp-88h]
  __int128 v135; // [rsp+2D0h] [rbp-78h]
  __int128 v136; // [rsp+2E8h] [rbp-60h] BYREF
  __int64 v137; // [rsp+2F8h] [rbp-50h]
  _BYTE v138[72]; // [rsp+300h] [rbp-48h] BYREF

  v107 = a6;
  v106 = a5;
  v105 = a4;
  v88 = a1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFormFeed, 9LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMerge_0, 5LL);
  if ( v7 )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aColumn, 6LL) )
    {
      v8 = aCannotSpecifyN;
      v9 = 58LL;
LABEL_6:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v90, v8, v9);
      result = v88;
      *(_QWORD *)(v88 + 8) = 0x8000000000000001LL;
      *(_OWORD *)(result + 16) = *(_OWORD *)v90.m256i_i8;
      *(_QWORD *)(result + 32) = v90.m256i_i64[2];
      *(_QWORD *)result = 2LL;
      return result;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAcross, 6LL) )
    {
      v8 = aCannotSpecifyB;
      v9 = 60LL;
      goto LABEL_6;
    }
  }
  v89 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMerge_0, 5LL);
  v11 = aHeader;
  v95 = a2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v90);
  v12 = clap_builder::parser::error::MatchesError::unwrap(aHeader, 6LL, &v90);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 8);
    v11 = *(const char **)(v12 + 16);
    if ( v7 )
    {
LABEL_9:
      v14 = 1LL;
      v15 = 0LL;
      goto LABEL_17;
    }
  }
  else
  {
    v13 = 0LL;
    if ( v7 )
      goto LABEL_9;
  }
  v83 = v7;
  if ( !v105 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_309280);
  v16 = *a3;
  v17 = a3;
  v18 = (const char *)a3[1];
  v14 = 1LL;
  v19 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v18, asc_754F6, 1LL);
  v15 = 0LL;
  if ( !v19 )
    v15 = v18;
  a3 = v17;
  if ( !v19 )
    v14 = v16;
  v7 = v83;
LABEL_17:
  if ( v13 )
    v14 = v13;
  else
    v11 = v15;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v90, v14, v11);
  v118 = v90.m256i_i64[2];
  v117 = *(_OWORD *)v90.m256i_i8;
  <uu_pr::NumberingMode as core::default::Default>::default(&v90);
  v20 = v91;
  core::ptr::drop_in_place<uu_pr::NumberingMode>(&v90);
  uu_pr::parse_usize(&v97, v95, (__int64)aFirstLineNumbe, 17LL);
  v90.m256i_i64[1] = v20;
  v90.m256i_i64[0] = 0x8000000000000005LL;
  v21 = v97.m256i_i64[0];
  if ( v97.m256i_i64[0] == 0x8000000000000006LL
    || (v20 = v97.m256i_i64[1],
        v124[0] = *(_OWORD *)&v97.m256i_u64[2],
        core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&v90),
        v21 == 0x8000000000000005LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v90);
    v22 = clap_builder::parser::error::MatchesError::unwrap(aNumberLines, 12LL, &v90);
    if ( v22 )
    {
      uu_pr::build_options::{{closure}}(&v90, v20, *(_QWORD *)(v22 + 8), *(_QWORD *)(v22 + 16));
      *(_QWORD *)&v98 = v91;
      v97 = v90;
    }
    else
    {
      v97.m256i_i64[0] = 0x8000000000000000LL;
    }
    core::option::Option<T>::or_else(v124, &v97, v95);
    v23 = v95;
    v84 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v95, aDoubleSpace, 12LL);
    if ( v84 )
    {
      alloc::str::<impl str>::repeat(&v113, asc_754EB, 1LL, 2LL);
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v90, asc_754EB, 1LL);
      v114 = v90.m256i_i64[2];
      v113 = *(_OWORD *)v90.m256i_i8;
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v90, asc_754EB, 1LL);
    v120 = v90.m256i_i64[2];
    v119 = *(_OWORD *)v90.m256i_i8;
    if ( v7 )
      goto LABEL_31;
    if ( !v105 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_309298);
    v24 = *a3;
    v25 = a3[1];
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*a3, v25, asc_754F6, 1LL) )
    {
LABEL_31:
      chrono::offset::local::Local::now(&v101);
      v97.m256i_i64[0] = (__int64)aBDHMY;
      v97.m256i_i64[1] = 14LL;
      *(_OWORD *)&v97.m256i_u64[2] = 8uLL;
      chrono::datetime::DateTime<Tz>::format_with_items(&v90, &v101, &v97);
      <T as alloc::string::ToString>::to_string(&v121, &v90);
      v26 = core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v90);
    }
    else
    {
      v26 = uu_pr::file_last_modified_time(&v121, v24, v25);
    }
    LOBYTE(v26) = 1;
    v94 = v26;
    regex::regex::string::Regex::new(&v90, aSDDS, 18LL);
    core::result::Result<T,E>::unwrap(v126, &v90, &off_3092B0);
    regex::regex::string::Regex::captures_at(&v97, v126, v106, v107);
    if ( v97.m256i_i32[0] == 2 )
    {
      v28 = 1LL;
    }
    else
    {
      v93 = v100;
      v92 = v99;
      v91 = v98;
      v90 = v97;
      uu_pr::build_options::{{closure}}(&v101, &v90);
      v28 = *((_QWORD *)&v101 + 1);
      v29 = v101;
      v130 = v102;
      if ( (_QWORD)v101 != 0x8000000000000005LL )
      {
        v103 = 1LL;
        if ( (_QWORD)v101 != 0x8000000000000006LL )
        {
          v30 = v130;
LABEL_92:
          v60 = (_QWORD *)v88;
          *(_OWORD *)(v88 + 24) = v30;
          v60[1] = v29;
          v60[2] = v28;
          *v60 = 2LL;
          goto LABEL_123;
        }
LABEL_40:
        v31 = v126;
        regex::regex::string::Regex::captures_at(&v97, v126, v106, v107);
        if ( v97.m256i_i32[0] == 2 )
        {
          v32 = 0LL;
        }
        else
        {
          v93 = v100;
          v92 = v99;
          v91 = v98;
          v90 = v97;
          v32 = uu_pr::build_options::{{closure}}(&v90);
          v31 = v33;
        }
        v34 = core::option::Option<T>::filter(v32, v31);
        if ( v34 )
        {
          uu_pr::build_options::{{closure}}(&v90, v34);
          v104 = v90.m256i_u64[1];
          v35 = v90.m256i_i64[0];
          v131 = *(_OWORD *)&v90.m256i_u64[2];
          if ( v90.m256i_i64[0] == 0x8000000000000005LL )
          {
            v36 = 1;
          }
          else
          {
            if ( v90.m256i_i64[0] != 0x8000000000000006LL )
            {
              v38 = (_QWORD *)v88;
              *(_OWORD *)(v88 + 24) = v131;
              v38[1] = v35;
              v38[2] = v104;
              *v38 = 2LL;
              goto LABEL_123;
            }
            v36 = 0;
          }
        }
        else
        {
          v36 = 0;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v90);
        v37 = clap_builder::parser::error::MatchesError::unwrap(aPages, 5LL, &v90);
        if ( v37 )
        {
          uu_pr::build_options::{{closure}}(&v90, *(_QWORD *)(v37 + 8), *(_QWORD *)(v37 + 16));
          v101 = *(_OWORD *)&v90.m256i_u64[1];
          if ( v90.m256i_i64[0] != 0x8000000000000000LL )
          {
            *(_OWORD *)&v97.m256i_u64[1] = v101;
            v97.m256i_i64[0] = v90.m256i_i64[0];
            core::ops::function::FnOnce::call_once(&v90, v23, &v97);
            v28 = v90.m256i_i64[1];
            v29 = v90.m256i_i64[0];
            v132 = *(_OWORD *)&v90.m256i_u64[2];
            if ( v90.m256i_i64[0] == 0x8000000000000005LL )
            {
              v103 = v90.m256i_u64[1];
            }
            else if ( v90.m256i_i64[0] != 0x8000000000000006LL )
            {
              v30 = v132;
              goto LABEL_92;
            }
          }
        }
        v123 = v103;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v90);
        v39 = clap_builder::parser::error::MatchesError::unwrap(aPages, 5LL, &v90);
        v40 = core::option::Option<T>::filter(v39);
        if ( v40 )
        {
          uu_pr::build_options::{{closure}}(&v90, *(_QWORD *)(v40 + 8), *(_QWORD *)(v40 + 16));
          v101 = *(_OWORD *)&v90.m256i_u64[1];
          if ( v90.m256i_i64[0] != 0x8000000000000000LL )
          {
            *(_OWORD *)&v97.m256i_u64[1] = v101;
            v97.m256i_i64[0] = v90.m256i_i64[0];
            core::ops::function::FnOnce::call_once(&v90, v23, &v97);
            v28 = v90.m256i_i64[1];
            v29 = v90.m256i_i64[0];
            v133 = *(_OWORD *)&v90.m256i_u64[2];
            if ( v90.m256i_i64[0] == 0x8000000000000005LL )
            {
              v104 = v90.m256i_u64[1];
              goto LABEL_63;
            }
            v41 = 0x8000000000000006LL;
            if ( v90.m256i_i64[0] != 0x8000000000000006LL )
            {
              v30 = v133;
              goto LABEL_92;
            }
          }
        }
        if ( !v36 )
        {
          v44 = 0LL;
LABEL_66:
          v112 = v44;
          uu_pr::parse_usize(&v97, v23, (__int64)aLength, 6LL);
          v46 = 3LL * (flag ^ 1u) + 63;
          v90.m256i_i64[1] = v46;
          v90.m256i_i64[0] = 0x8000000000000005LL;
          v47 = v97.m256i_i64[0];
          if ( v97.m256i_i64[0] == 0x8000000000000006LL )
            goto LABEL_67;
          v46 = v97.m256i_u64[1];
          v101 = *(_OWORD *)&v97.m256i_u64[2];
          core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&v90);
          if ( v47 == 0x8000000000000005LL )
          {
            if ( v46 < 0xA )
            {
              v96 = 0;
LABEL_68:
              if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                      v23,
                                      aFormFeed,
                                      9LL) )
              {
                v49 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 1LL);
                if ( !v49 )
                  alloc::alloc::handle_alloc_error(1LL, 1LL);
                *v49 = 12;
                alloc::slice::hack::into_vec(v138, v49, 1LL);
                alloc::string::String::from_utf8(&v90, v138);
                core::result::Result<T,E>::unwrap(&v115, &v90, &off_3092C8);
              }
              else
              {
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v90, asc_754EB, 1LL);
                v116 = v90.m256i_i64[2];
                v115 = *(_OWORD *)v90.m256i_i8;
              }
              v86 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v23, aAcross, 6LL);
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v90);
              v50 = clap_builder::parser::error::MatchesError::unwrap(aSepString, 10LL, &v90);
              if ( (v50
                 || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v90),
                     (v50 = clap_builder::parser::error::MatchesError::unwrap(aSeparator, 9LL, &v90)) != 0))
                && (core::ops::function::FnOnce::call_once(&v90, v50),
                    v51 = v90.m256i_i32[0],
                    *(_OWORD *)v97.m256i_i8 = *(_OWORD *)&v90.m256i_u64[1],
                    v90.m256i_i64[0] != 0x8000000000000000LL) )
              {
                *(_OWORD *)&v109[8] = *(_OWORD *)v97.m256i_i8;
                *(_QWORD *)v109 = v90.m256i_i64[0];
              }
              else
              {
                LODWORD(v101) = 0;
                v52 = core::char::methods::encode_utf8_raw(9LL, &v101);
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v90, v52, v53);
                v51 = v90.m256i_i32[4];
                *(_QWORD *)&v109[16] = v90.m256i_i64[2];
                *(_OWORD *)v109 = *(_OWORD *)v90.m256i_i8;
              }
              LOBYTE(v51) = 1;
              v87 = v51;
              v54 = 72LL;
              if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                                      v23,
                                      aWidth,
                                      5LL) )
              {
                v54 = 72LL;
                if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                                        v95,
                                        aSeparator,
                                        9LL) )
                  v54 = 512LL;
              }
              uu_pr::parse_usize(&v97, v95, (__int64)aWidth, 5LL);
              v90.m256i_i64[1] = v54;
              v90.m256i_i64[0] = 0x8000000000000005LL;
              v55 = v97.m256i_i64[0];
              if ( v97.m256i_i64[0] == 0x8000000000000006LL
                || (v54 = v97.m256i_i64[1],
                    v101 = *(_OWORD *)&v97.m256i_u64[2],
                    core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&v90),
                    v55 == 0x8000000000000005LL) )
              {
                v108 = v54;
                if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                        v95,
                                        aJoinLines,
                                        10LL) )
                {
                  v111 = 0LL;
                  goto LABEL_96;
                }
                uu_pr::parse_usize(&v90, v95, (__int64)aPageWidth, 10LL);
                v56 = v90.m256i_i64[0];
                if ( v90.m256i_i64[0] == 0x8000000000000006LL )
                {
                  v57 = 0LL;
LABEL_95:
                  v111 = v57;
LABEL_96:
                  regex::regex::string::Regex::new(&v90, aSDS, 12LL);
                  v62 = 0LL;
                  v63 = core::result::Result<T,E>::unwrap(v129, &v90, &off_3092E0);
                  LOBYTE(v63) = 1;
                  v87 = v63;
                  regex::regex::string::Regex::captures_at(&v97, v129, v106, v107);
                  v64 = v95;
                  if ( v97.m256i_i32[0] == 2 )
                  {
                    v65 = 1;
                  }
                  else
                  {
                    v93 = v100;
                    v92 = v99;
                    v91 = v98;
                    v90 = v97;
                    uu_pr::build_options::{{closure}}(&v101, &v90);
                    v62 = *((_QWORD *)&v101 + 1);
                    v66 = v101;
                    v134 = v102;
                    if ( (_QWORD)v101 == 0x8000000000000005LL )
                    {
                      v65 = 0;
                    }
                    else
                    {
                      v65 = 1;
                      if ( (_QWORD)v101 != 0x8000000000000006LL )
                      {
                        v67 = v134;
                        goto LABEL_116;
                      }
                    }
                  }
                  uu_pr::parse_usize(&v90, v64, (__int64)aColumn, 6LL);
                  v66 = v90.m256i_i64[0];
                  if ( v90.m256i_i64[0] == 0x8000000000000006LL )
                  {
                    v97.m256i_i64[3] = (__int64)&v108;
                    *(_OWORD *)v97.m256i_i8 = *(_OWORD *)v109;
                    v97.m256i_i64[2] = *(_QWORD *)&v109[16];
                    *(_QWORD *)&v98 = &v86;
                    if ( v65 )
                    {
                      v90.m256i_i64[0] = 0x8000000000000000LL;
                      v87 = 0;
                      core::ptr::drop_in_place<uu_pr::build_options::{{closure}}>(&v97);
LABEL_108:
                      uu_pr::parse_usize(&v101, v64, (__int64)aIndent, 6LL);
                      *(_OWORD *)v97.m256i_i8 = 0x8000000000000005LL;
                      v68 = v101;
                      if ( (_QWORD)v101 == 0x8000000000000006LL )
                      {
                        v69 = 0LL;
LABEL_111:
                        alloc::str::<impl str>::repeat(&v127, asc_755B5, 1LL, v69);
                        v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v95, aJoinLines, 10LL);
                        v71 = v89;
                        if ( v90.m256i_i64[0] == 0x8000000000000000LL
                          || (<alloc::string::String as core::clone::Clone>::clone(&v97, &v90),
                              v101 = *(_OWORD *)&v97.m256i_u64[1],
                              v97.m256i_i64[0] == 0x8000000000000000LL) )
                        {
                          uu_pr::build_options::{{closure}}(&v97, v71);
                          if ( v70 )
                          {
LABEL_114:
                            v72 = 0LL;
LABEL_136:
                            v79 = v88;
                            *(_QWORD *)(v88 + 248) = v125;
                            v80 = v124[0];
                            *(_OWORD *)(v79 + 232) = v124[1];
                            *(_OWORD *)(v79 + 216) = v80;
                            *(_QWORD *)(v79 + 64) = v118;
                            *(_OWORD *)(v79 + 48) = v117;
                            *(_QWORD *)(v79 + 88) = v120;
                            *(_OWORD *)(v79 + 72) = v119;
                            *(_QWORD *)(v79 + 112) = v114;
                            *(_OWORD *)(v79 + 96) = v113;
                            *(_OWORD *)(v79 + 120) = v121;
                            *(_QWORD *)(v79 + 136) = v122;
                            *(_OWORD *)(v79 + 144) = v115;
                            *(_QWORD *)(v79 + 160) = v116;
                            v81 = *(_OWORD *)&v90.m256i_u64[2];
                            v82 = v91;
                            *(_OWORD *)(v79 + 256) = *(_OWORD *)v90.m256i_i8;
                            *(_OWORD *)(v79 + 272) = v81;
                            *(_OWORD *)(v79 + 288) = v82;
                            *(_OWORD *)(v79 + 168) = v127;
                            *(_QWORD *)(v79 + 184) = v128;
                            *(_OWORD *)(v79 + 192) = *(_OWORD *)v97.m256i_i8;
                            *(_QWORD *)(v79 + 208) = v97.m256i_i64[2];
                            *(_QWORD *)v79 = v112;
                            *(_QWORD *)(v79 + 8) = v104;
                            *(_QWORD *)(v79 + 16) = v71;
                            *(_QWORD *)(v79 + 24) = v105;
                            *(_QWORD *)(v79 + 32) = v72;
                            *(_QWORD *)(v79 + 40) = v110;
                            *(_QWORD *)(v79 + 304) = v103;
                            *(_QWORD *)(v79 + 312) = v46;
                            *(_BYTE *)(v79 + 320) = v84;
                            *(_BYTE *)(v79 + 321) = v96;
                            *(_BYTE *)(v79 + 322) = flag;
                            *(_BYTE *)(v79 + 323) = v70;
                            v87 = 0;
                            core::ptr::drop_in_place<regex::regex::string::Regex>(v129);
                            v94 = 0;
                            core::ptr::drop_in_place<regex::regex::string::Regex>(v126);
                            return v88;
                          }
                        }
                        else
                        {
                          *(_OWORD *)&v97.m256i_u64[1] = v101;
                          if ( v70 )
                            goto LABEL_114;
                        }
                        if ( v90.m256i_i64[0] == 0x8000000000000000LL )
                          v77 = 0LL;
                        else
                          v77 = v91;
                        if ( v71 )
                          v77 = v105;
                        v72 = v111;
                        if ( v77 >= 2 )
                        {
                          v78 = 72LL;
                          if ( v90.m256i_i64[0] != 0x8000000000000000LL )
                            v78 = v90.m256i_i64[3];
                          v110 = v78;
                          v72 = 1LL;
                        }
                        goto LABEL_136;
                      }
                      v69 = *((_QWORD *)&v101 + 1);
                      v135 = v102;
                      core::ptr::drop_in_place<core::result::Result<usize,uu_pr::PrError>>(&v97);
                      if ( v68 == 0x8000000000000005LL )
                        goto LABEL_111;
                      v75 = (_QWORD *)v88;
                      *(_OWORD *)(v88 + 24) = v135;
                      v75[1] = v68;
                      v75[2] = v69;
                      *v75 = 2LL;
                      v87 = 0;
                      core::ptr::drop_in_place<core::option::Option<uu_pr::ColumnModeOptions>>(&v90);
                      v74 = 1;
                      v87 = 0;
LABEL_118:
                      core::ptr::drop_in_place<regex::regex::string::Regex>(v129);
                      if ( v74 )
                        goto LABEL_122;
                      goto LABEL_121;
                    }
LABEL_107:
                    v90.m256i_i64[2] = v97.m256i_i64[2];
                    *(_OWORD *)v90.m256i_i8 = *(_OWORD *)v97.m256i_i8;
                    v90.m256i_i64[3] = v108;
                    *(_QWORD *)&v91 = v62;
                    BYTE8(v91) = v86;
                    goto LABEL_108;
                  }
                  v62 = v90.m256i_i64[1];
                  if ( v90.m256i_i64[0] == 0x8000000000000005LL )
                  {
                    v97.m256i_i64[3] = (__int64)&v108;
                    *(_OWORD *)v97.m256i_i8 = *(_OWORD *)v109;
                    v97.m256i_i64[2] = *(_QWORD *)&v109[16];
                    goto LABEL_107;
                  }
                  v67 = *(_OWORD *)&v90.m256i_u64[2];
LABEL_116:
                  v73 = (_QWORD *)v88;
                  *(_OWORD *)(v88 + 24) = v67;
                  v73[1] = v66;
                  v73[2] = v62;
                  *v73 = 2LL;
                  LOBYTE(v66) = 1;
                  v87 = v66;
                  v74 = 0;
                  goto LABEL_118;
                }
                v61 = v90.m256i_i64[1];
                v57 = 1LL;
                if ( v90.m256i_i64[0] == 0x8000000000000005LL )
                {
                  v110 = v90.m256i_i64[1];
                  goto LABEL_95;
                }
                v76 = (_QWORD *)v88;
                *(_OWORD *)(v88 + 24) = *(_OWORD *)&v90.m256i_u64[2];
                v76[1] = v56;
                v76[2] = v61;
                *v76 = 2LL;
              }
              else
              {
                v59 = (_QWORD *)v88;
                *(_OWORD *)(v88 + 24) = v101;
                v59[1] = v55;
                v59[2] = v54;
                *v59 = 2LL;
              }
LABEL_121:
              core::ptr::drop_in_place<alloc::string::String>(v109);
LABEL_122:
              core::ptr::drop_in_place<alloc::string::String>(&v115);
              goto LABEL_123;
            }
LABEL_67:
            v48 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v23, aOmitHeader, 11LL);
            LOBYTE(v48) = v48 ^ 1;
            v96 = v48;
            v46 -= 10LL;
            goto LABEL_68;
          }
          v58 = (_QWORD *)v88;
          *(_OWORD *)(v88 + 24) = v101;
          v58[1] = v47;
          v58[2] = v46;
          *v58 = 2LL;
LABEL_123:
          core::ptr::drop_in_place<regex::regex::string::Regex>(v126);
          core::ptr::drop_in_place<alloc::string::String>(&v121);
          core::ptr::drop_in_place<alloc::string::String>(&v119);
          core::ptr::drop_in_place<alloc::string::String>(&v113);
          core::ptr::drop_in_place<core::option::Option<uu_pr::NumberingMode>>(v124);
          goto LABEL_124;
        }
LABEL_63:
        *(_QWORD *)&v101 = v104;
        if ( v103 > v104 )
        {
          v97.m256i_i64[0] = (__int64)&v123;
          v97.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v97.m256i_i64[2] = (__int64)&v101;
          v97.m256i_i64[3] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v90.m256i_i64[0] = (__int64)&off_309250;
          v90.m256i_i64[1] = 3LL;
          *(_QWORD *)&v91 = 0LL;
          v90.m256i_i64[2] = (__int64)&v97;
          v90.m256i_i64[3] = 2LL;
          core::option::Option<T>::map_or_else(&v136, &v90, v41, &v101, v42, v43);
          v45 = v88;
          *(_QWORD *)(v88 + 32) = v137;
          *(_OWORD *)(v45 + 16) = v136;
          *(_QWORD *)(v45 + 8) = 0x8000000000000001LL;
          *(_QWORD *)v45 = 2LL;
          goto LABEL_123;
        }
        v44 = 1LL;
        goto LABEL_66;
      }
    }
    v103 = v28;
    goto LABEL_40;
  }
  v27 = (_QWORD *)v88;
  *(_OWORD *)(v88 + 24) = v124[0];
  v27[1] = v21;
  v27[2] = v20;
  *v27 = 2LL;
LABEL_124:
  core::ptr::drop_in_place<alloc::string::String>(&v117);
  return v88;
}
