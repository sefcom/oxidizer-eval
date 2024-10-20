__int64 __fastcall uu_cut::cut_files(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rbp
  const char *v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  const char *v17; // rax
  _BYTE *v18; // r15
  __int64 v19; // r14
  bool v20; // zf
  __int64 v21; // r14
  __int64 (__fastcall **v22)(); // rax
  int v23; // r14d
  __int64 v24; // rax
  __int64 (__fastcall **v25)(); // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 (__fastcall **v31)(); // r15
  __int64 (__fastcall *v32)(); // rax
  __int64 v33; // rdi
  __int64 (__fastcall *v34)(_QWORD); // rax
  __int64 (__fastcall *v35)(_QWORD); // r14
  __int64 v36; // rax
  __int64 (__fastcall **v37)(); // rdx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 (__fastcall **v45)(); // rdx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 (__fastcall **v51)(); // r15
  __int64 v52; // rax
  __int64 (__fastcall **v53)(); // rdx
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 (__fastcall **v59)(); // r14
  __int64 (__fastcall *v60)(); // rax
  __int64 v61; // rax
  __int64 (__fastcall **v62)(); // rdx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // r15
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 (__fastcall **v68)(); // rdx
  __int64 v69; // rax
  __int64 v70; // r15
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 (__fastcall *v73)(); // rsi
  __int64 v74; // rax
  __int64 (__fastcall **v75)(); // rdx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 v79; // rax
  __int64 (__fastcall *v80)(); // rsi
  __int64 v81; // rbx
  __int64 (__fastcall **v82)(); // r14
  __int64 (__fastcall *v83)(); // rsi
  __int64 v84; // rbx
  __int64 (__fastcall **v85)(); // r14
  __int64 (__fastcall *v86)(); // rax
  __int64 (__fastcall *v87)(); // rsi
  __int64 (__fastcall *v88)(); // rsi
  __int64 v89; // r14
  _QWORD *v90; // r15
  __int64 v91; // rsi
  __int64 result; // rax
  unsigned __int8 v93; // [rsp+Ch] [rbp-17Ch]
  bool v94; // [rsp+Dh] [rbp-17Bh] BYREF
  char v95; // [rsp+Eh] [rbp-17Ah] BYREF
  bool v96; // [rsp+Fh] [rbp-179h]
  __int64 v97; // [rsp+10h] [rbp-178h] BYREF
  __int64 (__fastcall **v98)(); // [rsp+18h] [rbp-170h]
  bool v99; // [rsp+27h] [rbp-161h] BYREF
  __int128 v100; // [rsp+28h] [rbp-160h] BYREF
  __int64 v101; // [rsp+38h] [rbp-150h]
  char v102; // [rsp+47h] [rbp-141h]
  __int64 v103; // [rsp+48h] [rbp-140h] BYREF
  __int64 v104; // [rsp+50h] [rbp-138h] BYREF
  __int64 *v105; // [rsp+58h] [rbp-130h]
  __int128 *v106; // [rsp+60h] [rbp-128h]
  _QWORD *v107; // [rsp+68h] [rbp-120h]
  __int64 *v108; // [rsp+70h] [rbp-118h]
  __int64 (__fastcall **v109)(); // [rsp+78h] [rbp-110h]
  __int64 v110; // [rsp+80h] [rbp-108h]
  char v111; // [rsp+88h] [rbp-100h]
  __int128 v112; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v113; // [rsp+A0h] [rbp-E8h]
  __int64 v114; // [rsp+B0h] [rbp-D8h]
  int fd[2]; // [rsp+B8h] [rbp-D0h]
  __int64 v116; // [rsp+C0h] [rbp-C8h]
  __int64 (__fastcall *v117)(_QWORD); // [rsp+C8h] [rbp-C0h]
  __int64 v118; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v119; // [rsp+D8h] [rbp-B0h]
  __int64 v120; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-A0h]
  __int64 v122; // [rsp+F0h] [rbp-98h]
  __int64 v123; // [rsp+F8h] [rbp-90h]
  __int64 v124; // [rsp+100h] [rbp-88h] BYREF
  __int64 (__fastcall **v125)(); // [rsp+108h] [rbp-80h]
  __int64 *v126; // [rsp+110h] [rbp-78h]
  __int64 (__fastcall **v127)(); // [rsp+118h] [rbp-70h]
  __int64 v128; // [rsp+120h] [rbp-68h]
  __int64 (__fastcall **v129)(); // [rsp+128h] [rbp-60h]
  _QWORD *v130; // [rsp+130h] [rbp-58h]
  __int64 v131; // [rsp+138h] [rbp-50h]
  __int64 v132; // [rsp+140h] [rbp-48h]
  __int64 *v133; // [rsp+148h] [rbp-40h]
  unsigned __int64 v134; // [rsp+150h] [rbp-38h]

  v2 = a1;
  v3 = a1[2];
  if ( v3 )
  {
    v126 = a1;
    v4 = a1[1];
    v5 = 3 * v3;
  }
  else
  {
    v6 = (_BYTE *)_rust_alloc(1LL, 1LL);
    if ( !v6 )
    {
      v126 = a1;
      alloc::raw_vec::handle_error(1LL, 1LL);
    }
    v7 = v6;
    *v6 = 45;
    v8 = a1[2];
    if ( v8 == *a1 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a1);
    v9 = a1[1];
    v10 = 3 * v8;
    *(_QWORD *)(v9 + 8 * v10) = 1LL;
    *(_QWORD *)(v9 + 8 * v10 + 8) = v7;
    *(_QWORD *)(v9 + 8 * v10 + 16) = 1LL;
    v11 = v8 + 1;
    a1[2] = v11;
    if ( !v11 )
    {
      v12 = a1 + 1;
      goto LABEL_138;
    }
    v126 = a1;
    v4 = a1[1];
    v5 = 3 * v11;
  }
  v13 = v4 + 8 * v5;
  v134 = *(_QWORD *)a2;
  v14 = *(const char **)(a2 + 8);
  v123 = *(_QWORD *)(a2 + 64);
  v122 = *(_QWORD *)(a2 + 72);
  v133 = (__int64 *)(a2 + 8);
  v93 = *(_BYTE *)(a2 + 48);
  v15 = *(_BYTE *)(a2 + 40);
  v128 = *(_QWORD *)(a2 + 24);
  v132 = *(_QWORD *)(a2 + 32);
  v102 = v15;
  v96 = v15 != 0;
  v16 = *(_QWORD *)(a2 + 16);
  v131 = v16;
  if ( !v14 )
    v16 = 1LL;
  v130 = (_QWORD *)v16;
  v17 = asc_19D36;
  v127 = (__int64 (__fastcall **)())v14;
  if ( v14 )
    v17 = v14;
  v129 = (__int64 (__fastcall **)())v17;
  v117 = 0LL;
  do
  {
    if ( ((unsigned __int8)v117 & 1) == 0 )
    {
      v4 += 24LL;
      while ( 1 )
      {
        v18 = *(_BYTE **)(v4 - 16);
        v19 = *(_QWORD *)(v4 - 8);
        if ( v19 == 1 && *v18 == 45 )
          break;
        if ( !(unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(v4 - 16), *(_QWORD *)(v4 - 8)) )
          goto LABEL_31;
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v112 = xmmword_F5EE8;
        *(_QWORD *)&v100 = &v112;
        *((_QWORD *)&v100 + 1) = <&T as core::fmt::Display>::fmt;
        v104 = (__int64)&unk_F1040;
        v105 = (_QWORD *)(&dword_0 + 2);
        v108 = 0LL;
        v106 = &v100;
        v107 = (_QWORD *)(&dword_0 + 1);
        std::io::stdio::_eprint(&v104);
        *(_QWORD *)&v112 = 0LL;
        *((_QWORD *)&v112 + 1) = v18;
        *(_QWORD *)&v113 = v19;
        BYTE8(v113) = 0;
        *(_QWORD *)&v100 = &v112;
        *((_QWORD *)&v100 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v104 = (__int64)&unk_F1060;
        v105 = (_QWORD *)(&dword_0 + 2);
        v108 = 0LL;
        v106 = &v100;
        v107 = (_QWORD *)(&dword_0 + 1);
        std::io::stdio::_eprint(&v104);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        v20 = v4 == v13;
        v4 += 24LL;
        if ( v20 )
          goto LABEL_133;
      }
      if ( v134 < 2 )
      {
        v33 = std::io::stdio::stdin();
        v34 = (__int64 (__fastcall *)(_QWORD))uu_cut::cut_bytes(v33, v123, v122, (__int64)v133);
        v35 = v34;
        goto LABEL_128;
      }
      v42 = std::io::stdio::stdin();
      if ( v102 == 2 )
        core::option::unwrap_failed(&off_F0FF8);
      v43 = v42;
      if ( v128 )
      {
        if ( !v132 )
          core::panicking::panic(
            anon_df4789226972a4341794054d7353bee8_11_llvm_10989571036595044754,
            36LL,
            &anon_df4789226972a4341794054d7353bee8_13_llvm_10989571036595044754);
        v120 = v128;
        v121 = v132;
        if ( v127 )
        {
          v118 = v123;
          v119 = v122;
          v94 = v96;
          LOBYTE(v103) = v93;
          v44 = _rust_alloc(0x2000LL, 1LL);
          if ( v44 )
          {
            *(_QWORD *)&v112 = v44;
            *((_QWORD *)&v112 + 1) = 0x2000LL;
            v113 = 0LL;
            v114 = 0LL;
            *(_QWORD *)fd = v43;
            v97 = uu_cut::stdout_writer();
            v98 = v45;
            v104 = (__int64)&v120;
            v105 = (__int64 *)&v94;
            v106 = (__int128 *)&v97;
            v107 = &v103;
            v108 = &v118;
            v109 = v127;
            v110 = v131;
            v46 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v112, v93, &v104);
            if ( v46 )
            {
              v124 = v46;
              *(_QWORD *)&v100 = 0LL;
              *((_QWORD *)&v100 + 1) = 1LL;
              v101 = 0LL;
              v110 = 32LL;
              v111 = 3;
              v104 = 0LL;
              v106 = 0LL;
              v108 = (__int64 *)&v100;
              v109 = &off_F0DF0;
              if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v124, &v104) )
                core::result::unwrap_failed(aADisplayImplem, 55LL, &v95, &unk_F0E38, &off_F0E20);
              v47 = *((_QWORD *)&v100 + 1);
              v117 = (__int64 (__fastcall *)(_QWORD))v100;
              v48 = v101;
              v49 = _rust_alloc(32LL, 8LL);
              if ( !v49 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v35 = (__int64 (__fastcall *)(_QWORD))v49;
              *(_QWORD *)v49 = v117;
              *(_QWORD *)(v49 + 8) = v47;
              *(_QWORD *)(v49 + 16) = v48;
              *(_DWORD *)(v49 + 24) = 1;
              core::ptr::drop_in_place<std::io::error::Error>(v124);
              v50 = v97;
              v51 = v98;
              v34 = (__int64 (__fastcall *)(_QWORD))*v98;
              if ( !*v98 )
                goto LABEL_93;
              goto LABEL_92;
            }
            v81 = v97;
            v82 = v98;
            v34 = (__int64 (__fastcall *)(_QWORD))*v98;
            if ( *v98 )
              goto LABEL_122;
LABEL_123:
            v88 = v82[1];
            if ( v88 )
              v34 = (__int64 (__fastcall *)(_QWORD))_rust_dealloc(v81, v88, v82[2]);
            if ( *((_QWORD *)&v112 + 1) )
              v34 = (__int64 (__fastcall *)(_QWORD))_rust_dealloc(v112, *((_QWORD *)&v112 + 1), 1LL);
            v35 = 0LL;
LABEL_128:
            LOBYTE(v34) = 1;
            v117 = v34;
            if ( v35 )
            {
              v97 = (__int64)v35;
              v98 = &off_F0F88;
              _InterlockedExchange(&uucore::mods::error::EXIT_CODE, *((_DWORD *)v35 + 6));
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v100 = xmmword_F5EE8;
              *(_QWORD *)&v112 = &v100;
              *((_QWORD *)&v112 + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v113 = &v97;
              *((_QWORD *)&v113 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              v104 = (__int64)&unk_F1010;
              v105 = (_QWORD *)(&dword_0 + 3);
              v108 = 0LL;
              v106 = &v112;
              v107 = (_QWORD *)(&dword_0 + 2);
              std::io::stdio::_eprint(&v104);
              v84 = v97;
              v85 = v98;
              v86 = *v98;
              if ( *v98 )
LABEL_116:
                ((void (__fastcall *)(__int64))v86)(v97);
LABEL_117:
              v87 = v85[1];
              if ( v87 )
                _rust_dealloc(v84, v87, v85[2]);
            }
            continue;
          }
LABEL_144:
          alloc::raw_vec::handle_error(1LL, 0x2000LL);
        }
        v118 = v123;
        v119 = v122;
        v94 = v96;
        LOBYTE(v103) = v93;
        v74 = _rust_alloc(0x2000LL, 1LL);
        if ( !v74 )
          goto LABEL_144;
        *(_QWORD *)&v112 = v74;
        *((_QWORD *)&v112 + 1) = 0x2000LL;
        v113 = 0LL;
        v114 = 0LL;
        *(_QWORD *)fd = v43;
        v97 = uu_cut::stdout_writer();
        v98 = v75;
        v104 = (__int64)&v120;
        v105 = (__int64 *)&v94;
        v106 = (__int128 *)&v97;
        v107 = &v103;
        v108 = &v118;
        v76 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v112, v93, &v104);
        if ( v76 )
        {
          v124 = v76;
          *(_QWORD *)&v100 = 0LL;
          *((_QWORD *)&v100 + 1) = 1LL;
          v101 = 0LL;
          v110 = 32LL;
          v111 = 3;
          v104 = 0LL;
          v106 = 0LL;
          v108 = (__int64 *)&v100;
          v109 = &off_F0DF0;
          if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v124, &v104) )
            core::result::unwrap_failed(aADisplayImplem, 55LL, &v95, &unk_F0E38, &off_F0E20);
          v77 = *((_QWORD *)&v100 + 1);
          v117 = (__int64 (__fastcall *)(_QWORD))v100;
          v78 = v101;
          v79 = _rust_alloc(32LL, 8LL);
          if ( !v79 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v35 = (__int64 (__fastcall *)(_QWORD))v79;
          *(_QWORD *)v79 = v117;
          *(_QWORD *)(v79 + 8) = v77;
          *(_QWORD *)(v79 + 16) = v78;
          *(_DWORD *)(v79 + 24) = 1;
          core::ptr::drop_in_place<std::io::error::Error>(v124);
          v50 = v97;
          v51 = v98;
          v34 = (__int64 (__fastcall *)(_QWORD))*v98;
          if ( !*v98 )
            goto LABEL_93;
          goto LABEL_92;
        }
        v81 = v97;
        v82 = v98;
        v34 = (__int64 (__fastcall *)(_QWORD))*v98;
        if ( !*v98 )
          goto LABEL_123;
      }
      else
      {
        v118 = v123;
        v119 = v122;
        LOBYTE(v103) = v96;
        LOBYTE(v124) = v93;
        v61 = _rust_alloc(0x2000LL, 1LL);
        if ( !v61 )
          goto LABEL_144;
        *(_QWORD *)&v112 = v61;
        *((_QWORD *)&v112 + 1) = 0x2000LL;
        v113 = 0LL;
        v114 = 0LL;
        *(_QWORD *)fd = v43;
        v97 = uu_cut::stdout_writer();
        v98 = v62;
        v104 = (__int64)&v95;
        v105 = &v103;
        v106 = (__int128 *)&v97;
        v107 = &v124;
        v108 = &v118;
        v109 = v129;
        v110 = (__int64)v130;
        v63 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v112, v93, &v104);
        if ( v63 )
        {
          v120 = v63;
          *(_QWORD *)&v100 = 0LL;
          *((_QWORD *)&v100 + 1) = 1LL;
          v101 = 0LL;
          v110 = 32LL;
          v111 = 3;
          v104 = 0LL;
          v106 = 0LL;
          v108 = (__int64 *)&v100;
          v109 = &off_F0DF0;
          if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v120, &v104) )
            core::result::unwrap_failed(aADisplayImplem, 55LL, &v95, &unk_F0E38, &off_F0E20);
          v64 = *((_QWORD *)&v100 + 1);
          v117 = (__int64 (__fastcall *)(_QWORD))v100;
          v65 = v101;
          v66 = _rust_alloc(32LL, 8LL);
          if ( !v66 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v35 = (__int64 (__fastcall *)(_QWORD))v66;
          *(_QWORD *)v66 = v117;
          *(_QWORD *)(v66 + 8) = v64;
          *(_QWORD *)(v66 + 16) = v65;
          *(_DWORD *)(v66 + 24) = 1;
          core::ptr::drop_in_place<std::io::error::Error>(v120);
          v50 = v97;
          v51 = v98;
          v34 = (__int64 (__fastcall *)(_QWORD))*v98;
          if ( !*v98 )
            goto LABEL_93;
LABEL_92:
          v34 = (__int64 (__fastcall *)(_QWORD))v34(v97);
LABEL_93:
          v80 = v51[1];
          if ( v80 )
            v34 = (__int64 (__fastcall *)(_QWORD))_rust_dealloc(v50, v80, v51[2]);
          if ( *((_QWORD *)&v112 + 1) )
            v34 = (__int64 (__fastcall *)(_QWORD))_rust_dealloc(v112, *((_QWORD *)&v112 + 1), 1LL);
          goto LABEL_128;
        }
        v81 = v97;
        v82 = v98;
        v34 = (__int64 (__fastcall *)(_QWORD))*v98;
        if ( !*v98 )
          goto LABEL_123;
      }
LABEL_122:
      v34 = (__int64 (__fastcall *)(_QWORD))v34(v97);
      goto LABEL_123;
    }
    v4 += 24LL;
    while ( 1 )
    {
      v18 = *(_BYTE **)(v4 - 16);
      v19 = *(_QWORD *)(v4 - 8);
      if ( v19 != 1 || *v18 != 45 )
        break;
LABEL_24:
      v20 = v4 == v13;
      v4 += 24LL;
      if ( v20 )
        goto LABEL_133;
    }
    if ( (unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(v4 - 16), *(_QWORD *)(v4 - 8)) )
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v112 = xmmword_F5EE8;
      *(_QWORD *)&v100 = &v112;
      *((_QWORD *)&v100 + 1) = <&T as core::fmt::Display>::fmt;
      v104 = (__int64)&unk_F1040;
      v105 = (_QWORD *)(&dword_0 + 2);
      v108 = 0LL;
      v106 = &v100;
      v107 = (_QWORD *)(&dword_0 + 1);
      std::io::stdio::_eprint(&v104);
      *(_QWORD *)&v112 = 0LL;
      *((_QWORD *)&v112 + 1) = v18;
      *(_QWORD *)&v113 = v19;
      BYTE8(v113) = 0;
      *(_QWORD *)&v100 = &v112;
      *((_QWORD *)&v100 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v104 = (__int64)&unk_F1060;
      v105 = (_QWORD *)(&dword_0 + 2);
      v108 = 0LL;
      v106 = &v100;
      v107 = (_QWORD *)(&dword_0 + 1);
      std::io::stdio::_eprint(&v104);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      goto LABEL_24;
    }
LABEL_31:
    v104 = 0x1B600000000LL;
    WORD2(v105) = 0;
    LODWORD(v105) = 1;
    std::fs::OpenOptions::_open(&v112, &v104, v18, v19);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v124,
      &v112,
      v4 - 24);
    v21 = v124;
    if ( v124 )
    {
      v22 = v125;
      goto LABEL_113;
    }
    v23 = (int)v125;
    if ( v134 >= 2 )
    {
      if ( v102 == 2 )
        core::option::unwrap_failed(&off_F0FF8);
      if ( v128 )
      {
        if ( !v132 )
          core::panicking::panic(
            anon_df4789226972a4341794054d7353bee8_11_llvm_10989571036595044754,
            36LL,
            &anon_df4789226972a4341794054d7353bee8_13_llvm_10989571036595044754);
        v120 = v128;
        v121 = v132;
        if ( v127 )
        {
          v118 = v123;
          v119 = v122;
          v99 = v96;
          v94 = v93;
          v36 = _rust_alloc(0x2000LL, 1LL);
          if ( !v36 )
            alloc::raw_vec::handle_error(1LL, 0x2000LL);
          *(_QWORD *)&v112 = v36;
          *((_QWORD *)&v112 + 1) = 0x2000LL;
          v113 = 0LL;
          v114 = 0LL;
          fd[0] = v23;
          v97 = uu_cut::stdout_writer();
          v98 = v37;
          v104 = (__int64)&v120;
          v105 = (__int64 *)&v99;
          v106 = (__int128 *)&v97;
          v107 = &v94;
          v108 = &v118;
          v109 = v127;
          v110 = v131;
          v38 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v112, v93, &v104);
          if ( !v38 )
          {
            v58 = v97;
            v59 = v98;
            v60 = *v98;
            if ( *v98 )
              goto LABEL_106;
            goto LABEL_107;
          }
          v103 = v38;
          *(_QWORD *)&v100 = 0LL;
          *((_QWORD *)&v100 + 1) = 1LL;
          v101 = 0LL;
          v110 = 32LL;
          v111 = 3;
          v104 = 0LL;
          v106 = 0LL;
          v108 = (__int64 *)&v100;
          v109 = &off_F0DF0;
          if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v103, &v104) )
            core::result::unwrap_failed(aADisplayImplem, 55LL, &v95, &unk_F0E38, &off_F0E20);
          v39 = *((_QWORD *)&v100 + 1);
          v116 = v100;
          v40 = v101;
          v41 = _rust_alloc(32LL, 8LL);
          if ( !v41 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v21 = v41;
          *(_QWORD *)v41 = v116;
          *(_QWORD *)(v41 + 8) = v39;
          *(_QWORD *)(v41 + 16) = v40;
          *(_DWORD *)(v41 + 24) = 1;
          core::ptr::drop_in_place<std::io::error::Error>(v103);
          v30 = v97;
          v31 = v98;
          v32 = *v98;
          if ( !*v98 )
            goto LABEL_82;
        }
        else
        {
          v118 = v123;
          v119 = v122;
          v99 = v96;
          v94 = v93;
          v67 = _rust_alloc(0x2000LL, 1LL);
          if ( !v67 )
            alloc::raw_vec::handle_error(1LL, 0x2000LL);
          *(_QWORD *)&v112 = v67;
          *((_QWORD *)&v112 + 1) = 0x2000LL;
          v113 = 0LL;
          v114 = 0LL;
          fd[0] = v23;
          v97 = uu_cut::stdout_writer();
          v98 = v68;
          v104 = (__int64)&v120;
          v105 = (__int64 *)&v99;
          v106 = (__int128 *)&v97;
          v107 = &v94;
          v108 = &v118;
          v69 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v112, v93, &v104);
          if ( !v69 )
          {
            v58 = v97;
            v59 = v98;
            v60 = *v98;
            if ( *v98 )
LABEL_106:
              ((void (__fastcall *)(__int64))v60)(v97);
LABEL_107:
            v83 = v59[1];
            if ( v83 )
              _rust_dealloc(v58, v83, v59[2]);
            if ( *((_QWORD *)&v112 + 1) )
              _rust_dealloc(v112, *((_QWORD *)&v112 + 1), 1LL);
            close(fd[0]);
            v21 = 0LL;
            goto LABEL_112;
          }
          v103 = v69;
          *(_QWORD *)&v100 = 0LL;
          *((_QWORD *)&v100 + 1) = 1LL;
          v101 = 0LL;
          v110 = 32LL;
          v111 = 3;
          v104 = 0LL;
          v106 = 0LL;
          v108 = (__int64 *)&v100;
          v109 = &off_F0DF0;
          if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v103, &v104) )
            core::result::unwrap_failed(aADisplayImplem, 55LL, &v95, &unk_F0E38, &off_F0E20);
          v70 = *((_QWORD *)&v100 + 1);
          v116 = v100;
          v71 = v101;
          v72 = _rust_alloc(32LL, 8LL);
          if ( !v72 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v21 = v72;
          *(_QWORD *)v72 = v116;
          *(_QWORD *)(v72 + 8) = v70;
          *(_QWORD *)(v72 + 16) = v71;
          *(_DWORD *)(v72 + 24) = 1;
          core::ptr::drop_in_place<std::io::error::Error>(v103);
          v30 = v97;
          v31 = v98;
          v32 = *v98;
          if ( !*v98 )
            goto LABEL_82;
        }
      }
      else
      {
        v118 = v123;
        v119 = v122;
        v94 = v96;
        LOBYTE(v103) = v93;
        v52 = _rust_alloc(0x2000LL, 1LL);
        if ( !v52 )
          alloc::raw_vec::handle_error(1LL, 0x2000LL);
        *(_QWORD *)&v112 = v52;
        *((_QWORD *)&v112 + 1) = 0x2000LL;
        v113 = 0LL;
        v114 = 0LL;
        fd[0] = v23;
        v97 = uu_cut::stdout_writer();
        v98 = v53;
        v104 = (__int64)&v95;
        v105 = (__int64 *)&v94;
        v106 = (__int128 *)&v97;
        v107 = &v103;
        v108 = &v118;
        v109 = v129;
        v110 = (__int64)v130;
        v54 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v112, v93, &v104);
        if ( !v54 )
        {
          v58 = v97;
          v59 = v98;
          v60 = *v98;
          if ( *v98 )
            goto LABEL_106;
          goto LABEL_107;
        }
        v120 = v54;
        *(_QWORD *)&v100 = 0LL;
        *((_QWORD *)&v100 + 1) = 1LL;
        v101 = 0LL;
        v110 = 32LL;
        v111 = 3;
        v104 = 0LL;
        v106 = 0LL;
        v108 = (__int64 *)&v100;
        v109 = &off_F0DF0;
        if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v120, &v104) )
          core::result::unwrap_failed(aADisplayImplem, 55LL, &v95, &unk_F0E38, &off_F0E20);
        v55 = *((_QWORD *)&v100 + 1);
        v116 = v100;
        v56 = v101;
        v57 = _rust_alloc(32LL, 8LL);
        if ( !v57 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v21 = v57;
        *(_QWORD *)v57 = v116;
        *(_QWORD *)(v57 + 8) = v55;
        *(_QWORD *)(v57 + 16) = v56;
        *(_DWORD *)(v57 + 24) = 1;
        core::ptr::drop_in_place<std::io::error::Error>(v120);
        v30 = v97;
        v31 = v98;
        v32 = *v98;
        if ( !*v98 )
          goto LABEL_82;
      }
LABEL_81:
      ((void (__fastcall *)(__int64))v32)(v97);
      goto LABEL_82;
    }
    v118 = v123;
    v119 = v122;
    LOBYTE(v103) = v93;
    v24 = _rust_alloc(0x2000LL, 1LL);
    if ( !v24 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)&v112 = v24;
    *((_QWORD *)&v112 + 1) = 0x2000LL;
    v113 = 0LL;
    v114 = 0LL;
    fd[0] = v23;
    v97 = uu_cut::stdout_writer();
    v98 = v25;
    v104 = (__int64)&v118;
    v105 = &v97;
    v106 = (__int128 *)v129;
    v107 = v130;
    v108 = v133;
    v109 = (__int64 (__fastcall **)())&v103;
    v26 = bstr::io::BufReadExt::for_byte_record(&v112, v93, &v104);
    if ( !v26 )
    {
      v58 = v97;
      v59 = v98;
      v60 = *v98;
      if ( *v98 )
        goto LABEL_106;
      goto LABEL_107;
    }
    v120 = v26;
    *(_QWORD *)&v100 = 0LL;
    *((_QWORD *)&v100 + 1) = 1LL;
    v101 = 0LL;
    v110 = 32LL;
    v111 = 3;
    v104 = 0LL;
    v106 = 0LL;
    v108 = (__int64 *)&v100;
    v109 = &off_F0DF0;
    if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v120, &v104) )
      core::result::unwrap_failed(aADisplayImplem, 55LL, &v95, &unk_F0E38, &off_F0E20);
    v27 = *((_QWORD *)&v100 + 1);
    v116 = v100;
    v28 = v101;
    v29 = _rust_alloc(32LL, 8LL);
    if ( !v29 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v21 = v29;
    *(_QWORD *)v29 = v116;
    *(_QWORD *)(v29 + 8) = v27;
    *(_QWORD *)(v29 + 16) = v28;
    *(_DWORD *)(v29 + 24) = 1;
    core::ptr::drop_in_place<std::io::error::Error>(v120);
    v30 = v97;
    v31 = v98;
    v32 = *v98;
    if ( *v98 )
      goto LABEL_81;
LABEL_82:
    v73 = v31[1];
    if ( v73 )
      _rust_dealloc(v30, v73, v31[2]);
    if ( *((_QWORD *)&v112 + 1) )
      _rust_dealloc(v112, *((_QWORD *)&v112 + 1), 1LL);
    close(fd[0]);
LABEL_112:
    v22 = &off_F0F88;
    if ( v21 )
    {
LABEL_113:
      v97 = v21;
      v98 = v22;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, ((__int64 (__fastcall *)(__int64))v22[12])(v21));
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v100 = xmmword_F5EE8;
      *(_QWORD *)&v112 = &v100;
      *((_QWORD *)&v112 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v113 = &v97;
      *((_QWORD *)&v113 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v104 = (__int64)&unk_F1010;
      v105 = (_QWORD *)(&dword_0 + 3);
      v108 = 0LL;
      v106 = &v112;
      v107 = (_QWORD *)(&dword_0 + 2);
      std::io::stdio::_eprint(&v104);
      v84 = v97;
      v85 = v98;
      v86 = *v98;
      if ( *v98 )
        goto LABEL_116;
      goto LABEL_117;
    }
  }
  while ( v4 != v13 );
LABEL_133:
  v2 = v126;
  v89 = v126[2];
  v12 = v126 + 1;
  if ( v89 )
  {
    v90 = (_QWORD *)(v126[1] + 8);
    do
    {
      v91 = *(v90 - 1);
      if ( v91 )
        _rust_dealloc(*v90, v91, 1LL);
      v90 += 3;
      --v89;
    }
    while ( v89 );
  }
LABEL_138:
  result = *v2;
  if ( *v2 )
    return _rust_dealloc(*v12, 24 * result, 8LL);
  return result;
}
