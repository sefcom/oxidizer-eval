_QWORD *__fastcall uu_env::make_options(void *a1, __int128 *a2)
{
  void *v2; // r14
  char flag; // bp
  char v4; // r12
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64); // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 *v29; // rdi
  _QWORD *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 (__fastcall **v36)(); // rdx
  __int64 (__fastcall **v37)(); // r12
  __int128 v38; // kr20_16
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rbx
  bool v44; // zf
  __int128 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // r13
  __int64 v49; // r15
  __int64 v50; // rdi
  unsigned __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rcx
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int128 *v61; // r14
  __int64 v62; // rbp
  __int64 v63; // r14
  unsigned __int64 v64; // r12
  const char *v65; // rbx
  __int64 v66; // r15
  __int64 v67; // r12
  __int64 v68; // rax
  _QWORD *v69; // r13
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // rax
  __int128 *v75; // rdi
  __int64 *v76; // [rsp+0h] [rbp-338h]
  __int64 (__fastcall *v77)(); // [rsp+0h] [rbp-338h]
  __int64 v78; // [rsp+0h] [rbp-338h]
  __int64 v79; // [rsp+8h] [rbp-330h]
  _QWORD *v80; // [rsp+8h] [rbp-330h]
  __int64 v81; // [rsp+8h] [rbp-330h]
  _BYTE v82[48]; // [rsp+10h] [rbp-328h] BYREF
  __int64 v83; // [rsp+40h] [rbp-2F8h]
  __int64 v84; // [rsp+48h] [rbp-2F0h]
  __int128 v85; // [rsp+60h] [rbp-2D8h] BYREF
  __int128 v86; // [rsp+70h] [rbp-2C8h]
  __int64 v87; // [rsp+80h] [rbp-2B8h]
  unsigned __int64 v88; // [rsp+88h] [rbp-2B0h]
  const char *v89; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 (__fastcall *v90)(); // [rsp+98h] [rbp-2A0h]
  __int128 *v91; // [rsp+A0h] [rbp-298h]
  __int64 (__fastcall *v92)(); // [rsp+A8h] [rbp-290h]
  __int128 v93; // [rsp+B0h] [rbp-288h] BYREF
  _BYTE v94[24]; // [rsp+C0h] [rbp-278h]
  __int64 v95; // [rsp+D8h] [rbp-260h]
  void *dest; // [rsp+E0h] [rbp-258h]
  __int128 *v97; // [rsp+E8h] [rbp-250h]
  __int64 v98; // [rsp+F0h] [rbp-248h]
  __int64 v99; // [rsp+F8h] [rbp-240h]
  _QWORD *v100; // [rsp+100h] [rbp-238h]
  __int64 (__fastcall *v101)(__int64, __int128 *, __int64); // [rsp+108h] [rbp-230h]
  __int64 v102; // [rsp+110h] [rbp-228h] BYREF
  __int64 v103; // [rsp+118h] [rbp-220h]
  __int64 v104; // [rsp+120h] [rbp-218h]
  const char *v105; // [rsp+128h] [rbp-210h] BYREF
  __int64 v106; // [rsp+130h] [rbp-208h]
  __int64 v107; // [rsp+138h] [rbp-200h]
  _OWORD src[10]; // [rsp+140h] [rbp-1F8h] BYREF
  __int64 v109; // [rsp+1E0h] [rbp-158h]
  __int64 v110; // [rsp+1E8h] [rbp-150h]
  __int128 v111; // [rsp+1F0h] [rbp-148h] BYREF
  __int64 v112; // [rsp+200h] [rbp-138h]
  __int128 v113; // [rsp+208h] [rbp-130h] BYREF
  __int64 v114; // [rsp+218h] [rbp-120h]
  __int64 v115; // [rsp+220h] [rbp-118h] BYREF
  __int64 *v116; // [rsp+228h] [rbp-110h]
  unsigned __int64 v117; // [rsp+230h] [rbp-108h]
  __int128 *v118; // [rsp+238h] [rbp-100h]
  __int64 v119; // [rsp+240h] [rbp-F8h]
  __int64 (__fastcall *v120)(__int64, __int64, __int64, __int64); // [rsp+248h] [rbp-F0h]
  __int64 v121; // [rsp+250h] [rbp-E8h]
  _QWORD *v122; // [rsp+258h] [rbp-E0h]
  _QWORD v123[2]; // [rsp+260h] [rbp-D8h] BYREF
  _QWORD v124[2]; // [rsp+270h] [rbp-C8h] BYREF
  char v125; // [rsp+280h] [rbp-B8h]
  __int64 v126; // [rsp+288h] [rbp-B0h] BYREF
  __int128 v127; // [rsp+290h] [rbp-A8h]
  __int128 v128; // [rsp+2A0h] [rbp-98h]
  __int128 v129; // [rsp+2B0h] [rbp-88h]
  __int64 v130; // [rsp+2C0h] [rbp-78h]
  __int64 v131; // [rsp+2C8h] [rbp-70h] BYREF
  __int128 v132; // [rsp+2D0h] [rbp-68h]
  __int128 v133; // [rsp+2E0h] [rbp-58h]
  __int128 v134; // [rsp+2F0h] [rbp-48h]
  __int64 v135; // [rsp+300h] [rbp-38h]

  v2 = a1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aIgnoreEnvironm, 18LL);
  v4 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNull, 4LL) )
    v4 = 0;
  v97 = a2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v93, a2, aChdir_0, 5LL);
  v89 = aChdir_0;
  v90 = (__int64 (__fastcall *)())&byte_5;
  if ( (_DWORD)v93 != 2 )
  {
    *(_QWORD *)&v82[32] = *(_QWORD *)&v94[16];
    *(_OWORD *)&v82[16] = *(_OWORD *)v94;
    *(_OWORD *)v82 = v93;
    *(_QWORD *)&v85 = &v89;
    *((_QWORD *)&v85 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v86 = v82;
    *((_QWORD *)&v86 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &anon_a830a94d12fcec3b450b989354aeccce_2_llvm_15687275722422505163;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &v85;
    *((_QWORD *)&src[1] + 1) = 2LL;
    core::panicking::panic_fmt(src, &anon_a830a94d12fcec3b450b989354aeccce_4_llvm_15687275722422505163);
  }
  dest = a1;
  if ( *((_QWORD *)&v93 + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)&v93 + 1) + 8LL);
    v2 = *(void **)(*((_QWORD *)&v93 + 1) + 16LL);
  }
  else
  {
    v5 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v97, aFile, 4LL);
  v89 = aFile;
  v90 = (__int64 (__fastcall *)())&byte_4;
  if ( *(_QWORD *)&src[0] )
  {
    *(_QWORD *)&v94[16] = *((_QWORD *)&src[2] + 1);
    *(_OWORD *)v94 = *(_OWORD *)((char *)&src[1] + 8);
    v93 = *(_OWORD *)((char *)src + 8);
    *(_QWORD *)&v85 = &v89;
    *((_QWORD *)&v85 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v86 = &v93;
    *((_QWORD *)&v86 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v82 = &anon_a830a94d12fcec3b450b989354aeccce_2_llvm_15687275722422505163;
    *(_QWORD *)&v82[8] = 2LL;
    *(_QWORD *)&v82[32] = 0LL;
    *(_QWORD *)&v82[16] = &v85;
    *(_QWORD *)&v82[24] = 2LL;
    core::panicking::panic_fmt(v82, &anon_a830a94d12fcec3b450b989354aeccce_4_llvm_15687275722422505163);
  }
  *(_OWORD *)v82 = src[1];
  *(_OWORD *)&v82[16] = src[2];
  *(_OWORD *)&v82[32] = src[3];
  v83 = *(_QWORD *)&src[4];
  if ( *((_QWORD *)&src[0] + 1) )
  {
    v126 = *((_QWORD *)&src[0] + 1);
    v127 = *(_OWORD *)v82;
    v128 = *(_OWORD *)&v82[16];
    v129 = *(_OWORD *)&v82[32];
    v130 = v83;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v111, &v126);
  }
  else
  {
    *(_QWORD *)&v111 = 0LL;
    *((_QWORD *)&v111 + 1) = 8LL;
    v112 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v97, aUnset, 5LL);
  v89 = aUnset;
  v90 = (__int64 (__fastcall *)())&byte_5;
  if ( *(_QWORD *)&src[0] )
  {
    *(_QWORD *)&v94[16] = *((_QWORD *)&src[2] + 1);
    *(_OWORD *)v94 = *(_OWORD *)((char *)&src[1] + 8);
    v93 = *(_OWORD *)((char *)src + 8);
    *(_QWORD *)&v85 = &v89;
    *((_QWORD *)&v85 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v86 = &v93;
    *((_QWORD *)&v86 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v82 = &anon_a830a94d12fcec3b450b989354aeccce_2_llvm_15687275722422505163;
    *(_QWORD *)&v82[8] = 2LL;
    *(_QWORD *)&v82[32] = 0LL;
    *(_QWORD *)&v82[16] = &v85;
    *(_QWORD *)&v82[24] = 2LL;
    core::panicking::panic_fmt(v82, &anon_a830a94d12fcec3b450b989354aeccce_4_llvm_15687275722422505163);
  }
  *(_OWORD *)v82 = src[1];
  *(_OWORD *)&v82[16] = src[2];
  *(_OWORD *)&v82[32] = src[3];
  v83 = *(_QWORD *)&src[4];
  if ( *((_QWORD *)&src[0] + 1) )
  {
    v131 = *((_QWORD *)&src[0] + 1);
    v132 = *(_OWORD *)v82;
    v133 = *(_OWORD *)&v82[16];
    v134 = *(_OWORD *)&v82[32];
    v135 = v83;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v113, &v131);
  }
  else
  {
    *(_QWORD *)&v113 = 0LL;
    *((_QWORD *)&v113 + 1) = 8LL;
    v114 = 0LL;
  }
  v118 = &v93;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v93, v97, aArgv0, 5LL);
  v89 = aArgv0;
  v90 = (__int64 (__fastcall *)())&byte_5;
  if ( (_DWORD)v93 != 2 )
  {
    *(_QWORD *)&v82[32] = *(_QWORD *)&v94[16];
    *(_OWORD *)&v82[16] = *(_OWORD *)v94;
    *(_OWORD *)v82 = v93;
    *(_QWORD *)&v85 = &v89;
    *((_QWORD *)&v85 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v86 = v82;
    *((_QWORD *)&v86 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &anon_a830a94d12fcec3b450b989354aeccce_2_llvm_15687275722422505163;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &v85;
    *((_QWORD *)&src[1] + 1) = 2LL;
    core::panicking::panic_fmt(src, &anon_a830a94d12fcec3b450b989354aeccce_4_llvm_15687275722422505163);
  }
  v6 = *((_QWORD *)&v93 + 1);
  if ( *((_QWORD *)&v93 + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)&v93 + 1) + 8LL);
    v6 = *(_QWORD *)(*((_QWORD *)&v93 + 1) + 16LL);
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)&src[1] = v112;
  src[0] = v111;
  *(_OWORD *)((char *)&src[1] + 8) = v113;
  *((_QWORD *)&src[2] + 1) = v114;
  BYTE8(src[9]) = flag;
  BYTE9(src[9]) = v4;
  *((_QWORD *)&src[7] + 1) = v5;
  *(_QWORD *)&src[8] = v2;
  *(_QWORD *)&src[3] = 0LL;
  *((_QWORD *)&src[3] + 1) = 8LL;
  src[4] = 0LL;
  src[5] = 8uLL;
  *((_QWORD *)&src[8] + 1) = v7;
  *(_QWORD *)&src[9] = v6;
  *(_QWORD *)&src[6] = 0LL;
  *((_QWORD *)&src[6] + 1) = 8LL;
  *(_QWORD *)&src[7] = 0LL;
  v8 = (__int64)v97;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v82, v97, aIgnoreSignal, 13LL);
  v105 = aIgnoreSignal;
  v106 = 13LL;
  if ( *(_QWORD *)v82 )
    goto LABEL_121;
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))&v82[8];
  if ( *(_QWORD *)&v82[8] )
  {
    v101 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))&v82[24];
    v12 = *(_QWORD *)&v82[16];
    v13 = *(_QWORD *)&v82[40];
    v14 = *(_QWORD *)&v82[32];
    v15 = v83;
    v119 = v84;
    v120 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))&v82[8];
    while ( 1 )
    {
      if ( !v14 || v14 == v13 )
      {
        while ( v12 && (__int64 (__fastcall *)(__int64, __int128 *, __int64))v12 != v101 )
        {
          v16 = v12 + 24;
          v14 = *(_QWORD *)(v12 + 8);
          v10 = *(_QWORD *)(v12 + 16);
          v13 = v14 + 32 * v10;
          v12 += 24LL;
          if ( v10 )
            goto LABEL_30;
        }
        if ( !v15 || v15 == v119 )
          goto LABEL_72;
        v110 = v15 + 32;
        v14 = 0LL;
      }
      else
      {
        v16 = v12;
LABEL_30:
        v10 = v14;
        v110 = v15;
        v15 = v14;
        v14 += 32LL;
        v12 = v16;
      }
      v17 = v11(v15, v8, v9, v10);
      v10 = *(_QWORD *)(v17 + 16);
      if ( v10 )
        break;
LABEL_23:
      v15 = v110;
    }
    v124[0] = *(_QWORD *)(v17 + 8);
    v124[1] = v10;
    v125 = 0;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v115, v124);
    v18 = v117;
    v88 = v12;
    v121 = v14;
    v98 = v13;
    if ( v117 )
    {
      if ( v117 >> 59 )
      {
        v20 = 0LL;
        v19 = v109;
LABEL_127:
        alloc::raw_vec::handle_error(v20, v19);
      }
      v19 = 16 * v117;
      v20 = 8LL;
      v21 = _rust_alloc(16 * v117, 8LL);
      if ( !v21 )
        goto LABEL_127;
      v102 = v18;
      v109 = v21;
      v103 = v21;
      v104 = 0LL;
      v79 = v115;
      v22 = v116;
      v23 = &v116[2 * v18];
      v24 = 0LL;
      v76 = v116;
      do
      {
        v26 = v22[1];
        if ( v26 )
        {
          v27 = *v22;
          if ( v24 == v102 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v102);
          v25 = v103;
          v10 = 16 * v24;
          *(_QWORD *)(v103 + v10) = v27;
          *(_QWORD *)(v25 + v10 + 8) = v26;
          v9 = v24 + 1;
          v24 = v9;
          v104 = v9;
        }
        v22 += 2;
      }
      while ( v22 != v23 );
      v12 = v88;
      v28 = v79;
      v29 = v76;
      v13 = v98;
      if ( !v79 )
        goto LABEL_46;
    }
    else
    {
      v102 = 0LL;
      v103 = 8LL;
      v104 = 0LL;
      v28 = v115;
      v29 = v116;
      v109 = 8LL;
      v24 = 0LL;
      if ( !v115 )
        goto LABEL_46;
    }
    _rust_dealloc(v29, 16 * v28, 8LL);
    v24 = v104;
LABEL_46:
    v99 = v102;
    v100 = (_QWORD *)v103;
    if ( v24 )
    {
      v122 = &v100[2 * v24];
      v30 = v100;
      while ( 1 )
      {
        v31 = *v30;
        v80 = v30;
        v32 = v30[1];
        std::sys::os_str::bytes::Slice::to_str(v82, *v30);
        if ( *(_QWORD *)v82 )
          break;
        v33 = *(_QWORD *)&v82[8];
        v34 = *(_QWORD *)&v82[16];
        alloc::str::<impl str>::to_uppercase(&v89, *(_QWORD *)&v82[8], *(_QWORD *)&v82[16]);
        v77 = v90;
        v35 = uucore::features::signals::signal_by_name_or_value(v90, v91);
        v37 = v36;
        *(_QWORD *)&v93 = 0LL;
        *((_QWORD *)&v93 + 1) = v33;
        *(_QWORD *)v94 = v34;
        v94[8] = 1;
        v123[0] = &v93;
        v123[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v82 = &unk_10C568;
        *(_QWORD *)&v82[8] = 2LL;
        *(_QWORD *)&v82[32] = 0LL;
        *(_QWORD *)&v82[16] = v123;
        *(_QWORD *)&v82[24] = 1LL;
        alloc::fmt::format::format_inner(&v85, v82);
        v38 = v85;
        v39 = v86;
        v40 = _rust_alloc(32LL, 8LL);
        if ( !v40 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v41 = v40;
        *(_OWORD *)v40 = v38;
        *(_QWORD *)(v40 + 16) = v39;
        *(_DWORD *)(v40 + 24) = 125;
        if ( v35 )
        {
          v12 = v88;
          if ( v37 )
          {
            if ( (_QWORD)v38 )
              _rust_dealloc(*((_QWORD *)&v38 + 1), v38, 1LL);
            _rust_dealloc(v41, 32LL, 8LL);
            v41 = 0LL;
          }
          else
          {
            v37 = &off_10C5C0;
          }
        }
        else
        {
          v37 = &off_10C5C0;
          v12 = v88;
        }
        if ( v89 )
          _rust_dealloc(v77, v89, 1LL);
        if ( v41 )
        {
          v69 = dest;
          goto LABEL_98;
        }
        v30 += 2;
        v42 = *((_QWORD *)&src[6] + 1);
        v43 = *(_QWORD *)&src[7];
        v10 = 8LL * *(_QWORD *)&src[7];
        v9 = 0LL;
        v13 = v98;
        while ( v10 != v9 )
        {
          v44 = v37 == *(__int64 (__fastcall ***)())(*((_QWORD *)&src[6] + 1) + v9);
          v9 += 8LL;
          if ( v44 )
            goto LABEL_49;
        }
        if ( *(_QWORD *)&src[7] == *(_QWORD *)&src[6] )
        {
          alloc::raw_vec::RawVec<T,A>::grow_one(&src[6]);
          v42 = *((_QWORD *)&src[6] + 1);
          v30 = v80 + 2;
        }
        *(_QWORD *)(v42 + 8 * v43) = v37;
        *(_QWORD *)&src[7] = v43 + 1;
LABEL_49:
        if ( v30 == v122 )
          goto LABEL_68;
      }
      *(_QWORD *)&v93 = 1LL;
      *((_QWORD *)&v93 + 1) = v31;
      *(_QWORD *)v94 = v32;
      v94[8] = 1;
      *(_QWORD *)&v85 = &v93;
      *((_QWORD *)&v85 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v82 = &unk_10C568;
      *(_QWORD *)&v82[8] = 2LL;
      *(_QWORD *)&v82[32] = 0LL;
      *(_QWORD *)&v82[16] = &v85;
      *(_QWORD *)&v82[24] = 1LL;
      alloc::fmt::format::format_inner(&v105, v82);
      v65 = v105;
      v66 = v106;
      v67 = v107;
      v68 = _rust_alloc(32LL, 8LL);
      v69 = dest;
      if ( !v68 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v41 = v68;
      *(_QWORD *)v68 = v65;
      *(_QWORD *)(v68 + 8) = v66;
      *(_QWORD *)(v68 + 16) = v67;
      *(_DWORD *)(v68 + 24) = 1;
      v37 = &off_10C5C0;
LABEL_98:
      if ( v99 )
        _rust_dealloc(v100, 16 * v99, 8LL);
      goto LABEL_118;
    }
LABEL_68:
    v8 = v99;
    if ( v99 )
    {
      v8 = 16 * v99;
      _rust_dealloc(v100, 16 * v99, 8LL);
    }
    v11 = v120;
    v14 = v121;
    goto LABEL_23;
  }
LABEL_72:
  v45 = v97;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v82, v97, aVars, 4LL);
  v105 = aVars;
  v106 = 4LL;
  if ( *(_QWORD *)v82 )
  {
LABEL_121:
    v87 = *(_QWORD *)&v82[40];
    v86 = *(_OWORD *)&v82[24];
    v85 = *(_OWORD *)&v82[8];
    v89 = (const char *)&v105;
    v90 = <&T as core::fmt::Display>::fmt;
    v91 = &v85;
    v92 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v93 = &anon_a830a94d12fcec3b450b989354aeccce_2_llvm_15687275722422505163;
    v75 = v118;
    *((_QWORD *)v118 + 1) = 2LL;
    *((_QWORD *)v75 + 4) = 0LL;
    *((_QWORD *)v75 + 2) = &v89;
    *((_QWORD *)v75 + 3) = 2LL;
    core::panicking::panic_fmt(v75, &anon_a830a94d12fcec3b450b989354aeccce_4_llvm_15687275722422505163);
  }
  v101 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))&v82[8];
  if ( !*(_QWORD *)&v82[8] )
  {
LABEL_115:
    v69 = dest;
    memcpy(dest, src, 0xA0uLL);
    return v69;
  }
  v46 = *(_QWORD *)&v82[24];
  v47 = *(_QWORD *)&v82[16];
  v48 = *(_QWORD *)&v82[40];
  v49 = *(_QWORD *)&v82[32];
  v50 = v83;
  v98 = v84;
  v51 = 0LL;
  v78 = *(_QWORD *)&v82[24];
  while ( 1 )
  {
    if ( !v49 || v49 == v48 )
    {
      while ( v47 && v47 != v46 )
      {
        v57 = v47 + 24;
        v49 = *(_QWORD *)(v47 + 8);
        v58 = *(_QWORD *)(v47 + 16);
        v48 = v49 + 32 * v58;
        v47 += 24LL;
        if ( v58 )
          goto LABEL_83;
      }
      if ( !v50 || v50 == v98 )
      {
        v49 = 0LL;
        v56 = 0LL;
LABEL_101:
        v37 = &off_10C4F8;
        while ( 1 )
        {
          if ( !v49 || v49 == v48 )
          {
            v46 = v78;
            v71 = v56;
            while ( v47 && v47 != v78 )
            {
              v70 = v47 + 24;
              v49 = *(_QWORD *)(v47 + 8);
              v72 = *(_QWORD *)(v47 + 16);
              v48 = v49 + 32 * v72;
              v47 += 24LL;
              if ( v72 )
                goto LABEL_109;
            }
            if ( !v56 || v56 == v98 )
              goto LABEL_115;
            v56 += 32LL;
            v49 = 0LL;
          }
          else
          {
            v70 = v47;
            v71 = v56;
LABEL_109:
            v56 = v71;
            v71 = v49;
            v49 += 32LL;
            v47 = v70;
          }
          v73 = v101(v71, v45, v46);
          v45 = *(__int128 **)(v73 + 8);
          v41 = uu_env::parse_program_opt((__int64)src, (__int64)v45, *(_QWORD *)(v73 + 16));
          if ( v41 )
            goto LABEL_117;
        }
      }
      v59 = v50 + 32;
      v49 = 0LL;
    }
    else
    {
      v57 = v47;
LABEL_83:
      v59 = v50;
      v50 = v49;
      v49 += 32LL;
      v47 = v57;
    }
    v81 = v59;
    v60 = ((__int64 (__fastcall *)(__int64))v101)(v50);
    v61 = *(__int128 **)(v60 + 8);
    v62 = *(_QWORD *)(v60 + 16);
    if ( v62 != 1 || *(_BYTE *)v61 != 45 )
      break;
    BYTE8(src[9]) = 1;
LABEL_76:
    v46 = v78;
    v56 = v81;
    v50 = v81;
    if ( (v51 & 1) != 0 )
      goto LABEL_101;
  }
  v88 = v51;
  *(_QWORD *)&v85 = 0x8000000000000000LL;
  *((_QWORD *)&v85 + 1) = v61;
  *(_QWORD *)&v86 = v62;
  v45 = &v85;
  uu_env::native_int_str::NativeStr::split_once(&v93, &v85, "=");
  if ( (_QWORD)v93 != 0x8000000000000001LL )
  {
    *(_QWORD *)&v82[16] = *(_QWORD *)v94;
    *(_OWORD *)v82 = v93;
    *(_QWORD *)&v82[40] = v95;
    *(_OWORD *)&v82[24] = *(_OWORD *)&v94[8];
    v63 = *(_QWORD *)&src[4];
    v64 = v88;
    if ( *(_QWORD *)&src[4] == *(_QWORD *)&src[3] )
      alloc::raw_vec::RawVec<T,A>::grow_one(&src[3]);
    v52 = *((_QWORD *)&src[3] + 1);
    v53 = 48 * v63;
    v54 = *(_OWORD *)v82;
    v55 = *(_OWORD *)&v82[16];
    *(_OWORD *)(*((_QWORD *)&src[3] + 1) + v53 + 32) = *(_OWORD *)&v82[32];
    *(_OWORD *)(v52 + v53 + 16) = v55;
    *(_OWORD *)(v52 + v53) = v54;
    *(_QWORD *)&src[4] = v63 + 1;
    v51 = v64 & 0xFFFFFFFFFFFFFF00LL;
    goto LABEL_76;
  }
  v45 = v61;
  v41 = uu_env::parse_program_opt((__int64)src, (__int64)v61, v62);
  if ( !v41 )
  {
    v51 = v88 & 0xFFFFFFFFFFFFFF00LL | 1;
    goto LABEL_76;
  }
  v37 = &off_10C4F8;
LABEL_117:
  v69 = dest;
LABEL_118:
  v69[1] = v41;
  v69[2] = v37;
  *v69 = 0x8000000000000000LL;
  core::ptr::drop_in_place<uu_env::Options>(src);
  return v69;
}
