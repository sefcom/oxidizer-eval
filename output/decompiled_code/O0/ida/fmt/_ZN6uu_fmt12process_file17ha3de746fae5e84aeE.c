__int64 __fastcall uu_fmt::process_file(_BYTE *a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v5; // r15
  __int64 *v6; // rax
  __int64 *v7; // r14
  __int64 (__fastcall **v8)(); // rbx
  __int64 v9; // r14
  __int64 (__fastcall **v10)(); // r15
  __int64 *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r12
  bool v19; // zf
  _QWORD *v20; // rbp
  size_t v21; // r14
  __int64 v22; // rbx
  void *v23; // r13
  void *v24; // rdi
  __int64 v25; // rax
  size_t v26; // r14
  const void *v27; // r12
  __int64 v28; // rbx
  void *v29; // r13
  void *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r14
  __int64 v34; // rax
  __int128 v35; // kr10_16
  __int64 v36; // rbx
  void *v37; // r13
  void *v38; // rdi
  __int64 v39; // r15
  __int64 v40; // rbx
  _BYTE *v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rax
  bool v44; // cf
  unsigned __int64 v45; // r12
  const void *v46; // rbp
  size_t v47; // r14
  __int64 v48; // rbx
  void *v49; // r13
  void *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // cl
  __int64 v54; // r14
  __int64 v55; // rbp
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  _QWORD *v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  float v67; // xmm0_4
  _QWORD *v68; // r14
  __int64 v69; // r14
  char v70; // al
  __int64 v71; // rbx
  _BYTE *v72; // rsi
  __int64 v73; // rax
  __m128 v74; // xmm0
  float v75; // xmm0_4
  char v76; // cl
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // rcx
  __int128 v80; // xmm0
  __int64 v81; // rbx
  unsigned __int64 v82; // rax
  __int64 v83; // rdi
  unsigned __int64 *v84; // r13
  __int64 v85; // rbp
  unsigned __int64 v86; // r14
  __int64 v87; // rcx
  bool v88; // of
  __int64 v89; // rcx
  __int64 v90; // rbp
  bool v91; // cc
  unsigned __int64 v92; // rax
  __int64 v93; // r12
  unsigned __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r12
  __int64 v97; // r12
  unsigned __int64 v98; // r12
  unsigned __int64 v99; // r15
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  float v104; // xmm0_4
  unsigned __int64 v105; // rcx
  float v106; // xmm1_4
  float v107; // xmm0_4
  __m128 v108; // xmm1
  __m128 v109; // xmm0
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // kr00_8
  __int64 v114; // rdx
  bool v115; // sf
  bool v116; // al
  __int64 v117; // r15
  unsigned __int64 v118; // r12
  __int64 v119; // rax
  __int64 v120; // rcx
  unsigned __int64 v121; // r12
  unsigned __int64 v122; // r12
  char v123; // bp
  __int64 v124; // rdx
  __int16 v125; // r14
  __int128 v126; // xmm0
  unsigned __int64 v127; // r12
  unsigned __int64 v128; // r15
  unsigned __int64 v129; // r12
  unsigned int v130; // r13d
  __int64 v131; // r12
  unsigned __int64 v132; // rbx
  __int64 v133; // r14
  unsigned __int64 v134; // rax
  __int64 v135; // r14
  signed __int64 v136; // rax
  __int64 v137; // r14
  __int64 v138; // r14
  signed __int64 v139; // r14
  __int64 v140; // rbx
  char v141; // bp
  int v142; // xmm0_4
  unsigned __int64 v143; // r15
  unsigned __int64 v144; // r14
  unsigned __int64 v145; // r14
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rbx
  _QWORD *v149; // r14
  unsigned __int64 *v150; // rdx
  unsigned __int64 v151; // rdi
  __int64 v152; // r12
  __int64 v153; // r13
  __int64 v154; // rax
  __int64 v155; // rbp
  unsigned __int64 v156; // r15
  char v157; // r14
  unsigned __int64 v158; // rbx
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rcx
  _QWORD *v167; // r15
  __int64 v168; // r12
  __int64 v169; // r13
  void *v170; // rdi
  size_t v171; // rsi
  unsigned __int8 v172; // al
  __int64 v173; // rdx
  __int64 v174; // rax
  __int64 v175; // rbx
  __int64 v176; // rax
  __int64 v177; // rdi
  unsigned __int64 v178; // rcx
  unsigned __int64 v179; // rdx
  char v180; // bp
  __int64 v181; // r12
  unsigned __int8 v182; // al
  __int64 v183; // rdx
  _QWORD *v184; // r14
  __int64 v185; // r12
  _BYTE *v186; // rsi
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 (__fastcall **v189)(); // rax
  __int64 (__fastcall *v190)(); // rsi
  char **v192; // rdi
  char **v193; // rdi
  char **v194; // rdx
  __int64 v195; // [rsp+0h] [rbp-3D8h]
  unsigned __int64 v196; // [rsp+0h] [rbp-3D8h]
  unsigned __int64 v197; // [rsp+0h] [rbp-3D8h]
  _QWORD *v198; // [rsp+8h] [rbp-3D0h]
  _QWORD *v199; // [rsp+10h] [rbp-3C8h] BYREF
  __int128 v200; // [rsp+18h] [rbp-3C0h]
  unsigned __int64 v201; // [rsp+28h] [rbp-3B0h]
  __m128 v202; // [rsp+30h] [rbp-3A8h] BYREF
  unsigned __int64 v203; // [rsp+40h] [rbp-398h]
  __int64 v204; // [rsp+50h] [rbp-388h]
  _QWORD *v205; // [rsp+58h] [rbp-380h]
  __int128 v206; // [rsp+60h] [rbp-378h] BYREF
  _BYTE v207[24]; // [rsp+70h] [rbp-368h]
  unsigned __int64 v208; // [rsp+88h] [rbp-350h] BYREF
  __int64 v209; // [rsp+90h] [rbp-348h]
  unsigned __int64 v210; // [rsp+98h] [rbp-340h]
  unsigned int v211; // [rsp+A4h] [rbp-334h]
  _BYTE *v212; // [rsp+A8h] [rbp-330h]
  __int64 v213; // [rsp+B0h] [rbp-328h]
  __int64 v214; // [rsp+B8h] [rbp-320h] BYREF
  size_t v215[2]; // [rsp+C0h] [rbp-318h]
  _QWORD *v216; // [rsp+D0h] [rbp-308h]
  unsigned __int64 v217; // [rsp+D8h] [rbp-300h]
  __int64 v218; // [rsp+E0h] [rbp-2F8h]
  char v219; // [rsp+E8h] [rbp-2F0h] BYREF
  unsigned __int64 v220; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v221; // [rsp+F8h] [rbp-2E0h]
  unsigned __int64 v222; // [rsp+100h] [rbp-2D8h]
  float v223; // [rsp+108h] [rbp-2D0h]
  float v224; // [rsp+10Ch] [rbp-2CCh]
  _QWORD *v225; // [rsp+110h] [rbp-2C8h]
  unsigned __int64 v226; // [rsp+118h] [rbp-2C0h]
  __m128 v227; // [rsp+120h] [rbp-2B8h]
  unsigned __int64 v228; // [rsp+130h] [rbp-2A8h]
  __int64 v229; // [rsp+138h] [rbp-2A0h]
  __int64 v230; // [rsp+140h] [rbp-298h]
  size_t v231; // [rsp+148h] [rbp-290h] BYREF
  __int64 v232; // [rsp+150h] [rbp-288h]
  __int128 v233; // [rsp+158h] [rbp-280h]
  __int64 v234; // [rsp+168h] [rbp-270h]
  __int64 *v235; // [rsp+170h] [rbp-268h]
  __int64 (__fastcall **v236)(); // [rsp+178h] [rbp-260h]
  char **v237; // [rsp+180h] [rbp-258h]
  char **v238; // [rsp+188h] [rbp-250h]
  unsigned __int64 v239; // [rsp+190h] [rbp-248h]
  __int64 v240; // [rsp+198h] [rbp-240h]
  void *v241[2]; // [rsp+1A0h] [rbp-238h] BYREF
  size_t v242; // [rsp+1B0h] [rbp-228h] BYREF
  _QWORD *v243; // [rsp+1B8h] [rbp-220h]
  __int128 v244; // [rsp+1C0h] [rbp-218h]
  __int128 v245; // [rsp+1D0h] [rbp-208h]
  __int128 v246; // [rsp+1E0h] [rbp-1F8h]
  __int64 v247; // [rsp+1F0h] [rbp-1E8h]
  __m128 v248; // [rsp+200h] [rbp-1D8h]
  __int64 v249; // [rsp+218h] [rbp-1C0h] BYREF
  __int64 v250; // [rsp+220h] [rbp-1B8h]
  __int64 v251; // [rsp+228h] [rbp-1B0h]
  __int64 v252; // [rsp+230h] [rbp-1A8h]
  _DWORD v253[2]; // [rsp+238h] [rbp-1A0h] BYREF
  __int64 v254; // [rsp+240h] [rbp-198h]
  __int64 v255; // [rsp+248h] [rbp-190h] BYREF
  __int128 v256; // [rsp+250h] [rbp-188h]
  size_t v257; // [rsp+260h] [rbp-178h]
  __int128 v258; // [rsp+268h] [rbp-170h]
  __int128 v259; // [rsp+278h] [rbp-160h]
  __int128 n; // [rsp+288h] [rbp-150h]
  __int128 v261; // [rsp+298h] [rbp-140h]
  __int128 v262; // [rsp+2A8h] [rbp-130h]
  _QWORD v263[10]; // [rsp+2B8h] [rbp-120h] BYREF
  char v264; // [rsp+308h] [rbp-D0h]
  __int128 v265; // [rsp+310h] [rbp-C8h]
  __int64 v266; // [rsp+320h] [rbp-B8h] BYREF
  __int128 v267; // [rsp+328h] [rbp-B0h]
  size_t v268; // [rsp+338h] [rbp-A0h]
  __int128 v269; // [rsp+340h] [rbp-98h]
  __int128 v270; // [rsp+350h] [rbp-88h]
  __int128 v271; // [rsp+360h] [rbp-78h]
  __int128 v272; // [rsp+370h] [rbp-68h]
  __int128 v273; // [rsp+380h] [rbp-58h]

  v212 = a3;
  if ( a2 == 1 && *a1 == 45 )
  {
    v5 = std::io::stdio::stdin();
    v6 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v7 = v6;
    *v6 = v5;
    v8 = (__int64 (__fastcall **)())&unk_1145C0;
  }
  else
  {
    v214 = 0x1B600000000LL;
    LODWORD(v215[0]) = 1;
    WORD2(v215[0]) = 0;
    std::fs::OpenOptions::_open(v253, &v214, a1, a2);
    if ( v253[0] )
    {
      v9 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
             v254,
             a1,
             a2);
      if ( v9 )
        return v9;
      v10 = &anon_295321c1b9ac16da4afd3a0029311bec_9_llvm_7620956122088650080;
    }
    else
    {
      LODWORD(v10) = v253[1];
    }
    v11 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
    v7 = v11;
    if ( !v11 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v11 = (_DWORD)v10;
    v8 = &off_114568;
  }
  *(_QWORD *)&v206 = v7;
  *((_QWORD *)&v206 + 1) = v8;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v214, 0x2000LL, 0LL);
  if ( v214 )
    alloc::raw_vec::handle_error(v215[0], v215[1]);
  if ( !v215[1] )
    core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
  v231 = v215[1];
  v232 = 0x2000LL;
  v233 = 0LL;
  v234 = 0LL;
  v235 = v7;
  v236 = v8;
  v263[0] = 0x8000000000000002LL;
  v263[7] = v212;
  v263[8] = &v231;
  v263[9] = v212;
  v264 = 1;
  v237 = &off_1141F8;
  v238 = &off_114258;
  v198 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v263;
      <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v266, v263);
      if ( v266 == 0x8000000000000000LL )
        break;
      if ( v266 == 0x8000000000000001LL )
      {
        if ( v263[0] != 0x8000000000000002LL )
          core::ptr::drop_in_place<core::option::Option<uu_fmt::parasplit::Line>>(v263);
        v188 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a4);
        if ( v188 || (v188 = <std::io::stdio::Stdout as std::io::Write>::flush(a4 + 4)) != 0 )
        {
          v9 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v188);
          if ( v9 )
            goto LABEL_305;
        }
        if ( v232 )
          _rust_dealloc(v231, v232, 1LL);
        v189 = v236;
        if ( *v236 )
        {
          ((void (__fastcall *)(__int64 *))*v236)(v235);
          v189 = v236;
        }
        v190 = v189[1];
        v9 = 0LL;
        if ( v190 )
          goto LABEL_310;
        return v9;
      }
      v255 = v266;
      v257 = v268;
      v256 = v267;
      v262 = v273;
      v261 = v272;
      n = v271;
      v259 = v270;
      v258 = v269;
      v13 = *((_QWORD *)&v272 + 1);
      *(_QWORD *)&v207[8] = v212;
      *(_QWORD *)&v207[16] = &v255;
      *(_QWORD *)&v206 = 0LL;
      *((_QWORD *)&v206 + 1) = 8LL;
      *(_QWORD *)v207 = 0LL;
      uu_fmt::parasplit::ParaWords::create_words(&v206);
      v247 = *(_QWORD *)&v207[16];
      v246 = *(_OWORD *)v207;
      v245 = v206;
      v16 = *((_QWORD *)&v206 + 1);
      if ( !*((_QWORD *)&v206 + 1) )
        goto LABEL_322;
      if ( (BYTE8(v206) & 7) != 0 )
        goto LABEL_322;
      v17 = v246;
      if ( (unsigned __int64)v246 >> 57 )
        goto LABEL_322;
      if ( !(_QWORD)v246 )
      {
        v39 = *((_QWORD *)&v206 + 1);
        v40 = a4[2];
        if ( (unsigned __int64)(*a4 - v40) <= 1 )
        {
          v42 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, asc_1F8E5, 1LL);
        }
        else
        {
          v41 = (_BYTE *)(a4[1] + v40);
          core::intrinsics::copy_nonoverlapping::precondition_check(asc_1F8E5, v41, 1LL, 1LL, 1LL);
          *v41 = 10;
          a4[2] = v40 + 1;
          v42 = 0LL;
        }
        v16 = v39;
LABEL_49:
        if ( !(_QWORD)v245 )
          goto LABEL_281;
        if ( (unsigned __int64)v245 > 0x3FFFFFFFFFFFFFFLL )
          goto LABEL_324;
        v52 = (_QWORD)v245 << 6;
        *(_QWORD *)&v206 = v16;
        goto LABEL_280;
      }
      v18 = *(_QWORD *)(*((_QWORD *)&v206 + 1) + 40LL);
      v19 = (v212[72] & 1) == 0;
      v204 = *((_QWORD *)&v206 + 1);
      v195 = v13;
      if ( !v19 || (v212[73] & 1) != 0 )
      {
        v35 = v258;
        core::slice::raw::from_raw_parts::precondition_check(v258, 1LL, 1LL, *((_QWORD *)&v258 + 1));
        v36 = a4[2];
        if ( (unsigned __int64)(*a4 - v36) <= *((_QWORD *)&v35 + 1) )
        {
          v12 = (_QWORD *)v35;
          v43 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, v35, *((_QWORD *)&v35 + 1));
          v16 = v204;
          v42 = v43;
          if ( v43 )
            goto LABEL_49;
          v25 = *((_QWORD *)&n + 1);
        }
        else
        {
          v37 = (void *)(v36 + v198[1]);
          core::intrinsics::copy_nonoverlapping::precondition_check(v35, v37, 1LL, 1LL, *((_QWORD *)&v35 + 1));
          v38 = v37;
          a4 = v198;
          v12 = (_QWORD *)v35;
          memcpy(v38, (const void *)v35, *((size_t *)&v35 + 1));
          v198[2] = *((_QWORD *)&v35 + 1) + v36;
          v16 = v204;
          v25 = *((_QWORD *)&n + 1);
        }
      }
      else if ( (BYTE8(v262) & 1) != 0 )
      {
        v25 = 0LL;
      }
      else
      {
        v20 = (_QWORD *)*((_QWORD *)&v259 + 1);
        v21 = n;
        core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v259 + 1), 1LL, 1LL, n);
        v22 = a4[2];
        if ( *a4 - v22 <= v21 )
        {
          v12 = v20;
          v176 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, v20, v21);
          v16 = v204;
          v42 = v176;
          v25 = v195;
          if ( v42 )
            goto LABEL_49;
        }
        else
        {
          v23 = (void *)(v22 + v198[1]);
          core::intrinsics::copy_nonoverlapping::precondition_check(v20, v23, 1LL, 1LL, v21);
          v24 = v23;
          a4 = v198;
          v12 = v20;
          memcpy(v24, v20, v21);
          v198[2] = v21 + v22;
          v25 = v195;
          v16 = v204;
        }
      }
      v44 = __CFADD__(v25, v18);
      v45 = v25 + v18;
      if ( v44 )
        core::panicking::panic_const::panic_const_add_overflow(&off_114138, v12, v14, v15);
      v46 = *(const void **)(v16 + 16);
      v47 = *(_QWORD *)(v16 + 24);
      v48 = a4[2];
      if ( *a4 - v48 <= v47 )
      {
        v51 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, v46, v47);
        v16 = v204;
        v42 = v51;
        if ( v51 )
          goto LABEL_49;
      }
      else
      {
        v49 = (void *)(v48 + v198[1]);
        core::intrinsics::copy_nonoverlapping::precondition_check(v46, v49, 1LL, 1LL, v47);
        v50 = v49;
        a4 = v198;
        memcpy(v50, v46, v47);
        v198[2] = v47 + v48;
        v16 = v204;
      }
      v53 = 1;
      if ( (BYTE8(v262) & 1) == 0 )
        v53 = v212[78] & 1;
      if ( !*((_QWORD *)&v259 + 1) || (__int64)n < 0 )
        goto LABEL_322;
      v54 = v17 << 6;
      v55 = v16 + 64;
      v214 = (__int64)v212;
      v217 = v45;
      v215[0] = *((_QWORD *)&v259 + 1);
      v215[1] = n;
      v218 = v195;
      v219 = v53;
      v216 = a4;
      if ( ((v212[79] | BYTE8(v262)) & 1) == 0 )
      {
        v56 = v54 + v16;
        v249 = v55;
        v250 = v56;
        v57 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 40LL, 0LL);
        if ( !v57 )
          alloc::alloc::handle_alloc_error(8LL, 40LL);
        if ( (v57 & 7) != 0 )
        {
          v194 = &off_1141C8;
        }
        else
        {
          v58 = v217;
          *(_OWORD *)v57 = 0LL;
          *(_QWORD *)(v57 + 16) = 0LL;
          *(_QWORD *)(v57 + 24) = v58;
          *(_DWORD *)(v57 + 32) = 0;
          *(_WORD *)(v57 + 36) = 0;
          v208 = 1LL;
          v209 = v57;
          v210 = 1LL;
          v59 = (_QWORD *)&byte_8;
          v57 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
          if ( !v57 )
            alloc::alloc::handle_alloc_error(8LL, 8LL);
          if ( (v57 & 7) == 0 )
          {
            *(_QWORD *)v57 = 0LL;
            v227.m128_u64[0] = 1LL;
            v227.m128_u64[1] = v57;
            v228 = 1LL;
            v202.m128_u64[0] = 0LL;
            v202.m128_u64[1] = 8LL;
            v203 = 0LL;
            v62 = *(_QWORD *)(v214 + 48);
            v63 = *(_QWORD *)(v214 + 56);
            v44 = v62 < v63;
            v64 = v62 - v63;
            if ( !v44 )
            {
              v65 = v64 + 1;
              if ( v64 == -1 )
                core::panicking::panic_const::panic_const_add_overflow(&off_114210, 8LL, v65, -1LL);
              if ( v63 > v65 )
                v65 = *(_QWORD *)(v214 + 56);
              v44 = v65 < v64;
              v60 = v65 - v64;
              v239 = v60;
              if ( !v44 )
              {
                v66 = v64;
                v220 = 0LL;
                v221 = 8LL;
                v222 = 0LL;
                v226 = v64;
                if ( v64 < 0 )
                {
                  v66 = v226;
                  v67 = (float)(int)((v226 >> 1) | v226 & 1) + (float)(int)((v226 >> 1) | v226 & 1);
                }
                else
                {
                  v67 = (float)(int)v64;
                }
                v224 = v67;
                v73 = v66 - 1;
                v74 = 0LL;
                if ( v73 < 0 )
                  v75 = (float)(int)(((unsigned __int64)v73 >> 1) | v73 & 1)
                      + (float)(int)(((unsigned __int64)v73 >> 1) | v73 & 1);
                else
                  v75 = (float)(int)v73;
                v223 = v75;
                v76 = 1;
                v230 = 0LL;
                v77 = 0;
                v204 = v56;
                while ( 2 )
                {
                  if ( (v76 & 1) != 0 )
                  {
                    if ( v55 == v56 || (v61 = v55 + 64, (v59 = (_QWORD *)v55) == 0LL) )
                    {
LABEL_191:
                      v148 = v209;
                      if ( v209 )
                      {
                        if ( (v209 & 7) == 0 )
                        {
                          v197 = v210;
                          if ( v210 <= 0x333333333333333LL )
                          {
                            v149 = (_QWORD *)v227.m128_u64[1];
                            if ( !v227.m128_u64[1] || (v227.m128_i8[8] & 7) != 0 || v228 > 0xFFFFFFFFFFFFFFFLL )
LABEL_323:
                              core::panicking::panic_nounwind(
                                anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788,
                                162LL);
                            v199 = (_QWORD *)v227.m128_u64[1];
                            *(_QWORD *)&v200 = v227.m128_u64[1] + 8 * v228;
                            *((_QWORD *)&v200 + 1) = v209;
                            v201 = v210;
                            core::iter::traits::iterator::Iterator::reduce(&v199, v59, v60, 0xFFFFFFFFFFFFFFFLL, v61);
                            if ( !v150 )
                              goto LABEL_205;
                            v151 = *v150;
                            v199 = 0LL;
                            v200 = 8uLL;
                            if ( v151 >= v197 )
LABEL_321:
                              core::panicking::panic_bounds_check(
                                v151,
                                v197,
                                &anon_6de62410172ed548f47511db1f84ebf1_64_llvm_6488061759137378937);
                            v205 = v149;
                            v152 = 1LL;
                            v153 = 8LL;
                            while ( 1 )
                            {
                              v155 = *(_QWORD *)(v148 + 40 * v151 + 8);
                              if ( !v155 )
                                break;
                              v156 = v148 + 40 * v151;
                              v157 = *(_BYTE *)(v156 + 36);
                              if ( (_QWORD *)(v152 - 1) == v199 )
                                alloc::raw_vec::RawVec<T,A>::grow_one(&v199);
                              v154 = v200;
                              *(_QWORD *)(v200 + v153 - 8) = v155;
                              *(_BYTE *)(v154 + v153) = v157 & 1;
                              *((_QWORD *)&v200 + 1) = v152;
                              v151 = *(_QWORD *)v156;
                              ++v152;
                              v153 += 16LL;
                              if ( *(_QWORD *)v156 >= v197 )
                                goto LABEL_321;
                            }
                            v158 = (unsigned __int64)v199;
                            v265 = v200;
                            v149 = v205;
                            if ( v199 != (_QWORD *)0x8000000000000000LL )
                            {
                              v243 = v199;
                              v244 = v265;
                            }
                            else
                            {
LABEL_205:
                              v243 = 0LL;
                              v244 = 8uLL;
                              v158 = 0LL;
                            }
                            if ( !v220 )
                            {
                              v160 = 1LL;
                              v159 = 0LL;
                              goto LABEL_212;
                            }
                            if ( v220 > 0x666666666666666LL )
                              goto LABEL_324;
                            v159 = 40 * v220;
                            v199 = (_QWORD *)v221;
                            *(_QWORD *)&v200 = 8LL;
                            v160 = 2LL;
LABEL_212:
                            (&v199)[v160] = (_QWORD *)v159;
                            if ( (_QWORD)v200 && *((_QWORD *)&v200 + 1) )
                              _rust_dealloc(v199, *((_QWORD *)&v200 + 1), v200);
                            if ( !v202.m128_u64[0] )
                            {
                              v162 = 1LL;
                              v161 = 0LL;
                              goto LABEL_219;
                            }
                            if ( v202.m128_u64[0] > 0x1FFFFFFFFFFFFFFFLL )
                              goto LABEL_334;
                            v161 = 8 * v202.m128_u64[0];
                            v199 = (_QWORD *)v202.m128_u64[1];
                            *(_QWORD *)&v200 = 8LL;
                            v162 = 2LL;
LABEL_219:
                            (&v199)[v162] = (_QWORD *)v161;
                            if ( (_QWORD)v200 && *((_QWORD *)&v200 + 1) )
                              _rust_dealloc(v199, *((_QWORD *)&v200 + 1), v200);
                            if ( !v227.m128_u64[0] )
                            {
                              v164 = 1LL;
                              v163 = 0LL;
                              goto LABEL_226;
                            }
                            if ( v227.m128_u64[0] > 0x1FFFFFFFFFFFFFFFLL )
LABEL_334:
                              core::panicking::panic_nounwind(
                                anon_6c54eb1e7b215b8ed1966ba3419445bf_7_llvm_11417008648433573330,
                                69LL);
                            v163 = 8 * v227.m128_u64[0];
                            v199 = v149;
                            *(_QWORD *)&v200 = 8LL;
                            v164 = 2LL;
LABEL_226:
                            (&v199)[v164] = (_QWORD *)v163;
                            if ( (_QWORD)v200 && *((_QWORD *)&v200 + 1) )
                              _rust_dealloc(v199, *((_QWORD *)&v200 + 1), v200);
                            if ( !v208 )
                            {
                              v166 = 1LL;
                              v165 = 0LL;
                              goto LABEL_233;
                            }
                            if ( v208 > 0x666666666666666LL )
                              goto LABEL_324;
                            v165 = 40 * v208;
                            v199 = (_QWORD *)v209;
                            *(_QWORD *)&v200 = 8LL;
                            v166 = 2LL;
LABEL_233:
                            (&v199)[v166] = (_QWORD *)v165;
                            if ( (_QWORD)v200 && *((_QWORD *)&v200 + 1) )
                              _rust_dealloc(v199, *((_QWORD *)&v200 + 1), v200);
                            v167 = (_QWORD *)v244;
                            if ( (_QWORD)v244 )
                            {
                              if ( (v244 & 7) == 0 && !(*((_QWORD *)&v244 + 1) >> 59) )
                              {
                                v220 = v244;
                                v221 = v244 + 16LL * *((_QWORD *)&v244 + 1);
                                v206 = *(_OWORD *)v215;
                                *(_QWORD *)v207 = &v219;
                                *(_QWORD *)&v207[8] = v216;
                                *(_QWORD *)&v207[16] = &v249;
                                core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(
                                  &v202,
                                  &v220,
                                  0LL,
                                  0LL,
                                  &v206);
                                if ( (v202.m128_i8[0] & 1) != 0 )
                                {
                                  v42 = v202.m128_i64[1];
                                  goto LABEL_247;
                                }
                                v168 = v249;
                                if ( !v249 )
                                  goto LABEL_270;
                                v169 = v250;
                                if ( v249 == v250 )
                                  goto LABEL_270;
                                if ( (v202.m128_i8[2] & 1) == 0 )
                                {
                                  v170 = *(void **)(v249 + 16);
                                  v171 = *(_QWORD *)(v249 + 24);
                                  v172 = *(_BYTE *)(v249 + 58);
                                  v173 = ((*(_BYTE *)(v249 + 56) | (unsigned __int8)(v202.m128_i8[1] & v172)) & 1) + 1LL;
                                  if ( ((v172 | (unsigned __int8)v219) & 1) == 0 )
                                    v173 = 0LL;
LABEL_263:
                                  v180 = *(_BYTE *)(v168 + 57);
                                  v42 = uu_fmt::linebreak::write_with_spaces(v170, v171, v173, v216);
                                  if ( !v42 )
                                  {
                                    v181 = v168 + 64;
                                    while ( v181 != v169 )
                                    {
                                      v182 = *(_BYTE *)(v181 + 58);
                                      v183 = ((*(_BYTE *)(v181 + 56) | (unsigned __int8)(v182 & v180)) & 1) + 1LL;
                                      if ( ((v182 | (unsigned __int8)v219) & 1) == 0 )
                                        v183 = 0LL;
                                      v180 = *(_BYTE *)(v181 + 57);
                                      v42 = uu_fmt::linebreak::write_with_spaces(
                                              *(void **)(v181 + 16),
                                              *(_QWORD *)(v181 + 24),
                                              v183,
                                              v216);
                                      v181 += 64LL;
                                      if ( v42 )
                                        goto LABEL_247;
                                    }
LABEL_270:
                                    v184 = v216;
                                    v185 = v216[2];
                                    if ( (unsigned __int64)(*v216 - v185) > 1 )
                                    {
                                      v186 = (_BYTE *)(v185 + v216[1]);
                                      core::intrinsics::copy_nonoverlapping::precondition_check(
                                        asc_1F8E5,
                                        v186,
                                        1LL,
                                        1LL,
                                        1LL);
                                      *v186 = 10;
                                      v184[2] = v185 + 1;
                                      v42 = 0LL;
                                      a4 = v198;
                                      if ( v158 )
                                        goto LABEL_272;
LABEL_289:
                                      v174 = 1LL;
                                      v175 = 0LL;
LABEL_274:
                                      (&v199)[v174] = (_QWORD *)v175;
                                      if ( (_QWORD)v200 && *((_QWORD *)&v200 + 1) )
                                        _rust_dealloc(v199, *((_QWORD *)&v200 + 1), v200);
                                      goto LABEL_277;
                                    }
                                    a4 = v198;
                                    v42 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(
                                            v216,
                                            asc_1F8E5,
                                            1LL);
                                    if ( !v158 )
                                      goto LABEL_289;
LABEL_272:
                                    if ( v158 <= 0xFFFFFFFFFFFFFFFLL )
                                    {
LABEL_273:
                                      v175 = 16 * v158;
                                      v199 = v167;
                                      *(_QWORD *)&v200 = 8LL;
                                      v174 = 2LL;
                                      goto LABEL_274;
                                    }
LABEL_324:
                                    core::panicking::panic_nounwind(
                                      anon_295321c1b9ac16da4afd3a0029311bec_19_llvm_7620956122088650080,
                                      69LL);
                                  }
LABEL_247:
                                  if ( !v158 )
                                  {
                                    v174 = 1LL;
                                    v175 = 0LL;
                                    a4 = v198;
                                    goto LABEL_274;
                                  }
                                  a4 = v198;
                                  if ( v158 <= 0xFFFFFFFFFFFFFFFLL )
                                    goto LABEL_273;
                                  goto LABEL_324;
                                }
                                v42 = uu_fmt::linebreak::write_newline((void *)v215[0], v215[1], v216);
                                if ( v42 )
                                  goto LABEL_247;
                                v177 = *(_QWORD *)(v168 + 16);
                                v178 = *(_QWORD *)(v168 + 24);
                                v179 = *(_QWORD *)(v168 + 32);
                                if ( v179 )
                                {
                                  if ( v178 <= v179 )
                                  {
                                    if ( v178 != v179 )
                                      goto LABEL_349;
                                  }
                                  else if ( *(char *)(v177 + v179) < -64 )
                                  {
                                    goto LABEL_349;
                                  }
                                }
                                v171 = v178 - v179;
                                if ( v178 < v179 )
                                  core::panicking::panic_nounwind(
                                    anon_3b19d6da1157f8a5be874edba1fa8efa_12_llvm_3026733004089231496,
                                    102LL);
                                if ( v177 )
                                {
                                  v170 = (void *)(v179 + v177);
                                  v173 = 0LL;
                                  goto LABEL_263;
                                }
                                v177 = 0LL;
LABEL_349:
                                core::str::slice_error_fail(v177, *(_QWORD *)(v168 + 24), v179, v178, &off_114390);
                              }
                            }
                          }
                        }
                      }
LABEL_322:
                      core::panicking::panic_nounwind(
                        anon_295321c1b9ac16da4afd3a0029311bec_36_llvm_7620956122088650080,
                        162LL);
                    }
                  }
                  else
                  {
                    v61 = v55;
                    v59 = v225;
                    if ( !v225 )
                      goto LABEL_191;
                  }
                  LOBYTE(v60) = 1;
                  if ( v61 == v56 )
                  {
                    v55 = v56;
                    v225 = 0LL;
                  }
                  else
                  {
                    v55 = v61 + 64;
                    if ( (*(_BYTE *)(v61 + 56) & 1) == 0 )
                    {
                      if ( (*(_BYTE *)(v61 + 58) & 1) != 0 )
                      {
                        v60 = *((unsigned __int8 *)v59 + 57);
                        LOBYTE(v60) = v60 & 1;
                      }
                      else
                      {
                        v60 = 0LL;
                      }
                    }
                    v225 = (_QWORD *)v61;
                  }
                  v83 = 2LL - (v77 == 0);
                  if ( ((*((_BYTE *)v59 + 58) | (unsigned __int8)v219) & 1) == 0 )
                    v83 = 0LL;
                  v213 = v83;
                  if ( !v221
                    || (v221 & 7) != 0
                    || v222 > 0x333333333333333LL
                    || (v205 = v59, v222 = 0LL, !v202.m128_u64[1])
                    || (v202.m128_i8[8] & 7) != 0
                    || v203 > 0xFFFFFFFFFFFFFFFLL )
                  {
LABEL_314:
                    core::panicking::panic_nounwind(
                      anon_295321c1b9ac16da4afd3a0029311bec_37_llvm_7620956122088650080,
                      166LL);
                  }
                  v203 = 0LL;
                  v84 = (unsigned __int64 *)v227.m128_u64[1];
                  if ( !v227.m128_u64[1] || (v227.m128_i8[8] & 7) != 0 || v228 > 0xFFFFFFFFFFFFFFFLL )
                    goto LABEL_323;
                  if ( v228 )
                  {
                    v252 = v61;
                    v211 = v60;
                    v229 = v55;
                    v240 = v227.m128_u64[1] + 8 * v228;
                    v81 = 0x7FFFFFFFFFFFFFFFLL;
                    v196 = 0LL;
                    v85 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_112:
                    v251 = v85;
                    do
                    {
                      if ( !v209 )
                        goto LABEL_314;
                      if ( (v209 & 7) != 0 )
                        goto LABEL_314;
                      v59 = (_QWORD *)v210;
                      if ( v210 > 0x333333333333333LL )
                        goto LABEL_314;
                      v86 = *v84;
                      if ( v210 <= *v84 )
                        goto LABEL_327;
                      v60 = 5 * v86;
                      v87 = *(_QWORD *)(v209 + 40 * v86 + 16);
                      v88 = __OFSUB__(v87, v230);
                      v89 = v87 - v230;
                      if ( v88 )
                      {
                        v193 = &off_114270;
                        goto LABEL_316;
                      }
                      v90 = v209 + 40 * v86;
                      v91 = v89 < v81;
                      if ( v89 < v81 )
                        v81 = v89;
                      v92 = v196;
                      if ( v91 )
                        v92 = *v84;
                      v196 = v92;
                      *(_QWORD *)(v90 + 16) = v89;
                      v59 = v205;
                      v93 = v205[5];
                      v94 = uu_fmt::linebreak::BreakArgs::compute_width(
                              &v214,
                              v205,
                              *(_QWORD *)(v90 + 24),
                              *(_BYTE *)(v90 + 37) & 1);
                      v44 = __CFADD__(v94, v93);
                      v96 = v94 + v93;
                      if ( v44
                        || (v44 = __CFADD__(v213, v96), v97 = v213 + v96, v44)
                        || (v44 = __CFADD__(*(_QWORD *)(v90 + 24), v97), v98 = *(_QWORD *)(v90 + 24) + v97, v44) )
                      {
                        v192 = &off_114288;
                        goto LABEL_313;
                      }
                      if ( v98 <= *(_QWORD *)(v214 + 48) )
                      {
                        v99 = v203;
                        if ( v203 == v202.m128_u64[0] )
                          alloc::raw_vec::RawVec<T,A>::grow_one(&v202);
                        *(_QWORD *)(v202.m128_u64[1] + 8 * v99) = v86;
                        v203 = v99 + 1;
                        *(_BYTE *)(v90 + 37) = 0;
                        *(_QWORD *)(v90 + 24) = v98;
                        if ( v98 >= v239 )
                        {
                          if ( v252 == v204 )
                          {
                            v74 = 0LL;
                            v248 = 0LL;
                            v102 = 0LL;
                          }
                          else
                          {
                            v100 = *(_QWORD *)(v214 + 56);
                            v88 = __OFSUB__(v100, v98);
                            v101 = v100 - v98;
                            if ( v88 )
                            {
                              v193 = &off_1142A0;
                              goto LABEL_316;
                            }
                            if ( v101 )
                              v74.m128_f32[0] = (float)(int)v101 / v224;
                            else
                              v74 = 0LL;
                            v248 = v74;
                            v103 = 10000000LL;
                            if ( fabs(v74.m128_f32[0]) <= 1.0 )
                            {
                              v104 = fabs((float)(v248.m128_f32[0] * v248.m128_f32[0]) * v248.m128_f32[0]) * 100.0;
                              v103 = 0x7FFFFFFFFFFFFFFFLL;
                              if ( v104 <= 9.2233715e18 )
                                v103 = (unsigned int)(int)v104;
                            }
                            v105 = v226 - v205[5];
                            if ( v226 <= v205[5] )
                            {
                              v95 = 0LL;
                            }
                            else
                            {
                              if ( (__int64)(v226 - v205[5]) < 0 )
                                v106 = (float)(int)((v105 >> 1) | v105 & 1) + (float)(int)((v105 >> 1) | v105 & 1);
                              else
                                v106 = (float)(int)v105;
                              v107 = (float)((float)((float)(v106 / v223) * (float)(v106 / v223)) * (float)(v106 / v223))
                                   * 300.0;
                              v95 = 0x7FFFFFFFFFFFFFFFLL;
                              if ( v107 <= 9.2233715e18 )
                                v95 = (unsigned int)(int)v107;
                            }
                            v108 = v248;
                            v108.m128_f32[0] = (float)(v248.m128_f32[0] - *(float *)(v90 + 32)) * 0.5;
                            v109 = v108;
                            v109.m128_f32[0] = (float)(v108.m128_f32[0] * v108.m128_f32[0]) * v108.m128_f32[0];
                            v74 = _mm_and_ps(v109, (__m128)xmmword_16A40);
                            v74.m128_f32[0] = v74.m128_f32[0] * 600.0;
                            v60 = 0x7FFFFFFFFFFFFFFFLL;
                            if ( v74.m128_f32[0] <= 9.2233715e18 )
                              v60 = (unsigned int)(int)v74.m128_f32[0];
                            v88 = __OFADD__(1LL, v103);
                            v110 = v103 + 1;
                            if ( v88
                              || (v88 = __OFADD__(v95, v110), v111 = v95 + v110, v88)
                              || (v88 = __OFADD__(v60, v111), v112 = v60 + v111, v88) )
                            {
                              v192 = &off_114300;
                              goto LABEL_313;
                            }
                            v113 = v112;
                            v102 = v112 * v112;
                            if ( !is_mul_ok(v113, v113) )
                              core::panicking::panic_const::panic_const_mul_overflow(
                                &anon_295321c1b9ac16da4afd3a0029311bec_16_llvm_7620956122088650080,
                                v59,
                                v60);
                          }
                          v95 = *(_QWORD *)(v90 + 16);
                          v85 = v95 + v102;
                          if ( __OFADD__(v95, v102) )
                          {
                            v192 = &off_1142B8;
                            goto LABEL_313;
                          }
                          v114 = 0x5AF3107A3FFFLL;
                          if ( v102 <= 0x5AF3107A3FFFLL && v85 < v251 )
                          {
                            LOBYTE(v114) = v95 != 0;
                            v115 = v102 < 0;
                            v116 = v102 == 0;
                            LOBYTE(v59) = v115;
                            if ( v95 < 0 || (LOBYTE(v59) = v114 & v116 | v115, !(_BYTE)v59) )
                            {
                              v117 = v218;
                              v118 = v222;
                              if ( v222 == v220 )
                                alloc::raw_vec::RawVec<T,A>::grow_one(&v220, v59, v114);
                              ++v84;
                              v119 = v221;
                              v120 = 5 * v118;
                              *(_QWORD *)(v221 + 8 * v120) = v86;
                              *(_QWORD *)(v119 + 8 * v120 + 8) = v205;
                              *(_QWORD *)(v119 + 8 * v120 + 16) = v85;
                              *(_QWORD *)(v119 + 8 * v120 + 24) = v117;
                              v74 = v248;
                              *(_DWORD *)(v119 + 8 * v120 + 32) = v248.m128_i32[0];
                              *(_WORD *)(v119 + 8 * v120 + 36) = 256;
                              v121 = v118 + 1;
                              v222 = v121;
                              if ( v84 == (unsigned __int64 *)v240 )
                              {
                                if ( !v121 )
                                  goto LABEL_82;
                                goto LABEL_164;
                              }
                              goto LABEL_112;
                            }
                          }
                        }
                      }
                      ++v84;
                    }
                    while ( v84 != (unsigned __int64 *)v240 );
                    v121 = v222;
                    if ( !v222 )
                      goto LABEL_82;
LABEL_164:
                    v122 = v121 - 1;
                    v222 = v122;
                    if ( v122 >= v220 )
                      core::panicking::panic_nounwind(
                        anon_eb383e42050b34441b79b108c433df0c_15_llvm_15449580914761616774,
                        104LL);
                    v123 = *(_BYTE *)(v221 + 40 * v122 + 37);
                    if ( v123 != 2 )
                    {
                      v124 = v221 + 40 * v122;
                      v125 = *(_WORD *)(v124 + 38);
                      *(_QWORD *)&v207[13] = *(_QWORD *)(v124 + 29);
                      v126 = *(_OWORD *)v124;
                      *(_OWORD *)v207 = *(_OWORD *)(v124 + 16);
                      v206 = v126;
                      v127 = v210;
                      v128 = v203;
                      if ( v203 == v202.m128_u64[0] )
                        alloc::raw_vec::RawVec<T,A>::grow_one(&v202);
                      *(_QWORD *)(v202.m128_u64[1] + 8 * v128) = v127;
                      v203 = v128 + 1;
                      v129 = v210;
                      if ( v210 == v208 )
                        alloc::raw_vec::RawVec<T,A>::grow_one(&v208, v59, v124);
                      v78 = v209;
                      v79 = 5 * v129;
                      *(_QWORD *)(v209 + 8 * v79 + 29) = *(_QWORD *)&v207[13];
                      v80 = v206;
                      *(_OWORD *)(v78 + 8 * v79 + 16) = *(_OWORD *)v207;
                      *(_OWORD *)(v78 + 8 * v79) = v80;
                      *(_BYTE *)(v78 + 8 * v79 + 37) = v123;
                      *(_WORD *)(v78 + 8 * v79 + 38) = v125;
                      v210 = v129 + 1;
                    }
LABEL_82:
                    v55 = v229;
                    v60 = v211;
                    if ( v203 )
                    {
                      if ( v81 <= 0 )
                        v81 = 0LL;
                      v230 = v81;
LABEL_86:
                      v82 = v228;
                      v74 = v227;
                      v227 = v202;
                      v228 = v203;
                      v202 = v74;
                      v203 = v82;
                      v76 = 0;
                      v77 = v60;
                      v56 = v204;
                      continue;
                    }
                  }
                  else
                  {
                    v196 = 0LL;
                  }
                  break;
                }
                if ( !v209 )
                  goto LABEL_322;
                if ( (v209 & 7) != 0 )
                  goto LABEL_322;
                v59 = (_QWORD *)v210;
                if ( v210 > 0x333333333333333LL )
                  goto LABEL_322;
                v86 = v196;
                if ( v210 <= v196 )
                {
                  v238 = &off_114240;
LABEL_327:
                  core::panicking::panic_bounds_check(v86, v59, v238);
                }
                v130 = v60;
                v131 = v55;
                if ( (*(_BYTE *)(v209 + 40 * v196 + 37) & 1) != 0 )
                {
                  v140 = v218;
                }
                else
                {
                  v132 = v209 + 40 * v196;
                  v59 = v205;
                  v133 = v205[5];
                  v134 = uu_fmt::linebreak::BreakArgs::compute_width(&v214, v205, *(_QWORD *)(v132 + 24), 0);
                  v44 = __CFADD__(v134, v133);
                  v135 = v134 + v133;
                  if ( v44 )
                  {
                    v192 = &off_114318;
                    goto LABEL_313;
                  }
                  v95 = *(_QWORD *)(v132 + 24);
                  v136 = v239 - v95;
                  if ( __OFSUB__(v239, v95) )
                  {
                    v193 = &off_114330;
LABEL_316:
                    core::panicking::panic_const::panic_const_sub_overflow(v193, v59, v60);
                  }
                  v44 = __CFADD__(v213, v135);
                  v137 = v213 + v135;
                  if ( v44 )
                  {
                    v192 = &off_114348;
                    goto LABEL_313;
                  }
                  v44 = __CFADD__(v95, v137);
                  v138 = v95 + v137;
                  if ( v44 )
                  {
                    v192 = &off_114360;
                    goto LABEL_313;
                  }
                  v95 = v214;
                  v88 = __OFSUB__(v138, *(_QWORD *)(v214 + 48));
                  v139 = v138 - *(_QWORD *)(v214 + 48);
                  if ( v88 )
                  {
                    v193 = &off_114360;
                    goto LABEL_316;
                  }
                  v140 = v218;
                  if ( v139 > v136 )
                  {
                    v140 = v205[5] + v218;
                    if ( __CFADD__(v205[5], v218) )
                    {
                      v192 = &off_114378;
LABEL_313:
                      core::panicking::panic_const::panic_const_add_overflow(v192, v59, v60, v95);
                    }
                    v141 = 1;
                    v142 = 1065353216;
                    goto LABEL_186;
                  }
                }
                v141 = 0;
                v142 = -1082130432;
LABEL_186:
                LODWORD(v213) = v142;
                v143 = v210;
                v144 = v203;
                if ( v203 == v202.m128_u64[0] )
                  alloc::raw_vec::RawVec<T,A>::grow_one(&v202);
                *(_QWORD *)(v202.m128_u64[1] + 8 * v144) = v143;
                v203 = v144 + 1;
                v145 = v210;
                if ( v210 == v208 )
                  alloc::raw_vec::RawVec<T,A>::grow_one(&v208, v59, v60);
                v146 = v209;
                v147 = 5 * v145;
                *(_QWORD *)(v209 + 8 * v147) = v196;
                *(_QWORD *)(v146 + 8 * v147 + 8) = v205;
                *(_QWORD *)(v146 + 8 * v147 + 16) = 0LL;
                *(_QWORD *)(v146 + 8 * v147 + 24) = v140;
                *(_DWORD *)(v146 + 8 * v147 + 32) = v213;
                *(_BYTE *)(v146 + 8 * v147 + 36) = v141;
                *(_BYTE *)(v146 + 8 * v147 + 37) = v141 ^ 1;
                v210 = v145 + 1;
                v230 = 0LL;
                v55 = v131;
                v60 = v130;
                goto LABEL_86;
              }
              v237 = &off_114228;
            }
            core::panicking::panic_const::panic_const_sub_overflow(v237, 8LL, v60);
          }
          v194 = &off_1141E0;
        }
        core::panicking::panic_misaligned_pointer_dereference(8LL, v57, v194);
      }
      if ( v17 == 1 )
      {
        v68 = a4;
      }
      else
      {
        v69 = v54 - 64;
        v70 = 0;
        do
        {
          uu_fmt::linebreak::accum_words_simple((__int64)&v206, (__int64)&v214, v45, v70 != 0, v55);
          if ( BYTE8(v206) == 2 )
          {
            v42 = v206;
            goto LABEL_277;
          }
          v55 += 64LL;
          v45 = v206;
          v70 = BYTE8(v206) & 1;
          v69 -= 64LL;
        }
        while ( v69 );
        v68 = v216;
      }
      v71 = v68[2];
      if ( (unsigned __int64)(*v68 - v71) <= 1 )
      {
        v42 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v68, asc_1F8E5, 1LL);
      }
      else
      {
        v72 = (_BYTE *)(v68[1] + v71);
        core::intrinsics::copy_nonoverlapping::precondition_check(asc_1F8E5, v72, 1LL, 1LL, 1LL);
        *v72 = 10;
        v68[2] = v71 + 1;
        v42 = 0LL;
      }
LABEL_277:
      if ( !(_QWORD)v245 )
      {
LABEL_281:
        v187 = 8LL;
        v52 = 0LL;
        goto LABEL_282;
      }
      if ( (unsigned __int64)v245 > 0x3FFFFFFFFFFFFFFLL )
        goto LABEL_324;
      v52 = (_QWORD)v245 << 6;
      *(_QWORD *)&v206 = *((_QWORD *)&v245 + 1);
LABEL_280:
      *((_QWORD *)&v206 + 1) = 8LL;
      v187 = 16LL;
LABEL_282:
      *(_QWORD *)&v207[v187 - 16] = v52;
      if ( *((_QWORD *)&v206 + 1) && *(_QWORD *)v207 )
        _rust_dealloc(v206, *(_QWORD *)v207, *((_QWORD *)&v206 + 1));
      if ( v42 )
      {
        v9 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v42);
        if ( v9 )
        {
          core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(&v255);
          goto LABEL_303;
        }
      }
      core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(&v255);
    }
    *(_OWORD *)v241 = v267;
    v26 = v268;
    v242 = v268;
    v27 = (const void *)*((_QWORD *)&v267 + 1);
    core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v267 + 1), 1LL, 1LL, v268);
    v28 = a4[2];
    if ( *a4 - v28 > v26 )
    {
      v29 = (void *)(v28 + v198[1]);
      core::intrinsics::copy_nonoverlapping::precondition_check(v27, v29, 1LL, 1LL, v26);
      v30 = v29;
      a4 = v198;
      memcpy(v30, v27, v26);
      v198[2] = v26 + v28;
      goto LABEL_30;
    }
    v31 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, v27, v26);
    if ( v31 )
    {
      v9 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v31);
      if ( v9 )
        break;
    }
LABEL_30:
    v32 = a4[2];
    if ( (unsigned __int64)(*a4 - v32) <= 1 )
    {
      v34 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, asc_1F8E5, 1LL);
      if ( v34 )
      {
        v9 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v34);
        if ( v9 )
          break;
      }
    }
    else
    {
      v33 = a4[1];
      core::intrinsics::copy_nonoverlapping::precondition_check(asc_1F8E5, v33 + v32, 1LL, 1LL, 1LL);
      *(_BYTE *)(v33 + v32) = 10;
      a4[2] = v32 + 1;
    }
    alloc::raw_vec::RawVec<T,A>::current_memory(&v214, v241);
    if ( v215[0] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v242, v214, v215[0], v215[1]);
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v214, v241);
  if ( v215[0] )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v242, v214, v215[0], v215[1]);
LABEL_303:
  if ( v263[0] != 0x8000000000000002LL )
    core::ptr::drop_in_place<core::option::Option<uu_fmt::parasplit::Line>>(v263);
LABEL_305:
  if ( v232 )
    _rust_dealloc(v231, v232, 1LL);
  v189 = v236;
  if ( *v236 )
  {
    ((void (__fastcall *)(__int64 *))*v236)(v235);
    v189 = v236;
  }
  v190 = v189[1];
  if ( v190 )
LABEL_310:
    _rust_dealloc(v235, v190, v189[2]);
  return v9;
}
