__m128i *__fastcall uu_split::strategy::Strategy::from(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v4; // bl
  char v5; // bp
  char v6; // r13
  char v7; // al
  __int64 v8; // rbx
  __m128i *v9; // rbp
  const char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  const void *v16; // r13
  size_t v17; // r15
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  const void **v20; // r14
  const void *v21; // rbx
  const char ***v22; // r12
  __int64 v23; // rax
  char *v24; // r12
  const void *v26; // rbx
  unsigned __int8 *v27; // rbp
  const void *v28; // rax
  size_t v29; // rdx
  _QWORD *v30; // r12
  const void *v31; // rbx
  unsigned __int8 *v32; // rbp
  const void *v33; // rax
  size_t v34; // rdx
  unsigned __int8 *v35; // rbx
  const char ***v36; // r15
  __int64 v37; // rax
  int v38; // eax
  unsigned __int8 *v39; // rbx
  const char ***v40; // r15
  __int64 v41; // rax
  const char *v42; // rcx
  int v43; // eax
  unsigned __int8 *v44; // rbx
  const char ***v45; // r14
  __int64 v46; // rax
  __int64 v47; // r14
  char v48; // r13
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  char *v52; // rax
  const char *v53; // rcx
  unsigned __int8 *v54; // rbx
  const char ***v55; // r15
  __int64 v56; // rax
  const void *v57; // rbx
  const char ***v58; // r12
  __int64 v59; // rax
  const char *v60; // rcx
  __m128i v61; // xmm0
  const char *v62; // rcx
  const char *v63; // rcx
  unsigned __int8 *v64; // rbx
  const char ***v65; // r14
  __int64 v66; // rax
  unsigned __int8 *v67; // rbx
  const char ***v68; // r12
  _QWORD *v69; // r14
  __int64 v70; // rax
  const char *v71; // rcx
  unsigned __int8 *v72; // rbx
  const char ***v73; // r12
  _QWORD *v74; // r14
  __int64 v75; // rax
  const char *v76; // rcx
  const char *v77; // rcx
  const char *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  _BYTE v81[40]; // [rsp+8h] [rbp-290h] BYREF
  __int128 v82; // [rsp+30h] [rbp-268h]
  __int128 v83; // [rsp+40h] [rbp-258h]
  const char **v84; // [rsp+50h] [rbp-248h] BYREF
  __int64 (__fastcall *v85)(); // [rsp+58h] [rbp-240h]
  __m128i v86; // [rsp+60h] [rbp-238h]
  __m128i v87; // [rsp+70h] [rbp-228h] BYREF
  char ***v88; // [rsp+80h] [rbp-218h] BYREF
  __int64 (__fastcall *v89)(); // [rsp+88h] [rbp-210h]
  __int128 v90; // [rsp+90h] [rbp-208h] BYREF
  __m128i v91; // [rsp+A0h] [rbp-1F8h] BYREF
  __int128 v92; // [rsp+B0h] [rbp-1E8h]
  __int128 v93; // [rsp+C0h] [rbp-1D8h]
  char **v94; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v95; // [rsp+D8h] [rbp-1C0h]
  const char ***v96; // [rsp+E0h] [rbp-1B8h]
  __int64 v97; // [rsp+E8h] [rbp-1B0h]
  __int64 v98; // [rsp+F0h] [rbp-1A8h]
  const char *v99; // [rsp+100h] [rbp-198h] BYREF
  __m128i v100; // [rsp+108h] [rbp-190h] BYREF
  __int64 v101; // [rsp+118h] [rbp-180h]
  const char *v102; // [rsp+120h] [rbp-178h] BYREF
  __m128i v103; // [rsp+128h] [rbp-170h] BYREF
  __m128i v104; // [rsp+138h] [rbp-160h] BYREF
  __int64 v105; // [rsp+148h] [rbp-150h]
  unsigned __int64 v106; // [rsp+150h] [rbp-148h] BYREF
  const void **v107; // [rsp+158h] [rbp-140h]
  unsigned __int64 v108; // [rsp+160h] [rbp-138h]
  __int64 v109; // [rsp+168h] [rbp-130h] BYREF
  __m128i v110; // [rsp+170h] [rbp-128h] BYREF
  __m128i v111; // [rsp+180h] [rbp-118h] BYREF
  __m128i v112; // [rsp+190h] [rbp-108h] BYREF
  __m128i v113; // [rsp+1A0h] [rbp-F8h] BYREF
  __m128i v114; // [rsp+1B0h] [rbp-E8h] BYREF
  __m128i v115; // [rsp+1C0h] [rbp-D8h] BYREF
  __m128i v116; // [rsp+1D0h] [rbp-C8h] BYREF
  __m128i v117; // [rsp+1E0h] [rbp-B8h] BYREF
  __m128i v118; // [rsp+1F0h] [rbp-A8h] BYREF
  __m128i v119; // [rsp+200h] [rbp-98h] BYREF
  __int64 v120; // [rsp+210h] [rbp-88h]
  __int64 v121; // [rsp+218h] [rbp-80h] BYREF
  __int64 v122; // [rsp+220h] [rbp-78h]
  __int64 v123; // [rsp+228h] [rbp-70h]
  __m128i v124; // [rsp+238h] [rbp-60h] BYREF
  __int64 v125; // [rsp+248h] [rbp-50h]
  char *v126; // [rsp+250h] [rbp-48h] BYREF
  __m128i v127[4]; // [rsp+258h] [rbp-40h] BYREF

  v87.m128i_i64[0] = a1;
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_4f04ac8a3ef9e065a432e2bbb7f80309_8_llvm_15963415444986902846,
         5LL,
         &off_136468);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_4f04ac8a3ef9e065a432e2bbb7f80309_6_llvm_15963415444986902846,
         5LL,
         &off_136480);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_4f04ac8a3ef9e065a432e2bbb7f80309_7_llvm_15963415444986902846,
         10LL,
         &off_136498);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_4f04ac8a3ef9e065a432e2bbb7f80309_11_llvm_15963415444986902846,
         6LL,
         &off_1364B0);
  if ( *a3 == 0x8000000000000000LL )
  {
    if ( v4 == 2 )
    {
      if ( v5 != 2 && v6 != 2 && v7 != 2 )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          v81,
          a2,
          anon_4f04ac8a3ef9e065a432e2bbb7f80309_8_llvm_15963415444986902846,
          5LL);
        v102 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_8_llvm_15963415444986902846;
        v103.m128i_i64[0] = 5LL;
        if ( !*(_QWORD *)v81 )
        {
          v8 = *(_QWORD *)&v81[8];
          if ( *(_QWORD *)&v81[8] )
          {
            v9 = (__m128i *)v87.m128i_i64[0];
            if ( *(_QWORD *)(*(_QWORD *)&v81[8] + 8LL) && *(__int64 *)(*(_QWORD *)&v81[8] + 16LL) >= 0 )
            {
              *(_WORD *)&v81[32] = 0;
              v81[34] = 0;
              *(_QWORD *)v81 = 0LL;
              *(_QWORD *)&v81[16] = 0LL;
              uucore::parser::parse_size::Parser::parse_u64_max(&v99, v81);
              v10 = v99;
              if ( v99 == (_BYTE *)&dword_0 + 3 )
              {
                v11 = v100.m128i_i64[0];
                if ( v100.m128i_i64[0] )
                {
                  v9->m128i_i64[1] = 6LL;
LABEL_62:
                  v9[1].m128i_i64[0] = v11;
                  v9->m128i_i64[0] = 4LL;
                  return v9;
                }
                <alloc::string::String as core::clone::Clone>::clone(&v104, v8);
                v9->m128i_i64[0] = 0LL;
                goto LABEL_68;
              }
              v9->m128i_i64[0] = 0LL;
              goto LABEL_64;
            }
LABEL_173:
            core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
          }
LABEL_175:
          core::option::unwrap_failed(&off_136510);
        }
LABEL_174:
        v93 = v83;
        v92 = v82;
        v91 = *(__m128i *)&v81[24];
        v90 = *(_OWORD *)&v81[8];
        v84 = &v102;
        v85 = <&T as core::fmt::Display>::fmt;
        v86.m128i_i64[0] = (__int64)&v90;
        v86.m128i_i64[1] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v94 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
        v95 = 2LL;
        v98 = 0LL;
        v96 = &v84;
        v97 = 2LL;
        core::panicking::panic_fmt(&v94, &off_1364F8);
      }
      goto LABEL_34;
    }
    if ( v5 == 2 )
    {
      if ( v6 != 2 && v7 != 2 )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          v81,
          a2,
          anon_4f04ac8a3ef9e065a432e2bbb7f80309_6_llvm_15963415444986902846,
          5LL);
        v102 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_6_llvm_15963415444986902846;
        v103.m128i_i64[0] = 5LL;
        if ( *(_QWORD *)v81 )
          goto LABEL_174;
        v13 = *(_QWORD *)&v81[8];
        if ( !*(_QWORD *)&v81[8] )
          goto LABEL_175;
        v9 = (__m128i *)v87.m128i_i64[0];
        if ( !*(_QWORD *)(*(_QWORD *)&v81[8] + 8LL) || *(__int64 *)(*(_QWORD *)&v81[8] + 16LL) < 0 )
          goto LABEL_173;
        *(_WORD *)&v81[32] = 0;
        v81[34] = 0;
        *(_QWORD *)v81 = 0LL;
        *(_QWORD *)&v81[16] = 0LL;
        uucore::parser::parse_size::Parser::parse_u64_max(&v99, v81);
        v10 = v99;
        if ( v99 == (_BYTE *)&dword_0 + 3 )
        {
          v11 = v100.m128i_i64[0];
          if ( v100.m128i_i64[0] )
          {
            v9->m128i_i64[1] = 7LL;
            goto LABEL_62;
          }
          goto LABEL_67;
        }
        goto LABEL_63;
      }
      goto LABEL_34;
    }
    if ( v6 == 2 )
    {
      if ( v7 != 2 )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          v81,
          a2,
          anon_4f04ac8a3ef9e065a432e2bbb7f80309_7_llvm_15963415444986902846,
          10LL);
        v102 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_7_llvm_15963415444986902846;
        v103.m128i_i64[0] = 10LL;
        if ( *(_QWORD *)v81 )
          goto LABEL_174;
        v13 = *(_QWORD *)&v81[8];
        if ( !*(_QWORD *)&v81[8] )
          goto LABEL_175;
        v9 = (__m128i *)v87.m128i_i64[0];
        if ( !*(_QWORD *)(*(_QWORD *)&v81[8] + 8LL) || *(__int64 *)(*(_QWORD *)&v81[8] + 16LL) < 0 )
          goto LABEL_173;
        *(_WORD *)&v81[32] = 0;
        v81[34] = 0;
        *(_QWORD *)v81 = 0LL;
        *(_QWORD *)&v81[16] = 0LL;
        uucore::parser::parse_size::Parser::parse_u64_max(&v99, v81);
        v10 = v99;
        if ( v99 == (_BYTE *)&dword_0 + 3 )
        {
          v11 = v100.m128i_i64[0];
          if ( v100.m128i_i64[0] )
          {
            v9->m128i_i64[1] = 8LL;
            goto LABEL_62;
          }
LABEL_67:
          <alloc::string::String as core::clone::Clone>::clone(&v104, v13);
          v9->m128i_i64[0] = 1LL;
LABEL_68:
          v9->m128i_i64[1] = 1LL;
          v9[1] = _mm_loadu_si128(&v104);
          v15 = v105;
          goto LABEL_69;
        }
LABEL_63:
        v9->m128i_i64[0] = 1LL;
LABEL_64:
        v9->m128i_i64[1] = (__int64)v10;
        v9[1] = _mm_loadu_si128(&v100);
        v15 = v101;
        goto LABEL_69;
      }
LABEL_34:
      v9 = (__m128i *)v87.m128i_i64[0];
      *(_QWORD *)v87.m128i_i64[0] = 3LL;
      return v9;
    }
    v9 = (__m128i *)v87.m128i_i64[0];
    if ( v7 != 2 )
    {
      *(_QWORD *)(v87.m128i_i64[0] + 8) = 6LL;
      v9[1].m128i_i64[0] = 1000LL;
      v9->m128i_i64[0] = 4LL;
      return v9;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      v81,
      a2,
      anon_4f04ac8a3ef9e065a432e2bbb7f80309_11_llvm_15963415444986902846,
      6LL);
    v99 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_11_llvm_15963415444986902846;
    v100.m128i_i64[0] = 6LL;
    if ( *(_QWORD *)v81 )
    {
      v93 = v83;
      v92 = v82;
      v91 = *(__m128i *)&v81[24];
      v90 = *(_OWORD *)&v81[8];
      v84 = &v99;
      v85 = <&T as core::fmt::Display>::fmt;
      v86.m128i_i64[0] = (__int64)&v90;
      v86.m128i_i64[1] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v94 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v95 = 2LL;
      v98 = 0LL;
      v96 = &v84;
      v97 = 2LL;
      core::panicking::panic_fmt(&v94, &off_1364C8);
    }
    if ( !*(_QWORD *)&v81[8] )
      core::option::unwrap_failed(&off_1364E0);
    v16 = *(const void **)(*(_QWORD *)&v81[8] + 8LL);
    if ( !v16 )
      goto LABEL_173;
    v17 = *(_QWORD *)(*(_QWORD *)&v81[8] + 16LL);
    if ( (v17 & 0x8000000000000000LL) != 0LL )
      goto LABEL_173;
    *(_DWORD *)v81 = 0;
    core::char::methods::encode_utf8_raw(47LL, v81, 4LL);
    if ( v18 >= 0x100 )
      core::result::unwrap_failed(
        "char len should be less than 255\x01",
        32LL,
        &v90,
        &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
        &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
    v19 = *(_DWORD *)v81;
    *(_QWORD *)v81 = 0LL;
    *(_QWORD *)&v81[8] = v17;
    *(_QWORD *)&v81[16] = v16;
    *(_QWORD *)&v81[24] = v17;
    *(_QWORD *)&v81[32] = 0LL;
    *(_QWORD *)&v82 = v17;
    *((_QWORD *)&v82 + 1) = v19 | 0x2F00000000LL;
    LOBYTE(v83) = v18;
    WORD4(v83) = 1;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v106, v81);
    v20 = v107;
    if ( !v107 || ((unsigned __int8)v107 & 7) != 0 || v108 >> 59 )
      goto LABEL_173;
    if ( v108 != 3 )
    {
      if ( v108 != 2 )
      {
        if ( v108 == 1 )
        {
          v21 = *v107;
          v22 = (const char ***)v107[1];
          LOWORD(v92) = 0;
          BYTE2(v92) = 0;
          *(_QWORD *)&v90 = 0LL;
          v91.m128i_i64[0] = 0LL;
          uucore::parser::parse_size::Parser::parse(&v84, &v90, v21, v22);
          v23 = (__int64)v84;
          if ( v84 == (const char **)((char *)&dword_0 + 3) )
          {
            if ( !v86.m128i_i64[1] )
            {
              v24 = (char *)v86.m128i_i64[0];
              goto LABEL_107;
            }
            v94 = 0LL;
            v95 = (__int64)v21;
            v96 = v22;
            LOBYTE(v97) = 1;
            v88 = &v94;
            v89 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
            *(_QWORD *)&v81[8] = 2LL;
            *(_QWORD *)&v81[32] = 0LL;
            *(_QWORD *)&v81[16] = &v88;
            *(_QWORD *)&v81[24] = 1LL;
            alloc::fmt::format(&v99, v81);
            v42 = v99;
            v110 = v100;
            v23 = 2LL;
          }
          else
          {
            v42 = (const char *)v85;
            v110 = v86;
          }
          *(_QWORD *)v81 = v23;
          *(_QWORD *)&v81[8] = v42;
          *(__m128i *)&v81[16] = _mm_load_si128(&v110);
          uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v20, (__int64)v81);
          v24 = (char *)*((_QWORD *)&v90 + 1);
          v49 = v90;
          if ( (_QWORD)v90 == 2LL )
          {
LABEL_107:
            v9 = (__m128i *)v87.m128i_i64[0];
            if ( v24 )
            {
              v49 = 2LL;
              v48 = 1;
              v47 = 0LL;
              goto LABEL_94;
            }
            goto LABEL_91;
          }
          goto LABEL_163;
        }
LABEL_91:
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(v81, v17, 0LL);
        v47 = *(_QWORD *)&v81[8];
        if ( *(_QWORD *)v81 )
          alloc::raw_vec::handle_error(*(_QWORD *)&v81[8], *(_QWORD *)&v81[16]);
        v24 = *(char **)&v81[16];
        core::intrinsics::copy_nonoverlapping::precondition_check(v16, *(_QWORD *)&v81[16], 1LL, 1LL, v17);
        memcpy(v24, v16, v17);
        v48 = 0;
        v49 = 0LL;
        goto LABEL_93;
      }
      v26 = *v107;
      v27 = (unsigned __int8 *)v107[1];
      *(_DWORD *)v81 = 0;
      v28 = (const void *)core::char::methods::encode_utf8_raw(108LL, v81, 4LL);
      v30 = v20 + 2;
      if ( v29 > (unsigned __int64)v27 || bcmp(v28, v26, v29) )
      {
        v31 = *v20;
        v32 = (unsigned __int8 *)v20[1];
        *(_DWORD *)v81 = 0;
        v33 = (const void *)core::char::methods::encode_utf8_raw(114LL, v81, 4LL);
        if ( v34 > (unsigned __int64)v32 || bcmp(v33, v31, v34) )
        {
          v35 = (unsigned __int8 *)v20[2];
          v36 = (const char ***)v20[3];
          LOWORD(v92) = 0;
          BYTE2(v92) = 0;
          *(_QWORD *)&v90 = 0LL;
          v91.m128i_i64[0] = 0LL;
          uucore::parser::parse_size::Parser::parse(&v84, &v90, v35, v36);
          v37 = (__int64)v84;
          if ( v84 == (const char **)((char *)&dword_0 + 3) )
          {
            if ( !v86.m128i_i64[1] )
            {
              v17 = v86.m128i_i64[0];
              goto LABEL_116;
            }
            v94 = 0LL;
            v95 = (__int64)v35;
            v96 = v36;
            LOBYTE(v97) = 1;
            v88 = &v94;
            v89 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
            *(_QWORD *)&v81[8] = 2LL;
            *(_QWORD *)&v81[32] = 0LL;
            *(_QWORD *)&v81[16] = &v88;
            *(_QWORD *)&v81[24] = 1LL;
            alloc::fmt::format(&v99, v81);
            v53 = v99;
            v111 = v100;
            v37 = 2LL;
          }
          else
          {
            v53 = (const char *)v85;
            v111 = v86;
          }
          *(_QWORD *)v81 = v37;
          *(_QWORD *)&v81[8] = v53;
          *(__m128i *)&v81[16] = _mm_load_si128(&v111);
          uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v20 + 2, (__int64)v81);
          v24 = (char *)*((_QWORD *)&v90 + 1);
          v49 = v90;
          if ( (_QWORD)v90 != 2LL )
            goto LABEL_163;
          v17 = *((_QWORD *)&v90 + 1);
LABEL_116:
          v57 = *v20;
          v58 = (const char ***)v20[1];
          LOWORD(v92) = 0;
          BYTE2(v92) = 0;
          *(_QWORD *)&v90 = 0LL;
          v91.m128i_i64[0] = 0LL;
          uucore::parser::parse_size::Parser::parse(&v84, &v90, v57, v58);
          v59 = (__int64)v84;
          if ( v84 == (const char **)((char *)&dword_0 + 3) )
          {
            if ( !v86.m128i_i64[1] )
            {
              v24 = (char *)v86.m128i_i64[0];
LABEL_122:
              v9 = (__m128i *)v87.m128i_i64[0];
              if ( (unsigned __int64)(v24 - 1) >= v17 )
              {
                <T as alloc::string::ToString>::to_string(&v126, v20);
                v24 = v126;
                v49 = 1LL;
                v61 = _mm_loadu_si128(v127);
                goto LABEL_164;
              }
              v47 = 1LL;
              goto LABEL_155;
            }
            v94 = 0LL;
            v95 = (__int64)v57;
            v96 = v58;
            LOBYTE(v97) = 1;
            v88 = &v94;
            v89 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
            *(_QWORD *)&v81[8] = 2LL;
            *(_QWORD *)&v81[32] = 0LL;
            *(_QWORD *)&v81[16] = &v88;
            *(_QWORD *)&v81[24] = 1LL;
            alloc::fmt::format(&v99, v81);
            v60 = v99;
            v112 = v100;
            v59 = 2LL;
          }
          else
          {
            v60 = (const char *)v85;
            v112 = v86;
          }
          *(_QWORD *)v81 = v59;
          *(_QWORD *)&v81[8] = v60;
          *(__m128i *)&v81[16] = _mm_load_si128(&v112);
          uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v20, (__int64)v81);
          v24 = (char *)*((_QWORD *)&v90 + 1);
          v49 = v90;
          if ( (_QWORD)v90 == 2LL )
            goto LABEL_122;
LABEL_163:
          v61 = _mm_loadu_si128(&v91);
LABEL_164:
          v9 = (__m128i *)v87.m128i_i64[0];
          if ( v106 )
          {
            if ( v106 >> 60 )
              goto LABEL_179;
            v79 = 16 * v106;
            *(_QWORD *)v81 = v107;
            *(_QWORD *)&v81[8] = 8LL;
            v80 = 16LL;
          }
          else
          {
            v80 = 8LL;
            v79 = 0LL;
          }
          *(_QWORD *)&v81[v80] = v79;
          if ( *(_QWORD *)&v81[8] && *(_QWORD *)&v81[16] )
          {
            v87 = v61;
            _rust_dealloc(*(_QWORD *)v81);
            v61 = _mm_load_si128(&v87);
          }
          v52 = (char *)v61.m128i_i64[0];
          v17 = _mm_shuffle_epi32(v61, 238).m128i_u64[0];
          goto LABEL_172;
        }
      }
      if ( v20[1] != (char *)&dword_0 + 1 )
        goto LABEL_91;
      v43 = *(unsigned __int8 *)*v20;
      if ( v43 != 114 )
      {
        if ( v43 != 108 )
          goto LABEL_91;
        v44 = (unsigned __int8 *)v20[2];
        v45 = (const char ***)v20[3];
        LOWORD(v92) = 0;
        BYTE2(v92) = 0;
        *(_QWORD *)&v90 = 0LL;
        v91.m128i_i64[0] = 0LL;
        uucore::parser::parse_size::Parser::parse(&v84, &v90, v44, v45);
        v46 = (__int64)v84;
        if ( v84 == (const char **)((char *)&dword_0 + 3) )
        {
          if ( !v86.m128i_i64[1] )
          {
            v24 = (char *)v86.m128i_i64[0];
LABEL_159:
            v49 = 2LL;
            v48 = 1;
            v47 = 2LL;
LABEL_93:
            v9 = (__m128i *)v87.m128i_i64[0];
LABEL_94:
            if ( !v106 )
            {
              v51 = 8LL;
              v50 = 0LL;
LABEL_98:
              *(_QWORD *)&v81[v51] = v50;
              if ( *(_QWORD *)&v81[8] && *(_QWORD *)&v81[16] )
                _rust_dealloc(*(_QWORD *)v81);
              if ( v48 )
              {
                v9->m128i_i64[1] = v47;
                v9[1].m128i_i64[0] = (__int64)v24;
                v9[1].m128i_i64[1] = v17;
                v9->m128i_i64[0] = 4LL;
                return v9;
              }
              v52 = v24;
              v24 = (char *)v47;
LABEL_172:
              v9->m128i_i64[0] = 2LL;
              v9->m128i_i64[1] = v49;
              v9[1].m128i_i64[0] = (__int64)v24;
              v9[1].m128i_i64[1] = (__int64)v52;
              v9[2].m128i_i64[0] = v17;
              return v9;
            }
            if ( !(v106 >> 60) )
            {
              v50 = 16 * v106;
              *(_QWORD *)v81 = v107;
              *(_QWORD *)&v81[8] = 8LL;
              v51 = 16LL;
              goto LABEL_98;
            }
LABEL_179:
            core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
          }
          v94 = 0LL;
          v95 = (__int64)v44;
          v96 = v45;
          LOBYTE(v97) = 1;
          v88 = &v94;
          v89 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
          *(_QWORD *)&v81[8] = 2LL;
          *(_QWORD *)&v81[32] = 0LL;
          *(_QWORD *)&v81[16] = &v88;
          *(_QWORD *)&v81[24] = 1LL;
          alloc::fmt::format(&v99, v81);
          v77 = v99;
          v113 = v100;
          v46 = 2LL;
        }
        else
        {
          v77 = (const char *)v85;
          v113 = v86;
        }
        *(_QWORD *)v81 = v46;
        *(_QWORD *)&v81[8] = v77;
        *(__m128i *)&v81[16] = _mm_load_si128(&v113);
        uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v30, (__int64)v81);
        v24 = (char *)*((_QWORD *)&v90 + 1);
        v49 = v90;
        if ( (_QWORD)v90 != 2LL )
          goto LABEL_163;
        goto LABEL_159;
      }
      v64 = (unsigned __int8 *)v20[2];
      v65 = (const char ***)v20[3];
      LOWORD(v92) = 0;
      BYTE2(v92) = 0;
      *(_QWORD *)&v90 = 0LL;
      v91.m128i_i64[0] = 0LL;
      uucore::parser::parse_size::Parser::parse(&v84, &v90, v64, v65);
      v66 = (__int64)v84;
      if ( v84 == (const char **)((char *)&dword_0 + 3) )
      {
        if ( !v86.m128i_i64[1] )
        {
          v24 = (char *)v86.m128i_i64[0];
LABEL_162:
          v47 = 4LL;
          v49 = 2LL;
          v48 = 1;
          goto LABEL_93;
        }
        v94 = 0LL;
        v95 = (__int64)v64;
        v96 = v65;
        LOBYTE(v97) = 1;
        v88 = &v94;
        v89 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
        *(_QWORD *)&v81[8] = 2LL;
        *(_QWORD *)&v81[32] = 0LL;
        *(_QWORD *)&v81[16] = &v88;
        *(_QWORD *)&v81[24] = 1LL;
        alloc::fmt::format(&v99, v81);
        v78 = v99;
        v116 = v100;
        v66 = 2LL;
      }
      else
      {
        v78 = (const char *)v85;
        v116 = v86;
      }
      *(_QWORD *)v81 = v66;
      *(_QWORD *)&v81[8] = v78;
      *(__m128i *)&v81[16] = _mm_load_si128(&v116);
      uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v30, (__int64)v81);
      v24 = (char *)*((_QWORD *)&v90 + 1);
      v49 = v90;
      if ( (_QWORD)v90 != 2LL )
        goto LABEL_163;
      goto LABEL_162;
    }
    if ( v107[1] != (char *)&dword_0 + 1 )
      goto LABEL_91;
    v38 = *(unsigned __int8 *)*v107;
    if ( v38 != 114 )
    {
      if ( v38 != 108 )
        goto LABEL_91;
      v39 = (unsigned __int8 *)v107[4];
      v40 = (const char ***)v107[5];
      LOWORD(v92) = 0;
      BYTE2(v92) = 0;
      *(_QWORD *)&v90 = 0LL;
      v91.m128i_i64[0] = 0LL;
      uucore::parser::parse_size::Parser::parse(&v84, &v90, v39, v40);
      v41 = (__int64)v84;
      if ( v84 == (const char **)((char *)&dword_0 + 3) )
      {
        if ( !v86.m128i_i64[1] )
        {
          v17 = v86.m128i_i64[0];
          goto LABEL_133;
        }
        v94 = 0LL;
        v95 = (__int64)v39;
        v96 = v40;
        LOBYTE(v97) = 1;
        v88 = &v94;
        v89 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
        *(_QWORD *)&v81[8] = 2LL;
        *(_QWORD *)&v81[32] = 0LL;
        *(_QWORD *)&v81[16] = &v88;
        *(_QWORD *)&v81[24] = 1LL;
        alloc::fmt::format(&v99, v81);
        v62 = v99;
        v114 = v100;
        v41 = 2LL;
      }
      else
      {
        v62 = (const char *)v85;
        v114 = v86;
      }
      *(_QWORD *)v81 = v41;
      *(_QWORD *)&v81[8] = v62;
      *(__m128i *)&v81[16] = _mm_load_si128(&v114);
      uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v20 + 4, (__int64)v81);
      v24 = (char *)*((_QWORD *)&v90 + 1);
      v49 = v90;
      if ( (_QWORD)v90 != 2LL )
        goto LABEL_163;
      v17 = *((_QWORD *)&v90 + 1);
LABEL_133:
      v67 = (unsigned __int8 *)v20[2];
      v68 = (const char ***)v20[3];
      LOWORD(v92) = 0;
      BYTE2(v92) = 0;
      *(_QWORD *)&v90 = 0LL;
      v91.m128i_i64[0] = 0LL;
      uucore::parser::parse_size::Parser::parse(&v84, &v90, v67, v68);
      v69 = v20 + 2;
      v70 = (__int64)v84;
      if ( v84 == (const char **)((char *)&dword_0 + 3) )
      {
        if ( !v86.m128i_i64[1] )
        {
          v24 = (char *)v86.m128i_i64[0];
LABEL_148:
          v9 = (__m128i *)v87.m128i_i64[0];
          if ( (unsigned __int64)(v24 - 1) >= v17 )
          {
            <T as alloc::string::ToString>::to_string(&v102, v69);
            v24 = (char *)v102;
            v49 = 1LL;
            v61 = _mm_loadu_si128(&v103);
            goto LABEL_164;
          }
          v47 = 3LL;
          goto LABEL_155;
        }
        v94 = 0LL;
        v95 = (__int64)v67;
        v96 = v68;
        LOBYTE(v97) = 1;
        v88 = &v94;
        v89 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
        *(_QWORD *)&v81[8] = 2LL;
        *(_QWORD *)&v81[32] = 0LL;
        *(_QWORD *)&v81[16] = &v88;
        *(_QWORD *)&v81[24] = 1LL;
        alloc::fmt::format(&v99, v81);
        v71 = v99;
        v115 = v100;
        v70 = 2LL;
      }
      else
      {
        v71 = (const char *)v85;
        v115 = v86;
      }
      *(_QWORD *)v81 = v70;
      *(_QWORD *)&v81[8] = v71;
      *(__m128i *)&v81[16] = _mm_load_si128(&v115);
      uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v69, (__int64)v81);
      v24 = (char *)*((_QWORD *)&v90 + 1);
      v49 = v90;
      if ( (_QWORD)v90 != 2LL )
        goto LABEL_163;
      goto LABEL_148;
    }
    v54 = (unsigned __int8 *)v107[4];
    v55 = (const char ***)v107[5];
    LOWORD(v92) = 0;
    BYTE2(v92) = 0;
    *(_QWORD *)&v90 = 0LL;
    v91.m128i_i64[0] = 0LL;
    uucore::parser::parse_size::Parser::parse(&v84, &v90, v54, v55);
    v56 = (__int64)v84;
    if ( v84 == (const char **)((char *)&dword_0 + 3) )
    {
      if ( !v86.m128i_i64[1] )
      {
        v17 = v86.m128i_i64[0];
        goto LABEL_140;
      }
      v94 = 0LL;
      v95 = (__int64)v54;
      v96 = v55;
      LOBYTE(v97) = 1;
      v88 = &v94;
      v89 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
      *(_QWORD *)&v81[8] = 2LL;
      *(_QWORD *)&v81[32] = 0LL;
      *(_QWORD *)&v81[16] = &v88;
      *(_QWORD *)&v81[24] = 1LL;
      alloc::fmt::format(&v99, v81);
      v63 = v99;
      v117 = v100;
      v56 = 2LL;
    }
    else
    {
      v63 = (const char *)v85;
      v117 = v86;
    }
    *(_QWORD *)v81 = v56;
    *(_QWORD *)&v81[8] = v63;
    *(__m128i *)&v81[16] = _mm_load_si128(&v117);
    uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v20 + 4, (__int64)v81);
    v24 = (char *)*((_QWORD *)&v90 + 1);
    v49 = v90;
    if ( (_QWORD)v90 != 2LL )
      goto LABEL_163;
    v17 = *((_QWORD *)&v90 + 1);
LABEL_140:
    v72 = (unsigned __int8 *)v20[2];
    v73 = (const char ***)v20[3];
    LOWORD(v92) = 0;
    BYTE2(v92) = 0;
    *(_QWORD *)&v90 = 0LL;
    v91.m128i_i64[0] = 0LL;
    uucore::parser::parse_size::Parser::parse(&v84, &v90, v72, v73);
    v74 = v20 + 2;
    v75 = (__int64)v84;
    if ( v84 == (const char **)((char *)&dword_0 + 3) )
    {
      if ( !v86.m128i_i64[1] )
      {
        v24 = (char *)v86.m128i_i64[0];
LABEL_153:
        v9 = (__m128i *)v87.m128i_i64[0];
        if ( (unsigned __int64)(v24 - 1) >= v17 )
        {
          <T as alloc::string::ToString>::to_string(&v104, v74);
          v24 = (char *)v104.m128i_i64[0];
          v49 = 1LL;
          v61 = _mm_loadu_si128((const __m128i *)&v104.m128i_u64[1]);
          goto LABEL_164;
        }
        v47 = 5LL;
LABEL_155:
        v49 = 2LL;
        v48 = 1;
        goto LABEL_94;
      }
      v94 = 0LL;
      v95 = (__int64)v72;
      v96 = v73;
      LOBYTE(v97) = 1;
      v88 = &v94;
      v89 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v81 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
      *(_QWORD *)&v81[8] = 2LL;
      *(_QWORD *)&v81[32] = 0LL;
      *(_QWORD *)&v81[16] = &v88;
      *(_QWORD *)&v81[24] = 1LL;
      alloc::fmt::format(&v99, v81);
      v76 = v99;
      v118 = v100;
      v75 = 2LL;
    }
    else
    {
      v76 = (const char *)v85;
      v118 = v86;
    }
    *(_QWORD *)v81 = v75;
    *(_QWORD *)&v81[8] = v76;
    *(__m128i *)&v81[16] = _mm_load_si128(&v118);
    uu_split::strategy::NumberType::from::{{closure}}((__int64)&v90, v74, (__int64)v81);
    v24 = (char *)*((_QWORD *)&v90 + 1);
    v49 = v90;
    if ( (_QWORD)v90 != 2LL )
      goto LABEL_163;
    goto LABEL_153;
  }
  if ( v4 == 2 || v5 == 2 || v6 == 2 || v7 == 2 )
    goto LABEL_34;
  if ( !a3[1] || (__int64)a3[2] < 0 )
    goto LABEL_173;
  *(_WORD *)&v81[32] = 0;
  v81[34] = 0;
  *(_QWORD *)v81 = 0LL;
  *(_QWORD *)&v81[16] = 0LL;
  uucore::parser::parse_size::Parser::parse_u64_max(&v121, v81);
  v12 = v122;
  if ( v121 != 3 )
  {
    v14 = v123;
    <alloc::string::String as core::clone::Clone>::clone(v81, a3);
    v9 = (__m128i *)v87.m128i_i64[0];
    v120 = *(_QWORD *)&v81[16];
    v119 = *(__m128i *)v81;
    if ( v12 )
      _rust_dealloc(v14);
    v9->m128i_i64[0] = 0LL;
    v9->m128i_i64[1] = 1LL;
    v9[1] = _mm_load_si128(&v119);
    v15 = v120;
    goto LABEL_69;
  }
  v109 = v122;
  v9 = (__m128i *)v87.m128i_i64[0];
  if ( !v122 )
  {
    <T as alloc::string::ToString>::to_string(&v124, &v109);
    v9->m128i_i64[0] = 0LL;
    v9->m128i_i64[1] = 1LL;
    v9[1] = _mm_loadu_si128(&v124);
    v15 = v125;
LABEL_69:
    v9[2].m128i_i64[0] = v15;
    return v9;
  }
  *(_QWORD *)(v87.m128i_i64[0] + 8) = 6LL;
  v9[1].m128i_i64[0] = v12;
  v9->m128i_i64[0] = 4LL;
  return v9;
}
