char *__fastcall uu_numfmt::parse_options(char *dest, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  char v5; // bp
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rsi
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  signed __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 one; // rax
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int64 v33; // rax
  const char *v34; // rsi
  __int64 v35; // rdx
  __int64 *v36; // rcx
  __int128 *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // r14
  char v49; // [rsp+Eh] [rbp-49Ah] BYREF
  char v50; // [rsp+Fh] [rbp-499h]
  char v51; // [rsp+10h] [rbp-498h] BYREF
  const char *v52; // [rsp+18h] [rbp-490h] BYREF
  __int64 v53; // [rsp+20h] [rbp-488h]
  const char **v54; // [rsp+28h] [rbp-480h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+30h] [rbp-478h]
  __int128 *v56; // [rsp+38h] [rbp-470h]
  __int64 (__fastcall *v57)(); // [rsp+40h] [rbp-468h]
  char **v58; // [rsp+48h] [rbp-460h] BYREF
  __int128 v59; // [rsp+50h] [rbp-458h]
  __int64 v60; // [rsp+60h] [rbp-448h]
  __int64 v61; // [rsp+68h] [rbp-440h]
  __int64 v62; // [rsp+78h] [rbp-430h]
  __int128 v63; // [rsp+80h] [rbp-428h] BYREF
  __int128 v64; // [rsp+90h] [rbp-418h]
  __int128 v65; // [rsp+A0h] [rbp-408h]
  __int128 v66; // [rsp+B0h] [rbp-3F8h]
  __int128 v67; // [rsp+C0h] [rbp-3E8h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-3D8h]
  __int64 v69; // [rsp+D8h] [rbp-3D0h]
  _BYTE v70[24]; // [rsp+E0h] [rbp-3C8h] BYREF
  __int128 v71; // [rsp+F8h] [rbp-3B0h]
  __int128 v72; // [rsp+108h] [rbp-3A0h]
  __int128 v73; // [rsp+118h] [rbp-390h]
  __m256i v74; // [rsp+128h] [rbp-380h] BYREF
  __m256i v75; // [rsp+148h] [rbp-360h]
  __int128 v76; // [rsp+168h] [rbp-340h]
  __int64 v77; // [rsp+178h] [rbp-330h]
  __int128 v78; // [rsp+180h] [rbp-328h]
  __int64 v79; // [rsp+190h] [rbp-318h]
  __int64 v80; // [rsp+198h] [rbp-310h]
  __int64 v81; // [rsp+1A0h] [rbp-308h]
  unsigned __int64 v82; // [rsp+1A8h] [rbp-300h] BYREF
  __int64 v83; // [rsp+1B0h] [rbp-2F8h]
  __int64 v84; // [rsp+1B8h] [rbp-2F0h]
  __int128 v85; // [rsp+1C0h] [rbp-2E8h]
  __int64 v86; // [rsp+1D0h] [rbp-2D8h]
  __int64 v87; // [rsp+1D8h] [rbp-2D0h] BYREF
  char v88; // [rsp+1E0h] [rbp-2C8h]
  _BYTE v89[15]; // [rsp+1E1h] [rbp-2C7h]
  __int64 v90; // [rsp+1F0h] [rbp-2B8h] BYREF
  char v91; // [rsp+1F8h] [rbp-2B0h]
  _BYTE v92[15]; // [rsp+1F9h] [rbp-2AFh]
  __int128 v93; // [rsp+208h] [rbp-2A0h] BYREF
  __int64 v94; // [rsp+218h] [rbp-290h]
  char v95[8]; // [rsp+220h] [rbp-288h] BYREF
  __int64 v96; // [rsp+228h] [rbp-280h]
  char v97[8]; // [rsp+230h] [rbp-278h] BYREF
  __int64 v98; // [rsp+238h] [rbp-270h]
  __int128 v99; // [rsp+240h] [rbp-268h] BYREF
  __int64 v100; // [rsp+250h] [rbp-258h]
  unsigned __int64 v101; // [rsp+258h] [rbp-250h] BYREF
  __int64 v102; // [rsp+260h] [rbp-248h]
  __int64 v103; // [rsp+268h] [rbp-240h]
  unsigned __int64 v104; // [rsp+270h] [rbp-238h] BYREF
  __int64 v105; // [rsp+278h] [rbp-230h]
  __int64 v106; // [rsp+280h] [rbp-228h]
  _QWORD v107[5]; // [rsp+288h] [rbp-220h] BYREF
  __int128 v108; // [rsp+2B0h] [rbp-1F8h]
  __int64 v109; // [rsp+2C0h] [rbp-1E8h]
  __int16 v110; // [rsp+2C8h] [rbp-1E0h]
  __int64 v111; // [rsp+2D0h] [rbp-1D8h] BYREF
  __int128 v112; // [rsp+2D8h] [rbp-1D0h]
  __int64 v113; // [rsp+2E8h] [rbp-1C0h]
  _QWORD v114[3]; // [rsp+2F0h] [rbp-1B8h] BYREF
  __int128 v115; // [rsp+308h] [rbp-1A0h]
  __int64 v116; // [rsp+320h] [rbp-188h] BYREF
  __int128 v117; // [rsp+328h] [rbp-180h] BYREF
  __int64 v118; // [rsp+338h] [rbp-170h]
  _QWORD v119[4]; // [rsp+340h] [rbp-168h] BYREF
  __m256i src[5]; // [rsp+360h] [rbp-148h] BYREF
  __m256i v121[2]; // [rsp+408h] [rbp-A0h] BYREF
  __int128 v122; // [rsp+448h] [rbp-60h]
  __int64 v123; // [rsp+458h] [rbp-50h]
  _BYTE v124[72]; // [rsp+460h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v70, a2, &unk_1973C, 4LL);
  v52 = (const char *)&unk_1973C;
  v53 = 4LL;
  if ( *(_QWORD *)v70 )
  {
    v66 = v73;
    v65 = v72;
    v64 = v71;
    v63 = *(_OWORD *)&v70[8];
    v54 = &v52;
    v55 = <&T as core::fmt::Display>::fmt;
    v56 = &v63;
    v57 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v58 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    *(_QWORD *)&v59 = 2LL;
    v61 = 0LL;
    *((_QWORD *)&v59 + 1) = &v54;
    v60 = 2LL;
    core::panicking::panic_fmt(&v58, &off_11EF60);
  }
  if ( !*(_QWORD *)&v70[8] )
    core::option::unwrap_failed(&off_11EF78);
  v3 = *(_QWORD *)(*(_QWORD *)&v70[8] + 8LL);
  if ( !v3 )
    goto LABEL_95;
  v4 = *(_QWORD *)(*(_QWORD *)&v70[8] + 16LL);
  if ( v4 < 0 )
    goto LABEL_95;
  uu_numfmt::parse_unit((__int64)&v87, v3, v4);
  v5 = v88;
  if ( v87 != 0x8000000000000000LL )
  {
    *((_QWORD *)dest + 1) = v87;
    dest[16] = v5;
    v18 = *(_QWORD *)v89;
    v19 = *(_QWORD *)&v89[7];
LABEL_35:
    *(_QWORD *)(dest + 17) = v18;
LABEL_39:
    *((_QWORD *)dest + 3) = v19;
LABEL_40:
    *(_QWORD *)dest = 2LL;
    return dest;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v70, a2, aTo, 2LL);
  v52 = aTo;
  v53 = 2LL;
  if ( *(_QWORD *)v70 )
  {
    v66 = v73;
    v65 = v72;
    v64 = v71;
    v63 = *(_OWORD *)&v70[8];
    v54 = &v52;
    v55 = <&T as core::fmt::Display>::fmt;
    v56 = &v63;
    v57 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v58 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    *(_QWORD *)&v59 = 2LL;
    v61 = 0LL;
    *((_QWORD *)&v59 + 1) = &v54;
    v60 = 2LL;
    core::panicking::panic_fmt(&v58, &off_11EF90);
  }
  if ( !*(_QWORD *)&v70[8] )
    core::option::unwrap_failed(&off_11EFA8);
  v6 = *(_QWORD *)(*(_QWORD *)&v70[8] + 8LL);
  if ( !v6 )
    goto LABEL_95;
  v7 = *(_QWORD *)(*(_QWORD *)&v70[8] + 16LL);
  if ( v7 < 0 )
    goto LABEL_95;
  uu_numfmt::parse_unit((__int64)&v90, v6, v7);
  v8 = v91;
  if ( v90 != 0x8000000000000000LL )
  {
    *((_QWORD *)dest + 1) = v90;
    dest[16] = v8;
    v18 = *(_QWORD *)v92;
    v19 = *(_QWORD *)&v92[7];
    goto LABEL_35;
  }
  v49 = v91;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v70, a2, aFromUnit, 9LL);
  v52 = aFromUnit;
  v53 = 9LL;
  if ( *(_QWORD *)v70 )
  {
    v66 = v73;
    v65 = v72;
    v64 = v71;
    v63 = *(_OWORD *)&v70[8];
    v54 = &v52;
    v55 = <&T as core::fmt::Display>::fmt;
    v56 = &v63;
    v57 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v58 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    *(_QWORD *)&v59 = 2LL;
    v61 = 0LL;
    *((_QWORD *)&v59 + 1) = &v54;
    v60 = 2LL;
    core::panicking::panic_fmt(&v58, &off_11EFC0);
  }
  if ( !*(_QWORD *)&v70[8] )
    core::option::unwrap_failed(&off_11EFD8);
  v9 = *(_QWORD *)(*(_QWORD *)&v70[8] + 8LL);
  if ( !v9 )
    goto LABEL_95;
  v10 = *(_QWORD *)(*(_QWORD *)&v70[8] + 16LL);
  if ( v10 < 0 )
    goto LABEL_95;
  uu_numfmt::parse_unit_size(&v101, v9, v10);
  v11 = v101;
  v12 = v102;
  if ( v101 != 0x8000000000000000LL )
  {
    v19 = v103;
LABEL_38:
    *((_QWORD *)dest + 1) = v11;
    *((_QWORD *)dest + 2) = v12;
    goto LABEL_39;
  }
  v81 = v102;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v70, a2, aToUnit, 7LL);
  v52 = aToUnit;
  v53 = 7LL;
  if ( *(_QWORD *)v70 )
  {
    v66 = v73;
    v65 = v72;
    v64 = v71;
    v63 = *(_OWORD *)&v70[8];
    v54 = &v52;
    v55 = <&T as core::fmt::Display>::fmt;
    v56 = &v63;
    v57 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v58 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    *(_QWORD *)&v59 = 2LL;
    v61 = 0LL;
    *((_QWORD *)&v59 + 1) = &v54;
    v60 = 2LL;
    core::panicking::panic_fmt(&v58, &off_11EFF0);
  }
  if ( !*(_QWORD *)&v70[8] )
    core::option::unwrap_failed(&off_11F008);
  v13 = *(_QWORD *)(*(_QWORD *)&v70[8] + 8LL);
  if ( !v13 )
    goto LABEL_95;
  v14 = *(_QWORD *)(*(_QWORD *)&v70[8] + 16LL);
  if ( v14 < 0 )
    goto LABEL_95;
  uu_numfmt::parse_unit_size(&v104, v13, v14);
  v11 = v104;
  v12 = v105;
  if ( v104 != 0x8000000000000000LL )
  {
    v19 = v106;
    goto LABEL_38;
  }
  v80 = v105;
  v50 = v49;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v70, a2, aPadding, 7LL);
  v52 = aPadding;
  v53 = 7LL;
  if ( *(_QWORD *)v70 )
  {
    v66 = v73;
    v65 = v72;
    v64 = v71;
    v63 = *(_OWORD *)&v70[8];
    v54 = &v52;
    v55 = <&T as core::fmt::Display>::fmt;
    v56 = &v63;
    v57 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v58 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    *(_QWORD *)&v59 = 2LL;
    v61 = 0LL;
    *((_QWORD *)&v59 + 1) = &v54;
    v60 = 2LL;
    core::panicking::panic_fmt(&v58, &off_11F020);
  }
  v15 = *(_QWORD *)&v70[8];
  if ( *(_QWORD *)&v70[8] )
  {
    if ( *(_QWORD *)(*(_QWORD *)&v70[8] + 8LL) && *(__int64 *)(*(_QWORD *)&v70[8] + 16LL) >= 0 )
    {
      core::num::<impl core::str::traits::FromStr for isize>::from_str(v95);
      v16 = v15;
      if ( (v95[0] & 1) == 0 )
        v16 = v96;
      v17 = v15;
      if ( v16 )
        v17 = v16;
      if ( (v95[0] & 1) != 0 )
      {
        v17 = v15;
      }
      else if ( v16 )
      {
        v62 = v17;
        goto LABEL_48;
      }
      v22 = *(_QWORD *)(v17 + 8);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v17 + 16);
        if ( v23 >= 0 )
        {
          *(_QWORD *)&v63 = 0LL;
          *((_QWORD *)&v63 + 1) = v22;
          *(_QWORD *)&v64 = v23;
          BYTE8(v64) = 1;
          v54 = (const char **)&v63;
          v55 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)v70 = &off_11F1B0;
          *(_QWORD *)&v70[8] = 1LL;
          *(_QWORD *)&v70[16] = &v54;
          v71 = 1uLL;
          alloc::fmt::format::format_inner(&v58, v70);
          if ( v58 != (char **)0x8000000000000000LL )
          {
            v32 = v59;
            *((_QWORD *)dest + 1) = v58;
            *((_OWORD *)dest + 1) = v32;
            goto LABEL_40;
          }
          v21 = v59;
          goto LABEL_47;
        }
      }
    }
LABEL_95:
    core::panicking::panic_nounwind(anon_b059a92c305f842a453962f602edcc08_22_llvm_14020448505035660279, 162LL);
  }
  v21 = 0LL;
LABEL_47:
  v62 = v21;
LABEL_48:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                          a2,
                          aHeader,
                          6LL,
                          &off_11F038) == 2 )
  {
    one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aHeader, 6LL, &off_11F050);
    if ( !one )
      core::option::unwrap_failed(&off_11F068);
    v25 = one;
    <alloc::string::String as core::ops::deref::Deref>::deref(one);
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v97);
    v26 = v25;
    if ( (v97[0] & 1) == 0 )
      v26 = v98;
    if ( v26 )
      v25 = v26;
    if ( (v97[0] & 1) != 0 )
      v25 = v26;
    core::result::Result<T,E>::map_err(&v82, v97[0] & 1u | (v26 == 0), v25);
    v11 = v82;
    v12 = v83;
    if ( v82 == 0x8000000000000000LL )
    {
      v69 = v83;
      goto LABEL_59;
    }
    v19 = v84;
    goto LABEL_38;
  }
  v83 = 0LL;
  v82 = 0x8000000000000000LL;
  v69 = 0LL;
LABEL_59:
  v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aField, 5LL, &off_11F080);
  if ( !v27 )
    core::option::unwrap_failed(&off_11F098);
  v28 = alloc::string::String::as_str(v27);
  v30 = v29;
  v107[0] = &anon_c4c4bebbd6dc8fc037a3b36a3713dba0_56_llvm_5692066984011975658;
  v107[1] = v28;
  v107[2] = v29;
  v107[3] = v28;
  v107[4] = v29 + v28;
  v108 = 0LL;
  v109 = v29;
  v110 = 1;
  if ( (unsigned __int8)core::iter::traits::iterator::Iterator::any(v107) )
  {
    v31 = alloc::alloc::exchange_malloc(16LL, 8LL);
    if ( (v31 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v31, &off_11F0B0);
    *(_QWORD *)v31 = 1LL;
    *(_QWORD *)(v31 + 8) = -1LL;
    *(_QWORD *)&v67 = 1LL;
    *((_QWORD *)&v67 + 1) = v31;
    v68 = 1LL;
    goto LABEL_68;
  }
  uucore::features::ranges::Range::from_list(&v111, v28, v30);
  if ( v111 )
  {
    *((_QWORD *)dest + 3) = v113;
    *(_OWORD *)(dest + 8) = v112;
    goto LABEL_40;
  }
  v68 = v113;
  v67 = v112;
LABEL_68:
  v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aFormat_0, 6LL, &off_11F0C8);
  if ( v33 )
  {
    v34 = (const char *)<alloc::string::String as core::ops::deref::Deref>::deref(v33);
    <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(v121, v34);
    v36 = &v121[0].m256i_i64[1];
    if ( v121[0].m256i_i64[0] == 2 )
    {
      *((_QWORD *)dest + 3) = v121[0].m256i_i64[3];
      *(_OWORD *)(dest + 8) = *(_OWORD *)&v121[0].m256i_u64[1];
      *(_QWORD *)dest = 2LL;
LABEL_77:
      core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::ranges::Range>>(&v67, v34, v35, v36);
      return dest;
    }
    v77 = v123;
    v76 = v122;
    v75 = v121[1];
    v74 = v121[0];
    if ( (v123 & 1) != 0 && (unsigned __int8)core::cmp::PartialEq::ne(&v49, &unk_23CF2) )
    {
      v37 = (__int128 *)v124;
      v34 = aGroupingCannot;
      <str as alloc::string::ToString>::to_string(v124, aGroupingCannot, 37LL);
LABEL_76:
      *((_QWORD *)dest + 3) = *((_QWORD *)v37 + 2);
      *(_OWORD *)(dest + 8) = *v37;
      *(_QWORD *)dest = 2LL;
      core::ptr::drop_in_place<uu_numfmt::options::FormatOptions>(&v74);
      goto LABEL_77;
    }
  }
  else
  {
    LOWORD(v77) = 0;
    v74.m256i_i64[0] = 0LL;
    v74.m256i_i64[2] = 0LL;
    v75.m256i_i64[0] = 0LL;
    v75.m256i_i64[1] = 1LL;
    *(_OWORD *)&v75.m256i_u64[2] = 0LL;
    v76 = 1uLL;
  }
  v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aDelimiter, 9LL, &off_11F0E0);
  v119[1] = 0x8000000000000000LL;
  v119[0] = 0LL;
  v34 = (const char *)v38;
  core::option::Option<T>::map_or(&v116, v38, v119);
  v37 = &v117;
  if ( v116 )
    goto LABEL_76;
  v86 = v118;
  v85 = v117;
  v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aRound_0, 5LL, &off_11F0F8);
  if ( !v39 )
    core::option::unwrap_failed(&off_11F110);
  v40 = alloc::string::String::as_str(v39);
  switch ( v41 )
  {
    case 2LL:
      if ( *(_WORD *)v40 != 28789 )
        goto LABEL_84;
      v42 = 0;
      goto LABEL_87;
    case 4LL:
      v42 = 1;
      if ( *(_DWORD *)v40 != 1853321060 )
        goto LABEL_84;
      goto LABEL_87;
    case 7LL:
      v42 = 4;
      if ( *(_DWORD *)v40 ^ 0x7261656E | *(_DWORD *)(v40 + 3) ^ 0x74736572 )
        goto LABEL_84;
      goto LABEL_87;
    case 9LL:
      v43 = *(_QWORD *)v40 ^ 0x72657A2D6D6F7266LL;
      v44 = *(unsigned __int8 *)(v40 + 8) ^ 0x6FLL;
      v42 = 2;
      goto LABEL_86;
    case 12LL:
      v43 = *(_QWORD *)v40 ^ 0x2D73647261776F74LL;
      v44 = *(unsigned int *)(v40 + 8) ^ 0x6F72657ALL;
      v42 = 3;
LABEL_86:
      if ( v43 | v44 )
        goto LABEL_84;
LABEL_87:
      v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aSuffix, 6LL, &off_11F150);
      if ( v45 )
      {
        <alloc::string::String as core::clone::Clone>::clone(v70, v45);
        v79 = *(_QWORD *)&v70[16];
        v78 = *(_OWORD *)v70;
      }
      else
      {
        *(_QWORD *)&v78 = 0x8000000000000000LL;
      }
      v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aInvalid, 7LL, &off_11F168);
      if ( !v46 )
        core::option::unwrap_failed(&off_11F180);
      v47 = <alloc::string::String as core::ops::deref::Deref>::deref(v46);
      <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(&v93, v47);
      if ( (_QWORD)v93 != 0x8000000000000000LL )
      {
        v100 = v94;
        v99 = v93;
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v99, &off_11ECD0, &off_11F198);
      }
      v48 = BYTE8(v93);
      *(_OWORD *)&src[2].m256i_u64[3] = v67;
      src[3].m256i_i64[1] = v68;
      *(_OWORD *)&src[3].m256i_u64[2] = v85;
      src[4].m256i_i64[0] = v86;
      *(_OWORD *)&src[4].m256i_u64[1] = v78;
      src[4].m256i_i64[3] = v79;
      src[0] = v74;
      src[1] = v75;
      *(_OWORD *)src[2].m256i_i8 = v76;
      src[2].m256i_i64[2] = v77;
      memcpy(dest, src, 0xA0uLL);
      *((_QWORD *)dest + 20) = v81;
      *((_QWORD *)dest + 21) = v80;
      dest[176] = v5;
      dest[177] = v50;
      *((_QWORD *)dest + 23) = v62;
      *((_QWORD *)dest + 24) = v69;
      dest[200] = v48;
      dest[201] = v42;
      break;
    default:
LABEL_84:
      v114[0] = &off_11F128;
      v114[1] = 1LL;
      v114[2] = &v51;
      v115 = 0LL;
      core::panicking::panic_fmt(v114, &off_11F138);
  }
  return dest;
}
