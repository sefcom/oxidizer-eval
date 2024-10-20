__int64 __fastcall uu_split::split(__int64 a1)
{
  _BYTE *v1; // r12
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 *v4; // rax
  unsigned __int64 v5; // r8
  __int64 *v6; // r14
  __int64 (__fastcall **v7)(); // r15
  __int64 v8; // r14
  int v9; // r15d
  __int64 *v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  void *v19; // rax
  void *v20; // r15
  __int64 v21; // rax
  __int64 (__fastcall *v22)(); // rdx
  _OWORD *v23; // r14
  __int64 v24; // rax
  void *v25; // rax
  __int64 (__fastcall *v26)(); // rdx
  _OWORD *v27; // r14
  __int64 v28; // rax
  void *v29; // rax
  __int64 (__fastcall *v30)(); // rdx
  _OWORD *v31; // r14
  __int64 v32; // rax
  __int64 *v33; // r15
  __int64 (__fastcall **v34)(); // r13
  __int64 (__fastcall *v35)(); // rax
  __int64 v36; // r14
  void **v37; // rbx
  _OWORD *v38; // rax
  __int64 v39; // r14
  __int64 v40; // r14
  __int128 v41; // xmm0
  __int64 (__fastcall *v42)(); // rsi
  __int128 *v44; // r15
  __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // r15
  __int64 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rax
  __int128 *v52; // r15
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // r15
  __int64 v57; // r12
  __int64 v58; // rbx
  __int64 v59; // rax
  __int128 *v60; // r15
  __int64 v61; // r12
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // r15
  __int64 v65; // r12
  __int64 v66; // rbx
  __int64 v67; // rax
  unsigned __int8 v68; // bl
  void *v69; // rax
  unsigned __int8 v70; // bl
  void *v71; // rax
  unsigned __int8 v72; // bl
  void *v73; // rax
  __int64 (__fastcall *v74)(); // [rsp+8h] [rbp-310h]
  void **v75; // [rsp+10h] [rbp-308h]
  void **v76; // [rsp+10h] [rbp-308h]
  void **v77; // [rsp+10h] [rbp-308h]
  __int128 v78; // [rsp+20h] [rbp-2F8h] BYREF
  _BYTE v79[24]; // [rsp+30h] [rbp-2E8h]
  __int128 v80; // [rsp+48h] [rbp-2D0h]
  __int128 v81; // [rsp+58h] [rbp-2C0h]
  __int128 v82; // [rsp+68h] [rbp-2B0h] BYREF
  _BYTE v83[56]; // [rsp+78h] [rbp-2A0h] BYREF
  void **v84; // [rsp+B0h] [rbp-268h] BYREF
  __int64 (__fastcall *v85)(); // [rsp+B8h] [rbp-260h]
  _OWORD *v86; // [rsp+C0h] [rbp-258h]
  void *v87; // [rsp+C8h] [rbp-250h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-248h]
  __int128 *v89; // [rsp+D8h] [rbp-240h]
  __int128 v90; // [rsp+E0h] [rbp-238h]
  __int128 *v91; // [rsp+F0h] [rbp-228h]
  unsigned __int64 v92; // [rsp+F8h] [rbp-220h]
  __int128 v93; // [rsp+100h] [rbp-218h] BYREF
  __int128 *v94; // [rsp+110h] [rbp-208h]
  _BYTE v95[64]; // [rsp+118h] [rbp-200h]
  __int64 v96; // [rsp+158h] [rbp-1C0h]
  _BYTE *v97; // [rsp+160h] [rbp-1B8h]
  __int64 (__fastcall *v98)(); // [rsp+168h] [rbp-1B0h] BYREF
  _OWORD *v99; // [rsp+170h] [rbp-1A8h]
  __int64 (__fastcall **v100)(); // [rsp+178h] [rbp-1A0h] BYREF
  __int64 (__fastcall *v101)(); // [rsp+180h] [rbp-198h]
  __int64 v102; // [rsp+188h] [rbp-190h] BYREF
  __int64 v103; // [rsp+190h] [rbp-188h]
  __int128 v104; // [rsp+198h] [rbp-180h]
  __int64 v105; // [rsp+1A8h] [rbp-170h]
  __int64 *v106; // [rsp+1B0h] [rbp-168h]
  __int64 (__fastcall **v107)(); // [rsp+1B8h] [rbp-160h]
  __int64 v108; // [rsp+1C0h] [rbp-158h] BYREF
  __int64 v109; // [rsp+1C8h] [rbp-150h]
  __int128 *v110; // [rsp+1D0h] [rbp-148h]
  __int128 v111; // [rsp+1D8h] [rbp-140h]
  __int128 *v112; // [rsp+1E8h] [rbp-130h]
  __int64 v113; // [rsp+1F0h] [rbp-128h]
  __int128 v114; // [rsp+1F8h] [rbp-120h]
  __int128 v115; // [rsp+208h] [rbp-110h]
  __int128 v116; // [rsp+218h] [rbp-100h]
  __int64 v117; // [rsp+228h] [rbp-F0h]
  __int64 v118; // [rsp+230h] [rbp-E8h]
  __int64 v119; // [rsp+238h] [rbp-E0h]
  unsigned __int64 v120; // [rsp+240h] [rbp-D8h]
  __int64 v121; // [rsp+248h] [rbp-D0h]
  unsigned __int64 v122; // [rsp+250h] [rbp-C8h]
  _QWORD v123[3]; // [rsp+258h] [rbp-C0h] BYREF
  _QWORD v124[3]; // [rsp+270h] [rbp-A8h] BYREF
  _QWORD v125[3]; // [rsp+288h] [rbp-90h] BYREF
  _QWORD v126[3]; // [rsp+2A0h] [rbp-78h] BYREF
  _QWORD v127[3]; // [rsp+2B8h] [rbp-60h] BYREF
  _QWORD v128[9]; // [rsp+2D0h] [rbp-48h] BYREF

  v1 = *(_BYTE **)(a1 + 120);
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 == 1 && *v1 == 45 )
  {
    v3 = std::io::stdio::stdin();
    v4 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v6 = v4;
    v97 = v1;
    *v4 = v3;
    v7 = (__int64 (__fastcall **)())&unk_10B958;
  }
  else
  {
    v108 = 0x1B600000000LL;
    LODWORD(v109) = 1;
    WORD2(v109) = 0;
    std::fs::OpenOptions::_open(&v93, &v108, v1, v2);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v108,
      &v93,
      a1);
    v8 = v108;
    if ( v108 )
      return v8;
    v9 = v109;
    v10 = (__int64 *)_rust_alloc(4LL, 4LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v6 = v10;
    v97 = v1;
    *(_DWORD *)v10 = v9;
    v7 = &off_10B900;
  }
  v11 = 0x2000LL;
  if ( *(_QWORD *)a1 )
    v11 = *(_QWORD *)(a1 + 8);
  if ( v11 )
  {
    if ( v11 < 0 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = 1LL;
      v13 = _rust_alloc(v11, 1LL);
      if ( v13 )
      {
        v102 = v13;
        v103 = v11;
        v104 = 0LL;
        v105 = 0LL;
        v106 = v6;
        v107 = v7;
        v14 = *(_QWORD *)(a1 + 16);
        v15 = 3LL;
        if ( (unsigned __int64)(v14 - 6) < 3 )
          v15 = v14 - 6;
        v16 = *(_QWORD *)(a1 + 24);
        switch ( v15 )
        {
          case 0LL:
            goto LABEL_19;
          case 1LL:
            goto LABEL_27;
          case 2LL:
            goto LABEL_22;
          case 3LL:
            goto LABEL_25;
        }
      }
    }
    alloc::raw_vec::handle_error(v12, v11);
  }
  v102 = 1LL;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v106 = v6;
  v107 = v7;
  v14 = *(_QWORD *)(a1 + 16);
  v17 = 3LL;
  if ( (unsigned __int64)(v14 - 6) < 3 )
    v17 = v14 - 6;
  v16 = *(_QWORD *)(a1 + 24);
  switch ( v17 )
  {
    case 0LL:
LABEL_19:
      uu_split::filenames::FilenameIterator::new(&v78, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), a1 + 64);
      v8 = *((_QWORD *)&v78 + 1);
      if ( (_QWORD)v78 == 0x8000000000000001LL )
        goto LABEL_80;
      v92 = v16;
      *(_OWORD *)&v83[40] = v81;
      *(_OWORD *)&v83[24] = v80;
      *(_OWORD *)&v83[8] = *(_OWORD *)&v79[8];
      v82 = v78;
      *(_QWORD *)v83 = *(_QWORD *)v79;
      if ( BYTE8(v81) )
      {
        v83[48] = 0;
      }
      else if ( (unsigned __int8)uu_split::number::Number::increment(&v82) )
      {
LABEL_41:
        v25 = (void *)_rust_alloc(30LL, 1LL);
        if ( !v25 )
          alloc::raw_vec::handle_error(1LL, 30LL);
        v20 = v25;
        qmemcpy(v25, "output file suffixes exhausted", 30);
        v21 = _rust_alloc(32LL, 8LL);
        if ( !v21 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_52;
      }
      *(_QWORD *)&v78 = &v83[16];
      *((_QWORD *)&v78 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v79 = &v82;
      *(_QWORD *)&v79[8] = <uu_split::number::Number as core::fmt::Display>::fmt;
      *(_QWORD *)&v79[16] = &v83[32];
      *(_QWORD *)&v80 = <&T as core::fmt::Display>::fmt;
      v87 = &anon_740c853ddd05e20d9ba5cb1441a5b317_19_llvm_15693302092529875254;
      v88 = 3LL;
      v89 = &v78;
      v90 = 3uLL;
      alloc::fmt::format::format_inner(&v84, &v87);
      v76 = v84;
      if ( v84 == (void **)0x8000000000000000LL )
        goto LABEL_41;
      v26 = v85;
      v27 = v86;
      v74 = v85;
      if ( *(_BYTE *)(a1 + 160) )
      {
        v87 = 0LL;
        v88 = (__int64)v85;
        v89 = v86;
        LOBYTE(v90) = 1;
        v84 = &v87;
        v85 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v78 = &off_10B7E8;
        *((_QWORD *)&v78 + 1) = 2LL;
        *(_QWORD *)&v79[16] = 0LL;
        *(_QWORD *)v79 = &v84;
        *(_QWORD *)&v79[8] = 1LL;
        std::io::stdio::_print(&v78);
        v26 = v74;
      }
      v98 = v26;
      v99 = v27;
      if ( (unsigned __int8)uu_split::platform::unix::paths_refer_to_same_file(v97, v2, v26, v27) )
      {
        v100 = &v98;
        v101 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v78 = &anon_80a68c298b3244c7b6f64951acf55080_83_llvm_4507047988568940441;
        *((_QWORD *)&v78 + 1) = 2LL;
        *(_QWORD *)&v79[16] = 0LL;
        *(_QWORD *)v79 = &v100;
        *(_QWORD *)&v79[8] = 1LL;
        alloc::fmt::format::format_inner(&v84, &v78);
        v28 = std::io::error::Error::new(39LL, &v84);
        goto LABEL_71;
      }
      uu_split::platform::unix::instantiate_current_writer(&v87, a1 + 136, v74, v27, 1LL);
      v39 = (__int64)v87;
      v28 = v88;
      if ( v87 == (void *)0x8000000000000000LL )
      {
LABEL_71:
        v37 = v76;
        *(_QWORD *)&v78 = 0x8000000000000000LL;
        *(_QWORD *)&v79[8] = v28;
        v38 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v38 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_75;
      }
      v52 = v89;
      v93 = v90;
      v94 = v91;
      *(_OWORD *)v95 = v82;
      *(_OWORD *)&v95[16] = *(_OWORD *)v83;
      *(_OWORD *)&v95[32] = *(_OWORD *)&v83[16];
      *(_OWORD *)&v95[48] = *(_OWORD *)&v83[32];
      v96 = *(_QWORD *)&v83[48];
      if ( v76 )
      {
        v53 = v88;
        _rust_dealloc(v74, v76, 1LL);
        v28 = v53;
      }
      v111 = v93;
      v112 = v94;
      v113 = *(_QWORD *)v95;
      v114 = *(_OWORD *)&v95[8];
      v115 = *(_OWORD *)&v95[24];
      v116 = *(_OWORD *)&v95[40];
      v117 = *(_QWORD *)&v95[56];
      v118 = v96;
      v108 = v39;
      v109 = v28;
      v110 = v52;
      v119 = a1;
      v120 = v92;
      v121 = 0LL;
      v122 = v92;
      if ( !std::io::copy::generic_copy(&v102, &v108) )
      {
        v8 = 0LL;
        goto LABEL_115;
      }
      v55 = v54;
      *(_QWORD *)&v82 = v54;
      if ( (unsigned __int8)std::io::error::Error::kind(v54) == 39 )
      {
        *(_QWORD *)&v78 = &v82;
        *((_QWORD *)&v78 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v93 = &anon_edec59db3b863b6761f2fcbb7c5018ad_75_llvm_1026247603497507326;
        *((_QWORD *)&v93 + 1) = 1LL;
        v94 = &v78;
        *(_OWORD *)v95 = 1uLL;
        alloc::fmt::format::format_inner(v123, &v93);
        v56 = v123[0];
        v57 = v123[1];
        v58 = v123[2];
        v59 = _rust_alloc(32LL, 8LL);
        if ( !v59 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v8 = v59;
        *(_QWORD *)v59 = v56;
        *(_QWORD *)(v59 + 8) = v57;
        *(_QWORD *)(v59 + 16) = v58;
        *(_DWORD *)(v59 + 24) = 1;
      }
      else
      {
        v70 = std::io::error::Error::kind(v55);
        v71 = (void *)_rust_alloc(18LL, 1LL);
        if ( !v71 )
          alloc::raw_vec::handle_error(1LL, 18LL);
        qmemcpy(v71, "input/output error", 18);
        v124[0] = 18LL;
        v124[1] = v71;
        v124[2] = 18LL;
        v8 = uucore::mods::error::UIoError::new(v70, v124);
      }
      goto LABEL_114;
    case 1LL:
LABEL_27:
      uu_split::filenames::FilenameIterator::new(&v78, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), a1 + 64);
      v8 = *((_QWORD *)&v78 + 1);
      if ( (_QWORD)v78 == 0x8000000000000001LL )
        goto LABEL_80;
      v92 = v16;
      *(_OWORD *)&v83[40] = v81;
      *(_OWORD *)&v83[24] = v80;
      *(_OWORD *)&v83[8] = *(_OWORD *)&v79[8];
      v82 = v78;
      *(_QWORD *)v83 = *(_QWORD *)v79;
      if ( BYTE8(v81) )
      {
        v83[48] = 0;
      }
      else if ( (unsigned __int8)uu_split::number::Number::increment(&v82) )
      {
LABEL_50:
        v29 = (void *)_rust_alloc(30LL, 1LL);
        if ( !v29 )
          alloc::raw_vec::handle_error(1LL, 30LL);
        v20 = v29;
        qmemcpy(v29, "output file suffixes exhausted", 30);
        v21 = _rust_alloc(32LL, 8LL);
        if ( !v21 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_52;
      }
      *(_QWORD *)&v78 = &v83[16];
      *((_QWORD *)&v78 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v79 = &v82;
      *(_QWORD *)&v79[8] = <uu_split::number::Number as core::fmt::Display>::fmt;
      *(_QWORD *)&v79[16] = &v83[32];
      *(_QWORD *)&v80 = <&T as core::fmt::Display>::fmt;
      v87 = &anon_740c853ddd05e20d9ba5cb1441a5b317_19_llvm_15693302092529875254;
      v88 = 3LL;
      v89 = &v78;
      v90 = 3uLL;
      alloc::fmt::format::format_inner(&v84, &v87);
      v77 = v84;
      if ( v84 == (void **)0x8000000000000000LL )
        goto LABEL_50;
      v30 = v85;
      v31 = v86;
      v74 = v85;
      if ( *(_BYTE *)(a1 + 160) )
      {
        v87 = 0LL;
        v88 = (__int64)v85;
        v89 = v86;
        LOBYTE(v90) = 1;
        v84 = &v87;
        v85 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v78 = &off_10B7E8;
        *((_QWORD *)&v78 + 1) = 2LL;
        *(_QWORD *)&v79[16] = 0LL;
        *(_QWORD *)v79 = &v84;
        *(_QWORD *)&v79[8] = 1LL;
        std::io::stdio::_print(&v78);
        v30 = v74;
      }
      v98 = v30;
      v99 = v31;
      if ( (unsigned __int8)uu_split::platform::unix::paths_refer_to_same_file(v97, v2, v30, v31) )
      {
        v100 = &v98;
        v101 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v78 = &anon_80a68c298b3244c7b6f64951acf55080_83_llvm_4507047988568940441;
        *((_QWORD *)&v78 + 1) = 2LL;
        *(_QWORD *)&v79[16] = 0LL;
        *(_QWORD *)v79 = &v100;
        *(_QWORD *)&v79[8] = 1LL;
        alloc::fmt::format::format_inner(&v84, &v78);
        v32 = std::io::error::Error::new(39LL, &v84);
      }
      else
      {
        uu_split::platform::unix::instantiate_current_writer(&v87, a1 + 136, v74, v31, 1LL);
        v40 = (__int64)v87;
        v32 = v88;
        if ( v87 != (void *)0x8000000000000000LL )
        {
          v60 = v89;
          v93 = v90;
          v94 = v91;
          *(_OWORD *)v95 = v82;
          *(_OWORD *)&v95[16] = *(_OWORD *)v83;
          *(_OWORD *)&v95[32] = *(_OWORD *)&v83[16];
          *(_OWORD *)&v95[48] = *(_OWORD *)&v83[32];
          v96 = *(_QWORD *)&v83[48];
          if ( v77 )
          {
            v61 = v88;
            _rust_dealloc(v74, v77, 1LL);
            v32 = v61;
          }
          v111 = v93;
          v112 = v94;
          v113 = *(_QWORD *)v95;
          v114 = *(_OWORD *)&v95[8];
          v115 = *(_OWORD *)&v95[24];
          v116 = *(_OWORD *)&v95[40];
          v117 = *(_QWORD *)&v95[56];
          v118 = v96;
          v108 = v40;
          v109 = v32;
          v110 = v60;
          v119 = a1;
          v120 = v92;
          v121 = 0LL;
          v122 = v92;
          if ( !std::io::copy::generic_copy(&v102, &v108) )
          {
            v8 = 0LL;
            goto LABEL_115;
          }
          v63 = v62;
          *(_QWORD *)&v82 = v62;
          if ( (unsigned __int8)std::io::error::Error::kind(v62) == 39 )
          {
            *(_QWORD *)&v78 = &v82;
            *((_QWORD *)&v78 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
            *(_QWORD *)&v93 = &anon_edec59db3b863b6761f2fcbb7c5018ad_75_llvm_1026247603497507326;
            *((_QWORD *)&v93 + 1) = 1LL;
            v94 = &v78;
            *(_OWORD *)v95 = 1uLL;
            alloc::fmt::format::format_inner(v125, &v93);
            v64 = v125[0];
            v65 = v125[1];
            v66 = v125[2];
            v67 = _rust_alloc(32LL, 8LL);
            if ( !v67 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v8 = v67;
            *(_QWORD *)v67 = v64;
            *(_QWORD *)(v67 + 8) = v65;
            *(_QWORD *)(v67 + 16) = v66;
            *(_DWORD *)(v67 + 24) = 1;
          }
          else
          {
            v72 = std::io::error::Error::kind(v63);
            v73 = (void *)_rust_alloc(18LL, 1LL);
            if ( !v73 )
              alloc::raw_vec::handle_error(1LL, 18LL);
            qmemcpy(v73, "input/output error", 18);
            v126[0] = 18LL;
            v126[1] = v73;
            v126[2] = 18LL;
            v8 = uucore::mods::error::UIoError::new(v72, v126);
          }
          goto LABEL_114;
        }
      }
      v37 = v77;
      *(_QWORD *)&v78 = 0x8000000000000000LL;
      *(_QWORD *)&v79[8] = v32;
      v38 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v38 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_75:
      v8 = (__int64)v38;
      v41 = v78;
      v38[1] = *(_OWORD *)v79;
      *v38 = v41;
      if ( v37 )
        _rust_dealloc(v74, v37, 1LL);
      goto LABEL_77;
    case 2LL:
LABEL_22:
      uu_split::filenames::FilenameIterator::new(&v78, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), a1 + 64);
      v8 = *((_QWORD *)&v78 + 1);
      if ( (_QWORD)v78 == 0x8000000000000001LL )
        goto LABEL_80;
      v92 = v16;
      *(_OWORD *)&v83[40] = v81;
      *(_OWORD *)&v83[24] = v80;
      *(_OWORD *)&v83[8] = *(_OWORD *)&v79[8];
      v82 = v78;
      *(_QWORD *)v83 = *(_QWORD *)v79;
      if ( BYTE8(v81) )
      {
        v83[48] = 0;
      }
      else if ( (unsigned __int8)uu_split::number::Number::increment(&v82) )
      {
        goto LABEL_32;
      }
      *(_QWORD *)&v78 = &v83[16];
      *((_QWORD *)&v78 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v79 = &v82;
      *(_QWORD *)&v79[8] = <uu_split::number::Number as core::fmt::Display>::fmt;
      *(_QWORD *)&v79[16] = &v83[32];
      *(_QWORD *)&v80 = <&T as core::fmt::Display>::fmt;
      v87 = &anon_740c853ddd05e20d9ba5cb1441a5b317_19_llvm_15693302092529875254;
      v88 = 3LL;
      v89 = &v78;
      v90 = 3uLL;
      alloc::fmt::format::format_inner(&v84, &v87);
      v75 = v84;
      if ( v84 != (void **)0x8000000000000000LL )
      {
        v22 = v85;
        v23 = v86;
        v74 = v85;
        if ( *(_BYTE *)(a1 + 160) )
        {
          v87 = 0LL;
          v88 = (__int64)v85;
          v89 = v86;
          LOBYTE(v90) = 1;
          v84 = &v87;
          v85 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v78 = &off_10B7E8;
          *((_QWORD *)&v78 + 1) = 2LL;
          *(_QWORD *)&v79[16] = 0LL;
          *(_QWORD *)v79 = &v84;
          *(_QWORD *)&v79[8] = 1LL;
          std::io::stdio::_print(&v78);
          v22 = v74;
        }
        v98 = v22;
        v99 = v23;
        if ( (unsigned __int8)uu_split::platform::unix::paths_refer_to_same_file(v97, v2, v22, v23) )
        {
          v100 = &v98;
          v101 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v78 = &anon_80a68c298b3244c7b6f64951acf55080_83_llvm_4507047988568940441;
          *((_QWORD *)&v78 + 1) = 2LL;
          *(_QWORD *)&v79[16] = 0LL;
          *(_QWORD *)v79 = &v100;
          *(_QWORD *)&v79[8] = 1LL;
          alloc::fmt::format::format_inner(&v84, &v78);
          v24 = std::io::error::Error::new(39LL, &v84);
        }
        else
        {
          uu_split::platform::unix::instantiate_current_writer(&v87, a1 + 136, v74, v23, 1LL);
          v36 = (__int64)v87;
          v24 = v88;
          if ( v87 != (void *)0x8000000000000000LL )
          {
            v44 = v89;
            v93 = v90;
            v94 = v91;
            *(_OWORD *)v95 = v82;
            *(_OWORD *)&v95[16] = *(_OWORD *)v83;
            *(_OWORD *)&v95[32] = *(_OWORD *)&v83[16];
            *(_OWORD *)&v95[48] = *(_OWORD *)&v83[32];
            v96 = *(_QWORD *)&v83[48];
            if ( v75 )
            {
              v45 = v88;
              _rust_dealloc(v74, v75, 1LL);
              v24 = v45;
            }
            v111 = v93;
            v112 = v94;
            v113 = *(_QWORD *)v95;
            v114 = *(_OWORD *)&v95[8];
            v115 = *(_OWORD *)&v95[24];
            v116 = *(_OWORD *)&v95[40];
            v117 = *(_QWORD *)&v95[56];
            v118 = v96;
            v108 = v36;
            v109 = v24;
            v110 = v44;
            v119 = a1;
            v120 = v92;
            v121 = 0LL;
            v122 = v92;
            if ( !std::io::copy::generic_copy(&v102, &v108) )
            {
              v8 = 0LL;
              goto LABEL_115;
            }
            v47 = v46;
            *(_QWORD *)&v82 = v46;
            if ( (unsigned __int8)std::io::error::Error::kind(v46) == 39 )
            {
              *(_QWORD *)&v78 = &v82;
              *((_QWORD *)&v78 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&v93 = &anon_edec59db3b863b6761f2fcbb7c5018ad_75_llvm_1026247603497507326;
              *((_QWORD *)&v93 + 1) = 1LL;
              v94 = &v78;
              *(_OWORD *)v95 = 1uLL;
              alloc::fmt::format::format_inner(v127, &v93);
              v48 = v127[0];
              v49 = v127[1];
              v50 = v127[2];
              v51 = _rust_alloc(32LL, 8LL);
              if ( !v51 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v8 = v51;
              *(_QWORD *)v51 = v48;
              *(_QWORD *)(v51 + 8) = v49;
              *(_QWORD *)(v51 + 16) = v50;
              *(_DWORD *)(v51 + 24) = 1;
            }
            else
            {
              v68 = std::io::error::Error::kind(v47);
              v69 = (void *)_rust_alloc(18LL, 1LL);
              if ( !v69 )
                alloc::raw_vec::handle_error(1LL, 18LL);
              qmemcpy(v69, "input/output error", 18);
              v128[0] = 18LL;
              v128[1] = v69;
              v128[2] = 18LL;
              v8 = uucore::mods::error::UIoError::new(v68, v128);
            }
LABEL_114:
            core::ptr::drop_in_place<std::io::error::Error>(v82);
LABEL_115:
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v108);
            if ( v113 != 0x8000000000000000LL && v113 )
              _rust_dealloc(v114, v113, 1LL);
LABEL_63:
            if ( v103 )
              _rust_dealloc(v102, v103, 1LL);
            v33 = v106;
            v34 = v107;
            v35 = *v107;
            if ( !*v107 )
              goto LABEL_84;
            goto LABEL_83;
          }
        }
        v37 = v75;
        *(_QWORD *)&v78 = 0x8000000000000000LL;
        *(_QWORD *)&v79[8] = v24;
        v38 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v38 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_75;
      }
LABEL_32:
      v19 = (void *)_rust_alloc(30LL, 1LL);
      if ( !v19 )
        alloc::raw_vec::handle_error(1LL, 30LL);
      v20 = v19;
      qmemcpy(v19, "output file suffixes exhausted", 30);
      v21 = _rust_alloc(32LL, 8LL);
      if ( !v21 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_52:
      v8 = v21;
      *(_QWORD *)v21 = 30LL;
      *(_QWORD *)(v21 + 8) = v20;
      *(_QWORD *)(v21 + 16) = 30LL;
      *(_DWORD *)(v21 + 24) = 1;
LABEL_77:
      if ( (_QWORD)v82 != 0x8000000000000000LL && (_QWORD)v82 )
        _rust_dealloc(*((_QWORD *)&v82 + 1), v82, 1LL);
LABEL_80:
      if ( v103 )
        _rust_dealloc(v102, v103, 1LL);
      v33 = v106;
      v34 = v107;
      v35 = *v107;
      if ( !*v107 )
        goto LABEL_84;
LABEL_83:
      ((void (__fastcall *)(__int64 *))v35)(v106);
LABEL_84:
      v42 = v34[1];
      if ( v42 )
        _rust_dealloc(v33, v42, v34[2]);
      return v8;
    case 3LL:
LABEL_25:
      switch ( v14 )
      {
        case 0LL:
          v18 = uu_split::n_chunks_by_byte(a1, (__int64)&v102, v16, 0LL, v5);
          break;
        case 1LL:
          v18 = uu_split::n_chunks_by_byte(a1, (__int64)&v102, *(_QWORD *)(a1 + 32), 1LL, v16);
          break;
        case 2LL:
          v18 = (__int64)uu_split::n_chunks_by_line(a1, (__int64)&v102, v16, 0LL, v5);
          break;
        case 3LL:
          v18 = (__int64)uu_split::n_chunks_by_line(a1, (__int64)&v102, *(_QWORD *)(a1 + 32), 1LL, v16);
          break;
        case 4LL:
          v18 = uu_split::n_chunks_by_line_round_robin(a1, (__int64)&v102, v16, 0LL, v5);
          break;
        case 5LL:
          v18 = uu_split::n_chunks_by_line_round_robin(a1, (__int64)&v102, *(_QWORD *)(a1 + 32), 1LL, v16);
          break;
      }
      v8 = v18;
      goto LABEL_63;
  }
}
