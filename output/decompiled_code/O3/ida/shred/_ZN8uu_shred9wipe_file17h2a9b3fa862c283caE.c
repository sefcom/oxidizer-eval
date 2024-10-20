        char a10)
{
  __int64 (__fastcall **v14)(); // rbx
  __int64 (__fastcall **v15)(); // rsi
  _OWORD *result; // rax
  __int128 v17; // xmm0
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  __int128 v21; // xmm0
  unsigned __int64 v22; // rbp
  unsigned __int64 i; // r14
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r14
  __int64 v27; // r13
  int v28; // ebp
  int v29; // ebx
  int v30; // r12d
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD **v33; // rax
  __int64 v34; // rax
  __int64 j; // r12
  int v36; // ebx
  int v37; // r13d
  int v38; // ebp
  _QWORD *v39; // r13
  bool v40; // zf
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rbp
  unsigned int v43; // ecx
  unsigned int v44; // r12d
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rsi
  int v51; // ecx
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // rcx
  int *v58; // rdi
  __int64 v59; // rbx
  unsigned __int64 v60; // rax
  char *v61; // rax
  unsigned __int8 *v62; // r13
  unsigned __int8 *v63; // rcx
  int v64; // edx
  int v65; // r14d
  char *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  char v71; // bl
  char *v72; // rbx
  _OWORD *v73; // r14
  __int64 v74; // rbx
  unsigned __int8 *v75; // r15
  unsigned __int64 v76; // rsi
  char *v77; // rax
  char *v78; // rsi
  unsigned __int64 v79; // rbp
  unsigned __int64 v80; // r12
  unsigned __int64 v81; // rsi
  size_t v82; // r14
  unsigned __int64 v83; // r13
  char *v84; // rsi
  unsigned __int64 v85; // r12
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rsi
  size_t v88; // r13
  __int128 *v89; // r14
  __int64 (__fastcall **v90)(); // rbx
  char *v91; // r15
  __int64 (__fastcall *v92)(); // rsi
  __int64 v93; // rdx
  __int128 *v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rax
  unsigned __int64 v97; // rbx
  unsigned __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rax
  __int128 *v101; // rbx
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rbp
  __int128 v104; // kr10_16
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // r14
  char *v108; // r15
  signed __int64 v109; // r13
  char *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // r14
  __int64 v113; // rax
  void *v114; // rbp
  __int64 v115; // rax
  __int64 v116; // r14
  __int64 v117; // rax
  __int64 v118; // rdx
  char **v119; // rdx
  __int64 v120; // rdx
  char **v121; // rdi
  __int64 v122; // [rsp-2F000h] [rbp-30298h]
  __int64 v123; // [rsp-2F000h] [rbp-30298h]
  unsigned __int64 v124; // [rsp-2EFF8h] [rbp-30290h]
  unsigned __int64 v125; // [rsp-2EFF8h] [rbp-30290h]
  int v126; // [rsp-2EFECh] [rbp-30284h] BYREF
  unsigned __int64 v127; // [rsp-2EFE8h] [rbp-30280h]
  __int64 (__fastcall **v128)(); // [rsp-2EFE0h] [rbp-30278h]
  char *v129; // [rsp-2EFD8h] [rbp-30270h]
  __int64 v130; // [rsp-2EFD0h] [rbp-30268h]
  __int64 v131; // [rsp-2EFC8h] [rbp-30260h] BYREF
  __int64 v132; // [rsp-2EFC0h] [rbp-30258h]
  unsigned __int64 v133; // [rsp-2EFB8h] [rbp-30250h]
  size_t v134; // [rsp-2EFB0h] [rbp-30248h]
  char *v135; // [rsp-2EFA8h] [rbp-30240h]
  size_t v136; // [rsp-2EFA0h] [rbp-30238h]
  int v137; // [rsp-2EF94h] [rbp-3022Ch]
  __int128 *v138; // [rsp-2EF90h] [rbp-30228h] BYREF
  __int64 (__fastcall **v139)(); // [rsp-2EF88h] [rbp-30220h]
  size_t v140; // [rsp-2EF80h] [rbp-30218h]
  char v141; // [rsp-2EF78h] [rbp-30210h]
  __int64 v142; // [rsp-2EF70h] [rbp-30208h]
  __int64 v143; // [rsp-2EF68h] [rbp-30200h] BYREF
  __int128 *v144; // [rsp-2EF60h] [rbp-301F8h]
  __int64 v145; // [rsp-2EF58h] [rbp-301F0h]
  unsigned __int64 v146; // [rsp-2EF50h] [rbp-301E8h]
  __int128 v147; // [rsp-2EF48h] [rbp-301E0h] BYREF
  size_t v148; // [rsp-2EF38h] [rbp-301D0h]
  char **v149; // [rsp-2EF30h] [rbp-301C8h]
  __int64 v150; // [rsp-2EF28h] [rbp-301C0h] BYREF
  __int128 v151; // [rsp-2EF20h] [rbp-301B8h] BYREF
  size_t v152; // [rsp-2EF10h] [rbp-301A8h]
  unsigned __int64 v153; // [rsp-2EF08h] [rbp-301A0h] BYREF
  _OWORD v154[11]; // [rsp-2EF00h] [rbp-30198h] BYREF
  __int64 v155; // [rsp-2EE48h] [rbp-300E0h]
  __int64 v156; // [rsp-2EE38h] [rbp-300D0h]
  __int64 v157; // [rsp-2EE30h] [rbp-300C8h]
  char v158; // [rsp-2EE28h] [rbp-300C0h]
  unsigned __int64 v159; // [rsp-2EDF0h] [rbp-30088h]
  _BYTE v160[48]; // [rsp-2EDE0h] [rbp-30078h] BYREF
  _BYTE v161[24]; // [rsp-2EDB0h] [rbp-30048h] BYREF
  __int64 v162; // [rsp-2ED98h] [rbp-30030h] BYREF
  __int64 v163; // [rsp-2DD98h] [rbp-2F030h] BYREF
  unsigned __int64 v164; // [rsp-1EEF8h] [rbp-20190h]
  _OWORD v165[4096]; // [rsp-1EDA8h] [rbp-20040h] BYREF
  __int128 v166; // [rsp-EDA0h] [rbp-10038h] BYREF
  _QWORD *v167; // [rsp-ED90h] [rbp-10028h]
  __int64 (__fastcall *v168)(); // [rsp-ED88h] [rbp-10020h]
  _OWORD *v169; // [rsp-ED80h] [rbp-10018h]
  __int64 v170; // [rsp-ED78h] [rbp-10010h]

  do
    v162 = 0LL;
  while ( &v162 != (__int64 *)((char *)&v163 - (char *)&unk_30000) );
  v137 = a4;
  v14 = a1;
  v15 = a1;
  std::sys::pal::unix::fs::stat(v154);
  if ( LODWORD(v154[0]) == 2 )
  {
    *((_QWORD *)&v165[0] + 1) = *((_QWORD *)&v154[0] + 1);
    *(_QWORD *)&v165[0] = 2LL;
    goto LABEL_5;
  }
  v15 = (__int64 (__fastcall **)())v154;
  memcpy(v165, v154, 0xB0uLL);
  if ( *(_QWORD *)&v165[0] == 2LL )
  {
LABEL_5:
    ((void (__fastcall *)(char *, __int64 (__fastcall **)()))core::ptr::drop_in_place<std::io::error::Error>)(
      (char *)v165 + 8,
      v15);
    *(_QWORD *)&v166 = 1LL;
    *((_QWORD *)&v166 + 1) = a1;
    v167 = (_QWORD *)a2;
    LOBYTE(v168) = 0;
    v138 = &v166;
    v139 = (__int64 (__fastcall **)())<os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v154[0] = &unk_EF950;
    *((_QWORD *)&v154[0] + 1) = 2LL;
    *(_QWORD *)&v154[2] = 0LL;
    *(_QWORD *)&v154[1] = &v138;
    *((_QWORD *)&v154[1] + 1) = 1LL;
    alloc::fmt::format::format_inner(v165, v154);
    DWORD2(v165[1]) = 1;
    result = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_6:
    v17 = v165[0];
    result[1] = v165[1];
    *result = v17;
    return result;
  }
  if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 (__fastcall **)(), size_t))std::path::Path::is_file)(a1, a2) )
  {
    *(_QWORD *)&v166 = 1LL;
    *((_QWORD *)&v166 + 1) = a1;
    v167 = (_QWORD *)a2;
    LOBYTE(v168) = 0;
    v138 = &v166;
    v139 = (__int64 (__fastcall **)())<os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v154[0] = &unk_EF7F0;
    *((_QWORD *)&v154[0] + 1) = 2LL;
    *(_QWORD *)&v154[2] = 0LL;
    *(_QWORD *)&v154[1] = &v138;
    *((_QWORD *)&v154[1] + 1) = 1LL;
    alloc::fmt::format::format_inner(v165, v154);
    DWORD2(v165[1]) = 1;
    result = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    goto LABEL_6;
  }
  std::sys::pal::unix::fs::stat(v154);
  if ( LODWORD(v154[0]) == 2 )
  {
    v18 = *((_QWORD *)&v154[0] + 1);
    *(_QWORD *)&v154[0] = 0LL;
    *((_QWORD *)&v154[0] + 1) = 1LL;
    *(_QWORD *)&v154[1] = 0LL;
    *((_QWORD *)&v154[1] + 1) = v18;
    result = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_16:
    v21 = v154[0];
    result[1] = v154[1];
    *result = v21;
    return result;
  }
  v127 = a3;
  v19 = *(_QWORD *)&v154[5];
  if ( a10 )
  {
    v20 = std::sys::pal::unix::fs::set_perm(a1, a2);
    if ( v20 )
    {
      *(_QWORD *)&v154[0] = 0LL;
      *((_QWORD *)&v154[0] + 1) = 1LL;
      *(_QWORD *)&v154[1] = 0LL;
      *((_QWORD *)&v154[1] + 1) = v20;
      result = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_16;
    }
  }
  v131 = 0LL;
  v132 = 1LL;
  v133 = 0LL;
  v136 = a2;
  v128 = a1;
  if ( v19 )
  {
    if ( v127 <= 3 )
    {
      if ( v127 )
      {
        v22 = v19;
        for ( i = 0LL; i != v127; v133 = i )
        {
          if ( i == v131 )
            ((void (__fastcall *)(__int64 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v131);
          *(_DWORD *)(v132 + 4 * i++) = 2;
        }
        v14 = v128;
        v19 = v22;
      }
      else
      {
        v127 = 0LL;
      }
LABEL_73:
      if ( a8 )
      {
        if ( v127 == v131 )
          ((void (__fastcall *)(__int64 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v131);
        v57 = v127;
        *(_DWORD *)(v132 + 4 * v127) = 0;
        v24 = v57 + 1;
        v133 = v24;
      }
      else
      {
        v24 = v127;
      }
      goto LABEL_78;
    }
    v129 = (char *)v19;
    v146 = a5;
    v135 = (char *)a6;
    v124 = v127 / 0x16;
    v25 = 0LL;
    if ( v127 >= 0x16 )
    {
      v34 = 0LL;
      do
      {
        v130 = v34 + 1;
        *((_QWORD *)&v154[0] + 1) = 22LL;
        v154[5] = xmmword_1A878;
        v154[4] = xmmword_1A868;
        v154[3] = xmmword_1A858;
        v154[2] = xmmword_1A848;
        v154[1] = xmmword_1A838;
        *(_QWORD *)&v154[6] = 0xEE000000DD00LL;
        for ( j = 4LL; j != 26; ++j )
        {
          v36 = *((unsigned __int8 *)v154 + 4 * j);
          if ( v36 == 2 )
            break;
          v37 = *((unsigned __int8 *)v154 + 4 * j + 3);
          v38 = *(unsigned __int16 *)((char *)v154 + 4 * j + 1);
          if ( v25 == v131 )
            ((void (__fastcall *)(__int64 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v131);
          *(_DWORD *)(v132 + 4 * v25++) = v36 | (v38 << 8) | (v37 << 24);
          v133 = v25;
        }
        v34 = v130;
      }
      while ( v130 != v124 );
    }
    *((_QWORD *)&v154[0] + 1) = 22LL;
    v154[1] = xmmword_1A838;
    v154[2] = xmmword_1A848;
    v154[3] = xmmword_1A858;
    v154[4] = xmmword_1A868;
    v154[5] = xmmword_1A878;
    *(_QWORD *)&v154[6] = 0xEE000000DD00LL;
    v26 = v127 - 22 * v124;
    if ( v127 != 22 * v124 )
    {
      v130 = 4 * v25;
      v27 = 0LL;
      do
      {
        if ( v27 == 22 )
          break;
        v28 = *((unsigned __int8 *)&v154[1] + 4 * v27);
        if ( v28 == 2 )
          break;
        v29 = *((unsigned __int8 *)&v154[1] + 4 * v27 + 3);
        v30 = *(unsigned __int16 *)((char *)&v154[1] + 4 * v27 + 1);
        if ( v25 + v27 == v131 )
          ((void (__fastcall *)(__int64 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v131);
        *(_DWORD *)(v130 + v132 + 4 * v27) = v28 | (v30 << 8) | (v29 << 24);
        v133 = v25 + v27++ + 1;
      }
      while ( v26 != v27 );
    }
    v31 = __readfsqword(0);
    v32 = *(_QWORD *)(v31 - 16);
    if ( v32 )
    {
      a2 = v136;
      if ( (_DWORD)v32 == 1 )
      {
        v33 = (_QWORD **)(v31 - 8);
LABEL_45:
        v39 = *v33;
        v40 = (**v33)++ == -1LL;
        if ( v40 )
          BUG();
        *(_QWORD *)&v154[0] = v39;
        v41 = v133;
        if ( v133 >= 2 )
        {
          v130 = v132;
          v42 = v133;
          while ( 1 )
          {
            if ( HIDWORD(v42) )
            {
              v49 = ((__int64 (__fastcall *)(_OWORD *, _QWORD, unsigned __int64))rand::rng::Rng::gen_range)(
                      v154,
                      0LL,
                      v42);
            }
            else
            {
              _BitScanReverse(&v43, v42);
              v44 = ((_DWORD)v42 << ~(_BYTE)v43) - 1;
              v45 = v39[34];
              do
              {
                if ( v45 >= 0x40 )
                {
                  v48 = v39[43];
                  if ( v48 <= 0 || v39[44] - rand::rngs::adapter::reseeding::fork::RESEEDING_RNG_FORK_COUNTER < 0 )
                  {
                    ((void (__fastcall *)(_QWORD *, _QWORD *))rand::rngs::adapter::reseeding::ReseedingCore<R,Rsdr>::reseed_and_generate)(
                      v39 + 36,
                      v39 + 2);
                  }
                  else
                  {
                    v39[43] = v48 - 256;
                    ((void (__fastcall *)(_QWORD *, __int64, _QWORD *))rand_chacha::guts::refill_wide)(
                      v39 + 36,
                      6LL,
                      v39 + 2);
                  }
                  v45 = 0LL;
                }
                v46 = *((unsigned int *)v39 + v45++ + 4);
                v39[34] = v45;
                v47 = v42 * v46;
              }
              while ( v44 < (unsigned int)v47 );
              v49 = HIDWORD(v47);
              a2 = v136;
            }
            if ( --v42 >= v41 )
              goto LABEL_228;
            if ( v49 >= v41 )
              break;
            v50 = v130;
            v51 = *(_DWORD *)(v130 + 4 * v42);
            *(_DWORD *)(v130 + 4 * v42) = *(_DWORD *)(v130 + 4 * v49);
            *(_DWORD *)(v50 + 4 * v49) = v51;
            if ( v42 <= 1 )
              goto LABEL_62;
          }
          v42 = v49;
LABEL_228:
          ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::panicking::panic_bounds_check)(
            v42,
            v41,
            &off_EF740);
        }
LABEL_62:
        v52 = v127 / 0xA + 2;
        v53 = v127 - 1;
        v54 = v127 / 0xA + 3;
        v55 = 0LL;
        do
        {
          if ( (v52 | v55) >> 32 )
            v56 = v55 / v52;
          else
            v56 = (unsigned int)v55 / (unsigned int)v52;
          if ( v56 >= v133 )
            ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::panicking::panic_bounds_check)(
              v56,
              v133,
              &off_EF8B8);
          *(_BYTE *)(v132 + 4 * v56) = 2;
          v55 += v53;
          --v54;
        }
        while ( v54 );
        v40 = (*v39)-- == 1LL;
        v14 = v128;
        v19 = (unsigned __int64)v129;
        if ( v40 )
        {
          v40 = v39[1]-- == 1LL;
          if ( v40 )
            _rust_dealloc(v39, 368LL, 16LL);
        }
        v127 = v133;
        a6 = (unsigned __int64)v135;
        a5 = v146;
        goto LABEL_73;
      }
    }
    else
    {
      v33 = (_QWORD **)((__int64 (__fastcall *)(unsigned __int64, _QWORD))std::sys::thread_local::native::lazy::Storage<T,D>::initialize)(
                         v31 - 16,
                         0LL);
      a2 = v136;
      if ( v33 )
        goto LABEL_45;
    }
    ((void (__fastcall __noreturn *)(const char *, __int64, _OWORD *, void *, char **))core::result::unwrap_failed)(
      anon_ae7d027233a4cf631ecd7d99e41f08fc_18_llvm_8840552875692662641,
      70LL,
      v154,
      &anon_ae7d027233a4cf631ecd7d99e41f08fc_8_llvm_8840552875692662641,
      &anon_ae7d027233a4cf631ecd7d99e41f08fc_20_llvm_8840552875692662641);
  }
  v24 = 0LL;
LABEL_78:
  v153 = v24;
  *(_QWORD *)&v154[0] = 0x1B600000000LL;
  DWORD2(v154[0]) = 256;
  WORD6(v154[0]) = 0;
  v58 = (int *)v165;
  ((void (__fastcall *)(_OWORD *, _OWORD *, __int64 (__fastcall **)(), size_t))std::fs::OpenOptions::_open)(
    v165,
    v154,
    v14,
    a2);
  if ( LODWORD(v165[0]) )
  {
    result = (_OWORD *)((__int64 (__fastcall *)(_QWORD, __int64 (__fastcall **)(), size_t))<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context)(
                         *((_QWORD *)&v165[0] + 1),
                         v14,
                         a2);
    if ( v131 )
    {
      v59 = (__int64)result;
      _rust_dealloc(v132, 4 * v131, 1LL);
      return (_OWORD *)v59;
    }
    return result;
  }
  if ( !a5 )
    a6 = v19;
  v126 = DWORD1(v165[0]);
  v122 = v131;
  v146 = v132 + 4 * v133;
  v127 = a6 >> 16;
  v60 = (unsigned __int64)&unk_10000;
  v134 = (unsigned __int16)a6;
  if ( a7 )
    v60 = (unsigned __int16)a6;
  v125 = v60;
  v61 = 0LL;
  v149 = &anon_6037b39626056305f6e119c4fe5cdbce_10_llvm_10757439607192978579;
  v142 = v132;
  v62 = (unsigned __int8 *)v132;
  while ( 1 )
  {
    v63 = (unsigned __int8 *)v146;
    if ( v62 != (unsigned __int8 *)v146 )
    {
      v63 = v62 + 4;
      v64 = *v62;
      if ( v64 != 3 )
        break;
    }
    v65 = v19 & 0xFFFFFF00 | 3;
    v66 = v61;
    v62 = v63;
    if ( (_BYTE)v65 == 3 )
      goto LABEL_155;
LABEL_94:
    v135 = v66;
    LODWORD(v147) = v65;
    if ( a9 )
    {
      if ( (_BYTE)v65 )
      {
        if ( (unsigned __int8)v65 == 2 )
        {
          v67 = _rust_alloc(6LL, 1LL);
          if ( !v67 )
            alloc::raw_vec::handle_error(1LL, 6LL);
          *(_WORD *)(v67 + 4) = 28015;
          *(_DWORD *)v67 = 1684955506;
          v143 = 6LL;
          v144 = (__int128 *)v67;
          v145 = 6LL;
        }
        else
        {
          *(_QWORD *)&v151 = (char *)&v147 + 1;
          v138 = (__int128 *)((char *)&v147 + 2);
          *(_QWORD *)&v166 = (char *)&v147 + 3;
          *(_QWORD *)&v154[0] = &v151;
          *((_QWORD *)&v154[0] + 1) = <&T as core::fmt::LowerHex>::fmt;
          *(_QWORD *)&v154[1] = &v138;
          *((_QWORD *)&v154[1] + 1) = <&T as core::fmt::LowerHex>::fmt;
          *(_QWORD *)&v154[2] = &v166;
          *((_QWORD *)&v154[2] + 1) = <&T as core::fmt::LowerHex>::fmt;
          *(_QWORD *)&v165[0] = &unk_1A7F8;
          *((_QWORD *)&v165[0] + 1) = 3LL;
          *(_QWORD *)&v165[2] = 0LL;
          *(_QWORD *)&v165[1] = v154;
          *((_QWORD *)&v165[1] + 1) = 3LL;
          alloc::fmt::format::format_inner(&v143, v165);
        }
      }
      else
      {
        v138 = (__int128 *)((char *)&v147 + 1);
        *(_QWORD *)&v166 = &v138;
        *((_QWORD *)&v166 + 1) = <&T as core::fmt::LowerHex>::fmt;
        *(_QWORD *)&v154[0] = 2LL;
        *(_QWORD *)&v154[1] = 2LL;
        *(_QWORD *)&v154[2] = 0LL;
        *((_QWORD *)&v154[2] + 1) = 32LL;
        LOBYTE(v154[3]) = 3;
        *((_QWORD *)&v154[3] + 1) = 2LL;
        *((_QWORD *)&v154[4] + 1) = 2LL;
        *((_QWORD *)&v154[5] + 1) = 0LL;
        *(_QWORD *)&v154[6] = 32LL;
        BYTE8(v154[6]) = 3;
        *(_QWORD *)&v154[7] = 2LL;
        *(_QWORD *)&v154[8] = 2LL;
        *(_QWORD *)&v154[9] = 0LL;
        *((_QWORD *)&v154[9] + 1) = 32LL;
        LOBYTE(v154[10]) = 3;
        *(_QWORD *)&v165[0] = &unk_1A7F8;
        *((_QWORD *)&v165[0] + 1) = 3LL;
        *(_QWORD *)&v165[2] = v154;
        *((_QWORD *)&v165[2] + 1) = 3LL;
        *(_QWORD *)&v165[1] = &v166;
        *((_QWORD *)&v165[1] + 1) = 1LL;
        alloc::fmt::format::format_inner(&v143, v165);
      }
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v165[0] = xmmword_F4A40;
      *(_QWORD *)&v166 = v165;
      *((_QWORD *)&v166 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v154[0] = &unk_EF7B0;
      *((_QWORD *)&v154[0] + 1) = 2LL;
      *(_QWORD *)&v154[2] = 0LL;
      *(_QWORD *)&v154[1] = &v166;
      *((_QWORD *)&v154[1] + 1) = 1LL;
      std::io::stdio::_eprint(v154);
      v138 = (_OWORD *)(&dword_0 + 1);
      v139 = v14;
      v140 = a2;
      v141 = 0;
      *(_QWORD *)&v151 = v129 + 1;
      *(_QWORD *)&v165[0] = &v138;
      *((_QWORD *)&v165[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v165[1] = &v151;
      *((_QWORD *)&v165[1] + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v165[2] = &v153;
      *((_QWORD *)&v165[2] + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v165[3] = &v143;
      *((_QWORD *)&v165[3] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v154[0] = 2LL;
      *(_QWORD *)&v154[1] = 2LL;
      *(_QWORD *)&v154[2] = 0LL;
      *((_QWORD *)&v154[2] + 1) = 32LL;
      LOBYTE(v154[3]) = 3;
      *((_QWORD *)&v154[3] + 1) = 2LL;
      *((_QWORD *)&v154[4] + 1) = 0LL;
      *(_QWORD *)&v154[5] = 2LL;
      *((_QWORD *)&v154[5] + 1) = 1LL;
      *(_QWORD *)&v154[6] = 32LL;
      BYTE8(v154[6]) = 3;
      *(_QWORD *)&v154[7] = 2LL;
      *(_QWORD *)&v154[8] = 2LL;
      *(_QWORD *)&v154[9] = 2LL;
      *((_QWORD *)&v154[9] + 1) = 32LL;
      LOBYTE(v154[10]) = 3;
      *((_QWORD *)&v154[10] + 1) = 2LL;
      v155 = 2LL;
      v156 = 3LL;
      v157 = 32LL;
      v158 = 3;
      *(_QWORD *)&v166 = &unk_EF8D0;
      *((_QWORD *)&v166 + 1) = 5LL;
      v169 = v154;
      v170 = 4LL;
      v167 = v165;
      v168 = (__int64 (__fastcall *)())&byte_4;
      std::io::stdio::_eprint(&v166);
      if ( v143 )
        _rust_dealloc(v144, v143, 1LL);
    }
    v69 = ((__int64 (__fastcall *)(int *, _QWORD, _QWORD))<std::fs::File as std::io::Seek>::seek)(&v126, 0LL, 0LL);
    v70 = v68;
    LODWORD(v130) = v65;
    if ( v69 && v68 )
      goto LABEL_148;
    if ( (_BYTE)v147 )
    {
      if ( (unsigned __int8)v147 == 2 )
      {
        ((void (__fastcall *)(_OWORD *))rand_core::SeedableRng::from_entropy)(&v154[1]);
        v71 = 0;
        memset(v161, 0, (size_t)&unk_10000);
        goto LABEL_115;
      }
      v72 = byte_10002;
      v73 = v165;
      memset(v165, 0, (size_t)byte_10002);
      do
      {
        *((_BYTE *)v73 + 2) = BYTE3(v147);
        *(_WORD *)v73 = *(_WORD *)((char *)&v147 + 1);
        *(_WORD *)((char *)v73 + 3) = *(_WORD *)((char *)&v147 + 1);
        *((_BYTE *)v73 + 5) = BYTE3(v147);
        *((_WORD *)v73 + 3) = *(_WORD *)((char *)&v147 + 1);
        *((_BYTE *)v73 + 8) = BYTE3(v147);
        v72 -= 9;
        v73 = (_OWORD *)((char *)v73 + 9);
      }
      while ( (unsigned __int64)v72 >= 3 );
      memcpy(&v166, v165, (size_t)byte_10002);
    }
    else
    {
      memset(&v166, BYTE1(v147), (size_t)byte_10002);
    }
    v164 = 0LL;
    memcpy((char *)v154 + 1, &v166, (size_t)byte_10002);
    v71 = 1;
LABEL_115:
    LOBYTE(v154[0]) = v71;
    v74 = 0LL;
    v75 = v62;
    while ( v74 != v127 )
    {
      if ( LOBYTE(v154[0]) )
      {
        v76 = v164;
        v77 = (char *)&unk_10000 + v164;
        if ( v164 <= 0xFFFFFFFFFFFEFFFFLL )
        {
          if ( v77 <= byte_10002 )
          {
            v78 = (char *)v154 + v164 + 1;
            v164 = (unsigned int)v77 % 3;
            goto LABEL_130;
          }
LABEL_221:
          ((void (__fastcall __noreturn *)(char *, char *, char **))core::slice::index::slice_end_index_len_fail)(
            v77,
            byte_10002,
            &off_EF798);
        }
LABEL_222:
        ((void (__fastcall __noreturn *)(unsigned __int64, char *, char **))core::slice::index::slice_index_order_fail)(
          v76,
          v77,
          &off_EF798);
      }
      v79 = v159;
      v80 = 0LL;
      do
      {
        if ( v79 >= 0x40 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, _OWORD *))rand_chacha::guts::refill_wide)(v160, 6LL, &v154[1]);
          v159 = 0LL;
          v79 = 0LL;
        }
        v81 = 64 - v79;
        v82 = (size_t)&unk_10000 - v80;
        if ( 4 * (64 - v79) < (unsigned __int64)&unk_10000 - v80 )
          v82 = 4 * (64 - v79);
        v83 = (v82 + 3) >> 2;
        if ( v83 > v81 )
        {
          v119 = &anon_6037b39626056305f6e119c4fe5cdbce_10_llvm_10757439607192978579;
LABEL_220:
          ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::slice::index::slice_end_index_len_fail)(
            v83,
            v81,
            v119);
        }
        if ( v82 > ((v82 + 3) & 0x7FFFFFFFFFFFFFFCLL) )
        {
          v83 = v82;
          v81 = (v82 + 3) & 0x7FFFFFFFFFFFFFFCLL;
          v119 = &anon_6037b39626056305f6e119c4fe5cdbce_11_llvm_10757439607192978579;
          goto LABEL_220;
        }
        memcpy(&v161[v80], (char *)&v154[1] + 4 * v79, v82);
        v79 += v83;
        v159 = v79;
        v80 += v82;
      }
      while ( v80 < (unsigned __int64)&unk_10000 );
      v62 = v75;
      v78 = v161;
      a2 = v136;
LABEL_130:
      v70 = ((__int64 (__fastcall *)(int *, char *, void *))std::io::Write::write_all)(&v126, v78, &unk_10000);
      ++v74;
      if ( v70 )
      {
        v14 = v128;
        goto LABEL_148;
      }
    }
    v14 = v128;
    LODWORD(v19) = v130;
    if ( v134 )
    {
      if ( LOBYTE(v154[0]) )
      {
        v76 = v164;
        v77 = (char *)(v125 + v164);
        if ( __CFADD__(v125, v164) )
          goto LABEL_222;
        if ( v77 > byte_10002 )
          goto LABEL_221;
        v84 = (char *)v154 + v164 + 1;
        v164 = (unsigned int)v77 % 3;
      }
      else
      {
        v85 = v159;
        v86 = 0LL;
        do
        {
          if ( v85 >= 0x40 )
          {
            ((void (__fastcall *)(_BYTE *, __int64, _OWORD *))rand_chacha::guts::refill_wide)(v160, 6LL, &v154[1]);
            v159 = 0LL;
            v85 = 0LL;
          }
          v87 = 64 - v85;
          v88 = v125 - v86;
          if ( 4 * (64 - v85) < v125 - v86 )
            v88 = 4 * (64 - v85);
          v19 = (v88 + 3) >> 2;
          if ( v19 > v87 )
            goto LABEL_224;
          if ( v88 > ((v88 + 3) & 0x7FFFFFFFFFFFFFFCLL) )
          {
            v19 = v88;
            v87 = (v88 + 3) & 0x7FFFFFFFFFFFFFFCLL;
            v149 = &anon_6037b39626056305f6e119c4fe5cdbce_11_llvm_10757439607192978579;
LABEL_224:
            ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::slice::index::slice_end_index_len_fail)(
              v19,
              v87,
              v149);
          }
          memcpy(&v161[v86], (char *)&v154[1] + 4 * v85, v88);
          v85 += v19;
          v159 = v85;
          v86 += v88;
          LODWORD(v19) = v130;
        }
        while ( v86 < v125 );
        v62 = v75;
        v84 = v161;
        a2 = v136;
        v14 = v128;
      }
      v70 = ((__int64 (__fastcall *)(int *, char *, unsigned __int64))std::io::Write::write_all)(&v126, v84, v125);
      if ( v70 )
        goto LABEL_148;
    }
    v58 = &v126;
    v70 = ((__int64 (__fastcall *)(int *))std::fs::File::sync_data)(&v126);
    if ( v70 )
    {
LABEL_148:
      v138 = (__int128 *)((__int64 (__fastcall *)(__int64, __int64 (__fastcall **)(), size_t))<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context)(
                           v70,
                           v14,
                           a2);
      v139 = &anon_274a8a1dd17f9103a424566d5097b558_2_llvm_4080444732305641230;
      _InterlockedExchange(
        &uucore::mods::error::EXIT_CODE,
        ((__int64 (__fastcall *)(__int128 *))uucore::mods::error::UError::code)(v138));
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v166 = xmmword_F4A40;
      *(_QWORD *)&v165[0] = &v166;
      *((_QWORD *)&v165[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v165[1] = &v138;
      *((_QWORD *)&v165[1] + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v154[0] = &unk_EF920;
      *((_QWORD *)&v154[0] + 1) = 3LL;
      *(_QWORD *)&v154[2] = 0LL;
      *(_QWORD *)&v154[1] = v165;
      *((_QWORD *)&v154[1] + 1) = 2LL;
      v58 = (int *)v154;
      std::io::stdio::_eprint(v154);
      v89 = v138;
      v90 = v139;
      v91 = v135;
      if ( *v139 )
      {
        v58 = (int *)v138;
        ((void (__fastcall *)(__int128 *))*v139)(v138);
      }
      v92 = v90[1];
      if ( v92 )
      {
        v58 = (int *)v89;
        _rust_dealloc(v89, v92, v90[2]);
      }
      v61 = v91;
      v14 = v128;
      LODWORD(v19) = v130;
    }
    else
    {
      v61 = v135;
    }
  }
  v65 = v64 | (*(unsigned __int16 *)(v62 + 1) << 8) | (v62[3] << 24);
  v66 = v61 + 1;
  v62 += 4;
  v129 = v61;
  if ( (_BYTE)v65 != 3 )
    goto LABEL_94;
LABEL_155:
  if ( v122 )
  {
    v58 = (int *)v142;
    _rust_dealloc(v142, 4 * v122, 1LL);
  }
  if ( !(_BYTE)v137 )
  {
LABEL_217:
    close(v126);
    return 0LL;
  }
  if ( a9 )
  {
    *(_QWORD *)&v165[0] = uucore::util_name(v58);
    *((_QWORD *)&v165[0] + 1) = v93;
    *(_QWORD *)&v166 = v165;
    *((_QWORD *)&v166 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v154[0] = &unk_EF7B0;
    *((_QWORD *)&v154[0] + 1) = 2LL;
    *(_QWORD *)&v154[2] = 0LL;
    *(_QWORD *)&v154[1] = &v166;
    *((_QWORD *)&v154[1] + 1) = 1LL;
    std::io::stdio::_eprint(v154);
    *(_QWORD *)&v165[0] = 0LL;
    *((_QWORD *)&v165[0] + 1) = v128;
    *(_QWORD *)&v165[1] = a2;
    BYTE8(v165[1]) = 0;
    *(_QWORD *)&v166 = v165;
    *((_QWORD *)&v166 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v154[0] = &unk_EFA40;
    *((_QWORD *)&v154[0] + 1) = 2LL;
    *(_QWORD *)&v154[2] = 0LL;
    *(_QWORD *)&v154[1] = &v166;
    *((_QWORD *)&v154[1] + 1) = 1LL;
    std::io::stdio::_eprint(v154);
    v14 = v128;
  }
  if ( (_BYTE)v137 == 1 )
  {
    v94 = &v147;
    ((void (__fastcall *)(__int128 *, __int64 (__fastcall **)(), size_t, __int64 (__fastcall **)(), size_t))std::path::Path::_with_file_name)(
      &v147,
      v14,
      a2,
      v14,
      a2);
    v95 = v147;
    goto LABEL_212;
  }
  v96 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(), size_t, char *))std::path::Path::file_name)(v14, a2, v66);
  if ( !v96 )
  {
    v121 = &off_EF970;
    goto LABEL_240;
  }
  ((void (__fastcall *)(_OWORD *, __int64))std::sys::os_str::bytes::Slice::to_str)(v154, v96);
  if ( *(_QWORD *)&v154[0] )
  {
    v121 = &off_EF988;
LABEL_240:
    core::option::unwrap_failed(v121);
  }
  v97 = *(_QWORD *)&v154[1];
  v94 = v154;
  ((void (__fastcall *)(_OWORD *, __int64 (__fastcall **)(), size_t))std::sys::os_str::bytes::Slice::to_owned)(
    v154,
    v128,
    a2);
  v129 = (char *)*((_QWORD *)&v154[0] + 1);
  v95 = *(_QWORD *)&v154[0];
  v134 = *(_QWORD *)&v154[1];
  if ( v97 )
  {
    v98 = v97;
    v123 = *(_QWORD *)&v154[0];
    if ( v97 >> 60 )
    {
      v142 = 0LL;
LABEL_209:
      alloc::raw_vec::handle_error(v142, v125);
    }
    v99 = v97 - 1;
    if ( v97 == 1 )
      v99 = 1LL;
    LOBYTE(v135) = v97 == 1;
    v142 = 8LL;
    while ( 1 )
    {
      v146 = v99;
      v125 = 8 * v98;
      v100 = ((__int64 (__fastcall *)(unsigned __int64, __int64))_rust_alloc_zeroed)(8 * v98, 8LL);
      if ( !v100 )
        goto LABEL_209;
      v101 = (__int128 *)v100;
      v102 = v98;
      v127 = v100 + 8 * v98;
      v130 = 8 * v98;
      while ( 1 )
      {
        *(_QWORD *)&v154[0] = 0LL;
        *((_QWORD *)&v154[0] + 1) = 1LL;
        *(_QWORD *)&v154[1] = 0LL;
        v103 = v102;
        ((void (__fastcall *)(_OWORD *, _QWORD))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(v154, 0LL);
        ((void (__fastcall *)(__int128 *, unsigned __int64, _OWORD *))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold)(
          v101,
          v127,
          v154);
        v104 = v154[0];
        v105 = *(_QWORD *)&v154[1];
        v106 = v130;
        while ( 1 )
        {
          v107 = *(_QWORD *)((char *)v101 + v106 - 8);
          if ( v107 != 63 )
            break;
          *(_QWORD *)((char *)v101 + v106 - 8) = 0LL;
          v106 -= 8LL;
          if ( !v106 )
            goto LABEL_177;
        }
        *(_QWORD *)((char *)v101 + v106 - 8) = v107 + 1;
LABEL_177:
        if ( (_QWORD)v104 == 0x8000000000000000LL )
          goto LABEL_204;
        ((void (__fastcall *)(__int64 *, __int64 (__fastcall **)(), size_t, _QWORD, __int64))std::path::Path::_with_file_name)(
          &v143,
          v128,
          v136,
          *((_QWORD *)&v104 + 1),
          v105);
        if ( (_QWORD)v104 )
          _rust_dealloc(*((_QWORD *)&v104 + 1), v104, 1LL);
        v108 = (char *)v144;
        v109 = v145;
        std::sys::pal::unix::fs::stat(v154);
        if ( LODWORD(v154[0]) == 2 )
          break;
        memcpy(v165, v154, 0xB0uLL);
        if ( *(_QWORD *)&v165[0] == 2LL )
          goto LABEL_185;
        if ( v143 )
          _rust_dealloc(v108, v143, 1LL);
        v102 = v103;
        if ( v107 == 63 )
          goto LABEL_204;
      }
      *((_QWORD *)&v165[0] + 1) = *((_QWORD *)&v154[0] + 1);
      *(_QWORD *)&v165[0] = 2LL;
LABEL_185:
      ((void (__fastcall *)(char *))core::ptr::drop_in_place<std::io::error::Error>)((char *)v165 + 8);
      v110 = v129;
      v111 = std::sys::pal::unix::fs::rename(v129, v134, v108, v109);
      if ( v111 )
      {
        v150 = v111;
        *(_QWORD *)&v165[0] = uucore::util_name(v110);
        *((_QWORD *)&v165[0] + 1) = v120;
        *(_QWORD *)&v166 = v165;
        *((_QWORD *)&v166 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v154[0] = &unk_EF7B0;
        *((_QWORD *)&v154[0] + 1) = 2LL;
        *(_QWORD *)&v154[2] = 0LL;
        *(_QWORD *)&v154[1] = &v166;
        *((_QWORD *)&v154[1] + 1) = 1LL;
        std::io::stdio::_eprint(v154);
        v138 = (_OWORD *)(&dword_0 + 1);
        v139 = (__int64 (__fastcall **)())v129;
        v140 = v134;
        v141 = 0;
        *(_QWORD *)&v166 = 1LL;
        *((_QWORD *)&v166 + 1) = v108;
        v167 = (_QWORD *)v109;
        LOBYTE(v168) = 1;
        *(_QWORD *)&v154[0] = &v138;
        *((_QWORD *)&v154[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v154[1] = &v166;
        *((_QWORD *)&v154[1] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v154[2] = &v150;
        *((_QWORD *)&v154[2] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v165[0] = &unk_EFA00;
        *((_QWORD *)&v165[0] + 1) = 4LL;
        *(_QWORD *)&v165[2] = 0LL;
        *(_QWORD *)&v165[1] = v154;
        *((_QWORD *)&v165[1] + 1) = 3LL;
        std::io::stdio::_eprint(v165);
        std::process::exit(1);
      }
      if ( a9 )
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v165[0] = xmmword_F4A40;
        *(_QWORD *)&v166 = v165;
        *((_QWORD *)&v166 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v154[0] = &unk_EF7B0;
        *((_QWORD *)&v154[0] + 1) = 2LL;
        *(_QWORD *)&v154[2] = 0LL;
        *(_QWORD *)&v154[1] = &v166;
        *((_QWORD *)&v154[1] + 1) = 1LL;
        std::io::stdio::_eprint(v154);
        *(_QWORD *)&v165[0] = 1LL;
        *((_QWORD *)&v165[0] + 1) = v129;
        *(_QWORD *)&v165[1] = v134;
        BYTE8(v165[1]) = 0;
        v108 = (char *)v144;
        v109 = v145;
        v138 = v144;
        v139 = (__int64 (__fastcall **)())v145;
        *(_QWORD *)&v166 = v165;
        *((_QWORD *)&v166 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v167 = &v138;
        v168 = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v154[0] = &unk_EF9A0;
        *((_QWORD *)&v154[0] + 1) = 3LL;
        *(_QWORD *)&v154[2] = 0LL;
        *(_QWORD *)&v154[1] = &v166;
        *((_QWORD *)&v154[1] + 1) = 2LL;
        std::io::stdio::_eprint(v154);
      }
      if ( (_BYTE)v137 == 3 )
      {
        *(_QWORD *)&v154[0] = 0x1B600000000LL;
        WORD6(v154[0]) = 0;
        DWORD2(v154[0]) = 256;
        if ( v109 )
        {
          if ( v109 < 0 )
          {
            v112 = 0LL;
LABEL_235:
            alloc::raw_vec::handle_error(v112, v109);
          }
          v112 = 1LL;
          v113 = _rust_alloc(v109, 1LL);
          if ( !v113 )
            goto LABEL_235;
          v114 = (void *)v113;
        }
        else
        {
          v114 = &dword_0 + 1;
        }
        memcpy(v114, v108, v109);
        ((void (__fastcall *)(_OWORD *, _OWORD *, void *, signed __int64))std::fs::OpenOptions::_open)(
          v165,
          v154,
          v114,
          v109);
        if ( v109 )
          _rust_dealloc(v114, v109, 1LL);
        if ( LODWORD(v165[0]) )
        {
          *(_QWORD *)&v166 = *((_QWORD *)&v165[0] + 1);
          ((void (__fastcall __noreturn *)(const char *, __int64, __int128 *, __int64 (__fastcall **)(), char **))core::result::unwrap_failed)(
            aFailedToOpenRe,
            39LL,
            &v166,
            &off_EF720,
            &off_EF9D0);
        }
        LODWORD(v166) = DWORD1(v165[0]);
        v115 = ((__int64 (__fastcall *)(__int128 *))std::fs::File::sync_all)(&v166);
        if ( v115 )
        {
          *(_QWORD *)&v154[0] = v115;
          ((void (__fastcall __noreturn *)(const char *, __int64, _OWORD *, __int64 (__fastcall **)(), char **))core::result::unwrap_failed)(
            aFailedToSyncRe,
            27LL,
            v154,
            &off_EF720,
            &off_EF9E8);
        }
        close(v166);
      }
      v116 = v143;
      if ( v123 )
        _rust_dealloc(v129, v123, 1LL);
      v134 = v109;
      v129 = v108;
      v123 = v116;
LABEL_204:
      v94 = v101;
      _rust_dealloc(v101, v125, 8LL);
      if ( (v146 == 0) | (unsigned __int8)v135 & 1 )
        break;
      v99 = v146 - 1;
      LOBYTE(v135) = v146 < 2;
      if ( v146 < 2 )
        v99 = 1LL;
      v98 = v146;
      if ( v146 > 0xFFFFFFFFFFFFFFFLL )
      {
        v142 = 0LL;
        v125 = (unsigned __int64)v101;
        goto LABEL_209;
      }
    }
    v95 = v123;
    a2 = v136;
  }
  *(_QWORD *)&v147 = v95;
  *((_QWORD *)&v147 + 1) = v129;
  v148 = v134;
LABEL_212:
  if ( v95 == 0x8000000000000000LL
    || (v152 = v148,
        v151 = v147,
        v94 = &v151,
        (v117 = ((__int64 (__fastcall *)(__int128 *))std::fs::remove_file)(&v151)) == 0) )
  {
    if ( a9 )
    {
      *(_QWORD *)&v165[0] = uucore::util_name(v94);
      *((_QWORD *)&v165[0] + 1) = v118;
      *(_QWORD *)&v166 = v165;
      *((_QWORD *)&v166 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v154[0] = &unk_EF7B0;
      *((_QWORD *)&v154[0] + 1) = 2LL;
      *(_QWORD *)&v154[2] = 0LL;
      *(_QWORD *)&v154[1] = &v166;
      *((_QWORD *)&v154[1] + 1) = 1LL;
      std::io::stdio::_eprint(v154);
      *(_QWORD *)&v165[0] = 0LL;
      *((_QWORD *)&v165[0] + 1) = v128;
      *(_QWORD *)&v165[1] = a2;
      BYTE8(v165[1]) = 0;
      *(_QWORD *)&v166 = v165;
      *((_QWORD *)&v166 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v154[0] = &unk_EFA60;
      *((_QWORD *)&v154[0] + 1) = 2LL;
      *(_QWORD *)&v154[2] = 0LL;
      *(_QWORD *)&v154[1] = &v166;
      *((_QWORD *)&v154[1] + 1) = 1LL;
      std::io::stdio::_eprint(v154);
    }
    goto LABEL_217;
  }
  v59 = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall **)(), size_t))<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context)(
          v117,
          v128,
          a2);
  close(v126);
  return (_OWORD *)v59;
}
