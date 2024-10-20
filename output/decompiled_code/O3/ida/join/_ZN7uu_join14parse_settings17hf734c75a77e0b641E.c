__int64 __fastcall uu_join::parse_settings(__int64 a1, void (__fastcall __noreturn *a2)())
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rcx
  void (__fastcall __noreturn *v7)(); // r15
  const char *v8; // r13
  __int64 (__fastcall **v9)(); // r12
  __int64 (__fastcall **v10)(); // rbx
  const char *v11; // rbp
  __int64 (__fastcall **v12)(); // r14
  __int64 (__fastcall **v13)(); // rax
  unsigned __int64 v14; // rdi
  void (__fastcall __noreturn *v15)(); // rsi
  __int64 (__fastcall **v16)(); // r15
  __int64 v17; // rdx
  const char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  const char *v21; // rax
  __int64 v22; // rcx
  _BYTE *v23; // rcx
  __int64 v24; // rax
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  void (__fastcall __noreturn *v28)(); // r15
  char flag; // al
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // r12
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 (__fastcall **v37)(); // rcx
  __int128 *v38; // r13
  unsigned __int8 *v39; // r15
  unsigned __int8 *v40; // r12
  unsigned __int8 *v41; // rcx
  unsigned __int8 *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int8 *v45; // rsi
  unsigned __int8 *v46; // rbx
  unsigned __int8 *v47; // rdx
  unsigned int v48; // eax
  int v49; // ecx
  int v50; // r8d
  int v51; // edi
  __int64 v52; // rdi
  unsigned __int8 *v53; // rcx
  __int64 v54; // rax
  int v55; // edi
  unsigned __int8 *v56; // rsi
  int v57; // r8d
  int v58; // r10d
  int v59; // r9d
  unsigned __int8 *v60; // rdx
  __int64 v61; // r13
  int v62; // edi
  unsigned __int8 *v63; // rsi
  int v64; // r8d
  int v65; // r10d
  int v66; // r9d
  unsigned __int8 v67; // di
  _OWORD *v68; // rax
  const char *v69; // rbx
  __int128 v70; // xmm0
  __int64 (__fastcall **v71)(); // rcx
  __int64 v72; // rax
  bool v73; // zf
  char v74; // al
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  __int128 v78; // xmm0
  unsigned __int64 v79; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 v80; // [rsp+8h] [rbp-1E0h]
  __int128 v81; // [rsp+10h] [rbp-1D8h] BYREF
  __int128 v82; // [rsp+20h] [rbp-1C8h]
  __int64 v83; // [rsp+30h] [rbp-1B8h]
  __int128 v84; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v85; // [rsp+50h] [rbp-198h]
  __int64 v86; // [rsp+60h] [rbp-188h]
  __int128 v87; // [rsp+68h] [rbp-180h] BYREF
  __int128 v88; // [rsp+78h] [rbp-170h]
  __int64 v89; // [rsp+88h] [rbp-160h]
  __int64 (__fastcall **v90)(); // [rsp+90h] [rbp-158h]
  unsigned __int8 *v91; // [rsp+98h] [rbp-150h]
  __int128 v92; // [rsp+A0h] [rbp-148h] BYREF
  __int128 *v93; // [rsp+B0h] [rbp-138h]
  __int64 (__fastcall *v94)(); // [rsp+B8h] [rbp-130h]
  __int64 v95; // [rsp+C0h] [rbp-128h]
  void (__fastcall __noreturn *v96)(); // [rsp+C8h] [rbp-120h]
  const char *v97; // [rsp+D0h] [rbp-118h]
  __int64 (__fastcall **v98)(); // [rsp+D8h] [rbp-110h]
  _BYTE v99[48]; // [rsp+E0h] [rbp-108h] BYREF
  unsigned __int128 v100; // [rsp+110h] [rbp-D8h] BYREF
  _BYTE v101[24]; // [rsp+120h] [rbp-C8h]
  _BYTE v102[6]; // [rsp+138h] [rbp-B0h]
  char v103; // [rsp+13Eh] [rbp-AAh]
  char v104; // [rsp+13Fh] [rbp-A9h]
  __int64 (__fastcall **v105)(); // [rsp+140h] [rbp-A8h]
  const char *v106; // [rsp+148h] [rbp-A0h] BYREF
  __int64 (__fastcall *v107)(); // [rsp+150h] [rbp-98h]
  void (__fastcall __noreturn *v108)(); // [rsp+158h] [rbp-90h]
  __int64 v109; // [rsp+160h] [rbp-88h]
  __int64 v110; // [rsp+168h] [rbp-80h]
  __int64 v111; // [rsp+170h] [rbp-78h]
  const char *v112; // [rsp+178h] [rbp-70h]
  __int64 v113; // [rsp+180h] [rbp-68h]
  __int64 v114; // [rsp+188h] [rbp-60h]
  __int64 v115; // [rsp+190h] [rbp-58h]
  __int64 v116; // [rsp+198h] [rbp-50h]
  __int64 v117; // [rsp+1A0h] [rbp-48h]
  __int64 (__fastcall **v118)(); // [rsp+1A8h] [rbp-40h]
  __int64 v119; // [rsp+1B0h] [rbp-38h]

  v2 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v84, a2, aJ, 1LL);
  *(_QWORD *)&v92 = aJ;
  *((_QWORD *)&v92 + 1) = 1LL;
  if ( (_DWORD)v84 != 2 )
  {
LABEL_141:
    v83 = v86;
    v82 = v85;
    v81 = v84;
    *(_QWORD *)&v87 = &v92;
    *((_QWORD *)&v87 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v88 = &v81;
    *((_QWORD *)&v88 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v99 = &anon_861e3987badf62490c15922556b0ca7c_5_llvm_7725655707499526892;
    *(_QWORD *)&v99[8] = 2LL;
    *(_QWORD *)&v99[32] = 0LL;
    *(_QWORD *)&v99[16] = &v87;
    *(_QWORD *)&v99[24] = 2LL;
    core::panicking::panic_fmt(v99, &anon_861e3987badf62490c15922556b0ca7c_7_llvm_7725655707499526892);
  }
  if ( *((_QWORD *)&v84 + 1) )
  {
    uu_join::parse_field_number(
      v99,
      *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v84 + 1) + 16LL));
    v3 = *(_QWORD *)v99;
    if ( *(_QWORD *)v99 )
      goto LABEL_14;
    v110 = *(_QWORD *)&v99[8];
    v4 = 1LL;
  }
  else
  {
    v4 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v84, a2, ::a1, 1LL);
  *(_QWORD *)&v92 = ::a1;
  *((_QWORD *)&v92 + 1) = 1LL;
  if ( (_DWORD)v84 != 2 )
    goto LABEL_141;
  if ( *((_QWORD *)&v84 + 1) )
  {
    uu_join::parse_field_number(
      v99,
      *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v84 + 1) + 16LL));
    v3 = *(_QWORD *)v99;
    if ( !*(_QWORD *)v99 )
    {
      v114 = *(_QWORD *)&v99[8];
      v5 = 1LL;
      goto LABEL_11;
    }
LABEL_14:
    v6 = *(_QWORD *)&v99[8];
    *(_QWORD *)(a1 + 8) = v3;
    *(_QWORD *)(a1 + 16) = v6;
LABEL_56:
    *(_QWORD *)v2 = 0x8000000000000000LL;
    return v2;
  }
  v5 = 0LL;
LABEL_11:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v84, a2, ::a2, 1LL);
  *(_QWORD *)&v92 = ::a2;
  *((_QWORD *)&v92 + 1) = 1LL;
  if ( (_DWORD)v84 != 2 )
    goto LABEL_141;
  if ( *((_QWORD *)&v84 + 1) )
  {
    uu_join::parse_field_number(
      v99,
      *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v84 + 1) + 16LL));
    v3 = *(_QWORD *)v99;
    if ( *(_QWORD *)v99 )
      goto LABEL_14;
    v113 = *(_QWORD *)&v99[8];
    v109 = 1LL;
  }
  else
  {
    v109 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v99, a2, aV, 1LL);
  *(_QWORD *)&v92 = aV;
  *((_QWORD *)&v92 + 1) = 1LL;
  if ( *(_QWORD *)v99 )
    goto LABEL_142;
  v117 = v4;
  v108 = a2;
  v7 = *(void (__fastcall __noreturn **)())&v99[8];
  v115 = v5;
  v116 = *(_QWORD *)&v99[8];
  if ( *(_QWORD *)&v99[8] )
  {
    v97 = *(const char **)&v99[24];
    v8 = *(const char **)&v99[16];
    v9 = *(__int64 (__fastcall ***)())&v99[32];
    v79 = v100;
  }
  else
  {
    v7 = core::ops::function::FnOnce::call_once;
    v8 = "&";
    v79 = 0LL;
    v9 = 0LL;
    v97 = "&";
  }
  v10 = *(__int64 (__fastcall ***)())&v99[40];
  v119 = *((_QWORD *)&v100 + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v99, v108, aA, 1LL);
  *(_QWORD *)&v92 = aA;
  *((_QWORD *)&v92 + 1) = 1LL;
  if ( *(_QWORD *)v99 )
  {
LABEL_142:
    v86 = *(_QWORD *)&v99[40];
    v85 = *(_OWORD *)&v99[24];
    v84 = *(_OWORD *)&v99[8];
    *(_QWORD *)&v87 = &v92;
    *((_QWORD *)&v87 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v88 = &v84;
    *((_QWORD *)&v88 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v81 = &anon_861e3987badf62490c15922556b0ca7c_5_llvm_7725655707499526892;
    *((_QWORD *)&v81 + 1) = 2LL;
    v83 = 0LL;
    *(_QWORD *)&v82 = &v87;
    *((_QWORD *)&v82 + 1) = 2LL;
    core::panicking::panic_fmt(&v81, &anon_861e3987badf62490c15922556b0ca7c_7_llvm_7725655707499526892);
  }
  v95 = a1;
  v96 = *(void (__fastcall __noreturn **)())&v99[8];
  if ( *(_QWORD *)&v99[8] )
  {
    v112 = *(const char **)&v99[24];
    v11 = *(const char **)&v99[16];
    v12 = *(__int64 (__fastcall ***)())&v99[32];
    v13 = (__int64 (__fastcall **)())v100;
  }
  else
  {
    v96 = core::ops::function::FnOnce::call_once;
    v11 = "&";
    v12 = 0LL;
    v112 = "&";
    v13 = 0LL;
  }
  v98 = v13;
  v14 = v79;
  v15 = v7;
  v16 = *(__int64 (__fastcall ***)())&v99[40];
  v118 = (__int64 (__fastcall **)())*((_QWORD *)&v100 + 1);
  v111 = 0LL;
  v91 = 0LL;
LABEL_26:
  LODWORD(v17) = (_DWORD)v91;
  while ( 1 )
  {
    v91 = (unsigned __int8 *)(unsigned int)v17;
    if ( !v15 )
      break;
    if ( !v9 || v9 == v10 )
    {
      while ( v8 && v8 != v97 )
      {
        v18 = v8 + 24;
        v9 = (__int64 (__fastcall **)())*((_QWORD *)v8 + 1);
        v19 = *((_QWORD *)v8 + 2);
        v10 = &v9[4 * v19];
        v8 += 24;
        if ( v19 )
          goto LABEL_34;
      }
      if ( !v14 || v14 == v119 )
      {
        v9 = 0LL;
        v14 = 0LL;
        break;
      }
      v80 = v14 + 32;
      v90 = 0LL;
    }
    else
    {
      v18 = v8;
LABEL_34:
      v90 = v9 + 4;
      v8 = v18;
      v80 = v14;
      v14 = (unsigned __int64)v9;
    }
    v20 = ((__int64 (__fastcall *)(unsigned __int64, void (__fastcall __noreturn *)(), const char *))v15)(v14, v15, v97);
    v9 = v90;
LABEL_51:
    v14 = v80;
    v23 = *(_BYTE **)(v20 + 8);
    v24 = *(_QWORD *)(v20 + 16);
    if ( v24 != 1 )
      goto LABEL_54;
    LOBYTE(v17) = 1;
    if ( *v23 != 49 )
    {
      LOBYTE(v17) = 1;
      v111 = v17;
      if ( *v23 != 50 )
      {
LABEL_54:
        *(_QWORD *)&v84 = 0LL;
        *((_QWORD *)&v84 + 1) = v23;
        *(_QWORD *)&v85 = v24;
        BYTE8(v85) = 1;
        *(_QWORD *)&v87 = &v84;
        *((_QWORD *)&v87 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v99 = &off_FDDA0;
        *(_QWORD *)&v99[8] = 1LL;
        *(_QWORD *)&v99[32] = 0LL;
        *(_QWORD *)&v99[16] = &v87;
        *(_QWORD *)&v99[24] = 1LL;
        alloc::fmt::format::format_inner(&v81, v99);
        DWORD2(v82) = 1;
        v25 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v25 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v26 = v81;
        v25[1] = v82;
        *v25 = v26;
        v2 = v95;
        *(_QWORD *)(v95 + 8) = v25;
        *(_QWORD *)(v2 + 16) = &off_FDB88;
        goto LABEL_56;
      }
      goto LABEL_26;
    }
  }
  v80 = v14;
  if ( v12 && v12 != v16 )
  {
    v21 = v11;
LABEL_46:
    v105 = v12 + 4;
    v11 = v21;
    v90 = v98;
    goto LABEL_50;
  }
  while ( v11 && v11 != v112 )
  {
    v21 = v11 + 24;
    v12 = (__int64 (__fastcall **)())*((_QWORD *)v11 + 1);
    v22 = *((_QWORD *)v11 + 2);
    v16 = &v12[4 * v22];
    v11 += 24;
    if ( v22 )
      goto LABEL_46;
  }
  v12 = v98;
  if ( v98 && v98 != v118 )
  {
    v90 = v98 + 4;
    v105 = 0LL;
LABEL_50:
    v20 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(), void (__fastcall __noreturn *)(), const char *))v96)(
            v12,
            v15,
            v112);
    v15 = 0LL;
    v12 = v105;
    v98 = v90;
    goto LABEL_51;
  }
  *(_OWORD *)&v101[8] = 0LL;
  v103 = 0;
  v104 = 10;
  *(_QWORD *)&v100 = 0x8000000000000003LL;
  *(_QWORD *)v99 = 0LL;
  *(_QWORD *)&v99[8] = 8LL;
  *(_OWORD *)&v99[16] = 0LL;
  *(_OWORD *)&v99[32] = 1uLL;
  *(_DWORD *)&v102[2] = v116 == 0;
  v102[0] = (_BYTE)v91;
  v102[1] = v111;
  v28 = v108;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v108, aI, 1LL);
  v2 = v95;
  v30 = v117;
  v102[3] = flag;
  uu_join::get_field_number(&v81, v117, v110, v115, v114);
  v31 = *((_QWORD *)&v81 + 1);
  v32 = v81;
  if ( (_QWORD)v81
    || (*(_QWORD *)&v101[8] = *((_QWORD *)&v81 + 1),
        uu_join::get_field_number(&v81, v30, v110, v109, v113),
        v31 = *((_QWORD *)&v81 + 1),
        (v32 = v81) != 0) )
  {
    *(_QWORD *)(v2 + 8) = v32;
    *(_QWORD *)(v2 + 16) = v31;
LABEL_61:
    *(_QWORD *)v2 = 0x8000000000000000LL;
    v33 = 0x8000000000000003LL;
    goto LABEL_62;
  }
  *(_QWORD *)&v101[16] = *((_QWORD *)&v81 + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v87, v28, aT, 1LL);
  v106 = aT;
  v107 = (__int64 (__fastcall *)())(&dword_0 + 1);
  if ( (_DWORD)v87 != 2 )
  {
    v86 = v89;
    v85 = v88;
    v84 = v87;
    *(_QWORD *)&v92 = &v106;
    *((_QWORD *)&v92 + 1) = <&T as core::fmt::Display>::fmt;
    v93 = &v84;
    v94 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v81 = &anon_861e3987badf62490c15922556b0ca7c_5_llvm_7725655707499526892;
    *((_QWORD *)&v81 + 1) = 2LL;
    v83 = 0LL;
    *(_QWORD *)&v82 = &v92;
    *((_QWORD *)&v82 + 1) = 2LL;
    core::panicking::panic_fmt(&v81, &anon_861e3987badf62490c15922556b0ca7c_7_llvm_7725655707499526892);
  }
  if ( *((_QWORD *)&v87 + 1) )
  {
    uu_join::parse_separator(
      (__int64)&v81,
      *(unsigned __int8 **)(*((_QWORD *)&v87 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v87 + 1) + 16LL));
    v8 = (const char *)*((_QWORD *)&v81 + 1);
    v34 = v81;
    v35 = v82;
    if ( (_QWORD)v81 == 0x8000000000000004LL )
    {
      *(_QWORD *)(v2 + 8) = *((_QWORD *)&v81 + 1);
      *(_QWORD *)(v2 + 16) = v35;
      goto LABEL_61;
    }
    core::ptr::drop_in_place<uu_join::SepSetting>(&v100);
    v100 = __PAIR128__((unsigned __int64)v8, v34);
    *(_QWORD *)v101 = v35;
  }
  else
  {
    v34 = 0x8000000000000003LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, v28, aO, 1LL);
  v36 = clap_builder::parser::error::MatchesError::unwrap(aO, 1LL, &v81);
  if ( !v36 )
  {
LABEL_127:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v81, v28, aE, 1LL);
    v72 = clap_builder::parser::error::MatchesError::unwrap(aE, 1LL, &v81);
    if ( v72 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v81, *(_QWORD *)(v72 + 8), *(_QWORD *)(v72 + 16));
      *(_QWORD *)&v99[40] = v82;
      *(_OWORD *)&v99[24] = v81;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v28, aNocheckOrder, 13LL) )
      v103 = 1;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v28, aCheckOrder, 11LL) )
      v103 = 2;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v28, aHeader, 6LL) )
      v102[5] = 1;
    v73 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v28, aZ, 1LL) == 0;
    v74 = 10;
    if ( !v73 )
      v74 = 0;
    v104 = v74;
    *(_OWORD *)(v2 + 64) = *(_OWORD *)v101;
    v75 = *(_OWORD *)v99;
    v76 = *(_OWORD *)&v99[16];
    v77 = *(_OWORD *)&v99[32];
    *(_OWORD *)(v2 + 48) = v100;
    *(_OWORD *)(v2 + 32) = v77;
    *(_OWORD *)(v2 + 16) = v76;
    *(_OWORD *)v2 = v75;
    *(_QWORD *)(v2 + 80) = *(_QWORD *)&v101[16];
    *(_DWORD *)(v2 + 88) = *(_DWORD *)v102;
    *(_WORD *)(v2 + 92) = *(_WORD *)&v102[4];
    *(_BYTE *)(v2 + 94) = v103;
    *(_BYTE *)(v2 + 95) = v104;
    return v2;
  }
  v37 = *(__int64 (__fastcall ***)())(v36 + 8);
  v105 = *(__int64 (__fastcall ***)())(v36 + 16);
  if ( v105 == (__int64 (__fastcall **)())&byte_4 && *(_DWORD *)v37 == 1869903201 )
  {
    v102[4] = 1;
    goto LABEL_127;
  }
  v96 = (void (__fastcall __noreturn *)())v8;
  v97 = (const char *)v34;
  *(_QWORD *)&v92 = 0LL;
  *((_QWORD *)&v92 + 1) = 8LL;
  v93 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v90 = v37;
  v40 = (unsigned __int8 *)v37;
  v41 = (unsigned __int8 *)v105 + (_QWORD)v37;
  v42 = 0LL;
  v91 = v41;
  while ( 1 )
  {
    v45 = v39;
    while ( 1 )
    {
      v46 = v40;
      v47 = v42;
      if ( v40 == v41 )
        break;
      v48 = *v40;
      if ( (v48 & 0x80u) != 0 )
      {
        v49 = v48 & 0x1F;
        v50 = v40[1] & 0x3F;
        if ( (unsigned __int8)v48 <= 0xDFu )
        {
          v40 += 2;
          v48 = v50 | (v49 << 6);
        }
        else
        {
          v51 = (v50 << 6) | v40[2] & 0x3F;
          if ( (unsigned __int8)v48 < 0xF0u )
          {
            v40 += 3;
            v48 = (v49 << 12) | v51;
          }
          else
          {
            v40 += 4;
            v48 = ((v48 & 7) << 18) | (v51 << 6) | v46[3] & 0x3F;
          }
        }
        v41 = v91;
      }
      else
      {
        ++v40;
      }
      v42 += v40 - v46;
      if ( v48 <= 0x2C )
      {
        v52 = 0x100100000200LL;
        v39 = &v47[v40 - v46];
        if ( _bittest64(&v52, v48) )
          goto LABEL_90;
      }
    }
    v40 = v41;
    v39 = v45;
    v47 = (unsigned __int8 *)v105;
LABEL_90:
    v53 = &v45[(_QWORD)v90];
    v54 = v47 - v45;
    if ( v47 == v45 )
    {
LABEL_118:
      *(_QWORD *)&v87 = 0LL;
      *((_QWORD *)&v87 + 1) = v53;
      *(_QWORD *)&v88 = v54;
      BYTE8(v88) = 1;
      v106 = (const char *)&v87;
      v107 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v81 = &off_FDBF8;
      *((_QWORD *)&v81 + 1) = 1LL;
      v83 = 0LL;
      *(_QWORD *)&v82 = &v106;
      *((_QWORD *)&v82 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v84, &v81);
      DWORD2(v85) = 1;
      v68 = (_OWORD *)_rust_alloc(32LL, 8LL);
      v2 = v95;
      v69 = v97;
      v28 = v96;
      if ( !v68 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_121;
    }
    v55 = *v53;
    if ( (v55 & 0x80u) != 0 )
    {
      v57 = v55 & 0x1F;
      v58 = v53[1] & 0x3F;
      if ( (unsigned __int8)v55 <= 0xDFu )
      {
        v56 = v53 + 2;
        v55 = v58 | (v57 << 6);
      }
      else
      {
        v59 = (v58 << 6) | v53[2] & 0x3F;
        if ( (unsigned __int8)v55 < 0xF0u )
        {
          v56 = v53 + 3;
          v55 = (v57 << 12) | v59;
        }
        else
        {
          v56 = v53 + 4;
          v55 = ((v55 & 7) << 18) | (v59 << 6) | v53[3] & 0x3F;
        }
      }
    }
    else
    {
      v56 = v53 + 1;
    }
    v60 = &v47[(_QWORD)v90];
    if ( v55 == 48 )
      break;
    if ( v55 == 49 )
    {
      v61 = 0LL;
    }
    else
    {
      if ( v55 != 50 )
        goto LABEL_118;
      v61 = 256LL;
    }
    if ( v56 == v60 )
      goto LABEL_120;
    v62 = *v56;
    if ( (v62 & 0x80u) != 0 )
    {
      v64 = v62 & 0x1F;
      v65 = v56[1] & 0x3F;
      if ( (unsigned __int8)v62 <= 0xDFu )
      {
        v63 = v56 + 2;
        v62 = v65 | (v64 << 6);
      }
      else
      {
        v66 = (v65 << 6) | v56[2] & 0x3F;
        if ( (unsigned __int8)v62 < 0xF0u )
        {
          v63 = v56 + 3;
          v62 = (v64 << 12) | v66;
        }
        else
        {
          v67 = v56[3];
          v63 = v56 + 4;
          v62 = ((v64 & 7) << 18) | (v66 << 6) | v67 & 0x3F;
        }
      }
    }
    else
    {
      v63 = v56 + 1;
    }
    if ( v62 != 46 )
    {
LABEL_120:
      *(_QWORD *)&v87 = 0LL;
      *((_QWORD *)&v87 + 1) = v53;
      *(_QWORD *)&v88 = v54;
      BYTE8(v88) = 1;
      v106 = (const char *)&v87;
      v107 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v81 = &off_FDB40;
      *((_QWORD *)&v81 + 1) = 1LL;
      v83 = 0LL;
      *(_QWORD *)&v82 = &v106;
      *((_QWORD *)&v82 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v84, &v81);
      DWORD2(v85) = 1;
      v68 = (_OWORD *)_rust_alloc(32LL, 8LL);
      v2 = v95;
      v69 = v97;
      v28 = v96;
      if ( !v68 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_121:
      v70 = v84;
      v68[1] = v85;
      *v68 = v70;
      v71 = &off_FDB88;
      goto LABEL_122;
    }
    uu_join::parse_field_number(&v81, v63, v60 - v63);
    v98 = (__int64 (__fastcall **)())*((_QWORD *)&v81 + 1);
    v68 = (_OWORD *)v81;
    if ( (_QWORD)v81 )
    {
      v2 = v95;
      v69 = v97;
      v28 = v96;
      v71 = v98;
      goto LABEL_122;
    }
    v80 = v61 + (v80 & 0xFFFFFFFFFFFF0000LL) + 1;
    v38 = v93;
LABEL_116:
    if ( v38 == (__int128 *)v92 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v92);
    v43 = 16LL * (_QWORD)v38;
    v44 = *((_QWORD *)&v92 + 1);
    *(_QWORD *)(*((_QWORD *)&v92 + 1) + v43) = v80;
    *(_QWORD *)(v44 + v43 + 8) = v98;
    v38 = (__int128 *)((char *)v38 + 1);
    v93 = v38;
    v41 = v91;
    if ( v46 == v91 )
    {
      *(_QWORD *)&v99[16] = v93;
      *(_OWORD *)v99 = v92;
      v2 = v95;
      v28 = v108;
      goto LABEL_127;
    }
  }
  if ( v56 == v60 )
  {
    v80 &= 0xFFFFFFFFFFFFFF00LL;
    goto LABEL_116;
  }
  *(_QWORD *)&v87 = 0LL;
  *((_QWORD *)&v87 + 1) = v53;
  *(_QWORD *)&v88 = v54;
  BYTE8(v88) = 1;
  v106 = (const char *)&v87;
  v107 = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v81 = &off_FDB40;
  *((_QWORD *)&v81 + 1) = 1LL;
  v83 = 0LL;
  *(_QWORD *)&v82 = &v106;
  *((_QWORD *)&v82 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v84, &v81);
  DWORD2(v85) = 1;
  v68 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v68 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v78 = v84;
  v68[1] = v85;
  *v68 = v78;
  v71 = &off_FDB88;
  v2 = v95;
  v69 = v97;
  v28 = v96;
LABEL_122:
  *(_QWORD *)(v2 + 8) = v68;
  *(_QWORD *)(v2 + 16) = v71;
  *(_QWORD *)v2 = 0x8000000000000000LL;
  if ( (_QWORD)v92 )
    _rust_dealloc(*((_QWORD *)&v92 + 1), 16 * v92, 8LL);
  v33 = (unsigned __int64)v69;
LABEL_62:
  if ( ((v33 ^ 0x8000000000000000LL) == 1 || (v33 ^ 0x8000000000000000LL) >= 4) && v33 )
    _rust_dealloc(v28, v33, 1LL);
  return v2;
}
