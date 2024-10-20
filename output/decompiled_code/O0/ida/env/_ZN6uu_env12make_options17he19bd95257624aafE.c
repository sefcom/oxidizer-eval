_QWORD *__fastcall uu_env::make_options(void *a1, __int64 a2)
{
  __int64 v2; // r13
  char flag; // bl
  char v4; // bp
  _BYTE *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  __int64 *v17; // r15
  __int64 *v18; // rbp
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(); // rax
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // r13
  _QWORD *v24; // r12
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 (__fastcall *v27)(); // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // r15
  const char ***v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // r15
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rbp
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _OWORD *v43; // rax
  _OWORD *v44; // rbx
  __int128 v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  bool v49; // zf
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 (__fastcall *v54)(); // rbx
  __int64 v55; // rbp
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r14
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdx
  _OWORD *v67; // rax
  unsigned __int64 v68; // rdx
  _OWORD *v69; // rax
  __int128 v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // rcx
  char **v74; // rsi
  _BYTE v75[72]; // [rsp+0h] [rbp-478h] BYREF
  const char **v76; // [rsp+48h] [rbp-430h] BYREF
  __int64 (__fastcall *v77)(); // [rsp+50h] [rbp-428h]
  unsigned __int64 v78; // [rsp+58h] [rbp-420h] BYREF
  __int64 (__fastcall *v79)(); // [rsp+60h] [rbp-418h]
  void *dest; // [rsp+68h] [rbp-410h]
  __int128 v81; // [rsp+70h] [rbp-408h] BYREF
  __m256i v82; // [rsp+80h] [rbp-3F8h] BYREF
  __int128 v83; // [rsp+A0h] [rbp-3D8h]
  char **v84; // [rsp+B8h] [rbp-3C0h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-3B8h]
  const char ***v86; // [rsp+C8h] [rbp-3B0h]
  __int64 v87; // [rsp+D0h] [rbp-3A8h]
  __int64 v88; // [rsp+D8h] [rbp-3A0h]
  const char *v89; // [rsp+E8h] [rbp-390h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-388h]
  unsigned __int64 v91; // [rsp+F8h] [rbp-380h]
  __int64 *v92; // [rsp+100h] [rbp-378h]
  unsigned __int64 v93; // [rsp+108h] [rbp-370h]
  unsigned __int64 v94; // [rsp+110h] [rbp-368h] BYREF
  __int64 (__fastcall *v95)(); // [rsp+118h] [rbp-360h]
  __int64 v96; // [rsp+120h] [rbp-358h]
  __int64 v97; // [rsp+128h] [rbp-350h]
  __int128 v98; // [rsp+130h] [rbp-348h] BYREF
  __int64 v99; // [rsp+140h] [rbp-338h]
  __int128 v100; // [rsp+148h] [rbp-330h] BYREF
  __int64 v101; // [rsp+158h] [rbp-320h]
  unsigned __int64 v102; // [rsp+160h] [rbp-318h] BYREF
  __int64 *v103; // [rsp+168h] [rbp-310h]
  __int64 v104; // [rsp+170h] [rbp-308h]
  char v105[8]; // [rsp+178h] [rbp-300h] BYREF
  __int64 v106; // [rsp+180h] [rbp-2F8h]
  __int64 v107; // [rsp+188h] [rbp-2F0h] BYREF
  _OWORD src[10]; // [rsp+190h] [rbp-2E8h] BYREF
  _BYTE v109[64]; // [rsp+230h] [rbp-248h] BYREF
  _QWORD v110[2]; // [rsp+270h] [rbp-208h] BYREF
  _QWORD v111[2]; // [rsp+280h] [rbp-1F8h] BYREF
  __int64 (__fastcall *v112)(__int64); // [rsp+290h] [rbp-1E8h]
  _OWORD v113[3]; // [rsp+298h] [rbp-1E0h] BYREF
  __int64 v114; // [rsp+2C8h] [rbp-1B0h]
  __int128 v115; // [rsp+2D0h] [rbp-1A8h]
  __int128 v116; // [rsp+2E0h] [rbp-198h]
  __int128 v117; // [rsp+2F0h] [rbp-188h]
  __int64 v118; // [rsp+300h] [rbp-178h]
  __int128 v119; // [rsp+310h] [rbp-168h]
  __int128 v120; // [rsp+320h] [rbp-158h]
  __int128 v121; // [rsp+330h] [rbp-148h]
  __int64 v122; // [rsp+340h] [rbp-138h]
  __int128 v123; // [rsp+350h] [rbp-128h]
  __int128 v124; // [rsp+360h] [rbp-118h]
  __int128 v125; // [rsp+370h] [rbp-108h]
  __int64 v126; // [rsp+380h] [rbp-F8h]
  __int128 v127; // [rsp+390h] [rbp-E8h]
  __int128 v128; // [rsp+3A0h] [rbp-D8h]
  __int128 v129; // [rsp+3B0h] [rbp-C8h]
  __int64 v130; // [rsp+3C0h] [rbp-B8h]
  _OWORD v131[3]; // [rsp+3D0h] [rbp-A8h] BYREF
  __int128 v132; // [rsp+400h] [rbp-78h]
  __int128 v133; // [rsp+418h] [rbp-60h] BYREF
  __int64 v134; // [rsp+428h] [rbp-50h]
  __int128 v135; // [rsp+430h] [rbp-48h] BYREF
  __int64 v136; // [rsp+440h] [rbp-38h]

  v2 = a2;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aIgnoreEnvironm, 18LL, &off_138FD0);
  v4 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNull, 4LL, &off_138FE8) )
    v4 = 0;
  v5 = v75;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v75, a2, aChdir_0, 5LL);
  v89 = aChdir_0;
  v90 = 5LL;
  if ( *(_QWORD *)v75 )
  {
    v83 = *(_OWORD *)&v75[56];
    v82 = *(__m256i *)&v75[24];
    v81 = *(_OWORD *)&v75[8];
    v76 = &v89;
    v77 = <&T as core::fmt::Display>::fmt;
    v78 = (unsigned __int64)&v81;
    v79 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v84 = &anon_7ad1a0bcc4c4596cd716f3abf0d71a00_9_llvm_3190145010565495471;
    v85 = 2LL;
    v88 = 0LL;
    v86 = &v76;
    v87 = 2LL;
    core::panicking::panic_fmt(&v84, &off_139000);
  }
  dest = a1;
  if ( *(_QWORD *)&v75[8] )
  {
    v6 = *(_QWORD *)(*(_QWORD *)&v75[8] + 8LL);
    if ( !v6 || (v5 = *(_BYTE **)(*(_QWORD *)&v75[8] + 16LL), (__int64)v5 < 0) )
LABEL_23:
      core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
  }
  else
  {
    v6 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v75, a2, aFile, 4LL);
  v89 = aFile;
  v90 = 4LL;
  if ( *(_QWORD *)v75 )
  {
    v83 = *(_OWORD *)&v75[56];
    v82 = *(__m256i *)&v75[24];
    v81 = *(_OWORD *)&v75[8];
    v76 = &v89;
    v77 = <&T as core::fmt::Display>::fmt;
    v78 = (unsigned __int64)&v81;
    v79 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v84 = &anon_7ad1a0bcc4c4596cd716f3abf0d71a00_9_llvm_3190145010565495471;
    v85 = 2LL;
    v88 = 0LL;
    v86 = &v76;
    v87 = 2LL;
    core::panicking::panic_fmt(&v84, &off_139018);
  }
  v7 = *(_QWORD *)&v75[8];
  v115 = *(_OWORD *)&v75[16];
  v116 = *(_OWORD *)&v75[32];
  v117 = *(_OWORD *)&v75[48];
  v118 = *(_QWORD *)&v75[64];
  if ( *(_QWORD *)&v75[8] )
  {
    *(_QWORD *)&v75[56] = v118;
    *(_OWORD *)&v75[40] = v117;
    *(_OWORD *)&v75[24] = v116;
    *(_OWORD *)&v75[8] = v115;
    *(_QWORD *)v75 = v7;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v98, v75);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v75, 0LL, 0LL);
    if ( *(_QWORD *)v75 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v75[8], *(_QWORD *)&v75[16]);
    v98 = *(_OWORD *)&v75[8];
    v99 = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v75, a2, aUnset, 5LL);
  v89 = aUnset;
  v90 = 5LL;
  if ( *(_QWORD *)v75 )
  {
    v83 = *(_OWORD *)&v75[56];
    v82 = *(__m256i *)&v75[24];
    v81 = *(_OWORD *)&v75[8];
    v76 = &v89;
    v77 = <&T as core::fmt::Display>::fmt;
    v78 = (unsigned __int64)&v81;
    v79 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v84 = &anon_7ad1a0bcc4c4596cd716f3abf0d71a00_9_llvm_3190145010565495471;
    v85 = 2LL;
    v88 = 0LL;
    v86 = &v76;
    v87 = 2LL;
    core::panicking::panic_fmt(&v84, &off_139030);
  }
  v8 = *(_QWORD *)&v75[8];
  v119 = *(_OWORD *)&v75[16];
  v120 = *(_OWORD *)&v75[32];
  v121 = *(_OWORD *)&v75[48];
  v122 = *(_QWORD *)&v75[64];
  if ( *(_QWORD *)&v75[8] )
  {
    *(_QWORD *)&v75[56] = v122;
    *(_OWORD *)&v75[40] = v121;
    *(_OWORD *)&v75[24] = v120;
    *(_OWORD *)&v75[8] = v119;
    *(_QWORD *)v75 = v8;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v100, v75);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v75, 0LL, 0LL);
    if ( *(_QWORD *)v75 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v75[8], *(_QWORD *)&v75[16]);
    v100 = *(_OWORD *)&v75[8];
    v101 = 0LL;
  }
  v9 = (unsigned __int64)aArgv0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v75, a2, aArgv0, 5LL);
  v89 = aArgv0;
  v90 = 5LL;
  if ( *(_QWORD *)v75 )
  {
    v83 = *(_OWORD *)&v75[56];
    v82 = *(__m256i *)&v75[24];
    v81 = *(_OWORD *)&v75[8];
    v76 = &v89;
    v77 = <&T as core::fmt::Display>::fmt;
    v78 = (unsigned __int64)&v81;
    v79 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v84 = &anon_7ad1a0bcc4c4596cd716f3abf0d71a00_9_llvm_3190145010565495471;
    v85 = 2LL;
    v88 = 0LL;
    v86 = &v76;
    v87 = 2LL;
    core::panicking::panic_fmt(&v84, &off_139048);
  }
  v10 = *(_QWORD *)&v75[8];
  if ( *(_QWORD *)&v75[8] )
  {
    v11 = *(_QWORD *)(*(_QWORD *)&v75[8] + 8LL);
    if ( !v11 )
      goto LABEL_23;
    v10 = *(_QWORD *)(*(_QWORD *)&v75[8] + 16LL);
    if ( v10 < 0 )
      goto LABEL_23;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)&src[1] = v99;
  src[0] = v98;
  *(_OWORD *)((char *)&src[1] + 8) = v100;
  *((_QWORD *)&src[2] + 1) = v101;
  BYTE8(src[9]) = flag;
  BYTE9(src[9]) = v4;
  *((_QWORD *)&src[7] + 1) = v6;
  *(_QWORD *)&src[8] = v5;
  *(_QWORD *)&src[3] = 0LL;
  *((_QWORD *)&src[3] + 1) = 8LL;
  src[4] = 0LL;
  src[5] = 8uLL;
  *((_QWORD *)&src[8] + 1) = v11;
  *(_QWORD *)&src[9] = v10;
  *(_QWORD *)&src[6] = 0LL;
  *((_QWORD *)&src[6] + 1) = 8LL;
  *(_QWORD *)&src[7] = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v75, a2, aIgnoreSignal, 13LL);
  v89 = aIgnoreSignal;
  v90 = 13LL;
  if ( *(_QWORD *)v75 )
  {
    v83 = *(_OWORD *)&v75[56];
    v82 = *(__m256i *)&v75[24];
    v81 = *(_OWORD *)&v75[8];
    v76 = &v89;
    v77 = <&T as core::fmt::Display>::fmt;
    v78 = (unsigned __int64)&v81;
    v79 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v84 = &anon_7ad1a0bcc4c4596cd716f3abf0d71a00_9_llvm_3190145010565495471;
    v74 = &off_139060;
    goto LABEL_149;
  }
  v123 = *(_OWORD *)&v75[16];
  v124 = *(_OWORD *)&v75[32];
  v125 = *(_OWORD *)&v75[48];
  v126 = *(_QWORD *)&v75[64];
  if ( !*(_QWORD *)&v75[8] )
  {
LABEL_87:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v75, v2, aVars, 4LL);
    v89 = aVars;
    v90 = 4LL;
    v24 = dest;
    if ( !*(_QWORD *)v75 )
    {
      v127 = *(_OWORD *)&v75[16];
      v128 = *(_OWORD *)&v75[32];
      v129 = *(_OWORD *)&v75[48];
      v130 = *(_QWORD *)&v75[64];
      if ( !*(_QWORD *)&v75[8] )
        goto LABEL_123;
      *(_QWORD *)v109 = *(_QWORD *)&v75[8];
      *(_OWORD *)&v109[8] = v127;
      *(_OWORD *)&v109[24] = v128;
      *(_OWORD *)&v109[40] = v129;
      *(_QWORD *)&v109[56] = v130;
      v93 = 0x8000000000000001LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v52 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v109[8]);
          if ( !v52 || (v53 = (*(__int64 (__fastcall **)(__int64))v109)(v52)) == 0 )
          {
LABEL_115:
            v132 = *(_OWORD *)&v109[48];
            v131[2] = *(_OWORD *)&v109[32];
            v131[1] = *(_OWORD *)&v109[16];
            v131[0] = *(_OWORD *)v109;
            v24 = dest;
            while ( 1 )
            {
              v63 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next((char *)v131 + 8);
              if ( !v63 )
                break;
              v64 = (*(__int64 (__fastcall **)(__int64))&v131[0])(v63);
              if ( !v64 )
                break;
              if ( !*((_QWORD *)&v132 + 1) )
                goto LABEL_137;
              --*((_QWORD *)&v132 + 1);
              v65 = *(_QWORD *)(v64 + 8);
              if ( !v65 )
                goto LABEL_23;
              v66 = *(_QWORD *)(v64 + 16);
              if ( v66 < 0 )
                goto LABEL_23;
              v67 = uu_env::parse_program_opt((__int64)src, v65, v66);
              v24 = dest;
              v44 = v67;
              if ( v67 )
              {
                v39 = v68;
                goto LABEL_134;
              }
            }
LABEL_123:
            memcpy(v24, src, 0xA0uLL);
            return v24;
          }
          if ( !*(_QWORD *)&v109[56] )
            goto LABEL_137;
          --*(_QWORD *)&v109[56];
          v54 = *(__int64 (__fastcall **)())(v53 + 8);
          if ( !v54 )
            goto LABEL_23;
          v55 = *(_QWORD *)(v53 + 16);
          if ( v55 < 0 )
            goto LABEL_23;
          if ( v55 != 1 || *(_BYTE *)v54 != 45 )
            break;
          BYTE8(src[9]) = 1;
        }
        v76 = (const char **)0x8000000000000000LL;
        v77 = v54;
        v78 = v55;
        uu_env::native_int_str::NativeStr::split_once(&v81, &v76, "=");
        if ( (_QWORD)v81 != v93 )
        {
          *(__m256i *)&v75[16] = v82;
          *(_OWORD *)v75 = v81;
          v58 = *(_QWORD *)&src[4];
          if ( *(_QWORD *)&src[4] == *(_QWORD *)&src[3] )
            alloc::raw_vec::RawVec<T,A>::grow_one(&src[3]);
          v59 = *((_QWORD *)&src[3] + 1);
          v60 = 48 * v58;
          v61 = *(_OWORD *)v75;
          v62 = *(_OWORD *)&v75[16];
          *(_OWORD *)(*((_QWORD *)&src[3] + 1) + v60 + 32) = *(_OWORD *)&v75[32];
          *(_OWORD *)(v59 + v60 + 16) = v62;
          *(_OWORD *)(v59 + v60) = v61;
          *(_QWORD *)&src[4] = v58 + 1;
          v44 = 0LL;
          v39 = v9 & 0xFFFFFFFFFFFFFF00LL;
          if ( v76 == (const char **)0x8000000000000000LL )
            goto LABEL_113;
LABEL_111:
          alloc::raw_vec::RawVec<T,A>::current_memory(&v84, &v76);
          if ( v85 )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v78, v84, v85, v86);
          goto LABEL_113;
        }
        v44 = uu_env::parse_program_opt((__int64)src, (__int64)v54, v55);
        v39 = v56;
        v57 = v9 & 0xFFFFFFFFFFFFFF00LL | 1;
        if ( !v44 )
          v39 = v57;
        if ( (_QWORD)v81 != 0x8000000000000000LL )
        {
          if ( (_QWORD)v81 == 0x8000000000000001LL )
            goto LABEL_106;
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v81);
        }
        if ( v82.m256i_i64[1] != 0x8000000000000000LL )
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v82.m256i_u64[1]);
LABEL_106:
        if ( v76 != (const char **)0x8000000000000000LL )
          goto LABEL_111;
LABEL_113:
        if ( v44 )
        {
          v24 = dest;
          goto LABEL_134;
        }
        v9 = v39;
        if ( (v39 & 1) != 0 )
          goto LABEL_115;
      }
    }
    v83 = *(_OWORD *)&v75[56];
    v82 = *(__m256i *)&v75[24];
    v81 = *(_OWORD *)&v75[8];
    v76 = &v89;
    v77 = <&T as core::fmt::Display>::fmt;
    v78 = (unsigned __int64)&v81;
    v79 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v84 = &anon_7ad1a0bcc4c4596cd716f3abf0d71a00_9_llvm_3190145010565495471;
    v74 = &off_139078;
LABEL_149:
    v85 = 2LL;
    v88 = 0LL;
    v86 = &v76;
    v87 = 2LL;
    core::panicking::panic_fmt(&v84, v74);
  }
  v114 = v126;
  v113[2] = v125;
  v113[1] = v124;
  v113[0] = v123;
  v112 = *(__int64 (__fastcall **)(__int64))&v75[8];
  v9 = (unsigned __int64)<core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next;
  v97 = a2;
  while ( 1 )
  {
    do
    {
      v12 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(v113);
      if ( !v12 )
        goto LABEL_87;
      v13 = v112(v12);
      if ( !v13 )
        goto LABEL_87;
      if ( !v114 )
LABEL_137:
        core::panicking::panic_const::panic_const_sub_overflow(&anon_1c6f9a5923c36a430a7b9bb24b2ecad8_2_llvm_11312083278200569487);
      --v114;
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v13 + 16);
        if ( v15 >= 0 )
          continue;
      }
      goto LABEL_23;
    }
    while ( !v15 );
    *(_QWORD *)v75 = v14;
    *(_QWORD *)&v75[8] = v15;
    v75[16] = 0;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v102, v75);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v75, v104, 0LL);
    if ( *(_QWORD *)v75 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v75[8], *(_QWORD *)&v75[16]);
    v94 = *(_QWORD *)&v75[8];
    v95 = *(__int64 (__fastcall **)())&v75[16];
    v96 = 0LL;
    v16 = v102;
    v17 = v103;
    v18 = &v103[2 * v104];
    v89 = (const char *)v103;
    v91 = v102;
    v90 = (__int64)v103;
    v92 = v18;
    v93 = (unsigned __int64)v103;
    if ( v104 )
    {
      v19 = 0LL;
      do
      {
        v22 = *v17;
        v23 = v17[1];
        v17 += 2;
        v90 = (__int64)v17;
        if ( v23 )
        {
          if ( v19 == v94 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v94);
          v20 = v95;
          v21 = 16 * v19;
          *(_QWORD *)((char *)v95 + v21) = v22;
          *(_QWORD *)((char *)v20 + v21 + 8) = v23;
          v96 = ++v19;
        }
      }
      while ( v17 != v18 );
    }
    else
    {
      v19 = 0LL;
    }
    if ( v16 )
    {
      v24 = dest;
      v2 = v97;
      if ( v16 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_140;
      v25 = 16 * v16;
      *(_QWORD *)v75 = v93;
      *(_QWORD *)&v75[8] = 8LL;
      v26 = 16LL;
    }
    else
    {
      v26 = 8LL;
      v25 = 0LL;
      v24 = dest;
      v2 = v97;
    }
    *(_QWORD *)&v75[v26] = v25;
    if ( *(_QWORD *)&v75[8] && *(_QWORD *)&v75[16] )
    {
      _rust_dealloc(*(_QWORD *)v75);
      v19 = v96;
    }
    v27 = v95;
    v28 = (unsigned __int64)v95 + 16 * v19;
    v76 = (const char **)v95;
    v78 = v94;
    v79 = (__int64 (__fastcall *)())v28;
    if ( v19 )
      break;
    if ( v28 < (unsigned __int64)v95 )
      goto LABEL_142;
LABEL_80:
    if ( v78 )
    {
      v9 = (unsigned __int64)<core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next;
      if ( v78 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_140;
      v50 = 16 * v78;
      *(_QWORD *)v75 = v76;
      *(_QWORD *)&v75[8] = 8LL;
      v51 = 16LL;
    }
    else
    {
      v51 = 8LL;
      v50 = 0LL;
      v9 = (unsigned __int64)<core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next;
    }
    *(_QWORD *)&v75[v51] = v50;
    if ( *(_QWORD *)&v75[8] )
    {
      if ( *(_QWORD *)&v75[16] )
        _rust_dealloc(*(_QWORD *)v75);
    }
  }
  while ( 1 )
  {
    v77 = (__int64 (__fastcall *)())((char *)v27 + 16);
    v29 = *(_QWORD *)v27;
    if ( !*(_QWORD *)v27 )
    {
      if ( v28 < (unsigned __int64)v27 + 16 )
        goto LABEL_142;
      goto LABEL_80;
    }
    v30 = (const char ***)*((_QWORD *)v27 + 1);
    std::sys::os_str::bytes::Slice::to_str(v75, *(_QWORD *)v27, v30);
    if ( *(_QWORD *)v75 )
      break;
    v35 = *(_QWORD *)&v75[8];
    if ( !*(_QWORD *)&v75[8] )
      break;
    v36 = *(_QWORD *)&v75[16];
    alloc::str::<impl str>::to_uppercase(v105, *(_QWORD *)&v75[8], *(_QWORD *)&v75[16]);
    if ( !v106 || v107 < 0 )
      goto LABEL_23;
    v37 = uucore::features::signals::signal_by_name_or_value();
    v39 = v38;
    *(_QWORD *)&v81 = 0LL;
    *((_QWORD *)&v81 + 1) = v35;
    v82.m256i_i64[0] = v36;
    v82.m256i_i8[8] = 1;
    v111[0] = &v81;
    v111[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v75 = &unk_138D80;
    *(_QWORD *)&v75[8] = 2LL;
    *(_QWORD *)&v75[16] = v111;
    *(_QWORD *)&v75[24] = 1LL;
    *(_QWORD *)&v75[32] = 0LL;
    ((void (__fastcall *)(__int128 *, _BYTE *, unsigned __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
      &v135,
      v75,
      v38,
      v40,
      v41,
      v42);
    *(_QWORD *)&v75[16] = v136;
    *(_OWORD *)v75 = v135;
    *(_DWORD *)&v75[24] = 125;
    v43 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    v44 = v43;
    if ( !v43 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v45 = *(_OWORD *)v75;
    v43[1] = *(_OWORD *)&v75[16];
    *v43 = v45;
    if ( v37 && v39 )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(v75, v43);
      if ( *(_QWORD *)&v75[8] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          v44 + 1,
          *(_QWORD *)v75,
          *(_QWORD *)&v75[8],
          *(_QWORD *)&v75[16]);
      _rust_dealloc(v44);
      v44 = 0LL;
    }
    else
    {
      v39 = (unsigned __int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
    }
    alloc::raw_vec::RawVec<T,A>::current_memory(v75, v105);
    if ( *(_QWORD *)&v75[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v107,
        *(_QWORD *)v75,
        *(_QWORD *)&v75[8],
        *(_QWORD *)&v75[16]);
    if ( v44 )
      goto LABEL_126;
    v46 = *((_QWORD *)&src[6] + 1);
    if ( !*((_QWORD *)&src[6] + 1)
      || (BYTE8(src[6]) & 7) != 0
      || (v47 = *(_QWORD *)&src[7], *(_QWORD *)&src[7] > 0xFFFFFFFFFFFFFFFuLL) )
    {
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    }
    v48 = 0LL;
    while ( 8LL * *(_QWORD *)&src[7] != v48 )
    {
      v49 = *(_QWORD *)(*((_QWORD *)&src[6] + 1) + v48) == v39;
      v48 += 8LL;
      if ( v49 )
        goto LABEL_54;
    }
    if ( *(_QWORD *)&src[7] == *(_QWORD *)&src[6] )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&src[6]);
      v46 = *((_QWORD *)&src[6] + 1);
    }
    *(_QWORD *)(v46 + 8 * v47) = v39;
    *(_QWORD *)&src[7] = v47 + 1;
LABEL_54:
    v27 = v77;
    v28 = (unsigned __int64)v79;
    if ( v77 == v79 )
      goto LABEL_80;
  }
  v84 = (char **)(&dword_0 + 1);
  v85 = v29;
  v86 = v30;
  LOBYTE(v87) = 1;
  v110[0] = &v84;
  v110[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)v75 = &unk_138D80;
  *(_QWORD *)&v75[8] = 2LL;
  *(_QWORD *)&v75[16] = v110;
  *(_QWORD *)&v75[24] = 1LL;
  *(_QWORD *)&v75[32] = 0LL;
  ((void (__fastcall *)(__int128 *, _BYTE *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
    &v133,
    v75,
    v31,
    v32,
    v33,
    v34);
  *(_QWORD *)&v75[16] = v134;
  *(_OWORD *)v75 = v133;
  *(_DWORD *)&v75[24] = 1;
  v69 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v44 = v69;
  if ( !v69 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v70 = *(_OWORD *)v75;
  v69[1] = *(_OWORD *)&v75[16];
  *v69 = v70;
  v39 = (unsigned __int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
LABEL_126:
  if ( (unsigned __int64)v79 < (unsigned __int64)v77 )
LABEL_142:
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_3_llvm_18365996230866053775, 71LL);
  if ( v78 )
  {
    if ( v78 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v71 = 16 * v78;
      *(_QWORD *)v75 = v76;
      *(_QWORD *)&v75[8] = 8LL;
      v72 = 16LL;
      goto LABEL_131;
    }
LABEL_140:
    core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
  }
  v72 = 8LL;
  v71 = 0LL;
LABEL_131:
  *(_QWORD *)&v75[v72] = v71;
  if ( *(_QWORD *)&v75[8] && *(_QWORD *)&v75[16] )
    _rust_dealloc(*(_QWORD *)v75);
LABEL_134:
  v24[1] = v44;
  v24[2] = v39;
  *v24 = 0x8000000000000000LL;
  core::ptr::drop_in_place<uu_env::Options>(src);
  return v24;
}
