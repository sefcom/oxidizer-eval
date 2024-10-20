_QWORD *__fastcall uu_fmt::FmtOptions::from_matches(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  _OWORD *v10; // rax
  unsigned __int64 v11; // rsi
  __int128 v12; // xmm0
  _QWORD *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rcx
  const char *v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  unsigned __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  void *v33; // rax
  void *v34; // r12
  void *v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // r12
  __int64 v38; // rbx
  _QWORD *v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rsi
  const char **v43; // rax
  char v44; // [rsp+Ah] [rbp-18Eh]
  char v45; // [rsp+Bh] [rbp-18Dh]
  char v46; // [rsp+Ch] [rbp-18Ch]
  char v47; // [rsp+Dh] [rbp-18Bh]
  char v48; // [rsp+Eh] [rbp-18Ah]
  char flag; // [rsp+Fh] [rbp-189h]
  unsigned __int64 v50; // [rsp+10h] [rbp-188h]
  const char **v51; // [rsp+18h] [rbp-180h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+20h] [rbp-178h]
  __int128 *v53; // [rsp+28h] [rbp-170h]
  __int64 (__fastcall *v54)(); // [rsp+30h] [rbp-168h]
  __int128 v55; // [rsp+38h] [rbp-160h] BYREF
  __int128 v56; // [rsp+48h] [rbp-150h]
  __int64 v57; // [rsp+58h] [rbp-140h]
  __int128 v58; // [rsp+60h] [rbp-138h] BYREF
  __int128 v59; // [rsp+70h] [rbp-128h]
  __int64 v60; // [rsp+80h] [rbp-118h]
  char **v61; // [rsp+90h] [rbp-108h] BYREF
  __int64 v62; // [rsp+98h] [rbp-100h]
  const char ***v63; // [rsp+A0h] [rbp-F8h]
  __int64 v64; // [rsp+A8h] [rbp-F0h]
  __int64 v65; // [rsp+B0h] [rbp-E8h]
  _QWORD *v66; // [rsp+C0h] [rbp-D8h]
  int v67; // [rsp+C8h] [rbp-D0h]
  int v68; // [rsp+CCh] [rbp-CCh]
  const char *v69; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-C0h]
  const char *v71; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+E8h] [rbp-B0h]
  unsigned __int64 v73; // [rsp+F0h] [rbp-A8h]
  __int64 v74; // [rsp+F8h] [rbp-A0h]
  __int128 v75; // [rsp+100h] [rbp-98h] BYREF
  __int64 v76; // [rsp+110h] [rbp-88h]
  const char ***v77; // [rsp+118h] [rbp-80h]
  _QWORD v78[3]; // [rsp+120h] [rbp-78h] BYREF
  _QWORD v79[3]; // [rsp+138h] [rbp-60h] BYREF
  _QWORD v80[9]; // [rsp+150h] [rbp-48h] BYREF

  v66 = a1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTaggedParagrap, 16LL);
  v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCrownMargin, 12LL);
  v48 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPreserveHeader, 16LL);
  v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUniformSpacing, 15LL);
  v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuick, 5LL);
  v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSplitOnly, 10LL);
  v3 = a2[1];
  v4 = a2[2];
  if ( v4 )
  {
    v5 = 16 * v4;
    v6 = 0LL;
    do
    {
      if ( *(_QWORD *)(v3 + v6 + 8) == 12LL
        && !(**(_QWORD **)(v3 + v6) ^ 0x72702D7463617865LL | *(unsigned int *)(*(_QWORD *)(v3 + v6) + 8LL) ^ 0x78696665LL) )
      {
        LOBYTE(v6) = 1;
        v68 = v6;
        goto LABEL_8;
      }
      v6 += 16LL;
    }
    while ( v5 != v6 );
    v68 = 0;
LABEL_8:
    v7 = 0LL;
    while ( *(_QWORD *)(v3 + v7 + 8) != 11LL
         || **(_QWORD **)(v3 + v7) ^ 0x6572702D70696B73LL | *(_QWORD *)(*(_QWORD *)(v3 + v7) + 3LL) ^ 0x7869666572702D70LL )
    {
      v7 += 16LL;
      if ( v5 == v7 )
        goto LABEL_14;
    }
    LOBYTE(v5) = 1;
    v67 = v5;
  }
  else
  {
    v68 = 0;
LABEL_14:
    v67 = 0;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aPrefix, 6LL);
  v71 = aPrefix;
  v72 = 6LL;
  if ( (_DWORD)v55 != 2 )
  {
    v60 = v57;
    v59 = v56;
    v58 = v55;
    v51 = &v71;
    v52 = <&T as core::fmt::Display>::fmt;
    v53 = &v58;
    v54 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v61 = &anon_0313aafc768b88f41319cb91f569aaf5_4_llvm_15847019968616179910;
    v62 = 2LL;
    v65 = 0LL;
    v63 = &v51;
    v64 = 2LL;
    core::panicking::panic_fmt(&v61, &anon_0313aafc768b88f41319cb91f569aaf5_6_llvm_15847019968616179910);
  }
  if ( *((_QWORD *)&v55 + 1) )
    <alloc::string::String as core::clone::Clone>::clone(&v75);
  else
    *(_QWORD *)&v75 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aSkipPrefix, 11LL);
  v71 = aSkipPrefix;
  v72 = 11LL;
  if ( (_DWORD)v55 != 2 )
  {
    v60 = v57;
    v59 = v56;
    v58 = v55;
    v51 = &v71;
    v52 = <&T as core::fmt::Display>::fmt;
    v53 = &v58;
    v54 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v61 = &anon_0313aafc768b88f41319cb91f569aaf5_4_llvm_15847019968616179910;
    v62 = 2LL;
    v65 = 0LL;
    v63 = &v51;
    v64 = 2LL;
    core::panicking::panic_fmt(&v61, &anon_0313aafc768b88f41319cb91f569aaf5_6_llvm_15847019968616179910);
  }
  if ( *((_QWORD *)&v55 + 1) )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v61);
    v50 = (unsigned __int64)v61;
    v74 = v62;
    v77 = v63;
  }
  else
  {
    v50 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aWidth, 5LL);
  v69 = aWidth;
  v70 = 5LL;
  if ( (_DWORD)v55 != 2 )
    goto LABEL_84;
  if ( !*((_QWORD *)&v55 + 1) )
  {
    v14 = 1LL;
    if ( !v4 )
      goto LABEL_42;
    v15 = 16 * v4;
    v16 = 40LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    while ( *(_QWORD *)(v3 + v18 + 8) != 5LL
         || **(_DWORD **)(v3 + v18) ^ 0x656C6966 | *(unsigned __int8 *)(*(_QWORD *)(v3 + v18) + 4LL) ^ 0x73 )
    {
      v18 += 16LL;
      v16 += 104LL;
      ++v19;
      if ( v15 == v18 )
        goto LABEL_43;
    }
    v20 = a2[5];
    if ( v19 >= v20 )
      core::panicking::panic_bounds_check(
        v19,
        v20,
        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
        v16);
    v21 = a2[4];
    if ( !*(_QWORD *)(v21 + v16) || **(_QWORD **)(v21 + v16 - 8) != 1LL )
      goto LABEL_42;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aFiles, 5LL);
    v69 = aFiles;
    v70 = 5LL;
    if ( (_DWORD)v55 == 2 )
    {
      if ( !*((_QWORD *)&v55 + 1) )
        core::option::unwrap_failed(&off_EC310, a2);
      v22 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 16LL);
      if ( v22 )
      {
        v23 = *(_BYTE **)(*((_QWORD *)&v55 + 1) + 8LL);
        if ( *v23 == 45 )
        {
          core::num::<impl core::str::traits::FromStr for usize>::from_str(&v61, v23 + 1, v22 - 1);
          v17 = (const char *)v62;
          v72 = (unsigned __int8)v61 ^ 1LL;
          v14 = 2LL;
LABEL_43:
          (&v71)[v14] = v17;
          v25 = v72;
          v24 = v73;
          goto LABEL_44;
        }
      }
LABEL_42:
      v17 = 0LL;
      goto LABEL_43;
    }
LABEL_84:
    v60 = v57;
    v59 = v56;
    v58 = v55;
    v43 = &v69;
    goto LABEL_88;
  }
  v8 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8LL);
  v9 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 16LL);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v69, v8, v9);
  if ( (_BYTE)v69 )
  {
    *(_QWORD *)&v55 = 0LL;
    *((_QWORD *)&v55 + 1) = v8;
    *(_QWORD *)&v56 = v9;
    BYTE8(v56) = 1;
    v51 = (const char **)&v55;
    v52 = <os_display::Quoted as core::fmt::Display>::fmt;
    v61 = &off_EC300;
    v62 = 1LL;
    v65 = 0LL;
    v63 = &v51;
    v64 = 1LL;
    alloc::fmt::format::format_inner(&v58, &v61);
    DWORD2(v59) = 1;
    v10 = (_OWORD *)_rust_alloc(32LL, 8LL);
    v11 = v50;
    if ( !v10 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v12 = v58;
    v10[1] = v59;
    *v10 = v12;
    v13 = v66;
    v66[1] = v10;
    v13[2] = &off_EC1A0;
    *v13 = 0x8000000000000001LL;
    goto LABEL_75;
  }
  v24 = v70;
  v25 = 1LL;
LABEL_44:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aGoal, 4LL);
  v71 = aGoal;
  v72 = 4LL;
  if ( (_DWORD)v55 != 2 )
  {
LABEL_87:
    v60 = v57;
    v59 = v56;
    v58 = v55;
    v43 = &v71;
LABEL_88:
    v51 = v43;
    v52 = <&T as core::fmt::Display>::fmt;
    v53 = &v58;
    v54 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v61 = &anon_0313aafc768b88f41319cb91f569aaf5_4_llvm_15847019968616179910;
    v62 = 2LL;
    v65 = 0LL;
    v63 = &v51;
    v64 = 2LL;
    core::panicking::panic_fmt(&v61, &anon_0313aafc768b88f41319cb91f569aaf5_6_llvm_15847019968616179910);
  }
  if ( !*((_QWORD *)&v55 + 1) )
  {
    if ( !v25 )
    {
      v69 = (_BYTE *)(&qword_48 + 3);
      v32 = 70LL;
      v24 = 75LL;
LABEL_69:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aTabWidth, 9LL);
      v71 = aTabWidth;
      v72 = 9LL;
      if ( (_DWORD)v55 == 2 )
      {
        if ( *((_QWORD *)&v55 + 1) )
        {
          v37 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8LL);
          v38 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 16LL);
          core::num::<impl core::str::traits::FromStr for usize>::from_str(&v51, v37, v38);
          if ( (_BYTE)v51 )
          {
            LOBYTE(v71) = BYTE1(v51);
            *(_QWORD *)&v58 = 0LL;
            *((_QWORD *)&v58 + 1) = v37;
            *(_QWORD *)&v59 = v38;
            BYTE8(v59) = 1;
            *(_QWORD *)&v55 = &v58;
            *((_QWORD *)&v55 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v56 = &v71;
            *((_QWORD *)&v56 + 1) = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
            v61 = &off_EC210;
            v62 = 2LL;
            v65 = 0LL;
            v63 = (const char ***)&v55;
            v64 = 2LL;
            alloc::fmt::format::format_inner(v80, &v61);
            v28 = v80[0];
            v29 = v80[1];
            v30 = v80[2];
            v31 = _rust_alloc(32LL, 8LL);
            if ( !v31 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_73;
          }
          v40 = (__int64)v52;
        }
        else
        {
          v40 = 8LL;
        }
        v41 = v66;
        v66[2] = v76;
        *(_OWORD *)v41 = v75;
        v41[3] = v50;
        v41[4] = v74;
        v41[5] = v77;
        v41[6] = v24;
        v41[7] = v32;
        v41[8] = (v40 == 0) + v40;
        *((_BYTE *)v41 + 72) = v46 & (v44 ^ 1);
        *((_BYTE *)v41 + 73) = ((v44 | v46) ^ 1) & flag;
        *((_BYTE *)v41 + 74) = v48;
        *((_BYTE *)v41 + 75) = v44;
        *((_BYTE *)v41 + 76) = v68;
        *((_BYTE *)v41 + 77) = v67;
        *((_BYTE *)v41 + 78) = v47;
        *((_BYTE *)v41 + 79) = v45;
        return v66;
      }
      goto LABEL_87;
    }
    v32 = 93 * v24 / 0x64;
    if ( v32 <= (v24 != 0) )
      v32 = v24 != 0;
LABEL_58:
    v69 = (const char *)v24;
    if ( v24 > 0x9C4 )
    {
      *(_QWORD *)&v58 = &v69;
      *((_QWORD *)&v58 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v61 = &off_EC230;
      v62 = 2LL;
      v65 = 0LL;
      v63 = (const char ***)&v58;
      v64 = 1LL;
      alloc::fmt::format::format_inner(v79, &v61);
      v28 = v79[0];
      v29 = v79[1];
      v30 = v79[2];
      v31 = _rust_alloc(32LL, 8LL);
      if ( !v31 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_73;
    }
    goto LABEL_69;
  }
  v26 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8LL);
  v27 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 16LL);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v51, v26, v27);
  if ( (_BYTE)v51 )
  {
    *(_QWORD *)&v58 = 0LL;
    *((_QWORD *)&v58 + 1) = v26;
    *(_QWORD *)&v59 = v27;
    BYTE8(v59) = 1;
    *(_QWORD *)&v55 = &v58;
    *((_QWORD *)&v55 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v61 = &off_EC158;
    v62 = 1LL;
    v65 = 0LL;
    v63 = (const char ***)&v55;
    v64 = 1LL;
    alloc::fmt::format::format_inner(v78, &v61);
    v28 = v78[0];
    v29 = v78[1];
    v30 = v78[2];
    v31 = _rust_alloc(32LL, 8LL);
    if ( !v31 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_73:
    *(_QWORD *)v31 = v28;
    *(_QWORD *)(v31 + 8) = v29;
    *(_QWORD *)(v31 + 16) = v30;
    goto LABEL_74;
  }
  v32 = (unsigned __int64)v52;
  if ( !v25 )
  {
    if ( (unsigned __int64)v52 > 0x4B )
    {
      v35 = (void *)_rust_alloc(34LL, 1LL);
      if ( v35 )
      {
        v34 = v35;
        qmemcpy(v35, "GOAL cannot be greater than WIDTH.", 34);
        v31 = _rust_alloc(32LL, 8LL);
        if ( !v31 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_65;
      }
LABEL_92:
      alloc::raw_vec::handle_error(1LL, 34LL);
    }
    v36 = (24665 * (unsigned int)(unsigned __int16)(100 * (_WORD)v52)) >> 16;
    v24 = (unsigned __int64)v52 + 3;
    if ( (v36
        + ((unsigned __int16)(100 * (_WORD)v52 - ((24665 * (unsigned int)(unsigned __int16)(100 * (_WORD)v52)) >> 16)) >> 1)) >> 6 > (unsigned __int64)v52 + 3 )
      v24 = (v36
           + ((unsigned __int16)(100 * (_WORD)v52 - ((24665 * (unsigned int)(unsigned __int16)(100 * (_WORD)v52)) >> 16)) >> 1)) >> 6;
    v69 = (const char *)v24;
    goto LABEL_69;
  }
  if ( (unsigned __int64)v52 <= v24 )
    goto LABEL_58;
  v33 = (void *)_rust_alloc(34LL, 1LL);
  if ( !v33 )
    goto LABEL_92;
  v34 = v33;
  qmemcpy(v33, "GOAL cannot be greater than WIDTH.", 34);
  v31 = _rust_alloc(32LL, 8LL);
  if ( !v31 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_65:
  *(_QWORD *)v31 = 34LL;
  *(_QWORD *)(v31 + 8) = v34;
  *(_QWORD *)(v31 + 16) = 34LL;
LABEL_74:
  *(_DWORD *)(v31 + 24) = 1;
  v39 = v66;
  v66[1] = v31;
  v39[2] = &off_EC1A0;
  *v39 = 0x8000000000000001LL;
  v11 = v50;
LABEL_75:
  if ( 2 * v11 )
    _rust_dealloc(v74, v11, 1LL);
  if ( (_QWORD)v75 != 0x8000000000000000LL && (_QWORD)v75 )
    _rust_dealloc(*((_QWORD *)&v75 + 1), v75, 1LL);
  return v66;
}
