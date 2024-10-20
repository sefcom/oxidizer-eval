        __int64 a6)
{
  char *v6; // r12
  char *v8; // r13
  __int64 v10; // rcx
  int v11; // eax
  char v12; // r15
  unsigned __int64 v13; // r14
  __int64 (__fastcall *v14)(); // rdi
  char v15; // al
  int v16; // ecx
  char v17; // dl
  char v18; // si
  int v19; // esi
  char *v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // r13
  double v24; // rax
  double v25; // xmm1_8
  unsigned __int64 v26; // rax
  unsigned int v27; // ebx
  int v28; // edx
  unsigned __int64 v29; // rcx
  char v30; // al
  char *v31; // rcx
  __int64 v32; // rdx
  void *v33; // rax
  __m128d v34; // xmm2
  __m128d v35; // xmm0
  unsigned __int8 v36; // al
  bool v37; // cl
  bool v38; // al
  double v39; // r14
  __int64 *v40; // rsi
  char v41; // cl
  unsigned __int8 v42; // bl
  char *v43; // rcx
  __m128d v44; // xmm2
  __m128d v45; // xmm0
  unsigned __int8 v46; // al
  int v47; // ebp
  unsigned __int64 v48; // r12
  char v49; // r15
  char v50; // dl
  __int64 v51; // rbx
  char v52; // r15
  __int64 v53; // rsi
  int v54; // edx
  double *v55; // rcx
  double v56; // xmm0_8
  __int64 v57; // r13
  char v58; // bl
  __m128d v59; // xmm0
  double v60; // xmm1_8
  __int64 v61; // rcx
  double v62; // xmm0_8
  __m128d v63; // xmm0
  _QWORD *v64; // rbx
  __m128d v65; // xmm0
  __int64 *v66; // rsi
  double v67; // xmm2_8
  double v68; // rax
  unsigned __int8 *v69; // rax
  int v70; // edx
  int v71; // esi
  int v72; // r8d
  int v73; // edi
  __m128d v74; // xmm0
  __int64 v75; // r12
  _BYTE *v76; // r15
  __int128 v77; // xmm0
  __int64 v78; // rcx
  __m128d v79; // xmm0
  __int64 v81; // [rsp+0h] [rbp-268h] BYREF
  __int64 (__fastcall *v82)(); // [rsp+8h] [rbp-260h]
  __int128 *v83; // [rsp+10h] [rbp-258h]
  __int64 (__fastcall *v84)(); // [rsp+18h] [rbp-250h]
  __int128 *v85; // [rsp+20h] [rbp-248h]
  __int64 v86; // [rsp+28h] [rbp-240h]
  __int128 x; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int64 v88; // [rsp+40h] [rbp-228h]
  __int64 (__fastcall *v89)(); // [rsp+48h] [rbp-220h]
  __int128 *v90; // [rsp+50h] [rbp-218h]
  __int64 v91; // [rsp+58h] [rbp-210h]
  double v92; // [rsp+68h] [rbp-200h]
  __int128 v93; // [rsp+70h] [rbp-1F8h] BYREF
  _QWORD *v94; // [rsp+80h] [rbp-1E8h]
  _OWORD *v95; // [rsp+88h] [rbp-1E0h]
  __int128 v96; // [rsp+90h] [rbp-1D8h] BYREF
  _QWORD *v97; // [rsp+A0h] [rbp-1C8h]
  __int128 v98; // [rsp+B0h] [rbp-1B8h] BYREF
  __int64 *p_x; // [rsp+C0h] [rbp-1A8h]
  __int64 (__fastcall *v100)(); // [rsp+C8h] [rbp-1A0h]
  __int128 *v101; // [rsp+D0h] [rbp-198h]
  __int64 (__fastcall *v102)(); // [rsp+D8h] [rbp-190h]
  char v103; // [rsp+E0h] [rbp-188h]
  __int64 v104; // [rsp+E8h] [rbp-180h]
  __int64 v105; // [rsp+F8h] [rbp-170h]
  __int64 v106; // [rsp+108h] [rbp-160h]
  __int64 v107; // [rsp+110h] [rbp-158h]
  char v108; // [rsp+118h] [rbp-150h]
  __int64 v109; // [rsp+120h] [rbp-148h]
  double v110; // [rsp+128h] [rbp-140h]
  __int64 v111; // [rsp+130h] [rbp-138h]
  _QWORD v112[2]; // [rsp+138h] [rbp-130h] BYREF
  __int128 v113; // [rsp+148h] [rbp-120h] BYREF
  _QWORD *v114; // [rsp+158h] [rbp-110h]
  __m128d v115; // [rsp+160h] [rbp-108h]
  __int64 v116; // [rsp+170h] [rbp-F8h]
  __int64 v117; // [rsp+178h] [rbp-F0h]
  int v118; // [rsp+180h] [rbp-E8h]
  __int16 v119; // [rsp+184h] [rbp-E4h]
  __int128 v120; // [rsp+188h] [rbp-E0h] BYREF
  _QWORD *v121; // [rsp+198h] [rbp-D0h]
  __int128 v122; // [rsp+1A0h] [rbp-C8h] BYREF
  _QWORD *v123; // [rsp+1B0h] [rbp-B8h]
  __int128 v124; // [rsp+1B8h] [rbp-B0h] BYREF
  _QWORD *v125; // [rsp+1C8h] [rbp-A0h]
  __int128 v126; // [rsp+1D0h] [rbp-98h] BYREF
  _QWORD *v127; // [rsp+1E0h] [rbp-88h]
  __int128 v128; // [rsp+1E8h] [rbp-80h] BYREF
  __int64 v129; // [rsp+1F8h] [rbp-70h]
  _BYTE v130[24]; // [rsp+200h] [rbp-68h] BYREF
  _BYTE v131[80]; // [rsp+218h] [rbp-50h] BYREF

  v111 = a6;
  v117 = a5;
  v8 = a3;
  v109 = a1;
  v116 = *(_QWORD *)(a4 + 136);
  if ( v116 != 0x8000000000000000LL )
  {
    v6 = *(char **)(a4 + 152);
    if ( a3 >= v6 )
    {
      v11 = bcmp(*(const void **)(a4 + 144), (char *)a2 + a3 - v6, *(_QWORD *)(a4 + 152));
      v10 = 0LL;
      if ( !v11 )
        v10 = (__int64)v6;
    }
    else
    {
      v10 = 0LL;
    }
    v8 -= v10;
  }
  if ( *(_QWORD *)(a4 + 16) )
  {
    v95 = *(_OWORD **)(a4 + 24);
    v12 = *(_BYTE *)(a4 + 176);
    goto LABEL_9;
  }
  v12 = *(_BYTE *)(a4 + 176);
  v95 = 0LL;
  if ( __PAIR16__(*(_BYTE *)(a4 + 177), v12) != 1285 )
  {
LABEL_9:
    if ( v8 )
    {
      *(_QWORD *)&v115.m128d_f64[0] = a4;
      v13 = *(_QWORD *)(a4 + 160);
      goto LABEL_11;
    }
    v23 = 18LL;
    v24 = COERCE_DOUBLE(_rust_alloc(18LL, 1LL));
    if ( v24 == 0.0 )
      alloc::raw_vec::handle_error(1LL, 18LL);
    qmemcpy(*(void **)&v24, "invalid number: ''", 18);
    v25 = v24;
    LOBYTE(v6) = 18;
    v26 = 0LL;
    LOBYTE(v27) = 0;
    goto LABEL_61;
  }
  v95 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    v6 = (char *)a2 + (_QWORD)v20;
    if ( (unsigned __int64)(v8 - v20) > 0xF )
    {
      v22 = core::slice::memchr::memchr_aligned(46LL, (char *)a2 + (_QWORD)v20, v8 - v20);
      if ( v22 != 1 )
      {
        if ( !v22 )
        {
          v12 = 5;
          v95 = 0LL;
          goto LABEL_9;
        }
        goto LABEL_125;
      }
    }
    else
    {
      v12 = 5;
      if ( v8 == v20 )
        goto LABEL_9;
      v21 = 0LL;
      while ( v6[v21] != 46 )
      {
        if ( v8 - v20 == ++v21 )
          goto LABEL_9;
      }
    }
    v22 = (unsigned __int64)&v20[v21 + 1];
    if ( &v20[v21] < v8 && v6[v21] == 46 )
      break;
    v12 = 5;
    v20 += v21 + 1;
    if ( (unsigned __int64)v8 < v22 )
      goto LABEL_9;
  }
  if ( (char *)v22 != v8 )
  {
LABEL_125:
    v69 = (unsigned __int8 *)a2 + v22;
    v95 = 0LL;
    while ( 1 )
    {
      v70 = *v69;
      if ( (v70 & 0x80u) != 0 )
      {
        v71 = v70 & 0x1F;
        v72 = v69[1] & 0x3F;
        if ( (unsigned __int8)v70 <= 0xDFu )
        {
          v69 += 2;
          v70 = v72 | (v71 << 6);
        }
        else
        {
          v73 = (v72 << 6) | v69[2] & 0x3F;
          if ( (unsigned __int8)v70 < 0xF0u )
          {
            v69 += 3;
            v70 = (v71 << 12) | v73;
          }
          else
          {
            v70 = ((v70 & 7) << 18) | (v73 << 6) | v69[3] & 0x3F;
            if ( v70 == 1114112 )
            {
              v12 = 5;
              goto LABEL_9;
            }
            v69 += 4;
          }
        }
      }
      else
      {
        ++v69;
      }
      v12 = 5;
      if ( (unsigned int)(v70 - 48) <= 9 )
      {
        v95 = (_OWORD *)((char *)v95 + 1);
        if ( v69 != (unsigned __int8 *)a2 + (_QWORD)v8 )
          continue;
      }
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v115.m128d_f64[0] = a4;
  v13 = *(_QWORD *)(a4 + 160);
  v12 = 5;
  v95 = 0LL;
LABEL_11:
  v14 = (__int64 (__fastcall *)())&v8[(_QWORD)a2 - 1];
  v15 = v8[(_QWORD)a2 - 1];
  if ( v15 != 105 )
    v14 = (__int64 (__fastcall *)())((char *)a2 + (_QWORD)v8);
  if ( v14 == a2 )
  {
LABEL_43:
    v81 = 0LL;
    v82 = a2;
    v83 = (__int128 *)v8;
    LOBYTE(v84) = 1;
    *(_QWORD *)&x = &v81;
    *((_QWORD *)&x + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v98 = &off_FB060;
    *((_QWORD *)&v98 + 1) = 1LL;
    v101 = 0LL;
    p_x = (__int64 *)&x;
    v100 = (__int64 (__fastcall *)())(&dword_0 + 1);
    alloc::fmt::format::format_inner(&v96, &v98);
    v23 = v96;
    v25 = *((double *)&v96 + 1);
    LOBYTE(v6) = (_BYTE)v97;
    LOBYTE(v27) = BYTE1(v97);
    if ( (_QWORD)v96 != 0x8000000000000000LL )
    {
      v26 = *(unsigned int *)((char *)&v97 + 2) | ((unsigned __int64)HIWORD(v97) << 32);
LABEL_61:
      v32 = v109;
      v33 = (void *)((v26 << 16) | (unsigned __int8)v6 | ((unsigned __int8)v27 << 8));
LABEL_62:
      *(_QWORD *)(v32 + 8) = v23;
      *(double *)(v32 + 16) = v25;
      *(_QWORD *)(v32 + 24) = v33;
      *(_QWORD *)v32 = 1LL;
      return (char)v33;
    }
  }
  else
  {
    v16 = *((unsigned __int8 *)v14 - 1);
    if ( (v16 & 0x80u) != 0 )
    {
      v17 = *((_BYTE *)v14 - 2);
      if ( v17 >= -64 )
      {
        v28 = v17 & 0x1F;
      }
      else
      {
        v18 = *((_BYTE *)v14 - 3);
        if ( v18 >= -64 )
          v19 = v18 & 0xF;
        else
          v19 = ((*((_BYTE *)v14 - 4) & 7) << 6) | v18 & 0x3F;
        v28 = (v19 << 6) | v17 & 0x3F;
      }
      v16 = (v28 << 6) | v16 & 0x3F;
    }
    switch ( v16 )
    {
      case 'E':
        LOBYTE(v6) = 5;
        goto LABEL_52;
      case 'G':
        LOBYTE(v6) = 2;
        goto LABEL_52;
      case 'K':
        LOBYTE(v6) = 0;
        goto LABEL_52;
      case 'M':
        LOBYTE(v6) = 1;
        goto LABEL_52;
      case 'P':
        LOBYTE(v6) = 4;
        goto LABEL_52;
      case 'T':
        LOBYTE(v6) = 3;
        goto LABEL_52;
      case 'Y':
        LOBYTE(v6) = 7;
        goto LABEL_52;
      case 'Z':
        LOBYTE(v6) = 6;
LABEL_52:
        LOBYTE(v27) = v15 == 105;
        v29 = ~(unsigned __int64)(v15 == 105);
        v30 = 0;
        goto LABEL_53;
      default:
        if ( v15 == 105 || (unsigned int)(v16 - 58) < 0xFFFFFFF6 )
          goto LABEL_43;
        v29 = 0LL;
        LOBYTE(v27) = 2;
        v30 = 1;
LABEL_53:
        v31 = &v8[v29];
        if ( !v31 )
          goto LABEL_58;
        if ( v31 >= v8 )
        {
          if ( !v30 )
LABEL_56:
            core::str::slice_error_fail(a2, v8, 0LL, v31, &off_FB048);
        }
        else if ( v31[(_QWORD)a2] <= -65 )
        {
          goto LABEL_56;
        }
LABEL_58:
        core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(v112, a2, v31);
        if ( LOBYTE(v112[0]) )
        {
          v81 = 0LL;
          v82 = a2;
          v83 = (__int128 *)v8;
          LOBYTE(v84) = 1;
          *(_QWORD *)&v93 = &v81;
          *((_QWORD *)&v93 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v98 = &off_FB070;
          *((_QWORD *)&v98 + 1) = 1LL;
          v101 = 0LL;
          p_x = (__int64 *)&v93;
          v100 = (__int64 (__fastcall *)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&x, &v98);
          v23 = x;
          v25 = *((double *)&x + 1);
          if ( (_QWORD)x != 0x8000000000000000LL )
          {
            LOBYTE(v6) = v88;
            v27 = (unsigned int)v88 >> 8;
            v26 = v88 >> 16;
            goto LABEL_61;
          }
        }
        else
        {
          v25 = *(double *)&v112[1];
        }
        break;
    }
  }
  v34 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v13, (__m128i)xmmword_11770), (__m128d)xmmword_116A0);
  v35 = _mm_unpackhi_pd(v34, v34);
  v35.m128d_f64[0] = (v35.m128d_f64[0] + v34.m128d_f64[0]) * v25;
  *(double *)&v93 = v35.m128d_f64[0];
  v36 = v12 - 2;
  if ( (_BYTE)v27 == 2 )
  {
    v37 = v36 < 4u;
    v38 = v36 != 2;
    v39 = v115.m128d_f64[0];
    if ( (v12 & 1) != 0 && (!v38 || !v37) )
    {
      v81 = (__int64)&v93;
      v82 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
      *(_QWORD *)&v98 = &off_FB080;
      *((_QWORD *)&v98 + 1) = 2LL;
      v101 = 0LL;
      p_x = &v81;
      v100 = (__int64 (__fastcall *)())(&dword_0 + 1);
LABEL_69:
      v40 = (__int64 *)&v98;
LABEL_81:
      alloc::fmt::format::format_inner(&x, v40);
      v23 = x;
      v35 = (__m128d)*((unsigned __int64 *)&x + 1);
      if ( (_QWORD)x != 0x8000000000000000LL )
      {
        v33 = (void *)v88;
        v25 = *((double *)&x + 1);
        v32 = v109;
        goto LABEL_62;
      }
    }
  }
  else
  {
    v41 = 2;
    if ( v36 < 4u )
      v41 = v12 - 2;
    v39 = v115.m128d_f64[0];
    switch ( v41 )
    {
      case 0:
        if ( (v27 & 1) != 0 )
          goto LABEL_120;
        goto LABEL_113;
      case 1:
        if ( (v27 & 1) != 0 )
          goto LABEL_118;
LABEL_113:
        switch ( (char)v6 )
        {
          case 0:
            JUMPOUT(0x9305DLL);
          case 1:
            JUMPOUT(0x93D98LL);
          case 2:
            JUMPOUT(0x93D4ALL);
          case 3:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1.0e12;
            break;
          case 4:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1.0e15;
            break;
          case 5:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1.0e18;
            break;
          case 6:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1.0e21;
            break;
          case 7:
            JUMPOUT(0x93D8BLL);
        }
        break;
      case 2:
        if ( (v27 & 1) != 0 )
        {
          if ( (v12 & 1) == 0 )
          {
LABEL_118:
            v68 = COERCE_DOUBLE(_rust_alloc(45LL, 1LL));
            if ( v68 == 0.0 )
LABEL_203:
              alloc::raw_vec::handle_error(1LL, 45LL);
            qmemcpy(*(void **)&v68, "This suffix is unsupported for specified unit", 45);
            v25 = v68;
            v33 = &qword_28 + 5;
            v23 = 45LL;
            v32 = v109;
            goto LABEL_62;
          }
        }
        else if ( (v12 & 1) != 0 )
        {
          LOBYTE(v96) = (_BYTE)v6;
          v81 = (__int64)&v93;
          v82 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
          v83 = &v96;
          v84 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
          *(_QWORD *)&v98 = &off_FB0A0;
          *((_QWORD *)&v98 + 1) = 3LL;
          v101 = 0LL;
          p_x = &v81;
          v100 = (__int64 (__fastcall *)())(&dword_0 + 2);
          goto LABEL_69;
        }
LABEL_120:
        switch ( (char)v6 )
        {
          case 0:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1024.0;
            break;
          case 1:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1048576.0;
            break;
          case 2:
            JUMPOUT(0x93D3DLL);
          case 3:
            JUMPOUT(0x93D57LL);
          case 4:
            JUMPOUT(0x93D23LL);
          case 5:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1.152921504606847e18;
            break;
          case 6:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1.180591620717411e21;
            break;
          case 7:
            v35.m128d_f64[0] = v35.m128d_f64[0] * 1.208925819614629e24;
            break;
        }
        break;
      case 3:
        LOBYTE(v112[0]) = (_BYTE)v6;
        v42 = v27 & 1;
        v43 = (_BYTE *)(&dword_0 + 1);
        if ( v42 )
          v43 = &aPecifiedUniti[13];
        *(_QWORD *)&v96 = v43;
        *((_QWORD *)&v96 + 1) = v42;
        *(_QWORD *)&v98 = &v93;
        *((_QWORD *)&v98 + 1) = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        p_x = v112;
        v100 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
        v101 = &v96;
        v102 = <&T as core::fmt::Display>::fmt;
        v81 = (__int64)&off_FB0D0;
        v82 = (__int64 (__fastcall *)())&byte_4;
        v85 = 0LL;
        v83 = &v98;
        v84 = (__int64 (__fastcall *)())(&dword_0 + 3);
        v40 = &v81;
        goto LABEL_81;
    }
  }
  if ( v12 == 5 )
  {
    v44 = _mm_andn_pd(_mm_cmpeq_sd((__m128d)0LL, v35), v35);
  }
  else if ( v35.m128d_f64[0] >= 0.0 )
  {
    v35.m128d_f64[0] = ceil(v35.m128d_f64[0]);
    v44 = v35;
  }
  else
  {
    v45 = _mm_and_pd(v35, (__m128d)xmmword_116B0);
    v44.m128d_f64[0] = -ceil(v45.m128d_f64[0]);
    v44.m128d_f64[1] = -v45.m128d_f64[1];
  }
  v46 = *(_BYTE *)(*(_QWORD *)&v39 + 201LL);
  v47 = v46;
  v48 = *(_QWORD *)(*(_QWORD *)&v39 + 168LL);
  v49 = *(_BYTE *)(*(_QWORD *)&v39 + 177LL);
  v81 = 0x706050403020100LL;
  v50 = 2;
  if ( (unsigned __int8)(v49 - 2) < 4u )
    v50 = v49 - 2;
  switch ( v50 )
  {
    case 0:
      v51 = 45LL;
      v33 = (void *)_rust_alloc(45LL, 1LL);
      if ( !v33 )
        goto LABEL_203;
      qmemcpy(v33, "Unit 'auto' isn't supported with --to options", 45);
      p_x = &qword_28 + 5;
      *(_QWORD *)&v44.m128d_f64[0] = v33;
      LOBYTE(v33) = 45;
      v52 = 0;
      goto LABEL_93;
    case 1:
      v55 = (double *)&unk_1EAC8;
      v52 = 0;
      goto LABEL_96;
    case 2:
      v52 = v49 & 1;
      v55 = (double *)&unk_1EB18;
LABEL_96:
      v56 = fabs(v44.m128d_f64[0]);
      if ( v55[1] + -1.0 >= v56 )
        goto LABEL_110;
      v57 = 1LL;
      v58 = 1;
      if ( v55[2] > v56 )
        goto LABEL_106;
      v57 = 2LL;
      if ( v55[3] > v56 )
        goto LABEL_106;
      v57 = 3LL;
      if ( v55[4] > v56 )
        goto LABEL_106;
      v57 = 4LL;
      if ( v55[5] > v56 )
        goto LABEL_106;
      v57 = 5LL;
      if ( v55[6] > v56 )
        goto LABEL_106;
      v57 = 6LL;
      if ( v55[7] > v56 )
        goto LABEL_106;
      v57 = 7LL;
      if ( v55[8] > v56 )
        goto LABEL_106;
      if ( v55[9] <= v56 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v98);
        v51 = v98;
        v44 = (__m128d)*((unsigned __int64 *)&v98 + 1);
        LOBYTE(v33) = (_BYTE)p_x;
        v52 = BYTE1(p_x);
        if ( (_QWORD)v98 != 0x8000000000000000LL )
        {
LABEL_93:
          v53 = v109;
          v54 = *(_DWORD *)((char *)&p_x + 2);
          v118 = *(_DWORD *)((char *)&p_x + 2);
          v119 = HIWORD(p_x);
          *(_WORD *)(v109 + 30) = HIWORD(p_x);
          *(_DWORD *)(v53 + 26) = v54;
          *(_QWORD *)(v53 + 8) = v51;
          *(double *)(v53 + 16) = v44.m128d_f64[0];
          *(_BYTE *)(v53 + 24) = (_BYTE)v33;
          *(_BYTE *)(v53 + 25) = v52;
          *(_QWORD *)v53 = 1LL;
          return (char)v33;
        }
        v79 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v48, (__m128i)xmmword_11770), (__m128d)xmmword_116A0);
        v44.m128d_f64[0] = *((double *)&v98 + 1) / (_mm_unpackhi_pd(v79, v79).m128d_f64[0] + v79.m128d_f64[0]);
        v112[0] = *(_QWORD *)&v44.m128d_f64[0];
        if ( BYTE1(p_x) == 2 )
        {
LABEL_111:
          v115 = v44;
          v64 = v95;
          v65 = _mm_sub_pd(
                  (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)v95, (__m128i)xmmword_11770),
                  (__m128d)xmmword_116A0);
          v92 = pow(10.0, _mm_unpackhi_pd(v65, v65).m128d_f64[0] + v65.m128d_f64[0]);
          v65.m128d_f64[0] = ceil(v115.m128d_f64[0] * v92);
          *(double *)&v93 = v65.m128d_f64[0] / v92;
          *(_QWORD *)&x = &v93;
          *((_QWORD *)&x + 1) = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
          v88 = (unsigned __int64)v64;
          v89 = 0LL;
          *(_QWORD *)&v98 = 1LL;
          *((_QWORD *)&v98 + 1) = 1LL;
          p_x = (_QWORD *)(&dword_0 + 2);
          v101 = 0LL;
          v102 = (__int64 (__fastcall *)())&qword_20;
          v103 = 3;
          v81 = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
          v82 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v85 = &v98;
          v86 = 1LL;
          v83 = &x;
          v84 = (__int64 (__fastcall *)())(&dword_0 + 2);
          v66 = &v81;
          goto LABEL_148;
        }
      }
      else
      {
        v57 = 8LL;
        v58 = 0;
LABEL_106:
        v44.m128d_f64[0] = v44.m128d_f64[0] / v55[v57];
        v92 = v55[1];
        if ( v95 )
        {
          v59 = _mm_sub_pd(
                  (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)v95, (__m128i)xmmword_11770),
                  (__m128d)xmmword_116A0);
          v115 = v44;
          v59.m128d_f64[0] = pow(10.0, _mm_unpackhi_pd(v59, v59).m128d_f64[0] + v59.m128d_f64[0]);
          v60 = v115.m128d_f64[0] * v59.m128d_f64[0];
          v110 = v59.m128d_f64[0];
          switch ( v47 )
          {
            case 0:
              goto LABEL_139;
            case 1:
              goto LABEL_109;
            case 2:
              if ( v60 < 0.0 )
                goto LABEL_109;
              goto LABEL_139;
            case 3:
              if ( v60 >= 0.0 )
LABEL_109:
                v62 = floor(v60);
              else
LABEL_139:
                v62 = ceil(v60);
              break;
            case 4:
              v62 = round(v60);
              break;
          }
          v67 = v62 / v110;
        }
        else
        {
          LOBYTE(x) = v46;
          if ( fabs(v44.m128d_f64[0]) >= 10.0 )
            v67 = uu_numfmt::options::RoundMethod::round(&x, v44.m128d_f64[0]);
          else
            v67 = uu_numfmt::options::RoundMethod::round(&x, v44.m128d_f64[0] * 10.0) / 10.0;
        }
        if ( fabs(v67) >= v92 )
        {
          if ( !v58 )
            core::panicking::panic_bounds_check(8LL, 8LL, &off_FB110, v61);
          v67 = v67 / v92;
        }
        else
        {
          --v57;
        }
        LOBYTE(v33) = *((_BYTE *)&v81 + v57);
        v74 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v48, (__m128i)xmmword_11770), (__m128d)xmmword_116A0);
        v44.m128d_f64[0] = v67 / (_mm_unpackhi_pd(v74, v74).m128d_f64[0] + v74.m128d_f64[0]);
        v112[0] = *(_QWORD *)&v44.m128d_f64[0];
      }
      if ( !v95 )
      {
        LOBYTE(v93) = (_BYTE)v33;
        BYTE1(v93) = v52 & 1;
        *(_QWORD *)&x = v112;
        *((_QWORD *)&x + 1) = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v88 = (unsigned __int64)&v93;
        v89 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
        if ( fabs(v44.m128d_f64[0]) >= 10.0 )
        {
          v98 = 0LL;
        }
        else
        {
          *(_QWORD *)&v98 = 0LL;
          *((_QWORD *)&v98 + 1) = 1LL;
        }
        p_x = (_QWORD *)(&dword_0 + 2);
        v101 = 0LL;
        v102 = (__int64 (__fastcall *)())&qword_20;
        v103 = 3;
        v104 = 2LL;
        v105 = 2LL;
        v106 = 1LL;
        v107 = 32LL;
        v108 = 3;
        v81 = (__int64)&unk_15D60;
        v82 = (__int64 (__fastcall *)())(&dword_0 + 2);
        JUMPOUT(0x93D08LL);
      }
      LOBYTE(v93) = (_BYTE)v33;
      BYTE1(v93) = v52 & 1;
      v81 = (__int64)v112;
      v82 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
      v83 = &v93;
      v84 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
      v85 = v95;
      v86 = 0LL;
      *(_QWORD *)&v98 = 1LL;
      *((_QWORD *)&v98 + 1) = 2LL;
      p_x = (_QWORD *)(&dword_0 + 2);
      v101 = 0LL;
      v102 = (__int64 (__fastcall *)())&qword_20;
      v103 = 3;
      v104 = 2LL;
      v105 = 2LL;
      v106 = 1LL;
      v107 = 32LL;
      v108 = 3;
      *(_QWORD *)&x = &unk_15D60;
      *((_QWORD *)&x + 1) = 2LL;
      v90 = &v98;
      v91 = 2LL;
      v88 = (unsigned __int64)&v81;
      v89 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v66 = (__int64 *)&x;
LABEL_148:
      alloc::fmt::format::format_inner(&v96, v66);
      v114 = v97;
      v113 = v96;
      if ( v116 == 0x8000000000000000LL )
      {
        v94 = v114;
        v93 = v113;
        if ( **(_QWORD **)&v39 )
        {
LABEL_150:
          v75 = *(_QWORD *)(*(_QWORD *)&v39 + 8LL);
          goto LABEL_154;
        }
      }
      else
      {
        *(_QWORD *)&x = *(_QWORD *)&v39 + 136LL;
        v81 = (__int64)&v113;
        v82 = <alloc::string::String as core::fmt::Display>::fmt;
        v83 = &x;
        v84 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v98 = &unk_15D60;
        *((_QWORD *)&v98 + 1) = 2LL;
        v101 = 0LL;
        p_x = &v81;
        v100 = (__int64 (__fastcall *)())(&dword_0 + 2);
        alloc::fmt::format::format_inner(&v122, &v98);
        v93 = v122;
        v94 = v123;
        if ( **(_QWORD **)&v39 )
          goto LABEL_150;
      }
      v75 = v111;
      if ( !v117 )
        v75 = *(_QWORD *)(*(_QWORD *)&v39 + 184LL);
LABEL_154:
      if ( !v75 )
      {
        v88 = (unsigned __int64)v94;
        v77 = v93;
        goto LABEL_169;
      }
      if ( v75 > 0 && *(_BYTE *)(*(_QWORD *)&v39 + 81LL) )
      {
        *(_QWORD *)&x = &v93;
        *((_QWORD *)&x + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v88 = v75;
        v89 = 0LL;
        *(_QWORD *)&v98 = 2LL;
        p_x = (_QWORD *)(&dword_0 + 1);
        v100 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v101 = 0LL;
        v102 = (__int64 (__fastcall *)())&dword_30;
        v103 = 1;
        v81 = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v82 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v85 = &v98;
        v86 = 1LL;
        v83 = &x;
        v84 = (__int64 (__fastcall *)())(&dword_0 + 2);
        alloc::fmt::format::format_inner(&v120, &v81);
        v97 = v121;
        v96 = v120;
        if ( !v117 )
          v111 = *(_QWORD *)(*(_QWORD *)&v39 + 184LL);
        if ( v111 )
        {
          *(_QWORD *)&x = &v96;
          *((_QWORD *)&x + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          if ( v111 <= 0 )
          {
            v88 = -v111;
            v89 = 0LL;
            *(_QWORD *)&v98 = 2LL;
            p_x = (_QWORD *)(&dword_0 + 1);
            v100 = (__int64 (__fastcall *)())(&dword_0 + 1);
            v101 = 0LL;
            v102 = (__int64 (__fastcall *)())&qword_20;
            v103 = 0;
            v81 = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
            v82 = (__int64 (__fastcall *)())(&dword_0 + 1);
            v85 = &v98;
            v86 = 1LL;
            v83 = &x;
            v84 = (__int64 (__fastcall *)())(&dword_0 + 2);
            v76 = v131;
            alloc::fmt::format::format_inner(v131, &v81);
          }
          else
          {
            v88 = v111;
            v89 = 0LL;
            *(_QWORD *)&v98 = 2LL;
            p_x = (_QWORD *)(&dword_0 + 1);
            v100 = (__int64 (__fastcall *)())(&dword_0 + 1);
            v101 = 0LL;
            v102 = (__int64 (__fastcall *)())&qword_20;
            v103 = 1;
            v81 = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
            v82 = (__int64 (__fastcall *)())(&dword_0 + 1);
            v85 = &v98;
            v86 = 1LL;
            v83 = &x;
            v84 = (__int64 (__fastcall *)())(&dword_0 + 2);
            v76 = v130;
            alloc::fmt::format::format_inner(v130, &v81);
          }
          v88 = *((_QWORD *)v76 + 2);
          x = *(_OWORD *)v76;
          if ( (_QWORD)v96 )
            _rust_dealloc(*((_QWORD *)&v96 + 1), v96, 1LL);
          goto LABEL_170;
        }
        v88 = (unsigned __int64)v121;
        v77 = v120;
LABEL_169:
        x = v77;
        goto LABEL_170;
      }
      *(_QWORD *)&x = &v93;
      *((_QWORD *)&x + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      if ( v75 <= 0 )
      {
        v88 = -v75;
        v89 = 0LL;
        *(_QWORD *)&v98 = 2LL;
        p_x = (_QWORD *)(&dword_0 + 1);
        v100 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v101 = 0LL;
        v102 = (__int64 (__fastcall *)())&qword_20;
        v103 = 0;
        v81 = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v82 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v85 = &v98;
        v86 = 1LL;
        v83 = &x;
        v84 = (__int64 (__fastcall *)())(&dword_0 + 2);
        alloc::fmt::format::format_inner(&v126, &v81);
        x = v126;
        v88 = (unsigned __int64)v127;
      }
      else
      {
        v88 = v75;
        v89 = 0LL;
        *(_QWORD *)&v98 = 2LL;
        p_x = (_QWORD *)(&dword_0 + 1);
        v100 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v101 = 0LL;
        v102 = (__int64 (__fastcall *)())&qword_20;
        v103 = 1;
        v81 = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v82 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v85 = &v98;
        v86 = 1LL;
        v83 = &x;
        v84 = (__int64 (__fastcall *)())(&dword_0 + 2);
        alloc::fmt::format::format_inner(&v124, &v81);
        x = v124;
        v88 = (unsigned __int64)v125;
      }
LABEL_170:
      *(_QWORD *)&v98 = *(_QWORD *)&v39 + 32LL;
      *((_QWORD *)&v98 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      p_x = (__int64 *)&x;
      v100 = <alloc::string::String as core::fmt::Display>::fmt;
      v101 = (__int128 *)(*(_QWORD *)&v39 + 56LL);
      v102 = <alloc::string::String as core::fmt::Display>::fmt;
      v81 = (__int64)&unk_1EB90;
      v82 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v85 = 0LL;
      v83 = &v98;
      v84 = (__int64 (__fastcall *)())(&dword_0 + 3);
      alloc::fmt::format::format_inner(&v128, &v81);
      v78 = v109;
      *(_QWORD *)(v109 + 24) = v129;
      *(_OWORD *)(v78 + 8) = v128;
      *(_QWORD *)v78 = 0LL;
      if ( (_QWORD)x )
        _rust_dealloc(*((_QWORD *)&x + 1), x, 1LL);
      if ( v75 && (_QWORD)v93 )
        _rust_dealloc(*((_QWORD *)&v93 + 1), v93, 1LL);
      LOBYTE(v33) = 0;
      if ( v116 != 0x8000000000000000LL && (_QWORD)v113 )
        LOBYTE(v33) = _rust_dealloc(*((_QWORD *)&v113 + 1), v113, 1LL);
      return (char)v33;
    case 3:
LABEL_110:
      v63 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v48, (__m128i)xmmword_11770), (__m128d)xmmword_116A0);
      v44.m128d_f64[0] = v44.m128d_f64[0] / (_mm_unpackhi_pd(v63, v63).m128d_f64[0] + v63.m128d_f64[0]);
      v112[0] = *(_QWORD *)&v44.m128d_f64[0];
      goto LABEL_111;
  }
}
