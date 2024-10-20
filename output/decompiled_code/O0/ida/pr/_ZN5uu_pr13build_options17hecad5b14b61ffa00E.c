        __int64 a6)
{
  __int64 v8; // rbx
  unsigned __int8 flag; // bp
  __int64 v10; // rbx
  void *v11; // r14
  _QWORD *v12; // rcx
  __int64 v13; // rax
  char *v14; // r14
  void *v15; // r14
  char *v16; // r15
  signed __int64 v17; // rax
  void *v18; // r14
  const void *v19; // r13
  size_t v20; // rdx
  size_t v21; // r15
  __int64 v22; // rbp
  void *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // bp
  __int64 v28; // r14
  _BYTE *v29; // r15
  __int64 v30; // rbp
  _BYTE *v31; // r14
  int v32; // eax
  char **v33; // rsi
  __int64 v34; // r15
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // r14
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // r12
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r14
  int v52; // r12d
  char v53; // al
  _BYTE *v54; // rax
  _BYTE *v55; // r14
  const void *v56; // r15
  size_t v57; // rdx
  size_t v58; // r14
  void *v59; // r12
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rbp
  char v64; // r12
  char *v65; // rcx
  __int64 v66; // rdx
  __int128 v67; // xmm0
  __int64 v68; // r14
  char **v69; // r15
  char v70; // bp
  char v71; // r12
  __int64 v72; // rcx
  char v73; // bl
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int128 v79; // xmm0
  char v80; // bl
  __int64 v81; // rsi
  bool v82; // zf
  _BYTE *v83; // rbx
  __int64 v84; // r14
  __int64 v86; // rdx
  unsigned __int64 v87; // rdx
  __int128 v88; // xmm0
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  char **v91; // rsi
  char v92; // [rsp+Ah] [rbp-73Eh]
  unsigned __int8 v93; // [rsp+Bh] [rbp-73Dh]
  char v94; // [rsp+1Fh] [rbp-729h]
  __int64 v95; // [rsp+20h] [rbp-728h]
  const char *v96; // [rsp+28h] [rbp-720h] BYREF
  __int64 v97; // [rsp+30h] [rbp-718h]
  char **v98; // [rsp+38h] [rbp-710h]
  __int64 v99; // [rsp+40h] [rbp-708h]
  const char **v100; // [rsp+48h] [rbp-700h] BYREF
  __int64 (__fastcall *v101)(); // [rsp+50h] [rbp-6F8h]
  _OWORD *v102; // [rsp+58h] [rbp-6F0h]
  __int64 (__fastcall *v103)(); // [rsp+60h] [rbp-6E8h]
  __int64 v104; // [rsp+68h] [rbp-6E0h]
  __int64 v105; // [rsp+70h] [rbp-6D8h]
  _BYTE *v106; // [rsp+78h] [rbp-6D0h]
  __int64 v107; // [rsp+80h] [rbp-6C8h]
  char **v108; // [rsp+88h] [rbp-6C0h] BYREF
  __int64 v109; // [rsp+90h] [rbp-6B8h]
  const char ***v110; // [rsp+98h] [rbp-6B0h]
  __int64 v111; // [rsp+A0h] [rbp-6A8h]
  __int64 v112; // [rsp+A8h] [rbp-6A0h]
  __int64 v113; // [rsp+B8h] [rbp-690h]
  _BYTE v114[176]; // [rsp+C0h] [rbp-688h] BYREF
  void *v115; // [rsp+170h] [rbp-5D8h]
  int v116; // [rsp+17Ch] [rbp-5CCh]
  __int64 v117; // [rsp+180h] [rbp-5C8h]
  unsigned __int64 v118; // [rsp+188h] [rbp-5C0h]
  __int64 v119; // [rsp+190h] [rbp-5B8h]
  unsigned __int64 v120; // [rsp+198h] [rbp-5B0h]
  __int64 v121; // [rsp+1A0h] [rbp-5A8h]
  _BYTE *v122; // [rsp+1A8h] [rbp-5A0h]
  void *v123; // [rsp+1B0h] [rbp-598h]
  __int64 v124; // [rsp+1B8h] [rbp-590h]
  __int64 v125; // [rsp+1C0h] [rbp-588h]
  unsigned __int64 v126; // [rsp+1C8h] [rbp-580h] BYREF
  _OWORD v127[11]; // [rsp+1D0h] [rbp-578h] BYREF
  __int128 v128; // [rsp+288h] [rbp-4C0h] BYREF
  __int64 v129; // [rsp+298h] [rbp-4B0h]
  __int128 v130; // [rsp+2A0h] [rbp-4A8h]
  __int128 v131; // [rsp+2B0h] [rbp-498h]
  __int128 v132; // [rsp+2C0h] [rbp-488h]
  __m256i v133; // [rsp+2D0h] [rbp-478h] BYREF
  __int64 v134; // [rsp+2F0h] [rbp-458h] BYREF
  unsigned __int64 v135; // [rsp+2F8h] [rbp-450h]
  __int128 v136; // [rsp+300h] [rbp-448h] BYREF
  __int128 v137; // [rsp+310h] [rbp-438h]
  __int64 v138; // [rsp+320h] [rbp-428h]
  __int64 v139; // [rsp+328h] [rbp-420h]
  signed __int64 v140; // [rsp+330h] [rbp-418h]
  __int64 v141; // [rsp+338h] [rbp-410h] BYREF
  char **v142; // [rsp+340h] [rbp-408h] BYREF
  int v143; // [rsp+348h] [rbp-400h]
  int v144; // [rsp+34Ch] [rbp-3FCh]
  unsigned __int64 v145; // [rsp+350h] [rbp-3F8h] BYREF
  __int128 v146; // [rsp+358h] [rbp-3F0h] BYREF
  __int64 v147; // [rsp+368h] [rbp-3E0h]
  __m256i v148; // [rsp+370h] [rbp-3D8h] BYREF
  __m256i v149; // [rsp+390h] [rbp-3B8h] BYREF
  __m256i v150; // [rsp+3B0h] [rbp-398h] BYREF
  __int128 v151; // [rsp+3D0h] [rbp-378h]
  __int64 v152; // [rsp+3E0h] [rbp-368h]
  __int128 v153; // [rsp+3F0h] [rbp-358h] BYREF
  __int64 v154; // [rsp+400h] [rbp-348h]
  __int128 v155; // [rsp+410h] [rbp-338h] BYREF
  __int64 v156; // [rsp+420h] [rbp-328h]
  __int128 v157; // [rsp+430h] [rbp-318h] BYREF
  __int64 v158; // [rsp+440h] [rbp-308h]
  _QWORD v159[4]; // [rsp+448h] [rbp-300h] BYREF
  _QWORD v160[3]; // [rsp+468h] [rbp-2E0h] BYREF
  __int128 v161; // [rsp+480h] [rbp-2C8h]
  __int128 v162; // [rsp+490h] [rbp-2B8h]
  __int128 v163; // [rsp+4A0h] [rbp-2A8h]
  __int128 v164; // [rsp+4B0h] [rbp-298h]
  __int128 v165; // [rsp+4C0h] [rbp-288h]
  __int128 v166; // [rsp+4D0h] [rbp-278h]
  __int128 v167; // [rsp+4E0h] [rbp-268h]
  __int128 v168; // [rsp+4F0h] [rbp-258h]
  _OWORD v169[2]; // [rsp+500h] [rbp-248h] BYREF
  __int128 v170; // [rsp+520h] [rbp-228h] BYREF
  __int64 v171; // [rsp+530h] [rbp-218h]
  _OWORD v172[2]; // [rsp+538h] [rbp-210h] BYREF
  __int128 v173; // [rsp+558h] [rbp-1F0h] BYREF
  char v174; // [rsp+568h] [rbp-1E0h] BYREF
  __int128 v175; // [rsp+578h] [rbp-1D0h] BYREF
  char v176; // [rsp+588h] [rbp-1C0h] BYREF
  _OWORD v177[2]; // [rsp+598h] [rbp-1B0h] BYREF
  _OWORD v178[2]; // [rsp+5B8h] [rbp-190h] BYREF
  __int128 v179; // [rsp+5D8h] [rbp-170h] BYREF
  __int64 v180; // [rsp+5E8h] [rbp-160h]
  _OWORD v181[4]; // [rsp+5F0h] [rbp-158h] BYREF
  __int64 v182; // [rsp+630h] [rbp-118h]
  _OWORD v183[4]; // [rsp+638h] [rbp-110h] BYREF
  __int64 v184; // [rsp+678h] [rbp-D0h]
  _OWORD v185[4]; // [rsp+680h] [rbp-C8h] BYREF
  __int64 v186; // [rsp+6C0h] [rbp-88h]
  _QWORD v187[16]; // [rsp+6C8h] [rbp-80h] BYREF

  v125 = a6;
  v124 = a5;
  v8 = a2;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFormFeed, 9LL, &off_2C7BB8);
  LOBYTE(v99) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMerge_0, 5LL, &off_2C7BD0);
  if ( !(_BYTE)v99 )
    goto LABEL_235;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(v114, a2, aColumn, 6LL);
  v96 = aColumn;
  v97 = 6LL;
  if ( (v114[0] & 1) != 0 )
  {
    v127[3] = *(_OWORD *)&v114[56];
    v127[2] = *(_OWORD *)&v114[40];
    v127[1] = *(_OWORD *)&v114[24];
    v127[0] = *(_OWORD *)&v114[8];
    v100 = &v96;
    v101 = <&T as core::fmt::Display>::fmt;
    v102 = v127;
    v103 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v108 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v109 = 2LL;
    v112 = 0LL;
    v110 = &v100;
    v111 = 2LL;
    core::panicking::panic_fmt(&v108, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
  }
  if ( (v114[1] & 1) != 0 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v114, 58LL, 0LL);
    v10 = *(_QWORD *)&v114[8];
    if ( !*(_QWORD *)v114 )
    {
      v15 = *(void **)&v114[16];
      core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_6598F, *(_QWORD *)&v114[16], 1LL, 1LL, 58LL);
      qmemcpy(v15, "cannot specify number of columns when printing in parallel", 58);
      v12 = (_QWORD *)a1;
      *(_QWORD *)(a1 + 8) = 0x8000000000000001LL;
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 32) = 58LL;
      goto LABEL_17;
    }
LABEL_218:
    alloc::raw_vec::handle_error(v10, *(_QWORD *)&v114[16]);
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAcross, 6LL, &off_2C7BE8) )
  {
LABEL_235:
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            aMerge_0,
                            5LL,
                            &off_2C7C00) )
    {
      v135 = a4;
      v13 = 1LL;
    }
    else
    {
      v13 = 0LL;
    }
    v134 = v13;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v114);
    v96 = aHeader;
    v97 = 6LL;
    if ( *(_QWORD *)v114 )
    {
      v127[3] = *(_OWORD *)&v114[56];
      v127[2] = *(_OWORD *)&v114[40];
      v127[1] = *(_OWORD *)&v114[24];
      v127[0] = *(_OWORD *)&v114[8];
      v100 = &v96;
      v101 = <&T as core::fmt::Display>::fmt;
      v102 = v127;
      v103 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v108 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v109 = 2LL;
      v112 = 0LL;
      v110 = &v100;
      v111 = 2LL;
      core::panicking::panic_fmt(&v108, &off_2C7C18);
    }
    v98 = (char **)a3;
    if ( *(_QWORD *)&v114[8] )
    {
      v14 = *(char **)(*(_QWORD *)&v114[8] + 8LL);
      if ( !v14 || (a3 = *(_QWORD *)(*(_QWORD *)&v114[8] + 16LL), a3 < 0) )
LABEL_213:
        core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
    }
    else
    {
      v14 = 0LL;
    }
    v93 = flag;
    if ( (_BYTE)v99 )
    {
      v16 = (_BYTE *)(&dword_0 + 1);
      v17 = 0LL;
    }
    else
    {
      if ( !a4 )
        core::panicking::panic_bounds_check(0LL, 0LL, &off_2C7C30);
      v16 = (_BYTE *)(&dword_0 + 1);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              *v98,
                              v98[1],
                              anon_7c75ec29d226220b36fc1f3bbd3b01ef_77_llvm_17389174869910011146,
                              1LL) )
      {
        v17 = 0LL;
      }
      else
      {
        v16 = *v98;
        v17 = (signed __int64)v98[1];
      }
      v8 = a2;
    }
    if ( !v14 )
      a3 = v17;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v114, a3, 0LL);
    v113 = *(_QWORD *)&v114[8];
    if ( *(_QWORD *)v114 )
      alloc::raw_vec::handle_error(v113, *(_QWORD *)&v114[16]);
    if ( v14 )
      v16 = v14;
    v18 = *(void **)&v114[16];
    core::intrinsics::copy_nonoverlapping::precondition_check(v16, *(_QWORD *)&v114[16], 1LL, 1LL, a3);
    v123 = v18;
    v140 = a3;
    memcpy(v18, v16, a3);
    LODWORD(v127[0]) = 0;
    v19 = (const void *)core::char::methods::encode_utf8_raw(9LL, v127, 4LL);
    v21 = v20;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v114, v20, 0LL);
    v22 = *(_QWORD *)&v114[8];
    if ( *(_QWORD *)v114 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v114[8], *(_QWORD *)&v114[16]);
    v23 = *(void **)&v114[16];
    core::intrinsics::copy_nonoverlapping::precondition_check(v19, *(_QWORD *)&v114[16], 1LL, 1LL, v21);
    memcpy(v23, v19, v21);
    if ( v22 )
      _rust_dealloc(v23, v22, 1LL);
    uu_pr::parse_usize(v169, v8, (__int64)aFirstLineNumbe, 17LL);
    v24 = 1LL;
    if ( *(_QWORD *)&v169[0] != 0x8000000000000006LL )
    {
      v24 = *((_QWORD *)&v169[0] + 1);
      if ( *(_QWORD *)&v169[0] != 0x8000000000000005LL )
      {
        *(_QWORD *)(a1 + 8) = *(_QWORD *)&v169[0];
        *(_QWORD *)(a1 + 16) = v24;
        *(_OWORD *)(a1 + 24) = v169[1];
        *(_QWORD *)a1 = 2LL;
        if ( !v113 )
          return a1;
        goto LABEL_194;
      }
    }
    v141 = v24;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v114);
    v96 = anon_7c75ec29d226220b36fc1f3bbd3b01ef_18_llvm_17389174869910011146;
    v97 = 12LL;
    if ( *(_QWORD *)v114 )
    {
      v127[3] = *(_OWORD *)&v114[56];
      v127[2] = *(_OWORD *)&v114[40];
      v127[1] = *(_OWORD *)&v114[24];
      v127[0] = *(_OWORD *)&v114[8];
      v100 = &v96;
      v101 = <&T as core::fmt::Display>::fmt;
      v102 = v127;
      v103 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v108 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v109 = 2LL;
      v112 = 0LL;
      v110 = &v100;
      v111 = 2LL;
      core::panicking::panic_fmt(&v108, &off_2C7C48);
    }
    v26 = *(_QWORD *)&v114[8];
    if ( *(_QWORD *)&v114[8]
      && (uu_pr::build_options::{{closure}}(v114, &v141),
          v25 = *(_QWORD *)&v114[8],
          v151 = *(_OWORD *)&v114[16],
          v26 = *(_QWORD *)&v114[32],
          v152 = *(_QWORD *)&v114[32],
          *(_QWORD *)v114 != 0x8000000000000000LL) )
    {
      v136 = *(_OWORD *)v114;
      v137 = v151;
      v138 = v152;
    }
    else
    {
      uu_pr::build_options::{{closure}}(&v136, v8, v26, v25);
    }
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v8, aDoubleSpace, 12LL, &off_2C7C60);
    if ( v27 )
    {
      alloc::str::<impl str>::repeat(&v128, asc_658FE, 1LL, 2LL);
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v114, 1LL, 0LL);
      v28 = *(_QWORD *)&v114[8];
      if ( *(_QWORD *)v114 )
        alloc::raw_vec::handle_error(*(_QWORD *)&v114[8], *(_QWORD *)&v114[16]);
      v29 = *(_BYTE **)&v114[16];
      core::intrinsics::copy_nonoverlapping::precondition_check(asc_658FE, *(_QWORD *)&v114[16], 1LL, 1LL, 1LL);
      *v29 = 10;
      *(_QWORD *)&v128 = v28;
      *((_QWORD *)&v128 + 1) = v29;
      v129 = 1LL;
    }
    v92 = v27;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v114, 1LL, 0LL);
    v30 = *(_QWORD *)&v114[8];
    if ( *(_QWORD *)v114 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v114[8], *(_QWORD *)&v114[16]);
    v31 = *(_BYTE **)&v114[16];
    core::intrinsics::copy_nonoverlapping::precondition_check(asc_658FE, *(_QWORD *)&v114[16], 1LL, 1LL, 1LL);
    v122 = v31;
    *v31 = 10;
    if ( (_BYTE)v99 )
      goto LABEL_49;
    if ( !a4 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_2C7C78);
    if ( v98[1] == (_BYTE *)&dword_0 + 1 && **v98 == 45 )
    {
LABEL_49:
      chrono::offset::utc::Utc::now(&v100);
      LODWORD(v109) = (_DWORD)v101;
      v108 = (char **)v100;
      LOBYTE(v96) = 0;
      std::thread::local::LocalKey<T>::try_with(
        v114,
        &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
        &v100,
        &v96);
      core::result::Result<T,E>::expect(
        v127,
        v114,
        anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
        70LL,
        &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
      v32 = chrono::offset::LocalResult<T>::unwrap(
              v127,
              &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
      v142 = v108;
      v143 = v109;
      v144 = v32;
      chrono::datetime::DateTime<Tz>::format(
        v187,
        &v142,
        anon_7c75ec29d226220b36fc1f3bbd3b01ef_90_llvm_17389174869910011146,
        14LL);
      *(_QWORD *)&v127[0] = 0LL;
      *((_QWORD *)&v127[0] + 1) = 1LL;
      *(_QWORD *)&v127[1] = 0LL;
      *(_QWORD *)&v114[48] = 32LL;
      v114[56] = 3;
      *(_QWORD *)v114 = 0LL;
      *(_QWORD *)&v114[16] = 0LL;
      *(_QWORD *)&v114[32] = v127;
      *(_QWORD *)&v114[40] = &anon_ebfa4b0515454fd90ef63a7fce850bb1_2_llvm_16725593182750105152;
      if ( (unsigned __int8)<chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt(v187, v114) )
        core::result::unwrap_failed(
          anon_ebfa4b0515454fd90ef63a7fce850bb1_4_llvm_16725593182750105152,
          55LL,
          &v108,
          &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
          &anon_ebfa4b0515454fd90ef63a7fce850bb1_6_llvm_16725593182750105152);
      v98 = (char **)*((_QWORD *)&v127[0] + 1);
      v99 = *(_QWORD *)&v127[0];
      v119 = *(_QWORD *)&v127[1];
      if ( v187[0] != 0x8000000000000000LL )
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v187);
    }
    else
    {
      std::sys::pal::unix::fs::stat(v127);
      if ( *(_QWORD *)&v127[0] == 2LL )
      {
        std::io::error::repr_bitpacked::decode_repr(v114, *((_QWORD *)&v127[0] + 1));
        if ( v114[0] >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v114[8]);
LABEL_64:
        v98 = (char **)(&dword_0 + 1);
        v119 = 0LL;
        v99 = 0LL;
        goto LABEL_65;
      }
      memcpy(&v114[16], &v127[1], 0xA0uLL);
      *(_OWORD *)v114 = v127[0];
      std::fs::Metadata::modified(&v108, v114);
      if ( (_DWORD)v109 == 1000000000 )
      {
        v33 = v108;
        goto LABEL_62;
      }
      uu_pr::file_last_modified_time::{{closure}}::{{closure}}(v127, v108);
      v98 = (char **)*((_QWORD *)&v127[0] + 1);
      v99 = *(_QWORD *)&v127[0];
      if ( *(_QWORD *)&v127[0] == 0x8000000000000000LL )
      {
        v33 = v98;
LABEL_62:
        std::io::error::repr_bitpacked::decode_repr(v127, v33);
        if ( LOBYTE(v127[0]) >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v127 + 8);
        goto LABEL_64;
      }
      v119 = *(_QWORD *)&v127[1];
    }
LABEL_65:
    regex::regex::string::Regex::new(&v149, aSDDS, 18LL);
    if ( !v149.m256i_i64[0] )
    {
      v158 = v149.m256i_i64[3];
      v157 = *(_OWORD *)&v149.m256i_u64[1];
      core::result::unwrap_failed(
        anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
        43LL,
        &v157,
        &off_2C7A28,
        &off_2C7C90);
    }
    v133 = v149;
    regex::regex::string::Regex::captures_at(v181, &v133, v124, v125, 0LL);
    if ( *(_QWORD *)&v181[0] == 2LL )
      goto LABEL_70;
    *(_QWORD *)&v114[64] = v182;
    *(_OWORD *)&v114[48] = v181[3];
    *(_OWORD *)&v114[32] = v181[2];
    *(_OWORD *)&v114[16] = v181[1];
    *(_OWORD *)v114 = v181[0];
    uu_pr::build_options::{{closure}}(v127, v114);
    v34 = *((_QWORD *)&v127[0] + 1);
    v162 = v127[1];
    if ( *(_QWORD *)&v127[0] == 0x8000000000000006LL )
    {
LABEL_70:
      v34 = 1LL;
    }
    else if ( *(_QWORD *)&v127[0] != 0x8000000000000005LL )
    {
      v35 = a1;
      *(_OWORD *)(a1 + 8) = v127[0];
      v36 = v162;
LABEL_182:
      *(_OWORD *)(v35 + 24) = v36;
      goto LABEL_183;
    }
    regex::regex::string::Regex::captures_at(v183, &v133, v124, v125, 0LL);
    if ( *(_QWORD *)&v183[0] != 2LL )
    {
      *(_QWORD *)&v114[64] = v184;
      *(_OWORD *)&v114[48] = v183[3];
      *(_OWORD *)&v114[32] = v183[2];
      *(_OWORD *)&v114[16] = v183[1];
      *(_OWORD *)v114 = v183[0];
      v37 = uu_pr::build_options::{{closure}}(v114);
      if ( v37 )
      {
        if ( v38 > 0xF )
        {
          v40 = v38;
          v41 = v37;
          v42 = core::slice::memchr::memchr_aligned(58LL, v37);
          v38 = v40;
          v43 = v42;
          v37 = v41;
          if ( v43 == 1 )
          {
LABEL_80:
            uu_pr::build_options::{{closure}}(v114, v37, v38);
            v118 = *(_QWORD *)&v114[8];
            v163 = *(_OWORD *)&v114[16];
            if ( *(_QWORD *)v114 != 0x8000000000000006LL )
            {
              if ( *(_QWORD *)v114 != 0x8000000000000005LL )
              {
                v35 = a1;
                *(_QWORD *)(a1 + 8) = *(_QWORD *)v114;
                *(_QWORD *)(a1 + 16) = v118;
                v36 = v163;
                goto LABEL_182;
              }
              v105 = 1LL;
              v44 = 1;
LABEL_85:
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v114);
              v96 = anon_7c75ec29d226220b36fc1f3bbd3b01ef_10_llvm_17389174869910011146;
              v97 = 5LL;
              if ( *(_QWORD *)v114 )
              {
                v127[3] = *(_OWORD *)&v114[56];
                v127[2] = *(_OWORD *)&v114[40];
                v127[1] = *(_OWORD *)&v114[24];
                v127[0] = *(_OWORD *)&v114[8];
                v100 = &v96;
                v101 = <&T as core::fmt::Display>::fmt;
                v102 = v127;
                v103 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v108 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
                v91 = &off_2C7CA8;
              }
              else
              {
                if ( *(_QWORD *)&v114[8] )
                {
                  uu_pr::build_options::{{closure}}(v114);
                  v165 = *(_OWORD *)&v114[8];
                  if ( *(_QWORD *)v114 != 0x8000000000000000LL )
                  {
                    *(_QWORD *)&v127[0] = *(_QWORD *)v114;
                    *(_OWORD *)((char *)v127 + 8) = v165;
                    v108 = (char **)v8;
                    uu_pr::build_options::{{closure}}(v114, &v108, v127);
                    v164 = *(_OWORD *)&v114[16];
                    if ( *(_QWORD *)v114 != 0x8000000000000006LL )
                    {
                      if ( *(_QWORD *)v114 != 0x8000000000000005LL )
                      {
                        v66 = a1;
                        *(_OWORD *)(a1 + 8) = *(_OWORD *)v114;
                        v67 = v164;
                        goto LABEL_200;
                      }
                      v34 = *(_QWORD *)&v114[8];
                    }
                  }
                }
                v126 = v34;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v114);
                v96 = anon_7c75ec29d226220b36fc1f3bbd3b01ef_10_llvm_17389174869910011146;
                v97 = 5LL;
                if ( !*(_QWORD *)v114 )
                {
                  v48 = *(_QWORD *)&v114[8];
                  if ( !*(_QWORD *)&v114[8] )
                    goto LABEL_105;
                  v49 = *(_QWORD *)(*(_QWORD *)&v114[8] + 8LL);
                  if ( !v49 )
                    goto LABEL_213;
                  v45 = *(_QWORD *)(*(_QWORD *)&v114[8] + 16LL);
                  if ( v45 < 0 )
                    goto LABEL_213;
                  if ( (unsigned __int64)v45 > 0xF )
                  {
                    if ( core::slice::memchr::memchr_aligned(58LL, v49) != 1 )
                      goto LABEL_105;
                  }
                  else
                  {
                    if ( !v45 )
                      goto LABEL_105;
                    v50 = 0LL;
                    while ( *(_BYTE *)(v49 + v50) != 58 )
                    {
                      if ( v45 == ++v50 )
                        goto LABEL_105;
                    }
                  }
                  uu_pr::build_options::{{closure}}(v114, v48);
                  v167 = *(_OWORD *)&v114[8];
                  if ( *(_QWORD *)v114 == 0x8000000000000000LL )
                    goto LABEL_105;
                  *(_QWORD *)&v127[0] = *(_QWORD *)v114;
                  *(_OWORD *)((char *)v127 + 8) = v167;
                  v108 = (char **)v8;
                  uu_pr::build_options::{{closure}}(v114, &v108, v127);
                  v166 = *(_OWORD *)&v114[16];
                  v45 = 0x8000000000000005LL;
                  if ( *(_QWORD *)v114 == 0x8000000000000005LL )
                  {
                    v118 = *(_QWORD *)&v114[8];
LABEL_106:
                    v145 = v118;
                    v105 = 1LL;
                    if ( v126 > v118 )
                    {
                      v159[0] = &v126;
                      v159[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                      v159[2] = &v145;
                      v159[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                      *(_QWORD *)v114 = &off_2C7CD8;
                      *(_QWORD *)&v114[8] = 3LL;
                      *(_QWORD *)&v114[16] = v159;
                      *(_QWORD *)&v114[24] = 2LL;
                      *(_QWORD *)&v114[32] = 0LL;
                      alloc::fmt::format::format_inner(&v170, v114, v45, &v145, v46, v47);
                      v35 = a1;
                      *(_QWORD *)(a1 + 8) = 0x8000000000000001LL;
                      *(_OWORD *)(a1 + 16) = v170;
                      *(_QWORD *)(a1 + 32) = v171;
LABEL_183:
                      *(_QWORD *)v35 = 2LL;
                      goto LABEL_184;
                    }
LABEL_108:
                    uu_pr::parse_usize(v172, v8, (__int64)aLength, 6LL);
                    v120 = 0x8000000000000006LL;
                    if ( *(_QWORD *)&v172[0] == 0x8000000000000006LL )
                    {
                      v51 = 3LL * (v93 ^ 1u) + 63;
                    }
                    else
                    {
                      v51 = *((_QWORD *)&v172[0] + 1);
                      if ( *(_QWORD *)&v172[0] != 0x8000000000000005LL )
                      {
                        v35 = a1;
                        *(_QWORD *)(a1 + 8) = *(_QWORD *)&v172[0];
                        *(_QWORD *)(a1 + 16) = v51;
                        v36 = v172[1];
                        goto LABEL_182;
                      }
                      if ( *((_QWORD *)&v172[0] + 1) < 0xAuLL )
                      {
                        v52 = 0;
LABEL_111:
                        v53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                v8,
                                aFormFeed,
                                9LL,
                                &off_2C7D20);
                        v95 = v30;
                        v139 = v51;
                        if ( v53 )
                        {
                          v54 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 1LL, 1LL, 0LL);
                          if ( !v54 )
                            alloc::alloc::handle_alloc_error(1LL, 1LL);
                          *v54 = 12;
                          v106 = v54;
                          core::str::converts::from_utf8(v114, v54, 1LL);
                          if ( *(_QWORD *)v114 )
                          {
                            v160[0] = 1LL;
                            v160[1] = v106;
                            v160[2] = 1LL;
                            v161 = *(_OWORD *)&v114[8];
                            core::result::unwrap_failed(
                              anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
                              43LL,
                              v160,
                              &off_2C7A68,
                              &off_2C7D38);
                          }
                          v107 = 1LL;
                        }
                        else
                        {
                          alloc::raw_vec::RawVec<T,A>::try_allocate_in(v114, 1LL, 0LL);
                          v107 = *(_QWORD *)&v114[8];
                          if ( *(_QWORD *)v114 )
                            alloc::raw_vec::handle_error(v107, *(_QWORD *)&v114[16]);
                          v55 = *(_BYTE **)&v114[16];
                          core::intrinsics::copy_nonoverlapping::precondition_check(
                            asc_658FE,
                            *(_QWORD *)&v114[16],
                            1LL,
                            1LL,
                            1LL);
                          v106 = v55;
                          *v55 = 10;
                        }
                        v94 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                v8,
                                aAcross,
                                6LL,
                                &off_2C7D50);
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v114);
                        v96 = aSepString;
                        v97 = 10LL;
                        if ( *(_QWORD *)v114 )
                        {
                          v127[3] = *(_OWORD *)&v114[56];
                          v127[2] = *(_OWORD *)&v114[40];
                          v127[1] = *(_OWORD *)&v114[24];
                          v127[0] = *(_OWORD *)&v114[8];
                          v100 = &v96;
                          v101 = <&T as core::fmt::Display>::fmt;
                          v102 = v127;
                          v103 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                          v108 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
                          v109 = 2LL;
                          v112 = 0LL;
                          v110 = &v100;
                          v111 = 2LL;
                          core::panicking::panic_fmt(&v108, &off_2C7D68);
                        }
                        v116 = v52;
                        if ( (*(_QWORD *)&v114[8]
                           || clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                                v8,
                                aSeparator,
                                9LL,
                                &off_2C7D80))
                          && (<alloc::string::String as core::clone::Clone>::clone(v114),
                              *(_QWORD *)v114 != 0x8000000000000000LL) )
                        {
                          v115 = *(void **)&v114[8];
                          v104 = *(_QWORD *)v114;
                          v58 = *(_QWORD *)&v114[16];
                        }
                        else
                        {
                          LODWORD(v127[0]) = 0;
                          v56 = (const void *)core::char::methods::encode_utf8_raw(9LL, v127, 4LL);
                          v58 = v57;
                          alloc::raw_vec::RawVec<T,A>::try_allocate_in(v114, v57, 0LL);
                          v104 = *(_QWORD *)&v114[8];
                          if ( *(_QWORD *)v114 )
                            alloc::raw_vec::handle_error(v104, *(_QWORD *)&v114[16]);
                          v59 = *(void **)&v114[16];
                          core::intrinsics::copy_nonoverlapping::precondition_check(
                            v56,
                            *(_QWORD *)&v114[16],
                            1LL,
                            1LL,
                            v58);
                          v115 = v59;
                          memcpy(v59, v56, v58);
                        }
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(v114, v8, aWidth, 5LL);
                        v96 = aWidth;
                        v97 = 5LL;
                        if ( (v114[0] & 1) == 0 )
                        {
                          v60 = 72LL;
                          if ( (v114[1] & 1) == 0 )
                            goto LABEL_132;
                          clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
                            v114,
                            v8,
                            aSeparator,
                            9LL);
                          v96 = aSeparator;
                          v97 = 9LL;
                          if ( (v114[0] & 1) == 0 )
                          {
                            v60 = 512LL;
                            if ( (v114[1] & 1) == 0 )
                              v60 = 72LL;
LABEL_132:
                            uu_pr::parse_usize(&v173, v8, (__int64)aWidth, 5LL);
                            v61 = v173;
                            if ( (_QWORD)v173 != v120 )
                            {
                              v62 = *((_QWORD *)&v173 + 1);
                              if ( (_QWORD)v173 != 0x8000000000000005LL )
                              {
                                v65 = &v174;
                                goto LABEL_176;
                              }
                              v60 = *((_QWORD *)&v173 + 1);
                            }
                            if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                    v8,
                                                    aJoinLines,
                                                    10LL,
                                                    &off_2C7D98)
                              || (uu_pr::parse_usize(&v175, v8, (__int64)aPageWidth, 10LL),
                                  v61 = v175,
                                  (_QWORD)v175 == v120) )
                            {
                              v117 = 0LL;
                              goto LABEL_138;
                            }
                            v62 = *((_QWORD *)&v175 + 1);
                            if ( (_QWORD)v175 == 0x8000000000000005LL )
                            {
                              v117 = 1LL;
                              v121 = *((_QWORD *)&v175 + 1);
LABEL_138:
                              v63 = 0LL;
                              regex::regex::string::Regex::new(&v150, aSDS, 12LL);
                              if ( !v150.m256i_i64[0] )
                              {
                                v156 = v150.m256i_i64[3];
                                v155 = *(_OWORD *)&v150.m256i_u64[1];
                                core::result::unwrap_failed(
                                  anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
                                  43LL,
                                  &v155,
                                  &off_2C7A28,
                                  &off_2C7DB0);
                              }
                              v148 = v150;
                              regex::regex::string::Regex::captures_at(v185, &v148, v124, v125, 0LL);
                              if ( *(_QWORD *)&v185[0] == 2LL )
                              {
                                v64 = 1;
                              }
                              else
                              {
                                *(_QWORD *)&v114[64] = v186;
                                *(_OWORD *)&v114[48] = v185[3];
                                *(_OWORD *)&v114[32] = v185[2];
                                *(_OWORD *)&v114[16] = v185[1];
                                *(_OWORD *)v114 = v185[0];
                                uu_pr::build_options::{{closure}}(v127, v114);
                                v63 = *((_QWORD *)&v127[0] + 1);
                                v168 = v127[1];
                                if ( *(_QWORD *)&v127[0] == 0x8000000000000006LL )
                                {
                                  v64 = 1;
                                }
                                else
                                {
                                  if ( *(_QWORD *)&v127[0] != 0x8000000000000005LL )
                                  {
                                    v78 = a1;
                                    *(_OWORD *)(a1 + 8) = v127[0];
                                    v79 = v168;
                                    goto LABEL_170;
                                  }
                                  v64 = 0;
                                }
                              }
                              uu_pr::parse_usize(v177, v8, (__int64)aColumn, 6LL);
                              if ( *(_QWORD *)&v177[0] == v120 )
                              {
                                if ( v64 )
                                {
                                  *(_QWORD *)&v130 = 0x8000000000000000LL;
                                  v68 = v95;
                                  v69 = v98;
                                  v70 = v92;
                                  v71 = v116;
                                  if ( v104 )
                                    _rust_dealloc(v115, v104, 1LL);
                                  goto LABEL_157;
                                }
LABEL_156:
                                *(_QWORD *)&v130 = v104;
                                *((_QWORD *)&v130 + 1) = v115;
                                *(_QWORD *)&v131 = v58;
                                *((_QWORD *)&v131 + 1) = v60;
                                *(_QWORD *)&v132 = v63;
                                BYTE8(v132) = v94;
                                v68 = v95;
                                v69 = v98;
                                v70 = v92;
                                v71 = v116;
LABEL_157:
                                uu_pr::parse_usize(v178, v8, (__int64)aIndent, 6LL);
                                if ( *(_QWORD *)&v178[0] == v120 )
                                {
                                  v72 = 0LL;
                                  goto LABEL_160;
                                }
                                v72 = *((_QWORD *)&v178[0] + 1);
                                if ( *(_QWORD *)&v178[0] == 0x8000000000000005LL )
                                {
LABEL_160:
                                  alloc::str::<impl str>::repeat(&v146, asc_65952, 1LL, v72);
                                  v73 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                          v8,
                                          aJoinLines,
                                          10LL,
                                          &off_2C7DC8);
                                  if ( (_QWORD)v130 == 0x8000000000000000LL )
                                  {
                                    *(_QWORD *)&v153 = 0x8000000000000000LL;
                                  }
                                  else
                                  {
                                    <alloc::string::String as core::clone::Clone>::clone(v114);
                                    v154 = *(_QWORD *)&v114[16];
                                    v153 = *(_OWORD *)v114;
                                  }
                                  core::option::Option<T>::unwrap_or_else(&v179, &v153, &v134, &off_2C7DE0);
                                  v74 = v134;
                                  v75 = v135;
                                  v76 = v135;
                                  if ( !v134 )
                                  {
                                    if ( (_QWORD)v130 == 0x8000000000000000LL )
                                    {
                                      v77 = v117;
                                      if ( v73 )
                                        v77 = 0LL;
LABEL_209:
                                      v87 = v126;
                                      *(_QWORD *)a1 = v105;
                                      *(_QWORD *)(a1 + 8) = v118;
                                      *(_QWORD *)(a1 + 16) = v74;
                                      *(_QWORD *)(a1 + 24) = v75;
                                      *(_QWORD *)(a1 + 32) = v77;
                                      *(_QWORD *)(a1 + 40) = v121;
                                      *(_QWORD *)(a1 + 48) = v113;
                                      *(_QWORD *)(a1 + 56) = v123;
                                      *(_QWORD *)(a1 + 64) = v140;
                                      *(_QWORD *)(a1 + 72) = v68;
                                      *(_QWORD *)(a1 + 80) = v122;
                                      *(_QWORD *)(a1 + 88) = 1LL;
                                      *(_OWORD *)(a1 + 96) = v128;
                                      *(_QWORD *)(a1 + 112) = v129;
                                      *(_QWORD *)(a1 + 120) = v99;
                                      *(_QWORD *)(a1 + 128) = v69;
                                      *(_QWORD *)(a1 + 136) = v119;
                                      *(_QWORD *)(a1 + 144) = v107;
                                      *(_QWORD *)(a1 + 152) = v106;
                                      *(_QWORD *)(a1 + 160) = 1LL;
                                      *(_QWORD *)(a1 + 184) = v147;
                                      *(_OWORD *)(a1 + 168) = v146;
                                      *(_QWORD *)(a1 + 208) = v180;
                                      *(_OWORD *)(a1 + 192) = v179;
                                      *(_QWORD *)(a1 + 248) = v138;
                                      v88 = v136;
                                      *(_OWORD *)(a1 + 232) = v137;
                                      *(_OWORD *)(a1 + 216) = v88;
                                      v89 = v130;
                                      v90 = v131;
                                      *(_OWORD *)(a1 + 288) = v132;
                                      *(_OWORD *)(a1 + 272) = v90;
                                      *(_OWORD *)(a1 + 256) = v89;
                                      *(_QWORD *)(a1 + 304) = v87;
                                      *(_QWORD *)(a1 + 312) = v139;
                                      *(_BYTE *)(a1 + 320) = v70;
                                      *(_BYTE *)(a1 + 321) = v71;
                                      *(_BYTE *)(a1 + 322) = v93;
                                      *(_BYTE *)(a1 + 323) = v73;
                                      core::ptr::drop_in_place<regex::regex::string::Regex>(&v148);
                                      core::ptr::drop_in_place<regex::regex::string::Regex>(&v133);
                                      return a1;
                                    }
                                    v76 = v132;
                                  }
                                  if ( v73 )
                                  {
                                    v77 = 0LL;
                                  }
                                  else
                                  {
                                    v77 = v117;
                                    if ( v76 > 1 )
                                    {
                                      if ( (_QWORD)v130 == 0x8000000000000000LL )
                                        v86 = 72LL;
                                      else
                                        v86 = *((_QWORD *)&v131 + 1);
                                      v121 = v86;
                                      v77 = 1LL;
                                    }
                                  }
                                  goto LABEL_209;
                                }
                                *(_QWORD *)(a1 + 8) = *(_QWORD *)&v178[0];
                                *(_QWORD *)(a1 + 16) = v72;
                                *(_OWORD *)(a1 + 24) = v178[1];
                                *(_QWORD *)a1 = 2LL;
                                v80 = 1;
                                if ( 2LL * (_QWORD)v130 )
                                  _rust_dealloc(*((_QWORD *)&v130 + 1), v130, 1LL);
LABEL_173:
                                core::ptr::drop_in_place<regex::regex::string::Regex>(&v148);
                                v81 = v104;
                                v82 = ((v104 == 0) | (unsigned __int8)v80) == 0;
                                v30 = v95;
                                v83 = v106;
                                v84 = v107;
                                if ( !v82 )
                                {
LABEL_178:
                                  if ( v84 )
                                    _rust_dealloc(v83, v84, 1LL);
LABEL_184:
                                  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v133);
                                  if ( !_InterlockedDecrement64((volatile signed __int64 *)v133.m256i_i64[2]) )
                                    alloc::sync::Arc<T,A>::drop_slow(&v133.m256i_u64[2]);
                                  if ( v99 )
                                    _rust_dealloc(v98, v99, 1LL);
                                  if ( v30 )
                                    _rust_dealloc(v122, v30, 1LL);
                                  if ( (_QWORD)v128 )
                                    _rust_dealloc(*((_QWORD *)&v128 + 1), v128, 1LL);
                                  if ( 2LL * (_QWORD)v136 )
                                  {
                                    _rust_dealloc(*((_QWORD *)&v136 + 1), v136, 1LL);
                                    if ( !v113 )
                                      return a1;
                                  }
                                  else if ( !v113 )
                                  {
                                    return a1;
                                  }
LABEL_194:
                                  _rust_dealloc(v123, v113, 1LL);
                                  return a1;
                                }
LABEL_177:
                                _rust_dealloc(v115, v81, 1LL);
                                goto LABEL_178;
                              }
                              v63 = *((_QWORD *)&v177[0] + 1);
                              if ( *(_QWORD *)&v177[0] == 0x8000000000000005LL )
                                goto LABEL_156;
                              v78 = a1;
                              *(_QWORD *)(a1 + 8) = *(_QWORD *)&v177[0];
                              *(_QWORD *)(a1 + 16) = v63;
                              v79 = v177[1];
LABEL_170:
                              *(_OWORD *)(v78 + 24) = v79;
                              *(_QWORD *)v78 = 2LL;
                              v80 = 0;
                              goto LABEL_173;
                            }
                            v65 = &v176;
LABEL_176:
                            *(_QWORD *)(a1 + 8) = v61;
                            *(_QWORD *)(a1 + 16) = v62;
                            *(_OWORD *)(a1 + 24) = *(_OWORD *)v65;
                            *(_QWORD *)a1 = 2LL;
                            v81 = v104;
                            v83 = v106;
                            v84 = v107;
                            if ( !v104 )
                              goto LABEL_178;
                            goto LABEL_177;
                          }
                        }
                        v127[3] = *(_OWORD *)&v114[56];
                        v127[2] = *(_OWORD *)&v114[40];
                        v127[1] = *(_OWORD *)&v114[24];
                        v127[0] = *(_OWORD *)&v114[8];
                        v100 = &v96;
                        v101 = <&T as core::fmt::Display>::fmt;
                        v102 = v127;
                        v103 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                        v108 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
                        v109 = 2LL;
                        v112 = 0LL;
                        v110 = &v100;
                        v111 = 2LL;
                        core::panicking::panic_fmt(
                          &v108,
                          &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
                      }
                    }
                    v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            v8,
                            aOmitHeader,
                            11LL,
                            &off_2C7D08);
                    LOBYTE(v52) = v52 ^ 1;
                    v51 -= 10LL;
                    goto LABEL_111;
                  }
                  v45 = 0x8000000000000006LL;
                  if ( *(_QWORD *)v114 == 0x8000000000000006LL )
                  {
LABEL_105:
                    if ( !v44 )
                      goto LABEL_108;
                    goto LABEL_106;
                  }
                  v66 = a1;
                  *(_OWORD *)(a1 + 8) = *(_OWORD *)v114;
                  v67 = v166;
LABEL_200:
                  *(_OWORD *)(v66 + 24) = v67;
                  *(_QWORD *)v66 = 2LL;
                  goto LABEL_184;
                }
                v127[3] = *(_OWORD *)&v114[56];
                v127[2] = *(_OWORD *)&v114[40];
                v127[1] = *(_OWORD *)&v114[24];
                v127[0] = *(_OWORD *)&v114[8];
                v100 = &v96;
                v101 = <&T as core::fmt::Display>::fmt;
                v102 = v127;
                v103 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v108 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
                v91 = &off_2C7CC0;
              }
              v109 = 2LL;
              v112 = 0LL;
              v110 = &v100;
              v111 = 2LL;
              core::panicking::panic_fmt(&v108, v91);
            }
            v44 = 0;
LABEL_84:
            v105 = 0LL;
            goto LABEL_85;
          }
        }
        else if ( v38 )
        {
          v39 = 0LL;
          while ( *(_BYTE *)(v37 + v39) != 58 )
          {
            if ( v38 == ++v39 )
              goto LABEL_83;
          }
          goto LABEL_80;
        }
      }
    }
LABEL_83:
    v44 = 0;
    goto LABEL_84;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v114, 60LL, 0LL);
  v10 = *(_QWORD *)&v114[8];
  if ( *(_QWORD *)v114 )
    goto LABEL_218;
  v11 = *(void **)&v114[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_65953, *(_QWORD *)&v114[16], 1LL, 1LL, 60LL);
  qmemcpy(v11, "cannot specify both printing across and printing in parallel", 60);
  v12 = (_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0x8000000000000001LL;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 32) = 60LL;
LABEL_17:
  *v12 = 2LL;
  return a1;
}
