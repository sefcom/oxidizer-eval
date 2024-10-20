_QWORD *__fastcall uu_tail::args::Settings::from(__int64 a1, _QWORD *a2)
{
  char flag; // r15
  char v4; // bl
  _BYTE *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  char v15; // r12
  char v16; // bp
  __int64 v17; // r11
  __int64 v18; // rdx
  char v19; // dl
  char v20; // r15
  char v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rax
  char v37; // r12
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // r14
  _QWORD *v49; // rcx
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  __int32 v52; // ecx
  __int64 v53; // r14
  __int64 v54; // r15
  __int64 v55; // r12
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int128 *v66; // r15
  __int64 v67; // r13
  __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  _QWORD *v75; // r14
  void *v76; // rax
  char v77; // al
  __int128 v78; // xmm0
  _BYTE *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // r14
  __int64 v84; // r15
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 (__fastcall **v87)(); // rax
  __int64 v88; // r14
  __int64 v89; // r15
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v93; // rsi
  __int128 *v94; // rax
  __m256i *v95; // rax
  char v96; // [rsp+1Eh] [rbp-2DAh]
  char v97; // [rsp+1Fh] [rbp-2D9h]
  char v99; // [rsp+2Ch] [rbp-2CCh]
  __int128 v100; // [rsp+30h] [rbp-2C8h] BYREF
  __int128 v101; // [rsp+40h] [rbp-2B8h]
  __int128 v102; // [rsp+50h] [rbp-2A8h]
  __int128 v103; // [rsp+60h] [rbp-298h]
  _QWORD v104[2]; // [rsp+70h] [rbp-288h] BYREF
  _BYTE v105[64]; // [rsp+80h] [rbp-278h] BYREF
  __int128 v106; // [rsp+C0h] [rbp-238h]
  __int128 v107; // [rsp+D0h] [rbp-228h]
  __int128 v108; // [rsp+E0h] [rbp-218h]
  __int128 v109; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v110; // [rsp+100h] [rbp-1F8h]
  __int64 v111; // [rsp+110h] [rbp-1E8h]
  __m256i v112; // [rsp+138h] [rbp-1C0h] BYREF
  __int64 v113; // [rsp+158h] [rbp-1A0h]
  _BYTE v114[48]; // [rsp+160h] [rbp-198h] BYREF
  __int128 v115; // [rsp+190h] [rbp-168h]
  __int128 v116; // [rsp+1A0h] [rbp-158h]
  __int128 v117; // [rsp+1B0h] [rbp-148h]
  __int128 v118; // [rsp+1C0h] [rbp-138h]
  __m256i v119; // [rsp+1D0h] [rbp-128h] BYREF
  __int64 v120; // [rsp+1F0h] [rbp-108h]
  __int128 v121; // [rsp+200h] [rbp-F8h] BYREF
  _BYTE *v122; // [rsp+210h] [rbp-E8h]
  __int128 v123; // [rsp+218h] [rbp-E0h]
  __int64 v124; // [rsp+228h] [rbp-D0h]
  __int128 v125; // [rsp+230h] [rbp-C8h]
  __int64 v126; // [rsp+240h] [rbp-B8h]
  __int16 v127; // [rsp+248h] [rbp-B0h]
  char v128; // [rsp+24Ah] [rbp-AEh]
  int v129; // [rsp+24Bh] [rbp-ADh]
  char v130; // [rsp+24Fh] [rbp-A9h]
  const char *v131; // [rsp+250h] [rbp-A8h] BYREF
  __int64 v132; // [rsp+258h] [rbp-A0h]
  __int64 v133; // [rsp+260h] [rbp-98h] BYREF
  _QWORD v134[3]; // [rsp+268h] [rbp-90h] BYREF
  _QWORD v135[3]; // [rsp+280h] [rbp-78h] BYREF
  _QWORD v136[3]; // [rsp+298h] [rbp-60h] BYREF
  _QWORD v137[9]; // [rsp+2B0h] [rbp-48h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, asc_2288C, 1LL);
  v4 = 1;
  if ( !flag )
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRetry, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v100, a2, aFollow, 6LL);
  *(_QWORD *)&v109 = aFollow;
  *((_QWORD *)&v109 + 1) = 6LL;
  if ( (_DWORD)v100 != 2 )
  {
    *(_QWORD *)&v114[32] = v102;
    *(_OWORD *)&v114[16] = v101;
    *(_OWORD *)v114 = v100;
    *(_QWORD *)&v121 = &v109;
    *((_QWORD *)&v121 + 1) = <&T as core::fmt::Display>::fmt;
    v122 = v114;
    *(_QWORD *)&v123 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v105 = &anon_337825d75cc1148531064ec50dce202b_5_llvm_14515817651820147466;
    *(_QWORD *)&v105[8] = 2LL;
    *(_QWORD *)&v105[32] = 0LL;
    v94 = &v121;
LABEL_109:
    *(_QWORD *)&v105[16] = v94;
    *(_QWORD *)&v105[24] = 2LL;
    core::panicking::panic_fmt(v105, &anon_337825d75cc1148531064ec50dce202b_7_llvm_14515817651820147466);
  }
  if ( *((_QWORD *)&v100 + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)&v100 + 1) + 16LL);
    if ( flag )
    {
      v7 = a2[2];
      if ( v7 )
      {
        v8 = a2[1];
        v9 = 16 * v7;
        v10 = 40LL;
        v11 = 0LL;
        v12 = 0LL;
        while ( 1 )
        {
          if ( *(_QWORD *)(v8 + v11 + 8) == 1LL )
          {
            v5 = *(_BYTE **)(v8 + v11);
            if ( *v5 == 70 )
              break;
          }
          v11 += 16LL;
          v10 += 104LL;
          ++v12;
          if ( v9 == v11 )
            goto LABEL_16;
        }
        v13 = a2[5];
        if ( v12 >= v13 )
          goto LABEL_112;
        v14 = a2[4];
        if ( *(_QWORD *)(v14 + v10) )
        {
          v15 = v4;
          v5 = **(_BYTE ***)(v14 + v10 - 8);
          LOBYTE(v10) = 1;
        }
        else
        {
LABEL_16:
          v15 = v4;
          v10 = 0LL;
        }
        v17 = 40LL;
        v13 = 0LL;
        v12 = 0LL;
        while ( *(_QWORD *)(v8 + v13 + 8) != 6LL
             || **(_DWORD **)(v8 + v13) ^ 0x6C6C6F66 | *(unsigned __int16 *)(*(_QWORD *)(v8 + v13) + 4LL) ^ 0x776F )
        {
          v13 += 16LL;
          v17 += 104LL;
          ++v12;
          if ( v9 == v13 )
          {
            v19 = 1;
            v4 = v15;
            goto LABEL_25;
          }
        }
        v13 = a2[5];
        if ( v12 >= v13 )
LABEL_112:
          core::panicking::panic_bounds_check(
            v12,
            v13,
            &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
            v6,
            v8,
            v10);
        v18 = a2[4];
        v4 = v15;
        if ( *(_QWORD *)(v18 + v17) )
        {
          v13 = **(_QWORD **)(v18 + v17 - 8);
          v19 = 0;
        }
        else
        {
          v19 = 1;
        }
LABEL_25:
        v16 = 1;
        if ( ((unsigned __int8)(v19 | ((unsigned __int64)v5 > v13)) & (unsigned __int8)v10) == 1 )
          goto LABEL_30;
      }
    }
    if ( v6 != 4 || **(_DWORD **)(*((_QWORD *)&v100 + 1) + 8LL) != 1701667182 )
    {
      v16 = 0;
      goto LABEL_30;
    }
LABEL_29:
    v16 = 1;
    goto LABEL_30;
  }
  v16 = 2;
  if ( flag )
    goto LABEL_29;
LABEL_30:
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUsePolling, 11LL);
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZeroTerminated, 15LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v100, a2, aBytes_0, 5LL);
  v131 = aBytes_0;
  v132 = 5LL;
  if ( (_DWORD)v100 != 2 )
    goto LABEL_105;
  if ( *((_QWORD *)&v100 + 1) )
  {
    uu_tail::args::parse_num(
      &v100,
      *(_QWORD *)(*((_QWORD *)&v100 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v100 + 1) + 16LL));
    if ( (_DWORD)v100 == 3 )
    {
      v96 = v20;
      v99 = v16;
      v97 = v4;
      v26 = *((_QWORD *)&v100 + 1);
      v27 = v101;
      v28 = 4LL;
      goto LABEL_44;
    }
    *(_OWORD *)&v114[16] = v101;
    *(_OWORD *)v114 = v100;
    *(_QWORD *)&v109 = v114;
    *((_QWORD *)&v109 + 1) = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)v105 = &off_15B818;
    *(_QWORD *)&v105[8] = 2LL;
    *(_QWORD *)&v105[32] = 0LL;
    *(_QWORD *)&v105[16] = &v109;
    *(_QWORD *)&v105[24] = 1LL;
    alloc::fmt::format::format_inner(&v119, v105, v22, v23, v24, v25);
    v33 = v119.m256i_i64[1];
    v34 = v119.m256i_i64[0];
    v35 = v119.m256i_i64[2];
    v36 = _rust_alloc(32LL, 8LL);
    if ( !v36 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_55:
    v48 = v36;
    *(_QWORD *)v36 = v34;
    *(_QWORD *)(v36 + 8) = v33;
    *(_QWORD *)(v36 + 16) = v35;
    *(_DWORD *)(v36 + 24) = 1;
    if ( *(_QWORD *)&v114[8] )
      _rust_dealloc(*(_QWORD *)&v114[16], *(_QWORD *)&v114[8], 1LL);
    v49 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 8) = v48;
LABEL_98:
    v87 = &off_15B870;
LABEL_99:
    v49[2] = v87;
    *v49 = 5LL;
    return v49;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v100, a2, &unk_2286E, 5LL);
  v131 = (const char *)&unk_2286E;
  v132 = 5LL;
  if ( (_DWORD)v100 != 2 )
  {
LABEL_105:
    *(_QWORD *)&v114[32] = v102;
    *(_OWORD *)&v114[16] = v101;
    *(_OWORD *)v114 = v100;
    *(_QWORD *)&v109 = &v131;
    *((_QWORD *)&v109 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v110 = v114;
    *((_QWORD *)&v110 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v105 = &anon_337825d75cc1148531064ec50dce202b_5_llvm_14515817651820147466;
    *(_QWORD *)&v105[8] = 2LL;
    *(_QWORD *)&v105[32] = 0LL;
    v94 = &v109;
    goto LABEL_109;
  }
  if ( *((_QWORD *)&v100 + 1) )
  {
    uu_tail::args::parse_num(
      &v100,
      *(_QWORD *)(*((_QWORD *)&v100 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v100 + 1) + 16LL));
    if ( (_DWORD)v100 != 3 )
    {
      *(_OWORD *)&v114[16] = v101;
      *(_OWORD *)v114 = v100;
      *(_QWORD *)&v109 = v114;
      *((_QWORD *)&v109 + 1) = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
      *(_QWORD *)v105 = &off_15B8E0;
      *(_QWORD *)&v105[8] = 1LL;
      *(_QWORD *)&v105[32] = 0LL;
      *(_QWORD *)&v105[16] = &v109;
      *(_QWORD *)&v105[24] = 1LL;
      alloc::fmt::format::format_inner(&v112, v105, v29, v30, v31, v32);
      v33 = v112.m256i_i64[1];
      v34 = v112.m256i_i64[0];
      v35 = v112.m256i_i64[2];
      v36 = _rust_alloc(32LL, 8LL);
      if ( !v36 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_55;
    }
    v96 = v20;
    v99 = v16;
    v97 = v4;
    v28 = *((_QWORD *)&v100 + 1);
    v26 = v101;
    v27 = 10LL;
    if ( v21 )
      v27 = 0LL;
  }
  else
  {
    v96 = v20;
    v99 = v16;
    v97 = v4;
    v28 = 0LL;
    v26 = 10LL;
    v27 = 10LL;
    if ( v21 )
      v27 = 0LL;
  }
LABEL_44:
  v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL);
  BYTE1(v129) = v99;
  v126 = 5LL;
  *(_QWORD *)&v121 = v28;
  *((_QWORD *)&v121 + 1) = v26;
  v122 = (_BYTE *)v27;
  LOBYTE(v127) = v97;
  *(_QWORD *)&v125 = 1LL;
  DWORD2(v125) = 0;
  HIBYTE(v127) = v96;
  v128 = v37;
  LOBYTE(v129) = v38;
  *(_QWORD *)&v123 = 0LL;
  *((_QWORD *)&v123 + 1) = 8LL;
  v124 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v100, a2, aSleepInterval, 14LL);
  v112.m256i_i64[0] = (__int64)aSleepInterval;
  v112.m256i_i64[1] = 14LL;
  if ( (_DWORD)v100 != 2 )
    goto LABEL_106;
  v39 = *((_QWORD *)&v100 + 1);
  if ( !*((_QWORD *)&v100 + 1) )
  {
LABEL_72:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v100, a2, aMaxUnchangedSt, 19LL);
    v112.m256i_i64[0] = (__int64)aMaxUnchangedSt;
    v112.m256i_i64[1] = 19LL;
    if ( (_DWORD)v100 == 2 )
    {
      if ( *((_QWORD *)&v100 + 1) )
      {
        v59 = *(_QWORD *)(*((_QWORD *)&v100 + 1) + 8LL);
        v60 = *(_QWORD *)(*((_QWORD *)&v100 + 1) + 16LL);
        v61 = core::num::<impl core::str::traits::FromStr for u32>::from_str(v59, v60);
        if ( (v61 & 1) != 0 )
        {
          *(_QWORD *)v114 = 0LL;
          *(_QWORD *)&v114[8] = v59;
          *(_QWORD *)&v114[16] = v60;
          v114[24] = 1;
          *(_QWORD *)&v100 = v114;
          *((_QWORD *)&v100 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v105 = &off_15BA20;
          *(_QWORD *)&v105[8] = 1LL;
          *(_QWORD *)&v105[32] = 0LL;
          *(_QWORD *)&v105[16] = &v100;
          *(_QWORD *)&v105[24] = 1LL;
          alloc::fmt::format::format_inner(v135, v105, v62, v63, v64, v65);
          v83 = v135[0];
          v84 = v135[1];
          v85 = v135[2];
          v86 = _rust_alloc(32LL, 8LL);
          if ( !v86 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          *(_QWORD *)v86 = v83;
          *(_QWORD *)(v86 + 8) = v84;
          *(_QWORD *)(v86 + 16) = v85;
          *(_DWORD *)(v86 + 24) = 1;
          v49 = (_QWORD *)a1;
          *(_QWORD *)(a1 + 8) = v86;
          v87 = &off_15B9B0;
          goto LABEL_99;
        }
        LODWORD(v126) = HIDWORD(v61);
      }
      v66 = &v100;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v100, a2, aPid, 3LL);
      v112.m256i_i64[0] = (__int64)aPid;
      v112.m256i_i64[1] = 3LL;
      if ( (_DWORD)v100 == 2 )
      {
        if ( !*((_QWORD *)&v100 + 1) )
        {
LABEL_81:
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v105, a2, aFiles, 5LL);
          v119.m256i_i64[0] = (__int64)aFiles;
          v119.m256i_i64[1] = 5LL;
          if ( !*(_QWORD *)v105 )
          {
            *(_OWORD *)v114 = *(_OWORD *)&v105[16];
            *(_OWORD *)&v114[16] = *(_OWORD *)&v105[32];
            *(_OWORD *)&v114[32] = *(_OWORD *)&v105[48];
            *(_QWORD *)&v115 = v106;
            if ( *(_QWORD *)&v105[8]
              && (*(_QWORD *)v105 = *(_QWORD *)&v105[8],
                  *(_OWORD *)&v105[8] = *(_OWORD *)v114,
                  *(_OWORD *)&v105[24] = *(_OWORD *)&v114[16],
                  *(_OWORD *)&v105[40] = *(_OWORD *)&v114[32],
                  *(_QWORD *)&v105[56] = v115,
                  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(
                    &v100,
                    v105),
                  (_QWORD)v100 != 0x8000000000000000LL) )
            {
              v123 = v100;
              v124 = v101;
              if ( (unsigned __int64)v101 >= 2 )
              {
                v77 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL) ^ 1;
                goto LABEL_88;
              }
            }
            else
            {
              v74 = _rust_alloc(48LL, 8LL);
              if ( !v74 )
                alloc::alloc::handle_alloc_error(8LL, 48LL);
              v75 = (_QWORD *)v74;
              v76 = (void *)_rust_alloc(14LL, 1LL);
              if ( !v76 )
                alloc::raw_vec::handle_error(1LL, 14LL);
              qmemcpy(v76, "standard input", 14);
              *v75 = 14LL;
              v75[1] = v76;
              v75[2] = 14LL;
              v75[3] = 0x8000000000000000LL;
              *(_QWORD *)&v123 = 1LL;
              *((_QWORD *)&v123 + 1) = v75;
              v124 = 1LL;
            }
            v77 = 0;
LABEL_88:
            v128 = v77;
            v78 = v121;
            v79 = v122;
            v80 = *((_QWORD *)&v123 + 1);
            v81 = v123;
            v82 = v124;
            *(_OWORD *)(a1 + 48) = v125;
            *(_QWORD *)(a1 + 32) = v80;
            *(_QWORD *)(a1 + 40) = v82;
            *(_QWORD *)(a1 + 16) = v79;
            *(_QWORD *)(a1 + 24) = v81;
            v49 = (_QWORD *)a1;
            *(_OWORD *)a1 = v78;
            *(_QWORD *)(a1 + 64) = v126;
            *(_WORD *)(a1 + 72) = v127;
            *(_BYTE *)(a1 + 74) = v128;
            *(_DWORD *)(a1 + 75) = v129;
            *(_BYTE *)(a1 + 79) = v130;
            return v49;
          }
          v111 = *(_QWORD *)&v105[40];
          v110 = *(_OWORD *)&v105[24];
          v109 = *(_OWORD *)&v105[8];
          v112.m256i_i64[0] = (__int64)&v119;
          v112.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v112.m256i_i64[2] = (__int64)&v109;
          v112.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
          *(_QWORD *)&v100 = &anon_337825d75cc1148531064ec50dce202b_5_llvm_14515817651820147466;
          v95 = &v112;
LABEL_107:
          *((_QWORD *)v66 + 1) = 2LL;
          *((_QWORD *)v66 + 4) = 0LL;
          *((_QWORD *)v66 + 2) = v95;
          *((_QWORD *)v66 + 3) = 2LL;
          core::panicking::panic_fmt(v66, &anon_337825d75cc1148531064ec50dce202b_7_llvm_14515817651820147466);
        }
        v67 = *(_QWORD *)(*((_QWORD *)&v100 + 1) + 8LL);
        v68 = *(_QWORD *)(*((_QWORD *)&v100 + 1) + 16LL);
        v69 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v67, v68);
        if ( (v69 & 1) != 0 )
        {
          LOBYTE(v109) = BYTE1(v69);
          *(_QWORD *)v114 = 0LL;
          *(_QWORD *)&v114[8] = v67;
          *(_QWORD *)&v114[16] = v68;
          v114[24] = 1;
          *(_QWORD *)&v100 = v114;
          *((_QWORD *)&v100 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v101 = &v109;
          *((_QWORD *)&v101 + 1) = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
          *(_QWORD *)v105 = &off_15BA40;
          *(_QWORD *)&v105[8] = 2LL;
          *(_QWORD *)&v105[32] = 0LL;
          *(_QWORD *)&v105[16] = &v100;
          *(_QWORD *)&v105[24] = 2LL;
          alloc::fmt::format::format_inner(v137, v105, v70, v71, v72, v73);
          v88 = v137[0];
          v89 = v137[1];
          v90 = v137[2];
          v91 = _rust_alloc(32LL, 8LL);
          if ( !v91 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
        }
        else
        {
          if ( v69 >= 0 )
          {
            HIDWORD(v126) = HIDWORD(v69);
            goto LABEL_81;
          }
          *(_QWORD *)v114 = 0LL;
          *(_QWORD *)&v114[8] = v67;
          *(_QWORD *)&v114[16] = v68;
          v114[24] = 1;
          *(_QWORD *)&v100 = v114;
          *((_QWORD *)&v100 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v105 = &off_15BA30;
          *(_QWORD *)&v105[8] = 1LL;
          *(_QWORD *)&v105[32] = 0LL;
          *(_QWORD *)&v105[16] = &v100;
          *(_QWORD *)&v105[24] = 1LL;
          alloc::fmt::format::format_inner(v136, v105, v70, v71, v72, v73);
          v88 = v136[0];
          v89 = v136[1];
          v90 = v136[2];
          v91 = _rust_alloc(32LL, 8LL);
          if ( !v91 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
        }
        *(_QWORD *)v91 = v88;
        *(_QWORD *)(v91 + 8) = v89;
        *(_QWORD *)(v91 + 16) = v90;
        *(_DWORD *)(v91 + 24) = 1;
        v49 = (_QWORD *)a1;
        *(_QWORD *)(a1 + 8) = v91;
        goto LABEL_98;
      }
    }
LABEL_106:
    *(_QWORD *)&v114[32] = v102;
    *(_OWORD *)&v114[16] = v101;
    *(_OWORD *)v114 = v100;
    *(_QWORD *)&v109 = &v112;
    *((_QWORD *)&v109 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v110 = v114;
    *((_QWORD *)&v110 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v105 = &anon_337825d75cc1148531064ec50dce202b_5_llvm_14515817651820147466;
    v95 = (__m256i *)&v109;
    v66 = (__int128 *)v105;
    goto LABEL_107;
  }
  v133 = *((_QWORD *)&v100 + 1);
  memset(v104, 10, 10);
  v100 = xmmword_15B8F0;
  v101 = xmmword_15B900;
  v102 = *(_OWORD *)&off_15B910;
  v103 = xmmword_15B920;
  v40 = *(_QWORD *)(v39 + 8);
  v41 = *(_QWORD *)(v39 + 16);
  *(_QWORD *)&v109 = v40;
  if ( !v41 )
    v40 = 0LL;
  *((_QWORD *)&v109 + 1) = v41;
  *(_QWORD *)&v110 = 0LL;
  *((_QWORD *)&v110 + 1) = v40;
  v111 = 0LL;
  fundu_core::parse::ReprParserTemplate::parse(
    (unsigned int)v114,
    (unsigned int)&v109,
    (unsigned int)&v100,
    (unsigned int)v104,
    (unsigned int)&unk_15B930,
    0);
  if ( *(_DWORD *)v114 == 2 )
  {
    v120 = *(_QWORD *)&v114[40];
    v46 = *(_OWORD *)&v114[8];
    v47 = *(_OWORD *)&v114[24];
LABEL_59:
    *(_OWORD *)&v119.m256i_u64[2] = v47;
    *(_OWORD *)v119.m256i_i8 = v46;
    goto LABEL_60;
  }
  v108 = v118;
  v107 = v117;
  v106 = v116;
  *(_OWORD *)&v105[48] = v115;
  *(_OWORD *)&v105[32] = *(_OWORD *)&v114[32];
  *(_OWORD *)&v105[16] = *(_OWORD *)&v114[16];
  *(_OWORD *)v105 = *(_OWORD *)v114;
  fundu_core::parse::DurationRepr::parse(&v112, v105);
  if ( v112.m256i_i32[0] != 8 )
  {
    v120 = v113;
    v46 = *(_OWORD *)v112.m256i_i8;
    v47 = *(_OWORD *)&v112.m256i_u64[2];
    goto LABEL_59;
  }
  if ( BYTE6(v103) || (v43 = v112.m256i_u8[24], LOBYTE(v43) = v112.m256i_i8[24] & 1, (v112.m256i_i8[24] & 1) == 0) )
  {
    *(_OWORD *)&v119.m256i_u64[1] = *(_OWORD *)&v112.m256i_u64[1];
    v119.m256i_i8[24] = v112.m256i_i8[24];
    *(__int32 *)((char *)&v119.m256i_i32[6] + 1) = *(__int32 *)((char *)&v112.m256i_i32[6] + 1);
    v119.m256i_i32[7] = v112.m256i_i32[7];
    v119.m256i_i64[0] = 8LL;
  }
  else
  {
    v119.m256i_i64[0] = 6LL;
  }
LABEL_60:
  v50 = v119.m256i_i64[0];
  if ( v119.m256i_i64[0] == 8 )
  {
    v51 = v119.m256i_i64[1];
    v52 = v119.m256i_i32[4];
    if ( v119.m256i_i64[1] )
    {
      if ( !v119.m256i_i8[24] )
        goto LABEL_71;
    }
    else
    {
      v51 = 0LL;
      if ( !v119.m256i_i8[24] || !v119.m256i_i32[4] )
        goto LABEL_71;
    }
    v51 = 0LL;
    v52 = 0;
LABEL_71:
    *(_QWORD *)&v125 = v51;
    DWORD2(v125) = v52;
    goto LABEL_72;
  }
  *(_QWORD *)v114 = &v133;
  *(_QWORD *)&v114[8] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)v105 = &off_15B958;
  *(_QWORD *)&v105[8] = 2LL;
  *(_QWORD *)&v105[32] = 0LL;
  *(_QWORD *)&v105[16] = v114;
  *(_QWORD *)&v105[24] = 1LL;
  alloc::fmt::format::format_inner(v134, v105, v42, v43, v44, v45);
  v53 = v134[0];
  v54 = v134[1];
  v55 = v134[2];
  v56 = _rust_alloc(32LL, 8LL);
  if ( !v56 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)v56 = v53;
  *(_QWORD *)(v56 + 8) = v54;
  *(_QWORD *)(v56 + 16) = v55;
  *(_DWORD *)(v56 + 24) = 1;
  v49 = (_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v56;
  *(_QWORD *)(a1 + 16) = &off_15B9B0;
  *(_QWORD *)a1 = 5LL;
  if ( v50 > 6 )
  {
    v58 = 1LL;
  }
  else
  {
    v57 = 117LL;
    if ( _bittest64(&v57, v50) )
      return v49;
    v58 = 2LL;
  }
  v93 = v119.m256i_i64[v58];
  if ( v93 )
  {
    _rust_dealloc(v119.m256i_i64[v58 + 1], v93, 1LL);
    return (_QWORD *)a1;
  }
  return v49;
}
