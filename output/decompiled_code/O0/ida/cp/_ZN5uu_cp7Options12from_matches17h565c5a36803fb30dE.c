__int64 __fastcall uu_cp::Options::from_matches(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // r15
  size_t v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  void *v10; // r12
  __int64 v11; // r14
  char flag; // bp
  void (__fastcall **v13)(__int64); // rax
  void (__fastcall *v14)(__int64); // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const void *v22; // r15
  signed __int64 v23; // rbx
  void *v24; // r13
  void *v25; // r12
  const void *v26; // r14
  size_t v27; // rbx
  __int64 v28; // r15
  void *v29; // r12
  unsigned __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r15
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r15
  __int64 i; // rax
  __int64 v43; // rbx
  __int64 v44; // r14
  __int64 v45; // r12
  __int64 *v46; // rax
  unsigned int v47; // r12d
  char v48; // bp
  unsigned __int64 v49; // r15
  __m256i *v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r15
  char v57; // cl
  unsigned int v58; // eax
  char v59; // cl
  int v60; // edx
  char v61; // cl
  int v62; // edx
  char v63; // dl
  int v64; // edx
  int v65; // edx
  unsigned __int8 v66; // si
  int v67; // r12d
  __int64 v68; // rbx
  __m128i *v69; // r15
  char v70; // r15
  char v71; // r13
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __m128i *v80; // rdx
  __int64 v81; // rsi
  __m128i v82; // xmm0
  __int64 v83; // rax
  char v84; // r13
  __int64 v85; // rax
  __int64 v86; // rcx
  void (__fastcall *v88)(_QWORD); // r15
  __int64 v89; // rbx
  __int64 v90; // r14
  char v91; // al
  __int16 v92; // si
  char v93; // di
  char *v94; // rax
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __m128i v97; // xmm0
  __m128i v98; // xmm1
  __m128i v99; // xmm0
  __m128i v100; // xmm1
  char **v101; // rsi
  __m128i v102; // xmm0
  __m128i v103; // xmm1
  char v104; // [rsp+Ch] [rbp-5CCh]
  char v106; // [rsp+1Ch] [rbp-5BCh]
  char v107; // [rsp+20h] [rbp-5B8h]
  int v108; // [rsp+24h] [rbp-5B4h]
  int v109; // [rsp+28h] [rbp-5B0h]
  int v110; // [rsp+2Ch] [rbp-5ACh]
  char v111; // [rsp+32h] [rbp-5A6h]
  char v112; // [rsp+33h] [rbp-5A5h]
  char v113; // [rsp+34h] [rbp-5A4h]
  char v114; // [rsp+35h] [rbp-5A3h]
  char v115; // [rsp+36h] [rbp-5A2h]
  char v116; // [rsp+37h] [rbp-5A1h]
  char v117; // [rsp+38h] [rbp-5A0h]
  char v118; // [rsp+39h] [rbp-59Fh]
  char v119; // [rsp+3Ah] [rbp-59Eh]
  char v120; // [rsp+3Bh] [rbp-59Dh]
  char v121; // [rsp+3Ch] [rbp-59Ch]
  char v122; // [rsp+3Dh] [rbp-59Bh]
  char v123; // [rsp+3Eh] [rbp-59Ah]
  char updated; // [rsp+3Fh] [rbp-599h]
  char v125; // [rsp+40h] [rbp-598h]
  char v126; // [rsp+4Ch] [rbp-58Ch]
  char v127; // [rsp+50h] [rbp-588h]
  char v128; // [rsp+54h] [rbp-584h]
  char v130[8]; // [rsp+60h] [rbp-578h] BYREF
  unsigned int v131; // [rsp+68h] [rbp-570h]
  _BYTE v132[8]; // [rsp+6Ch] [rbp-56Ch] BYREF
  unsigned int v133; // [rsp+74h] [rbp-564h]
  char v134[8]; // [rsp+78h] [rbp-560h] BYREF
  unsigned int v135; // [rsp+80h] [rbp-558h]
  _BYTE v136[8]; // [rsp+84h] [rbp-554h] BYREF
  unsigned int v137; // [rsp+8Ch] [rbp-54Ch]
  char v138[8]; // [rsp+90h] [rbp-548h] BYREF
  unsigned int v139; // [rsp+98h] [rbp-540h]
  _BYTE v140[8]; // [rsp+9Ch] [rbp-53Ch] BYREF
  unsigned int v141; // [rsp+A4h] [rbp-534h]
  __m256i *v142; // [rsp+A8h] [rbp-530h] BYREF
  __m256i dest; // [rsp+B0h] [rbp-528h] BYREF
  __int128 v144; // [rsp+D0h] [rbp-508h]
  __int128 v145; // [rsp+E0h] [rbp-4F8h]
  const char *v146; // [rsp+F0h] [rbp-4E8h] BYREF
  __int64 v147; // [rsp+F8h] [rbp-4E0h]
  __int64 v148; // [rsp+100h] [rbp-4D8h] BYREF
  void (__fastcall **v149)(__int64); // [rsp+108h] [rbp-4D0h]
  __int64 v150; // [rsp+110h] [rbp-4C8h] BYREF
  __int64 v151; // [rsp+118h] [rbp-4C0h]
  unsigned __int64 v152; // [rsp+120h] [rbp-4B8h]
  const char **v153; // [rsp+128h] [rbp-4B0h] BYREF
  __int64 (__fastcall *v154)(); // [rsp+130h] [rbp-4A8h]
  __m256i *v155; // [rsp+138h] [rbp-4A0h]
  __int64 (__fastcall *v156)(); // [rsp+140h] [rbp-498h]
  void *src[2]; // [rsp+148h] [rbp-490h] BYREF
  size_t n; // [rsp+158h] [rbp-480h]
  __m256i v159; // [rsp+160h] [rbp-478h] BYREF
  __int128 v160; // [rsp+180h] [rbp-458h]
  __int128 v161; // [rsp+190h] [rbp-448h]
  __m128i v162; // [rsp+1A0h] [rbp-438h] BYREF
  const char ***v163; // [rsp+1B0h] [rbp-428h]
  __int64 v164; // [rsp+1B8h] [rbp-420h]
  __int64 v165; // [rsp+1C0h] [rbp-418h]
  void (__fastcall *v166)(_QWORD); // [rsp+1D8h] [rbp-400h] BYREF
  __int64 v167; // [rsp+1E0h] [rbp-3F8h]
  __int64 v168; // [rsp+1E8h] [rbp-3F0h]
  __int64 v169; // [rsp+1F0h] [rbp-3E8h] BYREF
  __int64 *v170; // [rsp+1F8h] [rbp-3E0h]
  __int64 v171; // [rsp+200h] [rbp-3D8h]
  unsigned __int64 v172; // [rsp+208h] [rbp-3D0h]
  __int64 v173; // [rsp+210h] [rbp-3C8h] BYREF
  __int64 v174; // [rsp+218h] [rbp-3C0h]
  __int64 v175; // [rsp+220h] [rbp-3B8h]
  __int64 v176; // [rsp+228h] [rbp-3B0h]
  __m128i v177; // [rsp+230h] [rbp-3A8h] BYREF
  size_t v178; // [rsp+240h] [rbp-398h]
  __int64 v179; // [rsp+250h] [rbp-388h] BYREF
  void (__fastcall **v180)(__int64); // [rsp+258h] [rbp-380h]
  __int64 v181; // [rsp+260h] [rbp-378h] BYREF
  int v182; // [rsp+268h] [rbp-370h]
  __int64 v183; // [rsp+270h] [rbp-368h] BYREF
  __m128i v184; // [rsp+278h] [rbp-360h] BYREF
  __m128i v185; // [rsp+288h] [rbp-350h] BYREF
  __int128 v186; // [rsp+298h] [rbp-340h]
  __int64 v187; // [rsp+2A8h] [rbp-330h] BYREF
  __int64 v188; // [rsp+2B0h] [rbp-328h]
  __m128i *v189; // [rsp+2B8h] [rbp-320h]
  __int64 v190; // [rsp+2C0h] [rbp-318h]
  __m128i v191; // [rsp+2C8h] [rbp-310h] BYREF
  __m128i v192; // [rsp+2D8h] [rbp-300h] BYREF
  _QWORD v193[2]; // [rsp+2E8h] [rbp-2F0h] BYREF
  __int64 v194; // [rsp+2F8h] [rbp-2E0h] BYREF
  char v195; // [rsp+300h] [rbp-2D8h]
  __int64 v196; // [rsp+301h] [rbp-2D7h]
  __int16 v197; // [rsp+309h] [rbp-2CFh]
  char v198; // [rsp+30Bh] [rbp-2CDh]
  char v199; // [rsp+30Ch] [rbp-2CCh] BYREF
  _QWORD v200[2]; // [rsp+338h] [rbp-2A0h] BYREF
  _QWORD v201[2]; // [rsp+348h] [rbp-290h] BYREF
  const char *v202; // [rsp+358h] [rbp-280h]
  _QWORD v203[9]; // [rsp+360h] [rbp-278h]
  unsigned __int64 v204; // [rsp+3A8h] [rbp-230h]
  __int64 v205; // [rsp+3B0h] [rbp-228h]
  __int64 v206; // [rsp+3B8h] [rbp-220h] BYREF
  __int128 v207; // [rsp+3C0h] [rbp-218h]
  __int128 v208; // [rsp+3D0h] [rbp-208h] BYREF
  unsigned __int64 v209; // [rsp+3E0h] [rbp-1F8h]
  __int8 *v210; // [rsp+3E8h] [rbp-1F0h]
  __int128 v211; // [rsp+3F0h] [rbp-1E8h] BYREF
  unsigned __int64 v212; // [rsp+400h] [rbp-1D8h]
  __int8 *v213; // [rsp+408h] [rbp-1D0h]
  _QWORD v214[3]; // [rsp+410h] [rbp-1C8h] BYREF
  char v215; // [rsp+428h] [rbp-1B0h]
  __m128i v216; // [rsp+430h] [rbp-1A8h] BYREF
  __int64 v217; // [rsp+440h] [rbp-198h]
  __int64 v218; // [rsp+448h] [rbp-190h] BYREF
  __int128 v219; // [rsp+450h] [rbp-188h]
  __int64 v220; // [rsp+460h] [rbp-178h] BYREF
  __m128i v221; // [rsp+468h] [rbp-170h] BYREF
  __int64 v222; // [rsp+478h] [rbp-160h] BYREF
  __m128i v223; // [rsp+480h] [rbp-158h]
  __m128i v224; // [rsp+490h] [rbp-148h] BYREF
  __int64 v225; // [rsp+4A0h] [rbp-138h]
  _QWORD v226[6]; // [rsp+4A8h] [rbp-130h] BYREF
  __m128i v227; // [rsp+4D8h] [rbp-100h] BYREF
  __int64 v228; // [rsp+4E8h] [rbp-F0h]
  _QWORD v229[6]; // [rsp+4F0h] [rbp-E8h] BYREF
  __int64 v230; // [rsp+520h] [rbp-B8h] BYREF
  __int64 v231; // [rsp+528h] [rbp-B0h]
  int v232; // [rsp+530h] [rbp-A8h]
  char v233; // [rsp+534h] [rbp-A4h] BYREF
  __int64 v234; // [rsp+560h] [rbp-78h] BYREF
  _BYTE *v235; // [rsp+568h] [rbp-70h]

  v2 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 16LL, 0LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 16LL);
  if ( (v2 & 7) != 0 )
    core::panicking::panic_misaligned_pointer_dereference(8LL, v2, &off_181DF0);
  *(_QWORD *)v2 = aContext;
  *(_QWORD *)(v2 + 8) = 7LL;
  v173 = v2;
  v175 = 1LL;
  v176 = v2 + 16;
  do
  {
    v174 = v2 + 16;
    v3 = *(const char **)v2;
    if ( !*(_QWORD *)v2 )
      break;
    v4 = *(_QWORD *)(v2 + 8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(&v142, a2, *(_QWORD *)v2, v4);
    v146 = v3;
    v147 = v4;
    if ( ((unsigned __int8)v142 & 1) != 0 )
    {
      v161 = v145;
      v160 = v144;
      v159 = dest;
      v153 = &v146;
      v154 = <&T as core::fmt::Display>::fmt;
      v155 = &v159;
      v156 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v162.m128i_i64[0] = (__int64)&anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
      v162.m128i_i64[1] = 2LL;
      v165 = 0LL;
      v163 = &v153;
      v164 = 2LL;
      core::panicking::panic_fmt(
        &v162,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950,
        v5,
        v6,
        v7,
        v8);
    }
    if ( (BYTE1(v142) & 1) != 0
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, v3, v4, &off_182070) == 2 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v142, v4, 0LL);
      v9 = dest.m256i_i64[0];
      if ( v142 )
        alloc::raw_vec::handle_error(dest.m256i_i64[0], dest.m256i_i64[1]);
      v10 = (void *)dest.m256i_i64[1];
      core::intrinsics::copy_nonoverlapping::precondition_check(v3, dest.m256i_i64[1], 1LL, 1LL, v4);
      memcpy(v10, v3, v4);
      *(_QWORD *)(a1 + 8) = 10LL;
      *(_QWORD *)(a1 + 16) = v9;
      v11 = a1;
      *(_QWORD *)(a1 + 24) = v10;
      *(_QWORD *)(a1 + 32) = v4;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v173);
      return v11;
    }
    v2 = v174;
  }
  while ( v174 != v176 );
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v173);
  flag = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a2,
                           aRecursive,
                           9LL,
                           &off_181E08) )
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aArchive, 7LL, &off_181E20);
  uucore::features::backup_control::determine_backup_mode(&v179, a2);
  v11 = a1;
  if ( v179 )
  {
    v148 = v179;
    v149 = v180;
    v193[0] = &v148;
    v193[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v142 = (__m256i *)anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
    dest.m256i_i64[0] = 1LL;
    dest.m256i_i64[1] = (__int64)v193;
    *(_OWORD *)&dest.m256i_u64[2] = 1uLL;
    alloc::fmt::format::format_inner(&v216, &v142);
    *(_QWORD *)(a1 + 8) = 11LL;
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(&v216);
    *(_QWORD *)(a1 + 32) = v217;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    v13 = v149;
    if ( *v149 )
    {
      (*v149)(v148);
      v13 = v149;
    }
    v14 = v13[1];
    if ( v14 )
    {
      v15 = (__int64)v13[2];
      v16 = v148;
      goto LABEL_146;
    }
    return v11;
  }
  v17 = (char)v180;
  updated = uucore::features::update_control::determine_update_mode(a2);
  uucore::features::backup_control::determine_backup_suffix(&v166, a2);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          aInteractive,
                          11LL,
                          &off_181D20) )
  {
    v128 = 1;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aForce, 5LL, &off_181CF0) )
    {
      v126 = 0;
      goto LABEL_25;
    }
LABEL_24:
    v126 = 2 - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRemoveDestinat, 18LL, &off_181D08);
    goto LABEL_25;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          aNoClobber,
                          10LL,
                          &off_181D38) )
  {
    v128 = 2;
    v126 = 2;
    goto LABEL_25;
  }
  v128 = 0;
  v126 = 0;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aForce, 5LL, &off_181CF0) )
    goto LABEL_24;
LABEL_25:
  v123 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoTargetDirect, 19LL, &off_181E38);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v142, a2, aTargetDirector, 16LL);
  v146 = aTargetDirector;
  v147 = 16LL;
  if ( v142 )
  {
    v97 = _mm_loadu_si128((const __m128i *)&dest);
    v98 = _mm_loadu_si128((const __m128i *)&dest.m256i_u64[2]);
    v161 = v145;
    v160 = v144;
    *(__m128i *)&v159.m256i_u64[2] = v98;
    *(__m128i *)v159.m256i_i8 = v97;
    v153 = &v146;
    v154 = <&T as core::fmt::Display>::fmt;
    v155 = &v159;
    v156 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v162.m128i_i64[0] = (__int64)&anon_69e5fecc8813cd2daa240795ffa1a247_2_llvm_7691381228455331083;
    v162.m128i_i64[1] = 2LL;
    v165 = 0LL;
    v163 = &v153;
    v164 = 2LL;
    core::panicking::panic_fmt(&v162, &off_181E50, v18, v19, v20, v21);
  }
  v122 = v17;
  if ( dest.m256i_i64[0] )
  {
    v22 = *(const void **)(dest.m256i_i64[0] + 8);
    v23 = *(_QWORD *)(dest.m256i_i64[0] + 16);
    core::slice::raw::from_raw_parts::precondition_check(v22, 1LL, 1LL, v23);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v142, v23, 0LL);
    v24 = (void *)dest.m256i_i64[0];
    if ( v142 )
      alloc::raw_vec::handle_error(dest.m256i_i64[0], dest.m256i_i64[1]);
    v25 = (void *)dest.m256i_i64[1];
    core::intrinsics::copy_nonoverlapping::precondition_check(v22, dest.m256i_i64[1], 1LL, 1LL, v23);
    memcpy(v25, v22, v23);
    src[0] = v24;
    src[1] = v25;
    n = v23;
    if ( v24 != (void *)0x8000000000000000LL )
    {
      if ( !v25 || v23 < 0 )
        goto LABEL_158;
      if ( !(unsigned __int8)std::path::Path::is_dir(v25, v23) )
      {
        v26 = src[1];
        v27 = n;
        core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n);
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v142, v27, 0LL);
        v28 = dest.m256i_i64[0];
        if ( v142 )
          alloc::raw_vec::handle_error(dest.m256i_i64[0], dest.m256i_i64[1]);
        v29 = (void *)dest.m256i_i64[1];
        core::intrinsics::copy_nonoverlapping::precondition_check(v26, dest.m256i_i64[1], 1LL, 1LL, v27);
        memcpy(v29, v26, v27);
        v11 = a1;
        *(_QWORD *)(a1 + 8) = 12LL;
        *(_QWORD *)(a1 + 16) = v28;
        *(_QWORD *)(a1 + 24) = v29;
        *(_QWORD *)(a1 + 32) = v27;
        goto LABEL_141;
      }
    }
  }
  else
  {
    src[0] = (void *)0x8000000000000000LL;
  }
  v113 = flag;
  v150 = 0LL;
  v151 = 8LL;
  v152 = 0LL;
  v202 = aPreserve;
  v203[0] = 8LL;
  v203[1] = aNoPreserve;
  v203[2] = 11LL;
  v203[3] = aArchive;
  v203[4] = 7LL;
  v203[5] = aPreserveDefaul;
  v203[6] = 27LL;
  v203[7] = aNoDereferenceP;
  v203[8] = 29LL;
  v204 = 0LL;
  v205 = 5LL;
  v30 = 0LL;
  do
  {
    v35 = v30++;
    v204 = v30;
    if ( v35 >= 5 )
      core::panicking::panic_nounwind(anon_66827f6b5e96d838f084441030a41a9e_47_llvm_16861867776640412384, 97LL);
    v36 = 2 * v35;
    v37 = v203[v36 - 1];
    if ( !v37 )
      break;
    v38 = v203[v36];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v234, a2, v203[v36 - 1], v38);
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, v37, v38, &off_182028);
    if ( !v234 && v39 == 1 && v235 )
    {
      if ( (*v235 & 1) != 0 )
      {
        v185 = (__m128i)v40;
        v184.m128i_i64[0] = v37;
        v184.m128i_i64[1] = v38;
        v186 = 8uLL;
        v41 = v152;
        if ( v152 == v150 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v150);
        v31 = v151;
        v32 = 48 * v41;
        v33 = _mm_loadu_si128(&v184);
        v34 = _mm_loadu_si128(&v185);
        *(_OWORD *)(v151 + v32 + 32) = v186;
        *(__m128i *)(v31 + v32 + 16) = v34;
        *(__m128i *)(v31 + v32) = v33;
        v152 = v41 + 1;
      }
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::get_occurrences(&v218, a2, v37, v38, &off_182040);
      clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v220, a2, v37, v38, &off_182058);
      if ( v218 && v220 )
      {
        v206 = v218;
        v207 = v219;
        v222 = v220;
        v223 = _mm_loadu_si128(&v221);
        v142 = (__m256i *)&v222;
        dest.m256i_i64[0] = (__int64)&v150;
        dest.m256i_i64[1] = v37;
        dest.m256i_i64[2] = v38;
        for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v206);
              i;
              i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v206) )
        {
          (*((void (__fastcall **)(__m256i *, __int64))&v207 + 1))(&v159, i);
          v162 = _mm_loadu_si128((const __m128i *)&v159.m256i_u64[1]);
          if ( !v159.m256i_i64[0] )
            break;
          *(__m128i *)&v159.m256i_u64[1] = _mm_load_si128(&v162);
          uu_cp::Options::from_matches::{{closure}}(&v142, &v159);
        }
      }
    }
  }
  while ( v30 != 5 );
  v43 = v151;
  if ( !v151 || (v151 & 7) != 0 || v152 >= 0x2AAAAAAAAAAAAABLL )
    core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_25_llvm_1613436602710632571, 166LL);
  v142 = &v159;
  if ( v152 >= 2 )
  {
    if ( v152 >= 0x15 )
    {
      core::slice::sort::stable::driftsort_main(v151, v152, &v142);
    }
    else
    {
      v44 = 48 * v152;
      v45 = 48LL;
      do
      {
        core::slice::sort::shared::smallsort::insert_tail(v43, v43 + v45, &v142);
        v45 += 48LL;
      }
      while ( v44 != v45 );
    }
  }
  v46 = (__int64 *)v151;
  v169 = v151;
  v170 = (__int64 *)v151;
  v171 = v150;
  v172 = v151 + 48 * v152;
  if ( !v152 )
  {
    v104 = 0;
    v48 = 0;
    v47 = 0;
    LOBYTE(v110) = 0;
    v107 = 0;
    LOBYTE(v108) = 0;
    v106 = 0;
    LOBYTE(v109) = 0;
    v125 = 0;
    v11 = a1;
LABEL_101:
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v169);
    if ( (v104 & 1) != 0 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v142, 48LL, 0LL);
      v68 = dest.m256i_i64[0];
      if ( v142 )
        alloc::raw_vec::handle_error(dest.m256i_i64[0], dest.m256i_i64[1]);
      v69 = (__m128i *)dest.m256i_i64[1];
      core::intrinsics::copy_nonoverlapping::precondition_check(aSelinuxWasNotE, dest.m256i_i64[1], 1LL, 1LL, 48LL);
      qmemcpy(&v69[1], "enabled during the compile time!", 32);
      *v69 = _mm_loadu_si128((const __m128i *)aSelinuxWasNotE);
      v188 = v68;
      v189 = v69;
      v190 = 48LL;
      v187 = 4LL;
      if ( (v48 & 1) != 0 )
      {
        v78 = v187;
        v79 = v188;
        v80 = v189;
        v81 = v190;
        v82 = _mm_loadu_si128(&v191);
        *(__m128i *)(v11 + 56) = _mm_loadu_si128(&v192);
        *(__m128i *)(v11 + 40) = v82;
        *(_QWORD *)(v11 + 24) = v80;
        *(_QWORD *)(v11 + 32) = v81;
        *(_QWORD *)(v11 + 8) = v78;
        *(_QWORD *)(v11 + 16) = v79;
LABEL_141:
        *(_QWORD *)v11 = 0x8000000000000000LL;
        goto LABEL_142;
      }
      uu_cp::show_error_if_needed(&v187);
      core::ptr::drop_in_place<uu_cp::Error>(&v187);
    }
    v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAttributesOnly, 15LL, &off_181E68);
    v71 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCopyContents, 13LL, &off_181E80);
    v121 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCliSymbolicLin, 18LL, &off_181E98);
    v120 = uu_cp::CopyMode::from_matches(a2);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            aNoDereference,
                            14LL,
                            &off_181EB0)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            aNoDereferenceP,
                            29LL,
                            &off_181EC8)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            aArchive,
                            7LL,
                            &off_181EE0)
      || (v111 = 1, v113) && (unsigned __int8)uu_cp::CopyMode::from_matches(a2) )
    {
      v111 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDereference, 11LL, &off_181EF8);
    }
    v119 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aOneFileSystem, 15LL, &off_181F10);
    v118 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aParents, 7LL, &off_181F28);
    v117 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDebug, 5LL, &off_181F40);
    v112 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             aVerbose,
                             7LL,
                             &off_181F58) )
      v112 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDebug, 5LL, &off_181F70);
    v116 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aStripTrailingS, 22LL, &off_181F88);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v142, a2, aReflink_0, 7LL);
    v146 = aReflink_0;
    v147 = 7LL;
    if ( v142 )
    {
      v99 = _mm_loadu_si128((const __m128i *)&dest);
      v100 = _mm_loadu_si128((const __m128i *)&dest.m256i_u64[2]);
      v161 = v145;
      v160 = v144;
      *(__m128i *)&v159.m256i_u64[2] = v100;
      *(__m128i *)v159.m256i_i8 = v99;
      v153 = &v146;
      v154 = <&T as core::fmt::Display>::fmt;
      v155 = &v159;
      v156 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v162.m128i_i64[0] = (__int64)&anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v101 = &off_181FA0;
      goto LABEL_165;
    }
    v127 = 1;
    if ( dest.m256i_i64[0] )
    {
      v76 = *(_QWORD *)(dest.m256i_i64[0] + 8);
      if ( !v76 )
        goto LABEL_158;
      v77 = *(_QWORD *)(dest.m256i_i64[0] + 16);
      if ( v77 < 0 )
        goto LABEL_158;
      if ( v77 == 4 )
      {
        if ( *(_DWORD *)v76 == 1869903201 )
          goto LABEL_127;
      }
      else if ( v77 == 5 )
      {
        if ( !(*(_DWORD *)v76 ^ 0x6576656E | *(unsigned __int8 *)(v76 + 4) ^ 0x72) )
        {
          v127 = 2;
          goto LABEL_127;
        }
      }
      else if ( v77 == 6 && !(*(_DWORD *)v76 ^ 0x61776C61 | *(unsigned __int16 *)(v76 + 4) ^ 0x7379) )
      {
        v127 = 0;
        goto LABEL_127;
      }
      v214[0] = 0LL;
      v214[1] = v76;
      v214[2] = v77;
      v215 = 1;
      v200[0] = v214;
      v200[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v226[0] = &off_181FB8;
      v226[1] = 2LL;
      v226[4] = 0LL;
      v226[2] = v200;
      v226[3] = 1LL;
      alloc::fmt::format(&v224, v226);
      *(_QWORD *)(v11 + 8) = 9LL;
      *(__m128i *)(v11 + 16) = _mm_loadu_si128(&v224);
      v83 = v225;
LABEL_140:
      *(_QWORD *)(v11 + 32) = v83;
      goto LABEL_141;
    }
LABEL_127:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v142, a2, aSparse, 6LL);
    v115 = v71;
    v146 = aSparse;
    v147 = 6LL;
    if ( !v142 )
    {
      v84 = 1;
      v114 = v70;
      if ( !dest.m256i_i64[0] )
      {
LABEL_148:
        v88 = v166;
        v89 = v167;
        v90 = v168;
        v177 = _mm_loadu_si128((const __m128i *)src);
        v178 = n;
        v91 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "progressAltStyle", 8LL, &off_182010);
        *(_QWORD *)a1 = v88;
        *(_QWORD *)(a1 + 8) = v89;
        *(_QWORD *)(a1 + 16) = v90;
        v11 = a1;
        *(__m128i *)(a1 + 24) = _mm_load_si128(&v177);
        *(_QWORD *)(a1 + 40) = v178;
        *(_BYTE *)(a1 + 48) = v110;
        *(_BYTE *)(a1 + 49) = v107;
        *(_BYTE *)(a1 + 50) = v108;
        *(_BYTE *)(a1 + 51) = v106;
        *(_BYTE *)(a1 + 52) = v109;
        *(_BYTE *)(a1 + 53) = v125;
        *(_BYTE *)(a1 + 54) = v104;
        *(_BYTE *)(a1 + 55) = v48;
        *(_DWORD *)(a1 + 56) = v47;
        *(_BYTE *)(a1 + 60) = v128;
        *(_BYTE *)(a1 + 61) = v126;
        *(_BYTE *)(a1 + 62) = v114;
        *(_BYTE *)(a1 + 63) = v115;
        *(_BYTE *)(a1 + 64) = v121;
        *(_BYTE *)(a1 + 65) = v111;
        *(_BYTE *)(a1 + 66) = v123;
        *(_BYTE *)(a1 + 67) = v119;
        *(_BYTE *)(a1 + 68) = v118;
        *(_BYTE *)(a1 + 69) = v116;
        *(_BYTE *)(a1 + 70) = v113;
        *(_BYTE *)(a1 + 71) = v117;
        *(_BYTE *)(a1 + 72) = v112;
        *(_BYTE *)(a1 + 73) = v91;
        *(_BYTE *)(a1 + 74) = v84;
        *(_BYTE *)(a1 + 75) = v127;
        *(_BYTE *)(a1 + 76) = v122;
        *(_BYTE *)(a1 + 77) = updated;
        *(_BYTE *)(a1 + 78) = v120;
        return v11;
      }
      v183 = dest.m256i_i64[0];
      v85 = *(_QWORD *)(dest.m256i_i64[0] + 8);
      if ( v85 )
      {
        v86 = *(_QWORD *)(dest.m256i_i64[0] + 16);
        if ( v86 >= 0 )
        {
          if ( v86 == 4 )
          {
            if ( *(_DWORD *)v85 == 1869903201 )
              goto LABEL_148;
          }
          else if ( v86 == 5 )
          {
            if ( !(*(_DWORD *)v85 ^ 0x6576656E | *(unsigned __int8 *)(v85 + 4) ^ 0x72) )
            {
              v84 = 2;
              goto LABEL_148;
            }
          }
          else if ( v86 == 6 && !(*(_DWORD *)v85 ^ 0x61776C61 | *(unsigned __int16 *)(v85 + 4) ^ 0x7379) )
          {
            v84 = 0;
            goto LABEL_148;
          }
          v201[0] = &v183;
          v201[1] = <&T as core::fmt::Display>::fmt;
          v229[0] = &off_181FF0;
          v229[1] = 2LL;
          v229[4] = 0LL;
          v229[2] = v201;
          v229[3] = 1LL;
          alloc::fmt::format(&v227, v229);
          *(_QWORD *)(v11 + 8) = 9LL;
          *(__m128i *)(v11 + 16) = _mm_loadu_si128(&v227);
          v83 = v228;
          goto LABEL_140;
        }
      }
LABEL_158:
      core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
    }
    v102 = _mm_loadu_si128((const __m128i *)&dest);
    v103 = _mm_loadu_si128((const __m128i *)&dest.m256i_u64[2]);
    v161 = v145;
    v160 = v144;
    *(__m128i *)&v159.m256i_u64[2] = v103;
    *(__m128i *)v159.m256i_i8 = v102;
    v153 = &v146;
    v154 = <&T as core::fmt::Display>::fmt;
    v155 = &v159;
    v156 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v162.m128i_i64[0] = (__int64)&anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v101 = &off_181FD8;
LABEL_165:
    v162.m128i_i64[1] = 2LL;
    v165 = 0LL;
    v163 = &v153;
    v164 = 2LL;
    core::panicking::panic_fmt(&v162, v101, v72, v73, v74, v75);
  }
  v125 = 0;
  v109 = 0;
  v106 = 0;
  v108 = 0;
  v107 = 0;
  v110 = 0;
  v47 = 0;
  v48 = 0;
  v104 = 0;
  v11 = a1;
  while ( 2 )
  {
    v170 = v46 + 6;
    v49 = v46[3];
    if ( v49 == 0x8000000000000000LL )
      goto LABEL_101;
    v50 = (__m256i *)v46[4];
    v51 = v46[1];
    v52 = *v46;
    v53 = v46[5];
    switch ( v51 )
    {
      case 7LL:
        v54 = *(_DWORD *)v52 ^ 0x68637261;
        if ( v54 | *(_DWORD *)(v52 + 3) ^ 0x65766968 )
          goto LABEL_92;
        LOBYTE(v54) = 1;
        v110 = v54;
        v47 = 65793;
        v104 = 0;
        v48 = 0;
        v107 = 1;
        LOBYTE(v54) = 1;
        v108 = v54;
        v106 = 1;
        LOBYTE(v54) = 1;
        v109 = v54;
        v125 = 1;
        if ( !v49 )
          goto LABEL_68;
        goto LABEL_93;
      case 8LL:
        if ( *(_QWORD *)v52 != 0x6576726573657270LL )
          goto LABEL_92;
        v140[0] = v110;
        v140[1] = v107;
        v140[2] = v108;
        v140[3] = v106;
        v140[4] = v109;
        v140[5] = v125;
        v140[6] = v104;
        v140[7] = v48;
        v141 = v47;
        *(_QWORD *)&v208 = v50;
        v209 = v49;
        *((_QWORD *)&v208 + 1) = v50;
        v210 = &v50->m256i_i8[8 * v53];
        uu_cp::Attributes::parse_iter((__int64)&v230, &v208);
        if ( v230 == 13 )
        {
          v182 = v232;
          v181 = v231;
          uu_cp::Attributes::union(v138, v140, (char *)&v181);
          v110 = (unsigned __int8)v138[0];
          v107 = v138[1];
          v108 = (unsigned __int8)v138[2];
          v106 = v138[3];
          v109 = (unsigned __int8)v138[4];
          v125 = v138[5];
          v104 = v138[6];
          v48 = v138[7];
          v47 = v139;
LABEL_63:
          v46 = v170;
          if ( v170 == (__int64 *)v172 )
            goto LABEL_101;
          continue;
        }
        v94 = &v233;
        *(_QWORD *)(a1 + 8) = v230;
        *(_QWORD *)(a1 + 16) = v231;
        *(_DWORD *)(a1 + 24) = v232;
LABEL_151:
        v95 = *(_OWORD *)v94;
        v96 = *((_OWORD *)v94 + 1);
        *(_OWORD *)(a1 + 56) = *(_OWORD *)(v94 + 28);
        *(_OWORD *)(a1 + 44) = v96;
        *(_OWORD *)(a1 + 28) = v95;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v169);
LABEL_142:
        if ( src[0] != (void *)0x8000000000000000LL )
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
        v14 = v166;
        if ( v166 )
        {
          v16 = v167;
          v15 = 1LL;
LABEL_146:
          _rust_dealloc(v16, v14, v15);
        }
        return v11;
      case 11LL:
        if ( *(_QWORD *)v52 ^ 0x65736572702D6F6ELL | *(_QWORD *)(v52 + 3) ^ 0x6576726573657270LL || !v53 )
          goto LABEL_92;
        *(_QWORD *)&v211 = v50;
        v212 = v49;
        *((_QWORD *)&v211 + 1) = v50;
        v213 = &v50->m256i_i8[8 * v53];
        uu_cp::Attributes::parse_iter((__int64)&v194, &v211);
        v57 = v195;
        if ( v194 != 13 )
        {
          v92 = v197;
          v93 = v198;
          v94 = &v199;
          *(_QWORD *)(a1 + 8) = v194;
          *(_BYTE *)(a1 + 16) = v57;
          *(_QWORD *)(a1 + 17) = v196;
          *(_WORD *)(a1 + 25) = v92;
          *(_BYTE *)(a1 + 27) = v93;
          goto LABEL_151;
        }
        v58 = v47 & 0xFF000000;
        v59 = v107;
        if ( (v195 & 1) != 0 )
          v59 = 1;
        v107 = v59;
        v60 = v110;
        LOBYTE(v60) = ((v195 & 1) == 0) & v110;
        v110 = v60;
        v61 = v106;
        if ( (v196 & 0x100) != 0 )
          v61 = 1;
        v106 = v61;
        v62 = v108;
        LOBYTE(v62) = ((v196 & 0x100) == 0) & v108;
        v108 = v62;
        v63 = v125;
        if ( (v196 & 0x1000000) != 0 )
          v63 = 1;
        v125 = v63;
        v64 = v109;
        LOBYTE(v64) = ((v196 & 0x1000000) == 0) & v109;
        v109 = v64;
        if ( (v196 & 0x10000000000LL) != 0 )
          v48 = 1;
        v65 = v47 & 0xFF00;
        if ( (v196 & 0x100000000000000LL) != 0 )
          v65 = 256;
        v66 = v47 & ((v196 & 0x100000000000000LL) == 0);
        v67 = HIWORD(v47) & 1;
        if ( (v197 & 0x100) != 0 )
          v58 = 0x1000000;
        v47 = (((unsigned __int8)v67 & ((v197 & 0x100) == 0)) << 16) | v66 | v65 | v58;
        v104 &= (v196 & 0x10000000000LL) == 0;
        goto LABEL_63;
      case 27LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v52 + 11)), (__m128i)xmmword_20590),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v52), (__m128i)xmmword_20870))) != 0xFFFF )
          goto LABEL_92;
        v132[0] = v110;
        v132[1] = v107;
        v132[2] = v108;
        v132[3] = v106;
        v132[4] = v109;
        v132[5] = v125;
        v132[6] = v104;
        v132[7] = v48;
        v133 = v47;
        uu_cp::Attributes::union(v130, v132, byte_2EA6B);
        v110 = (unsigned __int8)v130[0];
        v107 = v130[1];
        v108 = (unsigned __int8)v130[2];
        v106 = v130[3];
        v109 = (unsigned __int8)v130[4];
        v125 = v130[5];
        v104 = v130[6];
        v48 = v130[7];
        v47 = v131;
        if ( !v49 )
          goto LABEL_68;
        goto LABEL_93;
      case 29LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v52 + 13)), (__m128i)xmmword_20390),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v52), (__m128i)xmmword_20580))) != 0xFFFF )
          goto LABEL_92;
        v136[0] = v110;
        v136[1] = v107;
        v136[2] = v108;
        v136[3] = v106;
        v136[4] = v109;
        v136[5] = v125;
        v136[6] = v104;
        v136[7] = v48;
        v137 = v47;
        uu_cp::Attributes::union(v134, v136, byte_2EA5F);
        v110 = (unsigned __int8)v134[0];
        v107 = v134[1];
        v108 = (unsigned __int8)v134[2];
        v106 = v134[3];
        v109 = (unsigned __int8)v134[4];
        v125 = v134[5];
        v104 = v134[6];
        v48 = v134[7];
        v47 = v135;
        if ( !v49 )
          goto LABEL_68;
        goto LABEL_93;
      default:
LABEL_92:
        if ( v49 )
        {
LABEL_93:
          if ( v49 >> 61 )
            core::panicking::panic_nounwind(anon_66827f6b5e96d838f084441030a41a9e_17_llvm_16861867776640412384, 69LL);
          v56 = 8 * v49;
          v142 = v50;
          dest.m256i_i64[0] = 8LL;
          v55 = 16LL;
        }
        else
        {
LABEL_68:
          v55 = 8LL;
          v56 = 0LL;
        }
        *(__m256i **)((char *)&v142 + v55) = (__m256i *)v56;
        if ( dest.m256i_i64[0] && dest.m256i_i64[1] )
          _rust_dealloc(v142, dest.m256i_i64[1], dest.m256i_i64[0]);
        goto LABEL_63;
    }
  }
}
