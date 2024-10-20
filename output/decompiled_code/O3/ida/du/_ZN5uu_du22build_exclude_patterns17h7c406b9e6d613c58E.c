_OWORD *__fastcall uu_du::build_exclude_patterns(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  void (__fastcall __noreturn *v3)(); // rdx
  const char *v4; // rsi
  __int128 v5; // xmm0
  __int64 v6; // rdi
  __int64 v7; // r8
  void (__fastcall __noreturn *v8)(); // rax
  const char *v9; // rdx
  const char *v10; // rcx
  const char *v11; // rsi
  __int128 v12; // xmm0
  const char *v13; // rdi
  __int64 v14; // r8
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // r15
  const char *v16; // rdi
  const char *v17; // rdx
  const char *v18; // rcx
  const char *v19; // rsi
  const char *v20; // r9
  __int64 v21; // rax
  char **v22; // rax
  _QWORD *v23; // r14
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // r13
  _QWORD *v29; // rbx
  __int64 v30; // rsi
  void (__fastcall *v31)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // r15
  int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r13
  _QWORD *v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  unsigned __int64 v50; // r12
  _QWORD *v51; // r13
  __int64 v52; // rsi
  __int64 v53; // r14
  __int64 (__fastcall *v54)(); // r12
  __int128 *v55; // rbx
  _QWORD *v56; // rax
  _QWORD *v57; // rcx
  __int64 v58; // rbx
  unsigned __int64 v59; // r14
  _QWORD *v60; // r12
  __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  _QWORD *v63; // r14
  __int64 v64; // rsi
  __int64 v65; // rbx
  unsigned __int64 v66; // r14
  _QWORD *v67; // r12
  __int64 v68; // rsi
  __int64 v69; // rbx
  unsigned __int64 v70; // r14
  _QWORD *v71; // r12
  __int64 v72; // rsi
  _OWORD *v73; // rbx
  __int64 v75; // rbx
  unsigned __int64 v76; // r14
  _QWORD *v77; // r12
  __int64 v78; // rsi
  __int64 v79; // [rsp+8h] [rbp-290h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+10h] [rbp-288h]
  __int128 *v81; // [rsp+18h] [rbp-280h]
  __int64 (__fastcall *v82)(); // [rsp+20h] [rbp-278h]
  char **v83; // [rsp+28h] [rbp-270h] BYREF
  __int64 v84; // [rsp+30h] [rbp-268h]
  __int128 v85; // [rsp+38h] [rbp-260h]
  __int64 v86; // [rsp+48h] [rbp-250h]
  int v87; // [rsp+50h] [rbp-248h]
  __int128 v88; // [rsp+58h] [rbp-240h] BYREF
  __int64 v89; // [rsp+68h] [rbp-230h]
  __int128 v90; // [rsp+70h] [rbp-228h] BYREF
  __int64 v91; // [rsp+80h] [rbp-218h] BYREF
  __int64 v92; // [rsp+88h] [rbp-210h] BYREF
  __int128 v93; // [rsp+90h] [rbp-208h]
  __int128 v94; // [rsp+A0h] [rbp-1F8h]
  __int128 v95; // [rsp+B0h] [rbp-1E8h]
  __int128 v96; // [rsp+C0h] [rbp-1D8h]
  __int128 v97; // [rsp+D0h] [rbp-1C8h]
  __int128 v98; // [rsp+E0h] [rbp-1B8h]
  __int128 v99; // [rsp+F0h] [rbp-1A8h]
  __int128 v100; // [rsp+100h] [rbp-198h]
  void (__fastcall __noreturn *v101)(); // [rsp+110h] [rbp-188h]
  const char *v102; // [rsp+118h] [rbp-180h]
  __int128 v103; // [rsp+120h] [rbp-178h]
  const char *v104; // [rsp+130h] [rbp-168h]
  const char *v105; // [rsp+138h] [rbp-160h]
  const char *v106; // [rsp+140h] [rbp-158h]
  __int64 v107; // [rsp+148h] [rbp-150h]
  __int128 v108; // [rsp+150h] [rbp-148h] BYREF
  __int128 v109; // [rsp+160h] [rbp-138h]
  __int64 v110; // [rsp+170h] [rbp-128h]
  _QWORD *v111; // [rsp+180h] [rbp-118h]
  char **v112; // [rsp+188h] [rbp-110h] BYREF
  __int64 v113; // [rsp+190h] [rbp-108h]
  __int64 v114; // [rsp+198h] [rbp-100h]
  __int64 v115; // [rsp+1A0h] [rbp-F8h]
  __int64 v116; // [rsp+1A8h] [rbp-F0h]
  __m256i v117; // [rsp+1B0h] [rbp-E8h] BYREF
  __int128 v118; // [rsp+1D0h] [rbp-C8h]
  __int64 v119; // [rsp+1E0h] [rbp-B8h]
  __int128 v120; // [rsp+1E8h] [rbp-B0h]
  __int128 v121; // [rsp+1F8h] [rbp-A0h]
  __int128 v122; // [rsp+208h] [rbp-90h]
  __int128 v123; // [rsp+218h] [rbp-80h]
  __int128 v124; // [rsp+228h] [rbp-70h]
  __int128 v125; // [rsp+238h] [rbp-60h]
  __int128 v126; // [rsp+248h] [rbp-50h]
  __int128 v127; // [rsp+258h] [rbp-40h]

  v2 = a2;
  v111 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v92, a2, aExcludeFrom, 12LL);
  *(_QWORD *)&v90 = aExcludeFrom;
  *((_QWORD *)&v90 + 1) = 12LL;
  if ( v92 )
  {
    v110 = v95;
    v109 = v94;
    v108 = v93;
    v79 = (__int64)&v90;
    v80 = <&T as core::fmt::Display>::fmt;
    v81 = &v108;
    v82 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v83 = &anon_7c2bd188538c72fabbd7a032ea3d628a_2_llvm_10659466266354302174;
    v84 = 2LL;
    v86 = 0LL;
    *(_QWORD *)&v85 = &v79;
    *((_QWORD *)&v85 + 1) = 2LL;
    core::panicking::panic_fmt(&v83, &anon_7c2bd188538c72fabbd7a032ea3d628a_4_llvm_10659466266354302174);
  }
  v3 = (void (__fastcall __noreturn *)())v93;
  if ( (_QWORD)v93 )
  {
    v4 = (const char *)*((_QWORD *)&v93 + 1);
    v5 = v94;
    v6 = *((_QWORD *)&v95 + 1);
    v7 = *((_QWORD *)&v96 + 1);
  }
  else
  {
    v5 = (unsigned __int64)"&";
    v3 = core::ops::function::FnOnce::call_once;
    v4 = "&";
    v6 = 0LL;
    v7 = 0LL;
  }
  *(_QWORD *)&v120 = v3;
  *((_QWORD *)&v120 + 1) = v4;
  v121 = v5;
  *(_QWORD *)&v122 = v95;
  *((_QWORD *)&v122 + 1) = v6;
  *(_QWORD *)&v123 = v96;
  *((_QWORD *)&v123 + 1) = v7;
  *(_QWORD *)&v124 = 0LL;
  *(_QWORD *)&v126 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v92, v2, aExclude, 7LL);
  *(_QWORD *)&v90 = aExclude;
  *((_QWORD *)&v90 + 1) = 7LL;
  if ( v92 )
  {
    v110 = v95;
    v109 = v94;
    v108 = v93;
    v79 = (__int64)&v90;
    v80 = <&T as core::fmt::Display>::fmt;
    v81 = &v108;
    v82 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v83 = &anon_7c2bd188538c72fabbd7a032ea3d628a_2_llvm_10659466266354302174;
    v84 = 2LL;
    v86 = 0LL;
    *(_QWORD *)&v85 = &v79;
    *((_QWORD *)&v85 + 1) = 2LL;
    core::panicking::panic_fmt(&v83, &anon_7c2bd188538c72fabbd7a032ea3d628a_4_llvm_10659466266354302174);
  }
  v8 = (void (__fastcall __noreturn *)())v93;
  v9 = (const char *)v95;
  v10 = (const char *)v96;
  if ( (_QWORD)v93 )
  {
    v11 = (const char *)*((_QWORD *)&v93 + 1);
    v12 = v94;
    v13 = (const char *)*((_QWORD *)&v95 + 1);
    v14 = *((_QWORD *)&v96 + 1);
  }
  else
  {
    v12 = (unsigned __int64)"&";
    v11 = "&";
    v8 = core::ops::function::FnOnce::call_once;
    v13 = 0LL;
    v14 = 0LL;
  }
  *(_QWORD *)&v88 = 0LL;
  *((_QWORD *)&v88 + 1) = 8LL;
  v89 = 0LL;
  v100 = v127;
  v99 = v126;
  v98 = v125;
  v97 = v124;
  v96 = v123;
  v95 = v122;
  v94 = v121;
  v93 = v120;
  v92 = 1LL;
  v101 = v8;
  v102 = v11;
  v103 = v12;
  v104 = v9;
  v105 = v13;
  v106 = v10;
  v107 = v14;
  v15 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))_rust_dealloc;
  while ( 1 )
  {
    if ( !v8 )
      goto LABEL_26;
    v16 = (const char *)*((_QWORD *)&v103 + 1);
    v17 = v102;
    v18 = (const char *)v103;
    v19 = v104;
    if ( !*((_QWORD *)&v103 + 1) )
      goto LABEL_16;
LABEL_13:
    v20 = 0LL;
    if ( v16 != v19 )
      v20 = v16 + 32;
    *((_QWORD *)&v103 + 1) = v20;
    if ( v16 != v19 )
    {
LABEL_24:
      v21 = ((__int64 (__fastcall *)(const char *, const char *, const char *, const char *))v8)(v16, v19, v17, v18);
      --v107;
      <alloc::string::String as core::clone::Clone>::clone(&v83, v21);
      v22 = v83;
      if ( v83 != (char **)0x8000000000000000LL )
      {
        v26 = v84;
        v27 = v85;
        goto LABEL_62;
      }
      goto LABEL_25;
    }
LABEL_16:
    while ( v17 && v17 != (const char *)v103 )
    {
      v102 = v17 + 24;
      v16 = (const char *)*((_QWORD *)v17 + 1);
      v19 = &v16[32 * *((_QWORD *)v17 + 2)];
      *((_QWORD *)&v103 + 1) = v16;
      v104 = v19;
      v17 += 24;
      if ( v16 )
        goto LABEL_13;
    }
    v16 = v105;
    if ( v105 )
    {
      v18 = v105 + 32;
      v17 = 0LL;
      if ( v105 != v106 )
        v17 = v105 + 32;
      v105 = v17;
      if ( v16 != v106 )
        goto LABEL_24;
    }
LABEL_25:
    v101 = 0LL;
LABEL_26:
    if ( !v92 )
      goto LABEL_115;
    if ( (_QWORD)v97 )
    {
      v23 = (_QWORD *)*((_QWORD *)&v97 + 1);
      v24 = *((_QWORD *)&v98 + 1);
      if ( *((_QWORD *)&v97 + 1) == *((_QWORD *)&v98 + 1) )
        goto LABEL_32;
LABEL_29:
      v25 = v23 + 3;
      *((_QWORD *)&v97 + 1) = v23 + 3;
      v22 = (char **)*v23;
      if ( *v23 != 0x8000000000000000LL )
      {
        v26 = v23[1];
        v27 = v23[2];
        goto LABEL_62;
      }
      goto LABEL_33;
    }
    while ( (_QWORD)v93 )
    {
      v31 = v15;
      v32 = *((_QWORD *)&v94 + 1);
      v33 = *((_QWORD *)&v93 + 1);
      v34 = v94;
      v35 = v95;
      if ( !*((_QWORD *)&v94 + 1) )
        goto LABEL_46;
LABEL_43:
      v36 = 0LL;
      if ( v32 != v35 )
        v36 = v32 + 32;
      *((_QWORD *)&v94 + 1) = v36;
      if ( v32 == v35 )
      {
LABEL_46:
        while ( v33 && v33 != (_QWORD)v94 )
        {
          *((_QWORD *)&v93 + 1) = v33 + 24;
          v32 = *(_QWORD *)(v33 + 8);
          v35 = v32 + 32LL * *(_QWORD *)(v33 + 16);
          *((_QWORD *)&v94 + 1) = v32;
          *(_QWORD *)&v95 = v35;
          v33 += 24LL;
          if ( v32 )
            goto LABEL_43;
        }
        v32 = *((_QWORD *)&v95 + 1);
        if ( !*((_QWORD *)&v95 + 1) )
          goto LABEL_57;
        v34 = *((_QWORD *)&v95 + 1) + 32LL;
        v33 = 0LL;
        if ( *((_QWORD *)&v95 + 1) == (_QWORD)v96 )
          v34 = 0LL;
        *((_QWORD *)&v95 + 1) = v34;
        if ( v32 == (_QWORD)v96 )
        {
LABEL_57:
          *(_QWORD *)&v93 = 0LL;
          v15 = v31;
          break;
        }
      }
      v37 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v93)(v32, v35, v33, v34);
      --*((_QWORD *)&v96 + 1);
      v79 = 0x1B600000000LL;
      WORD2(v80) = 0;
      LODWORD(v80) = 1;
      std::fs::OpenOptions::_open(&v90, &v79, *(_QWORD *)(v37 + 8), *(_QWORD *)(v37 + 16));
      if ( (_DWORD)v90 )
      {
        v79 = *((_QWORD *)&v90 + 1);
        core::result::unwrap_failed(
          aNoSuchFile,
          12LL,
          &v79,
          &anon_1ab022c5e154520fe3b672b83b9efe41_8_llvm_5730390425059400399,
          &off_134938);
      }
      v38 = v2;
      v39 = DWORD1(v90);
      v40 = _rust_alloc(0x2000LL, 1LL);
      if ( !v40 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      v83 = (char **)v40;
      v84 = 0x2000LL;
      v85 = 0LL;
      v86 = 0LL;
      v87 = v39;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v108, &v83);
      v2 = v38;
      v41 = v108;
      if ( (_QWORD)v108 == 0x8000000000000000LL )
        goto LABEL_57;
      v23 = (_QWORD *)*((_QWORD *)&v108 + 1);
      v24 = *((_QWORD *)&v108 + 1) + 24 * v109;
      if ( (_QWORD)v97 )
      {
        v115 = v97;
        v116 = v108;
        if ( *((_QWORD *)&v98 + 1) != *((_QWORD *)&v97 + 1) )
        {
          v50 = (*((_QWORD *)&v98 + 1) - *((_QWORD *)&v97 + 1)) / 0x18uLL;
          v51 = (_QWORD *)(*((_QWORD *)&v97 + 1) + 8LL);
          do
          {
            v52 = *(v51 - 1);
            if ( v52 )
              v31(*v51, v52, 1LL);
            v51 += 3;
            --v50;
          }
          while ( v50 );
        }
        v2 = v38;
        v41 = v116;
        if ( (_QWORD)v98 )
          v31(v115, 24 * v98, 8LL);
      }
      *(_QWORD *)&v97 = v23;
      *((_QWORD *)&v97 + 1) = v23;
      *(_QWORD *)&v98 = v41;
      *((_QWORD *)&v98 + 1) = v24;
      v15 = v31;
      if ( v23 != (_QWORD *)v24 )
        goto LABEL_29;
LABEL_32:
      v25 = v23;
LABEL_33:
      if ( (_QWORD *)v24 != v25 )
      {
        v28 = (v24 - (__int64)v25) / 0x18uLL;
        v29 = v25 + 1;
        do
        {
          v30 = *(v29 - 1);
          if ( v30 )
            v15(*v29, v30, 1LL);
          v29 += 3;
          --v28;
        }
        while ( v28 );
      }
      if ( (_QWORD)v98 )
        v15(v97, 24 * v98, 8LL);
      *(_QWORD *)&v97 = 0LL;
    }
    v42 = v99;
    if ( !(_QWORD)v99 )
      goto LABEL_98;
    v43 = (_QWORD *)*((_QWORD *)&v99 + 1);
    if ( *((_QWORD *)&v99 + 1) == *((_QWORD *)&v100 + 1) )
      goto LABEL_95;
    v44 = *((_QWORD *)&v99 + 1) + 24LL;
    *((_QWORD *)&v99 + 1) += 24LL;
    v22 = (char **)*v43;
    if ( *v43 == 0x8000000000000000LL )
      break;
    v26 = v43[1];
    v27 = v43[2];
LABEL_62:
    v112 = v22;
    v113 = v26;
    v114 = v27;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v2, aVerbose_0, 7LL) )
    {
      v79 = (__int64)&v112;
      *(_QWORD *)&v108 = &v79;
      *((_QWORD *)&v108 + 1) = <&T as core::fmt::Debug>::fmt;
      v83 = &off_134968;
      v84 = 2LL;
      v86 = 0LL;
      *(_QWORD *)&v85 = &v108;
      *((_QWORD *)&v85 + 1) = 1LL;
      std::io::stdio::_print(&v83);
    }
    uucore::parser::parse_glob::from_str(&v117, v113, v114);
    if ( v117.m256i_i64[0] == 0x8000000000000000LL )
    {
      v91 = v117.m256i_i64[3];
      v90 = *(_OWORD *)&v117.m256i_u64[1];
      v79 = 0LL;
      v80 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v81 = 0LL;
      *(_QWORD *)&v108 = &v91;
      *((_QWORD *)&v108 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v109 = &v90;
      *((_QWORD *)&v109 + 1) = <&T as core::fmt::Display>::fmt;
      v83 = &anon_bf61aaad3e5531dfbf03a89806c0a829_17_llvm_12167627799476951514;
      v84 = 2LL;
      v86 = 0LL;
      *(_QWORD *)&v85 = &v108;
      *((_QWORD *)&v85 + 1) = 2LL;
      if ( (unsigned __int8)core::fmt::write(&v79, &off_134628, &v83) )
        core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v83, &unk_134690, &off_134658);
      v53 = v79;
      v54 = v80;
      v55 = v81;
      v56 = (_QWORD *)_rust_alloc(32LL, 8LL);
      if ( !v56 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *v56 = 4LL;
      v56[1] = v53;
      v56[2] = v54;
      v56[3] = v55;
      v57 = v111;
      v111[1] = v56;
      v57[2] = &off_1349C0;
      *v57 = 0x8000000000000000LL;
      if ( v112 )
        _rust_dealloc(v113, v112, 1LL);
      if ( v92 )
      {
        v58 = v97;
        if ( (_QWORD)v97 )
        {
          if ( *((_QWORD *)&v98 + 1) != *((_QWORD *)&v97 + 1) )
          {
            v59 = (*((_QWORD *)&v98 + 1) - *((_QWORD *)&v97 + 1)) / 0x18uLL;
            v60 = (_QWORD *)(*((_QWORD *)&v97 + 1) + 8LL);
            do
            {
              v61 = *(v60 - 1);
              if ( v61 )
                v15(*v60, v61, 1LL);
              v60 += 3;
              --v59;
            }
            while ( v59 );
          }
          if ( (_QWORD)v98 )
            _rust_dealloc(v58, 24 * v98, 8LL);
        }
        v75 = v99;
        if ( (_QWORD)v99 )
        {
          if ( *((_QWORD *)&v100 + 1) != *((_QWORD *)&v99 + 1) )
          {
            v76 = (*((_QWORD *)&v100 + 1) - *((_QWORD *)&v99 + 1)) / 0x18uLL;
            v77 = (_QWORD *)(*((_QWORD *)&v99 + 1) + 8LL);
            do
            {
              v78 = *(v77 - 1);
              if ( v78 )
                v15(*v77, v78, 1LL);
              v77 += 3;
              --v76;
            }
            while ( v76 );
          }
          if ( (_QWORD)v100 )
            _rust_dealloc(v75, 24 * v100, 8LL);
        }
      }
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v88);
      v73 = v111;
      if ( (_QWORD)v88 )
        _rust_dealloc(*((_QWORD *)&v88 + 1), 56 * v88, 8LL);
      return v73;
    }
    v45 = v89;
    if ( v89 == (_QWORD)v88 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v88);
    v46 = *((_QWORD *)&v88 + 1);
    v47 = 56 * v45;
    *(_QWORD *)(*((_QWORD *)&v88 + 1) + v47 + 48) = v119;
    v48 = *(_OWORD *)v117.m256i_i8;
    v49 = *(_OWORD *)&v117.m256i_u64[2];
    *(_OWORD *)(v46 + v47 + 32) = v118;
    *(_OWORD *)(v46 + v47 + 16) = v49;
    *(_OWORD *)(v46 + v47) = v48;
    v89 = v45 + 1;
    if ( v112 )
      v15(v113, v112, 1LL);
    v8 = v101;
  }
  if ( *((_QWORD *)&v100 + 1) != v44 )
  {
    v62 = (*((_QWORD *)&v100 + 1) - v44) / 0x18uLL;
    v63 = v43 + 4;
    do
    {
      v64 = *(v63 - 1);
      if ( v64 )
        v15(*v63, v64, 1LL);
      v63 += 3;
      --v62;
    }
    while ( v62 );
  }
LABEL_95:
  if ( (_QWORD)v100 )
    _rust_dealloc(v42, 24 * v100, 8LL);
  *(_QWORD *)&v99 = 0LL;
LABEL_98:
  if ( v92 )
  {
    v65 = v97;
    if ( (_QWORD)v97 )
    {
      if ( *((_QWORD *)&v98 + 1) != *((_QWORD *)&v97 + 1) )
      {
        v66 = (*((_QWORD *)&v98 + 1) - *((_QWORD *)&v97 + 1)) / 0x18uLL;
        v67 = (_QWORD *)(*((_QWORD *)&v97 + 1) + 8LL);
        do
        {
          v68 = *(v67 - 1);
          if ( v68 )
            v15(*v67, v68, 1LL);
          v67 += 3;
          --v66;
        }
        while ( v66 );
      }
      if ( (_QWORD)v98 )
        _rust_dealloc(v65, 24 * v98, 8LL);
    }
    v69 = v99;
    if ( (_QWORD)v99 )
    {
      if ( *((_QWORD *)&v100 + 1) != *((_QWORD *)&v99 + 1) )
      {
        v70 = (*((_QWORD *)&v100 + 1) - *((_QWORD *)&v99 + 1)) / 0x18uLL;
        v71 = (_QWORD *)(*((_QWORD *)&v99 + 1) + 8LL);
        do
        {
          v72 = *(v71 - 1);
          if ( v72 )
            v15(*v71, v72, 1LL);
          v71 += 3;
          --v70;
        }
        while ( v70 );
      }
      if ( (_QWORD)v100 )
        _rust_dealloc(v69, 24 * v100, 8LL);
    }
  }
LABEL_115:
  v73 = v111;
  v111[2] = v89;
  *v73 = v88;
  return v73;
}
