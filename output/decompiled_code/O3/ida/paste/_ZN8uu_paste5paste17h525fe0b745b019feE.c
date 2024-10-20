__int64 __fastcall uu_paste::paste(__int64 *a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4, int a5)
{
  __int64 v6; // rbx
  unsigned __int8 *v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int8 *v10; // r14
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  unsigned __int8 v14; // dl
  int v15; // edx
  _BYTE *v16; // rax
  _BYTE *v17; // rbp
  unsigned __int64 v18; // r12
  int v19; // eax
  int v20; // ecx
  unsigned __int8 v21; // dl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _BYTE *v24; // rax
  _BYTE *v25; // rax
  __int64 p_src; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // r15
  _BYTE *v38; // r13
  _QWORD *v39; // rcx
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 (__fastcall *v43)(); // rax
  __int64 v44; // rcx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // kr00_16
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // r12
  unsigned __int64 v51; // rbx
  _QWORD *v52; // r14
  __int64 *v53; // r14
  __int64 v54; // rbx
  _QWORD *v55; // r15
  __int64 v56; // rsi
  __int64 v57; // rsi
  __int64 *v58; // rdi
  unsigned __int128 v59; // rax
  unsigned __int64 v60; // r14
  __int64 *v61; // r15
  __int64 v62; // rbx
  __int64 *v63; // r14
  __int128 v64; // xmm0
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // r14
  char *v68; // rbx
  unsigned int v69; // ebp
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rbx
  _OWORD *v73; // rax
  __int64 v74; // rbp
  __int128 v75; // xmm0
  __int64 v76; // r13
  _QWORD *v77; // r15
  unsigned __int64 v78; // r14
  __int64 v79; // rsi
  __int128 *v80; // r12
  __int64 (__fastcall *v81)(); // r14
  __int64 v82; // r13
  __int64 v83; // rbp
  __int64 v84; // r15
  __int128 *v85; // rcx
  __int32 v86; // ebx
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rbx
  __int64 (__fastcall *v92)(); // r14
  __int64 v93; // rsi
  _QWORD *v94; // rdi
  _QWORD *v95; // rdi
  __int64 v96; // r15
  __int64 *v97; // rbx
  _QWORD *v98; // rbx
  _OWORD *v99; // rax
  __int128 v100; // xmm0
  __int64 v101; // rdi
  __int64 v102; // r14
  __int64 (__fastcall *v103)(); // r15
  __int64 v104; // rsi
  _QWORD *v105; // rdi
  __int64 v106; // r13
  __int64 *v107; // r14
  _QWORD *v108; // rdi
  _QWORD *v109; // r14
  char v111; // [rsp+Fh] [rbp-129h] BYREF
  __int128 v112; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v113; // [rsp+20h] [rbp-118h]
  __int64 v114; // [rsp+28h] [rbp-110h]
  __int64 v115; // [rsp+30h] [rbp-108h]
  int v116; // [rsp+3Ch] [rbp-FCh]
  _QWORD *src; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v118; // [rsp+48h] [rbp-F0h] BYREF
  __int64 (__fastcall *v119)(); // [rsp+50h] [rbp-E8h]
  __int64 v120; // [rsp+58h] [rbp-E0h]
  __int64 v121; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v122; // [rsp+68h] [rbp-D0h]
  __int128 v123; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v124; // [rsp+80h] [rbp-B8h]
  __int64 *v125; // [rsp+90h] [rbp-A8h]
  __int64 v126; // [rsp+98h] [rbp-A0h]
  __m256i v127; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v128; // [rsp+C0h] [rbp-78h]
  __int64 v129; // [rsp+D0h] [rbp-68h]
  __int64 v130; // [rsp+D8h] [rbp-60h]
  __int64 v131; // [rsp+E0h] [rbp-58h]
  __int64 *v132; // [rsp+F0h] [rbp-48h]
  __int64 v133; // [rsp+F8h] [rbp-40h]
  __int64 v134; // [rsp+100h] [rbp-38h]

  v116 = a5;
  LODWORD(v114) = a2;
  v132 = a1;
  v121 = (__int64)a3;
  v122 = a4;
  LODWORD(src) = 0;
  if ( a4 )
  {
    v6 = 16 * a4;
    if ( a4 >> 59 )
    {
      v8 = 0LL;
    }
    else
    {
      v7 = a3;
      v8 = 8LL;
      a2 = 8LL;
      v9 = _rust_alloc(16 * a4, 8LL);
      if ( v9 )
      {
        *(_QWORD *)&v112 = a4;
        *((_QWORD *)&v112 + 1) = v9;
        v113 = 0LL;
        v10 = &v7[a4];
        while ( 1 )
        {
          while ( 1 )
          {
            v11 = *v7;
            if ( (v11 & 0x80u) != 0 )
            {
              v12 = v11 & 0x1F;
              a2 = v7[1] & 0x3F;
              if ( (unsigned __int8)v11 <= 0xDFu )
              {
                v7 += 2;
                if ( ((unsigned int)a2 | (v12 << 6)) != 0x5C )
                  goto LABEL_5;
              }
              else
              {
                a2 = (unsigned int)((_DWORD)a2 << 6);
                v13 = a2 | v7[2] & 0x3F;
                if ( (unsigned __int8)v11 < 0xF0u )
                {
                  v7 += 3;
                  if ( ((v12 << 12) | v13) != 0x5C )
                    goto LABEL_5;
                }
                else
                {
                  v14 = v7[3];
                  v7 += 4;
                  if ( (((v12 & 7) << 18) | (v13 << 6) | v14 & 0x3F) != 0x5C )
                    goto LABEL_5;
                }
              }
            }
            else
            {
              ++v7;
              if ( v11 != 92 )
                goto LABEL_5;
            }
            if ( v7 == v10 )
            {
              v118 = (unsigned __int64)&v121;
              v119 = <&T as core::fmt::Display>::fmt;
              v127.m256i_i64[0] = (__int64)&off_DD2B8;
              v127.m256i_i64[1] = 1LL;
              *(_QWORD *)&v128 = 0LL;
              v127.m256i_i64[2] = (__int64)&v118;
              v127.m256i_i64[3] = 1LL;
              alloc::fmt::format::format_inner(&v123, &v127);
              v47 = v123;
              v48 = v124;
              v49 = _rust_alloc(32LL, 8LL);
              if ( !v49 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v50 = v49;
              *(_OWORD *)v49 = v47;
              *(_QWORD *)(v49 + 16) = v48;
              *(_DWORD *)(v49 + 24) = 1;
              v51 = v113;
              if ( v113 )
              {
                v52 = (_QWORD *)(*((_QWORD *)&v112 + 1) + 8LL);
                do
                {
                  if ( *v52 )
                    _rust_dealloc(*(v52 - 1), *v52, 1LL);
                  v52 += 2;
                  --v51;
                }
                while ( v51 );
              }
              if ( (_QWORD)v112 )
                _rust_dealloc(*((_QWORD *)&v112 + 1), 16 * v112, 8LL);
              v53 = (__int64 *)v132[1];
              v54 = v132[2];
              if ( v54 )
              {
                v55 = v53 + 1;
                do
                {
                  v56 = *(v55 - 1);
                  if ( v56 )
                    _rust_dealloc(*v55, v56, 1LL);
                  v55 += 3;
                  --v54;
                }
                while ( v54 );
              }
              if ( *v132 )
              {
                v57 = 24 * *v132;
                v58 = v53;
                goto LABEL_226;
              }
              return v50;
            }
            v15 = *v7;
            if ( (v15 & 0x80u) != 0 )
              break;
            ++v7;
            if ( v15 <= 109 )
              goto LABEL_19;
LABEL_32:
            if ( v15 == 110 )
            {
              a2 = 1LL;
              v25 = (_BYTE *)_rust_alloc(1LL, 1LL);
              if ( !v25 )
LABEL_231:
                alloc::alloc::handle_alloc_error(1LL, 1LL);
              v17 = v25;
              *v25 = 10;
              v18 = v113;
              if ( v113 != (_QWORD)v112 )
                goto LABEL_41;
            }
            else
            {
              if ( v15 != 116 )
                goto LABEL_5;
              a2 = 1LL;
              v24 = (_BYTE *)_rust_alloc(1LL, 1LL);
              if ( !v24 )
                goto LABEL_231;
              v17 = v24;
              *v24 = 9;
              v18 = v113;
              if ( v113 != (_QWORD)v112 )
                goto LABEL_41;
            }
LABEL_40:
            alloc::raw_vec::RawVec<T,A>::grow_one(&v112);
LABEL_41:
            v22 = (_QWORD *)(*((_QWORD *)&v112 + 1) + 16 * v18);
            *v22 = v17;
            v23 = 1LL;
LABEL_42:
            v22[1] = v23;
            v113 = v18 + 1;
            if ( v7 == v10 )
              goto LABEL_47;
          }
          v19 = v15 & 0x1F;
          a2 = v7[1] & 0x3F;
          if ( (unsigned __int8)v15 <= 0xDFu )
          {
            v7 += 2;
            v15 = a2 | (v19 << 6);
            if ( v15 > 109 )
              goto LABEL_32;
          }
          else
          {
            a2 = (unsigned int)((_DWORD)a2 << 6);
            v20 = a2 | v7[2] & 0x3F;
            if ( (unsigned __int8)v15 < 0xF0u )
            {
              v7 += 3;
              v15 = (v19 << 12) | v20;
              if ( v15 > 109 )
                goto LABEL_32;
            }
            else
            {
              v21 = v7[3];
              v7 += 4;
              v15 = ((v19 & 7) << 18) | (v20 << 6) | v21 & 0x3F;
              if ( v15 > 109 )
                goto LABEL_32;
            }
          }
LABEL_19:
          if ( v15 == 48 )
          {
            v18 = v113;
            if ( v113 == (_QWORD)v112 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v112);
            v22 = (_QWORD *)(*((_QWORD *)&v112 + 1) + 16 * v18);
            *v22 = 1LL;
            v23 = 0LL;
            goto LABEL_42;
          }
          if ( v15 == 92 )
          {
            a2 = 1LL;
            v16 = (_BYTE *)_rust_alloc(1LL, 1LL);
            if ( !v16 )
              goto LABEL_231;
            v17 = v16;
            *v16 = 92;
            v18 = v113;
            if ( v113 != (_QWORD)v112 )
              goto LABEL_41;
            goto LABEL_40;
          }
LABEL_5:
          a2 = (__int64)&v112;
          uu_paste::parse_delimiters::{{closure}}(&src);
          if ( v7 == v10 )
            goto LABEL_47;
        }
      }
    }
    alloc::raw_vec::handle_error(v8, v6);
  }
  *(_QWORD *)&v112 = 0LL;
  *((_QWORD *)&v112 + 1) = 8LL;
  v113 = 0LL;
LABEL_47:
  v127.m256i_i64[2] = v113;
  *(_OWORD *)v127.m256i_i8 = v112;
  p_src = (__int64)&v127;
  v27 = alloc::vec::Vec<T,A>::into_boxed_slice(&v127, a2);
  src = 0LL;
  v28 = v132[2];
  v126 = v29;
  v125 = (__int64 *)v27;
  if ( v28 )
  {
    if ( v28 > 0x2AAAAAAAAAAAAAALL )
    {
      v30 = 0LL;
      goto LABEL_236;
    }
    v30 = 8LL;
    p_src = 48 * v28;
    v31 = _rust_alloc(48 * v28, 8LL);
    if ( !v31 )
LABEL_236:
      alloc::raw_vec::handle_error(v30, 48 * v28);
  }
  else
  {
    v31 = 8LL;
  }
  v118 = v28;
  v119 = (__int64 (__fastcall *)())v31;
  v120 = 0LL;
  v32 = *v132;
  v33 = v132[1];
  v34 = v33 + 24 * v28;
  *(_QWORD *)&v123 = v33;
  *((_QWORD *)&v123 + 1) = v33;
  *(_QWORD *)&v124 = v32;
  *((_QWORD *)&v124 + 1) = v34;
  v35 = v33;
  if ( !v28 )
    goto LABEL_87;
  v134 = v33 + 24 * v28;
  v133 = v32;
  v115 = 24 * v28;
  v36 = 0LL;
  do
  {
    v37 = *(_QWORD *)(v33 + v36);
    if ( v37 == 0x8000000000000000LL )
    {
      v35 = v33 + v36 + 24;
      v34 = v134;
      goto LABEL_86;
    }
    v38 = *(_BYTE **)(v33 + v36 + 8);
    if ( *(_QWORD *)(v33 + v36 + 16) == 1LL && *v38 == 45 )
    {
      v39 = src;
      if ( !src )
      {
        p_src = (__int64)&src;
        core::cell::once::OnceCell<T>::try_init(&src);
        v39 = src;
      }
      v40 = (*v39)++ == -1LL;
      if ( v40 )
        BUG();
      v41 = 0LL;
    }
    else
    {
      v127.m256i_i64[0] = 0x1B600000000LL;
      v127.m256i_i16[6] = 0;
      v127.m256i_i32[2] = 1;
      std::fs::OpenOptions::_open(&v121, &v127, v38);
      if ( (_DWORD)v121 )
      {
        *((_QWORD *)&v123 + 1) = v33 + v36 + 24;
        v127.m256i_i64[0] = 0x8000000000000000LL;
        v127.m256i_i64[3] = v122;
        v73 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v73 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v50 = (__int64)v73;
        v74 = v115 - 24;
        v75 = *(_OWORD *)v127.m256i_i8;
        v73[1] = *(_OWORD *)&v127.m256i_u64[2];
        *v73 = v75;
        if ( v37 )
          _rust_dealloc(v38, v37, 1LL);
        v76 = v133;
        if ( v74 != v36 )
        {
          v77 = (_QWORD *)(v33 + v36 + 32);
          v78 = (v115 - v36 - 24) / 0x18uLL;
          do
          {
            v79 = *(v77 - 1);
            if ( v79 )
              _rust_dealloc(*v77, v79, 1LL);
            v77 += 3;
            --v78;
          }
          while ( v78 );
        }
        if ( v76 )
          _rust_dealloc(v33, 24 * v76, 8LL);
        goto LABEL_204;
      }
      LODWORD(v32) = HIDWORD(v121);
      p_src = 0x2000LL;
      v41 = _rust_alloc(0x2000LL, 1LL);
      if ( !v41 )
      {
        *((_QWORD *)&v123 + 1) = v33 + v36 + 24;
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      }
      v112 = 0LL;
      v113 = 0LL;
      v39 = (_QWORD *)&stru_2000;
    }
    v127.m256i_i64[0] = v41;
    v127.m256i_i64[1] = (__int64)v39;
    *(_QWORD *)&v128 = v113;
    *(_OWORD *)&v127.m256i_u64[2] = v112;
    DWORD2(v128) = v32;
    v42 = v120;
    if ( v120 == v118 )
    {
      p_src = (__int64)&v118;
      alloc::raw_vec::RawVec<T,A>::grow_one(&v118);
    }
    v43 = v119;
    v44 = 48 * v42;
    v45 = *(_OWORD *)v127.m256i_i8;
    v46 = *(_OWORD *)&v127.m256i_u64[2];
    *(_OWORD *)((char *)v119 + v44 + 32) = v128;
    *(_OWORD *)((char *)v43 + v44 + 16) = v46;
    *(_OWORD *)((char *)v43 + v44) = v45;
    v120 = v42 + 1;
    if ( v37 )
    {
      p_src = (__int64)v38;
      _rust_dealloc(v38, v37, 1LL);
    }
    v36 += 24LL;
  }
  while ( v115 != v36 );
  v34 = v134;
  v35 = v134;
LABEL_86:
  *((_QWORD *)&v123 + 1) = v35;
  v32 = v133;
LABEL_87:
  v59 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v34 - v35);
  if ( v34 != v35 )
  {
    v60 = (v34 - v35) / 0x18uLL;
    v61 = (__int64 *)(v35 + 8);
    do
    {
      v34 = *(v61 - 1);
      if ( v34 )
      {
        p_src = *v61;
        _rust_dealloc(*v61, v34, 1LL);
      }
      v61 += 3;
      --v60;
    }
    while ( v60 );
  }
  if ( v32 )
  {
    v34 = 24 * v32;
    p_src = v33;
    _rust_dealloc(v33, 24 * v32, 8LL);
  }
  v62 = v126;
  v63 = v125;
  v127.m256i_i64[0] = std::io::stdio::stdout(p_src, v34, *((_QWORD *)&v59 + 1));
  v121 = std::io::stdio::Stdout::lock(&v127);
  v111 = v116;
  if ( v62 == 1 )
  {
    v65 = v63[1];
    if ( !v65 )
      goto LABEL_99;
    v127.m256i_i64[1] = *v63;
    v127.m256i_i64[2] = v65;
    v127.m256i_i64[0] = 1LL;
  }
  else
  {
    if ( v62 )
    {
      v64 = *(_OWORD *)v63;
      *((_QWORD *)&v128 + 1) = v63;
      v129 = (__int64)&v63[2 * v62];
      v130 = (__int64)v63;
      v131 = v129;
      *(_OWORD *)&v127.m256i_u64[1] = v64;
      v127.m256i_i64[3] = (__int64)v63;
      *(_QWORD *)&v128 = v62;
      v127.m256i_i64[0] = 2LL;
      goto LABEL_100;
    }
LABEL_99:
    v127.m256i_i64[0] = 0LL;
  }
LABEL_100:
  v66 = v120;
  *(_QWORD *)&v112 = 0LL;
  *((_QWORD *)&v112 + 1) = 1LL;
  v113 = 0LL;
  if ( !(_BYTE)v114 )
  {
    v114 = v120;
    if ( v120 )
    {
      if ( v120 < 0 )
      {
        v72 = 0LL;
      }
      else
      {
        v72 = 1LL;
        v115 = _rust_alloc_zeroed(v114, 1LL);
        if ( v115 )
        {
          v66 = v114;
          goto LABEL_137;
        }
      }
      alloc::raw_vec::handle_error(v72, v114);
    }
    v115 = 1LL;
LABEL_137:
    LODWORD(v133) = (unsigned __int8)v116;
    v80 = &v112;
    while ( 1 )
    {
      v113 = 0LL;
      v81 = v119;
      v82 = 48 * v120;
      v83 = 0LL;
      v84 = 0LL;
      while ( v82 )
      {
        if ( v66 == v83 )
          core::panicking::panic_bounds_check(v66, v66, &off_DD2A0);
        if ( *(_BYTE *)(v115 + v83) )
        {
          ++v84;
        }
        else
        {
          uu_paste::InputSource::read_until(&v123, v81, (unsigned int)v133, v80);
          v85 = v80;
          v50 = v123;
          if ( (_QWORD)v123 )
            goto LABEL_197;
          if ( *((_QWORD *)&v123 + 1) )
          {
            v66 = v114;
            v80 = v85;
            if ( v113 && *(_BYTE *)(*((_QWORD *)&v112 + 1) + v113 - 1) == (_BYTE)v116 )
              --v113;
          }
          else
          {
            *(_BYTE *)(v115 + v83) = 1;
            ++v84;
            v66 = v114;
            v80 = v85;
          }
        }
        v81 = (__int64 (__fastcall *)())((char *)v81 + 48);
        v82 -= 48LL;
        ++v83;
        uu_paste::DelimiterState::write_delimiter(&v127, v80);
      }
      if ( v84 == v66 )
        break;
      v86 = v127.m256i_i32[0];
      if ( v127.m256i_i64[0] )
      {
        if ( v127.m256i_i64[2] )
        {
          v87 = v113 - v127.m256i_i64[2];
          if ( v113 >= v127.m256i_i64[2] )
          {
            v113 -= v127.m256i_u64[2];
          }
          else
          {
            if ( v113 )
              core::panicking::panic(aAssertionFaile_3, 33LL, &off_DD370);
            v87 = 0LL;
          }
        }
        else
        {
          v87 = v113;
        }
      }
      else
      {
        v87 = v113;
      }
      v88 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v121, *((_QWORD *)&v112 + 1), v87);
      if ( v88 )
      {
        *(_QWORD *)&v123 = 0x8000000000000000LL;
        *((_QWORD *)&v124 + 1) = v88;
        v99 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v99 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_196;
      }
      v89 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v121, &v111, 1LL);
      if ( v89 )
      {
        *(_QWORD *)&v123 = 0x8000000000000000LL;
        *((_QWORD *)&v124 + 1) = v89;
        v99 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v99 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_196:
        v50 = (__int64)v99;
        v100 = v123;
        v99[1] = v124;
        *v99 = v100;
LABEL_197:
        if ( v114 )
          _rust_dealloc(v115, v114, 1LL);
        goto LABEL_199;
      }
      v40 = v86 == 2;
      v66 = v114;
      if ( v40 )
      {
        *((_QWORD *)&v128 + 1) = v127.m256i_i64[3];
        v129 = v127.m256i_i64[3] + 16 * v128;
        v130 = v127.m256i_i64[3];
        v131 = v129;
      }
    }
    if ( v66 )
      _rust_dealloc(v115, v66, 1LL);
    goto LABEL_165;
  }
  v67 = (__int64)v119;
  v68 = (char *)v119 + 48 * v120;
  v69 = (unsigned __int8)v116;
  v114 = (__int64)v68;
LABEL_102:
  if ( (char *)v67 == v68 )
  {
LABEL_165:
    if ( (_QWORD)v112 )
      _rust_dealloc(*((_QWORD *)&v112 + 1), v112, 1LL);
    v90 = v121;
    v40 = (*(_DWORD *)(v121 + 12))-- == 1;
    if ( v40 )
    {
      *(_QWORD *)v90 = 0LL;
      if ( _InterlockedExchange((volatile __int32 *)(v90 + 8), 0) == 2 )
        std::sys::sync::mutex::futex::Mutex::wake(v90 + 8);
    }
    v91 = v120;
    if ( v120 )
    {
      v92 = v119;
      do
      {
        if ( *(_QWORD *)v92 )
        {
          v93 = *((_QWORD *)v92 + 1);
          if ( v93 )
            _rust_dealloc(*(_QWORD *)v92, v93, 1LL);
          close(*((_DWORD *)v92 + 10));
        }
        else
        {
          v94 = (_QWORD *)*((_QWORD *)v92 + 1);
          v40 = (*v94)-- == 1LL;
          if ( v40 )
          {
            v40 = v94[1]-- == 1LL;
            if ( v40 )
              _rust_dealloc(v94, 32LL, 8LL);
          }
        }
        v92 = (__int64 (__fastcall *)())((char *)v92 + 48);
        --v91;
      }
      while ( v91 );
    }
    if ( v118 )
      _rust_dealloc(v119, 48 * v118, 8LL);
    v95 = src;
    v96 = v126;
    v97 = v125;
    if ( src )
    {
      v40 = (*src)-- == 1LL;
      if ( v40 )
      {
        v40 = v95[1]-- == 1LL;
        if ( v40 )
          _rust_dealloc(v95, 32LL, 8LL);
      }
    }
    if ( v96 )
    {
      v98 = v97 + 1;
      do
      {
        if ( *v98 )
          _rust_dealloc(*(v98 - 1), *v98, 1LL);
        v98 += 2;
        --v96;
      }
      while ( v96 );
      _rust_dealloc(v125, 16 * v126, 8LL);
    }
    return 0LL;
  }
  v115 = v67 + 48;
  v113 = 0LL;
  while ( 1 )
  {
    uu_paste::InputSource::read_until(&v123, v67, v69, &v112);
    v50 = v123;
    if ( (_QWORD)v123 )
      break;
    if ( !*((_QWORD *)&v123 + 1) )
    {
      v68 = (char *)v114;
      if ( v127.m256i_i64[0] )
      {
        if ( v127.m256i_i64[2] )
        {
          v70 = v113 - v127.m256i_i64[2];
          if ( v113 >= v127.m256i_i64[2] )
          {
            v113 -= v127.m256i_u64[2];
          }
          else
          {
            if ( v113 )
              core::panicking::panic(aAssertionFaile_3, 33LL, &off_DD370);
            v70 = 0LL;
          }
        }
        else
        {
          v70 = v113;
        }
      }
      else
      {
        v70 = v113;
      }
      v71 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v121, *((_QWORD *)&v112 + 1), v70);
      if ( v71 || (v71 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v121, &v111, 1LL), v67 = v115, v71) )
      {
        v50 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
        break;
      }
      goto LABEL_102;
    }
    if ( v113 )
    {
      if ( *(_BYTE *)(*((_QWORD *)&v112 + 1) + v113 - 1) == (_BYTE)v116 )
        --v113;
    }
    uu_paste::DelimiterState::write_delimiter(&v127, &v112);
  }
LABEL_199:
  if ( (_QWORD)v112 )
    _rust_dealloc(*((_QWORD *)&v112 + 1), v112, 1LL);
  v101 = v121;
  v40 = (*(_DWORD *)(v121 + 12))-- == 1;
  if ( v40 )
  {
    *(_QWORD *)v101 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v101 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v101 + 8);
  }
LABEL_204:
  v102 = v120;
  if ( v120 )
  {
    v103 = v119;
    do
    {
      if ( *(_QWORD *)v103 )
      {
        v104 = *((_QWORD *)v103 + 1);
        if ( v104 )
          _rust_dealloc(*(_QWORD *)v103, v104, 1LL);
        close(*((_DWORD *)v103 + 10));
      }
      else
      {
        v105 = (_QWORD *)*((_QWORD *)v103 + 1);
        v40 = (*v105)-- == 1LL;
        if ( v40 )
        {
          v40 = v105[1]-- == 1LL;
          if ( v40 )
            _rust_dealloc(v105, 32LL, 8LL);
        }
      }
      v103 = (__int64 (__fastcall *)())((char *)v103 + 48);
      --v102;
    }
    while ( v102 );
  }
  v106 = v126;
  v107 = v125;
  if ( v118 )
    _rust_dealloc(v119, 48 * v118, 8LL);
  v108 = src;
  if ( src )
  {
    v40 = (*src)-- == 1LL;
    if ( v40 )
    {
      v40 = v108[1]-- == 1LL;
      if ( v40 )
        _rust_dealloc(v108, 32LL, 8LL);
    }
  }
  if ( v106 )
  {
    v109 = v107 + 1;
    do
    {
      if ( *v109 )
        _rust_dealloc(*(v109 - 1), *v109, 1LL);
      v109 += 2;
      --v106;
    }
    while ( v106 );
    v57 = 16 * v126;
    v58 = v125;
LABEL_226:
    _rust_dealloc(v58, v57, 8LL);
  }
  return v50;
}
