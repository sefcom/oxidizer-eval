__int64 __fastcall uu_split::Settings::from(__int64 a1, _QWORD *a2)
{
  __int128 *v2; // r12
  __int64 (__fastcall *v3)(); // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 result; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbp
  _QWORD *v18; // rsi
  __int128 *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // r15
  unsigned __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  char **v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  size_t v32; // rdx
  char v33; // bl
  _WORD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rsi
  __int64 v42; // r14
  bool v43; // r15
  char flag; // al
  __int64 v45; // rcx
  const char **v46; // rax
  __int128 *v47; // rdi
  __int64 v50; // [rsp+18h] [rbp-260h]
  const char *v51; // [rsp+20h] [rbp-258h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+28h] [rbp-250h]
  __int128 *v53; // [rsp+30h] [rbp-248h]
  __int64 (__fastcall *v54)(); // [rsp+38h] [rbp-240h]
  __int128 v55; // [rsp+40h] [rbp-238h] BYREF
  __int128 v56; // [rsp+50h] [rbp-228h]
  __int64 v57; // [rsp+60h] [rbp-218h]
  __int64 v58; // [rsp+68h] [rbp-210h]
  __int128 v59; // [rsp+70h] [rbp-208h] BYREF
  __int128 v60; // [rsp+80h] [rbp-1F8h]
  __int64 v61; // [rsp+90h] [rbp-1E8h]
  __int128 v62; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-1C8h]
  __int64 v64; // [rsp+C0h] [rbp-1B8h]
  __int64 v65; // [rsp+D0h] [rbp-1A8h]
  __int128 v66; // [rsp+D8h] [rbp-1A0h] BYREF
  __int64 v67; // [rsp+E8h] [rbp-190h]
  __int128 *v68; // [rsp+F0h] [rbp-188h]
  __int64 v69; // [rsp+F8h] [rbp-180h]
  __int64 (__fastcall *v70)(__int64); // [rsp+100h] [rbp-178h]
  __int64 v71; // [rsp+108h] [rbp-170h]
  _BYTE src[168]; // [rsp+110h] [rbp-168h] BYREF
  __int128 v73; // [rsp+1B8h] [rbp-C0h] BYREF
  __int64 v74; // [rsp+1C8h] [rbp-B0h]
  _QWORD v75[2]; // [rsp+1D0h] [rbp-A8h] BYREF
  __int128 v76; // [rsp+1E0h] [rbp-98h]
  __int64 v77; // [rsp+1F0h] [rbp-88h]
  __int128 v78; // [rsp+200h] [rbp-78h] BYREF
  __int64 v79; // [rsp+210h] [rbp-68h]
  __int128 v80; // [rsp+220h] [rbp-58h]
  __int128 v81; // [rsp+230h] [rbp-48h]

  v4 = a1;
  uu_split::strategy::Strategy::from(src);
  v5 = *(_QWORD *)src;
  v59 = *(_OWORD *)&src[8];
  *(_QWORD *)&v60 = *(_QWORD *)&src[24];
  if ( *(_QWORD *)src != 4LL )
  {
    v8 = *(_QWORD *)&src[32];
    v9 = v59;
    v62 = v59;
    *(_QWORD *)&v63 = v60;
    *(_QWORD *)(a1 + 32) = v60;
    *(_OWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 40) = v8;
    *(_QWORD *)a1 = 2LL;
    return v4;
  }
  v76 = v59;
  v77 = v60;
  v78 = v59;
  v79 = v60;
  uu_split::filenames::Suffix::from(src, a2, &v78);
  if ( *(_QWORD *)src == 0x8000000000000000LL )
  {
    v6 = *(_OWORD *)&src[8];
    result = a1;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&src[24];
    *(_OWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = 4LL;
    *(_QWORD *)a1 = 2LL;
    return result;
  }
  v65 = *(_QWORD *)&src[8];
  v50 = *(_QWORD *)src;
  v80 = *(_OWORD *)&src[16];
  v81 = *(_OWORD *)&src[32];
  v68 = (__int128 *)src;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aSeparator, 9LL);
  v51 = aSeparator;
  v52 = (__int64 (__fastcall *)())byte_9;
  if ( *(_QWORD *)src )
  {
    v64 = *(_QWORD *)&src[40];
    v63 = *(_OWORD *)&src[24];
    v62 = *(_OWORD *)&src[8];
    *(_QWORD *)&v55 = &v51;
    *((_QWORD *)&v55 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v56 = &v62;
    *((_QWORD *)&v56 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v59 = &anon_fd2000c1cd6eb4266a2a957d594896cc_2_llvm_17375974497823408223;
    v46 = (const char **)&v55;
    goto LABEL_79;
  }
  v70 = *(__int64 (__fastcall **)(__int64))&src[8];
  if ( !*(_QWORD *)&src[8] )
  {
    LOBYTE(v2) = 10;
LABEL_17:
    v18 = a2;
LABEL_18:
    v19 = &v62;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v62, v18, aIoBlksize, 11LL);
    v51 = aIoBlksize;
    v52 = (__int64 (__fastcall *)())(byte_9 + 2);
    if ( (_DWORD)v62 != 2 )
    {
      v61 = v64;
      v60 = v63;
      v59 = v62;
      *(_QWORD *)&v55 = &v51;
      *((_QWORD *)&v55 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v56 = &v59;
      *((_QWORD *)&v56 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      *(_QWORD *)src = &anon_fd2000c1cd6eb4266a2a957d594896cc_2_llvm_17375974497823408223;
      v46 = (const char **)&v55;
LABEL_81:
      v47 = v68;
      *((_QWORD *)v68 + 1) = 2LL;
      *((_QWORD *)v47 + 4) = 0LL;
      *((_QWORD *)v47 + 2) = v46;
      *((_QWORD *)v47 + 3) = 2LL;
      core::panicking::panic_fmt(v47, &anon_fd2000c1cd6eb4266a2a957d594896cc_4_llvm_17375974497823408223);
    }
    v20 = *((_QWORD *)&v62 + 1);
    if ( *((_QWORD *)&v62 + 1) )
    {
      v21 = *(_QWORD *)(*((_QWORD *)&v62 + 1) + 8LL);
      v22 = *(_QWORD *)(*((_QWORD *)&v62 + 1) + 16LL);
      LOWORD(v61) = 0;
      BYTE2(v61) = 0;
      *(_QWORD *)&v59 = 0LL;
      *(_QWORD *)&v60 = 0LL;
      uucore::parser::parse_size::Parser::parse(&v51, &v59, v21, v22);
      if ( (_DWORD)v51 != 3 )
      {
        v3 = v52;
        v2 = v53;
        goto LABEL_49;
      }
      if ( v54 )
      {
        *(_QWORD *)&v62 = 0LL;
        *((_QWORD *)&v62 + 1) = v21;
        *(_QWORD *)&v63 = v22;
        BYTE8(v63) = 1;
        *(_QWORD *)&v66 = &v62;
        *((_QWORD *)&v66 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)src = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
        *(_QWORD *)&src[8] = 2LL;
        *(_QWORD *)&src[32] = 0LL;
        *(_QWORD *)&src[16] = &v66;
        *(_QWORD *)&src[24] = 1LL;
        alloc::fmt::format::format_inner((char *)&v55 + 8, src);
        v3 = (__int64 (__fastcall *)())*((_QWORD *)&v55 + 1);
        v2 = (__int128 *)v56;
LABEL_49:
        v33 = 0;
        goto LABEL_50;
      }
      v3 = (__int64 (__fastcall *)())v53;
      if ( !v53 )
      {
        <alloc::string::String as core::clone::Clone>::clone(src, v20);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&src[16];
        result = a1;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)src;
        *(_QWORD *)(a1 + 8) = 8LL;
        *(_QWORD *)a1 = 2LL;
        goto LABEL_57;
      }
      v23 = 1LL;
      if ( (unsigned __int64)v53 >= 0x20000001 )
      {
        v33 = 1;
LABEL_50:
        <alloc::string::String as core::clone::Clone>::clone(src, v20);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&src[16];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)src;
        *(_QWORD *)(a1 + 8) = 8LL;
        *(_QWORD *)a1 = 2LL;
        result = a1;
        if ( !((v3 == 0LL) | (unsigned __int8)v33) )
        {
          _rust_dealloc(v2, v3, 1LL);
          result = a1;
        }
        goto LABEL_57;
      }
    }
    else
    {
      v23 = 0LL;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aPrefix, 6LL);
    *(_QWORD *)&v66 = aPrefix;
    *((_QWORD *)&v66 + 1) = 6LL;
    if ( (_DWORD)v55 == 2 )
    {
      if ( *((_QWORD *)&v55 + 1) )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v73, *((_QWORD *)&v55 + 1));
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aInput, 5LL);
        v24 = 0x8000000000000000LL;
        *(_QWORD *)&v66 = aInput;
        *((_QWORD *)&v66 + 1) = 5LL;
        if ( (_DWORD)v55 != 2 )
        {
          v64 = v57;
          v63 = v56;
          v62 = v55;
          v51 = (const char *)&v66;
          v52 = <&T as core::fmt::Display>::fmt;
          v53 = &v62;
          v54 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
          *(_QWORD *)&v59 = &anon_fd2000c1cd6eb4266a2a957d594896cc_2_llvm_17375974497823408223;
          *((_QWORD *)&v59 + 1) = 2LL;
          v61 = 0LL;
          *(_QWORD *)&v60 = &v51;
          *((_QWORD *)&v60 + 1) = 2LL;
          core::panicking::panic_fmt(&v59, &anon_fd2000c1cd6eb4266a2a957d594896cc_4_llvm_17375974497823408223);
        }
        if ( !*((_QWORD *)&v55 + 1) )
          core::option::unwrap_failed(&off_10B6C8);
        <alloc::string::String as core::clone::Clone>::clone(&v66, *((_QWORD *)&v55 + 1));
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v55, a2, aFilter, 6LL);
        v75[0] = aFilter;
        v75[1] = 6LL;
        if ( (_DWORD)v55 != 2 )
        {
          v64 = v57;
          v63 = v56;
          v62 = v55;
          v51 = (const char *)v75;
          v52 = <&T as core::fmt::Display>::fmt;
          v53 = &v62;
          v54 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
          *(_QWORD *)&v59 = &anon_fd2000c1cd6eb4266a2a957d594896cc_2_llvm_17375974497823408223;
          *((_QWORD *)&v59 + 1) = 2LL;
          v61 = 0LL;
          *(_QWORD *)&v60 = &v51;
          *((_QWORD *)&v60 + 1) = 2LL;
          core::panicking::panic_fmt(&v59, &anon_fd2000c1cd6eb4266a2a957d594896cc_4_llvm_17375974497823408223);
        }
        if ( *((_QWORD *)&v55 + 1) )
        {
          <alloc::string::String as core::clone::Clone>::clone(&v59, *((_QWORD *)&v55 + 1));
          v58 = *((_QWORD *)&v59 + 1);
          v24 = v59;
          v19 = (__int128 *)v60;
        }
        v36 = a2[2];
        if ( v36 )
        {
          v37 = a2[1];
          v36 *= 16LL;
          v38 = 97LL;
          v39 = 0LL;
          v25 = 1651664246LL;
          v26 = 1702063970LL;
          v40 = 0LL;
          while ( *(_QWORD *)(v37 + v39 + 8) != 7LL
               || **(_DWORD **)(v37 + v39) ^ 0x62726576 | *(_DWORD *)(*(_QWORD *)(v37 + v39) + 3LL) ^ 0x65736F62 )
          {
            v39 += 16LL;
            v38 += 104LL;
            ++v40;
            if ( v36 == v39 )
              goto LABEL_66;
          }
          v41 = a2[5];
          if ( v40 >= v41 )
            core::panicking::panic_bounds_check(
              v40,
              v41,
              &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456);
          v42 = v23;
          v36 = a2[4];
          v43 = *(_BYTE *)(v36 + v38) == 2;
        }
        else
        {
LABEL_66:
          v42 = v23;
          v43 = 0;
        }
        flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 aElideEmptyFile,
                 17LL,
                 v36,
                 v25,
                 v26);
        *(_QWORD *)&src[56] = v74;
        *(_OWORD *)&src[40] = v73;
        *(_QWORD *)&src[64] = v50;
        *(_QWORD *)&src[72] = v65;
        *(_OWORD *)&src[80] = v80;
        *(_OWORD *)&src[96] = v81;
        *(_OWORD *)&src[112] = v66;
        *(_QWORD *)&src[128] = v67;
        *(_QWORD *)&src[136] = v24;
        *(_QWORD *)&src[144] = v58;
        *(_QWORD *)&src[152] = v19;
        *(_QWORD *)&src[32] = v77;
        *(_OWORD *)&src[16] = v76;
        src[160] = v43;
        src[162] = (_BYTE)v2;
        src[161] = flag;
        *(_QWORD *)src = v42;
        *(_QWORD *)&src[8] = v3;
        if ( (unsigned __int64)v76 <= 5 && (v45 = 42LL, _bittest64(&v45, v76)) && v24 != 0x8000000000000000LL )
        {
          v4 = a1;
          *(_QWORD *)(a1 + 8) = 7LL;
          *(_QWORD *)a1 = 2LL;
          core::ptr::drop_in_place<uu_split::Settings>(src);
        }
        else
        {
          v4 = a1;
          memcpy((void *)a1, src, 0xA8uLL);
        }
        return v4;
      }
      v27 = &off_10B6B0;
LABEL_84:
      core::option::unwrap_failed(v27);
    }
    v64 = v57;
    v63 = v56;
    v62 = v55;
    v51 = (const char *)&v66;
    v52 = <&T as core::fmt::Display>::fmt;
    v53 = &v62;
    v54 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v59 = &anon_fd2000c1cd6eb4266a2a957d594896cc_2_llvm_17375974497823408223;
    v46 = &v51;
LABEL_79:
    v68 = &v59;
    goto LABEL_81;
  }
  v3 = *(__int64 (__fastcall **)())&src[24];
  v10 = *(_QWORD *)&src[16];
  v12 = *(_QWORD *)&src[40];
  v11 = *(_QWORD *)&src[32];
  v13 = *(_QWORD *)&src[48];
  v69 = *(_QWORD *)&src[56];
  if ( !*(_QWORD *)&src[32] || *(_QWORD *)&src[32] == *(_QWORD *)&src[40] )
  {
    while ( v10 && v10 != *(_QWORD *)&src[24] )
    {
      v14 = v10 + 24;
      v11 = *(_QWORD *)(v10 + 8);
      v15 = *(_QWORD *)(v10 + 16);
      v12 = v11 + 32 * v15;
      v10 += 24LL;
      if ( v15 )
        goto LABEL_15;
    }
    v27 = &off_10B698;
    if ( !*(_QWORD *)&src[48] || *(_QWORD *)&src[48] == v69 )
      goto LABEL_84;
    v17 = *(_QWORD *)&src[48] + 32LL;
    v16 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)&src[16];
LABEL_15:
    v16 = v11 + 32;
    v10 = v14;
    v17 = *(_QWORD *)&src[48];
    v13 = v11;
  }
  v71 = v70(v13);
  v28 = 6LL;
  while ( 1 )
  {
    if ( v16 && v16 != v12 )
    {
      v29 = v10;
LABEL_41:
      v58 = v17;
      v17 = v16;
      v16 += 32LL;
      v10 = v29;
      goto LABEL_45;
    }
    while ( v10 && (__int64 (__fastcall *)())v10 != v3 )
    {
      v29 = v10 + 24;
      v16 = *(_QWORD *)(v10 + 8);
      v30 = *(_QWORD *)(v10 + 16);
      v12 = v16 + 32 * v30;
      v10 += 24LL;
      if ( v30 )
        goto LABEL_41;
    }
    if ( !v17 || v17 == v69 )
      break;
    v58 = v17 + 32;
    v16 = 0LL;
LABEL_45:
    v31 = v70(v17);
    v32 = *(_QWORD *)(v31 + 16);
    if ( v32 == *(_QWORD *)(v71 + 16) )
    {
      v17 = v58;
      if ( !bcmp(*(const void **)(v31 + 8), *(const void **)(v71 + 8), v32) )
        continue;
    }
    goto LABEL_56;
  }
  v34 = *(_WORD **)(v71 + 8);
  v35 = *(_QWORD *)(v71 + 16);
  if ( v35 == 1 )
  {
    v2 = (__int128 *)*(unsigned __int8 *)v34;
    goto LABEL_17;
  }
  if ( v35 == 2 && *v34 == 12380 )
  {
    v2 = 0LL;
    v18 = a2;
    goto LABEL_18;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(src, v34, v35, a2);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&src[16];
  *(_OWORD *)(a1 + 16) = *(_OWORD *)src;
  v28 = 5LL;
LABEL_56:
  result = a1;
  *(_QWORD *)(a1 + 8) = v28;
  *(_QWORD *)a1 = 2LL;
LABEL_57:
  if ( v50 )
  {
    _rust_dealloc(v65, v50, 1LL);
    return a1;
  }
  return result;
}
