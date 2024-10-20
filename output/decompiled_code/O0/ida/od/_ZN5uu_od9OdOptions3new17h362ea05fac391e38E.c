__int64 __fastcall uu_od::OdOptions::new(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  _WORD *v20; // rsi
  signed __int64 v21; // rdx
  __int64 v22; // rax
  _OWORD *v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int128 v32; // xmm0
  _OWORD *v33; // rax
  _OWORD *v34; // r12
  __int128 v35; // xmm0
  unsigned __int64 v36; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 *v40; // r8
  __int64 v41; // r9
  _WORD *v42; // rsi
  signed __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // r13
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // r12
  _WORD *v59; // rsi
  signed __int64 v60; // rdx
  __int64 v61; // r13
  char v62; // r12
  _BYTE *v63; // r14
  __int64 v64; // r15
  __int64 v65; // rdx
  __int64 v66; // rcx
  _OWORD *v67; // r14
  _OWORD *v68; // rax
  _BYTE *v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int128 v73; // xmm0
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  char **v77; // rsi
  char v78; // [rsp+Ch] [rbp-43Ch]
  const char *v79; // [rsp+10h] [rbp-438h] BYREF
  __int64 v80; // [rsp+18h] [rbp-430h]
  _BYTE v81[40]; // [rsp+20h] [rbp-428h] BYREF
  __int128 v82; // [rsp+48h] [rbp-400h]
  __int128 v83; // [rsp+58h] [rbp-3F0h]
  const char **v84; // [rsp+68h] [rbp-3E0h] BYREF
  __int64 (__fastcall *v85)(); // [rsp+70h] [rbp-3D8h]
  __int128 *v86; // [rsp+78h] [rbp-3D0h]
  __int64 (__fastcall *v87)(); // [rsp+80h] [rbp-3C8h]
  __int64 v88; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 v89; // [rsp+90h] [rbp-3B8h]
  __int64 v90; // [rsp+98h] [rbp-3B0h]
  __int64 v91; // [rsp+A0h] [rbp-3A8h]
  __int64 v92; // [rsp+A8h] [rbp-3A0h] BYREF
  __int128 v93; // [rsp+B0h] [rbp-398h] BYREF
  __int128 v94; // [rsp+C0h] [rbp-388h]
  __int128 v95; // [rsp+D0h] [rbp-378h]
  __int128 v96; // [rsp+E0h] [rbp-368h]
  __int128 v97; // [rsp+F0h] [rbp-358h] BYREF
  __int64 v98; // [rsp+100h] [rbp-348h]
  char **v99; // [rsp+108h] [rbp-340h] BYREF
  __int64 v100; // [rsp+110h] [rbp-338h]
  const char ***v101; // [rsp+118h] [rbp-330h]
  __int64 v102; // [rsp+120h] [rbp-328h]
  __int64 v103; // [rsp+128h] [rbp-320h]
  __int128 v104; // [rsp+138h] [rbp-310h]
  __int64 (__fastcall **v105)(); // [rsp+148h] [rbp-300h]
  __int128 v106; // [rsp+150h] [rbp-2F8h]
  __int128 v107; // [rsp+160h] [rbp-2E8h]
  __int64 v108; // [rsp+170h] [rbp-2D8h]
  __int64 v109; // [rsp+178h] [rbp-2D0h]
  __int64 v110; // [rsp+188h] [rbp-2C0h]
  __int64 v111; // [rsp+190h] [rbp-2B8h]
  __int64 v112; // [rsp+198h] [rbp-2B0h] BYREF
  __int128 v113; // [rsp+1A0h] [rbp-2A8h]
  __int64 v114; // [rsp+1B0h] [rbp-298h]
  _QWORD v115[2]; // [rsp+1C0h] [rbp-288h] BYREF
  __int64 v116; // [rsp+1D0h] [rbp-278h] BYREF
  __int128 v117; // [rsp+1D8h] [rbp-270h]
  __int64 (__fastcall **v118)(); // [rsp+1E8h] [rbp-260h]
  _QWORD v119[2]; // [rsp+1F0h] [rbp-258h] BYREF
  _QWORD v120[2]; // [rsp+200h] [rbp-248h] BYREF
  _OWORD v121[2]; // [rsp+210h] [rbp-238h] BYREF
  _OWORD v122[2]; // [rsp+230h] [rbp-218h] BYREF
  _OWORD v123[2]; // [rsp+250h] [rbp-1F8h] BYREF
  _QWORD v124[4]; // [rsp+270h] [rbp-1D8h] BYREF
  _OWORD v125[2]; // [rsp+290h] [rbp-1B8h] BYREF
  __int128 v126; // [rsp+2B0h] [rbp-198h] BYREF
  __int128 v127; // [rsp+2C0h] [rbp-188h]
  __int64 v128; // [rsp+2D0h] [rbp-178h]
  __int64 v129; // [rsp+2D8h] [rbp-170h]
  _OWORD v130[2]; // [rsp+2E0h] [rbp-168h] BYREF
  _OWORD v131[2]; // [rsp+300h] [rbp-148h] BYREF
  __int128 v132; // [rsp+328h] [rbp-120h] BYREF
  __int64 v133; // [rsp+338h] [rbp-110h]
  __int128 v134; // [rsp+340h] [rbp-108h] BYREF
  __int64 v135; // [rsp+350h] [rbp-F8h]
  __int128 v136; // [rsp+358h] [rbp-F0h] BYREF
  __int64 v137; // [rsp+368h] [rbp-E0h]
  _QWORD v138[6]; // [rsp+370h] [rbp-D8h] BYREF
  _QWORD v139[6]; // [rsp+3A0h] [rbp-A8h] BYREF
  __int128 v140; // [rsp+3D0h] [rbp-78h] BYREF
  __int64 v141; // [rsp+3E0h] [rbp-68h]
  _BYTE v142[24]; // [rsp+3E8h] [rbp-60h] BYREF
  _BYTE v143[72]; // [rsp+400h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v81, a2, aEndian, 6LL);
  v79 = aEndian;
  v80 = 6LL;
  if ( *(_QWORD *)v81 )
  {
    v96 = v83;
    v95 = v82;
    v94 = *(_OWORD *)&v81[24];
    v93 = *(_OWORD *)&v81[8];
    v84 = &v79;
    v85 = <&T as core::fmt::Display>::fmt;
    v86 = &v93;
    v87 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v99 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v100 = 2LL;
    v103 = 0LL;
    v101 = &v84;
    v102 = 2LL;
    core::panicking::panic_fmt(&v99, &off_12E438, v8, v9, v10, v11);
  }
  if ( *(_QWORD *)&v81[8] )
  {
    v112 = *(_QWORD *)&v81[8];
    v12 = *(_QWORD *)(*(_QWORD *)&v81[8] + 8LL);
    if ( !v12 )
      goto LABEL_113;
    v13 = *(_QWORD *)(*(_QWORD *)&v81[8] + 16LL);
    if ( v13 < 0 )
      goto LABEL_113;
    if ( v13 != 3 )
    {
      if ( v13 == 6 && !(*(_DWORD *)v12 ^ 0x7474696C | *(unsigned __int16 *)(v12 + 4) ^ 0x656C) )
      {
        v78 = 0;
        goto LABEL_11;
      }
LABEL_18:
      v115[0] = &v112;
      v115[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v81 = &off_12E450;
      *(_QWORD *)&v81[8] = 1LL;
      *(_QWORD *)&v81[16] = v115;
      *(_QWORD *)&v81[24] = 1LL;
      *(_QWORD *)&v81[32] = 0LL;
      alloc::fmt::format::format_inner(&v132, v81);
      *(_QWORD *)&v81[16] = v133;
      *(_OWORD *)v81 = v132;
      *(_DWORD *)&v81[24] = 1;
      v23 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v23 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v24 = *(_OWORD *)v81;
      v23[1] = *(_OWORD *)&v81[16];
      *v23 = v24;
      *(_QWORD *)(a1 + 8) = v23;
      *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
      goto LABEL_23;
    }
    if ( *(_WORD *)v12 ^ 0x6962 | *(unsigned __int8 *)(v12 + 2) ^ 0x67 )
      goto LABEL_18;
    v14 = 1;
  }
  else
  {
    v14 = 2;
  }
  v78 = v14;
LABEL_11:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v81, a2, aSkipBytes_0, 10LL);
  v79 = aSkipBytes_0;
  v80 = 10LL;
  if ( *(_QWORD *)v81 )
  {
    v96 = v83;
    v95 = v82;
    v94 = *(_OWORD *)&v81[24];
    v93 = *(_OWORD *)&v81[8];
    v84 = &v79;
    v85 = <&T as core::fmt::Display>::fmt;
    v86 = &v93;
    v87 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v99 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v100 = 2LL;
    v103 = 0LL;
    v101 = &v84;
    v102 = 2LL;
    core::panicking::panic_fmt(&v99, &off_12E460, v15, v16, v17, v18);
  }
  v19 = *(_QWORD *)&v81[8];
  if ( !*(_QWORD *)&v81[8] )
  {
    v22 = 0LL;
LABEL_21:
    v91 = v22;
    uu_od::parse_inputs::parse_inputs((__int64)&v126, a2, (__int64)&off_12E478);
    v25 = v128;
    if ( v128 == 3 )
    {
      *(_QWORD *)&v81[16] = v127;
      *(_OWORD *)v81 = v126;
      *(_QWORD *)(a1 + 8) = uu_od::OdOptions::new::{{closure}}(v81);
      *(_QWORD *)(a1 + 16) = v26;
LABEL_23:
      *(_QWORD *)a1 = 2LL;
      return a1;
    }
    v107 = v127;
    v106 = v126;
    v108 = v128;
    v111 = v129;
    v109 = v129;
    if ( v128 == 2 )
    {
      v98 = v107;
      v97 = v106;
      v25 = 0LL;
      v90 = 0LL;
    }
    else
    {
      v114 = v107;
      v113 = v106;
      v91 = *((_QWORD *)&v107 + 1);
      v31 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
      if ( !v31 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      if ( (v31 & 7) != 0 )
        core::panicking::panic_misaligned_pointer_dereference(8LL, v31, &off_12E4A0);
      v32 = v113;
      *(_QWORD *)(v31 + 16) = v114;
      *(_OWORD *)v31 = v32;
      *(_QWORD *)&v97 = 1LL;
      *((_QWORD *)&v97 + 1) = v31;
      v98 = 1LL;
      LOBYTE(v31) = 1;
      v90 = v31;
    }
    uu_od::parse_formats::parse_format_flags(&v116, a3, a4);
    if ( v116 )
    {
      *(_QWORD *)&v81[16] = v118;
      *(_OWORD *)v81 = v117;
      *(_DWORD *)&v81[24] = 1;
      v33 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v34 = v33;
      if ( !v33 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v35 = *(_OWORD *)v81;
      v33[1] = *(_OWORD *)&v81[16];
      *v33 = v35;
      v36 = (unsigned __int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
      goto LABEL_38;
    }
    v34 = (_OWORD *)*((_QWORD *)&v117 + 1);
    v36 = (unsigned __int64)v118;
    if ( (_QWORD)v117 == 0x8000000000000000LL )
    {
LABEL_38:
      *(_QWORD *)(a1 + 8) = v34;
      *(_QWORD *)(a1 + 16) = v36;
      *(_QWORD *)a1 = 2LL;
LABEL_39:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v97);
      return a1;
    }
    v104 = v117;
    v105 = v118;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v81, a2, aWidth_0, 5LL);
    v79 = aWidth_0;
    v80 = 5LL;
    if ( *(_QWORD *)v81 )
    {
      v96 = v83;
      v95 = v82;
      v94 = *(_OWORD *)&v81[24];
      v93 = *(_OWORD *)&v81[8];
      v84 = &v79;
      v85 = <&T as core::fmt::Display>::fmt;
      v86 = &v93;
      v87 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v99 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v77 = &off_12E4B8;
      goto LABEL_124;
    }
    v89 = *(_QWORD *)&v81[8];
    if ( *(_QWORD *)&v81[8]
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                            a2,
                            aWidth_0,
                            5LL,
                            &off_12E4D0) == 2 )
    {
      v42 = *(_WORD **)(v89 + 8);
      if ( !v42 )
        goto LABEL_113;
      v43 = *(_QWORD *)(v89 + 16);
      if ( v43 < 0 )
        goto LABEL_113;
      uu_od::parse_nrofbytes::parse_number_of_bytes((__int64)v123, v42, v43);
      if ( *(_QWORD *)&v123[0] != 3LL )
      {
        v130[1] = v123[1];
        v130[0] = v123[0];
        v71 = *(_QWORD *)(v89 + 8);
        if ( v71 )
        {
          v72 = *(_QWORD *)(v89 + 16);
          if ( v72 >= 0 )
          {
            v67 = v130;
            uu_od::format_error_message(&v136, v130, v71, v72, aWidth_0, 5LL);
            *(_QWORD *)&v81[16] = v137;
            *(_OWORD *)v81 = v136;
            *(_DWORD *)&v81[24] = 1;
            v68 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            if ( !v68 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_101;
          }
        }
LABEL_113:
        core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
      }
      v44 = *((_QWORD *)&v123[0] + 1);
      v88 = *((_QWORD *)&v123[0] + 1);
    }
    else
    {
      v88 = 16LL;
      v44 = 16LL;
    }
    if ( v34 && ((unsigned __int8)v34 & 7) == 0 && v36 < 0x333333333333334LL )
    {
      if ( v36 )
      {
        v45 = 8 * v36;
        if ( (unsigned __int64)(5 * v45) < 0x28 )
          core::panicking::panic_nounwind(anon_8269adb5962d5e09057255cc669604eb_9_llvm_1060656746639540340, 69LL);
        v46 = 5 * v45 / 0x28uLL;
        v47 = v46 & 3;
        if ( v46 - 1 >= 3 )
        {
          v54 = v46 & 0xFFFFFFFFFFFFFFFCLL;
          v40 = (unsigned __int64 *)v34 + 17;
          v48 = 1LL;
          v49 = 0LL;
          do
          {
            if ( v48 <= *(v40 - 15) )
              v48 = *(v40 - 15);
            if ( v48 <= *(v40 - 10) )
              v48 = *(v40 - 10);
            if ( v48 <= *(v40 - 5) )
              v48 = *(v40 - 5);
            if ( v48 <= *v40 )
              v48 = *v40;
            v49 += 4LL;
            v40 += 20;
          }
          while ( v54 != v49 );
        }
        else
        {
          v48 = 1LL;
          v49 = 0LL;
        }
        if ( v47 )
        {
          v50 = (__int64)&v34[(unsigned __int64)(40 * v49) / 0x10 + 1];
          v51 = 5LL * (unsigned int)(8 * v47);
          v52 = 0LL;
          do
          {
            v40 = *(unsigned __int64 **)(v50 + v52);
            if ( v48 <= (unsigned __int64)v40 )
              v48 = *(_QWORD *)(v50 + v52);
            v52 += 40LL;
          }
          while ( v51 != v52 );
        }
        v92 = v48;
      }
      else
      {
        v92 = 1LL;
        v48 = 1LL;
      }
      if ( !v44 || (!((v48 | v44) >> 32) ? (v53 = (unsigned int)v44 % (unsigned int)v48) : (v53 = v44 % v48), v53) )
      {
        v55 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v56 = *(_QWORD *)(v55 + 8);
        v57 = *(_QWORD *)(v55 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v56, 1LL, 1LL, v57);
        v120[0] = v56;
        v120[1] = v57;
        v119[0] = v120;
        v119[1] = <&T as core::fmt::Display>::fmt;
        v138[0] = &unk_12E4E8;
        v138[1] = 2LL;
        v138[4] = 0LL;
        v138[2] = v119;
        v138[3] = 1LL;
        std::io::stdio::_eprint(v138);
        v124[0] = &v88;
        v124[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v124[2] = &v92;
        v124[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v139[0] = &off_12E508;
        v139[1] = 3LL;
        v139[4] = 0LL;
        v139[2] = v124;
        v139[3] = 2LL;
        std::io::stdio::_eprint(v139);
        v88 = v92;
      }
      LOBYTE(v89) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                      a2,
                      aOutputDuplicat_0,
                      17LL,
                      &off_12E538,
                      v40);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v81, a2, aReadBytes_0, 10LL);
      v79 = aReadBytes_0;
      v80 = 10LL;
      if ( *(_QWORD *)v81 )
      {
        v96 = v83;
        v95 = v82;
        v94 = *(_OWORD *)&v81[24];
        v93 = *(_OWORD *)&v81[8];
        v84 = &v79;
        v85 = <&T as core::fmt::Display>::fmt;
        v86 = &v93;
        v87 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v99 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
        v77 = &off_12E550;
        goto LABEL_124;
      }
      v58 = *(_QWORD *)&v81[8];
      if ( !*(_QWORD *)&v81[8] )
      {
        v61 = 0LL;
        goto LABEL_86;
      }
      v59 = *(_WORD **)(*(_QWORD *)&v81[8] + 8LL);
      if ( v59 )
      {
        v60 = *(_QWORD *)(*(_QWORD *)&v81[8] + 16LL);
        if ( v60 >= 0 )
        {
          uu_od::parse_nrofbytes::parse_number_of_bytes((__int64)v125, v59, v60);
          if ( *(_QWORD *)&v125[0] == 3LL )
          {
            v61 = 1LL;
            v110 = *((_QWORD *)&v125[0] + 1);
LABEL_86:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v81, a2, aAddressRadix_0, 13LL);
            v79 = aAddressRadix_0;
            v80 = 13LL;
            if ( !*(_QWORD *)v81 )
            {
              v62 = 2;
              if ( !*(_QWORD *)&v81[8] )
              {
LABEL_111:
                v76 = v88;
                *(_QWORD *)a1 = v61;
                *(_QWORD *)(a1 + 8) = v110;
                *(_QWORD *)(a1 + 16) = v25;
                *(_QWORD *)(a1 + 24) = v111;
                *(_OWORD *)(a1 + 32) = v97;
                *(_QWORD *)(a1 + 48) = v98;
                *(_OWORD *)(a1 + 56) = v104;
                *(_QWORD *)(a1 + 72) = v105;
                *(_QWORD *)(a1 + 80) = v91;
                *(_QWORD *)(a1 + 88) = v76;
                *(_BYTE *)(a1 + 96) = v89;
                *(_BYTE *)(a1 + 97) = v78;
                *(_BYTE *)(a1 + 98) = v62;
                return a1;
              }
              v63 = *(_BYTE **)(*(_QWORD *)&v81[8] + 8LL);
              v64 = *(_QWORD *)(*(_QWORD *)&v81[8] + 16LL);
              core::slice::raw::from_raw_parts::precondition_check(v63, 1LL, 1LL, v64);
              if ( v64 && v63 )
              {
                switch ( *v63 )
                {
                  case 'd':
                    v62 = 0;
                    goto LABEL_111;
                  case 'n':
                    v62 = 3;
                    goto LABEL_111;
                  case 'o':
                    goto LABEL_111;
                  case 'x':
                    v62 = 1;
                    goto LABEL_111;
                  default:
                    v69 = v142;
                    <str as alloc::string::ToString>::to_string(v142, aRadixMustBeOne, 33LL);
                    goto LABEL_97;
                }
              }
              v69 = v143;
              <str as alloc::string::ToString>::to_string(v143, aRadixCannotBeE, 54LL);
LABEL_97:
              *(_QWORD *)(a1 + 8) = uucore::mods::error::USimpleError::new(1LL, v69);
              *(_QWORD *)(a1 + 16) = v70;
              *(_QWORD *)a1 = 2LL;
              goto LABEL_102;
            }
            v96 = v83;
            v95 = v82;
            v94 = *(_OWORD *)&v81[24];
            v93 = *(_OWORD *)&v81[8];
            v84 = &v79;
            v85 = <&T as core::fmt::Display>::fmt;
            v86 = &v93;
            v87 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v99 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
            v77 = &off_12E568;
LABEL_124:
            v100 = 2LL;
            v103 = 0LL;
            v101 = &v84;
            v102 = 2LL;
            core::panicking::panic_fmt(&v99, v77, v38, v39, v40, v41);
          }
          v131[1] = v125[1];
          v131[0] = v125[0];
          v65 = *(_QWORD *)(v58 + 8);
          if ( v65 )
          {
            v66 = *(_QWORD *)(v58 + 16);
            if ( v66 >= 0 )
            {
              v67 = v131;
              uu_od::format_error_message(&v140, v131, v65, v66, aReadBytes_0, 10LL);
              *(_QWORD *)&v81[16] = v141;
              *(_OWORD *)v81 = v140;
              *(_DWORD *)&v81[24] = 1;
              v68 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              if ( !v68 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_101:
              v73 = *(_OWORD *)v81;
              v68[1] = *(_OWORD *)&v81[16];
              *v68 = v73;
              *(_QWORD *)(a1 + 8) = v68;
              *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
              *(_QWORD *)a1 = 2LL;
              core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(v67);
LABEL_102:
              if ( (_QWORD)v104 )
              {
                if ( (unsigned __int64)v104 >= 0x666666666666667LL )
                  core::panicking::panic_nounwind(
                    anon_8269adb5962d5e09057255cc669604eb_10_llvm_1060656746639540340,
                    69LL);
                v74 = 40 * v104;
                *(_QWORD *)v81 = *((_QWORD *)&v104 + 1);
                *(_QWORD *)&v81[8] = 8LL;
                v75 = 16LL;
              }
              else
              {
                v75 = 8LL;
                v74 = 0LL;
              }
              *(_QWORD *)&v81[v75] = v74;
              if ( *(_QWORD *)&v81[8] && *(_QWORD *)&v81[16] )
                _rust_dealloc(*(_QWORD *)v81, *(_QWORD *)&v81[16], *(_QWORD *)&v81[8]);
              goto LABEL_39;
            }
          }
        }
      }
    }
    goto LABEL_113;
  }
  v20 = *(_WORD **)(*(_QWORD *)&v81[8] + 8LL);
  if ( !v20 )
    goto LABEL_113;
  v21 = *(_QWORD *)(*(_QWORD *)&v81[8] + 16LL);
  if ( v21 < 0 )
    goto LABEL_113;
  uu_od::parse_nrofbytes::parse_number_of_bytes((__int64)v122, v20, v21);
  if ( *(_QWORD *)&v122[0] == 3LL )
  {
    v22 = *((_QWORD *)&v122[0] + 1);
    goto LABEL_21;
  }
  v121[1] = v122[1];
  v121[0] = v122[0];
  v27 = *(_QWORD *)(v19 + 8);
  if ( !v27 )
    goto LABEL_113;
  v28 = *(_QWORD *)(v19 + 16);
  if ( v28 < 0 )
    goto LABEL_113;
  uu_od::format_error_message(&v134, v121, v27, v28, aSkipBytes_0, 10LL);
  *(_QWORD *)&v81[16] = v135;
  *(_OWORD *)v81 = v134;
  *(_DWORD *)&v81[24] = 1;
  v29 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v29 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v30 = *(_OWORD *)v81;
  v29[1] = *(_OWORD *)&v81[16];
  *v29 = v30;
  *(_QWORD *)(a1 + 8) = v29;
  *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
  *(_QWORD *)a1 = 2LL;
  core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(v121);
  return a1;
}
