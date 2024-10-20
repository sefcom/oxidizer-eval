_QWORD *__fastcall uu_tail::args::Settings::from(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD, _QWORD, _QWORD); // rbp
  char flag; // r14
  char v4; // al
  _DWORD *v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // r14
  char v13; // r12
  _OWORD *v14; // r13
  __int64 (__fastcall **v15)(); // rbp
  __int64 v16; // r14
  _OWORD *v17; // r14
  char v18; // r12
  char v19; // bl
  _QWORD *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rax
  __int128 v30; // xmm0
  _QWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 (__fastcall **v42)(); // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // al
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int64 v49; // rax
  __int64 v50; // rcx
  __int128 v51; // xmm0
  void *v53; // rcx
  __int64 v54; // rdx
  char **v55; // rsi
  char v56; // [rsp+19h] [rbp-4CFh]
  char v57; // [rsp+1Ah] [rbp-4CEh]
  char v58; // [rsp+1Bh] [rbp-4CDh] BYREF
  int v59; // [rsp+1Ch] [rbp-4CCh]
  _BYTE v60[80]; // [rsp+20h] [rbp-4C8h] BYREF
  __int128 v61; // [rsp+70h] [rbp-478h]
  __int128 v62; // [rsp+80h] [rbp-468h]
  const char **v63; // [rsp+98h] [rbp-450h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+A0h] [rbp-448h]
  _BYTE *v65; // [rsp+A8h] [rbp-440h]
  __int64 (__fastcall *v66)(); // [rsp+B0h] [rbp-438h]
  _OWORD v67[2]; // [rsp+C0h] [rbp-428h] BYREF
  char **v68; // [rsp+E0h] [rbp-408h] BYREF
  __int64 v69; // [rsp+E8h] [rbp-400h]
  const char ***v70; // [rsp+F0h] [rbp-3F8h]
  __int64 v71; // [rsp+F8h] [rbp-3F0h]
  __int64 v72; // [rsp+100h] [rbp-3E8h]
  _BYTE v73[48]; // [rsp+120h] [rbp-3C8h] BYREF
  __int128 v74; // [rsp+150h] [rbp-398h]
  __int128 v75; // [rsp+160h] [rbp-388h]
  __int128 v76; // [rsp+170h] [rbp-378h]
  __int128 v77; // [rsp+180h] [rbp-368h]
  _QWORD *v78; // [rsp+198h] [rbp-350h]
  __int128 v79; // [rsp+1A0h] [rbp-348h]
  __m256i v80; // [rsp+1B0h] [rbp-338h] BYREF
  __int128 v81; // [rsp+1D0h] [rbp-318h]
  __int64 v82; // [rsp+1E0h] [rbp-308h]
  __int16 v83; // [rsp+1E8h] [rbp-300h]
  char v84; // [rsp+1EAh] [rbp-2FEh]
  int v85; // [rsp+1EBh] [rbp-2FDh]
  char v86; // [rsp+1EFh] [rbp-2F9h]
  const char *v87; // [rsp+1F0h] [rbp-2F8h] BYREF
  __int64 v88; // [rsp+1F8h] [rbp-2F0h]
  __int128 v89; // [rsp+200h] [rbp-2E8h] BYREF
  __int128 v90; // [rsp+210h] [rbp-2D8h]
  __int64 v91; // [rsp+220h] [rbp-2C8h]
  __int64 v92; // [rsp+230h] [rbp-2B8h] BYREF
  _BYTE v93[24]; // [rsp+238h] [rbp-2B0h] BYREF
  _QWORD v94[2]; // [rsp+250h] [rbp-298h] BYREF
  _QWORD v95[2]; // [rsp+260h] [rbp-288h] BYREF
  _QWORD v96[2]; // [rsp+270h] [rbp-278h] BYREF
  __int128 v97; // [rsp+280h] [rbp-268h] BYREF
  __int128 v98; // [rsp+290h] [rbp-258h]
  _QWORD v99[2]; // [rsp+2A0h] [rbp-248h] BYREF
  __int128 v100; // [rsp+2B0h] [rbp-238h] BYREF
  __int128 v101; // [rsp+2C0h] [rbp-228h]
  _QWORD v102[2]; // [rsp+2D0h] [rbp-218h] BYREF
  _QWORD v103[3]; // [rsp+2E0h] [rbp-208h] BYREF
  _QWORD v104[3]; // [rsp+2F8h] [rbp-1F0h] BYREF
  _QWORD v105[3]; // [rsp+310h] [rbp-1D8h] BYREF
  char v106; // [rsp+328h] [rbp-1C0h]
  _QWORD v107[3]; // [rsp+330h] [rbp-1B8h] BYREF
  char v108; // [rsp+348h] [rbp-1A0h]
  _QWORD v109[4]; // [rsp+350h] [rbp-198h] BYREF
  _QWORD v110[3]; // [rsp+370h] [rbp-178h] BYREF
  char v111; // [rsp+388h] [rbp-160h]
  __int128 v112; // [rsp+390h] [rbp-158h]
  _OWORD v113[2]; // [rsp+3A0h] [rbp-148h] BYREF
  __int128 v114; // [rsp+3C0h] [rbp-128h] BYREF
  __int64 v115; // [rsp+3D0h] [rbp-118h]
  __int128 v116; // [rsp+3D8h] [rbp-110h] BYREF
  __int64 v117; // [rsp+3E8h] [rbp-100h]
  __int128 v118; // [rsp+3F0h] [rbp-F8h] BYREF
  __int64 v119; // [rsp+400h] [rbp-E8h]
  __int128 v120; // [rsp+408h] [rbp-E0h] BYREF
  __int64 v121; // [rsp+418h] [rbp-D0h]
  _OWORD v122[4]; // [rsp+420h] [rbp-C8h] BYREF
  _QWORD v123[3]; // [rsp+460h] [rbp-88h] BYREF
  _OWORD v124[7]; // [rsp+478h] [rbp-70h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, asc_2CB84, 1LL, &off_18A430);
  v4 = 1;
  if ( !flag )
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRetry, 5LL, &off_18A448);
  v57 = v4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aFollow, 6LL);
  *(_QWORD *)&v67[0] = aFollow;
  *((_QWORD *)&v67[0] + 1) = 6LL;
  if ( *(_QWORD *)v60 )
  {
    v74 = *(_OWORD *)&v60[56];
    *(_OWORD *)&v73[32] = *(_OWORD *)&v60[40];
    *(_OWORD *)&v73[16] = *(_OWORD *)&v60[24];
    *(_OWORD *)v73 = *(_OWORD *)&v60[8];
    v63 = (const char **)v67;
    v64 = <&T as core::fmt::Display>::fmt;
    v65 = v73;
    v66 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v68 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v69 = 2LL;
    v72 = 0LL;
    v70 = &v63;
    v71 = 2LL;
    core::panicking::panic_fmt(&v68, &off_18A460);
  }
  v78 = a1;
  if ( !*(_QWORD *)&v60[8] )
  {
    LOBYTE(v2) = 2;
    if ( !flag )
      goto LABEL_16;
    goto LABEL_15;
  }
  v5 = *(_DWORD **)(*(_QWORD *)&v60[8] + 8LL);
  if ( !v5 )
    goto LABEL_98;
  v6 = *(_QWORD *)(*(_QWORD *)&v60[8] + 16LL);
  if ( v6 < 0 )
    goto LABEL_98;
  if ( !flag
    || (v2 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of,
        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, asc_2CB84, 1LL, &off_18A478),
        v9 = v8,
        v10 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFollow, 6LL, &off_18A490),
        !v7)
    || (LOBYTE(v2) = 1, v10) && v9 <= v11 )
  {
    if ( v6 != 4 || *v5 != 1701667182 )
    {
      LODWORD(v2) = 0;
      goto LABEL_16;
    }
LABEL_15:
    LOBYTE(v2) = 1;
  }
LABEL_16:
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUsePolling, 11LL, &off_18A4A8);
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZeroTerminated, 15LL, &off_18A3B8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aBytes_0, 5LL);
  v87 = aBytes_0;
  v88 = 5LL;
  if ( *(_QWORD *)v60 )
  {
    v74 = *(_OWORD *)&v60[56];
    *(_OWORD *)&v73[32] = *(_OWORD *)&v60[40];
    *(_OWORD *)&v73[16] = *(_OWORD *)&v60[24];
    *(_OWORD *)v73 = *(_OWORD *)&v60[8];
    v63 = &v87;
    v64 = <&T as core::fmt::Display>::fmt;
    v65 = v73;
    v66 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v68 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v69 = 2LL;
    v72 = 0LL;
    v70 = &v63;
    v71 = 2LL;
    core::panicking::panic_fmt(&v68, &off_18A3D0);
  }
  if ( *(_QWORD *)&v60[8] )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&v60[8] + 8LL) || *(__int64 *)(*(_QWORD *)&v60[8] + 16LL) < 0 )
      goto LABEL_98;
    uu_tail::args::parse_num(&v97);
    if ( (_QWORD)v97 == 3LL )
    {
      v56 = v12;
      v59 = (int)v2;
      v14 = (_OWORD *)*((_QWORD *)&v97 + 1);
      v15 = (__int64 (__fastcall **)())v98;
      v16 = 4LL;
      goto LABEL_35;
    }
    v113[1] = v98;
    v113[0] = v97;
    v17 = v113;
    v99[0] = v113;
    v99[1] = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)v60 = &off_18A3E8;
    *(_QWORD *)&v60[8] = 2LL;
    *(_QWORD *)&v60[16] = v99;
    *(_QWORD *)&v60[24] = 1LL;
    *(_QWORD *)&v60[32] = 0LL;
    alloc::fmt::format::format_inner(&v118, v60);
    *(_QWORD *)&v60[16] = v119;
    *(_OWORD *)v60 = v118;
    *(_DWORD *)&v60[24] = 1;
    v14 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    goto LABEL_54;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aLines, 5LL);
  v87 = aLines;
  v88 = 5LL;
  if ( *(_QWORD *)v60 )
  {
    v74 = *(_OWORD *)&v60[56];
    *(_OWORD *)&v73[32] = *(_OWORD *)&v60[40];
    *(_OWORD *)&v73[16] = *(_OWORD *)&v60[24];
    *(_OWORD *)v73 = *(_OWORD *)&v60[8];
    v63 = &v87;
    v64 = <&T as core::fmt::Display>::fmt;
    v65 = v73;
    v66 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v68 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v69 = 2LL;
    v72 = 0LL;
    v70 = &v63;
    v71 = 2LL;
    core::panicking::panic_fmt(&v68, &off_18A408);
  }
  if ( *(_QWORD *)&v60[8] )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&v60[8] + 8LL) || *(__int64 *)(*(_QWORD *)&v60[8] + 16LL) < 0 )
      goto LABEL_98;
    uu_tail::args::parse_num(&v100);
    if ( (_QWORD)v100 != 3LL )
    {
      v67[1] = v101;
      v67[0] = v100;
      v17 = v67;
      v102[0] = v67;
      v102[1] = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
      *(_QWORD *)v60 = &off_18A420;
      *(_QWORD *)&v60[8] = 1LL;
      *(_QWORD *)&v60[16] = v102;
      *(_QWORD *)&v60[24] = 1LL;
      *(_QWORD *)&v60[32] = 0LL;
      alloc::fmt::format::format_inner(&v120, v60);
      *(_QWORD *)&v60[16] = v121;
      *(_OWORD *)v60 = v120;
      *(_DWORD *)&v60[24] = 1;
      v14 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v14 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_54:
      v30 = *(_OWORD *)v60;
      v14[1] = *(_OWORD *)&v60[16];
      *v14 = v30;
      core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(v17);
      v15 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
LABEL_55:
      v31 = v78;
      v78[1] = v14;
      v20 = v31;
      v31[2] = v15;
      *v31 = 5LL;
      return v20;
    }
    v56 = v12;
    v59 = (int)v2;
    v16 = *((_QWORD *)&v100 + 1);
    v14 = (_OWORD *)v101;
    v15 = (__int64 (__fastcall **)())(byte_9 + 1);
    if ( v13 )
      v15 = 0LL;
    if ( *((_QWORD *)&v100 + 1) == 5LL )
      goto LABEL_55;
  }
  else
  {
    v56 = v12;
    v59 = (int)v2;
    v16 = 0LL;
    v14 = (_OWORD *)(byte_9 + 1);
    v15 = (__int64 (__fastcall **)())(byte_9 + 1);
    if ( v13 )
      v15 = 0LL;
  }
LABEL_35:
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL, &off_18A4C0);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL, &off_18A4D8);
  core::time::Duration::try_from_secs_f32(v73, 1.0);
  if ( *(_DWORD *)&v73[8] == 1000000000 )
  {
    v53 = &anon_ccaa1bf9f263435b6bcc65734e6162bc_16_llvm_3342634398492896223;
    if ( (v73[0] & 1) == 0 )
      v53 = &anon_ccaa1bf9f263435b6bcc65734e6162bc_15_llvm_3342634398492896223;
    v54 = 72LL;
    if ( (v73[0] & 1) == 0 )
      v54 = 59LL;
    *(_QWORD *)v60 = v53;
    *(_QWORD *)&v60[8] = v54;
    core::time::Duration::from_secs_f32::panic_cold_display(
      v60,
      &anon_ccaa1bf9f263435b6bcc65734e6162bc_18_llvm_3342634398492896223);
  }
  BYTE1(v85) = v59;
  v82 = 5LL;
  *(_QWORD *)&v79 = v16;
  *((_QWORD *)&v79 + 1) = v14;
  *(_OWORD *)v80.m256i_i8 = (unsigned __int64)v15;
  LOBYTE(v83) = v57;
  *(_QWORD *)&v81 = *(_QWORD *)v73;
  DWORD2(v81) = *(_DWORD *)&v73[8];
  HIBYTE(v83) = v56;
  v84 = v18;
  LOBYTE(v85) = v19;
  *(_OWORD *)&v80.m256i_u64[2] = 8uLL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aSleepInterval, 14LL);
  v20 = v78;
  *(_QWORD *)&v67[0] = aSleepInterval;
  *((_QWORD *)&v67[0] + 1) = 14LL;
  if ( *(_QWORD *)v60 )
  {
    v74 = *(_OWORD *)&v60[56];
    *(_OWORD *)&v73[32] = *(_OWORD *)&v60[40];
    *(_OWORD *)&v73[16] = *(_OWORD *)&v60[24];
    *(_OWORD *)v73 = *(_OWORD *)&v60[8];
    v63 = (const char **)v67;
    v64 = <&T as core::fmt::Display>::fmt;
    v65 = v73;
    v66 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v68 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v55 = &off_18A4F0;
    goto LABEL_110;
  }
  if ( *(_QWORD *)&v60[8] )
  {
    v92 = *(_QWORD *)&v60[8];
    memset(v123, 10, 10);
    v122[3] = xmmword_18C700;
    v122[2] = *(_OWORD *)&off_18C6F0;
    v122[1] = xmmword_18C6E0;
    v122[0] = anon_167cb1f6d0bb36a02fb1e0f8131d6db1_3_llvm_11514404006715048016;
    v21 = *(_QWORD *)(*(_QWORD *)&v60[8] + 8LL);
    if ( !v21 )
      goto LABEL_98;
    v22 = *(_QWORD *)(*(_QWORD *)&v60[8] + 16LL);
    if ( v22 < 0 )
      goto LABEL_98;
    v68 = *(char ***)(*(_QWORD *)&v60[8] + 8LL);
    if ( !v22 )
      v21 = 0LL;
    v69 = v22;
    v70 = 0LL;
    v71 = v21;
    v72 = 0LL;
    fundu_core::parse::ReprParserTemplate::parse(
      (unsigned int)v73,
      (unsigned int)&v68,
      (unsigned int)v122,
      (unsigned int)v123,
      (unsigned int)&anon_49b503d507dd96f44c7e940e5b921f69_21_llvm_4783345288819733303,
      0);
    if ( *(_QWORD *)v73 == 2LL )
    {
      v91 = *(_QWORD *)&v73[40];
      v90 = *(_OWORD *)&v73[24];
      v89 = *(_OWORD *)&v73[8];
    }
    else
    {
      v62 = v77;
      v61 = v76;
      *(_OWORD *)&v60[64] = v75;
      *(_OWORD *)&v60[48] = v74;
      *(_OWORD *)&v60[32] = *(_OWORD *)&v73[32];
      *(_OWORD *)&v60[16] = *(_OWORD *)&v73[16];
      *(_OWORD *)v60 = *(_OWORD *)v73;
      fundu_core::parse::DurationRepr::parse(&v63, v60);
      core::result::Result<T,E>::and_then(&v89, &v63, v122);
    }
    if ( (_QWORD)v89 != 8LL )
    {
      v94[0] = &v92;
      v94[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v60 = &off_18A508;
      *(_QWORD *)&v60[8] = 2LL;
      *(_QWORD *)&v60[16] = v94;
      *(_QWORD *)&v60[24] = 1LL;
      *(_QWORD *)&v60[32] = 0LL;
      alloc::fmt::format::format_inner(v103, v60);
      v26 = v103[0];
      v27 = v103[1];
      v28 = v103[2];
      v29 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v29 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)v29 = v26;
      *(_QWORD *)(v29 + 8) = v27;
      *(_QWORD *)(v29 + 16) = v28;
      *(_DWORD *)(v29 + 24) = 1;
      v20[1] = v29;
      v20[2] = &anon_2156c5d2a3a0485dea09dc961889c187_37_llvm_12173439086256078282;
      *v20 = 5LL;
      if ( (_QWORD)v89 != 8LL )
        core::ptr::drop_in_place<fundu_core::error::ParseError>(&v89);
      goto LABEL_95;
    }
    v23 = v90;
    if ( !*((_QWORD *)&v89 + 1) && !(_DWORD)v90 )
    {
      v24 = 0LL;
      v23 = 0;
LABEL_49:
      v25 = v24 | BYTE8(v89);
LABEL_60:
      *(_QWORD *)&v81 = v25;
      DWORD2(v81) = v23;
      goto LABEL_61;
    }
    if ( (BYTE8(v90) & 1) == 0 )
    {
      if ( (_DWORD)v90 != 1000000000 )
      {
        v24 = *((_QWORD *)&v89 + 1) & 0xFFFFFFFFFFFFFF00LL;
        goto LABEL_49;
      }
      if ( BYTE8(v89) )
        core::panicking::panic(
          anon_167cb1f6d0bb36a02fb1e0f8131d6db1_49_llvm_11514404006715048016,
          40LL,
          &anon_167cb1f6d0bb36a02fb1e0f8131d6db1_148_llvm_11514404006715048016);
    }
    v23 = 0;
    v25 = 0LL;
    goto LABEL_60;
  }
LABEL_61:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aMaxUnchangedSt, 19LL);
  *(_QWORD *)&v67[0] = aMaxUnchangedSt;
  *((_QWORD *)&v67[0] + 1) = 19LL;
  if ( *(_QWORD *)v60 )
  {
    v74 = *(_OWORD *)&v60[56];
    *(_OWORD *)&v73[32] = *(_OWORD *)&v60[40];
    *(_OWORD *)&v73[16] = *(_OWORD *)&v60[24];
    *(_OWORD *)v73 = *(_OWORD *)&v60[8];
    v63 = (const char **)v67;
    v64 = <&T as core::fmt::Display>::fmt;
    v65 = v73;
    v66 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v68 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v55 = &off_18A528;
    goto LABEL_110;
  }
  v32 = *(_QWORD *)&v60[8];
  if ( *(_QWORD *)&v60[8] )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&v60[8] + 8LL) || *(__int64 *)(*(_QWORD *)&v60[8] + 16LL) < 0 )
      goto LABEL_98;
    v33 = core::num::<impl core::str::traits::FromStr for u32>::from_str();
    if ( (v33 & 1) != 0 )
    {
      v36 = *(_QWORD *)(v32 + 8);
      if ( v36 )
      {
        v37 = *(_QWORD *)(v32 + 16);
        if ( v37 >= 0 )
        {
          v105[0] = 0LL;
          v105[1] = v36;
          v105[2] = v37;
          v106 = 1;
          v95[0] = v105;
          v95[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v60 = &off_18A540;
          *(_QWORD *)&v60[8] = 1LL;
          *(_QWORD *)&v60[16] = v95;
          *(_QWORD *)&v60[24] = 1LL;
          *(_QWORD *)&v60[32] = 0LL;
          alloc::fmt::format::format_inner(v104, v60);
          v38 = v104[0];
          v39 = v104[1];
          v40 = v104[2];
          v41 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          if ( !v41 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          *(_QWORD *)v41 = v38;
          *(_QWORD *)(v41 + 8) = v39;
          *(_QWORD *)(v41 + 16) = v40;
          *(_DWORD *)(v41 + 24) = 1;
          v42 = &anon_2156c5d2a3a0485dea09dc961889c187_37_llvm_12173439086256078282;
          goto LABEL_94;
        }
      }
      goto LABEL_98;
    }
    LODWORD(v82) = HIDWORD(v33);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aPid, 3LL);
  *(_QWORD *)&v67[0] = aPid;
  *((_QWORD *)&v67[0] + 1) = 3LL;
  if ( *(_QWORD *)v60 )
  {
    v74 = *(_OWORD *)&v60[56];
    *(_OWORD *)&v73[32] = *(_OWORD *)&v60[40];
    *(_OWORD *)&v73[16] = *(_OWORD *)&v60[24];
    *(_OWORD *)v73 = *(_OWORD *)&v60[8];
    v63 = (const char **)v67;
    v64 = <&T as core::fmt::Display>::fmt;
    v65 = v73;
    v66 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v68 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v55 = &off_18A550;
LABEL_110:
    v69 = 2LL;
    v72 = 0LL;
    v70 = &v63;
    v71 = 2LL;
    core::panicking::panic_fmt(&v68, v55);
  }
  v34 = *(_QWORD *)&v60[8];
  if ( !*(_QWORD *)&v60[8] )
    goto LABEL_74;
  if ( !*(_QWORD *)(*(_QWORD *)&v60[8] + 8LL) || *(__int64 *)(*(_QWORD *)&v60[8] + 16LL) < 0 )
    goto LABEL_98;
  v35 = core::num::<impl core::str::traits::FromStr for i32>::from_str();
  if ( (v35 & 1) != 0 )
  {
    v58 = BYTE1(v35);
    v43 = *(_QWORD *)(v34 + 8);
    if ( v43 )
    {
      v44 = *(_QWORD *)(v34 + 16);
      if ( v44 >= 0 )
      {
        v110[0] = 0LL;
        v110[1] = v43;
        v110[2] = v44;
        v111 = 1;
        v109[0] = v110;
        v109[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v109[2] = &v58;
        v109[3] = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
        *(_QWORD *)v60 = &off_18A578;
        *(_QWORD *)&v60[8] = 2LL;
        *(_QWORD *)&v60[16] = v109;
        *(_QWORD *)&v60[24] = 2LL;
        *(_QWORD *)&v60[32] = 0LL;
        alloc::fmt::format::format_inner(&v116, v60);
        *(_QWORD *)&v60[16] = v117;
        *(_OWORD *)v60 = v116;
        *(_DWORD *)&v60[24] = 1;
        v41 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v41 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_93;
      }
    }
LABEL_98:
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  }
  if ( v35 < 0 )
  {
    v49 = *(_QWORD *)(v34 + 8);
    if ( v49 )
    {
      v50 = *(_QWORD *)(v34 + 16);
      if ( v50 >= 0 )
      {
        v107[0] = 0LL;
        v107[1] = v49;
        v107[2] = v50;
        v108 = 1;
        v96[0] = v107;
        v96[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v60 = &off_18A568;
        *(_QWORD *)&v60[8] = 1LL;
        *(_QWORD *)&v60[16] = v96;
        *(_QWORD *)&v60[24] = 1LL;
        *(_QWORD *)&v60[32] = 0LL;
        alloc::fmt::format::format_inner(&v114, v60);
        *(_QWORD *)&v60[16] = v115;
        *(_OWORD *)v60 = v114;
        *(_DWORD *)&v60[24] = 1;
        v41 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v41 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_93:
        v51 = *(_OWORD *)v60;
        *(_OWORD *)(v41 + 16) = *(_OWORD *)&v60[16];
        *(_OWORD *)v41 = v51;
        v42 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
LABEL_94:
        v20[1] = v41;
        v20[2] = v42;
        *v20 = 5LL;
LABEL_95:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&v80.m256i_u64[1]);
        return v20;
      }
    }
    goto LABEL_98;
  }
  HIDWORD(v82) = HIDWORD(v35);
LABEL_74:
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v124, a2, aFiles, 5LL, &off_18A598);
  if ( *(_QWORD *)&v124[0]
    && (*(_OWORD *)&v60[48] = v124[3],
        *(_OWORD *)&v60[32] = v124[2],
        *(_OWORD *)&v60[16] = v124[1],
        *(_OWORD *)v60 = v124[0],
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v73, v60),
        v112 = *(_OWORD *)&v73[8],
        *(_QWORD *)v73 != 0x8000000000000000LL) )
  {
    *(_QWORD *)v93 = *(_QWORD *)v73;
    *(_OWORD *)&v93[8] = v112;
  }
  else
  {
    uu_tail::args::Settings::from::{{closure}}(v93);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tail::paths::Input>>(&v80.m256i_u64[1]);
  v80.m256i_i64[3] = *(_QWORD *)&v93[16];
  *(_OWORD *)&v80.m256i_u64[1] = *(_OWORD *)v93;
  if ( *(_QWORD *)&v93[16] < 2uLL )
    v45 = 0;
  else
    v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL, &off_18A5B0) ^ 1;
  v84 = v45;
  v46 = v79;
  v47 = *(_OWORD *)v80.m256i_i8;
  v48 = *(_OWORD *)&v80.m256i_u64[2];
  *((_OWORD *)v20 + 3) = v81;
  *((_OWORD *)v20 + 2) = v48;
  *((_OWORD *)v20 + 1) = v47;
  *(_OWORD *)v20 = v46;
  v20[8] = v82;
  *((_WORD *)v20 + 36) = v83;
  *((_BYTE *)v20 + 74) = v84;
  *(_DWORD *)((char *)v20 + 75) = v85;
  *((_BYTE *)v20 + 79) = v86;
  return v20;
}
