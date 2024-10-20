__int64 __fastcall uu_numfmt::parse_options(__int64 a1, _QWORD *a2)
{
  const char *v4; // rax
  char v5; // bp
  const char *v6; // rax
  char v7; // si
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int8 *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r11
  unsigned __int8 *v26; // r9
  __int64 v27; // rcx
  char *v28; // r8
  __int64 v29; // rdi
  char v30; // r11
  int v31; // r10d
  int v32; // r10d
  int v33; // r13d
  int v34; // r15d
  _QWORD *v35; // rax
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v40; // rax
  __int128 v41; // kr00_16
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // ecx
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  const char **v55; // rax
  char v56; // [rsp+Fh] [rbp-1E9h]
  __m256i v57; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 v58; // [rsp+30h] [rbp-1C8h]
  int v59; // [rsp+3Ch] [rbp-1BCh]
  _BYTE v60[24]; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v61[7]; // [rsp+58h] [rbp-1A0h]
  __int64 v62; // [rsp+90h] [rbp-168h]
  __m256i v63; // [rsp+98h] [rbp-160h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-140h]
  char v65; // [rsp+C0h] [rbp-138h] BYREF
  const char *v66; // [rsp+C8h] [rbp-130h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-128h]
  __int64 (__fastcall *v68)(); // [rsp+E0h] [rbp-118h]
  __int64 v69; // [rsp+E8h] [rbp-110h]
  unsigned __int64 v70; // [rsp+F0h] [rbp-108h]
  _QWORD *v71; // [rsp+F8h] [rbp-100h]
  __m256i v72; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v73; // [rsp+120h] [rbp-D8h]
  __int128 v74; // [rsp+130h] [rbp-C8h]
  __int128 v75; // [rsp+140h] [rbp-B8h]
  __int64 v76; // [rsp+150h] [rbp-A8h]
  const char *v77; // [rsp+160h] [rbp-98h] BYREF
  __int64 v78; // [rsp+168h] [rbp-90h]
  __int64 v79; // [rsp+170h] [rbp-88h]
  __int64 v80; // [rsp+178h] [rbp-80h]
  __int64 v81; // [rsp+180h] [rbp-78h]
  __int64 v82; // [rsp+188h] [rbp-70h]
  __int64 v83; // [rsp+190h] [rbp-68h]
  __int64 v84; // [rsp+198h] [rbp-60h]
  __m128d v85; // [rsp+1A0h] [rbp-58h]
  __m128d v86; // [rsp+1B0h] [rbp-48h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v57, a2, &unk_13D6C, 4LL);
  v77 = (const char *)&unk_13D6C;
  v78 = 4LL;
  if ( v57.m256i_i32[0] != 2 )
    goto LABEL_95;
  if ( !v57.m256i_i64[1] )
    core::option::unwrap_failed(&off_FAE90);
  uu_numfmt::parse_unit((__int64)&v66, *(_QWORD *)(v57.m256i_i64[1] + 8), *(_QWORD *)(v57.m256i_i64[1] + 16));
  v4 = v66;
  v5 = v67;
  if ( v66 != (const char *)0x8000000000000000LL )
  {
    v12 = *(_QWORD *)((char *)&v67 + 1);
    *(_QWORD *)(a1 + 24) = *((_QWORD *)&v67 + 1);
    *(_QWORD *)(a1 + 17) = v12;
    *(_QWORD *)(a1 + 8) = v4;
    *(_BYTE *)(a1 + 16) = v5;
LABEL_67:
    *(_QWORD *)a1 = 2LL;
    return a1;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v57, a2, aTo, 2LL);
  v77 = aTo;
  v78 = 2LL;
  if ( v57.m256i_i32[0] != 2 )
  {
LABEL_95:
    *(_QWORD *)&v73 = v58;
    v72 = v57;
    v55 = &v77;
    goto LABEL_99;
  }
  if ( !v57.m256i_i64[1] )
    core::option::unwrap_failed(&off_FAEA8);
  uu_numfmt::parse_unit((__int64)&v66, *(_QWORD *)(v57.m256i_i64[1] + 8), *(_QWORD *)(v57.m256i_i64[1] + 16));
  v6 = v66;
  v7 = v67;
  if ( v66 != (const char *)0x8000000000000000LL )
  {
    v13 = *(_QWORD *)((char *)&v67 + 1);
    *(_QWORD *)(a1 + 24) = *((_QWORD *)&v67 + 1);
    *(_QWORD *)(a1 + 17) = v13;
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 16) = v7;
    goto LABEL_67;
  }
  v56 = v67;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v57, a2, aFromUnit, 9LL);
  v66 = aFromUnit;
  *(_QWORD *)&v67 = 9LL;
  if ( v57.m256i_i32[0] != 2 )
    goto LABEL_98;
  if ( !v57.m256i_i64[1] )
    core::option::unwrap_failed(&off_FAEC0);
  uu_numfmt::parse_unit_size((__int64)v60, *(char ***)(v57.m256i_i64[1] + 8), *(_QWORD *)(v57.m256i_i64[1] + 16));
  v8 = *(_QWORD *)v60;
  v9 = *(_OWORD *)&v60[8];
  if ( *(_QWORD *)v60 != 0x8000000000000000LL )
    goto LABEL_66;
  v86 = *(__m128d *)&v60[8];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v57, a2, aToUnit, 7LL);
  v66 = aToUnit;
  *(_QWORD *)&v67 = 7LL;
  if ( v57.m256i_i32[0] != 2 )
    goto LABEL_98;
  if ( !v57.m256i_i64[1] )
    core::option::unwrap_failed(&off_FAED8);
  uu_numfmt::parse_unit_size((__int64)v60, *(char ***)(v57.m256i_i64[1] + 8), *(_QWORD *)(v57.m256i_i64[1] + 16));
  v8 = *(_QWORD *)v60;
  v9 = *(_OWORD *)&v60[8];
  if ( *(_QWORD *)v60 != 0x8000000000000000LL )
    goto LABEL_66;
  v85 = *(__m128d *)&v60[8];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v57, a2, aPadding, 7LL);
  v66 = aPadding;
  *(_QWORD *)&v67 = 7LL;
  if ( v57.m256i_i32[0] != 2 )
    goto LABEL_98;
  v10 = v57.m256i_i64[1];
  if ( v57.m256i_i64[1] )
  {
    core::num::<impl core::str::traits::FromStr for isize>::from_str(
      v60,
      *(_QWORD *)(v57.m256i_i64[1] + 8),
      *(_QWORD *)(v57.m256i_i64[1] + 16),
      *(double *)&v9);
    if ( v60[0] || (v11 = *(_QWORD *)&v60[8]) == 0 )
    {
      uu_numfmt::parse_options::{{closure}}(v60, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
      v8 = *(_QWORD *)v60;
      if ( *(_QWORD *)v60 != 0x8000000000000000LL )
      {
LABEL_65:
        v9 = *(_OWORD *)&v60[8];
LABEL_66:
        *(_QWORD *)(a1 + 8) = v8;
        *(_OWORD *)(a1 + 16) = v9;
        goto LABEL_67;
      }
      v11 = *(_QWORD *)&v60[8];
    }
  }
  else
  {
    v11 = 0LL;
  }
  v84 = v11;
  v14 = a2[2];
  if ( !v14 )
    goto LABEL_35;
  v15 = a2[1];
  v16 = 16 * v14;
  v17 = 97LL;
  v18 = 0LL;
  v19 = 0LL;
  while ( *(_QWORD *)(v15 + v18 + 8) != 6LL
       || **(_DWORD **)(v15 + v18) ^ 0x64616568 | *(unsigned __int16 *)(*(_QWORD *)(v15 + v18) + 4LL) ^ 0x7265 )
  {
    v18 += 16LL;
    v17 += 104LL;
    ++v19;
    if ( v16 == v18 )
      goto LABEL_35;
  }
  v20 = a2[5];
  if ( v19 >= v20 )
    core::panicking::panic_bounds_check(
      v19,
      v20,
      &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
      v16);
  if ( *(_BYTE *)(a2[4] + v17) != 2 )
  {
LABEL_35:
    v22 = 0LL;
    goto LABEL_36;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v57, a2, aHeader, 6LL);
  v66 = aHeader;
  *(_QWORD *)&v67 = 6LL;
  if ( v57.m256i_i32[0] != 2 )
  {
LABEL_98:
    *(_QWORD *)&v73 = v58;
    v72 = v57;
    v55 = &v66;
LABEL_99:
    v63.m256i_i64[0] = (__int64)v55;
    v63.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v63.m256i_i64[2] = (__int64)&v72;
    v63.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v60 = &anon_854137e25e713167cd68e57a0f0c4bd3_3_llvm_6350023382392239960;
    *(_QWORD *)&v60[8] = 2LL;
    *(_QWORD *)&v60[16] = &v63;
    *(_OWORD *)v61 = 2uLL;
    core::panicking::panic_fmt(v60, &anon_854137e25e713167cd68e57a0f0c4bd3_5_llvm_6350023382392239960);
  }
  v21 = v57.m256i_i64[1];
  if ( !v57.m256i_i64[1] )
    core::option::unwrap_failed(&off_FAEF0);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(
    v60,
    *(_QWORD *)(v57.m256i_i64[1] + 8),
    *(_QWORD *)(v57.m256i_i64[1] + 16));
  if ( v60[0] || (v69 = *(_QWORD *)&v60[8]) == 0 )
  {
    uu_numfmt::parse_options::{{closure}}(v60, *(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16));
    v8 = *(_QWORD *)v60;
    if ( *(_QWORD *)v60 == 0x8000000000000000LL )
    {
      v22 = *(_QWORD *)&v60[8];
LABEL_36:
      v69 = v22;
      goto LABEL_37;
    }
    goto LABEL_65;
  }
LABEL_37:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v57, a2, aField, 5LL);
  v66 = aField;
  *(_QWORD *)&v67 = 5LL;
  if ( v57.m256i_i32[0] != 2 )
    goto LABEL_98;
  if ( !v57.m256i_i64[1] )
    core::option::unwrap_failed(&off_FAF08);
  v23 = *(unsigned __int8 **)(v57.m256i_i64[1] + 8);
  v24 = *(_QWORD *)(v57.m256i_i64[1] + 16);
  v25 = 0LL;
  v26 = v23;
LABEL_40:
  v27 = v25;
  v28 = (char *)v26;
  while ( v28 != (char *)&v23[v24] )
  {
    v29 = v25;
    v30 = *v28;
    if ( *v28 < 0 )
    {
      v32 = v30 & 0x1F;
      v33 = v28[1] & 0x3F;
      if ( (unsigned __int8)v30 <= 0xDFu )
      {
        v26 = (unsigned __int8 *)(v28 + 2);
        v31 = v33 | (v32 << 6);
      }
      else
      {
        v34 = (v33 << 6) | v28[2] & 0x3F;
        if ( (unsigned __int8)v30 < 0xF0u )
        {
          v26 = (unsigned __int8 *)(v28 + 3);
          v31 = v34 | (v32 << 12);
        }
        else
        {
          v26 = (unsigned __int8 *)(v28 + 4);
          v31 = (v34 << 6) | v28[3] & 0x3F | ((v30 & 7) << 18);
        }
      }
    }
    else
    {
      v26 = (unsigned __int8 *)(v28 + 1);
      v31 = (unsigned __int8)*v28;
    }
    v25 = v29 + v26 - (unsigned __int8 *)v28;
    if ( v31 != 44 )
    {
      v28 = (char *)v26;
      if ( v31 != 32 )
        continue;
    }
    if ( v29 - v27 != 1 || v23[v27] != 45 )
      goto LABEL_40;
    goto LABEL_56;
  }
  if ( v24 - v27 == 1 && v23[v27] == 45 )
  {
LABEL_56:
    v35 = (_QWORD *)_rust_alloc(16LL, 8LL);
    if ( !v35 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *v35 = 1LL;
    v71 = v35;
    v35[1] = -1LL;
    v82 = 1LL;
    v36 = 1LL;
    goto LABEL_61;
  }
  uucore::features::ranges::Range::from_list(v60);
  v36 = *(_QWORD *)&v60[8];
  v37 = *(_QWORD *)&v60[16];
  v38 = v61[0];
  if ( *(_QWORD *)v60 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v60[8];
    *(_QWORD *)(a1 + 16) = v37;
    *(_QWORD *)(a1 + 24) = v38;
    goto LABEL_67;
  }
  v82 = v61[0];
  v71 = *(_QWORD **)&v60[16];
LABEL_61:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v63, a2, aFormat_0, 6LL);
  v77 = aFormat_0;
  v78 = 6LL;
  if ( v63.m256i_i32[0] != 2 )
  {
    v58 = v64;
    v57 = v63;
    v66 = (const char *)&v77;
    *(_QWORD *)&v67 = <&T as core::fmt::Display>::fmt;
    *((_QWORD *)&v67 + 1) = &v57;
    v68 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v60 = &anon_854137e25e713167cd68e57a0f0c4bd3_3_llvm_6350023382392239960;
    *(_QWORD *)&v60[8] = 2LL;
    *(_QWORD *)&v60[16] = &v66;
    *(_OWORD *)v61 = 2uLL;
    core::panicking::panic_fmt(v60, &anon_854137e25e713167cd68e57a0f0c4bd3_5_llvm_6350023382392239960);
  }
  if ( v63.m256i_i64[1] )
  {
    <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(
      v60,
      *(_QWORD *)(v63.m256i_i64[1] + 8),
      *(_QWORD *)(v63.m256i_i64[1] + 16));
    *(_OWORD *)v57.m256i_i8 = *(_OWORD *)&v60[8];
    v57.m256i_i64[2] = v61[0];
    if ( *(_QWORD *)v60 == 2LL )
    {
      *(_QWORD *)(a1 + 24) = v57.m256i_i64[2];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v57.m256i_i8;
      *(_QWORD *)a1 = 2LL;
      goto LABEL_76;
    }
    v76 = v62;
    v75 = *(_OWORD *)&v61[5];
    v74 = *(_OWORD *)&v61[3];
    v73 = *(_OWORD *)&v61[1];
    *(_OWORD *)&v72.m256i_u64[1] = *(_OWORD *)v57.m256i_i8;
    v72.m256i_i64[3] = v57.m256i_i64[2];
    v72.m256i_i64[0] = *(_QWORD *)v60;
    if ( v56 != 5 && (_BYTE)v62 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(v60);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v60[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v60;
      goto LABEL_75;
    }
  }
  else
  {
    LOWORD(v76) = 0;
    v72.m256i_i64[0] = 0LL;
    v72.m256i_i64[2] = 0LL;
    *(_QWORD *)&v73 = 0LL;
    *((_QWORD *)&v73 + 1) = 1LL;
    v74 = 0LL;
    v75 = 1uLL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aDelimiter, 9LL);
  v40 = clap_builder::parser::error::MatchesError::unwrap(aDelimiter, 9LL, v60);
  *(_QWORD *)&v60[8] = 0x8000000000000000LL;
  *(_QWORD *)v60 = 0LL;
  core::option::Option<T>::map_or(&v57, v40, v60);
  v41 = *(_OWORD *)&v57.m256i_u64[2];
  if ( v57.m256i_i64[0] )
  {
    *(_QWORD *)(a1 + 8) = v57.m256i_i64[1];
    *(_OWORD *)(a1 + 16) = v41;
LABEL_75:
    *(_QWORD *)a1 = 2LL;
    core::ptr::drop_in_place<uu_numfmt::options::FormatOptions>(&v72);
LABEL_76:
    if ( v36 )
      _rust_dealloc(v71, 16 * v36, 8LL);
    return a1;
  }
  v81 = v57.m256i_i64[2];
  v79 = v57.m256i_i64[1];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aRound_0, 5LL);
  v42 = clap_builder::parser::error::MatchesError::unwrap(aRound_0, 5LL, v60);
  if ( !v42 )
    core::option::unwrap_failed(&off_FAF20);
  v44 = *(_QWORD *)(v42 + 16) - 2LL;
  v45 = *(_QWORD *)(v42 + 8);
  switch ( v44 )
  {
    case 0LL:
      if ( *(_WORD *)v45 != 28789 )
        goto LABEL_84;
      v59 = 0;
      goto LABEL_87;
    case 2LL:
      LOBYTE(v44) = 1;
      v59 = v44;
      if ( *(_DWORD *)v45 != 1853321060 )
        goto LABEL_84;
      goto LABEL_87;
    case 5LL:
      v48 = *(_DWORD *)v45 ^ 0x7261656E;
      v49 = *(_DWORD *)(v45 + 3) ^ 0x74736572;
      LOBYTE(v45) = 4;
      v59 = v45;
      if ( v48 | v49 )
        goto LABEL_84;
      goto LABEL_87;
    case 7LL:
      v46 = *(_QWORD *)v45 ^ 0x72657A2D6D6F7266LL;
      v47 = *(unsigned __int8 *)(v45 + 8) ^ 0x6FLL;
      LOBYTE(v43) = 2;
      goto LABEL_86;
    case 10LL:
      v46 = *(_QWORD *)v45 ^ 0x2D73647261776F74LL;
      v47 = *(unsigned int *)(v45 + 8) ^ 0x6F72657ALL;
      LOBYTE(v43) = 3;
LABEL_86:
      v59 = v43;
      if ( v46 | v47 )
        goto LABEL_84;
LABEL_87:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aSuffix, 6LL);
      v50 = clap_builder::parser::error::MatchesError::unwrap(aSuffix, 6LL, v60);
      if ( v50 )
      {
        <alloc::string::String as core::clone::Clone>::clone(v60, v50);
        v80 = *(_QWORD *)&v60[8];
        v70 = *(_QWORD *)v60;
        v83 = *(_QWORD *)&v60[16];
      }
      else
      {
        v70 = 0x8000000000000000LL;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v60, a2, aInvalid, 7LL);
      v51 = clap_builder::parser::error::MatchesError::unwrap(aInvalid, 7LL, v60);
      if ( !v51 )
        core::option::unwrap_failed(&off_FAF60);
      <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(
        &v57,
        *(_QWORD *)(v51 + 8),
        *(_QWORD *)(v51 + 16));
      if ( v57.m256i_i64[0] != 0x8000000000000000LL )
      {
        *(_QWORD *)&v60[16] = v57.m256i_i64[2];
        *(_OWORD *)v60 = *(_OWORD *)v57.m256i_i8;
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, v60, &off_FAD30, &off_FAF78);
      }
      *(_QWORD *)(a1 + 80) = v76;
      *(_OWORD *)(a1 + 64) = v75;
      v52 = *(_OWORD *)v72.m256i_i8;
      v53 = *(_OWORD *)&v72.m256i_u64[2];
      v54 = v73;
      *(_OWORD *)(a1 + 48) = v74;
      *(_OWORD *)(a1 + 32) = v54;
      *(_OWORD *)(a1 + 16) = v53;
      *(_OWORD *)a1 = v52;
      *(_QWORD *)(a1 + 88) = v36;
      *(_QWORD *)(a1 + 96) = v71;
      *(_QWORD *)(a1 + 104) = v82;
      *(_QWORD *)(a1 + 112) = v79;
      *(_QWORD *)(a1 + 120) = v81;
      *(_QWORD *)(a1 + 128) = *((_QWORD *)&v41 + 1);
      *(_QWORD *)(a1 + 136) = v70;
      *(_QWORD *)(a1 + 144) = v80;
      *(_QWORD *)(a1 + 152) = v83;
      *(__m128d *)(a1 + 160) = _mm_unpacklo_pd(v86, v85);
      *(_BYTE *)(a1 + 176) = v5;
      *(_BYTE *)(a1 + 177) = v56;
      *(_QWORD *)(a1 + 184) = v84;
      *(_QWORD *)(a1 + 192) = v69;
      *(_BYTE *)(a1 + 200) = v57.m256i_i8[8];
      *(_BYTE *)(a1 + 201) = v59;
      break;
    default:
LABEL_84:
      *(_QWORD *)v60 = &off_FAF38;
      *(_QWORD *)&v60[8] = 1LL;
      *(_QWORD *)&v60[16] = &v65;
      *(_OWORD *)v61 = 0LL;
      core::panicking::panic_fmt(v60, &off_FAF48);
  }
  return a1;
}
