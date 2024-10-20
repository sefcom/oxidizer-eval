__int64 __fastcall uu_fmt::linebreak::break_lines(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 result; // rax
  const void *v12; // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  const void *v15; // rsi
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  const void *v18; // rsi
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 *v23; // r8
  __int64 v24; // rsi
  _QWORD *v25; // rdi
  unsigned __int64 v26; // rbp
  _QWORD *v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r13
  __int64 v32; // rcx
  unsigned __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // r12
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // r12
  _QWORD *v42; // rdi
  __int64 v43; // rsi
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // rdx
  size_t v46; // r12
  __int64 v47; // rbp
  __int64 v48; // rax
  unsigned __int64 *v49; // rax
  __int64 v50; // r9
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  float v55; // xmm0_4
  float v56; // xmm0_4
  unsigned __int64 v57; // rax
  float v58; // xmm0_4
  _QWORD *v59; // rbx
  unsigned __int64 v60; // r8
  char v61; // cl
  bool v62; // al
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 *v67; // rsi
  __int64 v68; // rsi
  char v69; // cl
  __int64 v70; // rdx
  __int64 v71; // rcx
  signed __int64 v72; // rcx
  unsigned __int64 v73; // r12
  __int64 v74; // rbp
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rbp
  __int64 v80; // rbx
  __int64 v81; // rcx
  __int64 v82; // r14
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  char *v85; // r14
  __int64 v86; // r15
  unsigned __int64 v87; // rax
  __int128 v88; // xmm0
  __int64 v89; // rcx
  float v90; // xmm0_4
  __int64 v91; // rdx
  unsigned __int64 v92; // rdx
  float v93; // xmm0_4
  __int64 v94; // rcx
  __int64 v95; // rdx
  float v96; // xmm1_4
  __int64 v97; // rsi
  float v98; // xmm1_4
  __int64 v99; // rax
  __int64 v100; // rbx
  bool v101; // sf
  __int64 v102; // r14
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  char v106; // bl
  __int64 v107; // rdx
  __int16 v108; // r14
  __int128 v109; // xmm0
  unsigned __int64 v110; // r12
  __int64 v111; // r15
  unsigned __int64 v112; // r15
  __int64 v113; // rax
  __int64 v114; // rcx
  __int128 v115; // xmm0
  signed __int64 v116; // r12
  __int64 v117; // r14
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rax
  __int64 v120; // r14
  char v121; // bl
  unsigned __int64 v122; // r15
  char **v123; // rax
  __int64 v124; // r9
  unsigned __int64 *v125; // rsi
  unsigned __int64 *v126; // rax
  __int64 v127; // rdx
  signed __int64 v128; // rdi
  __int64 v129; // r13
  __int64 v130; // rax
  __int64 v131; // r12
  __int64 v132; // r14
  unsigned __int64 v133; // r15
  char v134; // bl
  __int64 v135; // r15
  __int64 v136; // rax
  bool v137; // r13
  char v138; // cl
  _QWORD *v139; // r10
  _QWORD *v140; // r14
  char v141; // dl
  char v142; // r13
  __int64 v143; // rax
  __int64 v144; // r15
  __int64 v145; // r15
  _QWORD *v146; // rax
  size_t v147; // r12
  char *v148; // rbp
  size_t v149; // r15
  char *v150; // rdi
  size_t v151; // rsi
  size_t v152; // r12
  _QWORD *v153; // rax
  __int64 v154; // rax
  __int64 v155; // r14
  __int64 v156; // r14
  _QWORD *v157; // rdi
  size_t v158; // r15
  char *v159; // rbp
  __int64 v160; // r14
  __int64 v161; // rax
  _QWORD *v162; // rbx
  void *v163; // rdi
  size_t v164; // rsi
  __int64 v165; // r12
  _QWORD *v166; // r14
  __int64 v167; // rbx
  __int64 v168; // rbx
  __int64 v169; // rbx
  __int64 v170; // rbx
  _QWORD *v171; // r14
  size_t v172; // r15
  __int64 v173; // rdi
  unsigned __int64 v174; // rsi
  unsigned __int64 v175; // rdx
  char v176; // [rsp+7h] [rbp-1E1h]
  _QWORD *v177; // [rsp+8h] [rbp-1E0h]
  __int64 v178; // [rsp+10h] [rbp-1D8h]
  _QWORD *v179; // [rsp+18h] [rbp-1D0h]
  _QWORD *v180; // [rsp+18h] [rbp-1D0h]
  __int64 v181; // [rsp+20h] [rbp-1C8h]
  int v182; // [rsp+20h] [rbp-1C8h]
  __int64 v183; // [rsp+20h] [rbp-1C8h]
  __int64 v184; // [rsp+20h] [rbp-1C8h]
  bool v185; // [rsp+2Fh] [rbp-1B9h]
  __int64 v186; // [rsp+30h] [rbp-1B8h]
  __int64 v187; // [rsp+30h] [rbp-1B8h]
  __int64 v188; // [rsp+38h] [rbp-1B0h]
  __int64 v189; // [rsp+38h] [rbp-1B0h]
  _QWORD *v190; // [rsp+38h] [rbp-1B0h]
  unsigned __int64 *v191; // [rsp+40h] [rbp-1A8h]
  char v192; // [rsp+40h] [rbp-1A8h]
  void *src; // [rsp+48h] [rbp-1A0h]
  __int64 v194; // [rsp+50h] [rbp-198h] BYREF
  unsigned __int64 *v195; // [rsp+58h] [rbp-190h]
  __int64 v196; // [rsp+60h] [rbp-188h]
  __int64 v197; // [rsp+68h] [rbp-180h]
  __int64 v198; // [rsp+70h] [rbp-178h] BYREF
  __int64 v199; // [rsp+78h] [rbp-170h]
  unsigned __int64 v200; // [rsp+80h] [rbp-168h]
  size_t n; // [rsp+88h] [rbp-160h]
  char **v202; // [rsp+90h] [rbp-158h]
  __int64 v203; // [rsp+98h] [rbp-150h]
  unsigned __int64 v204; // [rsp+A0h] [rbp-148h]
  float v205; // [rsp+A8h] [rbp-140h]
  float v206; // [rsp+ACh] [rbp-13Ch]
  __int64 v207; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v208; // [rsp+B8h] [rbp-130h]
  __int64 v209; // [rsp+C0h] [rbp-128h]
  char **v210; // [rsp+C8h] [rbp-120h]
  __int64 v211; // [rsp+D0h] [rbp-118h]
  __int64 v212; // [rsp+D8h] [rbp-110h]
  __int64 v213; // [rsp+E0h] [rbp-108h]
  unsigned __int64 v214; // [rsp+E8h] [rbp-100h]
  __int64 v215; // [rsp+F0h] [rbp-F8h]
  unsigned __int64 v216; // [rsp+F8h] [rbp-F0h]
  __int64 v217; // [rsp+100h] [rbp-E8h]
  __int64 v218; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v219; // [rsp+110h] [rbp-D8h]
  __int64 v220; // [rsp+118h] [rbp-D0h]
  __int64 v221; // [rsp+120h] [rbp-C8h]
  unsigned __int64 v222; // [rsp+128h] [rbp-C0h]
  __int128 v223; // [rsp+130h] [rbp-B8h]
  char *v224; // [rsp+148h] [rbp-A0h]
  __int64 v225; // [rsp+150h] [rbp-98h]
  unsigned __int64 v226; // [rsp+158h] [rbp-90h]
  __int64 v227; // [rsp+160h] [rbp-88h]
  __int64 v228; // [rsp+168h] [rbp-80h] BYREF
  _QWORD *v229; // [rsp+170h] [rbp-78h]
  __int64 v230; // [rsp+178h] [rbp-70h]
  __int128 v231; // [rsp+190h] [rbp-58h]
  _BYTE v232[21]; // [rsp+1A0h] [rbp-48h]

  v197 = *(_QWORD *)(a1 + 88);
  uu_fmt::parasplit::ParaWords::new((__int64)&v228, a2, a1, a4);
  v215 = v230;
  v179 = v229;
  if ( v230 )
  {
    v177 = a3;
    v7 = v229[5];
    if ( *(_WORD *)(a2 + 72) )
    {
      v12 = *(const void **)(a1 + 32);
      v13 = *(_QWORD *)(a1 + 40);
      v14 = v177[2];
      if ( v13 >= *v177 - v14 )
      {
        result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v177, v12, *(_QWORD *)(a1 + 40));
        v8 = v177;
        if ( result )
          goto LABEL_18;
      }
      else
      {
        memcpy((void *)(v14 + v177[1]), v12, *(_QWORD *)(a1 + 40));
        v8 = v177;
        v177[2] = v13 + v14;
      }
      v9 = *(_QWORD *)(a1 + 72);
    }
    else
    {
      v8 = v177;
      if ( *(_BYTE *)(a1 + 104) )
      {
        v9 = 0LL;
      }
      else
      {
        v15 = *(const void **)(a1 + 56);
        v16 = *(_QWORD *)(a1 + 64);
        v17 = v177[2];
        if ( v16 >= *v177 - v17 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v177, v15, *(_QWORD *)(a1 + 64));
          v9 = v197;
          v8 = v177;
          if ( result )
            goto LABEL_18;
        }
        else
        {
          memcpy((void *)(v17 + v177[1]), v15, *(_QWORD *)(a1 + 64));
          v8 = v177;
          v177[2] = v16 + v17;
          v9 = v197;
        }
      }
    }
    v18 = (const void *)v179[2];
    v19 = v179[3];
    v20 = v8[2];
    if ( v19 < *v8 - v20 )
    {
      memcpy((void *)(v20 + v8[1]), v18, v179[3]);
      v23 = v177;
      v177[2] = v19 + v20;
      goto LABEL_20;
    }
    result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v8, v18, v179[3]);
    v23 = v177;
    if ( !result )
    {
LABEL_20:
      v188 = v215 << 6;
      v26 = v7 + v9;
      if ( *(_BYTE *)(a1 + 104) )
      {
        src = *(void **)(a1 + 56);
        n = *(_QWORD *)(a1 + 64);
        v176 = 1;
LABEL_23:
        v27 = v179;
        if ( v215 != 1 )
        {
          v29 = *(_QWORD *)(a2 + 48);
          v30 = *(_QWORD *)(a2 + 64);
          v189 = v188 - 64;
          v31 = 0LL;
          v32 = 0LL;
          do
          {
            v34 = v27[v31 / 8 + 13];
            v35 = v27[v31 / 8 + 14];
            if ( v27[v31 / 8 + 8] )
            {
              if ( !v30 )
                core::panicking::panic_const::panic_const_div_by_zero(&off_EC570, v18, v21, v32, v23, v22);
              v36 = v26 + v179[v31 / 8 + 9];
              if ( (v30 | v36) >> 32 )
                v37 = v36 / v30;
              else
                v37 = (unsigned int)v36 / (unsigned int)v30;
              v35 = v30 * (v37 + 1) + v35 - v26;
            }
            if ( (unsigned __int8)v176 | BYTE2(v179[v31 / 8 + 15]) )
              v38 = ((LOBYTE(v179[v31 / 8 + 15]) != 0) | (unsigned __int8)((BYTE2(v179[v31 / 8 + 15]) != 0) & v32))
                  + 1LL;
            else
              v38 = 0LL;
            v33 = v34 + v26 + v38 + v35;
            if ( v33 <= v29 )
            {
              v18 = (const void *)v179[v31 / 8 + 11];
              result = uu_fmt::linebreak::write_with_spaces((void *)v179[v31 / 8 + 10], (size_t)v18);
              v23 = v177;
              if ( result )
                goto LABEL_247;
            }
            else
            {
              v39 = *v23;
              v40 = v23[2];
              if ( (unsigned __int64)(*v23 - v40) <= 1 )
              {
                result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v23, asc_19E04, 1LL);
                if ( result )
                  goto LABEL_247;
                v23 = v177;
                v39 = *v177;
                v41 = v177[2];
              }
              else
              {
                *(_BYTE *)(v23[1] + v40) = 10;
                v41 = v40 + 1;
                v23[2] = v41;
              }
              if ( v39 - v41 <= n )
              {
                result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v23, src, n);
                v42 = v177;
                if ( result )
                  goto LABEL_247;
              }
              else
              {
                memcpy((void *)(v41 + v23[1]), src, n);
                v42 = v177;
                v177[2] = n + v41;
              }
              v43 = v179[v31 / 8 + 10];
              v44 = v179[v31 / 8 + 11];
              v45 = v179[v31 / 8 + 12];
              if ( v45 )
              {
                if ( v44 <= v45 )
                {
                  if ( v44 != v45 )
LABEL_270:
                    core::str::slice_error_fail(
                      v179[v31 / 8 + 10],
                      v179[v31 / 8 + 11],
                      v45,
                      v179[v31 / 8 + 11],
                      &off_EC588);
                }
                else if ( *(char *)(v43 + v45) <= -65 )
                {
                  goto LABEL_270;
                }
              }
              v46 = v44 - v45;
              v18 = (const void *)(v45 + v43);
              v47 = v42[2];
              if ( *v42 - v47 > v46 )
              {
                memcpy((void *)(v47 + v42[1]), v18, v46);
                v23 = v177;
                v177[2] = v46 + v47;
              }
              else
              {
                result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v42, v18, v46);
                v23 = v177;
                if ( result )
                  goto LABEL_247;
              }
              v33 = v197 + v34;
            }
            v27 = v179;
            LOBYTE(v32) = BYTE1(v179[v31 / 8 + 15]) != 0;
            v31 += 64LL;
            v26 = v33;
          }
          while ( v189 != v31 );
        }
        v28 = v23[2];
        if ( (unsigned __int64)(*v23 - v28) <= 1 )
        {
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v23, asc_19E04, 1LL);
        }
        else
        {
          *(_BYTE *)(v23[1] + v28) = 10;
          v23[2] = v28 + 1;
          result = 0LL;
        }
        goto LABEL_247;
      }
      v176 = *(_BYTE *)(a2 + 78);
      src = *(void **)(a1 + 56);
      n = *(_QWORD *)(a1 + 64);
      if ( *(_BYTE *)(a2 + 79) )
        goto LABEL_23;
      v48 = _rust_alloc(40LL, 8LL);
      if ( !v48 )
        alloc::alloc::handle_alloc_error(8LL, 40LL);
      *(_OWORD *)v48 = 0LL;
      *(_QWORD *)(v48 + 16) = 0LL;
      *(_QWORD *)(v48 + 24) = v26;
      *(_DWORD *)(v48 + 32) = 0;
      *(_WORD *)(v48 + 36) = 0;
      v198 = 1LL;
      v199 = v48;
      v200 = 1LL;
      v49 = (unsigned __int64 *)_rust_alloc(8LL, 8LL);
      if ( !v49 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      v191 = v49;
      *v49 = 0LL;
      v194 = 0LL;
      v195 = (_QWORD *)&byte_8;
      v196 = 0LL;
      v51 = *(_QWORD *)(a2 + 56);
      v222 = *(_QWORD *)(a2 + 48);
      v52 = v222 - v51;
      v53 = v222 - v51 + 1;
      v224 = (char *)v51;
      if ( v51 > v53 )
        v53 = v51;
      v216 = v53;
      v54 = v222 - v51;
      v207 = 0LL;
      v208 = 8LL;
      v209 = 0LL;
      v214 = v52;
      if ( v52 < 0 )
      {
        v56 = (float)(int)((v54 >> 1) | v214 & 1);
        v54 = v214;
        v55 = v56 + v56;
      }
      else
      {
        v55 = (float)(int)v52;
      }
      v206 = v55;
      v57 = v54 - 1;
      if ( (__int64)(v54 - 1) < 0 )
      {
        v54 = v214;
        v58 = (float)(int)((v57 >> 1) | v57 & 1) + (float)(int)((v57 >> 1) | v57 & 1);
      }
      else
      {
        v58 = (float)(int)v57;
      }
      v205 = v58;
      v190 = (_QWORD *)((char *)v179 + v188);
      v59 = v179 + 8;
      v216 -= v54;
      v60 = *(_QWORD *)(a2 + 64);
      v61 = 1;
      v213 = 1LL;
      v210 = &off_EC5D0;
      v203 = 1LL;
      v212 = (__int64)(v179 + 8);
      v217 = 0LL;
      v62 = 0;
      v180 = v179 + 8;
      v204 = v60;
LABEL_71:
      if ( (v61 & 1) != 0 )
      {
        if ( (_QWORD *)v212 == v190 )
          goto LABEL_157;
        v68 = v212 + 64;
        v186 = v212;
      }
      else
      {
        v68 = v212;
        if ( !v186 )
        {
LABEL_157:
          v187 = 8LL;
          v72 = v213;
          if ( !v213 )
            goto LABEL_176;
          v79 = v200;
          v78 = *v191;
          v123 = &anon_7924099e848313d0a89b53ee9f9d42da_13_llvm_6996122548768287985;
          if ( *v191 >= v200 )
          {
LABEL_272:
            v210 = v123;
LABEL_273:
            core::panicking::panic_bounds_check(v78, v79, v210, v72);
          }
          v124 = v199;
          if ( v213 == 1 )
          {
LABEL_169:
            v218 = 0LL;
            v219 = 8LL;
            v220 = 0LL;
            if ( v78 >= v200 )
LABEL_269:
              core::panicking::panic_bounds_check(v78, v79, &off_EC5E8, v72);
            v129 = 8LL;
            v183 = 0LL;
            while ( 1 )
            {
              v131 = *(_QWORD *)(v124 + 40 * v78 + 8);
              if ( !v131 )
                break;
              v132 = v124;
              v133 = v124 + 40 * v78;
              v134 = *(_BYTE *)(v133 + 36);
              if ( v183 == v218 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v218);
              v130 = v219;
              *(_QWORD *)(v219 + v129 - 8) = v131;
              *(_BYTE *)(v130 + v129) = v134;
              v72 = ++v183;
              v220 = v183;
              v78 = *(_QWORD *)v133;
              v129 += 16LL;
              v124 = v132;
              if ( *(_QWORD *)v133 >= v79 )
                goto LABEL_269;
            }
            v135 = v218;
            v187 = v219;
            v59 = v180;
          }
          else
          {
            v210 = &anon_7924099e848313d0a89b53ee9f9d42da_13_llvm_6996122548768287985;
            v125 = v191;
            v126 = v191 + 1;
            v72 = *(_QWORD *)(v199 + 40 * v78 + 16);
            v127 = (v213 - 1) & 0x1FFFFFFFFFFFFFFFLL;
            do
            {
              v78 = *v126;
              if ( *v126 >= v200 )
                goto LABEL_273;
              v128 = *(_QWORD *)(v199 + 40 * v78 + 16);
              if ( v128 < v72 )
                v125 = v126;
              if ( v128 <= v72 )
                v72 = v128;
              ++v126;
              --v127;
            }
            while ( v127 );
            if ( v125 )
            {
              v78 = *v125;
              goto LABEL_169;
            }
LABEL_176:
            v183 = 0LL;
            v135 = 0LL;
          }
          if ( v207 )
            _rust_dealloc(v208, 40 * v207, 8LL);
          if ( v194 )
            _rust_dealloc(v195, 8 * v194, 8LL);
          if ( v203 )
            _rust_dealloc(v191, 8 * v203, 8LL);
          v178 = v135;
          if ( v198 )
            _rust_dealloc(v199, 40 * v198, 8LL);
          if ( !v183 )
          {
            v139 = v177;
            if ( v215 == 1 )
              goto LABEL_237;
            goto LABEL_239;
          }
          v136 = v187 + 16 * v183;
          v137 = 0;
          v202 = &off_EC600;
          v138 = 0;
          v139 = v177;
          while ( 2 )
          {
            v140 = *(_QWORD **)(v136 - 16);
            v184 = v136;
            v141 = *(_BYTE *)(v136 - 8);
            v142 = v137;
            if ( (v138 & 1) != 0 )
            {
              v192 = *(_BYTE *)(v136 - 8);
              v143 = *v139;
              v144 = v139[2];
              if ( (unsigned __int64)(*v139 - v144) <= 1 )
              {
                result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v139, asc_19E04, 1LL);
                if ( result )
                  goto LABEL_244;
                v139 = v177;
                v143 = *v177;
                v145 = v177[2];
              }
              else
              {
                *(_BYTE *)(v139[1] + v144) = 10;
                v145 = v144 + 1;
                v139[2] = v145;
              }
              if ( v143 - v145 <= n )
              {
                result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v139, src, n);
                v139 = v177;
                if ( result )
                  goto LABEL_244;
              }
              else
              {
                v152 = n;
                memcpy((void *)(v145 + v139[1]), src, n);
                v139 = v177;
                v177[2] = v152 + v145;
              }
              v146 = v190;
              if ( v59 == v190 )
              {
                v138 = 1;
                goto LABEL_188;
              }
              v148 = (char *)v59[2];
              v149 = v59[3];
              v147 = v59[4];
              if ( v147 )
              {
                if ( v149 <= v147 )
                {
                  if ( v149 != v147 )
                    goto LABEL_277;
                }
                else if ( v148[v147] < -64 )
                {
                  goto LABEL_277;
                }
              }
              v151 = v149 - v147;
              v150 = &v148[v147];
            }
            else
            {
              v146 = v190;
              if ( v59 == v190 )
              {
                v138 = 0;
LABEL_188:
                v59 = v146;
                goto LABEL_189;
              }
              v192 = v141;
              v147 = v59[4];
              v148 = (char *)v59[2];
              v149 = v59[3];
              v150 = v148;
              v151 = v149;
            }
            v142 = *((_BYTE *)v59 + 57);
            if ( v59 == v140 )
            {
              v59 += 8;
              if ( !v192 )
                goto LABEL_220;
            }
            else
            {
              result = uu_fmt::linebreak::write_with_spaces(v150, v151);
              if ( result )
                goto LABEL_244;
              v59 += 16;
              v139 = v177;
              while ( 1 )
              {
                v153 = v59 - 8;
                if ( v59 - 8 == v190 )
                {
                  v138 = 0;
                  v59 = v190;
                  goto LABEL_189;
                }
                v150 = (char *)v153[2];
                v151 = v153[3];
                v142 = *((_BYTE *)v153 + 57);
                if ( v153 == v140 )
                  break;
                result = uu_fmt::linebreak::write_with_spaces(v150, v151);
                v59 += 8;
                v139 = v177;
                if ( result )
                  goto LABEL_244;
              }
              v147 = v140[4];
              v148 = (char *)v153[2];
              v149 = v153[3];
              if ( !v192 )
              {
LABEL_220:
                result = uu_fmt::linebreak::write_with_spaces(v150, v151);
                v138 = 1;
                v139 = v177;
                if ( result )
                {
LABEL_244:
                  v165 = v178;
                  goto LABEL_245;
                }
                goto LABEL_189;
              }
            }
            v154 = *v139;
            v155 = v139[2];
            if ( (unsigned __int64)(*v139 - v155) <= 1 )
            {
              result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v139, asc_19E04, 1LL);
              if ( result )
                goto LABEL_244;
              v139 = v177;
              v154 = *v177;
              v156 = v177[2];
            }
            else
            {
              *(_BYTE *)(v139[1] + v155) = 10;
              v156 = v155 + 1;
              v139[2] = v156;
            }
            if ( v154 - v156 <= n )
            {
              result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v139, src, n);
              v157 = v177;
              if ( result )
                goto LABEL_244;
            }
            else
            {
              memcpy((void *)(v156 + v139[1]), src, n);
              v157 = v177;
              v177[2] = n + v156;
            }
            if ( v147 )
            {
              if ( v149 <= v147 )
              {
                if ( v149 != v147 )
                {
LABEL_276:
                  v202 = &off_EC5A0;
LABEL_277:
                  core::str::slice_error_fail(v148, v149, v147, v149, v202);
                }
              }
              else if ( v148[v147] <= -65 )
              {
                goto LABEL_276;
              }
            }
            v158 = v149 - v147;
            v159 = &v148[v147];
            v160 = v157[2];
            if ( *v157 - v160 <= v158 )
            {
              result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v157, v159, v158);
              if ( result )
                goto LABEL_244;
              v138 = 0;
              v139 = v177;
            }
            else
            {
              memcpy((void *)(v160 + v157[1]), v159, v158);
              v139 = v177;
              v177[2] = v158 + v160;
              v138 = 0;
            }
LABEL_189:
            v136 = v184 - 16;
            v137 = v142 != 0;
            if ( v187 == v184 - 16 )
            {
              if ( v59 == v190 )
                goto LABEL_237;
              v180 = v59;
              if ( v138 )
              {
                v169 = v139[2];
                v165 = v178;
                if ( (unsigned __int64)(*v139 - v169) <= 1 )
                {
                  result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v139, asc_19E04, 1LL);
                  if ( result )
                    goto LABEL_245;
                  v139 = v177;
                  v170 = v177[2];
                }
                else
                {
                  *(_BYTE *)(v139[1] + v169) = 10;
                  v170 = v169 + 1;
                  v139[2] = v170;
                }
                if ( *v139 - v170 <= n )
                {
                  result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v139, src, n);
                  v162 = v180;
                  if ( result )
                    goto LABEL_245;
                }
                else
                {
                  v171 = v139;
                  v172 = n;
                  memcpy((void *)(v170 + v139[1]), src, n);
                  v171[2] = v172 + v170;
                  v162 = v180;
                }
                v173 = v162[2];
                v174 = v162[3];
                v175 = v162[4];
                if ( v175 )
                {
                  if ( v174 <= v175 )
                  {
                    if ( v174 != v175 )
LABEL_264:
                      core::str::slice_error_fail(v173, v174, v175, v162[3], &off_EC600);
                  }
                  else if ( *(char *)(v173 + v175) < -64 )
                  {
                    goto LABEL_264;
                  }
                }
                v164 = v174 - v175;
                v163 = (void *)(v175 + v173);
LABEL_240:
                result = uu_fmt::linebreak::write_with_spaces(v163, v164);
                if ( !result )
                {
                  v166 = v162 + 8;
                  while ( 1 )
                  {
                    v139 = v177;
                    if ( v166 == v190 )
                      break;
                    result = uu_fmt::linebreak::write_with_spaces((void *)v166[2], v166[3]);
                    v166 += 8;
                    if ( result )
                      goto LABEL_244;
                  }
LABEL_237:
                  v161 = v139[2];
                  if ( (unsigned __int64)(*v139 - v161) > 1 )
                  {
                    *(_BYTE *)(v139[1] + v161) = 10;
                    v139[2] = v161 + 1;
                    result = 0LL;
                    goto LABEL_244;
                  }
                  v165 = v178;
                  result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v139, asc_19E04, 1LL);
                }
LABEL_245:
                if ( v165 )
                {
                  v167 = result;
                  _rust_dealloc(v187, 16 * v165, 8LL);
                  result = v167;
                }
LABEL_247:
                if ( v228 )
                {
                  v25 = v229;
                  v24 = v228 << 6;
LABEL_249:
                  v168 = result;
                  _rust_dealloc(v25, v24, 8LL);
                  return v168;
                }
                return result;
              }
LABEL_239:
              v162 = v180;
              v163 = (void *)v180[2];
              v164 = v180[3];
              v165 = v178;
              goto LABEL_240;
            }
            continue;
          }
        }
      }
      v69 = 1;
      if ( (_QWORD *)v68 == v190 )
      {
        v212 = (__int64)v190;
        v70 = 0LL;
        v211 = 0LL;
      }
      else
      {
        v212 = v68 + 64;
        if ( !*(_BYTE *)(v68 + 56) )
        {
          if ( *(_BYTE *)(v68 + 58) )
            v69 = *(_BYTE *)(v186 + 57);
          else
            v69 = 0;
        }
        v70 = v68;
        v211 = v68;
      }
      v185 = v69 != 0;
      v71 = v62 + 1LL;
      if ( !((unsigned __int8)v176 | *(_BYTE *)(v186 + 58)) )
        v71 = 0LL;
      v202 = (char **)v71;
      v209 = 0LL;
      v196 = 0LL;
      v72 = 0LL;
      if ( !v213 )
        goto LABEL_142;
      v225 = v68;
      v227 = 8 * v213;
      v73 = 0LL;
      v74 = 0x7FFFFFFFFFFFFFFFLL;
      v221 = 0x7FFFFFFFFFFFFFFFLL;
      v181 = 0LL;
      while ( 1 )
      {
        v77 = v74;
        v72 = (signed __int64)v191;
        v78 = v191[v73 / 8];
        v79 = v200;
        if ( v78 >= v200 )
          goto LABEL_273;
        v80 = v199;
        v74 = *(_QWORD *)(v199 + 40 * v78 + 16) - v217;
        v81 = *(_QWORD *)(v199 + 40 * v78 + 24);
        *(_QWORD *)(v199 + 40 * v78 + 16) = v74;
        v70 = v181;
        if ( v74 < v77 )
          v70 = v78;
        v181 = v70;
        if ( v74 >= v77 )
          v74 = v77;
        v68 = *(_QWORD *)(v186 + 40);
        if ( *(_BYTE *)(v80 + 40 * v78 + 37) )
        {
          v82 = 0LL;
        }
        else
        {
          v82 = *(_QWORD *)(v186 + 48);
          if ( *(_QWORD *)v186 )
          {
            if ( !v60 )
              goto LABEL_267;
            v83 = v81 + *(_QWORD *)(v186 + 8);
            if ( (v60 | v83) >> 32 )
            {
              v84 = v83 / v60;
              v70 = (v81 + *(_QWORD *)(v186 + 8)) % v60;
            }
            else
            {
              v70 = (unsigned int)v83 % (unsigned int)v60;
              v84 = (unsigned int)v83 / (unsigned int)v60;
            }
            v82 = v60 * (v84 + 1) + v82 - v81;
          }
        }
        v85 = (char *)v202 + v68 + v82 + v81;
        if ( (unsigned __int64)v85 > v222 )
          goto LABEL_88;
        v226 = *(_QWORD *)(v186 + 40);
        v86 = v196;
        if ( v196 == v194 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v194);
        v87 = v80 + 40 * v78;
        v70 = v78;
        v195[v86] = v78;
        v196 = v86 + 1;
        *(_BYTE *)(v87 + 37) = 0;
        *(_QWORD *)(v87 + 24) = v85;
        if ( (unsigned __int64)v85 >= v216 )
        {
          v60 = v204;
          if ( (_QWORD *)v225 == v190 )
          {
            v223 = 0LL;
            v94 = 0LL;
          }
          else
          {
            v88 = 0LL;
            if ( v224 != v85 )
            {
              v88 = 0LL;
              *(float *)&v88 = (float)((int)v224 - (int)v85) / v206;
            }
            v223 = v88;
            v89 = 10000001LL;
            if ( fabs(*(float *)&v88) <= 1.0 )
            {
              v90 = fabs((float)(*(float *)&v223 * *(float *)&v223) * *(float *)&v223) * 100.0;
              v91 = (unsigned int)(int)v90;
              if ( v90 > 9.2233715e18 )
                v91 = 0x7FFFFFFFFFFFFFFFLL;
              v89 = v91 + 1;
            }
            v92 = v214 - v226;
            if ( v214 <= v226 )
            {
              v95 = 0LL;
            }
            else
            {
              if ( (__int64)(v214 - v226) < 0 )
                v93 = (float)(int)((v92 >> 1) | v92 & 1) + (float)(int)((v92 >> 1) | v92 & 1);
              else
                v93 = (float)(int)v92;
              v96 = (float)((float)((float)(v93 / v205) * (float)(v93 / v205)) * (float)(v93 / v205)) * 300.0;
              v97 = (unsigned int)(int)v96;
              if ( v96 > 9.2233715e18 )
                v97 = 0x7FFFFFFFFFFFFFFFLL;
              v95 = v97;
            }
            v98 = fabs(
                    (float)((float)((float)(*(float *)&v223 - *(float *)(v87 + 32)) * 0.5)
                          * (float)((float)(*(float *)&v223 - *(float *)(v87 + 32)) * 0.5))
                  * (float)((float)(*(float *)&v223 - *(float *)(v87 + 32)) * 0.5))
                * 600.0;
            v68 = (unsigned int)(int)v98;
            if ( v98 > 9.2233715e18 )
              v68 = 0x7FFFFFFFFFFFFFFFLL;
            v94 = (v68 + v95 + v89) * (v68 + v95 + v89);
          }
          v70 = 0x5AF3107A3FFFLL;
          if ( v94 > 0x5AF3107A3FFFLL )
            goto LABEL_88;
          v99 = *(_QWORD *)(v87 + 16);
          v100 = v99 + v94;
          if ( v99 + v94 >= v221 )
            goto LABEL_88;
          LOBYTE(v70) = v99 != 0;
          v101 = v94 < 0;
          LOBYTE(v94) = v94 == 0;
          LOBYTE(v68) = v101;
          if ( v99 >= 0 )
          {
            LOBYTE(v94) = v70 & v94;
            LOBYTE(v68) = v94 | v101;
            if ( (unsigned __int8)v94 | v101 )
              goto LABEL_88;
          }
          v102 = v209;
          if ( v209 == v207 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v207, v68, v70, v94, v204);
          v75 = v208;
          v76 = 5 * v102;
          *(_QWORD *)(v208 + 8 * v76) = v78;
          *(_QWORD *)(v75 + 8 * v76 + 8) = v186;
          *(_QWORD *)(v75 + 8 * v76 + 16) = v100;
          v70 = v197;
          *(_QWORD *)(v75 + 8 * v76 + 24) = v197;
          *(_DWORD *)(v75 + 8 * v76 + 32) = v223;
          *(_WORD *)(v75 + 8 * v76 + 36) = 256;
          v209 = v102 + 1;
          v221 = v100;
        }
        v60 = v204;
LABEL_88:
        v73 += 8LL;
        if ( v227 == v73 )
        {
          v103 = v209;
          if ( v209 )
          {
            --v209;
            v104 = v208;
            v105 = 5 * (v103 - 1);
            v106 = *(_BYTE *)(v208 + 8 * v105 + 37);
            if ( v106 != 2 )
            {
              v107 = v208 + 8 * v105;
              v108 = *(_WORD *)(v107 + 38);
              *(_QWORD *)&v232[13] = *(_QWORD *)(v107 + 29);
              v109 = *(_OWORD *)v107;
              *(_OWORD *)v232 = *(_OWORD *)(v107 + 16);
              v231 = v109;
              v110 = v200;
              v111 = v196;
              if ( v196 == v194 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v194);
              v195[v111] = v110;
              v196 = v111 + 1;
              v112 = v200;
              if ( v200 == v198 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v198, v68, v107, v104, v60);
              v113 = v199;
              v114 = 5 * v112;
              v70 = *(_QWORD *)&v232[13];
              *(_QWORD *)(v199 + 8 * v114 + 29) = *(_QWORD *)&v232[13];
              v115 = v231;
              *(_OWORD *)(v113 + 8 * v114 + 16) = *(_OWORD *)v232;
              *(_OWORD *)(v113 + 8 * v114) = v115;
              *(_BYTE *)(v113 + 8 * v114 + 37) = v106;
              *(_WORD *)(v113 + 8 * v114 + 38) = v108;
              v200 = v112 + 1;
              v60 = v204;
            }
          }
          v65 = v196;
          v59 = v180;
          v72 = v181;
          if ( v196 )
          {
            if ( v74 <= 0 )
              v74 = 0LL;
            v217 = v74;
            goto LABEL_70;
          }
LABEL_142:
          v79 = v200;
          if ( v72 >= v200 )
          {
            v78 = v72;
            v123 = &off_EC5B8;
            goto LABEL_272;
          }
          v116 = v72;
          v81 = 5 * v72;
          if ( *(_BYTE *)(v199 + 8 * v81 + 37) )
            goto LABEL_153;
          v81 = *(_QWORD *)(v199 + 8 * v81 + 24);
          v117 = *(_QWORD *)(v186 + 40);
          v68 = *(_QWORD *)(v186 + 48);
          if ( *(_QWORD *)v186 )
          {
            if ( !v60 )
LABEL_267:
              core::panicking::panic_const::panic_const_div_by_zero(&off_EC570, v68, v70, v81, v60, v50);
            v118 = v81 + *(_QWORD *)(v186 + 8);
            if ( (v60 | v118) >> 32 )
              v119 = v118 / v60;
            else
              v119 = (unsigned int)v118 / (unsigned int)v60;
            v68 = v60 * (v119 + 1) + v68 - v81;
          }
          v70 = (__int64)v202 + v117 - v222 + v68 + v81;
          if ( v70 <= (__int64)(v216 - v81) )
          {
LABEL_153:
            v121 = 0;
            v182 = -1082130432;
            v120 = v197;
            if ( !v194 )
              goto LABEL_154;
          }
          else
          {
            v120 = v197 + v117;
            v121 = 1;
            v182 = 1065353216;
            if ( !v194 )
LABEL_154:
              alloc::raw_vec::RawVec<T,A>::grow_one(&v194);
          }
          *v195 = v79;
          v196 = 1LL;
          v122 = v200;
          if ( v200 == v198 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v198, v68, v70, v81, v60);
          v63 = v199;
          v64 = 5 * v122;
          *(_QWORD *)(v199 + 8 * v64) = v116;
          *(_QWORD *)(v63 + 8 * v64 + 8) = v186;
          *(_QWORD *)(v63 + 8 * v64 + 16) = 0LL;
          *(_QWORD *)(v63 + 8 * v64 + 24) = v120;
          *(_DWORD *)(v63 + 8 * v64 + 32) = v182;
          *(_BYTE *)(v63 + 8 * v64 + 36) = v121;
          *(_BYTE *)(v63 + 8 * v64 + 37) = v121 ^ 1;
          v200 = v122 + 1;
          v65 = v196;
          v217 = 0LL;
          v59 = v180;
          v60 = v204;
LABEL_70:
          v66 = v194;
          v67 = v195;
          v194 = v203;
          v195 = v191;
          v196 = v213;
          v61 = 0;
          v213 = v65;
          v191 = v67;
          v203 = v66;
          v186 = v211;
          v62 = v185;
          goto LABEL_71;
        }
      }
    }
  }
  else
  {
    v10 = a3[2];
    if ( (unsigned __int64)(*a3 - v10) <= 1 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, asc_19E04, 1LL);
    }
    else
    {
      *(_BYTE *)(a3[1] + v10) = 10;
      a3[2] = v10 + 1;
      result = 0LL;
    }
  }
LABEL_18:
  if ( v228 )
  {
    v24 = v228 << 6;
    v25 = v179;
    goto LABEL_249;
  }
  return result;
}
