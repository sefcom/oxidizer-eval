__int64 __fastcall alacritty::renderer::text::builtin_font::box_drawing(
        __int64 a1,
        unsigned int a2,
        double *a3,
        char a4,
        char a5,
        double a6,
        __m128 a7)
{
  signed int v10; // r12d
  __m128 v11; // xmm0
  signed int v12; // eax
  unsigned __int64 v13; // rbx
  signed int v14; // r12d
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // r13
  float v19; // xmm0_4
  unsigned int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r15
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm0_4
  int v28; // ecx
  int v29; // ebx
  int v30; // r12d
  float v31; // xmm1_4
  __int64 v32; // r14
  float v33; // xmm0_4
  float v34; // xmm2_4
  unsigned int v35; // edi
  __int16 *v36; // rcx
  __int64 result; // rax
  __int64 v38; // rdx
  int v39; // esi
  int v40; // r12d
  float v41; // xmm0_4
  __int64 v42; // rdx
  __int64 v43; // r14
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rbp
  float v48; // xmm0_4
  float v49; // xmm0_4
  __int64 v50; // rbp
  double v51; // xmm0_8
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rsi
  __int64 v55; // rbp
  unsigned int v56; // eax
  unsigned __int64 v57; // rbx
  __int64 v58; // r14
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // r12
  float v63; // xmm0_4
  float v64; // xmm0_4
  __int64 v65; // r12
  double v66; // xmm1_8
  __int64 v67; // rdx
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // r13
  float v71; // xmm0_4
  float v72; // xmm0_4
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // r9
  unsigned __int64 v78; // r12
  __int16 *v79; // rbp
  __int64 v80; // rsi
  __int64 v81; // rax
  unsigned __int64 v82; // r13
  unsigned __int64 v83; // rcx
  __int64 v84; // rcx
  __int16 *v85; // rsi
  __int64 v86; // r14
  __int16 *v87; // rbx
  unsigned __int64 v88; // r15
  float v89; // xmm0_4
  float v90; // xmm0_4
  __int64 v91; // rcx
  __int64 v92; // rax
  char v93; // bp
  __int64 v94; // rcx
  unsigned __int64 v95; // rdx
  __int16 *v96; // rdi
  __int16 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rbp
  __int64 v100; // r13
  __int64 v101; // r14
  __int64 v102; // rdx
  __int64 v103; // r12
  unsigned __int64 v104; // rbp
  __int64 v105; // rbx
  unsigned __int64 v106; // r15
  __int64 v107; // r15
  __m128d si128; // xmm0
  __m128 v109; // xmm2
  __m128 v110; // xmm1
  __m128 v111; // xmm3
  unsigned int v112; // eax
  __int64 v113; // r14
  __int64 v114; // r13
  __int64 v115; // r12
  float v116; // xmm0_4
  float v117; // xmm0_4
  float v118; // xmm2_4
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 v122; // rsi
  int v123; // eax
  __int64 v124; // rdi
  __int64 v125; // rsi
  int v126; // r13d
  int v127; // r12d
  float v128; // xmm0_4
  float v129; // xmm0_4
  unsigned __int64 v130; // rcx
  __int64 v131; // rdi
  __int64 v132; // rsi
  double v133; // xmm0_8
  __int64 v134; // rbx
  unsigned int v135; // eax
  int v136; // ecx
  float v137; // xmm0_4
  float v138; // xmm0_4
  double v139; // xmm1_8
  float v140; // xmm0_4
  unsigned __int64 v141; // rcx
  float v142; // xmm0_4
  float v143; // xmm0_4
  float v144; // xmm0_4
  __m128 v145; // xmm0
  __m128 v146; // xmm0
  __m128 v147; // xmm2
  __m128 v148; // xmm2
  __m128 v149; // xmm0
  __m128 v150; // xmm0
  __m128 v151; // xmm1
  __m128 v152; // xmm0
  __m128 v153; // xmm1
  __m128 v154; // xmm2
  __m128 v155; // xmm1
  __m128 v156; // xmm0
  float v157; // xmm0_4
  __m128 v158; // xmm0
  __m128 v159; // xmm0
  __m128 v160; // xmm2
  __m128 v161; // xmm1
  __m128 v162; // xmm2
  __m128 v163; // xmm0
  __m128 v164; // xmm0
  __m128 v165; // xmm2
  __m128 v166; // xmm1
  __m128 v167; // xmm2
  __m128 v168; // xmm0
  __m128 v169; // xmm0
  __m128 v170; // xmm0
  __m128 v171; // xmm1
  __m128 v172; // xmm0
  unsigned __int64 v173; // rbx
  float v174; // xmm0_4
  __m128 v175; // xmm0
  __m128 v176; // xmm0
  __m128 v177; // xmm2
  __m128 v178; // xmm1
  __m128 v179; // xmm2
  __m128i v180; // xmm2
  __m128i v181; // xmm3
  __int32 v182; // xmm0_4
  int v183; // eax
  __int32 v184; // xmm0_4
  int v185; // ecx
  double v186; // xmm0_8
  __int32 v187; // xmm0_4
  double v188; // xmm2_8
  double v189; // xmm3_8
  __int64 v190; // rax
  unsigned __int64 v191; // rax
  __int64 v192; // rcx
  __int32 v193; // xmm1_4
  __int32 v194; // xmm1_4
  unsigned __int64 v195; // rax
  __int32 v196; // xmm0_4
  __int32 v197; // xmm4_4
  __int64 v198; // rcx
  __m128 v199; // xmm0
  unsigned __int64 v200; // rax
  __int64 v201; // rcx
  __int32 v202; // xmm0_4
  __m128i v203; // xmm0
  unsigned __int64 v204; // rax
  __int64 v205; // rcx
  __int32 v206; // xmm0_4
  float v207; // xmm0_4
  float v208; // xmm0_4
  int v209; // edi
  int v210; // eax
  int v211; // edi
  float v212; // xmm0_4
  __int64 v213; // rdi
  float v214; // xmm0_4
  float v215; // xmm0_4
  int v216; // edi
  int v217; // eax
  int v218; // edi
  float v219; // xmm0_4
  float v220; // xmm0_4
  float v221; // xmm0_4
  float v222; // xmm0_4
  float v223; // xmm0_4
  float v224; // xmm0_4
  unsigned int v225; // ecx
  float v226; // xmm0_4
  __int32 v227; // xmm0_4
  float v228; // xmm0_4
  float v229; // xmm0_4
  int v230; // ecx
  __int16 *v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // rsi
  int v234; // r8d
  int v235; // edi
  float v236; // xmm0_4
  float v237; // xmm0_4
  float v238; // xmm0_4
  float v239; // xmm0_4
  float v240; // xmm0_4
  char **v241; // rax
  float v243; // [rsp+8h] [rbp-160h]
  float v244; // [rsp+8h] [rbp-160h]
  unsigned int v245; // [rsp+8h] [rbp-160h]
  __m128 v246; // [rsp+10h] [rbp-158h] BYREF
  __m128 v247; // [rsp+20h] [rbp-148h]
  signed int v248; // [rsp+3Ch] [rbp-12Ch]
  __m128 v249; // [rsp+40h] [rbp-128h] BYREF
  __int64 v250; // [rsp+50h] [rbp-118h]
  char **v251; // [rsp+58h] [rbp-110h]
  __int64 v252; // [rsp+60h] [rbp-108h]
  __int64 v253; // [rsp+68h] [rbp-100h]
  __int64 v254; // [rsp+70h] [rbp-F8h]
  __int64 v255; // [rsp+78h] [rbp-F0h]
  float v256; // [rsp+84h] [rbp-E4h]
  float v257; // [rsp+88h] [rbp-E0h]
  int v258; // [rsp+8Ch] [rbp-DCh]
  __int16 *v259; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v260; // [rsp+98h] [rbp-D0h]
  unsigned __int64 v261; // [rsp+A0h] [rbp-C8h]
  __int32 v262; // [rsp+A8h] [rbp-C0h]
  unsigned int v263; // [rsp+ACh] [rbp-BCh]
  __m128i v264; // [rsp+B0h] [rbp-B8h]
  __int64 v265; // [rsp+C8h] [rbp-A0h]
  unsigned __int64 v266; // [rsp+D0h] [rbp-98h]
  __int64 v267; // [rsp+D8h] [rbp-90h] BYREF
  __int16 *v268; // [rsp+E0h] [rbp-88h]
  __int64 v269; // [rsp+E8h] [rbp-80h]
  __int64 v270; // [rsp+F0h] [rbp-78h]
  __int64 v271; // [rsp+F8h] [rbp-70h]
  float *v272; // [rsp+100h] [rbp-68h]
  float v273; // [rsp+10Ch] [rbp-5Ch]
  __int64 *v274; // [rsp+110h] [rbp-58h]
  float v275; // [rsp+11Ch] [rbp-4Ch]
  __int64 v276; // [rsp+120h] [rbp-48h] BYREF
  __int64 v277; // [rsp+128h] [rbp-40h]
  char v278; // [rsp+130h] [rbp-38h]

  v10 = core::cmp::Ord::max((unsigned int)((int)fmin(fmax(a3[1], -2147483648.0), 2147483647.0) + a5), 1LL);
  v272 = (float *)a3;
  v11 = (__m128)*(unsigned __int64 *)a3;
  *(double *)v11.m128_u64 = fmin(fmax(*(double *)v11.m128_u64, -2147483648.0), 2147483647.0);
  v12 = core::cmp::Ord::max((unsigned int)((int)*(double *)v11.m128_u64 + a4), 1LL);
  v248 = v10;
  v13 = v10;
  v14 = v12;
  v15 = v12;
  v16 = alacritty::renderer::text::builtin_font::calculate_stroke_size(v12);
  v17 = 2 * v16;
  v254 = a2;
  v261 = v13;
  v258 = v14;
  if ( a2 - 9585 < 3 )
  {
    if ( v14 < 0LL )
    {
      v25 = ((unsigned __int64)v14 >> 1) | v14 & 1;
      v19 = (float)(int)v25 + (float)(int)v25;
    }
    else
    {
      v19 = (float)v14;
    }
    v246.m128_f32[0] = v19;
    if ( (v261 & 0x8000000000000000LL) != 0LL )
      v26 = (float)(int)((v261 >> 1) | v248 & 1) + (float)(int)((v261 >> 1) | v248 & 1);
    else
      v26 = (float)v248;
    *(float *)v264.m128i_i32 = v26;
    v27 = v272[4];
    v28 = 0x7FFFFFFF;
    if ( v27 <= 2147483500.0 )
      v28 = (int)v27;
    v29 = v28;
    alacritty::renderer::text::builtin_font::Canvas::new(&v267, v14, v17 + v261 + v17);
    v261 += v17;
    if ( v16 < 0 )
    {
      v30 = v16;
      v249.m128_f32[0] = (float)(int)(((unsigned __int64)v16 >> 1) | v16 & 1)
                       + (float)(int)(((unsigned __int64)v16 >> 1) | v16 & 1);
      if ( !v17 )
      {
LABEL_32:
        v35 = v30 + v29 + v248;
        v36 = v268;
        result = 3 * v267;
        v38 = 3 * v269;
        *(_DWORD *)(a1 + 40) = v254;
        v39 = v258;
        *(_DWORD *)(a1 + 44) = v258;
        v40 = v261;
        *(_DWORD *)(a1 + 48) = v261;
        *(_QWORD *)(a1 + 52) = v35;
        *(_DWORD *)(a1 + 32) = v39;
        *(_DWORD *)(a1 + 36) = v40;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = result;
        *(_QWORD *)(a1 + 16) = v36;
        *(_QWORD *)(a1 + 24) = v38;
        return result;
      }
    }
    else
    {
      v30 = v16;
      v249.m128_f32[0] = (float)(int)v16;
      if ( !v17 )
        goto LABEL_32;
    }
    *(float *)v264.m128i_i32 = *(float *)v264.m128i_i32 + v249.m128_f32[0];
    v31 = *(float *)v264.m128i_i32 / v246.m128_f32[0];
    *(float *)&v272 = 0.0 * (float)(*(float *)v264.m128i_i32 / v246.m128_f32[0]);
    v246.m128_f32[0] = v246.m128_f32[0] + 1.0;
    v243 = v31 * v246.m128_f32[0];
    v32 = 0LL;
    if ( (_DWORD)v254 == 9586 )
    {
      v274 = &v267;
      do
      {
        if ( v32 < 0 )
          v34 = (float)(int)(((unsigned __int64)v32 >> 1) | v32 & 1)
              + (float)(int)(((unsigned __int64)v32 >> 1) | v32 & 1);
        else
          v34 = (float)(int)v32;
        alacritty::renderer::text::builtin_font::Canvas::draw_line(
          &v267,
          (float)(*(float *)&v272 + (float)(v34 * 0.5)) + v249.m128_f32[0],
          v246.m128_f32[0],
          (float)((float)(v34 * 0.5) + v243) + v249.m128_f32[0]);
        ++v32;
      }
      while ( v17 != v32 );
    }
    else
    {
      v274 = &v267;
      do
      {
        if ( v32 < 0 )
          v33 = (float)(int)(((unsigned __int64)v32 >> 1) | v32 & 1)
              + (float)(int)(((unsigned __int64)v32 >> 1) | v32 & 1);
        else
          v33 = (float)(int)v32;
        v247.m128_f32[0] = v33 * 0.5;
        alacritty::renderer::text::builtin_font::Canvas::draw_line(
          &v267,
          (float)((float)(*(float *)v264.m128i_i32 - (float)(v33 * 0.5)) - *(float *)&v272) + v249.m128_f32[0],
          v246.m128_f32[0],
          (float)((float)(*(float *)v264.m128i_i32 - (float)(v33 * 0.5)) - v243) + v249.m128_f32[0]);
        if ( (_DWORD)v254 == 9587 )
          alacritty::renderer::text::builtin_font::Canvas::draw_line(
            &v267,
            (float)(*(float *)&v272 + v247.m128_f32[0]) + v249.m128_f32[0],
            v246.m128_f32[0],
            (float)(v247.m128_f32[0] + v243) + v249.m128_f32[0]);
        ++v32;
      }
      while ( v17 != v32 );
    }
    goto LABEL_32;
  }
  v274 = &v267;
  v249.m128_u64[0] = v15;
  alacritty::renderer::text::builtin_font::Canvas::new(&v267, v15, v13);
  v20 = a2;
  v21 = 2LL;
  switch ( a2 )
  {
    case 0x2504u:
      goto LABEL_44;
    case 0x2505u:
      goto LABEL_46;
    case 0x2506u:
      goto LABEL_69;
    case 0x2507u:
      goto LABEL_70;
    case 0x2508u:
      v21 = 3LL;
      goto LABEL_44;
    case 0x2509u:
      v21 = 3LL;
      goto LABEL_46;
    case 0x250Au:
      v21 = 3LL;
      goto LABEL_69;
    case 0x250Bu:
      v21 = 3LL;
      goto LABEL_70;
    case 0x254Cu:
      v21 = 1LL;
LABEL_44:
      v17 = v16;
      goto LABEL_46;
    case 0x254Du:
      v21 = 1LL;
LABEL_46:
      v43 = core::cmp::Ord::max((unsigned __int64)v14 >> 3, 1LL);
      v44 = v21 + 1;
      v45 = 0LL;
      if ( v14 >= (unsigned __int64)(v21 * v43) )
        v45 = v14 - v21 * v43;
      v23 = a1;
      if ( HIDWORD(v45) )
        v46 = v45 / v44;
      else
        v46 = (unsigned int)v45 / (unsigned int)v44;
      v47 = core::cmp::Ord::max(v46, 1LL);
      if ( v271 < 0 )
        v48 = (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1)
            + (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1);
      else
        v48 = (float)(int)v271;
      v246.m128_f32[0] = v48;
      v276 = 0LL;
      v277 = v21;
      v278 = 0;
      if ( v47 < 0 )
        v49 = (float)(int)(((unsigned __int64)v47 >> 1) | v47 & 1)
            + (float)(int)(((unsigned __int64)v47 >> 1) | v47 & 1);
      else
        v49 = (float)(int)v47;
      v249.m128_f32[0] = v49;
      v246.m128_f32[0] = v246.m128_f32[0] * 0.5;
      v50 = v43 + v47;
      v274 = &v267;
      v20 = v254;
      while ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v276) & 1) != 0 )
      {
        v53 = core::cmp::Ord::min(v50 * v52, v14);
        HIDWORD(v51) = 0;
        if ( v53 >= 0 )
          *(float *)&v51 = (float)(int)v53;
        else
          *(float *)&v51 = (float)(int)(((unsigned __int64)v53 >> 1) | v53 & 1)
                         + (float)(int)(((unsigned __int64)v53 >> 1) | v53 & 1);
        alacritty::renderer::text::builtin_font::Canvas::draw_h_line(
          &v267,
          v17,
          v51,
          COERCE_DOUBLE((unsigned __int64)v246.m128_u32[0]));
      }
      goto LABEL_343;
    case 0x254Eu:
      v21 = 1LL;
LABEL_69:
      v17 = v16;
      goto LABEL_70;
    case 0x254Fu:
      v21 = 1LL;
LABEL_70:
      v58 = core::cmp::Ord::max(v261 >> 3, 1LL);
      v59 = v21 + 1;
      v60 = 0LL;
      if ( v261 >= v21 * v58 )
        v60 = v261 - v21 * v58;
      v23 = a1;
      if ( HIDWORD(v60) )
        v61 = v60 / v59;
      else
        v61 = (unsigned int)v60 / (unsigned int)v59;
      v62 = core::cmp::Ord::max(v61, 1LL);
      if ( v270 < 0 )
        v63 = (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1)
            + (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1);
      else
        v63 = (float)(int)v270;
      v246.m128_f32[0] = v63;
      v276 = 0LL;
      v277 = v21;
      v278 = 0;
      if ( v62 < 0 )
        v64 = (float)(int)(((unsigned __int64)v62 >> 1) | v62 & 1)
            + (float)(int)(((unsigned __int64)v62 >> 1) | v62 & 1);
      else
        v64 = (float)(int)v62;
      v249.m128_f32[0] = v64;
      v246.m128_f32[0] = v246.m128_f32[0] * 0.5;
      v65 = v58 + v62;
      v274 = &v267;
      v20 = v254;
      while ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v276) & 1) != 0 )
      {
        v68 = core::cmp::Ord::min(v65 * v67, v261);
        HIDWORD(v66) = 0;
        if ( v68 >= 0 )
          *(float *)&v66 = (float)(int)v68;
        else
          *(float *)&v66 = (float)(int)(((unsigned __int64)v68 >> 1) | v68 & 1)
                         + (float)(int)(((unsigned __int64)v68 >> 1) | v68 & 1);
        alacritty::renderer::text::builtin_font::Canvas::draw_v_line(
          &v267,
          v17,
          v246.m128_f32[0],
          v66,
          v249.m128_f32[0]);
      }
      goto LABEL_343;
    case 0x256Du:
    case 0x256Eu:
    case 0x256Fu:
    case 0x2570u:
      alacritty::renderer::text::builtin_font::Canvas::draw_rounded_corner(&v267, v16);
      v22 = v249.m128_u64[0];
      v23 = a1;
      if ( a2 != 9581 && a2 != 9584 )
      {
        if ( a2 != 9582 )
          goto LABEL_343;
        v259 = v268;
        v24 = v269;
        goto LABEL_111;
      }
      v250 = v16;
      v259 = v268;
      v24 = v269;
      if ( (unsigned int)v248 >= 2 )
      {
        if ( v270 < 0 )
          v41 = (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1)
              + (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1);
        else
          v41 = (float)(int)v270;
        v72 = v41 * 0.5;
        v73 = (unsigned int)(int)v72;
        v74 = 0LL;
        if ( v72 < 0.0 )
          v73 = 0LL;
        v75 = -1LL;
        if ( v72 <= 1.8446743e19 )
          v75 = v73;
        v265 = v75;
        v76 = ((unsigned __int8)v258 ^ (unsigned __int8)v250) & 1;
        v77 = v258;
        v78 = v258 + ~v76;
        v253 = v76;
        v252 = 3LL * v258;
        v79 = v259;
        v247.m128_u64[0] = (unsigned __int64)v259 + v252 - 3 * v76 - 3;
        v80 = 1LL;
        v81 = 2LL;
        v251 = &off_883CB0;
        v246.m128_u64[0] = v269;
        v255 = v258;
        while ( 1 )
        {
          if ( v253 )
          {
            v82 = v77 * (v80 - 1);
            if ( v82 >= v24 )
              goto LABEL_385;
            v83 = v77 * v80 - 1;
            if ( v83 >= v24 )
            {
              v82 = v77 * v80 - 1;
              v241 = &off_883CC8;
              goto LABEL_383;
            }
            v84 = 3 * v83;
            v85 = v259;
            v73 = *(unsigned __int16 *)((char *)v259 + 3 * v82);
            *((_BYTE *)v259 + v84 + 2) = *((_BYTE *)v259 + 3 * v82 + 2);
            *(__int16 *)((char *)v85 + v84) = v73;
          }
          v266 = v81;
          v86 = v265;
          v87 = v79;
          v264.m128i_i64[0] = v74;
          v82 = v74;
          v88 = v247.m128_u64[0];
          v260 = v78;
          if ( v265 )
            break;
LABEL_100:
          v80 = v266;
          v81 = (v266 < v261) + v266;
          v77 = v255;
          v78 = v255 + v260;
          v73 = v252;
          v247.m128_u64[0] += v252;
          v74 = v255 + v264.m128i_i64[0];
          v79 = (__int16 *)((char *)v79 + v252);
          v23 = a1;
          v20 = v254;
          if ( v266 >= v261 )
            goto LABEL_110;
        }
        while ( 1 )
        {
          if ( v82 >= v24 )
            goto LABEL_382;
          if ( v78 >= v24 )
            break;
          core::ptr::swap(v87, v88, v73);
          --v78;
          v88 -= 3LL;
          ++v82;
          v87 = (__int16 *)((char *)v87 + 3);
          --v86;
          v24 = v246.m128_u64[0];
          if ( !v86 )
            goto LABEL_100;
        }
        v82 = v78;
LABEL_382:
        v241 = &off_883CE0;
LABEL_383:
        v251 = v241;
        goto LABEL_385;
      }
LABEL_110:
      LOBYTE(v16) = v250;
      v22 = v249.m128_u64[0];
      if ( v20 - 9581 < 2 )
      {
LABEL_111:
        if ( v271 < 0 )
          v89 = (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1)
              + (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1);
        else
          v89 = (float)(int)v271;
        v90 = v89 * 0.5;
        v91 = 0LL;
        if ( v90 >= 0.0 )
          v91 = (unsigned int)(int)v90;
        v92 = -1LL;
        if ( v90 <= 1.8446743e19 )
          v92 = v91;
        v93 = v248 ^ v16;
        v246.m128_u64[0] = v24;
        if ( (v93 & 1) != 0 && v258 )
        {
          v94 = v22 * (v261 - 1);
          v95 = 0LL;
          v96 = v259;
          while ( 1 )
          {
            if ( v24 == v95 )
            {
              v251 = &off_883D10;
              v82 = v95;
LABEL_385:
              core::panicking::panic_bounds_check(v82, v246.m128_u64[0], v251);
            }
            v82 = v94 + v95;
            if ( v94 + v95 >= v24 )
              break;
            v97 = *v96;
            *((_BYTE *)v96 + 3 * v94 + 2) = *((_BYTE *)v96 + 2);
            *(__int16 *)((char *)v96 + 3 * v94) = v97;
            ++v95;
            v96 = (__int16 *)((char *)v96 + 3);
            if ( v249.m128_u64[0] == v95 )
              goto LABEL_124;
          }
          v241 = &off_883D28;
          goto LABEL_383;
        }
LABEL_124:
        v276 = 1LL;
        v277 = v92;
        v278 = 0;
        if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v276) & 1) == 0 )
          goto LABEL_134;
        if ( v258 )
        {
          v99 = v93 & 1;
          v247.m128_u64[0] = 3 * v249.m128_u64[0];
          v251 = &off_883CF8;
          while ( 1 )
          {
            v100 = v98 - 1;
            v101 = v99;
            v102 = v99 + v98;
            v103 = v249.m128_u64[0];
            v104 = v249.m128_u64[0] * (v261 - v102);
            v105 = (__int64)v259 + (v261 - v102) * v247.m128_u64[0];
            v106 = v100 * v247.m128_u64[0];
            v82 = v249.m128_u64[0] * v100;
            v107 = (__int64)v259 + v106;
            do
            {
              if ( v82 >= v246.m128_u64[0] )
                goto LABEL_385;
              if ( v104 >= v246.m128_u64[0] )
              {
                v82 = v104;
                goto LABEL_385;
              }
              core::ptr::swap(v107, v105, v102);
              ++v104;
              v105 += 3LL;
              ++v82;
              v107 += 3LL;
              --v103;
            }
            while ( v103 );
            v99 = v101;
            if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v276) & 1) == 0 )
              goto LABEL_134;
          }
        }
        while ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v276) & 1) != 0 )
          ;
LABEL_134:
        v23 = a1;
        v20 = v254;
        goto LABEL_343;
      }
      goto LABEL_343;
    case 0x2588u:
      v42 = 0xFFFFFFLL;
      goto LABEL_88;
    case 0x2591u:
      v42 = 4210752LL;
      goto LABEL_88;
    case 0x2592u:
      v42 = 8421504LL;
      goto LABEL_88;
    case 0x2593u:
      v42 = 12632256LL;
LABEL_88:
      alacritty::renderer::text::builtin_font::Canvas::fill(v268, v269, v42);
      v23 = a1;
      goto LABEL_343;
    case 0x2594u:
    case 0x2595u:
      goto LABEL_136;
    default:
      if ( (a2 & 0x1FFFFC) == 9472 || a2 - 9484 < 0x40 || a2 - 9588 < 0xC )
      {
        v54 = v16;
        v55 = 0LL;
        v56 = a2 - 9472;
        v23 = a1;
        switch ( v56 )
        {
          case 0u:
          case 0x10u:
          case 0x12u:
          case 0x18u:
          case 0x1Au:
          case 0x24u:
          case 0x26u:
          case 0x27u:
          case 0x28u:
          case 0x2Cu:
          case 0x2Eu:
          case 0x30u:
          case 0x32u:
          case 0x34u:
          case 0x36u:
          case 0x38u:
          case 0x3Au:
          case 0x3Cu:
          case 0x3Eu:
          case 0x40u:
          case 0x41u:
          case 0x42u:
          case 0x44u:
          case 0x46u:
          case 0x4Au:
          case 0x74u:
          case 0x7Cu:
            v55 = v54;
            v57 = 0LL;
            if ( v56 <= 0x7E )
              goto LABEL_140;
            goto LABEL_143;
          case 1u:
          case 0x11u:
          case 0x13u:
          case 0x19u:
          case 0x1Bu:
          case 0x25u:
          case 0x29u:
          case 0x2Au:
          case 0x2Bu:
          case 0x2Du:
          case 0x2Fu:
          case 0x31u:
          case 0x33u:
          case 0x35u:
          case 0x37u:
          case 0x39u:
          case 0x3Bu:
          case 0x3Du:
          case 0x3Fu:
          case 0x43u:
          case 0x45u:
          case 0x47u:
          case 0x48u:
          case 0x49u:
          case 0x4Bu:
          case 0x78u:
          case 0x7Eu:
            v55 = v17;
            goto LABEL_139;
          case 2u:
          case 3u:
          case 4u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x14u:
          case 0x15u:
          case 0x16u:
          case 0x17u:
          case 0x1Cu:
          case 0x1Du:
          case 0x1Eu:
          case 0x1Fu:
          case 0x20u:
          case 0x21u:
          case 0x22u:
          case 0x23u:
          case 0x4Cu:
          case 0x4Du:
          case 0x4Eu:
          case 0x4Fu:
          case 0x50u:
          case 0x51u:
          case 0x52u:
          case 0x53u:
          case 0x54u:
          case 0x55u:
          case 0x56u:
          case 0x57u:
          case 0x58u:
          case 0x59u:
          case 0x5Au:
          case 0x5Bu:
          case 0x5Cu:
          case 0x5Du:
          case 0x5Eu:
          case 0x5Fu:
          case 0x60u:
          case 0x61u:
          case 0x62u:
          case 0x63u:
          case 0x64u:
          case 0x65u:
          case 0x66u:
          case 0x67u:
          case 0x68u:
          case 0x69u:
          case 0x6Au:
          case 0x6Bu:
          case 0x6Cu:
          case 0x6Du:
          case 0x6Eu:
          case 0x6Fu:
          case 0x70u:
          case 0x71u:
          case 0x72u:
          case 0x73u:
          case 0x75u:
          case 0x76u:
          case 0x77u:
          case 0x79u:
          case 0x7Au:
          case 0x7Bu:
          case 0x7Du:
LABEL_139:
            v57 = 0LL;
            goto LABEL_140;
          default:
            v23 = a1;
            v57 = 0LL;
            if ( v56 > 0x7E )
              goto LABEL_143;
LABEL_140:
            switch ( v56 )
            {
              case 0u:
              case 0xCu:
              case 0xEu:
              case 0x14u:
              case 0x16u:
              case 0x1Cu:
              case 0x1Eu:
              case 0x1Fu:
              case 0x20u:
              case 0x2Cu:
              case 0x2Du:
              case 0x30u:
              case 0x31u:
              case 0x34u:
              case 0x35u:
              case 0x38u:
              case 0x39u:
              case 0x3Cu:
              case 0x3Du:
              case 0x40u:
              case 0x41u:
              case 0x42u:
              case 0x43u:
              case 0x45u:
              case 0x49u:
              case 0x76u:
              case 0x7Eu:
                v57 = v54;
                break;
              case 1u:
              case 0xDu:
              case 0xFu:
              case 0x15u:
              case 0x17u:
              case 0x1Du:
              case 0x21u:
              case 0x22u:
              case 0x23u:
              case 0x2Eu:
              case 0x2Fu:
              case 0x32u:
              case 0x33u:
              case 0x36u:
              case 0x37u:
              case 0x3Au:
              case 0x3Bu:
              case 0x3Eu:
              case 0x3Fu:
              case 0x44u:
              case 0x46u:
              case 0x47u:
              case 0x48u:
              case 0x4Au:
              case 0x4Bu:
              case 0x7Au:
              case 0x7Cu:
                v57 = v17;
                break;
              default:
                break;
            }
LABEL_143:
            v247.m128_u64[0] = 0LL;
            v112 = v20 - 9474;
            switch ( v20 )
            {
              case 0x2502u:
              case 0x2514u:
              case 0x2515u:
              case 0x2518u:
              case 0x2519u:
              case 0x251Cu:
              case 0x251Du:
              case 0x251Fu:
              case 0x2522u:
              case 0x2524u:
              case 0x2525u:
              case 0x2527u:
              case 0x252Au:
              case 0x2534u:
              case 0x2535u:
              case 0x2536u:
              case 0x2537u:
              case 0x253Cu:
              case 0x253Du:
              case 0x253Eu:
              case 0x253Fu:
              case 0x2541u:
              case 0x2545u:
              case 0x2546u:
              case 0x2548u:
              case 0x2575u:
              case 0x257Du:
                v247.m128_u64[0] = v54;
                break;
              case 0x2503u:
              case 0x2516u:
              case 0x2517u:
              case 0x251Au:
              case 0x251Bu:
              case 0x251Eu:
              case 0x2520u:
              case 0x2521u:
              case 0x2523u:
              case 0x2526u:
              case 0x2528u:
              case 0x2529u:
              case 0x252Bu:
              case 0x2538u:
              case 0x2539u:
              case 0x253Au:
              case 0x253Bu:
              case 0x2540u:
              case 0x2542u:
              case 0x2543u:
              case 0x2544u:
              case 0x2547u:
              case 0x2549u:
              case 0x254Au:
              case 0x254Bu:
              case 0x2579u:
              case 0x257Fu:
                v247.m128_u64[0] = v17;
                break;
              default:
                break;
            }
            v113 = 0LL;
            switch ( v112 )
            {
              case 0u:
              case 0xAu:
              case 0xBu:
              case 0xEu:
              case 0xFu:
              case 0x1Au:
              case 0x1Bu:
              case 0x1Cu:
              case 0x1Fu:
              case 0x22u:
              case 0x23u:
              case 0x24u:
              case 0x27u:
              case 0x2Au:
              case 0x2Bu:
              case 0x2Cu:
              case 0x2Du:
              case 0x3Au:
              case 0x3Bu:
              case 0x3Cu:
              case 0x3Du:
              case 0x3Eu:
              case 0x41u:
              case 0x42u:
              case 0x45u:
              case 0x75u:
              case 0x7Du:
                v113 = v54;
                break;
              case 1u:
              case 0xCu:
              case 0xDu:
              case 0x10u:
              case 0x11u:
              case 0x1Du:
              case 0x1Eu:
              case 0x20u:
              case 0x21u:
              case 0x25u:
              case 0x26u:
              case 0x28u:
              case 0x29u:
              case 0x2Eu:
              case 0x2Fu:
              case 0x30u:
              case 0x31u:
              case 0x3Fu:
              case 0x40u:
              case 0x43u:
              case 0x44u:
              case 0x46u:
              case 0x47u:
              case 0x48u:
              case 0x49u:
              case 0x79u:
              case 0x7Bu:
                v113 = v17;
                break;
              default:
                break;
            }
            v114 = v270;
            v115 = v271;
            if ( v270 < 0 )
              v116 = (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1)
                   + (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1);
            else
              v116 = (float)(int)v270;
            v117 = v116 * 0.5;
            if ( v271 < 0 )
              v118 = (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1)
                   + (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1);
            else
              v118 = (float)(int)v271;
            v244 = v118 * 0.5;
            v246.m128_f32[0] = v117;
            LODWORD(v265) = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v270, v247.m128_u64[0], v117);
            v252 = v113;
            LODWORD(v255) = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v114, v113, v246.m128_f32[0]);
            LODWORD(v260) = 1056964608;
            v264.m128i_i64[0] = v55;
            v249.m128_i32[0] = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v115, v55, v118 * 0.5);
            LODWORD(v259) = 1056964608;
            LODWORD(v266) = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v115, v57, v118 * 0.5);
            v119 = (unsigned int)(int)0.5;
            if ( 0.5 > 2147483500.0 )
              v119 = 0x7FFFFFFFLL;
            v120 = (unsigned int)(int)*(float *)&v260;
            LODWORD(v253) = 1056964608;
            if ( *(float *)&v260 > 2147483500.0 )
              v120 = 0x7FFFFFFFLL;
            *(float *)&v260 = (float)(int)core::cmp::Ord::max(v119, v120);
            v121 = (unsigned int)(int)*(float *)&v259;
            if ( *(float *)&v259 > 2147483500.0 )
              v121 = 0x7FFFFFFFLL;
            v122 = (unsigned int)(int)*(float *)&v253;
            if ( *(float *)&v253 > 2147483500.0 )
              v122 = 0x7FFFFFFFLL;
            v123 = core::cmp::Ord::max(v121, v122);
            v124 = (unsigned int)(int)v249.m128_f32[0];
            if ( v249.m128_f32[0] > 2147483500.0 )
              v124 = 0x7FFFFFFFLL;
            v125 = (unsigned int)(int)*(float *)&v266;
            v126 = v123;
            if ( *(float *)&v266 > 2147483500.0 )
              v125 = 0x7FFFFFFFLL;
            v127 = core::cmp::Ord::min(v124, v125);
            if ( (v261 & 0x8000000000000000LL) != 0LL )
              v128 = (float)(int)((v261 >> 1) | v248 & 1) + (float)(int)((v261 >> 1) | v248 & 1);
            else
              v128 = (float)v248;
            v249.m128_f32[0] = v128;
            v20 = v254;
            alacritty::renderer::text::builtin_font::Canvas::draw_h_line(
              &v267,
              v264.m128i_i64[0],
              0.0,
              COERCE_DOUBLE((unsigned __int64)LODWORD(v244)));
            if ( v258 < 0LL )
            {
              v130 = ((unsigned __int64)v258 >> 1) | v258 & 1;
              v129 = (float)(int)v130 + (float)(int)v130;
            }
            else
            {
              v129 = (float)v258;
            }
            *(float *)v264.m128i_i32 = v129;
            v131 = (unsigned int)(int)*(float *)&v265;
            if ( *(float *)&v265 > 2147483500.0 )
              v131 = 0x7FFFFFFFLL;
            v132 = (unsigned int)(int)*(float *)&v255;
            if ( *(float *)&v255 > 2147483500.0 )
              v132 = 0x7FFFFFFFLL;
            HIDWORD(v133) = 0;
            *(float *)&v133 = (float)(int)core::cmp::Ord::min(v131, v132);
            alacritty::renderer::text::builtin_font::Canvas::draw_h_line(
              &v267,
              v57,
              v133,
              COERCE_DOUBLE((unsigned __int64)LODWORD(v244)));
            alacritty::renderer::text::builtin_font::Canvas::draw_v_line(
              &v267,
              v247.m128_u64[0],
              v246.m128_f32[0],
              0.0,
              (float)v126);
            v247.m128_f32[0] = (float)v127;
            v249.m128_f32[0] = v249.m128_f32[0] - (float)v127;
            v134 = v252;
            break;
        }
        goto LABEL_342;
      }
      if ( a2 - 9552 >= 0x1D )
      {
        if ( (a2 & 0x1FFFF8) == 9600 || a2 - 9609 < 8 )
        {
LABEL_136:
          si128 = (__m128d)_mm_load_si128((const __m128i *)&xmmword_E9250);
          v109 = _mm_cvtpd_ps(
                   _mm_sub_pd(
                     (__m128d)_mm_or_si128(
                                _mm_unpacklo_epi32(
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(v248)),
                                  (__m128i)0LL),
                                (__m128i)si128),
                     si128));
          v246 = v109;
          switch ( a2 )
          {
            case 0x2580u:
              v110.m128_f32[0] = _mm_shuffle_ps(v109, v109, 85).m128_f32[0];
              v111 = (__m128)0x40800000u;
              v111.m128_f32[0] = 4.0 * v110.m128_f32[0];
              goto LABEL_220;
            case 0x2581u:
              v110 = _mm_shuffle_ps(v109, v109, 85);
              goto LABEL_209;
            case 0x2582u:
              v110 = _mm_shuffle_ps(v109, v109, 85);
              v110.m128_f32[0] = v110.m128_f32[0] + v110.m128_f32[0];
              goto LABEL_209;
            case 0x2583u:
              v110 = _mm_shuffle_ps(v109, v109, 85);
              v110.m128_f32[0] = v110.m128_f32[0] * 3.0;
              goto LABEL_209;
            case 0x2584u:
              v110 = _mm_shuffle_ps(v109, v109, 85);
              v110.m128_f32[0] = v110.m128_f32[0] * 4.0;
              goto LABEL_209;
            case 0x2585u:
              v110 = _mm_shuffle_ps(v109, v109, 85);
              v110.m128_f32[0] = v110.m128_f32[0] * 5.0;
              goto LABEL_209;
            case 0x2586u:
              v110 = _mm_shuffle_ps(v109, v109, 85);
              v110.m128_f32[0] = v110.m128_f32[0] * 6.0;
              goto LABEL_209;
            case 0x2587u:
              v110 = _mm_shuffle_ps(v109, v109, 85);
              v110.m128_f32[0] = v110.m128_f32[0] * 7.0;
LABEL_209:
              v110.m128_f32[0] = v110.m128_f32[0] * 0.125;
              v247 = v110;
              goto LABEL_221;
            case 0x2589u:
              v144 = 7.0;
              goto LABEL_215;
            case 0x258Au:
              v144 = 6.0;
              goto LABEL_215;
            case 0x258Bu:
              v144 = 5.0;
              goto LABEL_215;
            case 0x258Cu:
              v144 = 4.0;
              goto LABEL_215;
            case 0x258Du:
              v144 = 3.0;
LABEL_215:
              v143 = v144 * v109.m128_f32[0];
              goto LABEL_216;
            case 0x258Eu:
              v143 = v109.m128_f32[0] + v109.m128_f32[0];
              goto LABEL_216;
            case 0x258Fu:
              v143 = v109.m128_f32[0];
LABEL_216:
              v23 = a1;
              *(float *)&v245 = v143 * 0.125;
              v158 = _mm_sub_ps(v109, v109);
              v159 = _mm_shuffle_ps(v158, v158, 85);
              *(double *)v159.m128_u64 = roundf(*(double *)v159.m128_u64);
              v249 = v159;
              *(double *)v159.m128_u64 = roundf(COERCE_DOUBLE((unsigned __int64)v245));
              v160 = v246;
              v160.m128_f32[0] = v159.m128_f32[0];
              v161 = _mm_max_ps((__m128)xmmword_E8780, v160);
              v162 = _mm_cmpunord_ps(v160, v160);
              v246 = 0LL;
              v247 = _mm_or_ps(_mm_andnot_ps(v162, v161), _mm_and_ps((__m128)xmmword_E8780, v162));
              break;
            case 0x2590u:
              v149 = _mm_sub_ps(v109, v109);
              v150 = _mm_shuffle_ps(v149, v149, 85);
              *(double *)v150.m128_u64 = roundf(*(double *)v150.m128_u64);
              v249 = v150;
              *(double *)v150.m128_u64 = roundf(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
                                                                                  (float)(4.0 * v109.m128_f32[0])
                                                                                * 0.125)));
              v151 = v246;
              v151.m128_f32[0] = v150.m128_f32[0];
              v152 = _mm_max_ps((__m128)xmmword_E8780, v151);
              v153 = _mm_cmpunord_ps(v151, v151);
              v154 = _mm_and_ps((__m128)xmmword_E8780, v153);
              v155 = _mm_andnot_ps(v153, v152);
              v23 = a1;
              v156 = 0LL;
              if ( v270 < 0 )
                v157 = (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1)
                     + (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1);
              else
                v157 = (float)(int)v270;
              v247 = _mm_or_ps(v154, v155);
              v156.m128_f32[0] = v157 * 0.5;
              goto LABEL_222;
            case 0x2594u:
              v110 = _mm_shuffle_ps(v109, v109, 85);
              v111 = v110;
LABEL_220:
              v111.m128_f32[0] = v111.m128_f32[0] * 0.125;
              v247 = v111;
              v110.m128_f32[0] = (float)(v110.m128_f32[0] * 8.0) * 0.125;
LABEL_221:
              v23 = a1;
              v169 = _mm_shuffle_ps(v109, v109, 85);
              v169.m128_f32[0] = v169.m128_f32[0] - v110.m128_f32[0];
              *(double *)v169.m128_u64 = roundf(*(double *)v169.m128_u64);
              v249 = v169;
              v169.m128_u64[1] = v247.m128_u64[1];
              *(double *)v169.m128_u64 = roundf(*(double *)v247.m128_u64);
              v170 = _mm_shuffle_ps(_mm_movelh_ps(v169, v246), v246, 226);
              v171 = _mm_max_ps((__m128)xmmword_E8780, v170);
              v172 = _mm_cmpunord_ps(v170, v170);
              v247 = _mm_or_ps(_mm_andnot_ps(v172, v171), _mm_and_ps((__m128)xmmword_E8780, v172));
              v156 = 0LL;
LABEL_222:
              v246 = v156;
              break;
            case 0x2595u:
              v163 = _mm_sub_ps(v109, v109);
              v164 = _mm_shuffle_ps(v163, v163, 85);
              *(double *)v164.m128_u64 = roundf(*(double *)v164.m128_u64);
              v249 = v164;
              *(double *)v164.m128_u64 = roundf(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(0.125 * v109.m128_f32[0])));
              v165 = v246;
              v165.m128_f32[0] = v164.m128_f32[0];
              v166 = _mm_max_ps((__m128)xmmword_E8780, v165);
              v167 = _mm_cmpunord_ps(v165, v165);
              v247 = _mm_or_ps(_mm_andnot_ps(v167, v166), _mm_and_ps((__m128)xmmword_E8780, v167));
              v168 = v246;
              v168.m128_f32[0] = v246.m128_f32[0] - v247.m128_f32[0];
              v246 = v168;
              goto LABEL_218;
            default:
              v145 = _mm_sub_ps(v109, v109);
              v146 = _mm_shuffle_ps(v145, v145, 85);
              *(double *)v146.m128_u64 = roundf(*(double *)v146.m128_u64);
              v249 = v146;
              v147 = _mm_cmpunord_ps(v246, v246);
              v148 = _mm_or_ps(
                       _mm_andnot_ps(v147, _mm_max_ps((__m128)xmmword_E8780, v246)),
                       _mm_and_ps((__m128)xmmword_E8780, v147));
              v246 = 0LL;
              v247 = v148;
LABEL_218:
              v23 = a1;
              break;
          }
        }
        else if ( a2 - 9622 >= 0xA )
        {
          v173 = a2 - 129792;
          if ( (unsigned int)v173 >= 0x3C )
            core::panicking::panic(
              "internal error: entered unreachable code/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557"
              "f/glutin-0.32.3/src/context.rsCustomCursorInnerxconncursorfatal runtime error: thread local panicked on dr"
              "op, aborting\n"
              "newtype variant/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/x11rb-0.13.1/src/rust_c"
              "onnection/mod.rsassertion failed: !inner.inner.prepare_check_for_reply_or_error(sequence)internal error: e"
              "ntered unreachable code: We just prefetched this/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/alac"
              "ritty/alacritty_terminal/src/grid/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/"
              "collections/btree/navigate.rsXErrorInvalidUtf8ullrue/home/34r7hm4n/.cargo/registry/src/index.crates.io-194"
              "9cf8c6b5b557f/serde_json-1.0.140/src/de.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b5"
              "57f/serde_json-1.0.140/src/ser.rs}\"false[{,\\\"\\\\\\/\\b\\f\\n\\r\\t:]did not find expected hexadecimal number",
              40LL,
              &off_883D40);
          v23 = a1;
          if ( v270 < 0 )
            v11.m128_f32[0] = (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1)
                            + (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1);
          else
            v11.m128_f32[0] = (float)(int)v270;
          v11.m128_f32[0] = v11.m128_f32[0] * 0.5;
          *(double *)v11.m128_u64 = roundf(*(double *)v11.m128_u64);
          if ( (v261 & 0x8000000000000000LL) != 0LL )
            a7.m128_f32[0] = (float)(int)((v261 >> 1) | v248 & 1) + (float)(int)((v261 >> 1) | v248 & 1);
          else
            a7.m128_f32[0] = (float)v248;
          v11.m128_f32[0] = fmaxf(v11.m128_f32[0], 1.0);
          v246 = v11;
          v264 = (__m128i)a7;
          HIDWORD(v186) = a7.m128_i32[1];
          *(float *)&v186 = a7.m128_f32[0] / 3.0;
          v247.m128_i32[0] = fmaxf(COERCE_FLOAT(COERCE_UNSIGNED_INT64(roundf(v186))), 1.0);
          v187 = 0;
          v188 = 0.0;
          v189 = 0.0;
          if ( (unsigned int)v173 <= 0x3A )
          {
            v190 = 0x55555AAAAA55555LL;
            if ( _bittest64(&v190, v173) )
            {
              v188 = *(double *)v246.m128_u64;
              *(_QWORD *)&v189 = v247.m128_u32[0];
            }
          }
          v20 = v254;
          v191 = (unsigned int)(v254 - 129793);
          if ( (unsigned int)v191 > 0x3A )
          {
            v193 = 0;
          }
          else
          {
            v192 = 0x4CCCC99999B3333LL;
            v193 = 0;
            if ( _bittest64(&v192, v191) )
            {
              v187 = v246.m128_i32[0];
              v193 = v247.m128_i32[0];
            }
          }
          LODWORD(v259) = v193;
          LODWORD(v266) = v187;
          v194 = 0;
          v195 = (unsigned int)(v254 - 129795);
          v196 = 0;
          v197 = 0;
          if ( (unsigned int)v195 <= 0x38 )
          {
            v198 = 0x1C3C3C787870F0FLL;
            if ( _bittest64(&v198, v195) )
            {
              v196 = v246.m128_i32[0];
              v197 = v247.m128_i32[0];
            }
          }
          LODWORD(v265) = v197;
          LODWORD(v253) = v196;
          v199 = (__m128)v247.m128_u32[0];
          v199.m128_f32[0] = v199.m128_f32[0] + v199.m128_f32[0];
          v249 = v199;
          v200 = (unsigned int)(v254 - 129799);
          if ( (unsigned int)v200 > 0x34 )
          {
            v202 = 0;
          }
          else
          {
            v201 = 0x1FC03F807F80FFLL;
            v202 = 0;
            if ( _bittest64(&v201, v200) )
            {
              v194 = v246.m128_i32[0];
              v202 = v247.m128_i32[0];
            }
          }
          LODWORD(v252) = v202;
          v203 = v264;
          *(float *)v203.m128i_i32 = *(float *)v264.m128i_i32 - v249.m128_f32[0];
          LODWORD(v260) = 0;
          v204 = (unsigned int)(v254 - 129807);
          v264 = v203;
          LODWORD(v255) = v194;
          if ( (unsigned int)v204 > 0x2C )
          {
            v206 = 0;
          }
          else
          {
            v205 = 0x1FFFC0007FFFLL;
            v206 = 0;
            if ( _bittest64(&v205, v204) )
            {
              LODWORD(v260) = v246.m128_i32[0];
              v206 = v264.m128i_i32[0];
            }
          }
          LODWORD(v250) = v206;
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(&v267, 0.0, 0.0, v188, v189);
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(
            &v267,
            *(double *)v246.m128_u64,
            0.0,
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v266),
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v259));
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(
            &v267,
            0.0,
            COERCE_DOUBLE((unsigned __int64)v247.m128_u32[0]),
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v253),
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v265));
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(
            &v267,
            *(double *)v246.m128_u64,
            COERCE_DOUBLE((unsigned __int64)v247.m128_u32[0]),
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v255),
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v252));
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(
            &v267,
            0.0,
            *(double *)v249.m128_u64,
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v260),
            COERCE_DOUBLE((unsigned __int64)v206));
          v247 = (__m128)_mm_and_si128(
                           _mm_unpacklo_epi32(_mm_load_si128((const __m128i *)&v246), v264),
                           _mm_srai_epi32(
                             _mm_slli_epi32(
                               _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(v254 - 129822) < 0x1E), 80),
                               0x1Fu),
                             0x1Fu));
        }
        else
        {
          if ( v271 < 0 )
            a7.m128_f32[0] = (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1)
                           + (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1);
          else
            a7.m128_f32[0] = (float)(int)v271;
          v23 = a1;
          if ( v270 < 0 )
            v11.m128_f32[0] = (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1)
                            + (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1);
          else
            v11.m128_f32[0] = (float)(int)v270;
          v175 = _mm_mul_ps(_mm_unpacklo_ps(v11, a7), (__m128)xmmword_E98D0);
          v249 = v175;
          *(double *)v175.m128_u64 = roundf(*(double *)v175.m128_u64);
          v246 = v175;
          v176 = _mm_shuffle_ps(v249, v249, 85);
          *(double *)v176.m128_u64 = roundf(*(double *)v176.m128_u64);
          v177 = _mm_unpacklo_ps(v246, v176);
          v178 = _mm_max_ps((__m128)xmmword_E8780, v177);
          v179 = _mm_cmpunord_ps(v177, v177);
          v180 = (__m128i)_mm_or_ps(_mm_andnot_ps(v179, v178), _mm_and_ps((__m128)xmmword_E8780, v179));
          v181 = _mm_shuffle_epi32(v180, 85);
          v20 = v254;
          v264.m128i_i32[0] = 0;
          v246 = (__m128)v180;
          if ( (unsigned int)(v254 - 9624) >= 5 )
            v180.m128i_i64[0] = 0LL;
          v249 = (__m128)v181;
          if ( (unsigned int)(v254 - 9624) >= 5 )
            v181.m128i_i64[0] = 0LL;
          LODWORD(v260) = v246.m128_i32[0];
          v182 = v249.m128_i32[0];
          if ( (unsigned int)(v254 - 9627) >= 5 )
          {
            v182 = 0;
            LODWORD(v260) = 0;
          }
          LODWORD(v266) = v182;
          v183 = 809;
          v184 = 0;
          if ( _bittest(&v183, a2 - 9622) )
          {
            v264.m128i_i32[0] = v246.m128_i32[0];
            v184 = v249.m128_i32[0];
          }
          LODWORD(v259) = v184;
          v247 = 0LL;
          if ( (unsigned int)(v254 - 9623) <= 8 )
          {
            v185 = 301;
            if ( _bittest(&v185, v254 - 9623) )
              v247 = v246;
          }
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(
            &v267,
            0.0,
            0.0,
            *(double *)v180.m128i_i64,
            *(double *)v181.m128i_i64);
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(
            &v267,
            *(double *)_mm_load_si128((const __m128i *)&v246).m128i_i64,
            0.0,
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v260),
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v266));
          alacritty::renderer::text::builtin_font::Canvas::draw_rect(
            &v267,
            0.0,
            *(double *)_mm_load_si128((const __m128i *)&v249).m128i_i64,
            COERCE_DOUBLE((unsigned __int64)v264.m128i_u32[0]),
            COERCE_DOUBLE((unsigned __int64)(unsigned int)v259));
        }
        alacritty::renderer::text::builtin_font::Canvas::draw_rect(
          &v267,
          *(double *)v246.m128_u64,
          *(double *)v249.m128_u64,
          *(double *)v247.m128_u64,
          *(double *)_mm_shuffle_ps(v247, v247, 85).m128_u64);
        goto LABEL_343;
      }
      v250 = v16;
      v263 = a2 - 9554;
      if ( a2 - 9554 <= 0x18 && (v69 = 19173961, _bittest(&v69, a2 - 9554)) )
      {
        v70 = v270;
        if ( v270 < 0 )
          v71 = (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1)
              + (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1);
        else
          v71 = (float)(int)v270;
        *(float *)&v266 = v71 * 0.5;
        v135 = a2 - 9555;
        v246.m128_f32[0] = v71 * 0.5;
        if ( a2 - 9555 > 0x18 )
          goto LABEL_283;
      }
      else
      {
        v70 = v270;
        if ( v270 < 0 )
          v207 = (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1)
               + (float)(int)(((unsigned __int64)v270 >> 1) | v270 & 1);
        else
          v207 = (float)(int)v270;
        v208 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v270, v250, v207 * 0.5);
        v209 = (int)v208;
        if ( v208 > 2147483500.0 )
          v209 = 0x7FFFFFFF;
        v210 = core::cmp::Ord::max((unsigned int)(v209 - 1), 0LL);
        v211 = (int)a7.m128_f32[0];
        if ( a7.m128_f32[0] > 2147483500.0 )
          v211 = 0x7FFFFFFF;
        *(float *)&v266 = (float)v210;
        v212 = (float)(int)core::cmp::Ord::min((unsigned int)(v211 + 1), (unsigned int)v14);
        v20 = v254;
        v135 = v254 - 9555;
        v246.m128_f32[0] = v212;
        if ( (unsigned int)(v254 - 9555) > 0x18 )
          goto LABEL_283;
      }
      v136 = 19173961;
      if ( _bittest(&v136, v135) )
      {
        v255 = v271;
        if ( v271 < 0 )
          v137 = (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1)
               + (float)(int)(((unsigned __int64)v271 >> 1) | v271 & 1);
        else
          v137 = (float)(int)v271;
        *(float *)&v260 = v137 * 0.5;
        *(float *)v264.m128i_i32 = v137 * 0.5;
        goto LABEL_188;
      }
LABEL_283:
      v213 = v271;
      v255 = v271;
      if ( v271 < 0 )
      {
        v213 = v255;
        v214 = (float)(int)(((unsigned __int64)v271 >> 1) | v255 & 1)
             + (float)(int)(((unsigned __int64)v271 >> 1) | v255 & 1);
      }
      else
      {
        v214 = (float)(int)v271;
      }
      v215 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v213, v250, v214 * 0.5);
      v216 = (int)v215;
      if ( v215 > 2147483500.0 )
        v216 = 0x7FFFFFFF;
      v217 = core::cmp::Ord::max((unsigned int)(v216 - 1), 0LL);
      v218 = (int)a7.m128_f32[0];
      if ( a7.m128_f32[0] > 2147483500.0 )
        v218 = 0x7FFFFFFF;
      *(float *)v264.m128i_i32 = (float)v217;
      *(float *)&v260 = (float)(int)core::cmp::Ord::min((unsigned int)(v218 + 1), v261);
      v20 = v254;
LABEL_188:
      v273 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v70, v250, *(float *)&v266);
      LODWORD(v252) = a7.m128_i32[0];
      LODWORD(v253) = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v70, v250, v246.m128_f32[0]);
      LODWORD(v251) = a7.m128_i32[0];
      v275 = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v255, v250, *(float *)v264.m128i_i32);
      v262 = a7.m128_i32[0];
      v247.m128_i32[0] = alacritty::renderer::text::builtin_font::Canvas::h_line_bounds(v255, v250, *(float *)&v260);
      LODWORD(v265) = a7.m128_i32[0];
      if ( (v261 & 0x8000000000000000LL) != 0LL )
        v138 = (float)(int)((v261 >> 1) | v248 & 1) + (float)(int)((v261 >> 1) | v248 & 1);
      else
        v138 = (float)v248;
      v249.m128_f32[0] = v138;
      *(_QWORD *)&v139 = v264.m128i_u32[0];
      if ( v14 < 0LL )
      {
        v141 = ((unsigned __int64)v14 >> 1) | v14 & 1;
        v140 = (float)(int)v141 + (float)(int)v141;
      }
      else
      {
        v140 = (float)v14;
      }
      *(float *)&v259 = v140;
      switch ( a2 )
      {
        case 0x2550u:
        case 0x256Bu:
          if ( v70 < 0 )
            v142 = (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1)
                 + (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1);
          else
            v142 = (float)(int)v70;
          v257 = v142 * 0.5;
          goto LABEL_293;
        case 0x2569u:
          if ( v70 < 0 )
            v174 = (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1)
                 + (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1);
          else
            v174 = (float)(int)v70;
          v257 = v174 * 0.5;
LABEL_296:
          if ( v70 < 0 )
            v220 = (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1)
                 + (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1);
          else
            v220 = (float)(int)v70;
          v221 = v220 * 0.5;
LABEL_315:
          v256 = v221;
          goto LABEL_316;
        case 0x256Au:
        case 0x256Cu:
          goto LABEL_292;
        default:
          if ( v20 - 9557 >= 3 )
          {
            if ( v20 - 9563 >= 3 )
            {
              if ( v20 - 9569 >= 3 )
              {
                v257 = 0.0;
                if ( v20 - 9572 <= 4 )
                {
                  v257 = *(float *)&v252;
                  v20 = v254;
                  *(_QWORD *)&v139 = v264.m128i_u32[0];
                }
              }
              else
              {
LABEL_292:
                v257 = *(float *)&v252;
              }
            }
            else
            {
              v257 = *(float *)&v251;
            }
          }
          else
          {
            v257 = *(float *)&v252;
          }
LABEL_293:
          switch ( a2 )
          {
            case 0x2550u:
            case 0x2565u:
            case 0x256Bu:
              if ( v70 < 0 )
                v219 = (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1)
                     + (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1);
              else
                v219 = (float)(int)v70;
              v256 = v219 * 0.5;
              *(float *)&v253 = v219 * 0.5;
              goto LABEL_316;
            case 0x2564u:
            case 0x2566u:
              if ( v70 < 0 )
                v222 = (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1)
                     + (float)(int)(((unsigned __int64)v70 >> 1) | v70 & 1);
              else
                v222 = (float)(int)v70;
              v256 = *(float *)&v253;
              *(float *)&v253 = v222 * 0.5;
              goto LABEL_316;
            case 0x2567u:
            case 0x2569u:
              goto LABEL_296;
            case 0x2568u:
              LODWORD(v252) = 0;
              LODWORD(v251) = v262;
              v256 = *(float *)&v253;
              *(float *)&v253 = v273;
              v247.m128_i32[0] = 0;
              v249.m128_i32[0] = 0;
              v23 = a1;
              goto LABEL_340;
            case 0x256Au:
            case 0x256Cu:
              goto LABEL_314;
            default:
              if ( v263 < 3 )
              {
                v256 = *(float *)&v253;
                *(float *)&v253 = v273;
                goto LABEL_316;
              }
              if ( v20 - 9560 < 3 )
              {
                v221 = v273;
                goto LABEL_315;
              }
              v256 = 0.0;
              if ( v20 - 9566 < 3 )
              {
LABEL_314:
                v221 = *(float *)&v253;
                goto LABEL_315;
              }
              LODWORD(v259) = 0;
              LODWORD(v253) = 0;
              break;
          }
          break;
      }
      break;
  }
LABEL_316:
  v23 = a1;
  LODWORD(v252) = 0;
  switch ( v20 )
  {
    case 0x2551u:
    case 0x256Au:
      if ( v255 < 0 )
        v224 = (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1)
             + (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1);
      else
        v224 = (float)(int)v255;
      v223 = v224 * 0.5;
      goto LABEL_323;
    case 0x255Du:
      LODWORD(v251) = v265;
      LODWORD(v265) = v262;
      goto LABEL_339;
    case 0x2567u:
    case 0x2569u:
    case 0x256Bu:
    case 0x256Cu:
      v223 = *(float *)&v262;
LABEL_323:
      *(float *)&v265 = v223;
      goto LABEL_324;
    case 0x2568u:
      LODWORD(v251) = v262;
LABEL_339:
      v247.m128_i32[0] = 0;
      v249.m128_i32[0] = 0;
      goto LABEL_340;
    default:
      if ( v20 - 9560 < 5 )
      {
        v223 = *(float *)&v262;
LABEL_324:
        *(float *)&v251 = v223;
LABEL_325:
        v225 = v263;
        goto LABEL_326;
      }
      if ( v20 - 9566 < 3 )
      {
        if ( v255 < 0 )
          v236 = (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1)
               + (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1);
        else
          v236 = (float)(int)v255;
        *(float *)&v265 = v236 * 0.5;
        v223 = *(float *)&v262;
        goto LABEL_324;
      }
      LODWORD(v265) = 0;
      LODWORD(v251) = 0;
      v225 = v263;
      if ( v20 - 9569 < 3 )
      {
        if ( v255 < 0 )
          v238 = (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1)
               + (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1);
        else
          v238 = (float)(int)v255;
        *(float *)&v251 = v238 * 0.5;
        LODWORD(v265) = v262;
        v23 = a1;
        v20 = v254;
        *(_QWORD *)&v139 = v264.m128i_u32[0];
        goto LABEL_325;
      }
LABEL_326:
      if ( v20 - 9579 < 2 )
      {
        v227 = v247.m128_i32[0];
        goto LABEL_332;
      }
      if ( v20 == 9553 || v20 == 9578 )
      {
        if ( v255 < 0 )
          v226 = (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1)
               + (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1);
        else
          v226 = (float)(int)v255;
        v134 = v250;
        v228 = v226 * 0.5;
        *(float *)&v252 = v228;
        goto LABEL_335;
      }
      if ( v225 >= 3 )
      {
        v134 = v250;
        if ( v20 - 9557 < 3 )
        {
          LODWORD(v252) = v247.m128_i32[0];
          v228 = v275;
LABEL_335:
          v247.m128_f32[0] = v228;
          goto LABEL_341;
        }
        if ( v20 - 9566 >= 3 )
        {
          if ( v20 - 9569 < 3 )
          {
            if ( v255 < 0 )
              v239 = (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1)
                   + (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1);
            else
              v239 = (float)(int)v255;
            LODWORD(v252) = v247.m128_i32[0];
            v247.m128_f32[0] = v239 * 0.5;
            goto LABEL_377;
          }
          if ( v20 - 9572 >= 3 )
          {
            v247.m128_i32[0] = 0;
            v249.m128_i32[0] = 0;
            goto LABEL_377;
          }
          v240 = v247.m128_f32[0];
        }
        else
        {
          if ( v255 < 0 )
            v237 = (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1)
                 + (float)(int)(((unsigned __int64)v255 >> 1) | v255 & 1);
          else
            v237 = (float)(int)v255;
          v240 = v237 * 0.5;
        }
        *(float *)&v252 = v240;
LABEL_377:
        v23 = a1;
        v20 = v254;
        v134 = v250;
        *(_QWORD *)&v139 = v264.m128i_u32[0];
        goto LABEL_341;
      }
      v227 = LODWORD(v275);
LABEL_332:
      LODWORD(v252) = v227;
LABEL_340:
      v134 = v250;
LABEL_341:
      alacritty::renderer::text::builtin_font::Canvas::draw_h_line(&v267, v134, 0.0, v139);
      alacritty::renderer::text::builtin_font::Canvas::draw_h_line(
        &v267,
        v134,
        0.0,
        COERCE_DOUBLE((unsigned __int64)(unsigned int)v260));
      alacritty::renderer::text::builtin_font::Canvas::draw_h_line(
        &v267,
        v134,
        COERCE_DOUBLE((unsigned __int64)(unsigned int)v253),
        COERCE_DOUBLE((unsigned __int64)v264.m128i_u32[0]));
      alacritty::renderer::text::builtin_font::Canvas::draw_h_line(
        &v267,
        v134,
        COERCE_DOUBLE((unsigned __int64)LODWORD(v256)),
        COERCE_DOUBLE((unsigned __int64)(unsigned int)v260));
      alacritty::renderer::text::builtin_font::Canvas::draw_v_line(&v267, v134, *(float *)&v266, 0.0, *(float *)&v265);
      alacritty::renderer::text::builtin_font::Canvas::draw_v_line(&v267, v134, v246.m128_f32[0], 0.0, *(float *)&v251);
      alacritty::renderer::text::builtin_font::Canvas::draw_v_line(
        &v267,
        v134,
        *(float *)&v266,
        COERCE_DOUBLE((unsigned __int64)(unsigned int)v252),
        v249.m128_f32[0]);
LABEL_342:
      alacritty::renderer::text::builtin_font::Canvas::draw_v_line(
        &v267,
        v134,
        v246.m128_f32[0],
        COERCE_DOUBLE((unsigned __int64)v247.m128_u32[0]),
        v249.m128_f32[0]);
LABEL_343:
      v229 = v272[4];
      v230 = 0x7FFFFFFF;
      if ( v229 <= 2147483500.0 )
        v230 = (int)v229;
      result = (unsigned int)(v248 + v230);
      v231 = v268;
      v232 = 3 * v267;
      v233 = 3 * v269;
      *(_DWORD *)(v23 + 40) = v20;
      v234 = v258;
      *(_DWORD *)(v23 + 44) = v258;
      v235 = v261;
      *(_DWORD *)(v23 + 48) = v261;
      *(_QWORD *)(v23 + 52) = (unsigned int)result;
      *(_DWORD *)(v23 + 32) = v234;
      *(_DWORD *)(v23 + 36) = v235;
      *(_QWORD *)v23 = 0LL;
      *(_QWORD *)(v23 + 8) = v232;
      *(_QWORD *)(v23 + 16) = v231;
      *(_QWORD *)(v23 + 24) = v233;
      return result;
  }
}