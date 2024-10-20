__int64 __fastcall uu_fmt::FmtOptions::from_matches(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // rdx
  _BOOL8 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r12
  bool v12; // cf
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // r13
  __int64 (__fastcall **v21)(); // rdx
  unsigned __int128 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm0
  unsigned int v34; // ecx
  char **v35; // rsi
  __int64 v36; // rdx
  const char ***v37; // rax
  __int64 v38; // rcx
  char ***v39; // rdi
  char v40; // [rsp+7h] [rbp-391h]
  char v41; // [rsp+8h] [rbp-390h]
  char v42; // [rsp+9h] [rbp-38Fh]
  char v43; // [rsp+Ah] [rbp-38Eh]
  char v44; // [rsp+Bh] [rbp-38Dh]
  char v45; // [rsp+Ch] [rbp-38Ch]
  char flag; // [rsp+Dh] [rbp-38Bh]
  char v47; // [rsp+Eh] [rbp-38Ah]
  char v48; // [rsp+Fh] [rbp-389h] BYREF
  _BYTE v49[40]; // [rsp+10h] [rbp-388h] BYREF
  __int128 v50; // [rsp+38h] [rbp-360h]
  __int128 v51; // [rsp+48h] [rbp-350h]
  const char **v52; // [rsp+60h] [rbp-338h] BYREF
  __int64 (__fastcall *v53)(); // [rsp+68h] [rbp-330h]
  __int128 *v54; // [rsp+70h] [rbp-328h]
  __int64 (__fastcall *v55)(); // [rsp+78h] [rbp-320h]
  const char *v56; // [rsp+80h] [rbp-318h] BYREF
  __int64 v57; // [rsp+88h] [rbp-310h]
  __int64 v58; // [rsp+90h] [rbp-308h]
  char v59; // [rsp+98h] [rbp-300h]
  char **v60; // [rsp+A0h] [rbp-2F8h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-2F0h]
  const char ***v62; // [rsp+B0h] [rbp-2E8h]
  __int64 v63; // [rsp+B8h] [rbp-2E0h]
  __int64 v64; // [rsp+C0h] [rbp-2D8h]
  __int128 v65; // [rsp+D0h] [rbp-2C8h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-2B8h]
  __int128 v67; // [rsp+F0h] [rbp-2A8h]
  __int128 v68; // [rsp+100h] [rbp-298h]
  __int64 v69; // [rsp+118h] [rbp-280h] BYREF
  __int128 v70; // [rsp+120h] [rbp-278h] BYREF
  __int64 v71; // [rsp+130h] [rbp-268h] BYREF
  __int128 v72; // [rsp+140h] [rbp-258h] BYREF
  __int64 v73; // [rsp+150h] [rbp-248h] BYREF
  __int64 v74; // [rsp+158h] [rbp-240h] BYREF
  const char *v75; // [rsp+160h] [rbp-238h] BYREF
  __int64 v76; // [rsp+168h] [rbp-230h]
  _QWORD v77[2]; // [rsp+170h] [rbp-228h] BYREF
  _BYTE v78[8]; // [rsp+180h] [rbp-218h] BYREF
  __int64 v79; // [rsp+188h] [rbp-210h]
  _QWORD v80[2]; // [rsp+190h] [rbp-208h] BYREF
  char v81[8]; // [rsp+1A0h] [rbp-1F8h] BYREF
  unsigned __int64 v82; // [rsp+1A8h] [rbp-1F0h]
  _QWORD v83[2]; // [rsp+1B0h] [rbp-1E8h] BYREF
  _QWORD v84[2]; // [rsp+1C0h] [rbp-1D8h] BYREF
  char v85[8]; // [rsp+1D0h] [rbp-1C8h] BYREF
  unsigned __int64 v86; // [rsp+1D8h] [rbp-1C0h]
  _QWORD v87[2]; // [rsp+1E0h] [rbp-1B8h] BYREF
  int v88; // [rsp+1F0h] [rbp-1A8h] BYREF
  unsigned __int64 v89; // [rsp+1F8h] [rbp-1A0h]
  __int128 v90; // [rsp+200h] [rbp-198h]
  __int64 v91; // [rsp+210h] [rbp-188h]
  __int128 v92; // [rsp+218h] [rbp-180h]
  __int64 v93; // [rsp+228h] [rbp-170h]
  _QWORD v94[3]; // [rsp+238h] [rbp-160h] BYREF
  char v95; // [rsp+250h] [rbp-148h]
  _QWORD v96[4]; // [rsp+258h] [rbp-140h] BYREF
  _QWORD v97[3]; // [rsp+278h] [rbp-120h] BYREF
  char v98; // [rsp+290h] [rbp-108h]
  _QWORD v99[8]; // [rsp+298h] [rbp-100h] BYREF
  __int128 v100; // [rsp+2D8h] [rbp-C0h] BYREF
  __int64 v101; // [rsp+2E8h] [rbp-B0h]
  __int128 v102; // [rsp+2F0h] [rbp-A8h] BYREF
  __int64 v103; // [rsp+300h] [rbp-98h]
  __int128 v104; // [rsp+308h] [rbp-90h] BYREF
  __int64 v105; // [rsp+318h] [rbp-80h]
  __int128 v106; // [rsp+320h] [rbp-78h] BYREF
  __int64 v107; // [rsp+330h] [rbp-68h]
  char **v108; // [rsp+338h] [rbp-60h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTaggedParagrap, 16LL, &off_1143A8);
  v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCrownMargin, 12LL, &off_1143C0);
  v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPreserveHeader, 16LL, &off_1143D8);
  v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUniformSpacing, 15LL, &off_1143F0);
  v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuick, 5LL, &off_114408);
  v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSplitOnly, 10LL, &off_114420);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(v49, a2, aExactPrefix, 12LL);
  v56 = aExactPrefix;
  v57 = 12LL;
  if ( (v49[0] & 1) != 0
    || (v41 = v49[1],
        clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(v49, a2, aSkipPrefix, 11LL),
        v56 = aSkipPrefix,
        v57 = 11LL,
        (v49[0] & 1) != 0) )
  {
    v68 = v51;
    v67 = v50;
    v66 = *(_OWORD *)&v49[24];
    v65 = *(_OWORD *)&v49[8];
    v52 = &v56;
    v53 = <&T as core::fmt::Display>::fmt;
    v54 = &v65;
    v55 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v60 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v61 = 2LL;
    v64 = 0LL;
    v62 = &v52;
    v63 = 2LL;
    core::panicking::panic_fmt(&v60, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
  }
  v40 = v49[1];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v49, a2, aPrefix, 6LL);
  v56 = aPrefix;
  v57 = 6LL;
  if ( *(_QWORD *)v49 )
  {
    v68 = v51;
    v67 = v50;
    v66 = *(_OWORD *)&v49[24];
    v65 = *(_OWORD *)&v49[8];
    v52 = &v56;
    v53 = <&T as core::fmt::Display>::fmt;
    v54 = &v65;
    v55 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v60 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v61 = 2LL;
    v64 = 0LL;
    v62 = &v52;
    v63 = 2LL;
    core::panicking::panic_fmt(&v60, &off_114438);
  }
  if ( *(_QWORD *)&v49[8] )
  {
    <alloc::string::String as core::clone::Clone>::clone(v49);
    v71 = *(_QWORD *)&v49[16];
    v70 = *(_OWORD *)v49;
  }
  else
  {
    *(_QWORD *)&v70 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v49, a2, aSkipPrefix, 11LL);
  v56 = aSkipPrefix;
  v57 = 11LL;
  if ( *(_QWORD *)v49 )
  {
    v68 = v51;
    v67 = v50;
    v66 = *(_OWORD *)&v49[24];
    v65 = *(_OWORD *)&v49[8];
    v52 = &v56;
    v53 = <&T as core::fmt::Display>::fmt;
    v54 = &v65;
    v55 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v60 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v61 = 2LL;
    v64 = 0LL;
    v62 = &v52;
    v63 = 2LL;
    core::panicking::panic_fmt(&v60, &off_114450);
  }
  if ( *(_QWORD *)&v49[8] )
  {
    <alloc::string::String as core::clone::Clone>::clone(v49);
    v73 = *(_QWORD *)&v49[16];
    v72 = *(_OWORD *)v49;
  }
  else
  {
    *(_QWORD *)&v72 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v49, a2, aWidth, 5LL);
  v75 = aWidth;
  v76 = 5LL;
  if ( *(_QWORD *)v49 )
  {
    v68 = v51;
    v67 = v50;
    v66 = *(_OWORD *)&v49[24];
    v65 = *(_OWORD *)&v49[8];
    v52 = &v75;
    v53 = <&T as core::fmt::Display>::fmt;
    v54 = &v65;
    v55 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v60 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v35 = &off_1146B8;
LABEL_85:
    v37 = &v52;
    v38 = 2LL;
    v39 = &v60;
    v36 = 2LL;
LABEL_86:
    v39[1] = (char **)v38;
    v39[4] = 0LL;
    v39[2] = (char **)v37;
    v39[3] = (char **)v36;
    core::panicking::panic_fmt(v39, v35);
  }
  v3 = *(_QWORD *)&v49[8];
  if ( *(_QWORD *)&v49[8] )
  {
    v4 = *(_QWORD *)(*(_QWORD *)&v49[8] + 8LL);
    if ( !v4 )
      goto LABEL_77;
    v5 = *(_QWORD *)(*(_QWORD *)&v49[8] + 16LL);
    if ( v5 < 0 )
      goto LABEL_77;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v85, v4, v5);
    if ( (v85[0] & 1) != 0 )
    {
      v14 = *(_QWORD *)(v3 + 8);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v3 + 16);
        if ( v15 >= 0 )
        {
          v56 = 0LL;
          v57 = v14;
          v58 = v15;
          v59 = 1;
          v87[0] = &v56;
          v87[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v49 = &off_1146D0;
          *(_QWORD *)&v49[8] = 1LL;
          *(_QWORD *)&v49[16] = v87;
          *(_QWORD *)&v49[24] = 1LL;
          *(_QWORD *)&v49[32] = 0LL;
          alloc::fmt::format::format_inner(&v106, v49);
          *(_QWORD *)&v49[16] = v107;
          *(_OWORD *)v49 = v106;
          *(_DWORD *)&v49[24] = 1;
          v16 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          if ( !v16 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          goto LABEL_65;
        }
      }
      goto LABEL_77;
    }
    v6 = 1LL;
    v3 = v86;
  }
  else
  {
    v6 = 0LL;
    if ( clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFiles, 5LL, &off_1146E0) == 1 && v7 == 1 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v49, a2, aFiles, 5LL);
      v75 = aFiles;
      v76 = 5LL;
      if ( *(_QWORD *)v49 )
      {
        v68 = v51;
        v67 = v50;
        v66 = *(_OWORD *)&v49[24];
        v65 = *(_OWORD *)&v49[8];
        v52 = &v75;
        v53 = <&T as core::fmt::Display>::fmt;
        v54 = &v65;
        v55 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v60 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
        v35 = &off_1146F8;
        goto LABEL_85;
      }
      if ( !*(_QWORD *)&v49[8] )
        core::option::unwrap_failed(&off_114710);
      v3 = *(_QWORD *)(*(_QWORD *)&v49[8] + 8LL);
      if ( !v3 )
        goto LABEL_77;
      v8 = *(_QWORD *)(*(_QWORD *)&v49[8] + 16LL);
      if ( v8 < 0 )
        goto LABEL_77;
      *(_DWORD *)v49 = 0;
      v9 = core::char::methods::encode_utf8_raw(45LL, v49, 4LL);
      v11 = v10;
      if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v3, v8, v9, v10) )
      {
        v12 = v8 < v11;
        v13 = v8 - v11;
        if ( v12 )
          core::panicking::panic_nounwind(anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_39_llvm_17209501424320820274, 102LL);
        core::num::<impl core::str::traits::FromStr for usize>::from_str(&v88, v11 + v3, v13);
        v3 = v89;
        v6 = (v88 & 1) == 0;
      }
      else
      {
        v6 = 0LL;
      }
    }
  }
  v80[0] = v6;
  v80[1] = v3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v49, a2, aGoalblue, 4LL);
  v56 = aGoalblue;
  v57 = 4LL;
  if ( *(_QWORD *)v49 )
  {
    v68 = v51;
    v67 = v50;
    v66 = *(_OWORD *)&v49[24];
    v65 = *(_OWORD *)&v49[8];
    v52 = &v56;
    v53 = <&T as core::fmt::Display>::fmt;
    v54 = &v65;
    v55 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v60 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v35 = &off_114468;
    goto LABEL_85;
  }
  v17 = *(_QWORD *)&v49[8];
  if ( *(_QWORD *)&v49[8] )
  {
    v18 = *(_QWORD *)(*(_QWORD *)&v49[8] + 8LL);
    if ( !v18 )
      goto LABEL_77;
    v19 = *(_QWORD *)(*(_QWORD *)&v49[8] + 16LL);
    if ( v19 < 0 )
      goto LABEL_77;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v81, v18, v19);
    if ( (v81[0] & 1) != 0 )
    {
      v23 = *(_QWORD *)(v17 + 8);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v17 + 16);
        if ( v24 >= 0 )
        {
          v94[0] = 0LL;
          v94[1] = v23;
          v94[2] = v24;
          v95 = 1;
          v83[0] = v94;
          v83[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v49 = &off_114480;
          *(_QWORD *)&v49[8] = 1LL;
          *(_QWORD *)&v49[16] = v83;
          *(_QWORD *)&v49[24] = 1LL;
          *(_QWORD *)&v49[32] = 0LL;
          alloc::fmt::format::format_inner(&v100, v49);
          *(_QWORD *)&v49[16] = v101;
          *(_OWORD *)v49 = v100;
          *(_DWORD *)&v49[24] = 1;
          v16 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          if ( !v16 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          goto LABEL_65;
        }
      }
      goto LABEL_77;
    }
    v20 = v82;
    v77[1] = v82;
    v77[0] = 1LL;
    if ( v6 )
    {
      if ( v82 > v3 )
      {
LABEL_38:
        v16 = (_OWORD *)uucore::mods::error::USimpleError::new(1LL, aGoalCannotBeGr, 34LL);
        goto LABEL_66;
      }
    }
    else
    {
      if ( v82 > 0x4B )
        goto LABEL_38;
      v3 = v82 + 3;
      v34 = (24665 * (unsigned int)(unsigned __int16)(100 * v82)) >> 16;
      if ( (v34 + ((unsigned __int16)(100 * v82 - ((24665 * (unsigned int)(unsigned __int16)(100 * v82)) >> 16)) >> 1)) >> 6 > v82 + 3 )
        v3 = (v34 + ((unsigned __int16)(100 * v82 - ((24665 * (unsigned int)(unsigned __int16)(100 * v82)) >> 16)) >> 1)) >> 6;
    }
  }
  else
  {
    v77[0] = 0LL;
    if ( !v6 )
    {
      v69 = 75LL;
      v74 = 70LL;
      v20 = 70LL;
LABEL_52:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v49, a2, aTabWidth, 9LL);
      v56 = aTabWidth;
      v57 = 9LL;
      if ( !*(_QWORD *)v49 )
      {
        v25 = *(_QWORD *)&v49[8];
        if ( !*(_QWORD *)&v49[8] )
        {
          v28 = 8LL;
          goto LABEL_59;
        }
        v26 = *(_QWORD *)(*(_QWORD *)&v49[8] + 8LL);
        if ( v26 )
        {
          v27 = *(_QWORD *)(*(_QWORD *)&v49[8] + 16LL);
          if ( v27 >= 0 )
          {
            core::num::<impl core::str::traits::FromStr for usize>::from_str(v78, v26, v27);
            if ( (v78[0] & 1) == 0 )
            {
              v28 = (v79 == 0) + v79;
LABEL_59:
              v91 = v71;
              v90 = v70;
              v93 = v73;
              v92 = v72;
              v29 = v69;
              *(_OWORD *)a1 = v70;
              *(_QWORD *)(a1 + 16) = v91;
              *(_OWORD *)(a1 + 24) = v92;
              *(_QWORD *)(a1 + 40) = v93;
              *(_QWORD *)(a1 + 48) = v29;
              *(_QWORD *)(a1 + 56) = v20;
              *(_QWORD *)(a1 + 64) = v28;
              *(_BYTE *)(a1 + 72) = v44 & ~v42;
              *(_BYTE *)(a1 + 73) = flag & ~(v44 | v42);
              *(_BYTE *)(a1 + 74) = v47;
              *(_BYTE *)(a1 + 75) = v42;
              *(_BYTE *)(a1 + 76) = v41 & 1;
              *(_BYTE *)(a1 + 77) = v40 & 1;
              *(_BYTE *)(a1 + 78) = v45;
              *(_BYTE *)(a1 + 79) = v43;
              return a1;
            }
            v48 = v78[1];
            v30 = *(_QWORD *)(v25 + 8);
            if ( v30 )
            {
              v31 = *(_QWORD *)(v25 + 16);
              if ( v31 >= 0 )
              {
                v97[0] = 0LL;
                v97[1] = v30;
                v97[2] = v31;
                v98 = 1;
                v96[0] = v97;
                v96[1] = <os_display::Quoted as core::fmt::Display>::fmt;
                v96[2] = &v48;
                v96[3] = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
                *(_QWORD *)v49 = &off_114528;
                *(_QWORD *)&v49[8] = 2LL;
                *(_QWORD *)&v49[16] = v96;
                *(_QWORD *)&v49[24] = 2LL;
                *(_QWORD *)&v49[32] = 0LL;
                alloc::fmt::format::format_inner(&v104, v49);
                *(_QWORD *)&v49[16] = v105;
                *(_OWORD *)v49 = v104;
                *(_DWORD *)&v49[24] = 1;
                v16 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                if ( !v16 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                goto LABEL_65;
              }
            }
          }
        }
LABEL_77:
        core::panicking::panic_nounwind(anon_295321c1b9ac16da4afd3a0029311bec_36_llvm_7620956122088650080, 162LL);
      }
      v68 = v51;
      v67 = v50;
      v66 = *(_OWORD *)&v49[24];
      v65 = *(_OWORD *)&v49[8];
      v52 = &v56;
      v53 = <&T as core::fmt::Display>::fmt;
      v54 = &v65;
      v55 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v60 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v35 = &off_114510;
      goto LABEL_85;
    }
    v22 = 0x5D * (unsigned __int128)v3;
    if ( !is_mul_ok(0x5DuLL, v3) )
      core::panicking::panic_const::panic_const_mul_overflow(&off_114490, a2, *((_QWORD *)&v22 + 1));
    v20 = (unsigned __int64)v22 / 0x64;
    if ( (unsigned __int64)v22 / 0x64 <= (v3 != 0) )
      v20 = v3 != 0;
  }
  v69 = v3;
  v74 = v20;
  if ( v3 < v20 )
  {
    v99[0] = &v74;
    v99[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v99[2] = &v69;
    v99[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v99[4] = v80;
    v99[5] = <core::option::Option<T> as core::fmt::Debug>::fmt;
    v99[6] = v77;
    v99[7] = <core::option::Option<T> as core::fmt::Debug>::fmt;
    v108 = &off_1144A8;
    v35 = &off_1144F8;
    v36 = 4LL;
    v37 = (const char ***)v99;
    v38 = 5LL;
    v39 = &v108;
    goto LABEL_86;
  }
  if ( v3 <= 0x9C4 )
    goto LABEL_52;
  v84[0] = &v69;
  v84[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)v49 = &off_114548;
  *(_QWORD *)&v49[8] = 2LL;
  *(_QWORD *)&v49[16] = v84;
  *(_QWORD *)&v49[24] = 1LL;
  *(_QWORD *)&v49[32] = 0LL;
  alloc::fmt::format::format_inner(&v102, v49);
  *(_QWORD *)&v49[16] = v103;
  *(_OWORD *)v49 = v102;
  *(_DWORD *)&v49[24] = 1;
  v16 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v16 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_65:
  v32 = *(_OWORD *)v49;
  v16[1] = *(_OWORD *)&v49[16];
  *v16 = v32;
  v21 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
LABEL_66:
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)(a1 + 16) = v21;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  if ( (_QWORD)v72 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v49, &v72);
    if ( *(_QWORD *)&v49[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v73,
        *(_QWORD *)v49,
        *(_QWORD *)&v49[8],
        *(_QWORD *)&v49[16]);
  }
  if ( (_QWORD)v70 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v49, &v70);
    if ( *(_QWORD *)&v49[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v71,
        *(_QWORD *)v49,
        *(_QWORD *)&v49[8],
        *(_QWORD *)&v49[16]);
  }
  return a1;
}
