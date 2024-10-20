__int64 __fastcall uu_tail::follow::watch::follow(__int64 a1, __int64 a2)
{
  const char *v2; // rbx
  __int64 v3; // r15
  const __m128i *v5; // r12
  const __m128i *v7; // r13
  unsigned int v9; // ebp
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned __int64 v17; // r12
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v24; // r12
  __m128i *v25; // rax
  __m128i *v26; // rbx
  __int64 v27; // rax
  __int64 updated; // r13
  __int64 v29; // r15
  char v30; // cl
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r12
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // r13
  __m128i v38; // xmm1
  int v39; // eax
  __m128i v40; // xmm0
  __int64 mut; // rax
  __m128i v42; // xmm1
  __m128i v43; // xmm1
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char v51; // al
  __m128i v52; // xmm0
  __int64 v53; // r13
  __int64 v54; // rbx
  __int64 v55; // r14
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r15
  __int64 v59; // rbp
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __int64 v62; // r12
  __int64 v65; // r13
  __int64 v66; // r14
  __int64 v67; // r12
  char v68; // bp
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // r12
  __int64 v72; // rbp
  __int64 v73; // rsi
  char v74; // bl
  char v75; // al
  _QWORD *v76; // rax
  _QWORD *v77; // rbx
  __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // r13
  __int64 v81; // r15
  __int64 v82; // rdx
  __int64 v83; // rbp
  unsigned __int64 v84; // rbx
  __m128i v85; // xmm0
  __m128i v86; // xmm1
  __int64 v87; // r12
  __int64 v90; // rbx
  _QWORD *v91; // rbx
  __int64 v92; // rsi
  const __m128i *v93; // rax
  __int64 v94; // rcx
  __int16 v95; // dx
  __int64 v96; // rsi
  _QWORD *v97; // r15
  __int64 v98; // rsi
  __int64 v99; // r15
  __int64 v100; // r12
  const char *v101; // r13
  __int64 v102; // rsi
  __int32 v103; // eax
  _DWORD *v104; // rax
  int v105; // eax
  __int128 v106; // rax
  __m128i v107; // xmm0
  __int128 v108; // rax
  __int128 v109; // rax
  __int64 v110; // rax
  int v111; // r14d
  __int64 v112; // rax
  __int128 v113; // rax
  __m128i v114; // xmm0
  __int64 v115; // rax
  __int128 v116; // rax
  char v117; // al
  __int128 v118; // rax
  __m128i v119; // xmm0
  __int64 v120; // r14
  __int64 v121; // rbx
  __int64 v122; // r14
  char v123; // al
  __int64 v124; // rax
  int v125; // ecx
  __int128 v126; // rax
  __int128 v127; // rax
  __m128i v128; // xmm0
  __int128 v129; // rax
  __m128i v130; // xmm0
  __int128 v131; // rax
  __m128i v132; // xmm0
  _QWORD *v133; // rbx
  __int64 v134; // rsi
  int v135; // ecx
  __int128 v136; // rax
  __m128i v137; // xmm0
  __int64 v138; // rbx
  __int64 v139; // r15
  _QWORD *v140; // r12
  __int64 v141; // rsi
  __int64 v142; // rbx
  __int64 v143; // r15
  _QWORD *v144; // r12
  __int64 v145; // rsi
  __m128i v146; // xmm0
  __m128i v147; // xmm1
  __int64 v148; // rbx
  __int64 v149; // r15
  __int64 v150; // r14
  __int64 v151; // rax
  __int64 v152; // rbx
  __int64 v153; // r15
  __int64 v154; // r14
  __int64 v155; // rax
  __m128i v157; // kr50_16
  __int64 v158; // r14
  __m128i v159; // kr40_16
  __int64 v160; // r14
  char **v161; // rax
  __int64 *v162; // [rsp+8h] [rbp-560h]
  char v163; // [rsp+8h] [rbp-560h]
  char v164; // [rsp+17h] [rbp-551h]
  __int64 v165; // [rsp+18h] [rbp-550h]
  __int64 v166; // [rsp+18h] [rbp-550h]
  __int64 v167; // [rsp+18h] [rbp-550h]
  __int64 v168; // [rsp+18h] [rbp-550h]
  _BYTE *v169; // [rsp+20h] [rbp-548h] BYREF
  __int64 (__fastcall *v170)(); // [rsp+28h] [rbp-540h]
  _BYTE v171[24]; // [rsp+30h] [rbp-538h] BYREF
  char v172; // [rsp+48h] [rbp-520h]
  __int64 v173; // [rsp+58h] [rbp-510h]
  __m128i i; // [rsp+60h] [rbp-508h] BYREF
  __m128i src[14]; // [rsp+70h] [rbp-4F8h] BYREF
  __int64 v176; // [rsp+150h] [rbp-418h]
  int v177; // [rsp+15Ch] [rbp-40Ch]
  __int64 v178; // [rsp+160h] [rbp-408h] BYREF
  __m128i v179; // [rsp+168h] [rbp-400h] BYREF
  char **v180; // [rsp+178h] [rbp-3F0h]
  __int64 v181; // [rsp+180h] [rbp-3E8h]
  __int64 v182; // [rsp+188h] [rbp-3E0h] BYREF
  __int64 v183; // [rsp+190h] [rbp-3D8h]
  __int64 v184; // [rsp+198h] [rbp-3D0h]
  __m128i v185; // [rsp+1A0h] [rbp-3C8h]
  __int64 v186; // [rsp+1B0h] [rbp-3B8h]
  __m128i v187; // [rsp+1B8h] [rbp-3B0h] BYREF
  __m128i v188; // [rsp+1C8h] [rbp-3A0h] BYREF
  __m128i v189; // [rsp+1D8h] [rbp-390h]
  __int64 v190; // [rsp+1E8h] [rbp-380h]
  __int64 v191; // [rsp+1F0h] [rbp-378h]
  __pid_t pid; // [rsp+1F8h] [rbp-370h]
  unsigned int v193; // [rsp+1FCh] [rbp-36Ch]
  __m128i v194; // [rsp+200h] [rbp-368h] BYREF
  __m128i v195; // [rsp+210h] [rbp-358h]
  __int64 v196; // [rsp+220h] [rbp-348h]
  char **v197; // [rsp+230h] [rbp-338h]
  __int64 v198; // [rsp+238h] [rbp-330h]
  __m128i v199; // [rsp+240h] [rbp-328h] BYREF
  __m128i v200; // [rsp+250h] [rbp-318h] BYREF
  __m128i v201; // [rsp+260h] [rbp-308h] BYREF
  _OWORD dest[14]; // [rsp+270h] [rbp-2F8h] BYREF
  __m128i j; // [rsp+350h] [rbp-218h] BYREF
  __int64 v204; // [rsp+368h] [rbp-200h]
  __int64 v205; // [rsp+370h] [rbp-1F8h]
  _QWORD v206[3]; // [rsp+378h] [rbp-1F0h] BYREF
  _QWORD v207[3]; // [rsp+390h] [rbp-1D8h] BYREF
  _QWORD v208[3]; // [rsp+3A8h] [rbp-1C0h] BYREF
  __m128i v209; // [rsp+3C0h] [rbp-1A8h]
  __m128i v210; // [rsp+3D0h] [rbp-198h]
  __int64 v211; // [rsp+3E0h] [rbp-188h]
  _QWORD v212[3]; // [rsp+3E8h] [rbp-180h] BYREF
  __int16 v213; // [rsp+400h] [rbp-168h]
  __int64 v214; // [rsp+408h] [rbp-160h]
  __int128 v215; // [rsp+410h] [rbp-158h]
  __m128i v216; // [rsp+420h] [rbp-148h] BYREF
  __int128 v217; // [rsp+430h] [rbp-138h]
  __int128 v218; // [rsp+440h] [rbp-128h]
  __int128 v219; // [rsp+450h] [rbp-118h]
  __int128 v220; // [rsp+460h] [rbp-108h]
  __m128i v221; // [rsp+470h] [rbp-F8h] BYREF
  __int32 v222; // [rsp+480h] [rbp-E8h]
  _QWORD v223[28]; // [rsp+488h] [rbp-E0h] BYREF

  v181 = a2;
  v3 = *(_QWORD *)(a1 + 104);
  v173 = a1;
  if ( !v3 )
    goto LABEL_19;
  _RAX = a1 + 56;
  v162 = (__int64 *)(a1 + 56);
  v5 = *(const __m128i **)(a1 + 80);
  _RCX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(v5));
  v7 = v5 + 1;
  while ( v3-- != 0 )
  {
    if ( (_WORD)_RCX )
    {
      v9 = _RCX & (_RCX - 1);
    }
    else
    {
      do
      {
        v10 = _mm_movemask_epi8(_mm_load_si128(v7));
        v5 -= 240;
        ++v7;
      }
      while ( v10 == 0xFFFF );
      _RAX = (unsigned int)(-2 - v10);
      LODWORD(_RCX) = ~v10;
      v9 = _RAX & _RCX;
    }
    __asm { tzcnt   eax, ecx }
    v11 = -15 * _RAX;
    v2 = (const char *)*((_QWORD *)&v5[v11 - 14] - 1);
    v12 = v5[v11 - 14].m128i_i64[0];
    if ( !(unsigned __int8)uu_tail::paths::path_is_tailable() )
    {
      _RAX = <std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v2, v12);
      _RCX = v9;
      if ( !(_BYTE)_RAX )
        continue;
    }
    v13 = v181;
    LODWORD(_RCX) = *(unsigned __int8 *)(v181 + 72);
    goto LABEL_23;
  }
  LOBYTE(_RCX) = 1;
  v13 = v181;
  if ( !*(_BYTE *)(v181 + 72) )
  {
    if ( *(_QWORD *)(v173 + 104) == 1LL )
    {
      v14 = core::hash::BuildHasher::hash_one(
              v173 + 112,
              anon_c568fa996e9b1afffbd2fe86e67742f4_13_llvm_893476530518564186,
              1LL,
              _RCX);
      v15 = *(_QWORD *)(v173 + 80);
      v16 = *(_QWORD *)(v173 + 88);
      v17 = v14 & v16;
      _RAX = v14 >> 57;
      v19 = _mm_cvtsi32_si128(_RAX);
      v20 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v19, v19), 0), 0);
      v21 = v15 - 240;
      v22 = 0LL;
      v2 = anon_c568fa996e9b1afffbd2fe86e67742f4_13_llvm_893476530518564186;
      v165 = v15;
      for ( i = v20; ; v20 = _mm_load_si128(&i) )
      {
        v201 = _mm_loadu_si128((const __m128i *)(v15 + v17));
        _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v201, v20));
        if ( _R14D )
          break;
LABEL_17:
        _RAX = (unsigned int)_mm_movemask_epi8(
                               _mm_cmpeq_epi8(
                                 _mm_load_si128(&v201),
                                 (__m128i)anon_a1eaa6636756e7b38e7920bea57414d0_0_llvm_6054117616294908762));
        if ( (_DWORD)_RAX )
          goto LABEL_19;
        v24 = v22 + v17 + 16;
        v22 += 16LL;
        v17 = v16 & v24;
        v15 = v165;
      }
      while ( 1 )
      {
        __asm { tzcnt   eax, r14d }
        if ( (unsigned __int8)<Q as hashbrown::Equivalent<K>>::equivalent(
                                anon_c568fa996e9b1afffbd2fe86e67742f4_13_llvm_893476530518564186,
                                1LL,
                                v21 - 240 * (v16 & (v17 + _RAX))) )
          break;
        _RAX = (unsigned int)(_R14D - 1);
        LOWORD(_RAX) = _R14D & (_R14D - 1);
        _R14D = _RAX;
        if ( !(_WORD)_RAX )
          goto LABEL_17;
      }
      LODWORD(_RCX) = 0;
      v13 = v181;
      goto LABEL_23;
    }
LABEL_19:
    v25 = (__m128i *)_rust_alloc(18LL, 1LL);
    if ( !v25 )
      alloc::raw_vec::handle_error(1LL, 18LL);
    v26 = v25;
    *v25 = _mm_loadu_si128((const __m128i *)&xmmword_243C6);
    v25[1].m128i_i16[0] = 26478;
    v27 = _rust_alloc(32LL, 8LL);
    if ( !v27 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    updated = v27;
    *(_QWORD *)v27 = 18LL;
    *(_QWORD *)(v27 + 8) = v26;
    *(_QWORD *)(v27 + 16) = 18LL;
    *(_DWORD *)(v27 + 24) = 1;
    goto LABEL_296;
  }
LABEL_23:
  v177 = _RCX;
  v29 = v173;
  pid = *(_DWORD *)(v173 + 136);
  v30 = *(_BYTE *)(v13 + 76);
  v201.m128i_i8[0] = *(_BYTE *)(v13 + 74);
  v205 = *(_QWORD *)(v13 + 48);
  v193 = *(_DWORD *)(v13 + 56);
  v204 = v173 + 32;
  v198 = v173 + 112;
  v180 = &off_15CD08;
  v197 = &off_15CE40;
  v164 = v30;
  while ( 2 )
  {
    if ( v30 != 2 )
    {
      if ( *(_DWORD *)(v29 + 136) )
      {
        if ( kill(pid, 0) )
        {
          v31 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
          core::ptr::drop_in_place<std::io::error::Error>(v31);
          v2 = (const char *)HIDWORD(v31);
          if ( (_DWORD)v2 != 1 )
          {
            updated = 0LL;
            goto LABEL_296;
          }
        }
      }
    }
    if ( (*(_BYTE *)(v29 + 142) & 1) != 0 )
    {
      if ( *(_BYTE *)(v173 + 140) )
      {
        v32 = *(_QWORD *)(v173 + 48);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v173 + 40);
          v166 = 24 * v32;
          v34 = 0LL;
          while ( 1 )
          {
            v35 = *(_QWORD *)(v33 + v34 + 8);
            v2 = *(const char **)(v33 + v34 + 16);
            std::sys::pal::unix::fs::stat(src);
            if ( src[0].m128i_i32[0] == 2 )
              break;
            memcpy(dest, src, 0xB0uLL);
            if ( *(_QWORD *)&dest[0] == 2LL )
              goto LABEL_33;
            v36 = uu_tail::follow::files::FileHandling::get(v162, v35, (__int64)v2);
            std::sys::pal::unix::fs::stat(src);
            i.m128i_i64[0] = src[0].m128i_i64[1];
            v37 = src[0].m128i_i64[0];
            if ( src[0].m128i_i64[0] == 2 )
            {
              src[0].m128i_i64[0] = i.m128i_i64[0];
              core::result::unwrap_failed(aCalledResultUn_5, 43LL, src, &off_15C968, &off_15CE28);
            }
            v211 = src[3].m128i_i64[0];
            v210 = src[2];
            v209 = src[1];
            v38 = _mm_loadu_si128((const __m128i *)((char *)&src[4].m128i_u64[1] + 4));
            v215 = *(__int128 *)((char *)&src[3] + 12);
            v216 = v38;
            v217 = *(__int128 *)((char *)&src[5] + 12);
            v218 = *(__int128 *)((char *)&src[6] + 12);
            v219 = *(__int128 *)((char *)&src[7] + 12);
            v220 = *(__int128 *)((char *)&src[8] + 12);
            v221 = _mm_loadu_si128((const __m128i *)((char *)&src[9].m128i_u64[1] + 4));
            v222 = src[10].m128i_i32[3];
            LODWORD(v176) = src[3].m128i_i32[2];
            v39 = src[3].m128i_i16[4] & 0xF000;
            if ( (v39 == 4096 || v39 == 0x8000 || v39 == 0x2000) && !*(_QWORD *)(v36 + 200) )
            {
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              dest[0] = _mm_loadu_si128((const __m128i *)&xmmword_163010);
              v223[0] = dest;
              v223[1] = <&T as core::fmt::Display>::fmt;
              src[0].m128i_i64[0] = (__int64)&unk_15CB50;
              src[0].m128i_i64[1] = 2LL;
              src[2].m128i_i64[0] = 0LL;
              src[1].m128i_i64[0] = (__int64)v223;
              src[1].m128i_i64[1] = 1LL;
              std::io::stdio::_eprint(src);
              v40 = _mm_loadu_si128((const __m128i *)(v36 + 184));
              *(_QWORD *)&dest[0] = 0LL;
              *(__m128i *)((char *)dest + 8) = v40;
              BYTE8(dest[1]) = 1;
              v223[0] = dest;
              v223[1] = <os_display::Quoted as core::fmt::Display>::fmt;
              src[0].m128i_i64[0] = (__int64)&unk_15CC98;
              src[0].m128i_i64[1] = 2LL;
              src[2].m128i_i64[0] = 0LL;
              src[1].m128i_i64[0] = (__int64)v223;
              src[1].m128i_i64[1] = 1LL;
              std::io::stdio::_eprint(src);
              mut = uu_tail::follow::files::FileHandling::get_mut(v162, v35, (__int64)v2);
              *(_QWORD *)mut = v37;
              *(_QWORD *)(mut + 8) = i.m128i_i64[0];
              v42 = v210;
              *(__m128i *)(mut + 16) = v209;
              *(__m128i *)(mut + 32) = v42;
              *(_QWORD *)(mut + 48) = v211;
              *(_DWORD *)(mut + 56) = v176;
              v43 = _mm_load_si128(&v216);
              v44 = v217;
              v45 = v218;
              *(_OWORD *)(mut + 60) = v215;
              *(__m128i *)(mut + 76) = v43;
              *(_OWORD *)(mut + 92) = v44;
              *(_OWORD *)(mut + 108) = v45;
              *(_OWORD *)(mut + 124) = v219;
              *(_OWORD *)(mut + 140) = v220;
              *(__m128i *)(mut + 156) = _mm_load_si128(&v221);
              *(_DWORD *)(mut + 172) = v222;
              updated = (__int64)uu_tail::follow::files::FileHandling::update_reader(v162, v35, (__int64)v2);
              if ( updated )
                goto LABEL_296;
              uu_tail::follow::files::FileHandling::tail_file(
                src[0].m128i_i64,
                v162,
                v35,
                (__int64)v2,
                v201.m128i_i8[0] != 0);
              updated = src[0].m128i_i64[0];
              if ( src[0].m128i_i64[0] )
                goto LABEL_296;
              if ( *(_DWORD *)v173 == 3 )
                goto LABEL_311;
              updated = uu_tail::follow::watch::WatcherRx::watch_with_parent(
                          *(_QWORD *)(v173 + 16),
                          *(_QWORD *)(v173 + 24),
                          v35,
                          (__int64)v2);
              if ( updated )
                goto LABEL_296;
            }
LABEL_34:
            v34 += 24LL;
            if ( v166 == v34 )
              goto LABEL_49;
          }
          *((_QWORD *)&dest[0] + 1) = src[0].m128i_i64[1];
          *(_QWORD *)&dest[0] = 2LL;
LABEL_33:
          core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
          goto LABEL_34;
        }
      }
    }
LABEL_49:
    v46 = v173;
    if ( *(_DWORD *)v173 == 3 )
    {
      v197 = &off_15CE58;
LABEL_311:
      core::option::unwrap_failed(v197);
    }
    std::sync::mpmc::Receiver<T>::recv_timeout(&v187, v173, v205, v193);
    v185.m128i_i64[0] = 0LL;
    v185.m128i_i64[1] = 8LL;
    v186 = 0LL;
    switch ( v187.m128i_i64[0] )
    {
      case 1LL:
        v48 = v187.m128i_i8[8] & 3;
        switch ( v187.m128i_i8[8] & 3 )
        {
          case 0:
            v51 = *(_BYTE *)(v187.m128i_i64[1] + 16);
            goto LABEL_93;
          case 1:
            v51 = *(_BYTE *)(v187.m128i_i64[1] + 15);
            goto LABEL_93;
          case 2:
            if ( v187.m128i_i32[3] != 2 )
              goto LABEL_291;
            goto LABEL_94;
          case 3:
            switch ( v187.m128i_i32[3] )
            {
              case 0:
                v51 = 0;
                break;
              case 1:
                v51 = 1;
                break;
              case 2:
                v51 = 2;
                break;
              case 3:
                v51 = 3;
                break;
              case 4:
                v51 = 4;
                break;
              case 5:
                v51 = 5;
                break;
              case 6:
                v51 = 6;
                break;
              case 7:
                v51 = 7;
                break;
              case 8:
                v51 = 8;
                break;
              case 9:
                v51 = 9;
                break;
              case 0xA:
                v51 = 10;
                break;
              case 0xB:
                v51 = 11;
                break;
              case 0xC:
                v51 = 12;
                break;
              case 0xD:
                v51 = 13;
                break;
              case 0xE:
                v51 = 14;
                break;
              case 0xF:
                v51 = 15;
                break;
              case 0x10:
                v51 = 16;
                break;
              case 0x11:
                v51 = 17;
                break;
              case 0x12:
                v51 = 18;
                break;
              case 0x13:
                v51 = 19;
                break;
              case 0x14:
                v51 = 20;
                break;
              case 0x15:
                v51 = 21;
                break;
              case 0x16:
                v51 = 22;
                break;
              case 0x17:
                v51 = 23;
                break;
              case 0x18:
                v51 = 24;
                break;
              case 0x19:
                v51 = 25;
                break;
              case 0x1A:
                v51 = 26;
                break;
              case 0x1B:
                v51 = 27;
                break;
              case 0x1C:
                v51 = 28;
                break;
              case 0x1D:
                v51 = 29;
                break;
              case 0x1E:
                v51 = 30;
                break;
              case 0x1F:
                v51 = 31;
                break;
              case 0x20:
                v51 = 32;
                break;
              case 0x21:
                v51 = 33;
                break;
              case 0x22:
                v51 = 34;
                break;
              case 0x23:
                v51 = 35;
                break;
              case 0x24:
                v51 = 36;
                break;
              case 0x25:
                v51 = 37;
                break;
              case 0x26:
                v51 = 38;
                break;
              case 0x27:
                v51 = 39;
                break;
              case 0x28:
                v51 = 40;
                break;
              default:
                v51 = 41;
                break;
            }
LABEL_93:
            if ( v51 )
              goto LABEL_291;
LABEL_94:
            v79 = v189.m128i_i64[1];
            v78 = v189.m128i_i64[0];
            v80 = v190;
            if ( !v190 )
              goto LABEL_109;
            v200.m128i_i64[0] = v189.m128i_i64[1];
            v191 = v189.m128i_i64[0];
            if ( !*(_QWORD *)(v173 + 104) )
              goto LABEL_105;
            v81 = *(_QWORD *)(v200.m128i_i64[0] + 16);
            v168 = *(_QWORD *)(v200.m128i_i64[0] + 8);
            _RAX = core::hash::BuildHasher::hash_one(v198, v168, v81, v48);
            v82 = *(_QWORD *)(v173 + 80);
            v83 = *(_QWORD *)(v173 + 88);
            v84 = _RAX & v83;
            v85 = _mm_cvtsi32_si128(_RAX >> 57);
            v86 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v85, v85), 0), 0);
            v87 = v82 - 240;
            HIDWORD(_RAX) = 0;
            v176 = 0LL;
            j.m128i_i64[0] = v82;
            v199 = v86;
            break;
        }
        while ( 2 )
        {
          i = _mm_loadu_si128((const __m128i *)(v82 + v84));
          _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(i, v86));
          if ( !_R14D )
            goto LABEL_100;
          do
          {
            __asm { tzcnt   eax, r14d }
            if ( (unsigned __int8)<Q as hashbrown::Equivalent<K>>::equivalent(
                                    v168,
                                    v81,
                                    v87 - 240 * (v83 & (v84 + _RAX))) )
            {
              if ( *(_DWORD *)v173 == 3 )
                core::option::unwrap_failed(&off_15CE70);
              (*(void (__fastcall **)(__m128i *, _QWORD, __int64, __int64))(*(_QWORD *)(v173 + 24) + 32LL))(
                src,
                *(_QWORD *)(v173 + 16),
                v168,
                v81);
              if ( src[0].m128i_i32[0] != 6 )
                core::ptr::drop_in_place<notify::error::Error>(src);
              goto LABEL_105;
            }
            _RAX = (unsigned int)(_R14D - 1);
            LOWORD(_RAX) = _R14D & (_R14D - 1);
            _R14D = _RAX;
          }
          while ( (_WORD)_RAX );
LABEL_100:
          if ( !_mm_movemask_epi8(
                  _mm_cmpeq_epi8(
                    _mm_load_si128(&i),
                    (__m128i)anon_a1eaa6636756e7b38e7920bea57414d0_0_llvm_6054117616294908762)) )
          {
            v90 = v176 + v84 + 16;
            _RAX = v176 + 16;
            v176 += 16LL;
            v84 = v83 & v90;
            v82 = j.m128i_i64[0];
            v86 = _mm_load_si128(&v199);
            continue;
          }
          break;
        }
LABEL_105:
        v79 = v200.m128i_i64[0];
        v91 = (_QWORD *)(v200.m128i_i64[0] + 8);
        v78 = v191;
        do
        {
          v92 = *(v91 - 1);
          if ( v92 )
            _rust_dealloc(*v91, v92, 1LL);
          v91 += 3;
          --v80;
        }
        while ( v80 );
LABEL_109:
        if ( v78 )
        {
          v65 = 8LL;
          _rust_dealloc(v79, 24 * v78, 8LL);
          v68 = 1;
        }
        else
        {
          v68 = 1;
          v65 = 8LL;
        }
        v66 = 0LL;
        v67 = 0LL;
        v2 = 0LL;
        v46 = v173;
        goto LABEL_113;
      case 5LL:
        *(_QWORD *)&dest[0] = &off_15CB70;
        *((_QWORD *)&dest[0] + 1) = <&T as core::fmt::Display>::fmt;
        src[0].m128i_i64[0] = (__int64)&unk_15CE88;
        src[0].m128i_i64[1] = 2LL;
        src[2].m128i_i64[0] = 0LL;
        src[1].m128i_i64[0] = (__int64)dest;
        src[1].m128i_i64[1] = 1LL;
        alloc::fmt::format::format_inner(v206, src, v47, v48, v49, v50);
        v152 = v206[0];
        v153 = v206[1];
        v154 = v206[2];
        v155 = alloc::alloc::exchange_malloc();
        goto LABEL_298;
      case 6LL:
        v52 = _mm_loadu_si128((const __m128i *)&v187.m128i_u64[1]);
        v195 = _mm_loadu_si128((const __m128i *)&v188.m128i_u64[1]);
        v194 = v52;
        v196 = v189.m128i_i64[1];
        v53 = v52.m128i_i64[1];
        v167 = v195.m128i_i64[0];
        if ( !v195.m128i_i64[0] )
        {
          i.m128i_i64[0] = 8LL;
          v66 = 0LL;
          v67 = 0LL;
LABEL_64:
          if ( v194.m128i_i64[0] )
            _rust_dealloc(v53, 24 * v194.m128i_i64[0], 8LL);
          v2 = (const char *)v195.m128i_i64[1];
          v65 = i.m128i_i64[0];
          if ( v195.m128i_i64[1] )
          {
            v69 = *(_QWORD *)(v195.m128i_i64[1] + 16);
            if ( v69 != 0x8000000000000000LL && v69 )
              _rust_dealloc(*(_QWORD *)(v195.m128i_i64[1] + 24), v69, 1LL);
            v70 = *((_QWORD *)v2 + 5);
            if ( v70 != 0x8000000000000000LL && v70 )
              _rust_dealloc(*((_QWORD *)v2 + 6), v70, 1LL);
            _rust_dealloc(v2, 80LL, 8LL);
          }
          LOBYTE(v2) = 1;
          v68 = 0;
LABEL_113:
          i.m128i_i64[0] = (__int64)v2;
          if ( v164 != 2 && *(_BYTE *)(v46 + 141) )
          {
            v93 = *(const __m128i **)(v46 + 80);
            v94 = (__int64)v93->m128i_i64 + *(_QWORD *)(v46 + 88) + 1;
            v95 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128(v93));
            v96 = *(_QWORD *)(v46 + 104);
            v212[0] = v93;
            v212[1] = v93 + 1;
            v212[2] = v94;
            v213 = v95;
            v214 = v96;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v212);
            if ( v66 )
            {
              v97 = (_QWORD *)(v65 + 8);
              do
              {
                v98 = *(v97 - 1);
                if ( v98 )
                  _rust_dealloc(*v97, v98, 1LL);
                v97 += 3;
                --v66;
              }
              while ( v66 );
            }
            if ( v67 )
              _rust_dealloc(v65, 24 * v67, 8LL);
            v66 = src[1].m128i_i64[0];
            v186 = src[1].m128i_i64[0];
            v185 = _mm_loadu_si128(src);
            v65 = v185.m128i_i64[1];
          }
          v99 = 24 * v66;
          v2 = (const char *)v65;
          v100 = v65;
          while ( v99 )
          {
            uu_tail::follow::files::FileHandling::tail_file(
              src[0].m128i_i64,
              v162,
              *(_QWORD *)(v100 + 8),
              *(_QWORD *)(v100 + 16),
              v201.m128i_i8[0] != 0);
            v100 += 24LL;
            updated = src[0].m128i_i64[0];
            v99 -= 24LL;
            if ( src[0].m128i_i64[0] )
            {
              v163 = 0;
              goto LABEL_268;
            }
          }
          v29 = v173;
          v101 = v2;
          if ( v66 )
          {
            v2 += 8;
            do
            {
              v102 = *((_QWORD *)v2 - 1);
              if ( v102 )
                _rust_dealloc(*(_QWORD *)v2, v102, 1LL);
              v2 += 24;
              --v66;
            }
            while ( v66 );
          }
          if ( v185.m128i_i64[0] )
            _rust_dealloc(v101, 24 * v185.m128i_i64[0], 8LL);
          if ( (~v187.m128i_i8[0] & 6) == 0 )
            goto LABEL_140;
          if ( v187.m128i_i32[0] == 1 )
          {
            core::ptr::drop_in_place<std::io::error::Error>(&v187.m128i_u64[1]);
            goto LABEL_140;
          }
          if ( !v187.m128i_i64[0] && v187.m128i_i64[1] )
          {
            _rust_dealloc(v188.m128i_i64[0], v187.m128i_i64[1], 1LL);
            v30 = v164;
          }
          else
          {
LABEL_140:
            v30 = v164;
          }
          continue;
        }
        i.m128i_i64[0] = 8LL;
        if ( !*(_QWORD *)(v46 + 104) )
        {
          v66 = 0LL;
          v67 = 0LL;
LABEL_258:
          v133 = (_QWORD *)(v53 + 8);
          do
          {
            v134 = *(v133 - 1);
            if ( v134 )
              _rust_dealloc(*v133, v134, 1LL);
            v133 += 3;
            --v167;
          }
          while ( v167 );
          goto LABEL_64;
        }
        v54 = *(_QWORD *)(v52.m128i_i64[1] + 8);
        v55 = *(_QWORD *)(v52.m128i_i64[1] + 16);
        v56 = core::hash::BuildHasher::hash_one(v198, v54, v55, v195.m128i_i64[0]);
        v199.m128i_i64[0] = v52.m128i_i64[1];
        v57 = *(_QWORD *)(v46 + 80);
        v58 = *(_QWORD *)(v46 + 88);
        v59 = v56 & v58;
        v60 = _mm_cvtsi32_si128(v56 >> 57);
        v61 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v60, v60), 0), 0);
        v62 = v57 - 240;
        _RAX = 0LL;
        v191 = v57;
        for ( j = v61; ; v61 = _mm_load_si128(&j) )
        {
          v176 = _RAX;
          v200 = _mm_loadu_si128((const __m128i *)(v57 + v59));
          _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v200, v61));
          if ( _R13D )
            break;
LABEL_59:
          if ( _mm_movemask_epi8(
                 _mm_cmpeq_epi8(
                   _mm_load_si128(&v200),
                   (__m128i)anon_a1eaa6636756e7b38e7920bea57414d0_0_llvm_6054117616294908762)) )
          {
            v66 = 0LL;
            v67 = 0LL;
            v46 = v173;
            v53 = v199.m128i_i64[0];
            goto LABEL_258;
          }
          _RAX = v176 + 16;
          v59 = v58 & (v176 + v59 + 16);
          v57 = v191;
        }
        while ( 1 )
        {
          __asm { tzcnt   eax, r13d }
          if ( (unsigned __int8)<Q as hashbrown::Equivalent<K>>::equivalent(v54, v55, v62 - 240 * (v58 & (v59 + _RAX))) )
            break;
          _RAX = (unsigned int)(_R13D - 1);
          LOWORD(_RAX) = _R13D & (_R13D - 1);
          _R13D = _RAX;
          if ( !(_WORD)_RAX )
            goto LABEL_59;
        }
        v182 = 0LL;
        v183 = 8LL;
        v184 = 0LL;
        v53 = v199.m128i_i64[0];
        v71 = *(_QWORD *)(v199.m128i_i64[0] + 16);
        v72 = *(_QWORD *)(v199.m128i_i64[0] + 8);
        v73 = uu_tail::follow::files::FileHandling::get(v162, v72, v71) + 176;
        <alloc::string::String as core::clone::Clone>::clone(&v178, v73);
        v74 = v196;
        v46 = v173;
        if ( (unsigned __int8)v196 == 2 )
        {
          if ( BYTE1(v196) == 3 )
            goto LABEL_254;
          goto LABEL_166;
        }
        if ( (unsigned __int8)v196 == 3 )
        {
          switch ( BYTE1(v196) )
          {
            case 1u:
              if ( BYTE2(v196) )
                goto LABEL_254;
              break;
            case 2u:
              if ( (v196 & 0x50000) != 0 )
                goto LABEL_254;
              break;
            case 3u:
              v103 = BYTE2(v196);
              if ( BYTE2(v196) != 1 )
              {
                if ( BYTE2(v196) != 3 )
                {
                  if ( BYTE2(v196) == 2 )
                    goto LABEL_79;
LABEL_254:
                  v67 = v182;
                  i.m128i_i64[0] = v183;
                  v66 = v184;
                  if ( v178 )
                    _rust_dealloc(v179.m128i_i64[0], v178, 1LL);
                  if ( v67 != 0x8000000000000000LL )
                  {
                    v185.m128i_i64[0] = v67;
                    v185.m128i_i64[1] = i.m128i_i64[0];
                    v186 = v66;
                    goto LABEL_258;
                  }
                  updated = i.m128i_i64[0];
                  goto LABEL_301;
                }
                if ( (unsigned __int8)(*(_BYTE *)(v173 + 142) - 1) < 2u )
                  goto LABEL_254;
                v120 = v53 + 24 * v167 - 24;
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v120);
                *(_QWORD *)&dest[1] = src[1].m128i_i64[0];
                dest[0] = _mm_loadu_si128(src);
                alloc::vec::Vec<T,A>::push(&v182, dest);
                uu_tail::follow::files::FileHandling::remove(src, (__int64)v162, v72, v71);
                v121 = *(_QWORD *)(v120 + 8);
                v122 = *(_QWORD *)(v120 + 16);
                uu_tail::follow::files::PathData::from_other_with_path((__int64)dest, src, v121, v122);
                memcpy(src, dest, 0xD8uLL);
                if ( *v162 == 0x8000000000000000LL )
                  core::option::unwrap_failed(&off_15CCF0);
                v123 = <std::path::PathBuf as core::cmp::PartialEq>::eq(
                         *(_QWORD *)(v46 + 64),
                         *(_QWORD *)(v46 + 72),
                         *(_QWORD *)(v53 + 8),
                         *(_QWORD *)(v53 + 16));
                uu_tail::follow::files::FileHandling::insert((size_t *)v162, v121, v122, src, v123);
                if ( *(_DWORD *)v46 == 3 )
                  goto LABEL_321;
                v124 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(v46 + 16), *(_QWORD *)(v46 + 24));
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v124);
                if ( *(_DWORD *)v46 == 3 )
                {
                  v161 = &off_15CD20;
                  goto LABEL_320;
                }
                v115 = uu_tail::follow::watch::WatcherRx::watch_with_parent(
                         *(_QWORD *)(v46 + 16),
                         *(_QWORD *)(v46 + 24),
                         v121,
                         v122);
                if ( !v115 )
                  goto LABEL_254;
LABEL_302:
                updated = v115;
                goto LABEL_304;
              }
              LOBYTE(v103) = 1;
              i.m128i_i32[0] = v103;
LABEL_167:
              std::sys::pal::unix::fs::stat(src);
              if ( src[0].m128i_i32[0] == 2 )
              {
                *((_QWORD *)&dest[0] + 1) = src[0].m128i_i64[1];
                *(_QWORD *)&dest[0] = 2LL;
LABEL_170:
                core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
                goto LABEL_254;
              }
              memcpy(dest, src, 0xB0uLL);
              if ( *(_QWORD *)&dest[0] == 2LL )
                goto LABEL_170;
              memcpy(v223, dest, 0xB0uLL);
              v111 = v223[7] & 0xF000;
              if ( v111 == 0x2000 || v111 == 0x8000 )
              {
                v112 = uu_tail::follow::files::FileHandling::get(v162, v72, v71);
                if ( *(_DWORD *)v112 == 2 )
                  goto LABEL_174;
LABEL_237:
                v125 = *(_DWORD *)(v112 + 56) & 0xF000;
                if ( v125 == 4096 || v125 == 0x2000 || v125 == 0x8000 )
                {
                  if ( *(_QWORD *)(v112 + 200) )
                  {
                    if ( v74 == 3 && ((BYTE2(v196) == 1) & i.m128i_i8[0]) != 0
                      || *(_BYTE *)(v46 + 141) && *(_QWORD *)(v112 + 40) != v223[5] )
                    {
                      *(_QWORD *)&v131 = uucore::util_name();
                      *(_OWORD *)v171 = v131;
                      v169 = v171;
                      v170 = <&T as core::fmt::Display>::fmt;
                      src[0].m128i_i64[0] = (__int64)&unk_15CB50;
                      src[0].m128i_i64[1] = 2LL;
                      src[2].m128i_i64[0] = 0LL;
                      src[1].m128i_i64[0] = (__int64)&v169;
                      src[1].m128i_i64[1] = 1LL;
                      std::io::stdio::_eprint(src);
                      v132 = _mm_loadu_si128(&v179);
                      *(_QWORD *)v171 = 0LL;
                      *(__m128i *)&v171[8] = v132;
                      v172 = 1;
                      v169 = v171;
                      v170 = <os_display::Quoted as core::fmt::Display>::fmt;
                      src[0].m128i_i64[0] = (__int64)&unk_15CC78;
                      src[0].m128i_i64[1] = 2LL;
                      src[2].m128i_i64[0] = 0LL;
                      src[1].m128i_i64[0] = (__int64)&v169;
                      src[1].m128i_i64[1] = 1LL;
                      std::io::stdio::_eprint(src);
                      v115 = (__int64)uu_tail::follow::files::FileHandling::update_reader(v162, v72, v71);
                    }
                    else
                    {
                      <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(src, v112, v223);
                      v115 = src[0].m128i_i64[0];
                      if ( src[0].m128i_i64[0] )
                        goto LABEL_302;
                      if ( !src[0].m128i_i8[8] )
                      {
LABEL_252:
                        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v53);
                        *(_QWORD *)&v171[16] = src[1].m128i_i64[0];
                        *(__m128i *)v171 = _mm_loadu_si128(src);
                        alloc::vec::Vec<T,A>::push(&v182, v171);
                        goto LABEL_253;
                      }
                      *(_QWORD *)&v126 = uucore::util_name();
                      *(_OWORD *)v171 = v126;
                      v169 = v171;
                      v170 = <&T as core::fmt::Display>::fmt;
                      src[0].m128i_i64[0] = (__int64)&unk_15CB50;
                      src[0].m128i_i64[1] = 2LL;
                      src[2].m128i_i64[0] = 0LL;
                      src[1].m128i_i64[0] = (__int64)&v169;
                      src[1].m128i_i64[1] = 1LL;
                      std::io::stdio::_eprint(src);
                      *(_QWORD *)v171 = &v178;
                      *(_QWORD *)&v171[8] = <alloc::string::String as core::fmt::Display>::fmt;
                      src[0].m128i_i64[0] = (__int64)&unk_15CC58;
                      src[0].m128i_i64[1] = 2LL;
                      src[2].m128i_i64[0] = 0LL;
                      src[1].m128i_i64[0] = (__int64)v171;
                      src[1].m128i_i64[1] = 1LL;
                      std::io::stdio::_eprint(src);
                      v115 = (__int64)uu_tail::follow::files::FileHandling::update_reader(v162, v72, v71);
                    }
                  }
                  else
                  {
                    *(_QWORD *)&v127 = uucore::util_name();
                    *(_OWORD *)v171 = v127;
                    v169 = v171;
                    v170 = <&T as core::fmt::Display>::fmt;
                    src[0].m128i_i64[0] = (__int64)&unk_15CB50;
                    src[0].m128i_i64[1] = 2LL;
                    src[2].m128i_i64[0] = 0LL;
                    src[1].m128i_i64[0] = (__int64)&v169;
                    src[1].m128i_i64[1] = 1LL;
                    std::io::stdio::_eprint(src);
                    v128 = _mm_loadu_si128(&v179);
                    *(_QWORD *)v171 = 0LL;
                    *(__m128i *)&v171[8] = v128;
                    v172 = 1;
                    v169 = v171;
                    v170 = <os_display::Quoted as core::fmt::Display>::fmt;
                    src[0].m128i_i64[0] = (__int64)&unk_15CC98;
                    src[0].m128i_i64[1] = 2LL;
                    src[2].m128i_i64[0] = 0LL;
                    src[1].m128i_i64[0] = (__int64)&v169;
                    src[1].m128i_i64[1] = 1LL;
                    std::io::stdio::_eprint(src);
                    v115 = (__int64)uu_tail::follow::files::FileHandling::update_reader(v162, v72, v71);
                  }
                }
                else
                {
                  *(_QWORD *)&v129 = uucore::util_name();
                  *(_OWORD *)v171 = v129;
                  v169 = v171;
                  v170 = <&T as core::fmt::Display>::fmt;
                  src[0].m128i_i64[0] = (__int64)&unk_15CB50;
                  src[0].m128i_i64[1] = 2LL;
                  src[2].m128i_i64[0] = 0LL;
                  src[1].m128i_i64[0] = (__int64)&v169;
                  src[1].m128i_i64[1] = 1LL;
                  std::io::stdio::_eprint(src);
                  v130 = _mm_loadu_si128(&v179);
                  *(_QWORD *)v171 = 0LL;
                  *(__m128i *)&v171[8] = v130;
                  v172 = 1;
                  v169 = v171;
                  v170 = <os_display::Quoted as core::fmt::Display>::fmt;
                  src[0].m128i_i64[0] = (__int64)&unk_15CC38;
                  src[0].m128i_i64[1] = 2LL;
                  src[2].m128i_i64[0] = 0LL;
                  src[1].m128i_i64[0] = (__int64)&v169;
                  src[1].m128i_i64[1] = 1LL;
                  std::io::stdio::_eprint(src);
                  v115 = (__int64)uu_tail::follow::files::FileHandling::update_reader(v162, v72, v71);
                }
                if ( v115 )
                  goto LABEL_302;
                goto LABEL_252;
              }
              v112 = uu_tail::follow::files::FileHandling::get(v162, v72, v71);
              if ( *(_DWORD *)v112 == 2 )
              {
                if ( v111 == 4096 )
                {
LABEL_174:
                  *(_QWORD *)&v113 = uucore::util_name();
                  *(_OWORD *)v171 = v113;
                  v169 = v171;
                  v170 = <&T as core::fmt::Display>::fmt;
                  src[0].m128i_i64[0] = (__int64)&unk_15CB50;
                  src[0].m128i_i64[1] = 2LL;
                  src[2].m128i_i64[0] = 0LL;
                  src[1].m128i_i64[0] = (__int64)&v169;
                  src[1].m128i_i64[1] = 1LL;
                  std::io::stdio::_eprint(src);
                  v114 = _mm_loadu_si128(&v179);
                  *(_QWORD *)v171 = 0LL;
                  *(__m128i *)&v171[8] = v114;
                  v172 = 1;
                  v169 = v171;
                  v170 = <os_display::Quoted as core::fmt::Display>::fmt;
                  src[0].m128i_i64[0] = (__int64)&unk_15CC98;
                  src[0].m128i_i64[1] = 2LL;
                  src[2].m128i_i64[0] = 0LL;
                  src[1].m128i_i64[0] = (__int64)&v169;
                  src[1].m128i_i64[1] = 1LL;
                  std::io::stdio::_eprint(src);
                  v115 = (__int64)uu_tail::follow::files::FileHandling::update_reader(v162, v72, v71);
                  if ( v115 )
                    goto LABEL_302;
                  goto LABEL_252;
                }
                if ( !(_BYTE)v177 )
                {
LABEL_253:
                  memcpy(src, v223, 0xB0uLL);
                  uu_tail::follow::files::FileHandling::update_metadata(v162, v72, v71, src);
                  goto LABEL_254;
                }
                v117 = *(_BYTE *)(v46 + 142);
                if ( v117 != 2 && (v117 & 1) == 0 )
                {
                  *(_QWORD *)&v118 = uucore::util_name();
                  *(_OWORD *)v171 = v118;
                  v169 = v171;
                  v170 = <&T as core::fmt::Display>::fmt;
                  src[0].m128i_i64[0] = (__int64)&unk_15CB50;
                  src[0].m128i_i64[1] = 2LL;
                  src[2].m128i_i64[0] = 0LL;
                  src[1].m128i_i64[0] = (__int64)&v169;
                  src[1].m128i_i64[1] = 1LL;
                  std::io::stdio::_eprint(src);
                  v119 = _mm_loadu_si128(&v179);
                  *(_QWORD *)v171 = 0LL;
                  *(__m128i *)&v171[8] = v119;
                  v172 = 1;
                  v169 = v171;
                  v170 = <os_display::Quoted as core::fmt::Display>::fmt;
                  src[0].m128i_i64[0] = (__int64)&unk_15CCB8;
                  src[0].m128i_i64[1] = 2LL;
                  src[2].m128i_i64[0] = 0LL;
                  src[1].m128i_i64[0] = (__int64)&v169;
                  src[1].m128i_i64[1] = 1LL;
                  std::io::stdio::_eprint(src);
                  if ( *(_DWORD *)v46 == 3 )
                    core::option::unwrap_failed(&off_15CCD8);
                  (*(void (__fastcall **)(__m128i *, _QWORD, __int64, __int64))(*(_QWORD *)(v46 + 24) + 32LL))(
                    src,
                    *(_QWORD *)(v46 + 16),
                    v72,
                    v71);
                  if ( src[0].m128i_i32[0] != 6 )
                    core::ptr::drop_in_place<notify::error::Error>(src);
                  uu_tail::follow::files::FileHandling::remove(src, (__int64)v162, v72, v71);
                  core::ptr::drop_in_place<uu_tail::follow::files::PathData>(src);
                  if ( uu_tail::follow::files::FileHandling::no_files_remaining((__int64)v162, v181) )
                  {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(src);
                    v159 = src[0];
                    v160 = src[1].m128i_i64[0];
                    v115 = alloc::alloc::exchange_malloc();
                    *(__m128i *)v115 = v159;
                    *(_QWORD *)(v115 + 16) = v160;
                    *(_DWORD *)(v115 + 24) = 1;
                    goto LABEL_302;
                  }
                  goto LABEL_253;
                }
              }
              else
              {
                if ( v111 == 4096 )
                  goto LABEL_237;
                v135 = *(_DWORD *)(v112 + 56) & 0xF000;
                if ( v135 != 4096 && v135 != 0x8000 && v135 != 0x2000 )
                  goto LABEL_253;
                if ( *(_QWORD *)(v112 + 200) )
                {
                  uu_tail::follow::files::FileHandling::reset_reader(v162, v72, v71);
                  goto LABEL_253;
                }
              }
              *(_QWORD *)&v136 = uucore::util_name();
              *(_OWORD *)v171 = v136;
              v169 = v171;
              v170 = <&T as core::fmt::Display>::fmt;
              src[0].m128i_i64[0] = (__int64)&unk_15CB50;
              src[0].m128i_i64[1] = 2LL;
              src[2].m128i_i64[0] = 0LL;
              src[1].m128i_i64[0] = (__int64)&v169;
              src[1].m128i_i64[1] = 1LL;
              std::io::stdio::_eprint(src);
              v137 = _mm_loadu_si128(&v179);
              *(_QWORD *)v171 = 0LL;
              *(__m128i *)&v171[8] = v137;
              v172 = 1;
              v169 = v171;
              v170 = <os_display::Quoted as core::fmt::Display>::fmt;
              src[0].m128i_i64[0] = (__int64)&unk_15CC18;
              src[0].m128i_i64[1] = 2LL;
              src[2].m128i_i64[0] = 0LL;
              src[1].m128i_i64[0] = (__int64)&v169;
              src[1].m128i_i64[1] = 1LL;
              std::io::stdio::_eprint(src);
              goto LABEL_253;
            default:
              goto LABEL_254;
          }
LABEL_166:
          i.m128i_i32[0] = 0;
          goto LABEL_167;
        }
        if ( (unsigned __int8)v196 != 4 || BYTE1(v196) >= 2u )
          goto LABEL_254;
LABEL_79:
        v75 = *(_BYTE *)(v173 + 142);
        if ( (v75 & 1) == 0 )
        {
          if ( v75 == 2 || !*(_BYTE *)(v173 + 140) )
            goto LABEL_254;
          if ( *(_DWORD *)v173 != 3 )
          {
            v76 = (_QWORD *)uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(v173 + 16), *(_QWORD *)(v173 + 24));
            v77 = v76;
            if ( v76 )
            {
              if ( *v76 )
                _rust_dealloc(v76[1], *v76, 1LL);
              _rust_dealloc(v77, 32LL, 8LL);
            }
            uu_tail::follow::files::FileHandling::remove(src, (__int64)v162, v72, v71);
            core::ptr::drop_in_place<uu_tail::follow::files::PathData>(src);
            goto LABEL_254;
          }
          v161 = &off_15CD38;
LABEL_320:
          v180 = v161;
LABEL_321:
          core::option::unwrap_failed(v180);
        }
        if ( (_BYTE)v177 )
        {
          v104 = (_DWORD *)uu_tail::follow::files::FileHandling::get_mut(v162, v72, v71);
          if ( *v104 != 2 )
          {
            v105 = v104[14] & 0xF000;
            if ( v105 == 4096 || v105 == 0x2000 || v105 == 0x8000 )
            {
              if ( *(_QWORD *)(uu_tail::follow::files::FileHandling::get(v162, v72, v71) + 200) )
              {
                *(_QWORD *)&v106 = uucore::util_name();
                dest[0] = v106;
                *(_QWORD *)v171 = dest;
                *(_QWORD *)&v171[8] = <&T as core::fmt::Display>::fmt;
                src[0].m128i_i64[0] = (__int64)&unk_15CB50;
                src[0].m128i_i64[1] = 2LL;
                src[2].m128i_i64[0] = 0LL;
                src[1].m128i_i64[0] = (__int64)v171;
                src[1].m128i_i64[1] = 1LL;
                std::io::stdio::_eprint(src);
                v107 = _mm_loadu_si128(&v179);
                *(_QWORD *)v171 = 0LL;
                *(__m128i *)&v171[8] = v107;
                v172 = 1;
                src[0].m128i_i64[0] = (__int64)v171;
                src[0].m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
                src[1].m128i_i64[0] = (__int64)&off_15CD90;
                src[1].m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
                src[2].m128i_i64[0] = (__int64)&off_15CD50;
                src[2].m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
                *(_QWORD *)&dest[0] = &unk_15CDA0;
                *((_QWORD *)&dest[0] + 1) = 4LL;
                *(_QWORD *)&dest[2] = 0LL;
                *(_QWORD *)&dest[1] = src;
                *((_QWORD *)&dest[1] + 1) = 3LL;
                std::io::stdio::_eprint(dest);
              }
            }
          }
          if ( (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v72, v71)
            && !(unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                                   v53,
                                   *(_QWORD *)(v46 + 40),
                                   *(_QWORD *)(v46 + 48)) )
          {
            *(_QWORD *)&v108 = uucore::util_name();
            dest[0] = v108;
            *(_QWORD *)v171 = dest;
            *(_QWORD *)&v171[8] = <&T as core::fmt::Display>::fmt;
            src[0].m128i_i64[0] = (__int64)&unk_15CB50;
            src[0].m128i_i64[1] = 2LL;
            src[2].m128i_i64[0] = 0LL;
            src[1].m128i_i64[0] = (__int64)v171;
            src[1].m128i_i64[1] = 1LL;
            std::io::stdio::_eprint(src);
            src[0].m128i_i64[0] = (__int64)&off_15CDE0;
            src[0].m128i_i64[1] = 1LL;
            src[1].m128i_i64[0] = 8LL;
            *(__m128i *)((char *)&src[1] + 8) = 0LL;
            std::io::stdio::_eprint(src);
            *(_QWORD *)&v109 = uucore::util_name();
            dest[0] = v109;
            *(_QWORD *)v171 = dest;
            *(_QWORD *)&v171[8] = <&T as core::fmt::Display>::fmt;
            src[0].m128i_i64[0] = (__int64)&unk_15CB50;
            src[0].m128i_i64[1] = 2LL;
            src[2].m128i_i64[0] = 0LL;
            src[1].m128i_i64[0] = (__int64)v171;
            src[1].m128i_i64[1] = 1LL;
            std::io::stdio::_eprint(src);
            *(_QWORD *)&dest[0] = &off_15CB70;
            *((_QWORD *)&dest[0] + 1) = <&T as core::fmt::Display>::fmt;
            src[0].m128i_i64[0] = (__int64)&unk_15CDF0;
            src[0].m128i_i64[1] = 2LL;
            src[2].m128i_i64[0] = 0LL;
            src[1].m128i_i64[0] = (__int64)dest;
            src[1].m128i_i64[1] = 1LL;
            std::io::stdio::_eprint(src);
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v53);
            *(_QWORD *)&dest[1] = src[1].m128i_i64[0];
            dest[0] = _mm_loadu_si128(src);
            alloc::vec::Vec<T,A>::push(v204, dest);
            if ( *(_DWORD *)v46 == 3 )
            {
              v161 = &off_15CE10;
              goto LABEL_320;
            }
            v110 = uu_tail::follow::watch::WatcherRx::unwatch(*(_QWORD *)(v46 + 16), *(_QWORD *)(v46 + 24));
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v110);
          }
LABEL_177:
          uu_tail::follow::files::FileHandling::reset_reader(v162, v72, v71);
          goto LABEL_254;
        }
        *(_QWORD *)&v116 = uucore::util_name();
        dest[0] = v116;
        *(_QWORD *)v171 = dest;
        *(_QWORD *)&v171[8] = <&T as core::fmt::Display>::fmt;
        src[0].m128i_i64[0] = (__int64)&unk_15CB50;
        src[0].m128i_i64[1] = 2LL;
        src[2].m128i_i64[0] = 0LL;
        src[1].m128i_i64[0] = (__int64)v171;
        src[1].m128i_i64[1] = 1LL;
        std::io::stdio::_eprint(src);
        *(_QWORD *)&dest[0] = &v178;
        *((_QWORD *)&dest[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[1] = &off_15CD50;
        *((_QWORD *)&dest[1] + 1) = <&T as core::fmt::Display>::fmt;
        src[0].m128i_i64[0] = (__int64)&unk_15CD60;
        src[0].m128i_i64[1] = 3LL;
        src[2].m128i_i64[0] = 0LL;
        src[1].m128i_i64[0] = (__int64)dest;
        src[1].m128i_i64[1] = 2LL;
        std::io::stdio::_eprint(src);
        if ( (*(_BYTE *)(v46 + 141) == 0) | uu_tail::follow::files::FileHandling::files_remaining((__int64)v162) )
          goto LABEL_177;
        <T as alloc::slice::hack::ConvertVec>::to_vec(src);
        v157 = src[0];
        v158 = src[1].m128i_i64[0];
        updated = alloc::alloc::exchange_malloc();
        *(__m128i *)updated = v157;
        *(_QWORD *)(updated + 16) = v158;
        *(_DWORD *)(updated + 24) = 1;
LABEL_304:
        if ( v178 )
          _rust_dealloc(v179.m128i_i64[0], v178, 1LL);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v182);
        if ( v182 )
          _rust_dealloc(v183, 24 * v182, 8LL);
LABEL_301:
        core::ptr::drop_in_place<notify::event::Event>(&v194);
LABEL_299:
        v163 = 0;
        v68 = 0;
LABEL_268:
        v138 = v185.m128i_i64[1];
        v139 = v186;
        if ( v186 )
        {
          v140 = (_QWORD *)(v185.m128i_i64[1] + 8);
          do
          {
            v141 = *(v140 - 1);
            if ( v141 )
              _rust_dealloc(*v140, v141, 1LL);
            v140 += 3;
            --v139;
          }
          while ( v139 );
        }
        if ( v185.m128i_i64[0] )
          _rust_dealloc(v138, 24 * v185.m128i_i64[0], 8LL);
        if ( (~v187.m128i_i8[0] & 6) != 0 )
        {
          if ( !v163 )
          {
            if ( v187.m128i_i32[0] == 1 )
            {
              core::ptr::drop_in_place<std::io::error::Error>(&v187.m128i_u64[1]);
            }
            else if ( !v187.m128i_i64[0] && v187.m128i_i64[1] )
            {
              _rust_dealloc(v188.m128i_i64[0], v187.m128i_i64[1], 1LL);
            }
          }
          if ( !v68 )
          {
            v142 = v189.m128i_i64[1];
            v143 = v190;
            if ( v190 )
            {
              v144 = (_QWORD *)(v189.m128i_i64[1] + 8);
              do
              {
                v145 = *(v144 - 1);
                if ( v145 )
                  _rust_dealloc(*v144, v145, 1LL);
                v144 += 3;
                --v143;
              }
              while ( v143 );
            }
            if ( v189.m128i_i64[0] )
              _rust_dealloc(v142, 24 * v189.m128i_i64[0], 8LL);
          }
        }
LABEL_296:
        core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(v173);
        return updated;
      case 7LL:
        if ( v187.m128i_i8[8] )
        {
          LOBYTE(v223[0]) = 1;
          *(_QWORD *)&dest[0] = v223;
          *((_QWORD *)&dest[0] + 1) = <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt;
          src[0].m128i_i64[0] = (__int64)&off_15CEB8;
          src[0].m128i_i64[1] = 1LL;
          src[2].m128i_i64[0] = 0LL;
          src[1].m128i_i64[0] = (__int64)dest;
          src[1].m128i_i64[1] = 1LL;
          alloc::fmt::format::format_inner(v208, src, v47, v48, v49, v50);
          v152 = v208[0];
          v153 = v208[1];
          v154 = v208[2];
          v155 = alloc::alloc::exchange_malloc();
LABEL_298:
          updated = v155;
          *(_QWORD *)v155 = v152;
          *(_QWORD *)(v155 + 8) = v153;
          *(_QWORD *)(v155 + 16) = v154;
          *(_DWORD *)(v155 + 24) = 1;
          goto LABEL_299;
        }
        LOBYTE(v2) = 1;
        v65 = 8LL;
        v66 = 0LL;
        v67 = 0LL;
        v68 = 0;
        goto LABEL_113;
      default:
LABEL_291:
        src[3].m128i_i64[0] = v190;
        v146 = _mm_loadu_si128(&v187);
        v147 = _mm_loadu_si128(&v188);
        src[2] = v189;
        src[1] = v147;
        src[0] = v146;
        v223[0] = src;
        v223[1] = <notify::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[0] = &off_15CEA8;
        *((_QWORD *)&dest[0] + 1) = 1LL;
        *(_QWORD *)&dest[2] = 0LL;
        *(_QWORD *)&dest[1] = v223;
        *((_QWORD *)&dest[1] + 1) = 1LL;
        alloc::fmt::format::format_inner(v207, dest, v47, v48, v49, v50);
        v148 = v207[0];
        v149 = v207[1];
        v150 = v207[2];
        v151 = _rust_alloc(32LL, 8LL);
        if ( !v151 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        updated = v151;
        *(_QWORD *)v151 = v148;
        *(_QWORD *)(v151 + 8) = v149;
        *(_QWORD *)(v151 + 16) = v150;
        *(_DWORD *)(v151 + 24) = 1;
        core::ptr::drop_in_place<notify::error::Error>(src);
        v163 = 1;
        v68 = 1;
        goto LABEL_268;
    }
  }
}
