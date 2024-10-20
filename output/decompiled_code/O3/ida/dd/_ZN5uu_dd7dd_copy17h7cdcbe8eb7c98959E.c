__int64 __fastcall uu_dd::dd_copy(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned __int64 v3; // rax
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v12; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // rbx
  __int8 v19; // al
  __int64 v20; // r12
  signed __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rax
  void *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  __int64 v29; // r14
  volatile signed __int64 *v30; // r12
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  _QWORD *v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  __int8 v36; // r15
  __int32 v37; // ebp
  __int64 v38; // r12
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rax
  int v43; // edi
  off_t v44; // rcx
  int *v45; // rbp
  __int64 v46; // rax
  size_t v47; // r12
  size_t v48; // r12
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r12
  bool v51; // cc
  __int64 v52; // r12
  size_t v53; // rbx
  char *v54; // r14
  char *v55; // r15
  char *v56; // rdi
  __int64 v57; // rax
  size_t v58; // rdi
  off_t v59; // r13
  _BYTE *v60; // r12
  char *v61; // rcx
  char *v62; // rax
  __int64 v63; // r12
  char *v64; // rbx
  __int128 v65; // rax
  __int64 v66; // r15
  __int64 v67; // rbp
  __int64 v68; // r14
  __int64 v69; // r15
  __int64 v70; // rsi
  size_t v71; // rbx
  __int64 v72; // rbx
  __int64 v73; // rax
  char *v74; // r15
  __int64 v75; // rax
  char *v76; // rdi
  size_t v77; // rax
  __int64 v78; // rbx
  _QWORD *v79; // r14
  __int64 v80; // r15
  size_t v81; // r14
  char *v82; // rcx
  size_t v83; // rax
  size_t v84; // r14
  char *v85; // rbx
  __int128 v86; // rax
  __int64 v87; // r12
  __int64 v88; // rbp
  __int64 v89; // r15
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // r14
  int v94; // ecx
  __int64 v95; // r15
  __int64 v96; // rbx
  size_t v97; // rax
  size_t v98; // rax
  char *v99; // rcx
  __int64 v100; // rax
  unsigned __int64 v101; // rdi
  const void *v102; // r15
  size_t v103; // r14
  __int64 v104; // rbp
  __int64 v105; // rax
  void *v106; // r12
  __int128 v107; // kr20_16
  __int64 v108; // rbp
  __int64 *v109; // rdi
  __int128 v110; // kr00_16
  __int128 v111; // kr10_16
  char v112; // al
  char v113; // bl
  __int64 v114; // rax
  int v115; // edx
  __int64 v116; // rbx
  char v117; // bp
  __int64 v118; // rbx
  signed __int64 v119; // rax
  __int64 v120; // rcx
  signed __int64 v121; // rtt
  char v122; // al
  __int64 v123; // rdi
  off_t v124; // rdx
  __int64 v125; // rbx
  signed __int64 v126; // rax
  __int64 v127; // rcx
  signed __int64 v128; // rtt
  char v129; // al
  int *v130; // rax
  char **v132; // rax
  char v133; // [rsp+Fh] [rbp-379h]
  size_t v135; // [rsp+18h] [rbp-370h]
  __int64 v136; // [rsp+18h] [rbp-370h]
  size_t v137; // [rsp+18h] [rbp-370h]
  char v138; // [rsp+26h] [rbp-362h]
  char v139; // [rsp+27h] [rbp-361h]
  size_t v140; // [rsp+28h] [rbp-360h]
  size_t v141; // [rsp+28h] [rbp-360h]
  int v142; // [rsp+28h] [rbp-360h]
  void *src[2]; // [rsp+30h] [rbp-358h] BYREF
  size_t v144; // [rsp+40h] [rbp-348h]
  __int64 v145; // [rsp+50h] [rbp-338h]
  size_t v146; // [rsp+58h] [rbp-330h]
  int v147; // [rsp+60h] [rbp-328h]
  int v148; // [rsp+64h] [rbp-324h]
  size_t n; // [rsp+68h] [rbp-320h]
  char *v150; // [rsp+70h] [rbp-318h]
  int *v151; // [rsp+78h] [rbp-310h]
  __int128 v152; // [rsp+80h] [rbp-308h] BYREF
  __m256i fd; // [rsp+90h] [rbp-2F8h] BYREF
  __int128 v154; // [rsp+B0h] [rbp-2D8h]
  __int64 v155; // [rsp+C8h] [rbp-2C0h]
  __int64 v156; // [rsp+D0h] [rbp-2B8h]
  unsigned __int64 v157; // [rsp+D8h] [rbp-2B0h]
  __int128 v158; // [rsp+E0h] [rbp-2A8h] BYREF
  off_t v159; // [rsp+F0h] [rbp-298h]
  __int64 v160; // [rsp+F8h] [rbp-290h]
  char **v161; // [rsp+100h] [rbp-288h]
  __int64 v162; // [rsp+108h] [rbp-280h]
  unsigned __int64 v163; // [rsp+110h] [rbp-278h]
  unsigned __int64 v164; // [rsp+118h] [rbp-270h]
  __int128 v165; // [rsp+120h] [rbp-268h]
  size_t v166; // [rsp+130h] [rbp-258h]
  size_t v167; // [rsp+138h] [rbp-250h]
  _BYTE v168[48]; // [rsp+140h] [rbp-248h] BYREF
  char *v169; // [rsp+170h] [rbp-218h]
  __int64 v170; // [rsp+178h] [rbp-210h]
  char *v171; // [rsp+180h] [rbp-208h]
  unsigned __int64 v172; // [rsp+190h] [rbp-1F8h]
  off_t v173; // [rsp+1F8h] [rbp-190h]
  __int64 v174; // [rsp+200h] [rbp-188h]
  unsigned __int64 v175; // [rsp+208h] [rbp-180h]
  off_t v176; // [rsp+210h] [rbp-178h]
  char *i; // [rsp+218h] [rbp-170h]
  __int64 v178; // [rsp+220h] [rbp-168h] BYREF
  int v179; // [rsp+228h] [rbp-160h]
  volatile signed __int64 *v180[2]; // [rsp+230h] [rbp-158h] BYREF
  int v181; // [rsp+240h] [rbp-148h]
  unsigned __int64 v182; // [rsp+248h] [rbp-140h]
  __int128 v183; // [rsp+250h] [rbp-138h] BYREF
  off_t v184; // [rsp+260h] [rbp-128h]
  __int128 v185; // [rsp+270h] [rbp-118h] BYREF
  __int128 v186; // [rsp+280h] [rbp-108h]
  __int64 v187; // [rsp+2B8h] [rbp-D0h]
  __int128 v188; // [rsp+2C0h] [rbp-C8h] BYREF
  size_t v189; // [rsp+2D0h] [rbp-B8h]
  int v190; // [rsp+2D8h] [rbp-B0h]
  __int64 v191; // [rsp+2E0h] [rbp-A8h] BYREF
  int v192; // [rsp+2E8h] [rbp-A0h]
  __int128 v193; // [rsp+2F0h] [rbp-98h]
  size_t v194; // [rsp+300h] [rbp-88h]
  int v195; // [rsp+308h] [rbp-80h]
  unsigned __int64 v196; // [rsp+310h] [rbp-78h]
  unsigned __int64 v197; // [rsp+318h] [rbp-70h]
  off_t v198; // [rsp+320h] [rbp-68h]
  __int64 v199; // [rsp+328h] [rbp-60h]
  char v200; // [rsp+330h] [rbp-58h]
  __int128 v201; // [rsp+340h] [rbp-48h] BYREF
  off_t v202; // [rsp+350h] [rbp-38h]

  v145 = a2;
  v178 = std::time::Instant::now();
  v179 = v2;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(v4 + 120);
  v6 = v5;
  if ( v3 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
    if ( !v5 )
      goto LABEL_17;
    _RCX = v3 | v5;
    __asm { tzcnt   rdx, rcx }
    _RSI = v3 >> _RDX;
    _RDI = v5 >> _RDX;
    if ( v3 >> _RDX )
      __asm { tzcnt   rcx, rsi }
    else
      LOBYTE(_RCX) = 64;
    v12 = _RSI >> _RCX;
    do
    {
      if ( _RDI )
        __asm { tzcnt   rcx, rdi }
      else
        LOBYTE(_RCX) = 64;
      v14 = _RDI >> _RCX;
      v15 = v12 - v14;
      if ( v12 <= v14 )
        v15 = v14 - v12;
      if ( v12 >= v14 )
        v12 = v14;
      _RDI = v15;
    }
    while ( v15 );
    v6 = v12 << _RDX;
  }
  if ( !v6 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_115DD0);
LABEL_17:
  if ( (v6 | v3) >> 32 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) % v6;
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) / v6;
  }
  else
  {
    v16 = (unsigned int)v3 % (unsigned int)v6;
    v17 = (unsigned int)v3 / (unsigned int)v6;
  }
  std::sync::mpmc::channel(v168, v6, v16, (v6 | v3) >> 32);
  v18 = *(_QWORD *)v168;
  v152 = *(_OWORD *)v168;
  v19 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 166LL);
  *(_OWORD *)fd.m256i_i8 = *(_OWORD *)&v168[16];
  fd.m256i_i8[16] = v19;
  *(_QWORD *)&v168[16] = 0x8000000000000000LL;
  *(_QWORD *)v168 = 0LL;
  std::thread::Builder::spawn_unchecked(&v185, v168, &fd);
  if ( !(_QWORD)v185 )
  {
    *(_QWORD *)v168 = *((_QWORD *)&v185 + 1);
    core::result::unwrap_failed(aFailedToSpawnT, 22LL, v168, &off_115B28, &off_115BA8);
  }
  v184 = v186;
  v183 = v185;
  v133 = *(_BYTE *)(v4 + 147);
  v20 = *(_QWORD *)(a1 + 8);
  if ( (!*(_QWORD *)v20 || (unsigned int)*(_QWORD *)v20 == 1) && !*(_QWORD *)(v20 + 8) )
  {
    if ( *(_BYTE *)(v20 + 69) )
    {
      v43 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 )
      {
        v44 = 0LL;
      }
      else
      {
        std::fs::File::metadata(v168, a1 + 4);
        if ( *(_DWORD *)v168 == 2 )
        {
LABEL_235:
          v66 = *(_QWORD *)&v168[8];
          v117 = 1;
          goto LABEL_217;
        }
        v44 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v172 < 0x7FFFFFFFFFFFFFFFLL )
          v44 = v172;
        v43 = 0;
      }
      uu_dd::Input::discard_cache(v43, *(_DWORD *)(a1 + 4), 0LL, v44);
    }
    if ( *(_BYTE *)(v20 + 156) )
    {
      v123 = v145;
      if ( *(_BYTE *)v145 == 1 )
      {
        std::fs::File::metadata(v168, v145 + 4);
        if ( *(_DWORD *)v168 == 2 )
          goto LABEL_235;
        v124 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v172 < 0x7FFFFFFFFFFFFFFFLL )
          v124 = v172;
        v123 = v145;
      }
      else
      {
        v124 = 0LL;
      }
      uu_dd::Output::discard_cache(v123, 0LL, v124);
    }
    *(_QWORD *)&v168[24] = *(_QWORD *)(v145 + 16);
    *(_OWORD *)&v168[8] = *(_OWORD *)v145;
    *(_QWORD *)v168 = 0x8000000000000000LL;
    memset(&fd, 0, 28);
    v186 = 0LL;
    v185 = 0LL;
    v159 = v184;
    v158 = v183;
    v66 = uu_dd::finalize(
            (unsigned int)v168,
            (unsigned int)&fd,
            (unsigned int)&v185,
            v178,
            v179,
            (unsigned int)&v152,
            (__int64)&v158,
            v133 == 0);
    v117 = 0;
    if ( v18 != 2 )
      goto LABEL_218;
    goto LABEL_251;
  }
  v21 = v5 * v17;
  n = v21;
  if ( v21 )
  {
    if ( v21 < 0 )
    {
      v22 = 0LL;
    }
    else
    {
      v22 = 1LL;
      v23 = _rust_alloc(n, 1LL);
      if ( v23 )
      {
        v24 = (void *)v23;
        goto LABEL_29;
      }
    }
    alloc::raw_vec::handle_error(v22, n);
  }
  v24 = &dword_0 + 1;
LABEL_29:
  memset(v24, 221, n);
  src[0] = (void *)n;
  src[1] = v24;
  v144 = n;
  v25 = _rust_alloc(24LL, 8LL);
  if ( !v25 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  v26 = v25;
  *(_QWORD *)v25 = 1LL;
  *(_QWORD *)(v25 + 8) = 1LL;
  *(_BYTE *)(v25 + 16) = 0;
  *(_QWORD *)&v158 = v25;
LABEL_32:
  v27 = *(_QWORD *)(v26 + 8);
  do
  {
    if ( v27 == -1 )
    {
      _mm_pause();
      goto LABEL_32;
    }
    if ( v27 < 0 )
      alloc::sync::Arc<T,A>::downgrade::panic_cold_display();
    v28 = v27;
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 8), v27 + 1, v27);
  }
  while ( v28 != v27 );
  fd.m256i_i64[0] = v26;
  fd.m256i_i64[1] = 1LL;
  fd.m256i_i32[4] = 0;
  *(_QWORD *)&v168[16] = 0x8000000000000000LL;
  *(_QWORD *)v168 = 0LL;
  std::thread::Builder::spawn_unchecked(&v185, v168, &fd);
  if ( !(_QWORD)v185 )
  {
    *(_QWORD *)v168 = *((_QWORD *)&v185 + 1);
    core::result::unwrap_failed(aFailedToSpawnT, 22LL, v168, &off_115B28, &off_115BA8);
  }
  *(_QWORD *)&v168[16] = v186;
  *(_OWORD *)v168 = v185;
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v168);
  v29 = v158;
  v180[1] = (_QWORD *)(&dword_0 + 1);
  v181 = 0;
  v180[0] = (volatile signed __int64 *)v158;
  v30 = (volatile signed __int64 *)(v158 + 8);
LABEL_39:
  v31 = *v30;
  do
  {
    if ( v31 == -1 )
    {
      _mm_pause();
      goto LABEL_39;
    }
    if ( v31 < 0 )
    {
      LOBYTE(v31) = 1;
      v147 = v31;
      alloc::sync::Arc<T,A>::downgrade::panic_cold_display();
    }
    v32 = v31;
    v31 = _InterlockedCompareExchange64(v30, v31 + 1, v31);
  }
  while ( v32 != v31 );
  v33 = (_QWORD *)_rust_alloc(8LL, 8LL);
  if ( !v33 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *v33 = v29;
  LOBYTE(v34) = 1;
  v147 = v34;
  uu_dd::progress::SignalHandler::install_signal_handler(&v185, v33, &off_115BC0);
  v35 = *(_QWORD *)(a1 + 8);
  if ( !(_QWORD)v185 )
  {
    *(_QWORD *)&v158 = (char *)&v185 + 8;
    if ( *(_BYTE *)(v35 + 166) != 2 )
    {
      fd.m256i_i64[0] = (__int64)&v158;
      fd.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)v168 = &off_115D20;
      *(_QWORD *)&v168[8] = 2LL;
      *(_QWORD *)&v168[32] = 0LL;
      *(_QWORD *)&v168[16] = &fd;
      *(_QWORD *)&v168[24] = 1LL;
      std::io::stdio::_eprint(v168);
      v35 = *(_QWORD *)(a1 + 8);
    }
  }
  v139 = *(_BYTE *)(v35 + 69);
  v138 = *(_BYTE *)(v4 + 156);
  if ( *(_BYTE *)(v4 + 165) )
  {
    v36 = *(_BYTE *)v145;
    v168[2] = *(_BYTE *)(v145 + 3);
    *(_WORD *)v168 = *(_WORD *)(v145 + 1);
    v37 = *(_DWORD *)(v145 + 4);
    v38 = *(_QWORD *)(v145 + 8);
    v39 = *(_QWORD *)(v145 + 16);
    v40 = *(_QWORD *)(v39 + 120);
    if ( v40 )
    {
      if ( v40 < 0 )
      {
        v41 = 0LL;
        goto LABEL_283;
      }
      v41 = 1LL;
      v42 = _rust_alloc(*(_QWORD *)(v39 + 120), 1LL);
      if ( !v42 )
LABEL_283:
        alloc::raw_vec::handle_error(v41, v40);
    }
    else
    {
      v42 = 1LL;
    }
    fd.m256i_i8[27] = v168[2];
    *(__int16 *)((char *)&fd.m256i_i16[12] + 1) = *(_WORD *)v168;
    fd.m256i_i64[0] = v40;
    *(_OWORD *)&fd.m256i_u64[1] = (unsigned __int64)v42;
    fd.m256i_i8[24] = v36;
    fd.m256i_i32[7] = v37;
    *(_QWORD *)&v154 = v38;
    *((_QWORD *)&v154 + 1) = v39;
  }
  else
  {
    fd.m256i_i64[3] = *(_QWORD *)(v145 + 16);
    *(_OWORD *)&fd.m256i_u64[1] = *(_OWORD *)v145;
    fd.m256i_i64[0] = 0x8000000000000000LL;
  }
  v45 = (int *)(a1 + 4);
  v161 = &off_115D40;
  v174 = 0LL;
  v173 = 0LL;
  v164 = 0LL;
  v163 = 0LL;
  v148 = 0;
  v166 = 0LL;
  v165 = 0uLL;
  v175 = 0LL;
  v182 = 0LL;
  v176 = 0LL;
  v151 = (int *)(a1 + 4);
LABEL_59:
  v46 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)v46 )
  {
    v47 = n;
    if ( (unsigned int)*(_QWORD *)v46 == 1 )
    {
      v48 = *(_QWORD *)(v46 + 8);
      if ( v166 >= v48 )
        goto LABEL_197;
      v49 = (v48 - __PAIR128__(v163, v164)) >> 64;
      v47 = v48 - v164;
      if ( n < __PAIR128__(v49, v47) )
        v47 = n;
    }
  }
  else
  {
    v50 = *(_QWORD *)(v46 + 8);
    v51 = v50 <= (_QWORD)v165 + *((_QWORD *)&v165 + 1);
    v52 = v50 - (v165 + *((_QWORD *)&v165 + 1));
    if ( v51 )
      goto LABEL_197;
    v47 = *(_QWORD *)(v46 + 112) * v52;
    if ( n < v47 )
      v47 = n;
  }
  v53 = v144;
  v54 = (char *)(v47 - v144);
  if ( v47 > v144 )
  {
    if ( (char *)src[0] - v144 < v54 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, v144, v47 - v144);
      v53 = v144;
    }
    v55 = (char *)src[1];
    v56 = (char *)src[1] + v53;
    if ( (unsigned __int64)v54 >= 2 )
    {
      memset(v56, 221, (size_t)(v54 - 1));
      v53 = (size_t)&v54[v53 - 1];
      v56 = &v55[v53];
    }
    *v56 = -35;
    v46 = *(_QWORD *)(a1 + 8);
    v47 = v53 + 1;
    v45 = v151;
  }
  v144 = v47;
  if ( !*(_BYTE *)(v46 + 104) )
  {
    v167 = *(_QWORD *)(v46 + 112);
    if ( !v167 )
    {
      *(_QWORD *)v168 = &off_115C88;
      *(_QWORD *)&v168[8] = 1LL;
      *(_QWORD *)&v168[16] = 8LL;
      *(_OWORD *)&v168[24] = 0LL;
      core::panicking::panic_fmt(v168, &off_115C98);
    }
    if ( !v47 )
      goto LABEL_153;
    v150 = (char *)src[1];
    v156 = 0LL;
    v155 = 0LL;
    v58 = 0LL;
LABEL_129:
    v146 = v58;
    v81 = v167;
    if ( v47 < v167 )
      v81 = v47;
    v82 = v150;
    v150 += v81;
    v141 = v47 - v81;
    v83 = 0LL;
    v157 = v81;
    for ( i = v82; ; v82 = i )
    {
      v84 = v81 - v83;
      v137 = v83;
      v85 = &v82[v83];
      while ( 1 )
      {
        *(_QWORD *)&v86 = <std::fs::File as std::io::Read>::read(v45, v85, v84);
        v66 = *((_QWORD *)&v86 + 1);
        *(_OWORD *)v168 = v86;
        if ( !(_QWORD)v86 )
          break;
        if ( (unsigned __int8)std::io::error::Error::kind(*((_QWORD *)&v86 + 1)) != 35 )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 107LL) )
            goto LABEL_205;
          core::ptr::drop_in_place<std::io::error::Error>(&v168[8]);
          v47 = v141;
          v58 = v146;
          v66 = v137;
LABEL_148:
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) == v66 )
          {
            ++v156;
            goto LABEL_128;
          }
          if ( !v66 )
            goto LABEL_154;
          ++v155;
LABEL_128:
          v58 += v66;
          if ( !v47 )
          {
LABEL_154:
            v47 = v144;
            v59 = v58;
            goto LABEL_156;
          }
          goto LABEL_129;
        }
        if ( (unsigned __int64)(v66 & 3) - 2 >= 2 && (v66 & 3) != 0 )
        {
          v87 = v66 - 1;
          v88 = *(_QWORD *)(v66 - 1);
          v89 = *(_QWORD *)(v66 + 7);
          if ( *(_QWORD *)v89 )
            (*(void (__fastcall **)(__int64))v89)(v88);
          v90 = *(_QWORD *)(v89 + 8);
          if ( v90 )
            _rust_dealloc(v88, v90, *(_QWORD *)(v89 + 16));
          _rust_dealloc(v87, 24LL, 8LL);
          v45 = v151;
        }
      }
      if ( !*((_QWORD *)&v86 + 1) )
      {
        v47 = v141;
        v58 = v146;
        v66 = v137;
        goto LABEL_148;
      }
      v47 = v141;
      v58 = v146;
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 77LL) )
        goto LABEL_148;
      v83 = *((_QWORD *)&v86 + 1) + v137;
      v81 = v157;
      if ( *((_QWORD *)&v86 + 1) + v137 >= v157 )
      {
        v66 = v157;
        goto LABEL_148;
      }
    }
  }
  if ( !v47 )
  {
LABEL_153:
    v58 = 0LL;
    v91 = 0LL;
    v92 = 0LL;
    v59 = 0LL;
    goto LABEL_157;
  }
  LOBYTE(v167) = *(_BYTE *)(v46 + 105);
  v57 = *(_QWORD *)(v46 + 112);
  v156 = 0LL;
  v155 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
LABEL_79:
  if ( v58 + v57 < v47 )
    v47 = v58 + v57;
  if ( __CFADD__(v58, v57) )
    core::slice::index::slice_index_order_fail(v58, v47, &off_115CB0);
  v157 = v59;
  v140 = v47;
  v60 = (_BYTE *)(v47 - v58);
  v146 = v58;
  v61 = (char *)src[1] + v58;
  v62 = 0LL;
  v135 = (size_t)v60;
  i = (char *)src[1] + v58;
LABEL_83:
  v63 = v60 - v62;
  v150 = v62;
  v64 = &v62[(_QWORD)v61];
  while ( 1 )
  {
    *(_QWORD *)&v65 = <std::fs::File as std::io::Read>::read(v45, v64, v63);
    v66 = *((_QWORD *)&v65 + 1);
    *(_OWORD *)v168 = v65;
    if ( !(_QWORD)v65 )
    {
      if ( !*((_QWORD *)&v65 + 1) )
      {
        v71 = v140;
        v60 = v150;
        goto LABEL_99;
      }
      v71 = v140;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 77LL) )
      {
        v62 = &v150[*((_QWORD *)&v65 + 1)];
        v60 = (_BYTE *)v135;
        if ( (unsigned __int64)&v150[*((_QWORD *)&v65 + 1)] >= v135 )
          goto LABEL_99;
        v61 = i;
        goto LABEL_83;
      }
      v60 = (_BYTE *)*((_QWORD *)&v65 + 1);
LABEL_99:
      if ( !v60 )
      {
        v47 = v144;
        v58 = v146;
        v59 = v157;
LABEL_156:
        v91 = v156;
        v92 = v155;
        if ( v47 >= v58 )
        {
LABEL_157:
          v144 = v58;
          v47 = v58;
        }
        *(_QWORD *)&v158 = v91;
        *((_QWORD *)&v158 + 1) = v92;
        v159 = v59;
        LODWORD(v160) = 0;
        if ( !(v92 | v91) )
        {
          v93 = 0LL;
          v94 = 0;
          v95 = 0LL;
          goto LABEL_178;
        }
        v96 = *(_QWORD *)(a1 + 8);
        if ( *(_BYTE *)(v96 + 106) )
        {
          v97 = 0LL;
          if ( v47 )
            v97 = v47 - 1;
          v98 = (v97 >> 1) + (v97 & 1);
          if ( v98 )
          {
            v99 = (char *)src[1];
            v100 = -(__int64)v98;
            v101 = 1LL;
            do
            {
              if ( v101 >= v47 )
                core::panicking::panic_bounds_check(v101, v47, &off_115DB8, v99);
              *(_WORD *)&v99[v101 - 1] = __ROL2__(*(_WORD *)&v99[v101 - 1], 8);
              v101 += 2LL;
              ++v100;
            }
            while ( v100 );
            v96 = *(_QWORD *)(a1 + 8);
          }
        }
        if ( *(_BYTE *)(v96 + 80) != 7 )
        {
          v102 = src[1];
          v103 = v144;
          if ( v144 )
          {
            if ( (v144 & 0x8000000000000000LL) != 0LL )
            {
              v104 = 0LL;
            }
            else
            {
              v104 = 1LL;
              v105 = _rust_alloc(v144, 1LL);
              if ( v105 )
              {
                v106 = (void *)v105;
                goto LABEL_174;
              }
            }
            alloc::raw_vec::handle_error(v104, v103);
          }
          v106 = &dword_0 + 1;
LABEL_174:
          memcpy(v106, v102, v103);
          *(_QWORD *)v168 = v103;
          *(_QWORD *)&v168[8] = v106;
          *(_QWORD *)&v168[16] = v103;
          uu_dd::blocks::conv_block_unblock_helper(&v188, v168, v96 + 80, &v158);
          if ( src[0] )
            _rust_dealloc(src[1], src[0], 1LL);
          v144 = v189;
          *(_OWORD *)src = v188;
        }
        v93 = *((_QWORD *)&v158 + 1);
        v95 = v158;
        v59 = v159;
        v94 = v160;
LABEL_178:
        if ( !(v93 | v95) )
        {
LABEL_197:
          *(_OWORD *)&v168[32] = v154;
          *(__m256i *)v168 = fd;
          v188 = v165;
          v189 = v166;
          v190 = v148;
          *((_QWORD *)&v158 + 1) = v163;
          *(_QWORD *)&v158 = v164;
          v159 = v173;
          v160 = v174;
          v202 = v184;
          v201 = v183;
          v66 = uu_dd::finalize(
                  (unsigned int)v168,
                  (unsigned int)&v188,
                  (unsigned int)&v158,
                  v178,
                  v179,
                  (unsigned int)&v152,
                  (__int64)&v201,
                  v133 == 0);
          v147 = 0;
          core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v185);
          if ( !_InterlockedDecrement64(v180[0]) )
            alloc::sync::Arc<T,A>::drop_slow(v180);
          if ( src[0] )
            _rust_dealloc(src[1], src[0], 1LL);
          if ( (_QWORD)v152 == 2LL )
          {
            std::sync::mpmc::counter::Sender<C>::release((char *)&v152 + 8);
          }
          else if ( (_DWORD)v152 == 1 )
          {
            std::sync::mpmc::counter::Sender<C>::release((char *)&v152 + 8);
          }
          else
          {
            v125 = *((_QWORD *)&v152 + 1);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v152 + 1) + 512LL)) )
            {
              v126 = *(_QWORD *)(v125 + 128);
              v127 = *(_QWORD *)(v125 + 400);
              do
              {
                v128 = v126;
                v126 = _InterlockedCompareExchange64((volatile signed __int64 *)(v125 + 128), v127 | v126, v126);
              }
              while ( v128 != v126 );
              if ( (v126 & *(_QWORD *)(v125 + 400)) == 0 )
                std::sync::mpmc::waker::SyncWaker::disconnect(v125 + 320);
              v129 = *(_BYTE *)(v125 + 528);
              *(_BYTE *)(v125 + 528) = 1;
              if ( v129 )
                core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_dd::progress::ProgUpdate>>>>(v125);
            }
          }
          v130 = v151;
          goto LABEL_256;
        }
        v142 = v94;
        if ( fd.m256i_i64[0] == 0x8000000000000000LL )
          uu_dd::Output::write_blocks((__int64 *)v168, (__int64)&fd.m256i_i64[1], (__int64)src[1], v144);
        else
          uu_dd::bufferedoutput::BufferedOutput::write_blocks(v168, &fd, src[1], v144);
        if ( *(_QWORD *)v168 )
        {
          v66 = *(_QWORD *)&v168[8];
          goto LABEL_205;
        }
        v107 = *(_OWORD *)&v168[16];
        v108 = *(_QWORD *)&v168[32];
        v146 = *(_QWORD *)&v168[40];
        if ( v139 )
        {
          if ( v176 >= 0 )
          {
            if ( v59 >= 0 )
            {
              uu_dd::Input::discard_cache(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), v176, v59);
              goto LABEL_187;
            }
            v132 = &off_115D58;
LABEL_270:
            v161 = v132;
          }
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, v168, &unk_115B68, v161);
        }
LABEL_187:
        if ( v138 )
        {
          if ( v182 | (v175 >> 63) )
          {
            v132 = &off_115D70;
            goto LABEL_270;
          }
          if ( *((_QWORD *)&v107 + 1) | ((unsigned __int64)v107 >> 63) )
          {
            v132 = &off_115D88;
            goto LABEL_270;
          }
          v109 = &fd.m256i_i64[3];
          if ( fd.m256i_i64[0] == 0x8000000000000000LL )
            v109 = &fd.m256i_i64[1];
          uu_dd::Output::discard_cache((__int64)v109, v175, v107);
        }
        v176 += v59;
        v110 = v107 + __PAIR128__(v182, v175);
        v182 = (v107 + __PAIR128__(v182, v175)) >> 64;
        v175 = v110;
        *(_QWORD *)&v165 = v95 + v165;
        *((_QWORD *)&v165 + 1) += v93;
        v148 += v142;
        v166 += v59;
        v173 += v108;
        v174 += v146;
        v111 = v107 + __PAIR128__(v163, v164);
        v163 = (v107 + __PAIR128__(v163, v164)) >> 64;
        v164 = v111;
        v112 = *((_BYTE *)v180[0] + 16);
        *((_BYTE *)v180[0] + 16) = 0;
        v113 = 0;
        if ( v112 == 1 )
        {
LABEL_196:
          v114 = std::time::Instant::elapsed(&v178);
          v193 = v165;
          v194 = v166;
          v195 = v148;
          v196 = v164;
          v197 = v163;
          v198 = v173;
          v199 = v174;
          v191 = v114;
          v192 = v115;
          v200 = v113;
          std::sync::mpmc::Sender<T>::send(v168, &v152, &v191);
          v45 = v151;
        }
        else
        {
          v45 = v151;
          if ( v112 == 2 )
          {
            v113 = 1;
            goto LABEL_196;
          }
        }
        goto LABEL_59;
      }
      v51 = v135 <= (unsigned __int64)v60;
      v136 = v135 - (_QWORD)v60;
      if ( v51 )
      {
        ++v156;
      }
      else
      {
        if ( (_BYTE)v167 )
        {
          if ( v136 )
          {
            if ( v136 >= 0 )
            {
              v72 = 1LL;
              v73 = _rust_alloc(v136, 1LL);
              if ( v73 )
              {
                v74 = (char *)v73;
                v71 = v140;
                goto LABEL_111;
              }
LABEL_263:
              v162 = v136;
LABEL_266:
              alloc::raw_vec::handle_error(v72, v162);
            }
            v162 = v187;
LABEL_265:
            v72 = 0LL;
            goto LABEL_266;
          }
          v74 = (_BYTE *)(&dword_0 + 1);
LABEL_111:
          memset(v74, (unsigned __int8)v167, v136);
          v187 = (__int64)v74;
        }
        else if ( v136 )
        {
          if ( v136 < 0 )
            goto LABEL_265;
          v72 = 1LL;
          v75 = _rust_alloc_zeroed(v136, 1LL);
          if ( !v75 )
            goto LABEL_263;
          v74 = (char *)v75;
          v71 = v140;
          v162 = v75;
        }
        else
        {
          v74 = (_BYTE *)(&dword_0 + 1);
          v162 = 1LL;
        }
        v76 = &v60[v146];
        if ( (unsigned __int64)&v60[v146] > v71 )
          core::slice::index::slice_index_order_fail(
            v76,
            v71,
            &anon_0e664cac2df82d3dbe45a871137baf80_11_llvm_16267360750278268012);
        v77 = v144 - v71;
        if ( v144 < v71 )
          core::slice::index::slice_end_index_len_fail(
            v71,
            v144,
            &anon_0e664cac2df82d3dbe45a871137baf80_11_llvm_16267360750278268012);
        v144 = (size_t)&v60[v146];
        *(_QWORD *)&v168[40] = v74;
        v169 = v74;
        v170 = v136;
        v171 = &v74[v136];
        *(_QWORD *)v168 = (char *)src[1] + (unsigned __int64)v76;
        *(_QWORD *)&v168[8] = (char *)src[1] + v71;
        *(_QWORD *)&v168[16] = src;
        *(_QWORD *)&v168[24] = v71;
        *(_QWORD *)&v168[32] = v77;
        <alloc::vec::splice::Splice<I,A> as core::ops::drop::Drop>::drop(v168);
        v78 = *(_QWORD *)&v168[32];
        *(_QWORD *)v168 = 1LL;
        *(_QWORD *)&v168[8] = 1LL;
        if ( *(_QWORD *)&v168[32] )
        {
          v79 = (_QWORD *)(*(_QWORD *)&v168[16] + 16LL);
          v80 = *(_QWORD *)(*(_QWORD *)&v168[16] + 16LL);
          if ( *(_QWORD *)&v168[24] != v80 )
            memmove(
              (void *)(v80 + *(_QWORD *)(*(_QWORD *)&v168[16] + 8LL)),
              (const void *)(*(_QWORD *)(*(_QWORD *)&v168[16] + 8LL) + *(_QWORD *)&v168[24]),
              *(size_t *)&v168[32]);
          *v79 = v78 + v80;
        }
        if ( v170 )
          _rust_dealloc(*(_QWORD *)&v168[40], v170, 1LL);
        ++v155;
      }
      v59 = (off_t)&v60[v157];
      v57 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
      v58 = v57 + v146;
      v47 = v144;
      if ( v57 + v146 >= v144 )
        goto LABEL_156;
      goto LABEL_79;
    }
    if ( (unsigned __int8)std::io::error::Error::kind(*((_QWORD *)&v65 + 1)) != 35 )
      break;
    if ( (unsigned __int64)(v66 & 3) - 2 >= 2 && (v66 & 3) != 0 )
    {
      v67 = v66 - 1;
      v68 = *(_QWORD *)(v66 - 1);
      v69 = *(_QWORD *)(v66 + 7);
      if ( *(_QWORD *)v69 )
        (*(void (__fastcall **)(__int64))v69)(v68);
      v70 = *(_QWORD *)(v69 + 8);
      if ( v70 )
        _rust_dealloc(v68, v70, *(_QWORD *)(v69 + 16));
      _rust_dealloc(v67, 24LL, 8LL);
      v45 = v151;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 107LL) )
  {
    core::ptr::drop_in_place<std::io::error::Error>(&v168[8]);
    v71 = v140;
    v60 = v150;
    goto LABEL_99;
  }
LABEL_205:
  v116 = fd.m256i_i64[0];
  if ( fd.m256i_i64[0] == 0x8000000000000000LL )
  {
    if ( (unsigned __int8)(fd.m256i_i8[8] - 1) <= 1u )
      close(fd.m256i_i32[3]);
  }
  else
  {
    if ( (unsigned __int8)(fd.m256i_i8[24] - 1) <= 1u )
      close(fd.m256i_i32[7]);
    if ( v116 )
      _rust_dealloc(fd.m256i_i64[1], v116, 1LL);
  }
  core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v185);
  if ( !_InterlockedDecrement64(v180[0]) )
    alloc::sync::Arc<T,A>::drop_slow(v180);
  if ( src[0] )
    _rust_dealloc(src[1], src[0], 1LL);
  v117 = 0;
LABEL_217:
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v183);
  v18 = v152;
  if ( (_QWORD)v152 == 2LL )
  {
LABEL_251:
    std::sync::mpmc::counter::Sender<C>::release((char *)&v152 + 8);
    goto LABEL_252;
  }
LABEL_218:
  if ( v18 == 1 )
  {
    std::sync::mpmc::counter::Sender<C>::release((char *)&v152 + 8);
  }
  else
  {
    v118 = *((_QWORD *)&v152 + 1);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v152 + 1) + 512LL)) )
    {
      v119 = *(_QWORD *)(v118 + 128);
      v120 = *(_QWORD *)(v118 + 400);
      do
      {
        v121 = v119;
        v119 = _InterlockedCompareExchange64((volatile signed __int64 *)(v118 + 128), v120 | v119, v119);
      }
      while ( v121 != v119 );
      if ( (v119 & *(_QWORD *)(v118 + 400)) == 0 )
        std::sync::mpmc::waker::SyncWaker::disconnect(v118 + 320);
      v122 = *(_BYTE *)(v118 + 528);
      *(_BYTE *)(v118 + 528) = 1;
      if ( v122 )
        core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_dd::progress::ProgUpdate>>>>(v118);
    }
  }
LABEL_252:
  if ( v117 && (unsigned __int8)(*(_BYTE *)v145 - 1) <= 1u )
    close(*(_DWORD *)(v145 + 4));
  v130 = (int *)(a1 + 4);
LABEL_256:
  close(*v130);
  return v66;
}
