__int64 *__fastcall uu_od::OdOptions::new(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rbx
  __int64 one; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r13
  __int128 *v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  __int16 v19; // cx
  __int128 *v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // kr00_16
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // r14
  __int64 v37; // rbx
  _QWORD *v38; // r15
  __int64 v39; // rsi
  const char *v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rcx
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // rsi
  __int64 v50; // r12
  __int64 v51; // rbp
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 *v55; // rdi
  __int64 v56; // r12
  __int64 v57; // rbp
  __int64 v58; // rbp
  char v59; // al
  __int128 *v60; // r14
  __int64 v61; // r12
  __int64 v62; // r13
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 *v65; // rcx
  __int128 *v66; // rdi
  const char *v67; // rsi
  char **v68; // r12
  __int64 v69; // r15
  __int128 *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 *v73; // rcx
  __int64 v74; // r14
  __int128 *v75; // r15
  __int64 v76; // r12
  __int64 v77; // r13
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 *v80; // rcx
  char ***v81; // rdi
  char flag; // [rsp+Fh] [rbp-1A9h]
  char **v83; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v84; // [rsp+18h] [rbp-1A0h]
  __int128 *v85; // [rsp+20h] [rbp-198h]
  __int64 v86; // [rsp+28h] [rbp-190h]
  __int64 v87; // [rsp+30h] [rbp-188h]
  __int64 *v88; // [rsp+40h] [rbp-178h]
  __int128 *v89; // [rsp+48h] [rbp-170h]
  __int128 v90; // [rsp+50h] [rbp-168h] BYREF
  __int128 *v91; // [rsp+60h] [rbp-158h]
  __int64 (__fastcall *v92)(); // [rsp+68h] [rbp-150h]
  int v93; // [rsp+74h] [rbp-144h]
  __int128 v94; // [rsp+78h] [rbp-140h] BYREF
  __int128 v95; // [rsp+88h] [rbp-130h]
  __int64 v96; // [rsp+98h] [rbp-120h]
  __int128 v97; // [rsp+A0h] [rbp-118h] BYREF
  __int128 v98; // [rsp+B0h] [rbp-108h]
  __int64 v99; // [rsp+C0h] [rbp-F8h]
  __int64 v100; // [rsp+C8h] [rbp-F0h]
  __int128 v101; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v102; // [rsp+E8h] [rbp-D0h]
  __int64 v103; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+F8h] [rbp-C0h]
  const char *v105; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v106; // [rsp+108h] [rbp-B0h]
  __int64 v107; // [rsp+110h] [rbp-A8h]
  __int64 v108; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v109; // [rsp+120h] [rbp-98h]
  char ***v110; // [rsp+128h] [rbp-90h]
  __int64 v111; // [rsp+130h] [rbp-88h]
  __int64 v112; // [rsp+138h] [rbp-80h] BYREF
  _QWORD v113[3]; // [rsp+140h] [rbp-78h] BYREF
  _QWORD v114[3]; // [rsp+158h] [rbp-60h] BYREF
  _QWORD v115[9]; // [rsp+170h] [rbp-48h] BYREF

  v7 = a1;
  one = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v94, a2, aEndian, 6LL);
  *(_QWORD *)&v101 = aEndian;
  *((_QWORD *)&v101 + 1) = 6LL;
  if ( (_DWORD)v94 != 2 )
  {
LABEL_110:
    v99 = v96;
    v98 = v95;
    v97 = v94;
    *(_QWORD *)&v90 = &v101;
    *((_QWORD *)&v90 + 1) = <&T as core::fmt::Display>::fmt;
    v91 = &v97;
    v92 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v83 = &anon_0c8efe92bd74d1b14d1df612c2b85283_2_llvm_268371529257089270;
    v84 = 2LL;
    v87 = 0LL;
    v85 = &v90;
    v86 = 2LL;
    core::panicking::panic_fmt(&v83, &anon_0c8efe92bd74d1b14d1df612c2b85283_4_llvm_268371529257089270);
  }
  if ( *((_QWORD *)&v94 + 1) )
  {
    v112 = *((_QWORD *)&v94 + 1);
    one = *(_QWORD *)(*((_QWORD *)&v94 + 1) + 8LL);
    v9 = *(_QWORD *)(*((_QWORD *)&v94 + 1) + 16LL);
    if ( v9 != 3 )
    {
      if ( v9 == 6 && !(*(_DWORD *)one ^ 0x7474696C | *(unsigned __int16 *)(one + 4) ^ 0x656C) )
      {
        v93 = 0;
        goto LABEL_9;
      }
LABEL_16:
      *(_QWORD *)&v94 = &v112;
      *((_QWORD *)&v94 + 1) = <&T as core::fmt::Display>::fmt;
      v83 = &off_103108;
      v84 = 1LL;
      v87 = 0LL;
      v85 = &v94;
      v86 = 1LL;
      alloc::fmt::format::format_inner(&v97, &v83);
      DWORD2(v98) = 1;
      v20 = (__int128 *)_rust_alloc(32LL, 8LL);
      if ( !v20 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v21 = v97;
      v20[1] = v98;
      *v20 = v21;
      a1[1] = (__int64)v20;
      goto LABEL_24;
    }
    v19 = *(_WORD *)one ^ 0x6962;
    LODWORD(one) = *(unsigned __int8 *)(one + 2) ^ 0x67;
    LOWORD(one) = v19 | one;
    if ( (_WORD)one )
      goto LABEL_16;
    LOBYTE(one) = 1;
  }
  else
  {
    LOBYTE(one) = 2;
  }
  v93 = one;
LABEL_9:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v94, a2, aSkipBytes, 10LL);
  *(_QWORD *)&v101 = aSkipBytes;
  *((_QWORD *)&v101 + 1) = 10LL;
  if ( (_DWORD)v94 != 2 )
    goto LABEL_110;
  v88 = a1;
  if ( *((_QWORD *)&v94 + 1) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)&v94 + 1) + 8LL);
    v11 = *(_QWORD *)(*((_QWORD *)&v94 + 1) + 16LL);
    uu_od::parse_nrofbytes::parse_number_of_bytes(&v83, v10, v11);
    v12 = v84;
    if ( v83 != (char **)((char *)&dword_0 + 3) )
    {
      v13 = v84;
      v14 = v85;
      uu_od::format_error_message(v113, v83, v10, v11, aSkipBytes, 10LL);
      v15 = v113[0];
      v16 = v113[1];
      v17 = v113[2];
      v18 = _rust_alloc(32LL, 8LL);
      if ( !v18 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)v18 = v15;
      *(_QWORD *)(v18 + 8) = v16;
      *(_QWORD *)(v18 + 16) = v17;
      *(_DWORD *)(v18 + 24) = 1;
      v7 = v88;
      v88[1] = v18;
      v7[2] = (__int64)&off_103150;
      *v7 = 2LL;
      if ( v13 )
        _rust_dealloc(v14, v13, 1LL);
      return v7;
    }
  }
  else
  {
    v12 = 0LL;
  }
  v107 = v12;
  uu_od::parse_inputs::parse_inputs(&v97, a2, &off_1031C0);
  if ( v99 == 3 )
  {
    v91 = (__int128 *)v98;
    v90 = v97;
    *(_QWORD *)&v101 = &v90;
    *((_QWORD *)&v101 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v83 = &off_103238;
    v84 = 1LL;
    v87 = 0LL;
    v85 = &v101;
    v86 = 1LL;
    alloc::fmt::format::format_inner(&v94, &v83);
    v22 = v94;
    v23 = v95;
    v24 = _rust_alloc(32LL, 8LL);
    if ( !v24 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v25 = v24;
    *(_OWORD *)v24 = v22;
    *(_QWORD *)(v24 + 16) = v23;
    *(_DWORD *)(v24 + 24) = 1;
    if ( (_QWORD)v90 )
      _rust_dealloc(*((_QWORD *)&v90 + 1), v90, 1LL);
    v7 = v88;
    v88[1] = v25;
LABEL_24:
    v7[2] = (__int64)&off_103150;
    *v7 = 2LL;
    return v7;
  }
  v27 = (__int64 *)*((_QWORD *)&v97 + 1);
  v26 = v97;
  v28 = v98;
  v111 = v100;
  if ( (_DWORD)v99 == 2 )
  {
    v109 = 0LL;
  }
  else
  {
    v109 = v99;
    v107 = *((_QWORD *)&v98 + 1);
    v29 = (__int64 *)_rust_alloc(24LL, 8LL);
    if ( !v29 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *v29 = v26;
    v29[1] = (__int64)v27;
    v29[2] = v28;
    v26 = 1LL;
    v27 = v29;
    v28 = 1LL;
  }
  *(_QWORD *)&v101 = v26;
  *((_QWORD *)&v101 + 1) = v27;
  v102 = v28;
  v110 = &v83;
  uu_od::parse_formats::parse_format_flags(&v83, a3, a4);
  v89 = v85;
  if ( v83 )
  {
    v30 = v84;
    v31 = v86;
    v32 = _rust_alloc(32LL, 8LL);
    if ( !v32 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)v32 = v30;
    *(_QWORD *)(v32 + 8) = v89;
    *(_QWORD *)(v32 + 16) = v31;
    *(_DWORD *)(v32 + 24) = 1;
    v33 = (unsigned __int64)&off_103150;
    v34 = v32;
    v35 = v88;
    goto LABEL_35;
  }
  v33 = v86;
  v104 = v84;
  if ( v84 != 0x8000000000000000LL )
  {
    v41 = aWidth;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v94, a2, aWidth, 5LL);
    v7 = v88;
    v105 = aWidth;
    v106 = 5LL;
    if ( (_DWORD)v94 != 2 )
      goto LABEL_116;
    if ( !*((_QWORD *)&v94 + 1) )
      goto LABEL_56;
    v45 = a2[2];
    if ( !v45 )
      goto LABEL_56;
    v46 = a2[1];
    v47 = 16 * v45;
    v42 = 97LL;
    v43 = 0LL;
    v44 = 1952737655LL;
    v48 = 0LL;
    while ( *(_QWORD *)(v46 + v43 + 8) != 5LL
         || **(_DWORD **)(v46 + v43) ^ 0x74646977 | *(unsigned __int8 *)(*(_QWORD *)(v46 + v43) + 4LL) ^ 0x68 )
    {
      v43 += 16LL;
      v42 += 104LL;
      ++v48;
      if ( v47 == v43 )
        goto LABEL_56;
    }
    v49 = a2[5];
    if ( v48 >= v49 )
      core::panicking::panic_bounds_check(
        v48,
        v49,
        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
        v47,
        v43,
        1952737655LL);
    if ( *(_BYTE *)(a2[4] + v42) == 2 )
    {
      v50 = *(_QWORD *)(*((_QWORD *)&v94 + 1) + 8LL);
      v51 = *(_QWORD *)(*((_QWORD *)&v94 + 1) + 16LL);
      uu_od::parse_nrofbytes::parse_number_of_bytes(&v83, v50, v51);
      v52 = v84;
      if ( v83 != (char **)((char *)&dword_0 + 3) )
      {
        v74 = v84;
        v75 = v85;
        uu_od::format_error_message(v114, v83, v50, v51, aWidth, 5LL);
        v76 = v114[0];
        v77 = v114[1];
        v78 = v114[2];
        v79 = _rust_alloc(32LL, 8LL);
        if ( !v79 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        *(_QWORD *)v79 = v76;
        *(_QWORD *)(v79 + 8) = v77;
        *(_QWORD *)(v79 + 16) = v78;
        *(_DWORD *)(v79 + 24) = 1;
        v80 = v88;
        v88[1] = v79;
        v80[2] = (__int64)&off_103150;
        *v80 = 2LL;
        if ( !v74 )
          goto LABEL_105;
        v66 = v75;
        v67 = (const char *)v74;
        goto LABEL_98;
      }
      v103 = v84;
    }
    else
    {
LABEL_56:
      v103 = 16LL;
      v52 = 16LL;
    }
    if ( v33 )
    {
      v44 = v33 & 3;
      if ( v33 >= 4 )
      {
        v55 = (__int64 *)v89 + 17;
        v53 = 1LL;
        v42 = 0LL;
        do
        {
          if ( v53 <= *(v55 - 15) )
            v53 = *(v55 - 15);
          if ( v53 <= *(v55 - 10) )
            v53 = *(v55 - 10);
          if ( v53 <= *(v55 - 5) )
            v53 = *(v55 - 5);
          v43 = *v55;
          if ( v53 <= *v55 )
            v53 = *v55;
          v42 += 4LL;
          v55 += 20;
        }
        while ( (v33 & 0xFFFFFFFFFFFFFFFCLL) != v42 );
      }
      else
      {
        v53 = 1LL;
        v42 = 0LL;
      }
      if ( (v33 & 3) != 0 )
      {
        v42 = (__int64)v89 + 40 * v42 + 16;
        v44 = (unsigned int)(8 * v44);
        v43 = 5 * v44;
        v54 = 0LL;
        do
        {
          if ( v53 <= *(_QWORD *)(v42 + v54) )
            v53 = *(_QWORD *)(v42 + v54);
          v54 += 40LL;
        }
        while ( v43 != v54 );
      }
      v108 = v53;
    }
    else
    {
      v108 = 1LL;
      v53 = 1LL;
    }
    if ( !v52 || (!((v53 | v52) >> 32) ? (v42 = (unsigned int)v52 % (unsigned int)v53) : (v42 = v52 % v53), v42) )
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME, v42, v53, v43, v44);
      v97 = xmmword_109808;
      *(_QWORD *)&v94 = &v97;
      *((_QWORD *)&v94 + 1) = <&T as core::fmt::Display>::fmt;
      v83 = (char **)&unk_1031E8;
      v84 = 2LL;
      v87 = 0LL;
      v85 = &v94;
      v86 = 1LL;
      std::io::stdio::_eprint(&v83);
      *(_QWORD *)&v97 = &v103;
      *((_QWORD *)&v97 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v98 = &v108;
      *((_QWORD *)&v98 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v83 = &off_103208;
      v84 = 3LL;
      v87 = 0LL;
      v85 = &v97;
      v86 = 2LL;
      std::io::stdio::_eprint(&v83);
      v103 = v108;
    }
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aOutputDuplicat, 17LL, v53, v43, v44);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v94, a2, aReadBytes, 10LL);
    v105 = aReadBytes;
    v106 = 10LL;
    if ( (_DWORD)v94 != 2 )
      goto LABEL_116;
    if ( !*((_QWORD *)&v94 + 1) )
    {
      v58 = 0LL;
LABEL_90:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v94, a2, aAddressRadix, 13LL);
      v105 = aAddressRadix;
      v106 = 13LL;
      if ( (_DWORD)v94 == 2 )
      {
        v59 = 2;
        if ( !*((_QWORD *)&v94 + 1) )
        {
LABEL_102:
          v7[6] = v102;
          *((_OWORD *)v7 + 2) = v101;
          v7[7] = v104;
          v7[8] = (__int64)v89;
          v7[9] = v33;
          v72 = v103;
          *v7 = v58;
          v7[1] = (__int64)v41;
          v7[2] = v109;
          v7[3] = v111;
          v7[10] = v107;
          v7[11] = v72;
          *((_BYTE *)v7 + 96) = flag;
          *((_BYTE *)v7 + 97) = v93;
          *((_BYTE *)v7 + 98) = v59;
          return v7;
        }
        if ( *(_QWORD *)(*((_QWORD *)&v94 + 1) + 16LL) )
        {
          switch ( **(_BYTE **)(*((_QWORD *)&v94 + 1) + 8LL) )
          {
            case 'd':
              v59 = 0;
              goto LABEL_102;
            case 'n':
              v59 = 3;
              goto LABEL_102;
            case 'o':
              goto LABEL_102;
            case 'x':
              v59 = 1;
              goto LABEL_102;
            default:
              <T as alloc::slice::hack::ConvertVec>::to_vec(&v83, aRadixMustBeOne, 33LL);
              v68 = v83;
              v69 = v84;
              v70 = v85;
              v71 = alloc::alloc::exchange_malloc();
              goto LABEL_104;
          }
        }
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v83, aRadixCannotBeE, 54LL);
        v68 = v83;
        v69 = v84;
        v70 = v85;
        v71 = alloc::alloc::exchange_malloc();
LABEL_104:
        *(_QWORD *)v71 = v68;
        *(_QWORD *)(v71 + 8) = v69;
        *(_QWORD *)(v71 + 16) = v70;
        *(_DWORD *)(v71 + 24) = 1;
        v73 = v88;
        v88[1] = v71;
        v73[2] = (__int64)&off_103150;
        *v73 = 2LL;
        goto LABEL_105;
      }
LABEL_116:
      v99 = v96;
      v98 = v95;
      v97 = v94;
      *(_QWORD *)&v90 = &v105;
      *((_QWORD *)&v90 + 1) = <&T as core::fmt::Display>::fmt;
      v91 = &v97;
      v92 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v83 = &anon_0c8efe92bd74d1b14d1df612c2b85283_2_llvm_268371529257089270;
      v81 = v110;
      v110[1] = (char **)(&dword_0 + 2);
      v81[4] = 0LL;
      v81[2] = (char **)&v90;
      v81[3] = (char **)(&dword_0 + 2);
      core::panicking::panic_fmt(v81, &anon_0c8efe92bd74d1b14d1df612c2b85283_4_llvm_268371529257089270);
    }
    v56 = *(_QWORD *)(*((_QWORD *)&v94 + 1) + 8LL);
    v57 = *(_QWORD *)(*((_QWORD *)&v94 + 1) + 16LL);
    uu_od::parse_nrofbytes::parse_number_of_bytes(&v83, v56, v57);
    v41 = (const char *)v84;
    if ( v83 == (char **)((char *)&dword_0 + 3) )
    {
      v58 = 1LL;
      goto LABEL_90;
    }
    v60 = v85;
    uu_od::format_error_message(v115, v83, v56, v57, aReadBytes, 10LL);
    v61 = v115[0];
    v62 = v115[1];
    v63 = v115[2];
    v64 = _rust_alloc(32LL, 8LL);
    if ( !v64 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)v64 = v61;
    *(_QWORD *)(v64 + 8) = v62;
    *(_QWORD *)(v64 + 16) = v63;
    *(_DWORD *)(v64 + 24) = 1;
    v65 = v88;
    v88[1] = v64;
    v65[2] = (__int64)&off_103150;
    *v65 = 2LL;
    if ( !v41 )
    {
LABEL_105:
      if ( v104 )
        _rust_dealloc(v89, 40 * v104, 8LL);
      goto LABEL_36;
    }
    v66 = v60;
    v67 = v41;
LABEL_98:
    _rust_dealloc(v66, v67, 1LL);
    goto LABEL_105;
  }
  v35 = v88;
  v34 = (__int64)v89;
LABEL_35:
  v35[1] = v34;
  v35[2] = v33;
  *v35 = 2LL;
LABEL_36:
  v36 = *((_QWORD *)&v101 + 1);
  v37 = v102;
  if ( v102 )
  {
    v38 = (_QWORD *)(*((_QWORD *)&v101 + 1) + 8LL);
    do
    {
      v39 = *(v38 - 1);
      if ( v39 )
        _rust_dealloc(*v38, v39, 1LL);
      v38 += 3;
      --v37;
    }
    while ( v37 );
  }
  if ( (_QWORD)v101 )
    _rust_dealloc(v36, 24 * v101, 8LL);
  return v88;
}
