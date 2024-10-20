size_t __fastcall uu_mktemp::Params::from(size_t a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  size_t v3; // r15
  char *v4; // rsi
  size_t v5; // r14
  __int64 v6; // r9
  __int64 v7; // rdx
  size_t v8; // rsi
  size_t v9; // rax
  __int128 *v10; // r14
  size_t v11; // r8
  size_t v12; // r12
  size_t v13; // rbp
  unsigned __int64 v14; // rdi
  __int64 v15; // r13
  char *v16; // rbx
  char v17; // bp
  bool v18; // zf
  size_t v19; // rdx
  size_t v20; // rdi
  size_t v21; // rdi
  size_t v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rsi
  char *v25; // rdi
  size_t v26; // r11
  char v27; // bp
  __int64 v28; // rsi
  char v29; // r14
  unsigned __int64 v30; // r12
  char **v31; // r8
  char *v32; // rdi
  size_t v33; // rcx
  size_t v34; // rsi
  char *v35; // r14
  int v36; // eax
  char v37; // cl
  char v38; // dl
  char v39; // si
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  char v43; // cl
  char v44; // dl
  char v45; // si
  int v46; // edx
  int v47; // ecx
  unsigned __int64 v48; // r14
  __int64 v49; // rcx
  __int64 v50; // r13
  __int64 v51; // rax
  char *v52; // rdi
  __int64 v53; // rbp
  __int64 v54; // r9
  __int64 *v55; // r13
  size_t v56; // rbp
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 is_absolute; // rax
  void *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 *v63; // rax
  __int64 v64; // rax
  void *v65; // r13
  size_t v66; // rdx
  size_t v67; // r12
  __int64 v68; // rbp
  __int64 v69; // rax
  unsigned int v70; // ecx
  char v71; // dl
  char v72; // r9
  int v73; // r9d
  __int64 v74; // rax
  __int64 v75; // rbp
  unsigned __int64 v76; // r13
  __int64 v77; // rax
  void *v79; // rcx
  unsigned __int64 v80; // r12
  size_t v81; // rax
  int v82; // edx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  char *v85; // [rsp+8h] [rbp-180h]
  char v86; // [rsp+17h] [rbp-171h] BYREF
  size_t n; // [rsp+18h] [rbp-170h]
  size_t v88; // [rsp+20h] [rbp-168h]
  char **v89; // [rsp+28h] [rbp-160h]
  __int64 v90; // [rsp+30h] [rbp-158h]
  __int64 v91; // [rsp+38h] [rbp-150h]
  __int64 v92; // [rsp+40h] [rbp-148h]
  __int64 v93; // [rsp+48h] [rbp-140h]
  __int128 v94; // [rsp+50h] [rbp-138h] BYREF
  __int64 *v95; // [rsp+60h] [rbp-128h]
  __int64 (__fastcall *v96)(); // [rsp+68h] [rbp-120h]
  __int64 v97; // [rsp+70h] [rbp-118h]
  size_t v98; // [rsp+78h] [rbp-110h]
  __int64 v99; // [rsp+80h] [rbp-108h] BYREF
  __int128 v100; // [rsp+88h] [rbp-100h]
  __int64 v101; // [rsp+98h] [rbp-F0h]
  __int64 v102; // [rsp+A0h] [rbp-E8h]
  void *src; // [rsp+A8h] [rbp-E0h]
  _QWORD *v104; // [rsp+B0h] [rbp-D8h]
  __int64 *v105; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v106; // [rsp+C0h] [rbp-C8h]
  char *v107; // [rsp+C8h] [rbp-C0h] BYREF
  void *v108; // [rsp+D0h] [rbp-B8h]
  size_t v109; // [rsp+D8h] [rbp-B0h]
  __int64 v110; // [rsp+E0h] [rbp-A8h]
  __int128 *v111; // [rsp+E8h] [rbp-A0h]
  __int64 (__fastcall **v112)(); // [rsp+F0h] [rbp-98h]
  __int64 v113; // [rsp+F8h] [rbp-90h]
  __int64 v114; // [rsp+100h] [rbp-88h]
  size_t v115; // [rsp+108h] [rbp-80h]
  char *v116; // [rsp+110h] [rbp-78h]
  size_t v117; // [rsp+118h] [rbp-70h]
  __int64 v118; // [rsp+120h] [rbp-68h]
  size_t v119; // [rsp+128h] [rbp-60h]
  __int128 v120; // [rsp+130h] [rbp-58h] BYREF
  size_t v121; // [rsp+140h] [rbp-48h] BYREF
  __int64 v122; // [rsp+148h] [rbp-40h]
  unsigned __int64 v123; // [rsp+150h] [rbp-38h]

  v2 = a2;
  v3 = a1;
  v90 = a2[6];
  if ( v90 == 0x8000000000000000LL )
  {
    v4 = (char *)a2[1];
    v5 = v2[2];
    goto LABEL_5;
  }
  v5 = a2[2];
  if ( v5 )
  {
    v4 = (char *)a2[1];
    if ( v4[v5 - 1] == 88 )
    {
LABEL_5:
      v85 = v4;
      core::str::pattern::StrSearcher::new(&v107, v4, v5, aXxx, 3LL);
      v88 = v5;
      n = a1;
      if ( v107 )
      {
        v7 = v113;
        v8 = v119;
        v9 = v113 - v119;
        if ( v113 - v119 >= v117 )
          goto LABEL_40;
        v6 = v114;
        v10 = v111;
        v11 = v109;
        v93 = v110;
        v12 = v115;
        v92 = v118 - 1;
        v89 = &off_F0090;
        v104 = v2;
LABEL_8:
        if ( !_bittest64((const __int64 *)&v10, (unsigned __int8)v116[v9]) )
        {
          v20 = v119;
          if ( v114 != -1 )
            goto LABEL_31;
          goto LABEL_32;
        }
        v13 = v12;
        if ( v109 < v12 )
          v13 = v109;
        if ( v114 == -1 )
          v13 = v109;
        v14 = v13 - 1;
        if ( v13 - 1 >= v119 )
        {
          if ( v13 )
          {
            v89 = &off_F0078;
            goto LABEL_204;
          }
        }
        else
        {
          v15 = -(__int64)v13;
          v16 = (char *)(v92 + v13);
          v14 = v9 + v13 - 1;
          while ( v15 )
          {
            if ( v14 >= v117 )
              goto LABEL_203;
            v17 = *v16;
            ++v15;
            --v16;
            v18 = v17 == v116[v14--];
            if ( !v18 )
            {
              v19 = v7 - v109 - v15;
              v20 = v119;
              goto LABEL_30;
            }
          }
        }
        v21 = v12;
        if ( v114 == -1 )
          v21 = v119;
        v22 = v109;
        while ( v22 < v21 )
        {
          if ( v22 >= v119 )
          {
            if ( v109 <= v119 )
              v11 = v119;
            v89 = &off_F0048;
            v14 = v11;
            goto LABEL_204;
          }
          if ( v9 + v22 >= v117 )
          {
            v84 = v109 + v9;
            if ( v117 > v84 )
              v84 = v117;
            v89 = &off_F0060;
            v14 = v84;
LABEL_203:
            v8 = v117;
LABEL_204:
            core::panicking::panic_bounds_check(v14, v8, v89, v117, v11, v114);
          }
          v18 = *(_BYTE *)(v118 + v22) == (unsigned __int8)v116[v9 + v22];
          ++v22;
          if ( !v18 )
          {
            v20 = v93;
            v19 = v7 - v93;
LABEL_30:
            v9 = v19;
            v2 = v104;
            if ( v114 != -1 )
LABEL_31:
              v12 = v20;
LABEL_32:
            v7 = v9;
            v9 -= v119;
            if ( v9 >= v117 )
            {
LABEL_40:
              v3 = n;
              v26 = v88;
              goto LABEL_41;
            }
            goto LABEL_8;
          }
        }
        v2 = v104;
        v3 = n;
        v26 = v88;
LABEL_49:
        v30 = v9 + 3;
        if ( v9 == -3LL )
        {
          v30 = 0LL;
          v35 = v85;
          while ( v35 != v85 )
          {
            v42 = (unsigned __int8)*(v35 - 1);
            if ( (v42 & 0x80u) == 0 )
            {
              --v35;
              if ( v42 != 88 )
                goto LABEL_82;
            }
            else
            {
              v43 = *(v35 - 2);
              if ( v43 >= -64 )
              {
                v35 -= 2;
                v47 = v43 & 0x1F;
              }
              else
              {
                v44 = *(v35 - 3);
                if ( v44 >= -64 )
                {
                  v35 -= 3;
                  v46 = v44 & 0xF;
                }
                else
                {
                  v45 = *(v35 - 4);
                  v35 -= 4;
                  v46 = ((v45 & 7) << 6) | v44 & 0x3F;
                }
                v47 = (v46 << 6) | v43 & 0x3F;
              }
              if ( ((v47 << 6) | v42 & 0x3F) != 0x58 )
              {
LABEL_82:
                v48 = v35 - v85 + 1;
                goto LABEL_84;
              }
            }
          }
          goto LABEL_83;
        }
LABEL_50:
        v31 = &off_F0220;
        if ( v30 >= v26 )
        {
          v32 = v85;
          if ( v30 != v26 )
            goto LABEL_52;
        }
        else
        {
          v32 = v85;
          if ( v85[v30] <= -65 )
          {
LABEL_52:
            v33 = v30;
            v34 = v26;
            goto LABEL_57;
          }
        }
        v35 = &v32[v30];
        while ( v35 != v85 )
        {
          v36 = (unsigned __int8)*(v35 - 1);
          if ( (v36 & 0x80u) == 0 )
          {
            --v35;
            if ( v36 != 88 )
              goto LABEL_82;
          }
          else
          {
            v37 = *(v35 - 2);
            if ( v37 >= -64 )
            {
              v35 -= 2;
              v41 = v37 & 0x1F;
            }
            else
            {
              v38 = *(v35 - 3);
              if ( v38 >= -64 )
              {
                v35 -= 3;
                v40 = v38 & 0xF;
              }
              else
              {
                v39 = *(v35 - 4);
                v35 -= 4;
                v40 = ((v39 & 7) << 6) | v38 & 0x3F;
              }
              v41 = (v40 << 6) | v37 & 0x3F;
            }
            if ( ((v41 << 6) | v36 & 0x3F) != 0x58 )
              goto LABEL_82;
          }
        }
LABEL_83:
        v48 = 0LL;
LABEL_84:
        v49 = v2[3];
        src = (void *)v2[4];
        v92 = v49;
        if ( v49 == 0x8000000000000000LL )
        {
          v93 = 1LL;
          n = 0LL;
          if ( !v48 )
          {
LABEL_97:
            std::path::Path::_join(&v99, v93, n, v85, v48, v6);
            v106 = v30;
            v53 = v100;
            v120 = v100;
            *(_QWORD *)&v94 = 0LL;
            *((_QWORD *)&v94 + 1) = 1LL;
            v95 = 0LL;
            v113 = 32LL;
            LOBYTE(v114) = 3;
            v107 = 0LL;
            v109 = 0LL;
            v111 = &v94;
            v112 = &off_F0000;
            if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v120, &v107) )
              core::result::unwrap_failed(aADisplayImplem, 55LL, &v86, &unk_F00A8, &off_F0030);
            v89 = (char **)*((_QWORD *)&v94 + 1);
            v102 = v94;
            v55 = v95;
            if ( v99 )
              _rust_dealloc(v53, v99, 1LL);
            v56 = v106;
            if ( *((_BYTE *)v2 + 75) )
            {
              if ( v48 > 0xF )
              {
                if ( core::slice::memchr::memchr_aligned(47LL, v85, v48) == 1 )
                {
LABEL_108:
                  v58 = 0x8000000000000003LL;
LABEL_112:
                  *(_QWORD *)(v3 + 24) = v2[2];
                  *(_OWORD *)(v3 + 8) = *(_OWORD *)v2;
                  *(_QWORD *)(v3 + 32) = v58;
                  *(_QWORD *)v3 = 0x8000000000000000LL;
                  v27 = 0;
                  v29 = 0;
LABEL_158:
                  if ( v102 )
                    _rust_dealloc(v89, v102, 1LL);
LABEL_160:
                  if ( n )
                    _rust_dealloc(v93, n, 1LL);
                  if ( 2 * v92 )
                    _rust_dealloc(src, v92, 1LL);
LABEL_164:
                  if ( v90 != 0x8000000000000000LL && !v29 && v90 )
                    _rust_dealloc(v2[7], v90, 1LL);
                  if ( !v27 )
                    return v3;
                  goto LABEL_169;
                }
              }
              else if ( v48 )
              {
                v57 = 0LL;
                while ( v85[v57] != 47 )
                {
                  if ( v48 == ++v57 )
                    goto LABEL_109;
                }
                goto LABEL_108;
              }
            }
LABEL_109:
            is_absolute = 0x8000000000000000LL;
            if ( v92 != 0x8000000000000000LL )
            {
              is_absolute = std::path::Path::is_absolute(v85, v48);
              if ( (_BYTE)is_absolute )
              {
                v58 = 0x8000000000000005LL;
                goto LABEL_112;
              }
            }
            if ( v55 && *((_BYTE *)v55 + (_QWORD)v89 - 1) == 47 )
            {
              v60 = &dword_0 + 1;
              LOBYTE(is_absolute) = 1;
              v101 = is_absolute;
              v98 = 0LL;
              v91 = v102;
              v97 = (__int64)v89;
              v105 = v55;
              goto LABEL_136;
            }
            v61 = std::path::Path::parent(v89, v55);
            if ( v61 )
            {
              v99 = v61;
              *(_QWORD *)&v100 = v62;
              *(_QWORD *)&v94 = 0LL;
              *((_QWORD *)&v94 + 1) = 1LL;
              v95 = 0LL;
              v113 = 32LL;
              LOBYTE(v114) = 3;
              v107 = 0LL;
              v109 = 0LL;
              v111 = &v94;
              v112 = &off_F0000;
              if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v99, &v107) )
                core::result::unwrap_failed(aADisplayImplem, 55LL, &v86, &unk_F00A8, &off_F0030);
              v97 = *((_QWORD *)&v94 + 1);
              v91 = v94;
              v63 = v95;
            }
            else
            {
              v97 = 1LL;
              v91 = 0LL;
              v63 = 0LL;
            }
            v105 = v63;
            v64 = std::path::Path::file_name(v89, v55);
            if ( !v64 )
            {
              v60 = &dword_0 + 1;
              v101 = 0LL;
              v98 = 0LL;
              goto LABEL_136;
            }
            std::sys::os_str::bytes::Slice::to_str(&v107, v64);
            if ( v107 )
              core::option::unwrap_failed(&off_F0250);
            v65 = v108;
            v66 = v109;
            if ( v109 )
            {
              v67 = v109;
              if ( (v109 & 0x8000000000000000LL) != 0LL )
              {
                v68 = 0LL;
              }
              else
              {
                v68 = 1LL;
                v69 = _rust_alloc(v109, 1LL);
                if ( v69 )
                {
                  v56 = v106;
                  v66 = v67;
                  v60 = (void *)v69;
LABEL_135:
                  v98 = v66;
                  memcpy(v60, v65, v66);
                  v101 = 0LL;
LABEL_136:
                  v74 = v90;
                  if ( v90 == 0x8000000000000000LL )
                  {
                    v100 = 1uLL;
                    v74 = 0LL;
                  }
                  else
                  {
                    v100 = *(_OWORD *)(v2 + 7);
                  }
                  v99 = v74;
                  if ( v56 )
                  {
                    if ( v88 <= v56 )
                    {
                      if ( v88 != v56 )
LABEL_142:
                        core::str::slice_error_fail(v85, v88, v56, v88, &off_F0268, v54);
                    }
                    else if ( v85[v56] <= -65 )
                    {
                      goto LABEL_142;
                    }
                  }
                  *(_QWORD *)&v120 = &v85[v56];
                  *((_QWORD *)&v120 + 1) = v88 - v56;
                  *(_QWORD *)&v94 = &v120;
                  *((_QWORD *)&v94 + 1) = <&T as core::fmt::Display>::fmt;
                  v95 = &v99;
                  v96 = <alloc::string::String as core::fmt::Display>::fmt;
                  v107 = (char *)&unk_16360;
                  v108 = &dword_0 + 2;
                  v111 = 0LL;
                  v109 = (size_t)&v94;
                  v110 = 2LL;
                  alloc::fmt::format::format_inner(&v121, &v107);
                  v88 = v121;
                  v75 = v122;
                  v76 = v123;
                  if ( v123 > 0xF )
                  {
                    if ( core::slice::memchr::memchr_aligned(47LL, v122, v123) == 1 )
                      goto LABEL_151;
                  }
                  else if ( v123 )
                  {
                    v77 = 0LL;
                    while ( *(_BYTE *)(v122 + v77) != 47 )
                    {
                      if ( v123 == ++v77 )
                        goto LABEL_173;
                    }
LABEL_151:
                    *(_QWORD *)(v3 + 8) = v88;
                    *(_QWORD *)(v3 + 16) = v75;
                    *(_QWORD *)(v3 + 24) = v76;
                    *(_QWORD *)(v3 + 32) = 0x8000000000000004LL;
                    *(_QWORD *)v3 = 0x8000000000000000LL;
                    if ( v99 )
                      _rust_dealloc(v100, v99, 1LL);
                    if ( v98 )
                      _rust_dealloc(v60, v98, 1LL);
                    if ( v91 )
                      _rust_dealloc(v97, v91, 1LL);
                    v27 = 1;
                    v29 = 1;
                    if ( (_BYTE)v101 )
                      goto LABEL_160;
                    goto LABEL_158;
                  }
LABEL_173:
                  v79 = v60;
                  v80 = v106 - v48;
                  *(_QWORD *)v3 = v91;
                  *(_QWORD *)(v3 + 8) = v97;
                  *(_QWORD *)(v3 + 16) = v105;
                  v81 = v98;
                  *(_QWORD *)(v3 + 24) = v98;
                  *(_QWORD *)(v3 + 32) = v79;
                  *(_QWORD *)(v3 + 40) = v81;
                  *(_QWORD *)(v3 + 48) = v88;
                  *(_QWORD *)(v3 + 56) = v75;
                  *(_QWORD *)(v3 + 64) = v76;
                  *(_QWORD *)(v3 + 72) = v80;
                  if ( v99 )
                    _rust_dealloc(v100, v99, 1LL);
                  if ( !((v102 == 0) | (unsigned __int8)v101) )
                    _rust_dealloc(v89, v102, 1LL);
                  if ( n )
                    _rust_dealloc(v93, n, 1LL);
                  if ( 2 * v92 )
                    _rust_dealloc(src, v92, 1LL);
LABEL_169:
                  v24 = *v2;
                  if ( *v2 )
                  {
                    v25 = v85;
                    goto LABEL_171;
                  }
                  return v3;
                }
              }
              alloc::raw_vec::handle_error(v68, v67);
            }
            v60 = &dword_0 + 1;
            goto LABEL_135;
          }
LABEL_93:
          if ( v48 >= v88 )
          {
            if ( v48 == v88 )
              goto LABEL_97;
          }
          else if ( v85[v48] > -65 )
          {
            goto LABEL_97;
          }
          core::str::slice_error_fail(v85, v88, 0LL, v48, &off_F0238, v6);
        }
        n = v2[5];
        if ( n )
        {
          if ( (n & 0x8000000000000000LL) != 0LL )
          {
            v50 = 0LL;
          }
          else
          {
            v50 = 1LL;
            v51 = _rust_alloc(n, 1LL);
            if ( v51 )
            {
              v52 = (char *)v51;
              goto LABEL_92;
            }
          }
          alloc::raw_vec::handle_error(v50, n);
        }
        v52 = (char *)&dword_0 + 1;
LABEL_92:
        v93 = (__int64)v52;
        memcpy(v52, src, n);
        if ( !v48 )
          goto LABEL_97;
        goto LABEL_93;
      }
      if ( BYTE2(v110) )
        goto LABEL_40;
      if ( !v109 )
      {
        v30 = 3LL;
        v3 = n;
        v26 = v88;
        if ( !BYTE1(v110) )
        {
LABEL_41:
          if ( v90 == 0x8000000000000000LL )
          {
            v95 = (__int64 *)v2[2];
            v94 = *(_OWORD *)v2;
            v27 = 0;
          }
          else
          {
            v107 = v85;
            v108 = &v85[v26];
            v109 = v26;
            <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v94, &v107);
            v27 = 1;
          }
          *(_QWORD *)(v3 + 24) = v95;
          *(_OWORD *)(v3 + 8) = v94;
          *(_QWORD *)(v3 + 32) = 0x8000000000000002LL;
          *(_QWORD *)v3 = 0x8000000000000000LL;
          v28 = v2[3];
          if ( v28 != 0x8000000000000000LL && v28 )
            _rust_dealloc(v2[4], v28, 1LL);
          v29 = 0;
          goto LABEL_164;
        }
        goto LABEL_50;
      }
      v32 = v116;
      v34 = v117;
      v31 = &off_F0128;
      v3 = n;
      v26 = v88;
      if ( v109 >= v117 )
      {
        if ( v109 != v117 )
          goto LABEL_56;
      }
      else if ( v116[v109] < -64 )
      {
LABEL_56:
        v33 = v109;
        goto LABEL_57;
      }
      v70 = (unsigned __int8)v116[v109 - 1];
      if ( (v70 & 0x80u) != 0 )
      {
        v71 = v116[v109 - 2];
        if ( v71 > -65 )
        {
          v82 = v71 & 0x1F;
        }
        else
        {
          v72 = v116[v109 - 3];
          if ( v72 > -65 )
            v73 = v72 & 0xF;
          else
            v73 = ((v116[v109 - 4] & 7) << 6) | v72 & 0x3F;
          v6 = (unsigned int)(v73 << 6);
          v82 = v6 | v71 & 0x3F;
        }
        v70 = (v82 << 6) | v70 & 0x3F;
      }
      if ( BYTE1(v110) )
      {
        v9 = v109;
        goto LABEL_49;
      }
      v83 = -1LL;
      if ( v70 >= 0x80 )
      {
        v83 = -2LL;
        if ( v70 >= 0x800 )
          v83 = (v70 < (unsigned int)&unk_10000) | 0xFFFFFFFFFFFFFFFCLL;
      }
      v9 = v109 + v83;
      if ( !v9 )
      {
        v30 = 3LL;
        goto LABEL_50;
      }
      if ( v9 >= v117 )
      {
        if ( v9 == v117 )
          goto LABEL_49;
      }
      else if ( v116[v9] > -65 )
      {
        goto LABEL_49;
      }
      v33 = v9;
LABEL_57:
      core::str::slice_error_fail(v32, v34, 0LL, v33, v31, v6);
    }
  }
  *(_QWORD *)(a1 + 24) = v2[2];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v2;
  *(_QWORD *)(a1 + 32) = 0x8000000000000001LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  v23 = v2[3];
  if ( v23 != 0x8000000000000000LL && v23 )
    _rust_dealloc(v2[4], v23, 1LL);
  v24 = v90;
  if ( v90 )
  {
    v25 = (char *)v2[7];
LABEL_171:
    _rust_dealloc(v25, v24, 1LL);
  }
  return v3;
}
