__int64 __fastcall uu_pr::print_page(__int64 (__fastcall *a1)(), _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  char v5; // r13
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rsi
  __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // r13
  unsigned __int64 v18; // rax
  _QWORD *v19; // r15
  unsigned __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rbx
  _QWORD *v26; // r15
  __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  int v29; // edx
  __int64 v30; // rbx
  unsigned __int64 v31; // rdi
  __int64 v32; // rbp
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r15
  char *v35; // r13
  unsigned __int64 *v36; // r15
  unsigned __int64 *v37; // r15
  __int64 v38; // r13
  unsigned __int64 *v39; // rax
  __int64 v40; // r10
  __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rbp
  __int64 v46; // r12
  unsigned __int64 v47; // rbx
  __int64 v48; // r14
  __int64 v49; // r13
  __int64 v50; // rbx
  bool v51; // zf
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rbx
  _QWORD *v55; // r15
  __int64 v56; // rsi
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // r13
  __int64 v60; // rbp
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // r14
  _QWORD *v65; // r15
  __int64 v66; // rsi
  unsigned __int64 v67; // rbx
  _QWORD *v68; // r15
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rbx
  __int64 v72; // r14
  _QWORD *v73; // r15
  __int64 v74; // rsi
  __int64 v76; // [rsp+8h] [rbp-210h]
  unsigned __int64 v77; // [rsp+8h] [rbp-210h]
  __int64 v78; // [rsp+10h] [rbp-208h] BYREF
  unsigned __int64 v79; // [rsp+18h] [rbp-200h]
  __int64 v80; // [rsp+20h] [rbp-1F8h]
  unsigned __int64 v81; // [rsp+28h] [rbp-1F0h]
  __int64 v82; // [rsp+30h] [rbp-1E8h]
  int v83; // [rsp+3Ch] [rbp-1DCh]
  __int64 v84; // [rsp+40h] [rbp-1D8h]
  __int128 v85; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 (__fastcall *v86)(); // [rsp+58h] [rbp-1C0h]
  _QWORD *v87; // [rsp+60h] [rbp-1B8h]
  __int64 v88; // [rsp+68h] [rbp-1B0h]
  __int64 v89; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v90; // [rsp+78h] [rbp-1A0h]
  __int64 v91; // [rsp+80h] [rbp-198h]
  __int64 v92; // [rsp+88h] [rbp-190h] BYREF
  __int64 v93; // [rsp+90h] [rbp-188h]
  __int64 v94; // [rsp+98h] [rbp-180h]
  unsigned __int64 v95; // [rsp+A0h] [rbp-178h]
  __int64 (__fastcall *v96)(); // [rsp+A8h] [rbp-170h]
  __int64 v97; // [rsp+B0h] [rbp-168h]
  __int64 v98; // [rsp+B8h] [rbp-160h]
  __int64 v99; // [rsp+C0h] [rbp-158h]
  __int64 v100; // [rsp+C8h] [rbp-150h]
  unsigned __int64 *v101; // [rsp+D0h] [rbp-148h]
  int v102; // [rsp+DCh] [rbp-13Ch]
  __int64 v103; // [rsp+E0h] [rbp-138h]
  __int64 v104; // [rsp+E8h] [rbp-130h]
  __int64 v105; // [rsp+F0h] [rbp-128h]
  __int64 v106; // [rsp+F8h] [rbp-120h]
  void *v107; // [rsp+100h] [rbp-118h] BYREF
  __int64 v108; // [rsp+108h] [rbp-110h]
  __int64 *v109; // [rsp+110h] [rbp-108h]
  __int128 v110; // [rsp+118h] [rbp-100h]
  __int128 v111; // [rsp+128h] [rbp-F0h]
  __int64 v112; // [rsp+138h] [rbp-E0h]
  __int64 v113; // [rsp+140h] [rbp-D8h] BYREF
  __int64 (__fastcall *v114)(); // [rsp+148h] [rbp-D0h]
  __int64 v115; // [rsp+150h] [rbp-C8h]
  __int64 (__fastcall *v116)(); // [rsp+158h] [rbp-C0h]
  __int64 *v117; // [rsp+160h] [rbp-B8h]
  __int64 (__fastcall *v118)(); // [rsp+168h] [rbp-B0h]
  __int64 v119; // [rsp+170h] [rbp-A8h]
  unsigned __int64 v120; // [rsp+178h] [rbp-A0h]
  char v121; // [rsp+180h] [rbp-98h]
  __int64 v122; // [rsp+188h] [rbp-90h]
  unsigned __int64 v123; // [rsp+190h] [rbp-88h]
  __int64 v124; // [rsp+1A0h] [rbp-78h]
  __int64 v125; // [rsp+1A8h] [rbp-70h]
  __int64 v126; // [rsp+1B0h] [rbp-68h]
  __int64 v127; // [rsp+1B8h] [rbp-60h]
  __int64 v128; // [rsp+1C0h] [rbp-58h]
  __int64 v129; // [rsp+1C8h] [rbp-50h] BYREF
  __int64 (__fastcall *v130)(); // [rsp+1D0h] [rbp-48h] BYREF
  unsigned __int64 *v131; // [rsp+1D8h] [rbp-40h]
  __int64 v132; // [rsp+1E0h] [rbp-38h]

  v4 = a3;
  v81 = (unsigned __int64)a2;
  v96 = a1;
  v106 = *(_QWORD *)(a3 + 80);
  v105 = *(_QWORD *)(a3 + 88);
  v128 = *(_QWORD *)(a3 + 152);
  v127 = *(_QWORD *)(a3 + 160);
  v92 = a4;
  v5 = *(_BYTE *)(a3 + 321);
  if ( v5 )
  {
    v113 = a3 + 120;
    v114 = <alloc::string::String as core::fmt::Display>::fmt;
    v115 = a3 + 48;
    v116 = <alloc::string::String as core::fmt::Display>::fmt;
    v117 = &v92;
    v118 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v107 = &unk_28ED90;
    v108 = 3LL;
    v109 = &v113;
    v110 = 3uLL;
    alloc::fmt::format::format_inner(&v85, &v107);
    v6 = 8LL;
    v7 = _rust_alloc(120LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 120LL);
    v8 = v7;
    *(_QWORD *)(v7 + 64) = v86;
    *(_OWORD *)(v7 + 48) = v85;
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = 1LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 32) = 1LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 72) = 0LL;
    *(_QWORD *)(v7 + 80) = 1LL;
    *(_OWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 104) = 1LL;
    *(_QWORD *)(v7 + 112) = 0LL;
    v124 = 5LL;
    v125 = v7;
    v126 = 5LL;
    v83 = *(unsigned __int8 *)(v4 + 322);
    if ( (_BYTE)v83 )
    {
      v76 = 5LL;
      v9 = 0LL;
      goto LABEL_9;
    }
    v11 = _rust_alloc(120LL, 8LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 120LL);
    v6 = v11;
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 1LL;
    *(_OWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 32) = 1LL;
    *(_OWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)(v11 + 56) = 1LL;
    *(_OWORD *)(v11 + 64) = 0LL;
    *(_QWORD *)(v11 + 80) = 1LL;
    *(_OWORD *)(v11 + 88) = 0LL;
    *(_QWORD *)(v11 + 104) = 1LL;
    *(_QWORD *)(v11 + 112) = 0LL;
    v9 = 5LL;
    v83 = 0;
    v10 = 5LL;
  }
  else
  {
    v124 = 0LL;
    v125 = 8LL;
    v126 = 0LL;
    v83 = *(unsigned __int8 *)(a3 + 322);
    v6 = 8LL;
    v9 = 0LL;
    v8 = 8LL;
    v10 = 0LL;
  }
  v76 = v10;
LABEL_9:
  v98 = v9;
  v99 = v6;
  v100 = v9;
  v129 = std::io::stdio::stdout();
  v78 = std::io::stdio::Stdout::lock(&v129);
  v12 = (__int64 (__fastcall *)())(v8 + 24 * v76);
  v113 = v8;
  v114 = (__int64 (__fastcall *)())v8;
  v115 = v76;
  v116 = v12;
  v13 = v8;
  v88 = v4;
  if ( v5 )
  {
    v84 = v8 + 24 * v76;
    LOBYTE(v82) = v5;
    v80 = 3LL * (unsigned int)(8 * v76);
    v14 = 0LL;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v8 + v14);
      if ( v15 == 0x8000000000000000LL )
      {
        v13 = v8 + v14 + 24;
        v12 = (__int64 (__fastcall *)())v84;
LABEL_27:
        v114 = (__int64 (__fastcall *)())v13;
        v4 = v88;
        v5 = v82;
        goto LABEL_28;
      }
      v16 = *(_QWORD *)(v8 + v14 + 8);
      if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v16, *(_QWORD *)(v8 + v14 + 16))
        || <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v106, v105) )
      {
        break;
      }
      if ( v15 )
        _rust_dealloc(v16, v15, 1LL);
      v14 += 24LL;
      if ( v80 == v14 )
      {
        v12 = (__int64 (__fastcall *)())v84;
        v13 = v84;
        goto LABEL_27;
      }
    }
    v114 = (__int64 (__fastcall *)())(v8 + v14 + 24);
    v17 = v80 - 24;
    if ( v15 )
      _rust_dealloc(v16, v15, 1LL);
    if ( v17 != v14 )
    {
      v18 = v80 - v14 - 24;
      v19 = (_QWORD *)(v8 + v14 + 32);
      v20 = v18 / 0x18;
      do
      {
        v21 = *(v19 - 1);
        if ( v21 )
          _rust_dealloc(*v19, v21, 1LL);
        v19 += 3;
        --v20;
      }
      while ( v20 );
    }
    v22 = 3LL * (unsigned int)(8 * v76);
    v23 = 8LL;
    v24 = v8;
LABEL_147:
    _rust_dealloc(v24, v22, v23);
    goto LABEL_148;
  }
LABEL_28:
  if ( v12 != (__int64 (__fastcall *)())v13 )
  {
    v25 = ((unsigned __int64)v12 - v13) / 0x18;
    v26 = (_QWORD *)(v13 + 8);
    do
    {
      v27 = *(v26 - 1);
      if ( v27 )
        _rust_dealloc(*v26, v27, 1LL);
      v26 += 3;
      --v25;
    }
    while ( v25 );
  }
  if ( v5 )
    _rust_dealloc(v8, 3LL * (unsigned int)(8 * v76), 8LL);
  v28 = *(_QWORD *)(v4 + 16);
  v104 = *(_QWORD *)(v4 + 104);
  v103 = *(_QWORD *)(v4 + 112);
  v79 = *(_QWORD *)(v4 + 312) >> *(_BYTE *)(v4 + 320);
  if ( v28 )
  {
    v80 = *(_QWORD *)(v4 + 24);
    v29 = 0;
    if ( *(_QWORD *)(v4 + 256) != 0x8000000000000000LL )
      v29 = *(_DWORD *)(v4 + 296);
    v84 = *(_QWORD *)(v4 + 32);
    v97 = *(_QWORD *)(v4 + 40);
    v89 = 0LL;
    v90 = 8LL;
    v91 = 0LL;
    if ( v80 )
    {
      v102 = v29;
      v95 = v28;
      v101 = (unsigned __int64 *)(v81 << 6);
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      do
      {
        if ( v31 > v81 )
          core::slice::index::slice_start_index_len_fail(v31, v81, &off_28ED48);
        v82 = v32 + 1;
        if ( v31 == v81 )
        {
          v33 = 0LL;
        }
        else
        {
          v35 = (char *)v96 + 64 * v31;
          v36 = &v101[-8 * v31];
          v33 = 0LL;
          do
          {
            if ( *((_QWORD *)v35 + 3) != v32 )
              break;
            if ( v30 == v89 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v89);
            *(_QWORD *)(v90 + 8 * v30) = v35;
            v35 += 64;
            v91 = ++v30;
            ++v33;
            v36 -= 8;
          }
          while ( v36 );
        }
        v34 = v79 - v33;
        if ( v79 > v33 )
        {
          do
          {
            if ( v30 == v89 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v89);
            *(_QWORD *)(v90 + 8 * v30++) = 0LL;
            v91 = v30;
            --v34;
          }
          while ( v34 );
        }
        v31 += v33;
        v32 = v82;
      }
      while ( v82 != v80 );
      v4 = v88;
      v28 = v95;
      LOBYTE(v29) = v102;
    }
    else
    {
      v80 = 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(v4 + 256) == 0x8000000000000000LL )
    {
      LOBYTE(v29) = 0;
      v80 = 1LL;
    }
    else
    {
      v80 = *(_QWORD *)(v4 + 288);
      v29 = *(_DWORD *)(v4 + 296);
    }
    v84 = *(_QWORD *)(v4 + 32);
    v97 = *(_QWORD *)(v4 + 40);
    v89 = 0LL;
    v90 = 8LL;
    v91 = 0LL;
  }
  v115 = v91;
  v113 = v89;
  v114 = (__int64 (__fastcall *)())v90;
  v122 = 0LL;
  v123 = v79;
  v116 = v96;
  v117 = (__int64 *)v81;
  v118 = (__int64 (__fastcall *)())v4;
  v119 = v80;
  v120 = v79;
  v121 = v29;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v130, &v113);
  v107 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v108 = 1LL;
  v109 = 0LL;
  v112 = 0LL;
  v37 = v131;
  *(_QWORD *)&v85 = v131;
  *((_QWORD *)&v85 + 1) = v131;
  v96 = v130;
  v86 = v130;
  v81 = (unsigned __int64)&v131[3 * v132];
  v87 = (_QWORD *)v81;
  v101 = v131;
  if ( v132 )
  {
    v38 = 0LL;
    v39 = v131;
    if ( v28 )
    {
      while ( 1 )
      {
        v37 = v39 + 3;
        if ( *v39 == 0x8000000000000000LL )
          break;
        v77 = v39[1];
        v40 = v39[2];
        v79 = *v39;
        if ( v40 )
        {
          v41 = 8 * v40;
          v42 = 0LL;
          v82 = v40;
          do
          {
            v43 = *(_QWORD *)(v77 + 8 * v42);
            if ( v43 )
            {
              uu_pr::get_line_for_printing((unsigned int)&v92, v4, v43, v80, v42, v84, v97, v40);
              v44 = v93;
              if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v93, v94) )
                goto LABEL_109;
              if ( v92 )
                _rust_dealloc(v44, v92, 1LL);
              ++v38;
            }
            else
            {
              uu_pr::get_line_for_printing((unsigned int)&v92, v4, (unsigned int)&v107, v80, v42, v84, v97, v40);
              v45 = v93;
              if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v93, v94) )
              {
                *((_QWORD *)&v85 + 1) = v37;
                if ( v92 )
                  _rust_dealloc(v45, v92, 1LL);
                v47 = v79;
LABEL_134:
                if ( v47 )
                  goto LABEL_135;
                goto LABEL_136;
              }
              if ( v92 )
                _rust_dealloc(v45, v92, 1LL);
            }
            LODWORD(v4) = v88;
            v40 = v82;
            ++v42;
            v41 -= 8LL;
          }
          while ( v41 );
        }
        v46 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v104, v103);
        v47 = v79;
        if ( v46 )
          goto LABEL_162;
        if ( v79 )
          _rust_dealloc(v77, 8 * v79, 8LL);
        v39 = v37;
        if ( v37 == (unsigned __int64 *)v81 )
          goto LABEL_98;
      }
    }
    else
    {
      v95 = 0LL;
      while ( 1 )
      {
        v37 = v39 + 3;
        v47 = *v39;
        if ( *v39 == 0x8000000000000000LL )
          break;
        v77 = v39[1];
        v48 = v39[2];
        if ( v48 )
        {
          v79 = *v39;
          v82 = v38;
          v49 = 8 * v48;
          v50 = 0LL;
          while ( 1 )
          {
            v52 = v77;
            v53 = *(_QWORD *)(v77 + 8 * v50);
            if ( !v53 )
            {
              if ( !(_BYTE)v83 )
              {
                v38 = v50 + v82;
                LOBYTE(v52) = 1;
                v95 = v52;
                v47 = v79;
                goto LABEL_94;
              }
              v38 = v50 + v82;
              v47 = v79;
              goto LABEL_165;
            }
            uu_pr::get_line_for_printing((unsigned int)&v92, v4, v53, v80, v50, v84, v97, v48);
            v44 = v93;
            if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v93, v94) )
              break;
            if ( v92 )
              _rust_dealloc(v44, v92, 1LL);
            ++v50;
            v51 = v49 == 8;
            v49 -= 8LL;
            LODWORD(v4) = v88;
            if ( v51 )
            {
              v38 = v50 + v82;
              v47 = v79;
              goto LABEL_92;
            }
          }
LABEL_109:
          *((_QWORD *)&v85 + 1) = v37;
          v47 = v79;
          if ( !v92 )
            goto LABEL_134;
          _rust_dealloc(v44, v92, 1LL);
          if ( v47 )
          {
LABEL_135:
            _rust_dealloc(v77, 8 * v47, 8LL);
            v37 = (unsigned __int64 *)*((_QWORD *)&v85 + 1);
            v81 = (unsigned __int64)v87;
          }
LABEL_136:
          if ( (unsigned __int64 *)v81 != v37 )
          {
            v67 = (v81 - (unsigned __int64)v37) / 0x18;
            v68 = v37 + 1;
            do
            {
              v69 = *(v68 - 1);
              if ( v69 )
                _rust_dealloc(*v68, 8 * v69, 8LL);
              v68 += 3;
              --v67;
            }
            while ( v67 );
          }
          if ( v86 )
            _rust_dealloc(v85, 24LL * (_QWORD)v86, 8LL);
          v22 = (__int64)v107;
          if ( v107 == (void *)0x8000000000000000LL )
          {
            core::ptr::drop_in_place<std::io::error::Error>(v108);
            goto LABEL_148;
          }
          if ( v107 )
          {
            v24 = v108;
            v23 = 1LL;
            goto LABEL_147;
          }
          goto LABEL_148;
        }
LABEL_92:
        if ( (_BYTE)v83 && (v95 & 1) != 0 )
        {
LABEL_165:
          *((_QWORD *)&v85 + 1) = v37;
          if ( v47 )
            _rust_dealloc(v77, 8 * v47, 8LL);
          goto LABEL_100;
        }
LABEL_94:
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v104, v103) )
        {
LABEL_162:
          *((_QWORD *)&v85 + 1) = v37;
          if ( v47 )
            goto LABEL_135;
          goto LABEL_136;
        }
        if ( v47 )
          _rust_dealloc(v77, 8 * v47, 8LL);
        v39 = v37;
        if ( v37 == (unsigned __int64 *)v81 )
        {
LABEL_98:
          v37 = (unsigned __int64 *)v81;
          break;
        }
      }
    }
    *((_QWORD *)&v85 + 1) = v37;
  }
  else
  {
    v38 = 0LL;
  }
LABEL_100:
  if ( (unsigned __int64 *)v81 != v37 )
  {
    v54 = (v81 - (unsigned __int64)v37) / 0x18;
    v55 = v37 + 1;
    do
    {
      v56 = *(v55 - 1);
      if ( v56 )
        _rust_dealloc(*v55, 8 * v56, 8LL);
      v55 += 3;
      --v54;
    }
    while ( v54 );
  }
  if ( v96 )
    _rust_dealloc(v101, 24LL * (_QWORD)v96, 8LL);
  if ( v107 == (void *)0x8000000000000000LL )
  {
    core::ptr::drop_in_place<std::io::error::Error>(v108);
  }
  else if ( v107 )
  {
    _rust_dealloc(v108, v107, 1LL);
  }
  v82 = v38;
  if ( v100 )
  {
    v57 = v99;
    v58 = v100 - 1;
    v59 = 24 * v100;
    v60 = 0LL;
    while ( !<std::io::stdio::StdoutLock as std::io::Write>::write_all(
               &v78,
               *(_QWORD *)(v57 + v60 + 8),
               *(_QWORD *)(v57 + v60 + 16)) )
    {
      if ( v58-- != 0 )
      {
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v106, v105) )
          break;
      }
      v60 += 24LL;
      if ( v59 == v60 )
        goto LABEL_121;
    }
    goto LABEL_148;
  }
LABEL_121:
  if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v78, v128, v127)
    || <std::io::stdio::StdoutLock as std::io::Write>::flush(&v78) )
  {
LABEL_148:
    v70 = v78;
    v51 = (*(_DWORD *)(v78 + 12))-- == 1;
    if ( v51 )
    {
      *(_QWORD *)v70 = 0LL;
      if ( _InterlockedExchange((volatile __int32 *)(v70 + 8), 0) == 2 )
        std::sys::sync::mutex::futex::Mutex::wake(v70 + 8);
    }
    v71 = v99;
    v72 = v100;
    if ( v100 )
    {
      v73 = (_QWORD *)(v99 + 8);
      do
      {
        v74 = *(v73 - 1);
        if ( v74 )
          _rust_dealloc(*v73, v74, 1LL);
        v73 += 3;
        --v72;
      }
      while ( v72 );
    }
    if ( v98 )
      _rust_dealloc(v71, 24 * v98, 8LL);
    return 1LL;
  }
  v62 = v78;
  v51 = (*(_DWORD *)(v78 + 12))-- == 1;
  if ( v51 )
  {
    *(_QWORD *)v62 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v62 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v62 + 8);
  }
  v63 = v99;
  v64 = v100;
  if ( v100 )
  {
    v65 = (_QWORD *)(v99 + 8);
    do
    {
      v66 = *(v65 - 1);
      if ( v66 )
        _rust_dealloc(*v65, v66, 1LL);
      v65 += 3;
      --v64;
    }
    while ( v64 );
  }
  if ( v98 )
    _rust_dealloc(v63, 24 * v98, 8LL);
  return 0LL;
}
