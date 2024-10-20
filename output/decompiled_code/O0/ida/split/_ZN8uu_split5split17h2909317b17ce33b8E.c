_OWORD *__fastcall uu_split::split(__int64 a1)
{
  _BYTE *v1; // r14
  __int64 v2; // r15
  __int64 v3; // r15
  __int64 *v4; // rax
  __int64 *v5; // r14
  __int64 (__fastcall **v6)(); // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  _OWORD *v9; // r14
  __int64 (__fastcall **v10)(); // r15
  __int64 *v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r12
  void *v26; // r13
  signed __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r14
  signed __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r14
  signed __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // r14
  __int128 v36; // xmm0
  __int64 (__fastcall **v37)(); // rax
  __int64 (__fastcall *v38)(); // rcx
  _OWORD *result; // rax
  __int64 v40; // rbp
  _QWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // al
  unsigned __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r15
  __int64 v58; // r12
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  char v62; // al
  char v63; // al
  __int64 v64; // r15
  __int64 v65; // r12
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 v70; // r12
  __int64 v71; // rbx
  __int64 v72; // rax
  unsigned __int8 v73; // bl
  _OWORD *v74; // rax
  __int128 v75; // xmm0
  __int64 v76; // rdi
  unsigned __int8 v77; // bl
  _OWORD *v78; // rax
  __int128 v79; // xmm0
  __int128 v80; // [rsp+0h] [rbp-598h] BYREF
  _BYTE v81[24]; // [rsp+10h] [rbp-588h]
  __int128 v82; // [rsp+28h] [rbp-570h]
  __int128 v83; // [rsp+38h] [rbp-560h]
  __int128 v84; // [rsp+48h] [rbp-550h] BYREF
  _BYTE v85[56]; // [rsp+58h] [rbp-540h] BYREF
  __int64 v86; // [rsp+90h] [rbp-508h] BYREF
  unsigned __int64 v87; // [rsp+98h] [rbp-500h]
  __int128 v88; // [rsp+A0h] [rbp-4F8h]
  __int64 v89; // [rsp+B0h] [rbp-4E8h]
  __int64 *v90; // [rsp+B8h] [rbp-4E0h]
  __int64 (__fastcall **v91)(); // [rsp+C0h] [rbp-4D8h]
  __int64 v92; // [rsp+C8h] [rbp-4D0h]
  __int128 v93; // [rsp+D0h] [rbp-4C8h] BYREF
  __int128 v94; // [rsp+E0h] [rbp-4B8h]
  __int64 v95; // [rsp+F0h] [rbp-4A8h]
  unsigned __int64 v96; // [rsp+100h] [rbp-498h] BYREF
  __int64 v97; // [rsp+108h] [rbp-490h] BYREF
  __int64 v98; // [rsp+110h] [rbp-488h] BYREF
  __int64 *v99; // [rsp+118h] [rbp-480h] BYREF
  __int64 (__fastcall *v100)(); // [rsp+120h] [rbp-478h]
  __int64 v101; // [rsp+128h] [rbp-470h] BYREF
  void *v102; // [rsp+130h] [rbp-468h]
  __int64 v103; // [rsp+138h] [rbp-460h]
  __int64 v104; // [rsp+140h] [rbp-458h] BYREF
  void *v105; // [rsp+148h] [rbp-450h]
  __int64 v106; // [rsp+150h] [rbp-448h]
  char v107; // [rsp+158h] [rbp-440h]
  _BYTE *v108; // [rsp+160h] [rbp-438h] BYREF
  __int64 (__fastcall *v109)(); // [rsp+168h] [rbp-430h]
  __int128 *v110; // [rsp+170h] [rbp-428h]
  __int64 (__fastcall *v111)(); // [rsp+178h] [rbp-420h]
  _BYTE *v112; // [rsp+180h] [rbp-418h]
  __int64 (__fastcall *v113)(); // [rsp+188h] [rbp-410h]
  char **v114; // [rsp+190h] [rbp-408h] BYREF
  __int64 v115; // [rsp+198h] [rbp-400h]
  __int64 **v116; // [rsp+1A0h] [rbp-3F8h]
  __int64 v117; // [rsp+1A8h] [rbp-3F0h]
  __int64 v118; // [rsp+1B0h] [rbp-3E8h]
  __int64 v119; // [rsp+1C0h] [rbp-3D8h] BYREF
  __int64 v120; // [rsp+1C8h] [rbp-3D0h]
  __int64 v121; // [rsp+1D0h] [rbp-3C8h]
  __int128 v122; // [rsp+1D8h] [rbp-3C0h]
  __int64 v123; // [rsp+1E8h] [rbp-3B0h]
  _DWORD v124[2]; // [rsp+1F0h] [rbp-3A8h] BYREF
  __int64 v125; // [rsp+1F8h] [rbp-3A0h]
  _QWORD v126[2]; // [rsp+200h] [rbp-398h] BYREF
  _QWORD v127[2]; // [rsp+210h] [rbp-388h] BYREF
  _QWORD v128[2]; // [rsp+220h] [rbp-378h] BYREF
  _QWORD v129[3]; // [rsp+230h] [rbp-368h] BYREF
  _QWORD v130[3]; // [rsp+248h] [rbp-350h] BYREF
  _QWORD v131[3]; // [rsp+260h] [rbp-338h] BYREF
  _QWORD v132[3]; // [rsp+278h] [rbp-320h] BYREF
  __int128 v133; // [rsp+290h] [rbp-308h]
  __int64 v134; // [rsp+2A0h] [rbp-2F8h]
  __int64 v135; // [rsp+2A8h] [rbp-2F0h]
  __int128 v136; // [rsp+2B0h] [rbp-2E8h]
  __int128 v137; // [rsp+2C0h] [rbp-2D8h]
  __int128 v138; // [rsp+2D0h] [rbp-2C8h]
  __int64 v139; // [rsp+2E0h] [rbp-2B8h]
  __int64 v140; // [rsp+2E8h] [rbp-2B0h]
  __int64 v141; // [rsp+2F0h] [rbp-2A8h]
  __int64 v142; // [rsp+2F8h] [rbp-2A0h]
  __int64 v143; // [rsp+300h] [rbp-298h]
  __int64 v144; // [rsp+308h] [rbp-290h]
  _QWORD v145[3]; // [rsp+310h] [rbp-288h] BYREF
  __int128 v146; // [rsp+328h] [rbp-270h]
  __int64 v147; // [rsp+338h] [rbp-260h]
  __int64 v148; // [rsp+340h] [rbp-258h]
  __int128 v149; // [rsp+348h] [rbp-250h]
  __int128 v150; // [rsp+358h] [rbp-240h]
  __int128 v151; // [rsp+368h] [rbp-230h]
  __int64 v152; // [rsp+378h] [rbp-220h]
  __int64 v153; // [rsp+380h] [rbp-218h]
  __int64 v154; // [rsp+388h] [rbp-210h]
  __int64 v155; // [rsp+390h] [rbp-208h]
  __int64 v156; // [rsp+398h] [rbp-200h]
  __int64 v157; // [rsp+3A0h] [rbp-1F8h]
  _QWORD v158[3]; // [rsp+3A8h] [rbp-1F0h] BYREF
  __int128 v159; // [rsp+3C0h] [rbp-1D8h]
  __int64 v160; // [rsp+3D0h] [rbp-1C8h]
  __int64 v161; // [rsp+3D8h] [rbp-1C0h]
  __int128 v162; // [rsp+3E0h] [rbp-1B8h]
  __int128 v163; // [rsp+3F0h] [rbp-1A8h]
  __int128 v164; // [rsp+400h] [rbp-198h]
  __int64 v165; // [rsp+410h] [rbp-188h]
  __int64 v166; // [rsp+418h] [rbp-180h]
  __int64 v167; // [rsp+420h] [rbp-178h]
  __int64 v168; // [rsp+428h] [rbp-170h]
  __int64 v169; // [rsp+430h] [rbp-168h]
  __int64 v170; // [rsp+438h] [rbp-160h]
  __int128 v171; // [rsp+440h] [rbp-158h]
  __int64 v172; // [rsp+450h] [rbp-148h]
  _BYTE v173[64]; // [rsp+458h] [rbp-140h]
  __int64 v174; // [rsp+498h] [rbp-100h]
  __int128 v175; // [rsp+4A0h] [rbp-F8h]
  __int64 v176; // [rsp+4B0h] [rbp-E8h]
  _BYTE v177[64]; // [rsp+4B8h] [rbp-E0h]
  __int64 v178; // [rsp+4F8h] [rbp-A0h]
  __int128 v179; // [rsp+500h] [rbp-98h]
  __int64 v180; // [rsp+510h] [rbp-88h]
  _BYTE v181[64]; // [rsp+518h] [rbp-80h]
  __int64 v182; // [rsp+558h] [rbp-40h]

  v1 = *(_BYTE **)(a1 + 120);
  if ( !v1 )
    goto LABEL_182;
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 < 0 )
    goto LABEL_182;
  if ( v2 == 1 && *v1 == 45 )
  {
    v3 = std::io::stdio::stdin();
    v4 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v5 = v4;
    *v4 = v3;
    v6 = (__int64 (__fastcall **)())&unk_135B98;
    if ( *(_QWORD *)a1 != 1LL )
    {
LABEL_7:
      *(_QWORD *)&v84 = v5;
      *((_QWORD *)&v84 + 1) = v6;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v80, 0x2000LL, 0LL);
      if ( (_QWORD)v80 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v80 + 1), *(_QWORD *)v81);
      if ( *(_QWORD *)v81 )
      {
        v86 = *(_QWORD *)v81;
        v87 = 0x2000LL;
        v88 = 0LL;
        v89 = 0LL;
        v90 = v5;
        v91 = v6;
        v7 = *(_QWORD *)(a1 + 16);
        v8 = 3LL;
        if ( (unsigned __int64)(v7 - 6) < 3 )
          v8 = v7 - 6;
        switch ( v8 )
        {
          case 0LL:
            goto LABEL_23;
          case 1LL:
            goto LABEL_39;
          case 2LL:
            goto LABEL_30;
          case 3LL:
            goto LABEL_37;
        }
      }
      goto LABEL_183;
    }
  }
  else
  {
    core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)(a1 + 120), 1LL, 1LL, v2);
    *(_QWORD *)&v80 = 0x1B600000000LL;
    DWORD2(v80) = 1;
    WORD6(v80) = 0;
    std::fs::OpenOptions::_open(v124, &v80, v1, v2);
    if ( v124[0] )
    {
      v9 = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                       v125,
                       a1);
      v10 = &anon_b760fe9489943aeee93369f40367437d_2_llvm_11129561081277887655;
      if ( v9 )
        return v9;
    }
    else
    {
      LODWORD(v10) = v124[1];
    }
    v11 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
    v5 = v11;
    if ( !v11 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v11 = (_DWORD)v10;
    v6 = &off_135B40;
    if ( *(_QWORD *)a1 != 1LL )
      goto LABEL_7;
  }
  v12 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v84 = v5;
  *((_QWORD *)&v84 + 1) = v6;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v80, v12, 0LL);
  if ( (_QWORD)v80 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v80 + 1), *(_QWORD *)v81);
  if ( !*(_QWORD *)v81 )
LABEL_183:
    core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
  v86 = *(_QWORD *)v81;
  v87 = v12;
  v88 = 0LL;
  v89 = 0LL;
  v90 = v5;
  v91 = v6;
  v7 = *(_QWORD *)(a1 + 16);
  v13 = 3LL;
  if ( (unsigned __int64)(v7 - 6) < 3 )
    v13 = v7 - 6;
  switch ( v13 )
  {
    case 0LL:
LABEL_23:
      v14 = *(_QWORD *)(a1 + 48);
      if ( !v14 )
        goto LABEL_182;
      v15 = *(_QWORD *)(a1 + 56);
      if ( v15 < 0 )
        goto LABEL_182;
      v16 = *(_QWORD *)(a1 + 24);
      uu_split::filenames::FilenameIterator::new(&v80, v14, v15, a1 + 64);
      v9 = (_OWORD *)*((_QWORD *)&v80 + 1);
      if ( (_QWORD)v80 == 0x8000000000000001LL )
        goto LABEL_96;
      *(_OWORD *)&v85[40] = v83;
      *(_OWORD *)&v85[24] = v82;
      *(_OWORD *)&v85[8] = *(_OWORD *)&v81[8];
      v84 = v80;
      *(_QWORD *)v85 = *(_QWORD *)v81;
      if ( (BYTE8(v83) & 1) != 0 )
      {
        v85[48] = 0;
      }
      else if ( (_QWORD)v80 == 0x8000000000000000LL )
      {
        if ( *((_QWORD *)&v80 + 1) == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&anon_b760fe9489943aeee93369f40367437d_25_llvm_11129561081277887655);
        *((_QWORD *)&v84 + 1) = *((_QWORD *)&v80 + 1) + 1LL;
      }
      else if ( (unsigned __int8)uu_split::number::FixedWidthNumber::increment(&v84) )
      {
        goto LABEL_93;
      }
      v108 = &v85[16];
      v109 = <&T as core::fmt::Display>::fmt;
      v110 = &v84;
      v111 = <uu_split::number::Number as core::fmt::Display>::fmt;
      v112 = &v85[32];
      v113 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v93 = &anon_f1287c7fdd0bdb771238559a83dec725_51_llvm_9029318952859596258;
      *((_QWORD *)&v93 + 1) = 3LL;
      *(_QWORD *)&v94 = &v108;
      *((_QWORD *)&v94 + 1) = 3LL;
      v95 = 0LL;
      alloc::fmt::format::format_inner(&v101, &v93);
      v25 = v101;
      if ( v101 != 0x8000000000000000LL )
      {
        v92 = v16;
        v26 = v102;
        v30 = v103;
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
        {
          if ( !v102 || v103 < 0 )
            goto LABEL_182;
          v104 = 0LL;
          v105 = v102;
          v106 = v103;
          v107 = 1;
          v99 = &v104;
          v100 = <os_display::Quoted as core::fmt::Display>::fmt;
          v114 = &off_1356F8;
          v115 = 2LL;
          v118 = 0LL;
          v116 = &v99;
          v117 = 1LL;
          std::io::stdio::_print(&v114);
        }
        if ( v26 && v30 >= 0 )
        {
          uu_split::Settings::instantiate_current_writer(&v119, a1, v26, v30, 1u);
          v31 = v119;
          v32 = v120;
          if ( v119 == 0x8000000000000000LL )
          {
            *(_QWORD *)&v93 = 0x8000000000000000LL;
            *((_QWORD *)&v94 + 1) = v120;
            v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            if ( !v9 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_78:
            v36 = v93;
            v9[1] = v94;
            *v9 = v36;
            if ( v25 )
              _rust_dealloc(v26);
            goto LABEL_94;
          }
          v44 = v121;
          v171 = v122;
          v172 = v123;
          *(_OWORD *)v173 = v84;
          *(_OWORD *)&v173[16] = *(_OWORD *)v85;
          *(_OWORD *)&v173[32] = *(_OWORD *)&v85[16];
          *(_OWORD *)&v173[48] = *(_OWORD *)&v85[32];
          v174 = *(_QWORD *)&v85[48];
          if ( v25 )
            _rust_dealloc(v26);
          v133 = v171;
          v134 = v172;
          v135 = *(_QWORD *)v173;
          v136 = *(_OWORD *)&v173[8];
          v137 = *(_OWORD *)&v173[24];
          v138 = *(_OWORD *)&v173[40];
          v139 = *(_QWORD *)&v173[56];
          v140 = v174;
          v132[0] = v31;
          v132[1] = v32;
          v132[2] = v44;
          v141 = a1;
          v142 = v92;
          v143 = 0LL;
          v144 = v92;
          v41 = v132;
          if ( v87 <= 0x1FFF )
            v45 = std::io::copy::stack_buffer_copy(&v86, v132);
          else
            v45 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(&v86, v132);
          if ( v45 )
          {
            v96 = v46;
            switch ( v46 & 3 )
            {
              case 0uLL:
                v51 = 16LL;
                goto LABEL_147;
              case 1uLL:
                v51 = 15LL;
LABEL_147:
                v62 = *(_BYTE *)(v46 + v51);
                goto LABEL_148;
              case 2uLL:
                v62 = std::sys::pal::unix::decode_error_kind(HIDWORD(v46));
                goto LABEL_148;
              case 3uLL:
                v54 = HIDWORD(v46);
                v62 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v46));
                if ( v62 == 41 )
                  goto LABEL_168;
LABEL_148:
                if ( v62 == 39 )
                {
                  v126[0] = &v96;
                  v126[1] = <std::io::error::Error as core::fmt::Display>::fmt;
                  *(_QWORD *)&v80 = &anon_f907210316a4f48a9c7de5c93e2a79ff_193_llvm_5503381581801417789;
                  *((_QWORD *)&v80 + 1) = 1LL;
                  *(_QWORD *)v81 = v126;
                  *(_QWORD *)&v81[8] = 1LL;
                  *(_QWORD *)&v81[16] = 0LL;
                  alloc::fmt::format::format_inner(v129, &v80);
                  v64 = v129[0];
                  v65 = v129[1];
                  v66 = v129[2];
                  v67 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                  v9 = (_OWORD *)v67;
                  if ( !v67 )
                    alloc::alloc::handle_alloc_error(8LL, 32LL);
                  *(_QWORD *)v67 = v64;
                  *(_QWORD *)(v67 + 8) = v65;
                  *(_QWORD *)(v67 + 16) = v66;
                  *(_DWORD *)(v67 + 24) = 1;
                }
                else
                {
                  switch ( v96 & 3 )
                  {
                    case 0uLL:
                      v68 = 16LL;
                      goto LABEL_170;
                    case 1uLL:
                      v68 = 15LL;
LABEL_170:
                      v77 = *(_BYTE *)(v96 + v68);
                      goto LABEL_171;
                    case 2uLL:
                      v77 = std::sys::pal::unix::decode_error_kind(HIDWORD(v96));
                      goto LABEL_171;
                    case 3uLL:
                      v54 = HIDWORD(v96);
                      v77 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v96));
                      if ( v77 == 41 )
                        goto LABEL_168;
LABEL_171:
                      <T as alloc::slice::hack::ConvertVec>::to_vec(&v84, aInputOutputErr, 18LL);
                      *(_QWORD *)v81 = *(_QWORD *)v85;
                      v80 = v84;
                      *(_QWORD *)&v81[8] = ((unsigned __int64)v77 << 32) | 3;
                      v78 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                      v9 = v78;
                      if ( !v78 )
                        alloc::alloc::handle_alloc_error(8LL, 32LL);
                      v79 = v80;
                      v78[1] = *(_OWORD *)v81;
                      *v78 = v79;
                      break;
                  }
                }
                std::io::error::repr_bitpacked::decode_repr(&v80, v96);
                if ( (unsigned __int8)v80 >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v80 + 8);
                break;
            }
          }
          else
          {
            v9 = 0LL;
          }
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v132);
          if ( 2 * v135 )
          {
            v76 = v136;
            goto LABEL_181;
          }
          goto LABEL_84;
        }
        goto LABEL_182;
      }
      goto LABEL_93;
    case 1LL:
LABEL_39:
      v22 = *(_QWORD *)(a1 + 48);
      if ( !v22 )
        goto LABEL_182;
      v23 = *(_QWORD *)(a1 + 56);
      if ( v23 < 0 )
        goto LABEL_182;
      v24 = *(_QWORD *)(a1 + 24);
      uu_split::filenames::FilenameIterator::new(&v80, v22, v23, a1 + 64);
      v9 = (_OWORD *)*((_QWORD *)&v80 + 1);
      if ( (_QWORD)v80 == 0x8000000000000001LL )
        goto LABEL_96;
      *(_OWORD *)&v85[40] = v83;
      *(_OWORD *)&v85[24] = v82;
      *(_OWORD *)&v85[8] = *(_OWORD *)&v81[8];
      v84 = v80;
      *(_QWORD *)v85 = *(_QWORD *)v81;
      if ( (BYTE8(v83) & 1) != 0 )
      {
        v85[48] = 0;
      }
      else if ( (_QWORD)v80 == 0x8000000000000000LL )
      {
        if ( *((_QWORD *)&v80 + 1) == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&anon_b760fe9489943aeee93369f40367437d_25_llvm_11129561081277887655);
        *((_QWORD *)&v84 + 1) = *((_QWORD *)&v80 + 1) + 1LL;
      }
      else if ( (unsigned __int8)uu_split::number::FixedWidthNumber::increment(&v84) )
      {
        goto LABEL_93;
      }
      v108 = &v85[16];
      v109 = <&T as core::fmt::Display>::fmt;
      v110 = &v84;
      v111 = <uu_split::number::Number as core::fmt::Display>::fmt;
      v112 = &v85[32];
      v113 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v93 = &anon_f1287c7fdd0bdb771238559a83dec725_51_llvm_9029318952859596258;
      *((_QWORD *)&v93 + 1) = 3LL;
      *(_QWORD *)&v94 = &v108;
      *((_QWORD *)&v94 + 1) = 3LL;
      v95 = 0LL;
      alloc::fmt::format::format_inner(&v101, &v93);
      v25 = v101;
      if ( v101 != 0x8000000000000000LL )
      {
        v92 = v24;
        v26 = v102;
        v33 = v103;
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
        {
          if ( !v102 || v103 < 0 )
            goto LABEL_182;
          v104 = 0LL;
          v105 = v102;
          v106 = v103;
          v107 = 1;
          v99 = &v104;
          v100 = <os_display::Quoted as core::fmt::Display>::fmt;
          v114 = &off_1356F8;
          v115 = 2LL;
          v118 = 0LL;
          v116 = &v99;
          v117 = 1LL;
          std::io::stdio::_print(&v114);
        }
        if ( v26 && v33 >= 0 )
        {
          uu_split::Settings::instantiate_current_writer(&v119, a1, v26, v33, 1u);
          v34 = v119;
          v35 = v120;
          if ( v119 == 0x8000000000000000LL )
          {
            *(_QWORD *)&v93 = 0x8000000000000000LL;
            *((_QWORD *)&v94 + 1) = v120;
            v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            if ( !v9 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_78;
          }
          v47 = v121;
          v175 = v122;
          v176 = v123;
          *(_OWORD *)v177 = v84;
          *(_OWORD *)&v177[16] = *(_OWORD *)v85;
          *(_OWORD *)&v177[32] = *(_OWORD *)&v85[16];
          *(_OWORD *)&v177[48] = *(_OWORD *)&v85[32];
          v178 = *(_QWORD *)&v85[48];
          if ( v25 )
            _rust_dealloc(v26);
          v146 = v175;
          v147 = v176;
          v148 = *(_QWORD *)v177;
          v149 = *(_OWORD *)&v177[8];
          v150 = *(_OWORD *)&v177[24];
          v151 = *(_OWORD *)&v177[40];
          v152 = *(_QWORD *)&v177[56];
          v153 = v178;
          v145[0] = v34;
          v145[1] = v35;
          v145[2] = v47;
          v154 = a1;
          v155 = v92;
          v156 = 0LL;
          v157 = v92;
          v41 = v145;
          if ( v87 <= 0x1FFF )
            v48 = std::io::copy::stack_buffer_copy(&v86, v145);
          else
            v48 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(&v86, v145);
          if ( v48 )
          {
            v97 = v49;
            switch ( v49 & 3 )
            {
              case 0LL:
                v52 = 16LL;
                goto LABEL_154;
              case 1LL:
                v52 = 15LL;
LABEL_154:
                v63 = *(_BYTE *)(v49 + v52);
                goto LABEL_155;
              case 2LL:
                v63 = std::sys::pal::unix::decode_error_kind(HIDWORD(v49));
                goto LABEL_155;
              case 3LL:
                v54 = HIDWORD(v49);
                v63 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v49));
                if ( v63 == 41 )
                  goto LABEL_168;
LABEL_155:
                if ( v63 != 39 )
                  JUMPOUT(0xAD395LL);
                v127[0] = &v97;
                v127[1] = <std::io::error::Error as core::fmt::Display>::fmt;
                *(_QWORD *)&v80 = &anon_f907210316a4f48a9c7de5c93e2a79ff_193_llvm_5503381581801417789;
                *((_QWORD *)&v80 + 1) = 1LL;
                *(_QWORD *)v81 = v127;
                *(_QWORD *)&v81[8] = 1LL;
                *(_QWORD *)&v81[16] = 0LL;
                alloc::fmt::format::format_inner(v130, &v80);
                v69 = v130[0];
                v70 = v130[1];
                v71 = v130[2];
                v72 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                v9 = (_OWORD *)v72;
                if ( !v72 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                *(_QWORD *)v72 = v69;
                *(_QWORD *)(v72 + 8) = v70;
                *(_QWORD *)(v72 + 16) = v71;
                *(_DWORD *)(v72 + 24) = 1;
                std::io::error::repr_bitpacked::decode_repr(&v80, v97);
                if ( (unsigned __int8)v80 >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v80 + 8);
                break;
            }
          }
          else
          {
            v9 = 0LL;
          }
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v145);
          if ( 2 * v148 )
          {
            v76 = v149;
            goto LABEL_181;
          }
          goto LABEL_84;
        }
        goto LABEL_182;
      }
      goto LABEL_93;
    case 2LL:
LABEL_30:
      v17 = *(_QWORD *)(a1 + 48);
      if ( !v17 )
        goto LABEL_182;
      v18 = *(_QWORD *)(a1 + 56);
      if ( v18 < 0 )
        goto LABEL_182;
      v19 = *(_QWORD *)(a1 + 24);
      uu_split::filenames::FilenameIterator::new(&v80, v17, v18, a1 + 64);
      v9 = (_OWORD *)*((_QWORD *)&v80 + 1);
      if ( (_QWORD)v80 == 0x8000000000000001LL )
        goto LABEL_96;
      *(_OWORD *)&v85[40] = v83;
      *(_OWORD *)&v85[24] = v82;
      *(_OWORD *)&v85[8] = *(_OWORD *)&v81[8];
      v84 = v80;
      *(_QWORD *)v85 = *(_QWORD *)v81;
      if ( (BYTE8(v83) & 1) != 0 )
      {
        v85[48] = 0;
      }
      else if ( (_QWORD)v80 == 0x8000000000000000LL )
      {
        if ( *((_QWORD *)&v80 + 1) == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&anon_b760fe9489943aeee93369f40367437d_25_llvm_11129561081277887655);
        *((_QWORD *)&v84 + 1) = *((_QWORD *)&v80 + 1) + 1LL;
      }
      else if ( (unsigned __int8)uu_split::number::FixedWidthNumber::increment(&v84) )
      {
        goto LABEL_93;
      }
      v108 = &v85[16];
      v109 = <&T as core::fmt::Display>::fmt;
      v110 = &v84;
      v111 = <uu_split::number::Number as core::fmt::Display>::fmt;
      v112 = &v85[32];
      v113 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v93 = &anon_f1287c7fdd0bdb771238559a83dec725_51_llvm_9029318952859596258;
      *((_QWORD *)&v93 + 1) = 3LL;
      *(_QWORD *)&v94 = &v108;
      *((_QWORD *)&v94 + 1) = 3LL;
      v95 = 0LL;
      alloc::fmt::format::format_inner(&v101, &v93);
      v25 = v101;
      if ( v101 != 0x8000000000000000LL )
      {
        v92 = v19;
        v26 = v102;
        v27 = v103;
        if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
        {
          if ( !v102 || v103 < 0 )
            goto LABEL_182;
          v104 = 0LL;
          v105 = v102;
          v106 = v103;
          v107 = 1;
          v99 = &v104;
          v100 = <os_display::Quoted as core::fmt::Display>::fmt;
          v114 = &off_1356F8;
          v115 = 2LL;
          v118 = 0LL;
          v116 = &v99;
          v117 = 1LL;
          std::io::stdio::_print(&v114);
        }
        if ( v26 && v27 >= 0 )
        {
          uu_split::Settings::instantiate_current_writer(&v119, a1, v26, v27, 1u);
          v28 = v119;
          v29 = v120;
          if ( v119 == 0x8000000000000000LL )
          {
            *(_QWORD *)&v93 = 0x8000000000000000LL;
            *((_QWORD *)&v94 + 1) = v120;
            v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            if ( !v9 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_78;
          }
          v40 = v121;
          v179 = v122;
          v180 = v123;
          *(_OWORD *)v181 = v84;
          *(_OWORD *)&v181[16] = *(_OWORD *)v85;
          *(_OWORD *)&v181[32] = *(_OWORD *)&v85[16];
          *(_OWORD *)&v181[48] = *(_OWORD *)&v85[32];
          v182 = *(_QWORD *)&v85[48];
          if ( v25 )
            _rust_dealloc(v26);
          v159 = v179;
          v160 = v180;
          v161 = *(_QWORD *)v181;
          v162 = *(_OWORD *)&v181[8];
          v163 = *(_OWORD *)&v181[24];
          v164 = *(_OWORD *)&v181[40];
          v165 = *(_QWORD *)&v181[56];
          v166 = v182;
          v158[0] = v28;
          v158[1] = v29;
          v158[2] = v40;
          v167 = a1;
          v168 = v92;
          v169 = 0LL;
          v170 = v92;
          v41 = v158;
          if ( v87 <= 0x1FFF )
            v42 = std::io::copy::stack_buffer_copy(&v86, v158);
          else
            v42 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(&v86, v158);
          if ( v42 )
          {
            v98 = v43;
            switch ( v43 & 3 )
            {
              case 0LL:
                v50 = 16LL;
                goto LABEL_134;
              case 1LL:
                v50 = 15LL;
LABEL_134:
                v53 = *(_BYTE *)(v43 + v50);
                break;
              case 2LL:
                v53 = std::sys::pal::unix::decode_error_kind(HIDWORD(v43));
                break;
              case 3LL:
                v54 = HIDWORD(v43);
                v53 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v43));
                if ( v53 == 41 )
LABEL_168:
                  core::hint::unreachable_unchecked::precondition_check(v54, v41, v55, v56);
                return result;
            }
            if ( v53 == 39 )
            {
              v128[0] = &v98;
              v128[1] = <std::io::error::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&v80 = &anon_f907210316a4f48a9c7de5c93e2a79ff_193_llvm_5503381581801417789;
              *((_QWORD *)&v80 + 1) = 1LL;
              *(_QWORD *)v81 = v128;
              *(_QWORD *)&v81[8] = 1LL;
              *(_QWORD *)&v81[16] = 0LL;
              alloc::fmt::format::format_inner(v131, &v80);
              v57 = v131[0];
              v58 = v131[1];
              v59 = v131[2];
              v60 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              v9 = (_OWORD *)v60;
              if ( !v60 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              *(_QWORD *)v60 = v57;
              *(_QWORD *)(v60 + 8) = v58;
              *(_QWORD *)(v60 + 16) = v59;
              *(_DWORD *)(v60 + 24) = 1;
            }
            else
            {
              switch ( v98 & 3 )
              {
                case 0LL:
                  v61 = 16LL;
                  break;
                case 1LL:
                  v61 = 15LL;
                  break;
              }
              v73 = *(_BYTE *)(v98 + v61);
              <T as alloc::slice::hack::ConvertVec>::to_vec(&v84, aInputOutputErr, 18LL);
              *(_QWORD *)v81 = *(_QWORD *)v85;
              v80 = v84;
              *(_QWORD *)&v81[8] = ((unsigned __int64)v73 << 32) | 3;
              v74 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              v9 = v74;
              if ( !v74 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v75 = v80;
              v74[1] = *(_OWORD *)v81;
              *v74 = v75;
            }
            std::io::error::repr_bitpacked::decode_repr(&v80, v98);
            if ( (unsigned __int8)v80 >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v80 + 8);
          }
          else
          {
            v9 = 0LL;
          }
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v158);
          if ( 2 * v161 )
          {
            v76 = v162;
LABEL_181:
            _rust_dealloc(v76);
          }
LABEL_84:
          if ( v87 )
            _rust_dealloc(v86);
          v37 = v91;
          v38 = *v91;
          if ( !*v91 )
            goto LABEL_100;
          goto LABEL_99;
        }
LABEL_182:
        core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
      }
LABEL_93:
      v9 = (_OWORD *)uucore::mods::error::USimpleError::new(
                       1LL,
                       anon_4f04ac8a3ef9e065a432e2bbb7f80309_117_llvm_15963415444986902846,
                       30LL);
LABEL_94:
      if ( 2LL * (_QWORD)v84 )
        _rust_dealloc(*((_QWORD *)&v84 + 1));
LABEL_96:
      if ( v87 )
        _rust_dealloc(v86);
      v37 = v91;
      v38 = *v91;
      if ( !*v91 )
        goto LABEL_100;
LABEL_99:
      ((void (__fastcall *)(__int64 *))v38)(v90);
      v37 = v91;
LABEL_100:
      if ( v37[1] )
        _rust_dealloc(v90);
      return v9;
    case 3LL:
LABEL_37:
      v20 = *(_QWORD *)(a1 + 24);
      switch ( v7 )
      {
        case 0LL:
          v21 = uu_split::n_chunks_by_byte((_QWORD *)a1, (__int64)&v86, *(_QWORD *)(a1 + 24), 0LL, v20);
          break;
        case 1LL:
          JUMPOUT(0xAC992LL);
        case 2LL:
          JUMPOUT(0xAC95CLL);
        case 3LL:
          JUMPOUT(0xAC977LL);
        case 4LL:
          JUMPOUT(0xAC945LL);
        case 5LL:
          v21 = (__int64)uu_split::n_chunks_by_line_round_robin(a1, (__int64)&v86, *(_QWORD *)(a1 + 32), 1LL, v20);
          break;
      }
      v9 = (_OWORD *)v21;
      goto LABEL_84;
  }
}
