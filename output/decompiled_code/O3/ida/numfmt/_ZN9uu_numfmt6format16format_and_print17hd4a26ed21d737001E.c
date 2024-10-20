        unsigned __int64 a6)
{
  unsigned __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r12
  unsigned __int8 *v15; // rdi
  unsigned __int8 *v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned int v18; // r11d
  int v19; // r9d
  int v20; // ebx
  int v21; // r10d
  unsigned int v22; // r10d
  unsigned __int64 v23; // rbx
  __int64 (__fastcall *v24)(); // rsi
  char *v25; // r15
  char *v26; // r12
  unsigned __int64 v27; // rcx
  unsigned int v28; // r10d
  int v29; // r9d
  int v30; // ebp
  int v31; // r11d
  __int64 v32; // r11
  unsigned int v33; // r10d
  char *v34; // rbp
  char *v35; // rcx
  __int64 v36; // rcx
  char *v37; // rdx
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v44; // r11
  __int64 v45; // r15
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rbx
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r9
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // r9
  char *v65; // r10
  __int64 v66; // r15
  __int64 v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r14
  unsigned __int8 *v71; // r14
  unsigned __int64 v72; // rbp
  __int64 v74; // rsi
  __int64 v75; // rax
  char v76; // r14
  unsigned __int64 v77; // rbp
  __int64 (__fastcall *started)(); // rsi
  char *v79; // rdx
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  unsigned int v85; // eax
  int v86; // esi
  unsigned int v87; // edi
  __int64 v88; // rdi
  _QWORD *result; // rax
  unsigned __int64 v90; // r15
  unsigned __int64 v91; // [rsp+8h] [rbp-1C0h]
  char v92; // [rsp+8h] [rbp-1C0h]
  bool v93; // [rsp+8h] [rbp-1C0h]
  unsigned int v94; // [rsp+14h] [rbp-1B4h]
  __int64 v95; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v96; // [rsp+20h] [rbp-1A8h]
  __int64 v97; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v98; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v99; // [rsp+30h] [rbp-198h]
  unsigned __int64 v100; // [rsp+30h] [rbp-198h]
  __int64 v101; // [rsp+38h] [rbp-190h]
  unsigned __int64 v102; // [rsp+38h] [rbp-190h]
  unsigned __int64 v104; // [rsp+48h] [rbp-180h]
  __int64 (__fastcall *v105)(); // [rsp+50h] [rbp-178h] BYREF
  char *v106; // [rsp+58h] [rbp-170h]
  __int128 v107; // [rsp+60h] [rbp-168h] BYREF
  __int64 (__fastcall *v108)(); // [rsp+70h] [rbp-158h]
  const char *v109; // [rsp+78h] [rbp-150h] BYREF
  __int64 v110; // [rsp+80h] [rbp-148h]
  __int64 (__fastcall ***v111)(); // [rsp+88h] [rbp-140h]
  __int128 v112; // [rsp+90h] [rbp-138h]
  __int64 v113; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v114; // [rsp+B0h] [rbp-118h]
  __int64 v115; // [rsp+C0h] [rbp-108h]
  unsigned __int64 v116; // [rsp+C8h] [rbp-100h]
  __int64 (__fastcall *v117)(); // [rsp+D0h] [rbp-F8h]
  unsigned __int64 v118; // [rsp+D8h] [rbp-F0h]
  __int64 (__fastcall **v119)(); // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v120; // [rsp+E8h] [rbp-E0h]
  __int64 (__fastcall *v121)(); // [rsp+F8h] [rbp-D0h]
  __int128 v122; // [rsp+100h] [rbp-C8h]
  __int64 (__fastcall *v123)(); // [rsp+110h] [rbp-B8h]
  unsigned __int64 v124; // [rsp+120h] [rbp-A8h]
  char *v125; // [rsp+128h] [rbp-A0h] BYREF
  unsigned __int64 v126; // [rsp+130h] [rbp-98h]
  char *v127; // [rsp+138h] [rbp-90h]
  _QWORD *v128; // [rsp+140h] [rbp-88h]
  __int64 (__fastcall *v129)(); // [rsp+148h] [rbp-80h]
  __int64 v130; // [rsp+150h] [rbp-78h]
  __int128 *v131; // [rsp+158h] [rbp-70h] BYREF
  __int64 (__fastcall *v132)(); // [rsp+160h] [rbp-68h]
  char *v133; // [rsp+168h] [rbp-60h]
  unsigned __int8 *v134; // [rsp+170h] [rbp-58h]
  unsigned __int64 v135; // [rsp+178h] [rbp-50h]
  __int64 v136; // [rsp+180h] [rbp-48h]
  __int64 v137; // [rsp+188h] [rbp-40h]
  const char *v138; // [rsp+190h] [rbp-38h]

  v7 = (unsigned __int64)a2;
  v8 = a4[14] == 0x8000000000000000LL;
  v128 = a4;
  if ( !v8 )
  {
    v125 = (char *)(a4 + 14);
    v98 = a3;
    <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(&v109, a4 + 14, a2, a3);
    v138 = v109;
    v44 = v110;
    v130 = *((_QWORD *)&v112 + 1);
    v45 = v113;
    v46 = v114;
    v97 = v115;
    v47 = v116;
    v24 = v117;
    v48 = v118;
    v94 = WORD1(v112);
    v102 = v118 - 1;
    v95 = v112;
    v135 = v112 & 0xFFFFFFFFFF00FF00LL;
    v137 = a4[13];
    v136 = 16 * v137;
    v49 = a4[12];
    v127 = (char *)&v107 + 8;
    v133 = (char *)v117 - 1;
    v13 = 1LL;
    v50 = 2LL;
    a6 = 0LL;
    v129 = v117;
    while ( 1 )
    {
      v124 = v50;
      v51 = v44;
      if ( !v138 )
        break;
      v52 = v45 + v102;
      v53 = v97;
      if ( v45 + v102 >= v47 )
      {
        v92 = 0;
        v45 = v47;
        goto LABEL_113;
      }
      v99 = a6;
      a5 = ((unsigned __int8)v94 << 16) | v135 | (unsigned __int8)v95;
      v104 = a5;
      if ( v46 == -1LL )
      {
        v59 = v44 - 1;
        v93 = v44 - 1 < v48;
        v64 = v97 + v44;
        v65 = (char *)v24 + v44;
        v134 = (unsigned __int8 *)&v133[v44];
LABEL_123:
        v68 = v130;
        if ( !_bittest64(&v68, *(unsigned __int8 *)(v53 + v52)) )
        {
          v66 = v48 + v45;
          goto LABEL_121;
        }
        v69 = 0LL;
        v70 = v45;
        while ( v44 + v69 < v48 )
        {
          if ( v44 + v70 >= v47 )
          {
            v56 = v44;
LABEL_185:
            v90 = v56 + v45;
            if ( v47 > v90 )
              v90 = v47;
            core::panicking::panic_bounds_check(v90, v47, &off_FB000, v13);
          }
          a5 = (unsigned __int8)v65[v69];
          v67 = v70 + 1;
          ++v69;
          v8 = (_BYTE)a5 == *(_BYTE *)(v64 + v70++);
          if ( !v8 )
            goto LABEL_122;
        }
        if ( v93 )
        {
          v60 = v59 + v45;
          v71 = v134;
          v72 = v44;
          while ( v72-- != 0 )
          {
            if ( v60 >= v47 )
LABEL_183:
              core::panicking::panic_bounds_check(v60, v47, &off_FAFE8, v13);
            a5 = *v71--;
            v8 = (_BYTE)a5 == *(_BYTE *)(v97 + v60--);
            v44 = v51;
            if ( !v8 )
            {
              v66 = v104 + v45;
LABEL_121:
              v67 = v66;
LABEL_122:
              v52 = v67 + v102;
              v45 = v67;
              v53 = v97;
              if ( v67 + v102 >= v47 )
              {
                v92 = 0;
                v45 = v47;
                a6 = v99;
                v61 = v99;
                v62 = v98;
                v46 = -1LL;
                goto LABEL_137;
              }
              goto LABEL_123;
            }
          }
          v46 = -1LL;
          v53 = v97;
        }
        else
        {
          v46 = -1LL;
          v53 = v97;
          if ( v44 )
LABEL_180:
            core::panicking::panic_bounds_check(v59, v48, &off_FAFD0, v13);
        }
LABEL_136:
        v62 = v45;
        v45 += v48;
        LOBYTE(v51) = 1;
        v92 = 1;
        v61 = v45;
        a6 = v99;
        goto LABEL_137;
      }
      v91 = v48 - a5;
      v54 = -(__int64)v44;
      while ( 2 )
      {
        v55 = v130;
        if ( !_bittest64(&v55, *(unsigned __int8 *)(v97 + v52)) )
        {
          v45 += v48;
          v46 = 0LL;
          goto LABEL_95;
        }
        a5 = v46;
        v56 = v46;
        if ( v44 > v46 )
          v56 = v44;
        v57 = v56;
        while ( v57 < v48 )
        {
          if ( v45 + v57 >= v47 )
            goto LABEL_185;
          v58 = v57 + 1;
          v8 = *((_BYTE *)v129 + v57) == *(_BYTE *)(v97 + v45 + v57);
          ++v57;
          if ( !v8 )
          {
            v45 += v58 + v54;
            v46 = 0LL;
            v44 = v51;
            goto LABEL_95;
          }
        }
        v44 = v51;
        v59 = v51;
        do
        {
          if ( a5 >= v59 )
          {
            v46 = 0LL;
            goto LABEL_136;
          }
          if ( --v59 >= v48 )
            goto LABEL_180;
          v60 = v59 + v45;
          if ( v59 + v45 >= v47 )
            goto LABEL_183;
        }
        while ( *((_BYTE *)v129 + v59) == *(_BYTE *)(v97 + v60) );
        v45 += v104;
        v46 = v91;
LABEL_95:
        v52 = v45 + v102;
        if ( v45 + v102 < v47 )
          continue;
        break;
      }
      v92 = 0;
      v45 = v47;
      a6 = v99;
LABEL_113:
      v61 = a6;
      v62 = v98;
LABEL_137:
      v74 = v53 + a6;
      v105 = (__int64 (__fastcall *)())(v53 + a6);
      v106 = (char *)(v62 - a6);
      if ( v137 )
      {
        v75 = 0LL;
        v51 = v136;
        while ( *(_QWORD *)(v49 + v75) > v13 || *(_QWORD *)(v49 + v75 + 8) < v13 )
        {
          v75 += 16LL;
          if ( v136 == v75 )
            goto LABEL_143;
        }
        v76 = 1;
      }
      else
      {
LABEL_143:
        v76 = 0;
      }
      v100 = v46;
      v77 = v44;
      if ( v13 > 1 )
      {
        v119 = (__int64 (__fastcall **)())&v125;
        *(_QWORD *)&v120 = <&T as core::fmt::Display>::fmt;
        v109 = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v110 = 1LL;
        v111 = &v119;
        v112 = 1uLL;
        std::io::stdio::_print(&v109, v74, v51, v13, a5, a6);
      }
      if ( v76 )
      {
        started = (__int64 (__fastcall *)())core::str::<impl str>::trim_start_matches(v105, v106, v51);
        uu_numfmt::format::format_string((__int64)&v119, started, v79, (__int64)v128, 0LL, v80);
        v122 = v120;
        v123 = v121;
        if ( v119 )
          goto LABEL_182;
        v108 = v123;
        v107 = v122;
        v131 = &v107;
        v132 = <alloc::string::String as core::fmt::Display>::fmt;
        v109 = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v110 = 1LL;
        v111 = (__int64 (__fastcall ***)())&v131;
        v112 = 1uLL;
        std::io::stdio::_print(&v109, started, v81, v82, v83, v84);
        if ( (_QWORD)v107 )
          _rust_dealloc(*((_QWORD *)&v107 + 1), v107, 1LL);
      }
      else
      {
        v119 = &v105;
        *(_QWORD *)&v120 = <&T as core::fmt::Display>::fmt;
        v109 = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v110 = 1LL;
        v111 = &v119;
        v112 = 1uLL;
        std::io::stdio::_print(&v109, v74, v51, v13, a5, a6);
      }
      v13 = v124;
      v50 = v124 + 1;
      a6 = v61;
      v24 = v129;
      v44 = v77;
      v46 = v100;
      if ( !v92 )
      {
LABEL_181:
        v109 = (const char *)&off_FB128;
        v110 = 1LL;
        v111 = (__int64 (__fastcall ***)())&byte_8;
        v112 = 0LL;
        std::io::stdio::_print(&v109, v24, v7, v13, a5, a6);
        result = a1;
        *a1 = 0x8000000000000000LL;
        return result;
      }
    }
    v53 = v97;
    if ( (_BYTE)v94 )
    {
      v92 = 0;
      goto LABEL_113;
    }
    v63 = v95;
    if ( v44 )
    {
      if ( v44 >= v47 )
      {
        if ( v44 != v47 )
          goto LABEL_192;
      }
      else if ( *(char *)(v97 + v44) < -64 )
      {
LABEL_192:
        core::str::slice_error_fail(v97, v47, v51, v47, &off_FB018);
      }
    }
    if ( v44 == v47 )
    {
      if ( !(_BYTE)v95 )
      {
        LOBYTE(v50) = 1;
        v95 = v50;
        v92 = 0;
        v44 = v47;
        v61 = a6;
        LOBYTE(v94) = 1;
        v62 = v98;
        goto LABEL_137;
      }
      LOBYTE(v63) = v95 ^ 1;
      v95 = v63;
      v92 = 1;
      LOBYTE(v94) = 0;
      v44 = v47;
      v61 = v47;
      goto LABEL_177;
    }
    v85 = *(unsigned __int8 *)(v97 + v44);
    if ( (v85 & 0x80u) != 0 )
    {
      v86 = v85 & 0x1F;
      a5 = *(_BYTE *)(v97 + v44 + 1) & 0x3F;
      if ( (unsigned __int8)v85 < 0xE0u )
      {
        v85 = a5 | (v86 << 6);
      }
      else
      {
        a5 = (unsigned int)((_DWORD)a5 << 6);
        v87 = a5 | *(_BYTE *)(v97 + v44 + 2) & 0x3F;
        if ( (unsigned __int8)v85 < 0xF0u )
          v85 = (v86 << 12) | v87;
        else
          v85 = ((v85 & 7) << 18) | (v87 << 6) | *(_BYTE *)(v97 + v44 + 3) & 0x3F;
      }
      v63 = v95;
      if ( (_BYTE)v95 )
        goto LABEL_156;
    }
    else if ( (_BYTE)v95 )
    {
LABEL_156:
      v61 = v44;
      goto LABEL_157;
    }
    v88 = 1LL;
    if ( v85 >= 0x80 )
    {
      v88 = 2LL;
      if ( v85 >= 0x800 )
        v88 = 4LL - (v85 < (unsigned int)&unk_10000);
    }
    v61 = v44 + v88;
    if ( v61 )
    {
      if ( v61 >= v47 )
      {
        if ( v61 != v47 )
        {
LABEL_191:
          v51 = v61;
          goto LABEL_192;
        }
      }
      else if ( *(char *)(v97 + v61) <= -65 )
      {
        goto LABEL_191;
      }
    }
    if ( v61 == v47 )
    {
      v92 = 1;
      v95 = 0LL;
      v44 = v47;
      v61 = v47;
      LOBYTE(v94) = 0;
LABEL_177:
      v62 = v47;
      goto LABEL_137;
    }
    LOBYTE(v63) = 1;
LABEL_157:
    LOBYTE(v63) = v63 ^ 1;
    v95 = v63;
    v92 = 1;
    LOBYTE(v94) = 0;
    v44 = v61;
    v62 = v61;
    goto LABEL_137;
  }
  v9 = a4[12];
  v10 = a4[13];
  v124 = a4[23];
  v127 = (char *)&v107 + 8;
  v101 = v10;
  v11 = 16 * v10;
  v12 = 1LL;
  v13 = 2LL;
  while ( 2 )
  {
    v14 = v13;
    v15 = (unsigned __int8 *)(v7 + a3);
    if ( !a3 )
    {
LABEL_35:
      v23 = 0LL;
      goto LABEL_37;
    }
    v16 = 0LL;
    a5 = v7;
    do
    {
      v17 = a5;
      v18 = *(unsigned __int8 *)a5;
      if ( (v18 & 0x80u) != 0 )
      {
        v19 = v18 & 0x1F;
        v20 = *(_BYTE *)(a5 + 1) & 0x3F;
        if ( (unsigned __int8)v18 <= 0xDFu )
        {
          a5 += 2LL;
          a6 = v20 | (unsigned int)(v19 << 6);
          goto LABEL_19;
        }
        v21 = (v20 << 6) | *(_BYTE *)(a5 + 2) & 0x3F;
        if ( (unsigned __int8)v18 < 0xF0u )
        {
          a5 += 3LL;
          a6 = (v19 << 12) | (unsigned int)v21;
          goto LABEL_19;
        }
        a5 += 4LL;
        v18 = ((v18 & 7) << 18) | (v21 << 6) | *(_BYTE *)(v17 + 3) & 0x3F;
      }
      else
      {
        ++a5;
      }
      a6 = v18;
LABEL_19:
      if ( (unsigned int)(a6 - 9) < 5 || (_DWORD)a6 == 32 )
        goto LABEL_10;
      if ( (unsigned int)a6 < 0x80 )
        goto LABEL_31;
      v22 = (unsigned int)a6 >> 8;
      if ( (unsigned int)a6 >> 8 > 0x1F )
      {
        if ( v22 != 32 )
        {
          if ( v22 != 48 )
            goto LABEL_31;
          LOBYTE(a6) = (_DWORD)a6 == 12288;
          goto LABEL_9;
        }
        a6 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)a6];
        LOBYTE(a6) = (unsigned __int8)a6 >> 1;
      }
      else
      {
        if ( v22 )
        {
          if ( v22 != 22 )
            goto LABEL_31;
          LOBYTE(a6) = (_DWORD)a6 == 5760;
          goto LABEL_9;
        }
        a6 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)a6];
      }
      LOBYTE(a6) = a6 & 1;
LABEL_9:
      if ( !(_BYTE)a6 )
        goto LABEL_31;
LABEL_10:
      v16 = &v16[a5 - v17];
    }
    while ( (unsigned __int8 *)a5 != v15 );
    v16 = (unsigned __int8 *)a3;
LABEL_31:
    if ( !v16 )
      goto LABEL_35;
    if ( (unsigned __int64)v16 < a3 )
    {
      if ( (char)v16[v7] > -65 )
      {
        v23 = (unsigned __int64)v16;
        goto LABEL_37;
      }
LABEL_188:
      core::str::slice_error_fail(v7, a3, 0LL, v16, &off_FB030);
    }
    v23 = a3;
    if ( v16 != (unsigned __int8 *)a3 )
      goto LABEL_188;
LABEL_37:
    v96 = v14;
    v24 = (__int64 (__fastcall *)())(v7 + v23);
    v25 = (char *)(a3 - v23);
    if ( !v25 )
    {
LABEL_68:
      v35 = 0LL;
      goto LABEL_70;
    }
    v26 = 0LL;
    a5 = v7 + v23;
    while ( 2 )
    {
      v27 = a5;
      v28 = *(unsigned __int8 *)a5;
      if ( (v28 & 0x80u) != 0 )
      {
        v29 = v28 & 0x1F;
        v30 = *(_BYTE *)(a5 + 1) & 0x3F;
        if ( (unsigned __int8)v28 <= 0xDFu )
        {
          a5 += 2LL;
          a6 = v30 | (unsigned int)(v29 << 6);
          if ( (unsigned int)a6 <= 0x20 )
            goto LABEL_53;
        }
        else
        {
          v31 = (v30 << 6) | *(_BYTE *)(a5 + 2) & 0x3F;
          if ( (unsigned __int8)v28 < 0xF0u )
          {
            a5 += 3LL;
            a6 = v31 | (unsigned int)(v29 << 12);
            if ( (unsigned int)a6 > 0x20 )
              goto LABEL_54;
            goto LABEL_53;
          }
          a5 += 4LL;
          a6 = (v31 << 6) | *(_BYTE *)(v27 + 3) & 0x3F | ((unsigned __int8)(v28 & 7) << 18);
          if ( (unsigned int)a6 <= 0x20 )
            goto LABEL_53;
        }
      }
      else
      {
        ++a5;
        a6 = v28;
        if ( v28 > 0x20 )
          goto LABEL_54;
LABEL_53:
        v32 = 0x100003E00LL;
        if ( _bittest64(&v32, (unsigned int)a6) )
          goto LABEL_64;
      }
LABEL_54:
      if ( (unsigned int)a6 < 0x80 )
        goto LABEL_42;
      v33 = (unsigned int)a6 >> 8;
      if ( (unsigned int)a6 >> 8 > 0x1F )
      {
        if ( v33 != 32 )
        {
          if ( v33 == 48 )
          {
            LOBYTE(a6) = (_DWORD)a6 == 12288;
            goto LABEL_41;
          }
          goto LABEL_42;
        }
        a6 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)a6];
        LOBYTE(a6) = (unsigned __int8)a6 >> 1;
      }
      else
      {
        if ( v33 )
        {
          if ( v33 == 22 )
          {
            LOBYTE(a6) = (_DWORD)a6 == 5760;
            goto LABEL_41;
          }
          goto LABEL_42;
        }
        a6 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)a6];
      }
      LOBYTE(a6) = a6 & 1;
LABEL_41:
      if ( (_BYTE)a6 )
        goto LABEL_64;
LABEL_42:
      v26 = &v26[a5 - v27];
      if ( (unsigned __int8 *)a5 != v15 )
        continue;
      break;
    }
    v26 = v25;
LABEL_64:
    if ( !v26 )
      goto LABEL_68;
    if ( v26 < v25 )
    {
      if ( v26[(_QWORD)v24] > -65 )
      {
        v34 = &v26[(_QWORD)v24];
        goto LABEL_73;
      }
LABEL_189:
      core::str::slice_error_fail(v7 + v23, v25, 0LL, v26, &off_FB030);
    }
    v35 = v25;
    if ( v26 != v25 )
      goto LABEL_189;
LABEL_70:
    v34 = 0LL;
    if ( v25 != v35 )
      v34 = &v35[(_QWORD)v24];
    v26 = v35;
LABEL_73:
    v125 = (char *)v7;
    v126 = v23;
    v105 = (__int64 (__fastcall *)())(v7 + v23);
    v106 = v26;
    if ( !v101 )
    {
LABEL_3:
      v119 = (__int64 (__fastcall **)())&v125;
      *(_QWORD *)&v120 = <&T as core::fmt::Display>::fmt;
      *((_QWORD *)&v120 + 1) = &v105;
      v121 = <&T as core::fmt::Display>::fmt;
      v109 = (const char *)&unk_15D60;
      v110 = 2LL;
      v111 = &v119;
      v112 = 2uLL;
      std::io::stdio::_print(&v109, v24, v7, &v105, a5, a6);
      goto LABEL_4;
    }
    v36 = 0LL;
    while ( *(_QWORD *)(v9 + v36) > v12 || *(_QWORD *)(v9 + v36 + 8) < v12 )
    {
      v36 += 16LL;
      if ( v11 == v36 )
        goto LABEL_3;
    }
    v37 = v26;
    v38 = v23;
    if ( v12 > 1 )
    {
      v109 = (const char *)&off_FB138;
      v110 = 1LL;
      v111 = (__int64 (__fastcall ***)())&byte_8;
      v112 = 0LL;
      std::io::stdio::_print(&v109, v24, v26, v36, a5, v23);
      if ( v126 < 2 )
      {
        if ( v126 != 1 )
          goto LABEL_190;
      }
      else if ( v125[1] <= -65 )
      {
LABEL_190:
        core::str::slice_error_fail(v125, v126, 1LL, v126, &off_FB148);
      }
      v38 = v126 - 1;
      v24 = v105;
      v37 = v106;
    }
    uu_numfmt::format::format_string(
      (__int64)&v119,
      v24,
      v37,
      (__int64)v128,
      (v23 != 0) & (unsigned __int8)(v124 == 0),
      (__int64)&v37[v38]);
    v122 = v120;
    v123 = v121;
    if ( !v119 )
    {
      v108 = v123;
      v107 = v122;
      v131 = &v107;
      v132 = <alloc::string::String as core::fmt::Display>::fmt;
      v109 = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
      v110 = 1LL;
      v111 = (__int64 (__fastcall ***)())&v131;
      v112 = 1uLL;
      std::io::stdio::_print(&v109, v24, v39, v40, v41, v42);
      v24 = (__int64 (__fastcall *)())v107;
      if ( (_QWORD)v107 )
        _rust_dealloc(*((_QWORD *)&v107 + 1), v107, 1LL);
LABEL_4:
      a3 = v25 - v26;
      v12 = v96;
      v13 = v96 + 1;
      v7 = (unsigned __int64)v34;
      if ( !v34 )
        goto LABEL_181;
      continue;
    }
    break;
  }
LABEL_182:
  result = a1;
  a1[2] = v123;
  *(_OWORD *)a1 = v122;
  return result;
}
