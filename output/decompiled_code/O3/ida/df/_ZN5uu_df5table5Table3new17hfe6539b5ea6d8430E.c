__int64 __fastcall uu_df::table::Table::new(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  _DWORD *v5; // rax
  double v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbx
  _DWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  _BYTE *v28; // rax
  _BYTE *v29; // r15
  _BYTE *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // r11
  __int64 v46; // rdx
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r14
  __int64 v49; // r10
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rsi
  __m128i si128; // xmm3
  __m128d v55; // xmm0
  __m128d v56; // xmm1
  __m128d v57; // xmm1
  __m128d v58; // xmm0
  __int64 (__fastcall *v59)(); // rbx
  __int64 v60; // rbx
  __int64 v61; // r13
  __int64 v62; // r15
  __int64 v63; // rax
  _BYTE *v64; // rax
  _BYTE *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // r13
  __int128 v68; // kr30_16
  __m128i v69; // xmm0
  __int64 v70; // rbx
  __m128i v71; // xmm4
  __m128i v72; // xmm0
  __int64 v73; // rax
  __m128i v74; // xmm2
  __m128d v75; // xmm0
  double v76; // xmm1_8
  __m128d v77; // xmm0
  __int64 v78; // rbx
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // rbx
  __int64 v87; // r14
  __int64 v88; // rbp
  __int64 v89; // r15
  __int64 v90; // r12
  unsigned __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // r15
  __int64 v96; // rbx
  int v97; // ebp
  unsigned int v98; // eax
  bool v99; // r14
  __int64 v100; // rcx
  char v102; // [rsp+7h] [rbp-431h]
  __int64 v103; // [rsp+8h] [rbp-430h]
  __int64 v104; // [rsp+8h] [rbp-430h]
  __int64 v105; // [rsp+8h] [rbp-430h]
  __int64 v106; // [rsp+8h] [rbp-430h]
  int v107; // [rsp+10h] [rbp-428h]
  __int64 v108; // [rsp+10h] [rbp-428h]
  __int64 v109; // [rsp+10h] [rbp-428h]
  __int64 v110; // [rsp+10h] [rbp-428h]
  __int64 v111; // [rsp+18h] [rbp-420h]
  unsigned __int64 v112; // [rsp+18h] [rbp-420h]
  _BYTE *v113; // [rsp+18h] [rbp-420h]
  __int64 v114; // [rsp+18h] [rbp-420h]
  __m128i v115; // [rsp+20h] [rbp-418h] BYREF
  double v116; // [rsp+38h] [rbp-400h]
  __int128 v117; // [rsp+40h] [rbp-3F8h]
  unsigned __int64 v118; // [rsp+50h] [rbp-3E8h]
  __int128 v119; // [rsp+58h] [rbp-3E0h] BYREF
  __int64 v120; // [rsp+68h] [rbp-3D0h]
  __int64 v121; // [rsp+70h] [rbp-3C8h]
  __int128 v122; // [rsp+78h] [rbp-3C0h] BYREF
  __int64 v123; // [rsp+88h] [rbp-3B0h]
  __int64 v124; // [rsp+90h] [rbp-3A8h]
  __int64 v125; // [rsp+98h] [rbp-3A0h]
  _BYTE *v126; // [rsp+A0h] [rbp-398h]
  __int64 v127; // [rsp+A8h] [rbp-390h]
  __m128i v128; // [rsp+B0h] [rbp-388h]
  __int128 *v129; // [rsp+C8h] [rbp-370h] BYREF
  __int64 (__fastcall *v130)(); // [rsp+D0h] [rbp-368h]
  char v131; // [rsp+D8h] [rbp-360h]
  __int64 *v132; // [rsp+E0h] [rbp-358h]
  __int64 v133; // [rsp+E8h] [rbp-350h]
  _BYTE *v134; // [rsp+F0h] [rbp-348h]
  __int64 v135; // [rsp+F8h] [rbp-340h]
  __int64 v136; // [rsp+100h] [rbp-338h] BYREF
  double v137; // [rsp+108h] [rbp-330h]
  __int64 v138; // [rsp+110h] [rbp-328h]
  double v139; // [rsp+118h] [rbp-320h]
  __int128 v140; // [rsp+120h] [rbp-318h]
  __int128 v141; // [rsp+130h] [rbp-308h]
  __int128 v142; // [rsp+140h] [rbp-2F8h]
  __int64 v143; // [rsp+150h] [rbp-2E8h]
  __int64 v144; // [rsp+158h] [rbp-2E0h]
  __int64 v145; // [rsp+160h] [rbp-2D8h]
  __int64 v146; // [rsp+168h] [rbp-2D0h]
  _BYTE *v147; // [rsp+170h] [rbp-2C8h]
  __int64 v148; // [rsp+178h] [rbp-2C0h]
  __int64 v149; // [rsp+180h] [rbp-2B8h]
  _BYTE *v150; // [rsp+188h] [rbp-2B0h]
  __int64 v151; // [rsp+190h] [rbp-2A8h]
  unsigned __int64 v152; // [rsp+198h] [rbp-2A0h]
  __int64 v153; // [rsp+1A0h] [rbp-298h]
  __m128i v154; // [rsp+1B0h] [rbp-288h]
  __int64 v155; // [rsp+1C0h] [rbp-278h]
  __int64 v156; // [rsp+1D8h] [rbp-260h] BYREF
  __int64 v157; // [rsp+1E0h] [rbp-258h]
  __int64 v158; // [rsp+1E8h] [rbp-250h]
  __int128 v159; // [rsp+1F0h] [rbp-248h] BYREF
  __int64 v160; // [rsp+200h] [rbp-238h]
  __int64 v161; // [rsp+210h] [rbp-228h]
  double v162; // [rsp+218h] [rbp-220h]
  _OWORD dest[13]; // [rsp+220h] [rbp-218h] BYREF
  __int128 v164; // [rsp+2F8h] [rbp-140h] BYREF
  __int64 v165; // [rsp+308h] [rbp-130h]
  _OWORD src[13]; // [rsp+310h] [rbp-128h] BYREF
  _QWORD v167[10]; // [rsp+3E8h] [rbp-50h] BYREF

  v132 = a3;
  v133 = a1;
  *(_QWORD *)&v122 = 0LL;
  *((_QWORD *)&v122 + 1) = 8LL;
  v123 = 0LL;
  v126 = *(_BYTE **)(a2 + 8);
  v121 = a2;
  v127 = *(_QWORD *)(a2 + 16);
  if ( !v127 )
    goto LABEL_46;
  v107 = *(unsigned __int8 *)(v121 + 85);
  v115.m128i_i64[0] = v121 + 72;
  v103 = *(_QWORD *)(v121 + 72);
  v3 = 0LL;
  switch ( *v126 )
  {
    case 0:
LABEL_3:
      v4 = 10LL;
      v5 = (_DWORD *)_rust_alloc(10LL, 1LL);
      if ( !v5 )
        goto LABEL_6;
      v6 = *(double *)&v5;
      qmemcpy(v5, "Filesystem", 10);
      goto LABEL_5;
    case 1:
LABEL_7:
      if ( v107 != 1 )
      {
        if ( v107 == 2 )
        {
          *(_QWORD *)&v119 = v103;
          v129 = &v119;
          v130 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&dest[0] = &unk_100118;
          *((_QWORD *)&dest[0] + 1) = 2LL;
          *(_QWORD *)&dest[2] = 0LL;
          *(_QWORD *)&dest[1] = &v129;
          *((_QWORD *)&dest[1] + 1) = 1LL;
          alloc::fmt::format::format_inner(&v136, dest);
          v7 = v136;
          v6 = v137;
          v8 = v138;
        }
        else
        {
          v129 = (__int128 *)v115.m128i_i64[0];
          v130 = <uu_df::blocks::BlockSize as core::fmt::Display>::fmt;
          *(_QWORD *)&dest[0] = &unk_100118;
          *((_QWORD *)&dest[0] + 1) = 2LL;
          *(_QWORD *)&dest[2] = 0LL;
          *(_QWORD *)&dest[1] = &v129;
          *((_QWORD *)&dest[1] + 1) = 1LL;
          alloc::fmt::format::format_inner(src, dest);
          v6 = *((double *)src + 1);
          v7 = *(_QWORD *)&src[0];
          v8 = *(_QWORD *)&src[1];
        }
        break;
      }
      v4 = 4LL;
      v9 = (_DWORD *)_rust_alloc(4LL, 1LL);
      if ( !v9 )
        goto LABEL_6;
      v6 = *(double *)&v9;
      *v9 = 1702521171;
      goto LABEL_41;
    case 2:
LABEL_17:
      v4 = 4LL;
      v13 = (_DWORD *)_rust_alloc(4LL, 1LL);
      if ( !v13 )
        goto LABEL_6;
      v6 = *(double *)&v13;
      *v13 = 1684370261;
      goto LABEL_41;
    case 3:
LABEL_23:
      if ( (v107 | 2) == 3 )
      {
        v4 = 5LL;
        v16 = _rust_alloc(5LL, 1LL);
        if ( v16 )
        {
          v6 = *(double *)&v16;
          *(_BYTE *)(v16 + 4) = 108;
          *(_DWORD *)v16 = 1767994945;
LABEL_45:
          v7 = 5LL;
          v8 = 5LL;
          break;
        }
LABEL_6:
        alloc::raw_vec::handle_error(1LL, v4);
      }
      v4 = 9LL;
      v17 = _rust_alloc(9LL, 1LL);
      if ( !v17 )
        goto LABEL_6;
      v6 = *(double *)&v17;
      *(_QWORD *)v17 = 0x6C62616C69617641LL;
      *(_BYTE *)(v17 + 8) = 101;
      v7 = 9LL;
      v8 = 9LL;
      break;
    case 4:
LABEL_28:
      if ( v107 == 2 )
      {
        v4 = 8LL;
        v18 = (_QWORD *)_rust_alloc(8LL, 1LL);
        if ( !v18 )
          goto LABEL_6;
        v6 = *(double *)&v18;
        *v18 = 0x7974696361706143LL;
        v7 = 8LL;
        v8 = 8LL;
      }
      else
      {
        v4 = 4LL;
        v19 = (_DWORD *)_rust_alloc(4LL, 1LL);
        if ( !v19 )
          goto LABEL_6;
        v6 = *(double *)&v19;
        *v19 = 627405653;
LABEL_41:
        v7 = 4LL;
        v8 = 4LL;
      }
      break;
    case 5:
LABEL_19:
      v4 = 10LL;
      v14 = (_DWORD *)_rust_alloc(10LL, 1LL);
      if ( !v14 )
        goto LABEL_6;
      v6 = *(double *)&v14;
      qmemcpy(v14, "Mounted on", 10);
LABEL_5:
      v7 = 10LL;
      v8 = 10LL;
      break;
    case 6:
LABEL_35:
      v4 = 6LL;
      v21 = _rust_alloc(6LL, 1LL);
      if ( !v21 )
        goto LABEL_6;
      v6 = *(double *)&v21;
      *(_WORD *)(v21 + 4) = 29541;
      *(_DWORD *)v21 = 1685024329;
      v7 = 6LL;
      v8 = 6LL;
      break;
    case 7:
LABEL_37:
      v4 = 5LL;
      v22 = _rust_alloc(5LL, 1LL);
      if ( !v22 )
        goto LABEL_6;
      v6 = *(double *)&v22;
      *(_BYTE *)(v22 + 4) = 100;
      goto LABEL_44;
    case 8:
LABEL_33:
      v4 = 5LL;
      v20 = _rust_alloc(5LL, 1LL);
      if ( !v20 )
        goto LABEL_6;
      v6 = *(double *)&v20;
      *(_BYTE *)(v20 + 4) = 101;
      *(_DWORD *)v20 = 1701987913;
      goto LABEL_45;
    case 9:
LABEL_42:
      v4 = 5LL;
      v24 = _rust_alloc(5LL, 1LL);
      if ( !v24 )
        goto LABEL_6;
      v6 = *(double *)&v24;
      *(_BYTE *)(v24 + 4) = 37;
LABEL_44:
      **(_DWORD **)&v6 = 1702057289;
      goto LABEL_45;
    case 0xA:
LABEL_21:
      v4 = 4LL;
      v15 = (_DWORD *)_rust_alloc(4LL, 1LL);
      if ( !v15 )
        goto LABEL_6;
      v6 = *(double *)&v15;
      *v15 = 1701603654;
      goto LABEL_41;
    case 0xB:
LABEL_39:
      v4 = 4LL;
      v23 = (_DWORD *)_rust_alloc(4LL, 1LL);
      if ( !v23 )
        goto LABEL_6;
      v6 = *(double *)&v23;
      *v23 = 1701869908;
      goto LABEL_41;
  }
  v10 = v123;
  if ( v123 == (_QWORD)v122 )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v122);
  v11 = *((_QWORD *)&v122 + 1);
  v12 = 3 * v10;
  *(_QWORD *)(*((_QWORD *)&v122 + 1) + 8 * v12) = v7;
  *(double *)(v11 + 8 * v12 + 8) = v6;
  *(_QWORD *)(v11 + 8 * v12 + 16) = v8;
  v123 = v10 + 1;
  if ( v127 != ++v3 )
  {
    switch ( v126[v3] )
    {
      case 0:
        goto LABEL_3;
      case 1:
        goto LABEL_7;
      case 2:
        goto LABEL_17;
      case 3:
        goto LABEL_23;
      case 4:
        goto LABEL_28;
      case 5:
        goto LABEL_19;
      case 6:
        goto LABEL_35;
      case 7:
        goto LABEL_37;
      case 8:
        goto LABEL_33;
      case 9:
        goto LABEL_42;
      case 0xA:
        goto LABEL_21;
      case 0xB:
        goto LABEL_39;
    }
  }
LABEL_46:
  v160 = v123;
  v159 = v122;
  v167[0] = v126;
  v167[1] = &v126[v127];
  v167[2] = 0LL;
  v167[3] = &v159;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v156, v167);
  v25 = _rust_alloc(24LL, 8LL);
  v161 = v25;
  if ( !v25 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  *(_QWORD *)(v25 + 16) = v160;
  *(_OWORD *)v25 = v159;
  *(_QWORD *)&v119 = 1LL;
  *((_QWORD *)&v119 + 1) = v25;
  v120 = 1LL;
  v26 = _rust_alloc(5LL, 1LL);
  if ( !v26 )
    alloc::raw_vec::handle_error(1LL, 5LL);
  v27 = v26;
  *(_BYTE *)(v26 + 4) = 108;
  *(_DWORD *)v26 = 1635020660;
  v28 = (_BYTE *)_rust_alloc(1LL, 1LL);
  if ( !v28 )
    alloc::raw_vec::handle_error(1LL, 1LL);
  v29 = v28;
  *v28 = 45;
  v30 = (_BYTE *)_rust_alloc(1LL, 1LL);
  if ( !v30 )
    alloc::raw_vec::handle_error(1LL, 1LL);
  *v30 = 45;
  v152 = 0x8000000000000000LL;
  v143 = 5LL;
  v144 = v27;
  v145 = 5LL;
  v146 = 1LL;
  v147 = v29;
  v148 = 1LL;
  v149 = 1LL;
  v150 = v30;
  v151 = 1LL;
  v136 = 0LL;
  v138 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v31 = *v132;
  v32 = v132[2];
  *(_QWORD *)&v122 = v132[1];
  *((_QWORD *)&v122 + 1) = v122;
  v123 = v31;
  v135 = v122 + 232 * v32;
  v124 = v135;
  v33 = v121;
  if ( v32 )
  {
    v102 = *(_BYTE *)(v121 + 81);
    v34 = v122 + 232;
    while ( 1 )
    {
      v38 = *(_QWORD *)(v34 - 232);
      if ( v38 == 0x8000000000000000LL )
      {
LABEL_106:
        *((_QWORD *)&v122 + 1) = v34;
        goto LABEL_107;
      }
      v116 = *(double *)(v34 - 224);
      v39 = *(_QWORD *)(v34 - 208);
      v128.m128i_i64[0] = *(_QWORD *)(v34 - 200);
      v40 = *(_QWORD *)(v34 - 192);
      v111 = *(_QWORD *)(v34 - 184);
      v125 = *(_QWORD *)(v34 - 176);
      v41 = *(_QWORD *)(v34 - 168);
      v104 = *(_QWORD *)(v34 - 160);
      *(_QWORD *)&v117 = *(_QWORD *)(v34 - 152);
      v108 = *(_QWORD *)(v34 - 136);
      v118 = *(_QWORD *)(v34 - 128);
      v42 = *(_QWORD *)(v34 - 120);
      v115.m128i_i64[0] = *(_QWORD *)(v34 - 112);
      *((_QWORD *)&v117 + 1) = *(_QWORD *)(v34 - 104);
      v43 = *(_QWORD *)(v34 - 80);
      v44 = *(_QWORD *)(v34 - 72);
      v45 = *(_QWORD *)(v34 - 64);
      v46 = *(_QWORD *)(v34 - 56);
      v47 = *(_QWORD *)(v34 - 48);
      v48 = *(_QWORD *)(v34 - 40);
      v49 = *(_QWORD *)(v34 - 32);
      v50 = *(_QWORD *)(v34 - 24);
      v51 = *(_QWORD *)(v34 - 16);
      if ( v102 || v47 )
      {
        *(_QWORD *)&src[5] = v39;
        *((_QWORD *)&src[5] + 1) = v128.m128i_i64[0];
        *(_QWORD *)&src[6] = v40;
        *((_QWORD *)&src[6] + 1) = v111;
        *(_QWORD *)&src[7] = v125;
        *((_QWORD *)&src[7] + 1) = v41;
        *(_QWORD *)&src[8] = v108;
        *((_QWORD *)&src[8] + 1) = v118;
        *(_QWORD *)&src[9] = v42;
        v52 = v47 - v48;
        *((_QWORD *)&src[9] + 1) = v43;
        if ( v47 < v48 )
          v52 = 0LL;
        *(_QWORD *)&src[10] = v44;
        v53 = v50 - v51;
        if ( v50 < v51 )
          v53 = 0LL;
        *((_QWORD *)&src[10] + 1) = v45;
        *(_QWORD *)&src[11] = v46 * v47;
        *((_QWORD *)&src[11] + 1) = v46 * v52;
        *(_QWORD *)&src[12] = v49 * v46;
        si128 = _mm_load_si128((const __m128i *)&xmmword_A980);
        v55 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v52, si128), (__m128d)xmmword_A8F0);
        v56 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)(v49 + v52), si128), (__m128d)xmmword_A8F0);
        *(_QWORD *)&src[0] = v47 != 0;
        *((double *)src + 1) = (_mm_unpackhi_pd(v55, v55).m128d_f64[0] + v55.m128d_f64[0])
                             / (_mm_unpackhi_pd(v56, v56).m128d_f64[0] + v56.m128d_f64[0]);
        src[2] = v50;
        src[3] = v53;
        src[4] = v51;
        *(_QWORD *)&src[1] = v50 != 0;
        v57 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v53, si128), (__m128d)xmmword_A8F0);
        v58 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v50, si128), (__m128d)xmmword_A8F0);
        *((double *)&src[1] + 1) = (_mm_unpackhi_pd(v57, v57).m128d_f64[0] + v57.m128d_f64[0])
                                 / (_mm_unpackhi_pd(v58, v58).m128d_f64[0] + v58.m128d_f64[0]);
        if ( v38 )
          _rust_dealloc(*(_QWORD *)&v116, v38, 1LL);
        v59 = (__int64 (__fastcall *)())v121;
        if ( v104 )
          _rust_dealloc(v117, v104, 1LL);
        if ( v115.m128i_i64[0] )
          _rust_dealloc(*((_QWORD *)&v117 + 1), v115.m128i_i64[0], 1LL);
        v129 = src;
        v130 = v59;
        v131 = 0;
        uu_df::table::RowFormatter::get_values(&v164, (__int64 *)&v129);
        memcpy(dest, src, sizeof(dest));
        v128 = v154;
        v115 = (__m128i)dest[11];
        v125 = v155;
        v109 = *(_QWORD *)&dest[12];
        v117 = v140;
        v112 = *((_QWORD *)&dest[2] + 1);
        v118 = *(_QWORD *)&dest[2];
        v116 = *((double *)&v141 + 1);
        v60 = v141;
        v61 = *((_QWORD *)&dest[3] + 1);
        v62 = *(_QWORD *)&dest[3];
        v63 = _rust_alloc(5LL, 1LL);
        if ( !v63 )
        {
          *((_QWORD *)&v122 + 1) = v34;
          alloc::raw_vec::handle_error(1LL, 5LL);
        }
        *(_BYTE *)(v63 + 4) = 108;
        v105 = v63;
        *(_DWORD *)v63 = 1635020660;
        v64 = (_BYTE *)_rust_alloc(1LL, 1LL);
        if ( !v64 )
        {
          *((_QWORD *)&v122 + 1) = v34;
          alloc::raw_vec::handle_error(1LL, 1LL);
        }
        v134 = v64;
        *v64 = 45;
        v65 = (_BYTE *)_rust_alloc(1LL, 1LL);
        if ( !v65 )
        {
          *((_QWORD *)&v122 + 1) = v34;
          alloc::raw_vec::handle_error(1LL, 1LL);
        }
        v66 = v60 + v62;
        v67 = *(_QWORD *)&v116 + __CFADD__(v60, v62) + v61;
        v68 = v117 + __PAIR128__(v112, v118);
        v69 = _mm_add_epi64(_mm_load_si128(&v115), v128);
        v113 = v65;
        *v65 = 45;
        v115 = v69;
        BYTE8(v117) = v69.m128i_i64[0] != 0;
        v118 = v142 + *(_QWORD *)&dest[4];
        v128.m128i_i64[0] = (unsigned __int128)(v142 + dest[4]) >> 64;
        LOBYTE(v117) = v68 != 0;
        v116 = _floatuntidf(v60 + v62, v67);
        v162 = _floatuntidf(v68, *((_QWORD *)&v68 + 1));
        if ( v152 != 0x8000000000000000LL && v152 )
          _rust_dealloc(v153, v152, 1LL);
        v70 = v121;
        if ( v143 )
          _rust_dealloc(v144, v143, 1LL);
        if ( v146 )
          _rust_dealloc(v147, v146, 1LL);
        if ( v149 )
          _rust_dealloc(v150, v149, 1LL);
        v71 = _mm_load_si128(&v115);
        v72 = _mm_shuffle_epi32(v71, 238);
        v73 = v72.m128i_i64[0];
        v74 = _mm_load_si128((const __m128i *)&xmmword_A980);
        v75 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32(v72, v74), (__m128d)xmmword_A8F0);
        v76 = _mm_unpackhi_pd(v75, v75).m128d_f64[0] + v75.m128d_f64[0];
        v77 = _mm_sub_pd(
                (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)(v125 + v109 + v73), v74),
                (__m128d)xmmword_A8F0);
        v136 = BYTE8(v117);
        v137 = v76 / (_mm_unpackhi_pd(v77, v77).m128d_f64[0] + v77.m128d_f64[0]);
        v138 = (unsigned __int8)v117;
        v139 = v116 / v162;
        v140 = v68;
        *(_QWORD *)&v141 = v66;
        *((_QWORD *)&v141 + 1) = v67;
        *(_QWORD *)&v142 = v118;
        *((_QWORD *)&v142 + 1) = v128.m128i_i64[0];
        v143 = 5LL;
        v144 = v105;
        v145 = 5LL;
        v146 = 1LL;
        v147 = v134;
        v148 = 1LL;
        v149 = 1LL;
        v150 = v113;
        v151 = 1LL;
        v152 = 0x8000000000000000LL;
        v154 = v71;
        v155 = v125 + v109;
        if ( *((_QWORD *)&dest[9] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[9] + 1) )
          _rust_dealloc(*(_QWORD *)&dest[10], *((_QWORD *)&dest[9] + 1), 1LL);
        v33 = v70;
        if ( *(_QWORD *)&dest[5] )
          _rust_dealloc(*((_QWORD *)&dest[5] + 1), *(_QWORD *)&dest[5], 1LL);
        if ( *((_QWORD *)&dest[6] + 1) )
          _rust_dealloc(*(_QWORD *)&dest[7], *((_QWORD *)&dest[6] + 1), 1LL);
        if ( *(_QWORD *)&dest[8] )
          _rust_dealloc(*((_QWORD *)&dest[8] + 1), *(_QWORD *)&dest[8], 1LL);
        v78 = v120;
        if ( v120 == (_QWORD)v119 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v119);
        v35 = *((_QWORD *)&v119 + 1);
        v36 = 3 * v78;
        *(_QWORD *)(*((_QWORD *)&v119 + 1) + 8 * v36 + 16) = v165;
        *(_OWORD *)(v35 + 8 * v36) = v164;
        v120 = v78 + 1;
        goto LABEL_53;
      }
      if ( 2 * v43 )
        break;
      if ( v38 )
        goto LABEL_59;
LABEL_60:
      if ( v39 )
        _rust_dealloc(v128.m128i_i64[0], v39, 1LL);
      if ( v111 )
        _rust_dealloc(v125, v111, 1LL);
      if ( v104 )
        _rust_dealloc(v117, v104, 1LL);
      v33 = v121;
      if ( v108 )
        _rust_dealloc(v118, v108, 1LL);
      if ( v115.m128i_i64[0] )
        _rust_dealloc(*((_QWORD *)&v117 + 1), v115.m128i_i64[0], 1LL);
LABEL_53:
      v37 = v34 - 232;
      v34 += 232LL;
      if ( v37 + 232 == v135 )
      {
        v34 = v135;
        goto LABEL_106;
      }
    }
    _rust_dealloc(v44, v43, 1LL);
    if ( !v38 )
      goto LABEL_60;
LABEL_59:
    _rust_dealloc(*(_QWORD *)&v116, v38, 1LL);
    goto LABEL_60;
  }
LABEL_107:
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v122);
  if ( *(_BYTE *)(v33 + 83) )
  {
    *(_QWORD *)&src[0] = &v136;
    *((_QWORD *)&src[0] + 1) = v33;
    LOBYTE(src[1]) = 1;
    uu_df::table::RowFormatter::get_values(dest, (__int64 *)src);
    v79 = v120;
    if ( v120 == (_QWORD)v119 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v119);
    v80 = *((_QWORD *)&v119 + 1);
    v81 = 3 * v79;
    *(_QWORD *)(*((_QWORD *)&v119 + 1) + 8 * v81 + 16) = *(_QWORD *)&dest[1];
    *(_OWORD *)(v80 + 8 * v81) = dest[0];
    v82 = v79 + 1;
    v120 = v82;
    if ( v82 )
      goto LABEL_111;
LABEL_120:
    v115.m128i_i64[0] = v157;
    v106 = v158;
    goto LABEL_121;
  }
  v82 = v120;
  if ( !v120 )
    goto LABEL_120;
LABEL_111:
  v83 = *((_QWORD *)&v119 + 1);
  v114 = *((_QWORD *)&v119 + 1) + 24 * v82;
  v115.m128i_i64[0] = v157;
  v106 = v158;
  do
  {
    v110 = v83;
    v84 = *(_QWORD *)(v83 + 16);
    if ( v84 )
    {
      v85 = *(_QWORD *)(v83 + 8);
      v86 = 24 * v84;
      v87 = 0LL;
      v88 = 0LL;
      do
      {
        v89 = *(_QWORD *)(v85 + v87 + 8);
        v90 = *(_QWORD *)(v85 + v87 + 16);
        v91 = unicode_width::str_width(v89, v90, 0LL);
        if ( v106 == v88 )
          core::panicking::panic_bounds_check(v106, v106, &off_100138, v92, v93);
        if ( v91 > *(_QWORD *)(v115.m128i_i64[0] + 8 * v88) )
        {
          v94 = unicode_width::str_width(v89, v90, 0LL);
          *(_QWORD *)(v115.m128i_i64[0] + 8 * v88) = v94;
        }
        v87 += 24LL;
        ++v88;
      }
      while ( v86 != v87 );
    }
    v83 = v110 + 24;
  }
  while ( v110 + 24 != v114 );
LABEL_121:
  *(_QWORD *)&src[1] = v120;
  src[0] = v119;
  v95 = v156;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  if ( v127 )
  {
    v96 = 0LL;
    v97 = 3105;
    do
    {
      v98 = (unsigned __int8)v126[v96];
      v99 = 1;
      if ( v98 <= 0xB )
        v99 = !_bittest(&v97, v98);
      if ( v96 == *(_QWORD *)&dest[0] )
        alloc::raw_vec::RawVec<T,A>::grow_one(dest);
      *(_BYTE *)(*((_QWORD *)&dest[0] + 1) + v96++) = v99;
      *(_QWORD *)&dest[1] = v96;
    }
    while ( v127 != v96 );
  }
  v100 = v133;
  *(_QWORD *)(v133 + 16) = *(_QWORD *)&dest[1];
  *(_OWORD *)v100 = dest[0];
  *(_QWORD *)(v100 + 40) = *(_QWORD *)&src[1];
  *(_OWORD *)(v100 + 24) = src[0];
  *(_QWORD *)(v100 + 48) = v95;
  *(_QWORD *)(v100 + 56) = v115.m128i_i64[0];
  *(_QWORD *)(v100 + 64) = v106;
  if ( v152 != 0x8000000000000000LL && v152 )
    _rust_dealloc(v153, v152, 1LL);
  if ( v143 )
    _rust_dealloc(v144, v143, 1LL);
  if ( v146 )
    _rust_dealloc(v147, v146, 1LL);
  if ( v149 )
    _rust_dealloc(v150, v149, 1LL);
  return v133;
}
