__m128i *__fastcall uu_cp::Options::from_matches(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rax
  char flag; // bp
  __m128i *v12; // rcx
  __m128i v13; // kr00_16
  __int64 v14; // rsi
  __int8 v15; // r13
  char v16; // al
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  const void *v20; // rbx
  signed __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rax
  void *v24; // r13
  const void *v25; // rsi
  signed __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  size_t v32; // r13
  _QWORD *v33; // rbx
  __int64 v34; // rbp
  unsigned __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r14
  unsigned __int64 v39; // rbx
  const char *v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rbx
  __int64 v45; // rbp
  __int64 v46; // rbp
  __int64 *v47; // r14
  __int64 *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  __m128i v57; // kr10_16
  unsigned __int64 v58; // rbp
  __int64 v59; // r14
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rdi
  unsigned __int64 v65; // rsi
  __int64 v66; // r8
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __int64 v69; // rdi
  bool v70; // cf
  size_t v71; // rdx
  __int64 v72; // rax
  void *v73; // rbx
  __int64 v74; // r12
  bool v75; // al
  bool v76; // r11
  bool v77; // dl
  bool v78; // di
  bool v79; // cl
  bool v80; // r10
  unsigned __int8 v81; // si
  char v82; // bp
  char v83; // bl
  char v84; // r9
  char v85; // r9
  int v86; // r9d
  bool v87; // zf
  __int64 v88; // rbx
  __int64 v89; // r13
  size_t v90; // rdx
  __int64 v91; // r15
  _DWORD *v92; // rdi
  __int64 v93; // rbp
  size_t v94; // rax
  char v95; // al
  char v96; // al
  char v97; // al
  char v98; // al
  char v99; // al
  char v100; // al
  __int8 v101; // al
  char v102; // al
  int v103; // ecx
  unsigned int v104; // edx
  int v105; // eax
  bool v106; // dl
  unsigned int v107; // r8d
  char v108; // bl
  char *v109; // rdx
  bool v110; // al
  bool v111; // r9
  bool v112; // al
  bool v113; // al
  bool v114; // al
  unsigned __int64 v115; // rbx
  _QWORD *v116; // r12
  __int64 v117; // rsi
  __m128i *v118; // rax
  __int64 v119; // r14
  __int64 v120; // r14
  char v121; // r15
  __int64 v122; // r12
  char v123; // r12
  __int64 v124; // rax
  __int64 v125; // rcx
  size_t v126; // rax
  size_t v127; // rcx
  __int128 v128; // kr20_16
  __m128i v129; // xmm0
  __int64 *v130; // rax
  size_t v131; // rsi
  __m128i v132; // xmm0
  char v133; // r13
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rbp
  __int64 v137; // r14
  __int64 v138; // rbx
  __int8 v139; // al
  unsigned __int64 v140; // xmm0_8
  __m128i *v141; // rcx
  __m128 v143; // xmm0
  int v144; // xmm1_4
  __int128 v145; // xmm2
  __int128 v146; // xmm3
  __int128 v147; // xmm4
  __m128i v148; // xmm0
  __m128i v149; // xmm0
  bool v150; // [rsp+Ah] [rbp-28Eh]
  unsigned __int8 v151; // [rsp+Ah] [rbp-28Eh]
  __int8 v152; // [rsp+Bh] [rbp-28Dh]
  unsigned __int8 v153; // [rsp+Ch] [rbp-28Ch]
  unsigned __int8 v154; // [rsp+Dh] [rbp-28Bh]
  bool v155; // [rsp+Eh] [rbp-28Ah]
  __int8 v156; // [rsp+Eh] [rbp-28Ah]
  char v157; // [rsp+Fh] [rbp-289h]
  __int64 v158; // [rsp+10h] [rbp-288h]
  char v159; // [rsp+10h] [rbp-288h]
  __int64 v160; // [rsp+18h] [rbp-280h]
  __int64 v161; // [rsp+18h] [rbp-280h]
  __int8 v162; // [rsp+18h] [rbp-280h]
  char v163; // [rsp+20h] [rbp-278h]
  bool v164; // [rsp+20h] [rbp-278h]
  __int64 v165; // [rsp+28h] [rbp-270h]
  int v166; // [rsp+28h] [rbp-270h]
  size_t v167; // [rsp+30h] [rbp-268h]
  char v168; // [rsp+38h] [rbp-260h]
  __int64 v169; // [rsp+40h] [rbp-258h]
  char v170; // [rsp+40h] [rbp-258h]
  __int64 v171; // [rsp+48h] [rbp-250h]
  char v172; // [rsp+48h] [rbp-250h]
  _QWORD *v173; // [rsp+50h] [rbp-248h]
  char v174; // [rsp+50h] [rbp-248h]
  bool v175; // [rsp+5Ah] [rbp-23Eh]
  bool v176; // [rsp+5Ch] [rbp-23Ch]
  __int8 v177; // [rsp+5Dh] [rbp-23Bh]
  unsigned __int8 v178; // [rsp+5Eh] [rbp-23Ah]
  __int8 updated; // [rsp+5Fh] [rbp-239h]
  __int64 v180; // [rsp+60h] [rbp-238h]
  char v181; // [rsp+60h] [rbp-238h]
  void *s2; // [rsp+68h] [rbp-230h]
  void *s2a; // [rsp+68h] [rbp-230h]
  unsigned __int8 s2b; // [rsp+68h] [rbp-230h]
  __m128i v185; // [rsp+70h] [rbp-228h] BYREF
  __m128i v186; // [rsp+80h] [rbp-218h]
  unsigned __int64 v187; // [rsp+90h] [rbp-208h]
  _QWORD *v188; // [rsp+A0h] [rbp-1F8h]
  unsigned __int64 v189; // [rsp+A8h] [rbp-1F0h]
  __m128i v190; // [rsp+B0h] [rbp-1E8h] BYREF
  __m128i v191; // [rsp+C0h] [rbp-1D8h] BYREF
  unsigned __int64 v192; // [rsp+D0h] [rbp-1C8h]
  void *v193; // [rsp+E0h] [rbp-1B8h]
  int v194; // [rsp+ECh] [rbp-1ACh]
  size_t n[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  _BYTE v196[48]; // [rsp+100h] [rbp-198h] BYREF
  const char *v197; // [rsp+130h] [rbp-168h]
  __int64 v198; // [rsp+138h] [rbp-160h]
  __int64 v199; // [rsp+140h] [rbp-158h]
  __int64 v200; // [rsp+148h] [rbp-150h]
  __m128i *v201; // [rsp+158h] [rbp-140h]
  const char *v202; // [rsp+160h] [rbp-138h]
  int v203; // [rsp+16Ch] [rbp-12Ch]
  __m128i v204; // [rsp+170h] [rbp-128h] BYREF
  __m128i *v205; // [rsp+180h] [rbp-118h]
  __int64 (__fastcall *v206)(); // [rsp+188h] [rbp-110h]
  const char *v207; // [rsp+190h] [rbp-108h] BYREF
  __int64 v208; // [rsp+198h] [rbp-100h]
  unsigned __int64 v209; // [rsp+1A0h] [rbp-F8h]
  char **v210; // [rsp+1A8h] [rbp-F0h]
  const char *v211; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v212; // [rsp+1B8h] [rbp-E0h]
  _BOOL4 v213; // [rsp+1C4h] [rbp-D4h]
  __int64 v214; // [rsp+1C8h] [rbp-D0h] BYREF
  __int64 v215; // [rsp+1D0h] [rbp-C8h]
  __int64 v216; // [rsp+1D8h] [rbp-C0h]
  __m128i *v217; // [rsp+1E0h] [rbp-B8h]
  __int64 v218; // [rsp+1E8h] [rbp-B0h]
  __int64 v219; // [rsp+1F0h] [rbp-A8h] BYREF
  __m128i v220; // [rsp+1F8h] [rbp-A0h] BYREF
  __int64 v221; // [rsp+208h] [rbp-90h]
  __m128i v222; // [rsp+210h] [rbp-88h] BYREF
  __int64 v223; // [rsp+220h] [rbp-78h]
  __m128i v224; // [rsp+228h] [rbp-70h] BYREF
  __int64 v225; // [rsp+238h] [rbp-60h]
  int v226; // [rsp+240h] [rbp-58h] BYREF
  _BYTE *v227; // [rsp+248h] [rbp-50h]

  v3 = a2[1];
  v4 = a2[2];
  v189 = a2[5];
  v202 = (const char *)a2[4];
  v169 = v4;
  if ( v4 )
  {
    v5 = 16 * v4;
    v6 = 0LL;
    while ( *(_QWORD *)(v3 + v6 + 8) != 7LL
         || **(_DWORD **)(v3 + v6) ^ 0x746E6F63 | *(_DWORD *)(*(_QWORD *)(v3 + v6) + 3LL) ^ 0x74786574 )
    {
      v6 += 16LL;
      if ( v5 == v6 )
        goto LABEL_14;
    }
    v7 = v202 + 97;
    v8 = 0LL;
    v9 = 0LL;
    while ( *(_QWORD *)(v3 + v8 + 8) != 7LL
         || **(_DWORD **)(v3 + v8) ^ 0x746E6F63 | *(_DWORD *)(*(_QWORD *)(v3 + v8) + 3LL) ^ 0x74786574 )
    {
      v8 += 16LL;
      v7 += 104;
      ++v9;
      if ( v5 == v8 )
        goto LABEL_14;
    }
    if ( v9 >= v189 )
      core::panicking::panic_bounds_check(
        v9,
        v189,
        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
        v7,
        1954047348LL);
    if ( *v7 == 2 )
    {
      v10 = (_DWORD *)_rust_alloc(7LL, 1LL);
      if ( !v10 )
        alloc::raw_vec::handle_error(1LL, 7LL);
      *(_DWORD *)((char *)v10 + 3) = 1954047348;
      *v10 = 1953394531;
      a1[1] = 10LL;
      a1[2] = 7LL;
      a1[3] = (__int64)v10;
      a1[4] = 7LL;
      *a1 = 0x8000000000000000LL;
      return (__m128i *)a1;
    }
  }
LABEL_14:
  v201 = (__m128i *)a1;
  flag = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRecursive, 9LL) )
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aArchive, 7LL);
  uucore::features::backup_control::determine_backup_mode(&v204, a2);
  if ( v204.m128i_i64[0] )
  {
    v190 = v204;
    v185.m128i_i64[0] = (__int64)&v190;
    v185.m128i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    n[0] = (size_t)asc_18DC0;
    n[1] = 1LL;
    *(_QWORD *)&v196[16] = 0LL;
    *(_QWORD *)v196 = &v185;
    *(_QWORD *)&v196[8] = 1LL;
    alloc::fmt::format::format_inner(&v220, n);
    v12 = v201;
    v201[2].m128i_i64[0] = v221;
    v12[1] = _mm_loadu_si128(&v220);
    v12->m128i_i64[1] = 11LL;
    v12->m128i_i64[0] = 0x8000000000000000LL;
    v13 = v190;
    if ( *(_QWORD *)v190.m128i_i64[1] )
      (*(void (__fastcall **)(__int64))v190.m128i_i64[1])(v190.m128i_i64[0]);
    v14 = *(_QWORD *)(v13.m128i_i64[1] + 8);
    if ( v14 )
      _rust_dealloc(v13.m128i_i64[0], v14, *(_QWORD *)(v13.m128i_i64[1] + 16));
    return v201;
  }
  v15 = v204.m128i_i8[8];
  updated = uucore::features::update_control::determine_update_mode(a2);
  uucore::features::backup_control::determine_backup_suffix(&v214, a2);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aInteractive, 11LL) )
  {
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aForce, 5LL);
    LOBYTE(v17) = 1;
    v203 = v17;
    if ( v16 )
    {
      v194 = 0;
      goto LABEL_29;
    }
LABEL_28:
    LOBYTE(v19) = 2 - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aRemoveDestinat, 18LL);
    v194 = v19;
    goto LABEL_29;
  }
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoClobber, 10LL);
  if ( (_BYTE)v18 )
  {
    LOBYTE(v18) = 2;
    v203 = v18;
    v194 = v18;
    goto LABEL_29;
  }
  v203 = 0;
  v194 = 0;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aForce, 5LL) )
    goto LABEL_28;
LABEL_29:
  v178 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoTargetDirect, 19LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v190, a2, aTargetDirector, 16LL);
  v207 = aTargetDirector;
  v208 = 16LL;
  if ( v190.m128i_i32[0] != 2 )
  {
    v187 = v192;
    v148 = _mm_loadu_si128(&v190);
    v186 = _mm_loadu_si128(&v191);
    v185 = v148;
    v204.m128i_i64[0] = (__int64)&v207;
    v204.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v205 = &v185;
    v206 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    n[0] = (size_t)&anon_ecdb7401d275e96e4c427fca0a702ec8_2_llvm_6279117827671126663;
    n[1] = 2LL;
    *(_QWORD *)&v196[16] = 0LL;
    *(_QWORD *)v196 = &v204;
    *(_QWORD *)&v196[8] = 2LL;
    core::panicking::panic_fmt(n, &anon_ecdb7401d275e96e4c427fca0a702ec8_4_llvm_6279117827671126663);
  }
  v188 = a2;
  v157 = flag;
  v177 = v15;
  if ( !v190.m128i_i64[1] )
  {
    v167 = 0x8000000000000000LL;
LABEL_39:
    v207 = 0LL;
    v208 = 8LL;
    v209 = 0LL;
    n[0] = (size_t)aPreserve;
    n[1] = 8LL;
    *(_QWORD *)v196 = aNoPreserve;
    *(_QWORD *)&v196[8] = 11LL;
    *(_QWORD *)&v196[16] = aArchive;
    *(_QWORD *)&v196[24] = 7LL;
    *(_QWORD *)&v196[32] = aPreserveDefaul;
    *(_QWORD *)&v196[40] = 27LL;
    v197 = aNoDereferenceP;
    v198 = 29LL;
    v200 = 5LL;
    v27 = 16 * v169;
    v173 = v202 + 40;
    v28 = 0LL;
    v210 = &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456;
    v217 = &v204;
    while ( 2 )
    {
      v31 = v28++;
      v199 = v28;
      v31 *= 16LL;
      v32 = *(size_t *)((char *)&n[1] + v31);
      s2 = *(void **)((char *)n + v31);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v226, v188, s2, v32);
      if ( !v169 )
        goto LABEL_42;
      v158 = v28;
      v33 = v173;
      v34 = 0LL;
      v35 = 0LL;
      while ( *(_QWORD *)(v3 + v34 + 8) != v32 || bcmp(*(const void **)(v3 + v34), s2, v32) )
      {
        v34 += 16LL;
        v33 += 13;
        ++v35;
        if ( v27 == v34 )
          goto LABEL_55;
      }
      if ( v35 >= v189 )
LABEL_247:
        core::panicking::panic_bounds_check(v35, v189, v210, v36, v37);
      if ( *v33 && v226 == 2 && v227 )
      {
        if ( *v227 )
        {
          v38 = *(_QWORD *)*(v33 - 1);
          v39 = v209;
          if ( (const char *)v209 == v207 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v207);
          v29 = v208;
          v30 = 48 * v39;
          *(_QWORD *)(v208 + v30) = s2;
          *(_QWORD *)(v29 + v30 + 8) = v32;
          *(_QWORD *)(v29 + v30 + 16) = v38;
          *(_QWORD *)(v29 + v30 + 24) = 0LL;
          *(_QWORD *)(v29 + v30 + 32) = 8LL;
          *(_QWORD *)(v29 + v30 + 40) = 0LL;
          v209 = v39 + 1;
        }
        goto LABEL_41;
      }
LABEL_55:
      v40 = v202;
      v41 = 0LL;
      v35 = 0LL;
      do
      {
        if ( *(_QWORD *)(v3 + v41 + 8) == v32 && !bcmp(*(const void **)(v3 + v41), s2, v32) )
        {
          if ( v35 < v189 )
          {
            v42 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(
                    v40,
                    0x838CBAD8DA52F225LL,
                    0xD5B29837CF1E5FA5LL);
            if ( v42 != 0x838CBAD8DA52F225LL || v43 != 0xD5B29837CF1E5FA5LL )
            {
              v211 = (const char *)s2;
              v212 = v32;
              v190.m128i_i64[0] = 0LL;
              v190.m128i_i64[1] = v42;
              v191.m128i_i64[0] = v43;
              v191.m128i_i64[1] = 0x838CBAD8DA52F225LL;
              v192 = 0xD5B29837CF1E5FA5LL;
              v204.m128i_i64[0] = (__int64)&v211;
              v204.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
              v205 = &v190;
              v206 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
              v185.m128i_i64[0] = (__int64)&anon_ecdb7401d275e96e4c427fca0a702ec8_2_llvm_6279117827671126663;
              v185.m128i_i64[1] = 2LL;
              v187 = 0LL;
              v186.m128i_i64[0] = (__int64)&v204;
              v186.m128i_i64[1] = 2LL;
              core::panicking::panic_fmt(&v185, &anon_ecdb7401d275e96e4c427fca0a702ec8_4_llvm_6279117827671126663);
            }
            v160 = *((_QWORD *)v40 + 7);
            v171 = v160 + 24LL * *((_QWORD *)v40 + 8);
            goto LABEL_64;
          }
          v210 = &anon_b89cfd5e75c612efe6523b62f83b365f_1_llvm_6356492629075961179;
          goto LABEL_247;
        }
        v41 += 16LL;
        v40 += 104;
        ++v35;
      }
      while ( v27 != v41 );
      v160 = 0LL;
LABEL_64:
      v44 = v173;
      v45 = 0LL;
      v35 = 0LL;
      while ( *(_QWORD *)(v3 + v45 + 8) != v32 || bcmp(*(const void **)(v3 + v45), s2, v32) )
      {
        v45 += 16LL;
        v44 += 13;
        ++v35;
        if ( v27 == v45 )
          goto LABEL_41;
      }
      if ( v35 >= v189 )
        goto LABEL_247;
      v46 = v160;
      if ( v160 && v160 != v171 )
      {
        v47 = (__int64 *)*(v44 - 1);
        v48 = &v47[*v44];
        do
        {
          core::ops::function::FnOnce::call_once(&v204, v46);
          if ( !v204.m128i_i64[0] )
            break;
          v191.m128i_i64[0] = (__int64)v205;
          v190 = _mm_loadu_si128(&v204);
          if ( v47 == v48 )
          {
            v47 = v48;
          }
          else
          {
            v180 = *v47++;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v185, &v190);
            v161 = v46;
            v165 = v186.m128i_i64[0];
            if ( v186.m128i_i64[0] >= 2uLL )
            {
              v51 = v186.m128i_i64[0] - 1;
              if ( (unsigned __int64)(v186.m128i_i64[0] - 2) >= 7 )
              {
                v52 = v51 & 0xFFFFFFFFFFFFFFF8LL;
                do
                {
                  v53 = (__int64)&v47[(v47 != v48) + (&v47[v47 != v48] != v48)];
                  v54 = v53 + 8LL * (v53 != (_QWORD)v48) + 8LL * (v53 + 8LL * (v53 != (_QWORD)v48) != (_QWORD)v48);
                  v55 = v54 + 8LL * (v54 != (_QWORD)v48) + 8LL * (v54 + 8LL * (v54 != (_QWORD)v48) != (_QWORD)v48);
                  v47 = (__int64 *)(v55
                                  + 8LL * (v55 != (_QWORD)v48)
                                  + 8LL * (v55 + 8LL * (v55 != (_QWORD)v48) != (_QWORD)v48));
                  v52 -= 8LL;
                }
                while ( v52 );
              }
              v56 = v51 & 7;
              if ( (_DWORD)v56 )
              {
                do
                {
                  v47 += v47 != v48;
                  --v56;
                }
                while ( v56 );
              }
            }
            v57 = v185;
            v58 = v209;
            if ( (const char *)v209 == v207 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v207);
            v49 = v208;
            v50 = 48 * v58;
            *(_QWORD *)(v208 + v50) = s2;
            *(_QWORD *)(v49 + v50 + 8) = v32;
            *(_QWORD *)(v49 + v50 + 16) = v180;
            *(__m128i *)(v49 + v50 + 24) = v57;
            *(_QWORD *)(v49 + v50 + 40) = v165;
            v209 = v58 + 1;
            v46 = v161;
          }
          v46 += 24LL;
        }
        while ( v46 != v171 );
      }
LABEL_41:
      v28 = v158;
LABEL_42:
      if ( v28 != 5 )
        continue;
      break;
    }
    v59 = v208;
    v60 = v209;
    v190.m128i_i64[0] = (__int64)&v204;
    if ( v209 >= 2 )
    {
      v24 = v193;
      if ( v209 >= 0x15 )
      {
        core::slice::sort::stable::driftsort_main(v208, v209, &v190);
      }
      else
      {
        v61 = v208 + 48 * v209;
        v62 = v208 + 48;
        v63 = 48LL;
        do
        {
          v65 = *(_QWORD *)(v62 + 16);
          if ( v65 < *(_QWORD *)(v62 - 32) )
          {
            v185 = *(__m128i *)v62;
            *(_OWORD *)n = *(_OWORD *)(v62 + 24);
            *(_QWORD *)v196 = *(_QWORD *)(v62 + 40);
            v66 = v63;
            do
            {
              v67 = _mm_loadu_si128((const __m128i *)(v59 + v66 - 48));
              v68 = _mm_loadu_si128((const __m128i *)(v59 + v66 - 32));
              *(_OWORD *)(v59 + v66 + 32) = *(_OWORD *)(v59 + v66 - 16);
              *(__m128i *)(v59 + v66 + 16) = v68;
              *(__m128i *)(v59 + v66) = v67;
              if ( v66 == 48 )
              {
                v64 = v59;
                goto LABEL_91;
              }
              v69 = v66 - 48;
              v70 = v65 < *(_QWORD *)(v59 + v66 - 80);
              v66 -= 48LL;
            }
            while ( v70 );
            v64 = v59 + v69;
LABEL_91:
            *(__m128i *)v64 = v185;
            *(_QWORD *)(v64 + 16) = v65;
            *(__m128i *)(v64 + 24) = _mm_load_si128((const __m128i *)n);
            *(_QWORD *)(v64 + 40) = *(_QWORD *)v196;
          }
          v62 += 48LL;
          v63 += 48LL;
        }
        while ( v62 != v61 );
      }
      v59 = v208;
      v60 = v209;
    }
    else
    {
      v24 = v193;
    }
    v190.m128i_i64[0] = v59;
    v190.m128i_i64[1] = v59;
    v202 = v207;
    v191.m128i_i64[0] = (__int64)v207;
    s2a = (void *)(v59 + 48 * v60);
    v191.m128i_i64[1] = (__int64)s2a;
    if ( !v60 )
    {
      v174 = 0;
      v74 = v59;
      v159 = 0;
      v170 = 0;
      v163 = 0;
      v168 = 0;
      v181 = 0;
      v162 = 0;
      v172 = 0;
      v166 = 0;
      goto LABEL_188;
    }
    v74 = v59 + 48;
    v166 = 0;
    v172 = 0;
    v162 = 0;
    v181 = 0;
    v168 = 0;
    v163 = 0;
    v170 = 0;
    v159 = 0;
    v174 = 0;
    while ( 2 )
    {
      v88 = *(_QWORD *)(v74 - 24);
      if ( v88 == 0x8000000000000000LL )
        goto LABEL_187;
      v89 = v74 - 48;
      v90 = *(_QWORD *)(v74 - 40);
      v91 = *(_QWORD *)(v74 - 48 + 32);
      v92 = *(_DWORD **)(v74 - 48);
      v93 = *(_QWORD *)(v74 - 48 + 40);
      switch ( v90 )
      {
        case 7uLL:
          if ( !(*v92 ^ 0x68637261 | *(_DWORD *)((char *)v92 + 3) ^ 0x65766968) )
          {
            v166 = (int)&unk_10101;
            v174 = 1;
            v162 = 0;
            v159 = 1;
            v170 = 1;
            v163 = 1;
            v168 = 1;
            v181 = 1;
            v172 = 0;
          }
          goto LABEL_167;
        case 8uLL:
          if ( *(_QWORD *)v92 != 0x6576726573657270LL )
            goto LABEL_167;
          v185.m128i_i64[0] = *(_QWORD *)(v74 - 48 + 32);
          v186.m128i_i64[0] = v88;
          v185.m128i_i64[1] = v91;
          v186.m128i_i64[1] = v91 + 8 * v93;
          uu_cp::Attributes::parse_iter((__int64)n, v185.m128i_i64);
          v94 = n[0];
          a1 = (__int64 *)v201;
          if ( n[0] != 13 )
          {
            v190.m128i_i64[1] = v74;
            v143 = (__m128)n[1];
            v144 = *(_DWORD *)v196;
            v145 = *(_OWORD *)&v196[4];
            v146 = *(_OWORD *)&v196[20];
            v147 = *(_OWORD *)&v196[32];
LABEL_245:
            *(_OWORD *)(a1 + 7) = v147;
            *(_OWORD *)((char *)a1 + 44) = v146;
            *(_OWORD *)((char *)a1 + 28) = v145;
            a1[1] = v94;
            _mm_storel_ps((double *)a1 + 2, v143);
            *((_DWORD *)a1 + 6) = v144;
            *a1 = 0x8000000000000000LL;
            v24 = v193;
            <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v190);
            goto LABEL_236;
          }
          v106 = v181 != 0;
          if ( v181 )
          {
            v107 = v166;
            v108 = v163;
            if ( LOBYTE(n[1]) )
              v106 = v168 - 1 == BYTE1(n[1]);
          }
          else
          {
            v107 = v166;
            v108 = v163;
          }
          v110 = v162 != 0;
          LOBYTE(v189) = BYTE1(n[1]);
          if ( v162 && BYTE6(n[1]) )
            v110 = v172 - 1 == HIBYTE(n[1]);
          v111 = v159 != 0;
          v155 = v110;
          if ( v159 && BYTE4(n[1]) )
            v111 = v174 - 1 == BYTE5(n[1]);
          v112 = v108 != 0;
          v164 = v106;
          if ( v108 && BYTE2(n[1]) )
            v112 = v170 - 1 == BYTE3(n[1]);
          v150 = v112;
          v113 = (_BYTE)v107 != 0;
          LOBYTE(v210) = HIBYTE(n[1]);
          if ( (_BYTE)v107 && v196[0] )
            v113 = BYTE1(v107) - 1 == v196[1];
          v175 = v113;
          v114 = (v107 & 0xFF0000) != 0;
          if ( (v107 & 0xFF0000) != 0 && v196[2] )
            v114 = HIBYTE(v107) - 1 == v196[3];
          v176 = v114;
          v75 = v196[2] != 0;
          v213 = (v107 & 0xFF0000) != 0;
          v76 = (_BYTE)v107 != 0;
          v77 = BYTE2(n[1]) != 0;
          v218 = HIBYTE(v107);
          v78 = BYTE4(n[1]) != 0;
          v79 = BYTE6(n[1]) != 0;
          v80 = LOBYTE(n[1]) != 0;
          if ( !v175 )
            v76 = v196[0] != 0;
          v81 = v196[1];
          if ( v175 )
            v81 = BYTE1(v107);
          if ( v150 )
            v77 = v108 != 0;
          v82 = BYTE3(n[1]);
          if ( v150 )
            v82 = v170;
          v170 = v82;
          if ( v111 )
            v78 = v159 != 0;
          v83 = BYTE5(n[1]);
          if ( v111 )
            v83 = v174;
          v174 = v83;
          if ( v155 )
            v79 = v162 != 0;
          v84 = (char)v210;
          if ( v155 )
            v84 = v172;
          v172 = v84;
          if ( v164 )
            v80 = v181 != 0;
          v85 = v189;
          if ( v164 )
            v85 = v168;
          v168 = v85;
          v86 = v196[3];
          if ( v176 )
          {
            v86 = (unsigned __int8)v218;
            v75 = v213;
          }
          v166 = v76 | (v81 << 8) | (v75 << 16) | (v86 << 24);
          v159 = v78;
          v163 = v77;
          v181 = v80;
          v162 = v79;
LABEL_128:
          v74 += 48LL;
          v87 = v89 + 48 == (_QWORD)s2a;
          v24 = v193;
          if ( !v87 )
            continue;
          v74 = (__int64)s2a;
LABEL_187:
          v190.m128i_i64[1] = v74;
LABEL_188:
          if ( s2a != (void *)v74 )
          {
            v115 = ((unsigned __int64)s2a - v74) / 0x30;
            v116 = (_QWORD *)(v74 + 32);
            do
            {
              v117 = *(v116 - 1);
              if ( v117 )
                _rust_dealloc(*v116, 8 * v117, 8LL);
              v116 += 6;
              --v115;
            }
            while ( v115 );
          }
          if ( v202 )
            _rust_dealloc(v59, 48LL * (_QWORD)v202, 8LL);
          a1 = (__int64 *)v201;
          if ( (v162 & 1) != 0 )
          {
            v118 = (__m128i *)_rust_alloc(48LL, 1LL);
            if ( !v118 )
              alloc::raw_vec::handle_error(1LL, 48LL);
            qmemcpy(&v118[1], "enabled during the compile time!", 32);
            *v118 = _mm_loadu_si128(&xmmword_26D81);
            n[1] = 48LL;
            *(_QWORD *)v196 = v118;
            *(_QWORD *)&v196[8] = 48LL;
            n[0] = 4LL;
            if ( (v172 & 1) == 0 )
            {
              v211 = (const char *)n;
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v190 = _mm_loadu_si128((const __m128i *)&xmmword_15C040);
              v204.m128i_i64[0] = (__int64)&v190;
              v204.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
              v185.m128i_i64[0] = (__int64)&unk_155318;
              v185.m128i_i64[1] = 2LL;
              v187 = 0LL;
              v186.m128i_i64[0] = (__int64)&v204;
              v186.m128i_i64[1] = 1LL;
              std::io::stdio::_eprint(&v185);
              v190.m128i_i64[0] = (__int64)&v211;
              v190.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
              v185.m128i_i64[0] = (__int64)&unk_155338;
              v185.m128i_i64[1] = 2LL;
              v187 = 0LL;
              v186.m128i_i64[0] = (__int64)&v190;
              v186.m128i_i64[1] = 1LL;
              std::io::stdio::_eprint(&v185);
              core::ptr::drop_in_place<uu_cp::Error>(n);
              goto LABEL_201;
            }
            v126 = n[0];
            v127 = n[1];
            v128 = *(_OWORD *)v196;
            v129 = _mm_loadu_si128((const __m128i *)&v196[16]);
            *(__m128i *)(a1 + 7) = _mm_loadu_si128((const __m128i *)&v196[32]);
            *(__m128i *)(a1 + 5) = v129;
            *(_OWORD *)(a1 + 3) = v128;
            a1[1] = v126;
            a1[2] = v127;
LABEL_235:
            *a1 = 0x8000000000000000LL;
LABEL_236:
            v131 = v167;
            if ( v167 == 0x8000000000000000LL )
              goto LABEL_239;
            goto LABEL_237;
          }
LABEL_201:
          v119 = (__int64)v188;
          LOBYTE(v202) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v188, aAttributesOnly, 15LL);
          LOBYTE(v189) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v119, aCopyContents, 13LL);
          LOBYTE(v210) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v119, aCliSymbolicLin, 18LL);
          v156 = uu_cp::CopyMode::from_matches(v119);
          if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                  v119,
                                  aNoDereference,
                                  14LL)
            || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                  v188,
                                  aNoDereferenceP,
                                  29LL)
            || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v188, aArchive, 7LL)
            || (s2b = 1, v157) && (unsigned __int8)uu_cp::CopyMode::from_matches((__int64)v188) )
          {
            s2b = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v188, aDereference, 11LL);
          }
          v120 = (__int64)v188;
          v154 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v188, aOneFileSystem, 15LL);
          v153 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v120, aParents, 7LL);
          v152 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v120, aDebug, 5LL);
          v121 = 1;
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v120, aVerbose, 7LL) )
            v121 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v188, aDebug, 5LL);
          v122 = (__int64)v188;
          v151 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v188, aStripTrailingS, 22LL);
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v190, v122, aReflink_0, 7LL);
          v211 = aReflink_0;
          v212 = 7LL;
          if ( v190.m128i_i32[0] != 2 )
            goto LABEL_250;
          v123 = 1;
          if ( !v190.m128i_i64[1] )
            goto LABEL_223;
          v124 = *(_QWORD *)(v190.m128i_i64[1] + 8);
          v125 = *(_QWORD *)(v190.m128i_i64[1] + 16);
          if ( v125 == 4 )
          {
            if ( *(_DWORD *)v124 == 1869903201 )
              goto LABEL_223;
          }
          else if ( v125 == 5 )
          {
            if ( !(*(_DWORD *)v124 ^ 0x6576656E | *(unsigned __int8 *)(v124 + 4) ^ 0x72) )
            {
              v123 = 2;
              goto LABEL_223;
            }
          }
          else if ( v125 == 6 && !(*(_DWORD *)v124 ^ 0x61776C61 | *(unsigned __int16 *)(v124 + 4) ^ 0x7379) )
          {
            v123 = 0;
LABEL_223:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v190, v188, aSparse, 6LL);
            v211 = aSparse;
            v212 = 6LL;
            if ( v190.m128i_i32[0] != 2 )
            {
LABEL_250:
              v187 = v192;
              v149 = _mm_loadu_si128(&v190);
              v186 = _mm_loadu_si128(&v191);
              v185 = v149;
              v204.m128i_i64[0] = (__int64)&v211;
              v204.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
              v205 = &v185;
              v206 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
              n[0] = (size_t)&anon_ecdb7401d275e96e4c427fca0a702ec8_2_llvm_6279117827671126663;
              n[1] = 2LL;
              *(_QWORD *)&v196[16] = 0LL;
              *(_QWORD *)v196 = v217;
              *(_QWORD *)&v196[8] = 2LL;
              core::panicking::panic_fmt(n, &anon_ecdb7401d275e96e4c427fca0a702ec8_4_llvm_6279117827671126663);
            }
            v133 = 1;
            if ( !v190.m128i_i64[1] )
            {
LABEL_241:
              v136 = v214;
              v137 = v215;
              v138 = v216;
              v139 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v188, aProgress, 8LL);
              v140 = _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_cvtsi32_si128((unsigned __int8)v202 | ((unsigned __int8)v189 << 8) | ((unsigned __int8)v210 << 16) | (s2b << 24)),
                         v178 | (v154 << 8),
                         2),
                       v153 | (v151 << 8),
                       3).m128i_u64[0];
              v141 = v201;
              v201->m128i_i64[0] = v136;
              v141->m128i_i64[1] = v137;
              v141[1].m128i_i64[0] = v138;
              a1 = (__int64 *)v141;
              v141[1].m128i_i64[1] = v167;
              v141[2].m128i_i64[0] = (__int64)v193;
              v141[2].m128i_i64[1] = v167;
              v141[3].m128i_i8[0] = v181;
              v141[3].m128i_i8[1] = v168;
              v141[3].m128i_i8[2] = v163;
              v141[3].m128i_i8[3] = v170;
              v141[3].m128i_i8[4] = v159;
              v141[3].m128i_i8[5] = v174;
              v141[3].m128i_i8[6] = v162;
              v141[3].m128i_i8[7] = v172;
              v141[3].m128i_i32[2] = v166;
              v141[3].m128i_i8[12] = v203;
              v141[3].m128i_i8[13] = v194;
              *(__int64 *)((char *)&v141[3].m128i_i64[1] + 6) = v140;
              v141[4].m128i_i8[6] = v157;
              v141[4].m128i_i8[7] = v152;
              v141[4].m128i_i8[8] = v121;
              v141[4].m128i_i8[9] = v139;
              v141[4].m128i_i8[10] = v133;
              v141[4].m128i_i8[11] = v123;
              v141[4].m128i_i8[12] = v177;
              v141[4].m128i_i8[13] = updated;
              v141[4].m128i_i8[14] = v156;
              return (__m128i *)a1;
            }
            v219 = v190.m128i_i64[1];
            v134 = *(_QWORD *)(v190.m128i_i64[1] + 8);
            v135 = *(_QWORD *)(v190.m128i_i64[1] + 16);
            if ( v135 == 4 )
            {
              if ( *(_DWORD *)v134 == 1869903201 )
                goto LABEL_241;
            }
            else if ( v135 == 5 )
            {
              if ( !(*(_DWORD *)v134 ^ 0x6576656E | *(unsigned __int8 *)(v134 + 4) ^ 0x72) )
              {
                v133 = 2;
                goto LABEL_241;
              }
            }
            else if ( v135 == 6 && !(*(_DWORD *)v134 ^ 0x61776C61 | *(unsigned __int16 *)(v134 + 4) ^ 0x7379) )
            {
              v133 = 0;
              goto LABEL_241;
            }
            v185.m128i_i64[0] = (__int64)&v219;
            v185.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            n[0] = (size_t)&off_1552C0;
            n[1] = 2LL;
            *(_QWORD *)&v196[16] = 0LL;
            *(_QWORD *)v196 = &v185;
            *(_QWORD *)&v196[8] = 1LL;
            v24 = v193;
            alloc::fmt::format::format_inner(&v224, n);
            a1[4] = v225;
            v132 = _mm_loadu_si128(&v224);
LABEL_234:
            *((__m128i *)a1 + 1) = v132;
            a1[1] = 9LL;
            goto LABEL_235;
          }
          v185.m128i_i64[0] = 0LL;
          v185.m128i_i64[1] = v124;
          v186.m128i_i64[0] = v125;
          v186.m128i_i8[8] = 1;
          v190.m128i_i64[0] = (__int64)&v185;
          v190.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          n[0] = (size_t)&off_1552A0;
          n[1] = 2LL;
          *(_QWORD *)&v196[16] = 0LL;
          *(_QWORD *)v196 = &v190;
          *(_QWORD *)&v196[8] = 1LL;
          alloc::fmt::format::format_inner(&v222, n);
          a1[4] = v223;
          v132 = _mm_loadu_si128(&v222);
          goto LABEL_234;
        case 0xBuLL:
          if ( bcmp(v92, aNoPreserve, v90) || !v93 )
            goto LABEL_167;
          v185.m128i_i64[0] = v91;
          v186.m128i_i64[0] = v88;
          v185.m128i_i64[1] = v91;
          v186.m128i_i64[1] = v91 + 8 * v93;
          uu_cp::Attributes::parse_iter((__int64)n, v185.m128i_i64);
          v94 = n[0];
          if ( n[0] != 13 )
          {
            v190.m128i_i64[1] = v74;
            v143 = (__m128)n[1];
            v144 = *(_DWORD *)v196;
            v145 = *(_OWORD *)&v196[4];
            v146 = *(_OWORD *)&v196[20];
            v147 = *(_OWORD *)&v196[32];
            a1 = (__int64 *)v201;
            goto LABEL_245;
          }
          v95 = v168;
          if ( LOBYTE(n[1]) )
            v95 = 1;
          v168 = v95;
          v96 = v181;
          if ( LOBYTE(n[1]) )
            v96 = 0;
          v181 = v96;
          v97 = v170;
          if ( BYTE2(n[1]) )
            v97 = 1;
          v170 = v97;
          v98 = v163;
          if ( BYTE2(n[1]) )
            v98 = 0;
          v163 = v98;
          v99 = v174;
          if ( BYTE4(n[1]) )
            v99 = 1;
          v174 = v99;
          v100 = v159;
          if ( BYTE4(n[1]) )
            v100 = 0;
          v159 = v100;
          v101 = v162;
          if ( BYTE6(n[1]) )
            v101 = 0;
          v162 = v101;
          v102 = v172;
          if ( BYTE6(n[1]) )
            v102 = 1;
          v172 = v102;
          v103 = (unsigned __int16)v166;
          v104 = v166 & 0xFF000000;
          v105 = v166 & 0xFF0000;
          if ( v196[0] )
            v103 = 256;
          if ( v196[2] )
          {
            v104 = 0x1000000;
            v105 = 0;
          }
          v166 = v104 | v103 | v105;
          goto LABEL_128;
        case 0x1BuLL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v92 + 11)), (__m128i)xmmword_18D70),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v92), (__m128i)xmmword_19060))) != 0xFFFF )
            goto LABEL_167;
          LOBYTE(n[0]) = v181;
          BYTE1(n[0]) = v168;
          BYTE2(n[0]) = v163;
          BYTE3(n[0]) = v170;
          BYTE4(n[0]) = v159;
          BYTE5(n[0]) = v174;
          BYTE6(n[0]) = v162;
          HIBYTE(n[0]) = v172;
          LODWORD(n[1]) = v166;
          v109 = (char *)&unk_26DE9;
          goto LABEL_166;
        case 0x1DuLL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v92 + 13)), (__m128i)xmmword_18B20),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v92), (__m128i)xmmword_18D60))) != 0xFFFF )
            goto LABEL_167;
          LOBYTE(n[0]) = v181;
          BYTE1(n[0]) = v168;
          BYTE2(n[0]) = v163;
          BYTE3(n[0]) = v170;
          BYTE4(n[0]) = v159;
          BYTE5(n[0]) = v174;
          BYTE6(n[0]) = v162;
          HIBYTE(n[0]) = v172;
          LODWORD(n[1]) = v166;
          v109 = (char *)&unk_26DDD;
LABEL_166:
          uu_cp::Attributes::union((bool *)v185.m128i_i8, (char *)n, v109);
          v181 = v185.m128i_i8[0];
          v168 = v185.m128i_i8[1];
          v163 = v185.m128i_i8[2];
          v170 = v185.m128i_i8[3];
          v159 = v185.m128i_i8[4];
          v174 = v185.m128i_i8[5];
          v162 = v185.m128i_i8[6];
          v172 = v185.m128i_i8[7];
          v166 = v185.m128i_i32[2];
LABEL_167:
          if ( v88 )
            _rust_dealloc(v91, 8 * v88, 8LL);
          goto LABEL_128;
        default:
          goto LABEL_167;
      }
    }
  }
  v20 = *(const void **)(v190.m128i_i64[1] + 8);
  v21 = *(_QWORD *)(v190.m128i_i64[1] + 16);
  v167 = v21;
  if ( v21 )
  {
    if ( v21 < 0 )
    {
      v22 = 0LL;
    }
    else
    {
      v22 = 1LL;
      v23 = _rust_alloc(v21, 1LL);
      if ( v23 )
      {
        v24 = (void *)v23;
        v21 = v167;
        goto LABEL_37;
      }
    }
    alloc::raw_vec::handle_error(v22, v167);
  }
  v24 = &dword_0 + 1;
LABEL_37:
  v25 = v20;
  v26 = v21;
  memcpy(v24, v25, v21);
  if ( (unsigned __int8)std::path::Path::is_dir(v24, v26) )
  {
    v193 = v24;
    goto LABEL_39;
  }
  v71 = v167;
  if ( v167 )
  {
    v72 = _rust_alloc(v167, 1LL);
    if ( !v72 )
      alloc::raw_vec::handle_error(1LL, v167);
    v73 = (void *)v72;
    v71 = v167;
  }
  else
  {
    v73 = &dword_0 + 1;
  }
  memcpy(v73, v24, v71);
  v130 = (__int64 *)v201;
  v201[1].m128i_i64[0] = v167;
  v130[3] = (__int64)v73;
  a1 = v130;
  v131 = v167;
  v130[4] = v167;
  v130[1] = 12LL;
  *v130 = 0x8000000000000000LL;
LABEL_237:
  if ( v131 )
    _rust_dealloc(v24, v131, 1LL);
LABEL_239:
  if ( v214 )
    _rust_dealloc(v215, v214, 1LL);
  return (__m128i *)a1;
}
