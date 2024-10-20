__int64 __fastcall uu_expand::Options::new(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r12
  size_t v6; // r15
  unsigned __int8 *v7; // r13
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rdx
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v13; // r8d
  int v14; // edi
  unsigned __int64 *v15; // rax
  unsigned __int64 *v16; // r13
  size_t v17; // rbx
  unsigned __int64 v18; // rbp
  size_t v19; // r13
  unsigned int v20; // eax
  int v21; // r9d
  unsigned __int8 *v22; // r14
  unsigned __int8 *v23; // r12
  unsigned __int8 *v24; // rsi
  __int64 v25; // rbp
  unsigned __int8 *v26; // rdx
  int v27; // ecx
  int v28; // r8d
  int v29; // edi
  __int64 v30; // rdx
  unsigned __int8 *v31; // rsi
  int v32; // ecx
  int v33; // ecx
  unsigned __int64 *v34; // rax
  char flag; // r12
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // rbp
  _BYTE *v42; // rax
  unsigned __int64 *v44; // rax
  __int64 v45; // rax
  signed __int64 v46; // r15
  unsigned __int8 *v47; // rax
  signed __int64 v48; // rbx
  int v49; // ecx
  unsigned __int8 *v50; // r13
  unsigned int v51; // edi
  int v52; // edi
  int v53; // edx
  int v54; // eax
  unsigned __int8 *v55; // rsi
  unsigned __int8 *v56; // rax
  unsigned __int8 *v57; // rax
  size_t n; // [rsp+8h] [rbp-210h]
  signed __int64 na; // [rsp+8h] [rbp-210h]
  size_t nb; // [rsp+8h] [rbp-210h]
  __int64 v61; // [rsp+10h] [rbp-208h]
  int v62; // [rsp+10h] [rbp-208h]
  __int64 v63; // [rsp+18h] [rbp-200h]
  unsigned __int64 v64; // [rsp+20h] [rbp-1F8h]
  unsigned __int8 *src; // [rsp+28h] [rbp-1F0h]
  void *srca; // [rsp+28h] [rbp-1F0h]
  __int64 v67; // [rsp+30h] [rbp-1E8h]
  __int128 v69; // [rsp+40h] [rbp-1D8h] BYREF
  __int128 v70; // [rsp+50h] [rbp-1C8h]
  __int64 v71; // [rsp+60h] [rbp-1B8h]
  __int128 v72; // [rsp+70h] [rbp-1A8h] BYREF
  __int128 *v73; // [rsp+80h] [rbp-198h]
  __int64 (__fastcall *v74)(); // [rsp+88h] [rbp-190h]
  size_t v75; // [rsp+90h] [rbp-188h]
  unsigned __int64 v76; // [rsp+98h] [rbp-180h] BYREF
  _BYTE v77[40]; // [rsp+A0h] [rbp-178h]
  __int128 v78; // [rsp+C8h] [rbp-150h]
  __int64 v79; // [rsp+D8h] [rbp-140h]
  __int128 v80; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v81; // [rsp+F0h] [rbp-128h]
  __int128 v82; // [rsp+100h] [rbp-118h]
  __int64 v83; // [rsp+110h] [rbp-108h]
  __int128 v84; // [rsp+120h] [rbp-F8h] BYREF
  __int128 v85; // [rsp+130h] [rbp-E8h]
  __int64 v86; // [rsp+140h] [rbp-D8h]
  const char *v87; // [rsp+148h] [rbp-D0h] BYREF
  __int64 v88; // [rsp+150h] [rbp-C8h]
  __int64 v89; // [rsp+158h] [rbp-C0h]
  unsigned __int8 *v90; // [rsp+160h] [rbp-B8h]
  __int64 v91; // [rsp+168h] [rbp-B0h] BYREF
  __int128 v92; // [rsp+170h] [rbp-A8h]
  __int128 v93; // [rsp+180h] [rbp-98h]
  __int128 v94; // [rsp+190h] [rbp-88h]
  __int64 v95; // [rsp+1A0h] [rbp-78h]
  __int64 v96; // [rsp+1A8h] [rbp-70h] BYREF
  __int128 v97; // [rsp+1B0h] [rbp-68h]
  __int128 v98; // [rsp+1C0h] [rbp-58h]
  __int128 v99; // [rsp+1D0h] [rbp-48h]
  __int64 v100; // [rsp+1E0h] [rbp-38h]

  v2 = a2;
  v3 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &v76,
    a2,
    &anon_c0a2baf3a258817979713691effb9d34_6_llvm_9602832291383151297,
    4LL);
  v87 = (const char *)&anon_c0a2baf3a258817979713691effb9d34_6_llvm_9602832291383151297;
  v88 = 4LL;
  if ( v76 )
  {
    v86 = *(_QWORD *)&v77[32];
    v85 = *(_OWORD *)&v77[16];
    v84 = *(_OWORD *)v77;
    *(_QWORD *)&v72 = &v87;
    *((_QWORD *)&v72 + 1) = <&T as core::fmt::Display>::fmt;
    v73 = &v84;
    v74 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v69 = &anon_c2780e5a99e14a30c5165ca0ecc2a4bf_4_llvm_7244247611968800107;
    *((_QWORD *)&v69 + 1) = 2LL;
    v71 = 0LL;
    *(_QWORD *)&v70 = &v72;
    *((_QWORD *)&v70 + 1) = 2LL;
    core::panicking::panic_fmt(&v69, &anon_c2780e5a99e14a30c5165ca0ecc2a4bf_6_llvm_7244247611968800107);
  }
  v80 = *(_OWORD *)&v77[8];
  v81 = *(_OWORD *)&v77[24];
  v82 = v78;
  v83 = v79;
  if ( !*(_QWORD *)v77 )
  {
    v15 = (unsigned __int64 *)_rust_alloc(8LL, 8LL);
    if ( !v15 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v16 = v15;
    *v15 = 8LL;
    v61 = 1LL;
    LOBYTE(v17) = 0;
    n = 1LL;
    goto LABEL_67;
  }
  v91 = *(_QWORD *)v77;
  v92 = v80;
  v93 = v81;
  v94 = v82;
  v95 = v83;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v84, &v91);
  v4 = *((_QWORD *)&v84 + 1);
  alloc::str::join_generic_copy(&v76, *((_QWORD *)&v84 + 1), v85, asc_19120, 1LL);
  v5 = *(_QWORD *)v77;
  v6 = *(_QWORD *)v77 + *(_QWORD *)&v77[8];
  v89 = a2;
  if ( *(_QWORD *)&v77[8] )
  {
    v7 = 0LL;
    v8 = *(unsigned __int8 **)v77;
    while ( 1 )
    {
      v11 = *v8;
      if ( (v11 & 0x80u) != 0 )
      {
        v12 = v11 & 0x1F;
        v13 = v8[1] & 0x3F;
        if ( (unsigned __int8)v11 <= 0xDFu )
        {
          v9 = v8 + 2;
          v10 = v13 | (v12 << 6);
          if ( v10 != 44 )
            goto LABEL_6;
        }
        else
        {
          v14 = (v13 << 6) | v8[2] & 0x3F;
          if ( (unsigned __int8)v11 < 0xF0u )
          {
            v9 = v8 + 3;
            v10 = v14 | (v12 << 12);
            if ( v10 != 44 )
            {
LABEL_6:
              if ( v10 != 32 )
                goto LABEL_21;
            }
          }
          else
          {
            v9 = v8 + 4;
            v10 = (v14 << 6) | v8[3] & 0x3F | ((v11 & 7) << 18);
            if ( v10 != 44 )
              goto LABEL_6;
          }
        }
      }
      else
      {
        v9 = v8 + 1;
        v10 = *v8;
        if ( v11 != 44 )
          goto LABEL_6;
      }
      v7 = &v9[v7 - v8];
      v8 = v9;
      if ( v9 == (unsigned __int8 *)v6 )
      {
        v7 = *(unsigned __int8 **)&v77[8];
        goto LABEL_21;
      }
    }
  }
  v7 = 0LL;
LABEL_21:
  v18 = v76;
  if ( *(_QWORD *)&v77[8] == (_QWORD)v7 )
  {
    v34 = (unsigned __int64 *)_rust_alloc(8LL, 8LL);
    if ( !v34 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v16 = v34;
    *v34 = 8LL;
    n = 1LL;
    LOBYTE(v17) = 0;
    v61 = 1LL;
    v3 = a1;
    if ( v18 )
      goto LABEL_63;
    goto LABEL_64;
  }
  v90 = (unsigned __int8 *)(*(_QWORD *)&v77[8] - (_QWORD)v7);
  v64 = v76;
  v63 = v4;
  v67 = *(_QWORD *)v77;
  v19 = (size_t)&v7[*(_QWORD *)v77];
  *(_QWORD *)&v69 = 0LL;
  *((_QWORD *)&v69 + 1) = 8LL;
  *(_QWORD *)&v70 = 0LL;
  v20 = 0;
  n = 0LL;
  v17 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v75 = v19;
  v23 = 0LL;
  while ( 2 )
  {
    v24 = v22;
    while ( 1 )
    {
      v25 = v19;
      v26 = v23;
      if ( v19 == v6 )
        break;
      v20 = *(unsigned __int8 *)v19;
      if ( (v20 & 0x80u) != 0 )
      {
        v27 = v20 & 0x1F;
        v28 = *(_BYTE *)(v19 + 1) & 0x3F;
        if ( (unsigned __int8)v20 <= 0xDFu )
        {
          v19 += 2LL;
          v20 = v28 | (v27 << 6);
        }
        else
        {
          v29 = (v28 << 6) | *(_BYTE *)(v19 + 2) & 0x3F;
          if ( (unsigned __int8)v20 < 0xF0u )
          {
            v19 += 3LL;
            v20 = (v27 << 12) | v29;
          }
          else
          {
            v19 += 4LL;
            v20 = ((v20 & 7) << 18) | (v29 << 6) | *(_BYTE *)(v25 + 3) & 0x3F;
          }
        }
      }
      else
      {
        ++v19;
      }
      v23 += v19 - v25;
      v22 = &v26[v19 - v25];
      if ( v20 == 44 || v20 == 32 )
      {
        v30 = v26 - v24;
        if ( !v30 )
          goto LABEL_25;
        goto LABEL_40;
      }
    }
    v19 = v6;
    v22 = v24;
    v30 = v90 - v24;
    if ( v90 == v24 )
      goto LABEL_25;
LABEL_40:
    v62 = v21;
    v31 = &v24[v75];
    while ( 1 )
    {
      v32 = *v31;
      LOBYTE(v20) = 2;
      if ( v32 != 43 )
        break;
LABEL_41:
      ++v31;
      v17 = v20;
      if ( !--v30 )
      {
        v17 = v20;
        goto LABEL_24;
      }
    }
    if ( v32 == 47 )
    {
      LOBYTE(v20) = 1;
      goto LABEL_41;
    }
    core::str::converts::from_utf8(&v76, v31, v30);
    if ( v76 )
    {
      v72 = *(_OWORD *)v77;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v72, &unk_E5598, &off_E5658);
    }
    src = *(unsigned __int8 **)v77;
    na = *(_QWORD *)&v77[8];
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v72);
    if ( (_BYTE)v72 )
    {
      if ( BYTE1(v72) == 2 )
      {
        v19 = na;
        if ( na )
        {
          if ( na < 0 )
          {
            v25 = 0LL;
            goto LABEL_143;
          }
          v25 = 1LL;
          v45 = _rust_alloc(na, 1LL);
          if ( !v45 )
          {
            v23 = (unsigned __int8 *)na;
            goto LABEL_143;
          }
          v22 = (unsigned __int8 *)v45;
          v19 = na;
        }
        else
        {
          v22 = (_BYTE *)(&dword_0 + 1);
        }
        memcpy(v22, src, v19);
        v17 = v19 >> 8;
        v46 = 0x8000000000000004LL;
        goto LABEL_116;
      }
      v23 = src;
      if ( !na )
      {
        v48 = 0LL;
LABEL_124:
        v55 = &src[v48];
        v25 = na - v48;
        if ( na == v48 || (*v55 | 4) != 0x2F )
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v76, v55, v25);
          LOBYTE(v19) = v76;
          v22 = *(unsigned __int8 **)v77;
          v17 = v76 >> 8;
          na = *(_QWORD *)&v77[8];
          v46 = 0x8000000000000000LL;
          goto LABEL_116;
        }
        v46 = na - v48;
        if ( v25 != 1 && (char)v55[1] <= -65 )
          core::str::slice_error_fail(&src[v48], v25, 0LL, 1LL, &off_E5670);
        v19 = (size_t)&src[v48];
        v23 = (_BYTE *)(&dword_0 + 1);
        v56 = (unsigned __int8 *)_rust_alloc(1LL, 1LL);
        v25 = 1LL;
        if ( v56 )
        {
          v22 = v56;
          *v56 = *(_BYTE *)v19;
          if ( v46 < 0 )
          {
            v25 = 0LL;
          }
          else
          {
            v57 = (unsigned __int8 *)_rust_alloc(v46, 1LL);
            if ( v57 )
            {
              v23 = v57;
              memcpy(v57, (const void *)v19, v46);
              LOBYTE(v19) = 1;
              v17 = 0LL;
              v25 = v46;
              na = 1LL;
              goto LABEL_116;
            }
          }
          alloc::raw_vec::handle_error(v25, v46);
        }
        goto LABEL_143;
      }
      v48 = 0LL;
      while ( 1 )
      {
        v49 = *v23;
        if ( (v49 & 0x80u) == 0 )
          break;
        v52 = v49 & 0x1F;
        v53 = v23[1] & 0x3F;
        if ( (unsigned __int8)v49 <= 0xDFu )
        {
          v50 = v23 + 2;
          v51 = v53 | (v52 << 6);
        }
        else
        {
          v54 = (v53 << 6) | v23[2] & 0x3F;
          if ( (unsigned __int8)v49 >= 0xF0u )
          {
            v50 = v23 + 4;
            v49 = ((v49 & 7) << 18) | (v54 << 6) | v23[3] & 0x3F;
            goto LABEL_101;
          }
          v50 = v23 + 3;
          v51 = (v52 << 12) | v54;
        }
LABEL_107:
        if ( v51 - 48 >= 0xA && (v51 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::n::lookup()) )
          goto LABEL_124;
        v48 = (signed __int64)&v50[v48 - (_QWORD)v23];
        v23 = v50;
        if ( v50 == &src[na] )
        {
          v48 = na;
          goto LABEL_124;
        }
      }
      v50 = v23 + 1;
LABEL_101:
      v51 = v49;
      goto LABEL_107;
    }
    srca = (void *)*((_QWORD *)&v72 + 1);
    if ( !*((_QWORD *)&v72 + 1) )
    {
      v46 = 0x8000000000000003LL;
LABEL_116:
      if ( (_QWORD)v69 )
        _rust_dealloc(*((_QWORD *)&v69 + 1), 8 * v69, 8LL);
      *(_BYTE *)(a1 + 8) = v19;
      *(_DWORD *)(a1 + 9) = v17;
      *(_BYTE *)(a1 + 15) = BYTE6(v17);
      *(_WORD *)(a1 + 13) = WORD2(v17);
      *(_QWORD *)(a1 + 16) = v22;
      *(_QWORD *)(a1 + 24) = na;
      *(_QWORD *)(a1 + 32) = v46;
      v3 = a1;
      *(_QWORD *)(a1 + 40) = v23;
      *(_QWORD *)(a1 + 48) = v25;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      if ( v64 )
        _rust_dealloc(v67, v64, 1LL);
      if ( (_QWORD)v84 )
        _rust_dealloc(v63, 16 * v84, 8LL);
      return v3;
    }
    if ( (_QWORD)v70 && *(_QWORD *)(*((_QWORD *)&v69 + 1) + 8 * v70 - 8) >= *((_QWORD *)&v72 + 1) )
    {
      v46 = 0x8000000000000005LL;
      goto LABEL_116;
    }
    nb = v70;
    if ( (v62 & 1) != 0 )
    {
      v23 = (_BYTE *)(&dword_0 + 1);
      v47 = (unsigned __int8 *)_rust_alloc(1LL, 1LL);
      v22 = v47;
      v25 = 1LL;
      if ( (_BYTE)v17 == 1 )
      {
        if ( v47 )
        {
          *v47 = 47;
LABEL_113:
          v46 = 0x8000000000000002LL;
          na = 1LL;
          LOBYTE(v19) = 1;
          v17 = 0LL;
          goto LABEL_116;
        }
      }
      else if ( v47 )
      {
        *v47 = 43;
        goto LABEL_113;
      }
LABEL_143:
      alloc::raw_vec::handle_error(v25, v23);
    }
    v33 = (unsigned __int8)v62;
    if ( (_BYTE)v17 )
      v33 = 1;
    v62 = v33;
    if ( (_QWORD)v70 == (_QWORD)v69 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v69);
    v20 = DWORD2(v69);
    *(_QWORD *)(*((_QWORD *)&v69 + 1) + 8 * nb) = srca;
    n = nb + 1;
    *(_QWORD *)&v70 = n;
LABEL_24:
    v21 = v62;
LABEL_25:
    if ( v25 != v6 )
      continue;
    break;
  }
  if ( n )
  {
    if ( n == 1 )
      LOBYTE(v17) = 0;
    v16 = (unsigned __int64 *)*((_QWORD *)&v69 + 1);
    v61 = v69;
    v3 = a1;
    v4 = v63;
    v5 = v67;
    v18 = v64;
    if ( !v64 )
      goto LABEL_64;
LABEL_63:
    _rust_dealloc(v5, v18, 1LL);
    goto LABEL_64;
  }
  v44 = (unsigned __int64 *)_rust_alloc(8LL, 8LL);
  v3 = a1;
  v4 = v63;
  v5 = v67;
  v18 = v64;
  if ( !v44 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  v16 = v44;
  *v44 = 8LL;
  if ( (_QWORD)v69 )
    _rust_dealloc(*((_QWORD *)&v69 + 1), 8 * v69, 8LL);
  n = 1LL;
  LOBYTE(v17) = 0;
  v61 = 1LL;
  if ( v64 )
    goto LABEL_63;
LABEL_64:
  if ( (_QWORD)v84 )
    _rust_dealloc(v4, 16 * v84, 8LL);
  v2 = v89;
LABEL_67:
  LOBYTE(v75) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                  v2,
                  anon_c0a2baf3a258817979713691effb9d34_7_llvm_9602832291383151297,
                  7LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v2,
           anon_c0a2baf3a258817979713691effb9d34_8_llvm_9602832291383151297,
           7LL);
  v36 = *v16;
  if ( n == 1 )
  {
    v37 = *v16;
  }
  else
  {
    v38 = 1LL;
    v37 = *v16;
    do
    {
      v39 = v16[v38];
      if ( v37 <= v39 - v36 )
        v37 = v16[v38] - v36;
      ++v38;
      v36 = v39;
    }
    while ( n != v38 );
  }
  alloc::str::<impl str>::repeat(&v72, asc_19121, 1LL, v37);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &v76,
    v2,
    anon_c0a2baf3a258817979713691effb9d34_9_llvm_9602832291383151297,
    5LL);
  v87 = anon_c0a2baf3a258817979713691effb9d34_9_llvm_9602832291383151297;
  v88 = 5LL;
  if ( v76 )
  {
    v71 = *(_QWORD *)&v77[32];
    v70 = *(_OWORD *)&v77[16];
    v69 = *(_OWORD *)v77;
    *(_QWORD *)&v84 = &v87;
    *((_QWORD *)&v84 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v85 = &v69;
    *((_QWORD *)&v85 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v80 = &anon_c2780e5a99e14a30c5165ca0ecc2a4bf_4_llvm_7244247611968800107;
    *((_QWORD *)&v80 + 1) = 2LL;
    *(_QWORD *)&v82 = 0LL;
    *(_QWORD *)&v81 = &v84;
    *((_QWORD *)&v81 + 1) = 2LL;
    core::panicking::panic_fmt(&v80, &anon_c2780e5a99e14a30c5165ca0ecc2a4bf_6_llvm_7244247611968800107);
  }
  v80 = *(_OWORD *)&v77[8];
  v81 = *(_OWORD *)&v77[24];
  v82 = v78;
  v83 = v79;
  if ( *(_QWORD *)v77 )
  {
    v96 = *(_QWORD *)v77;
    v97 = v80;
    v98 = v81;
    v99 = v82;
    v100 = v83;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v76, &v96);
  }
  else
  {
    v40 = _rust_alloc(24LL, 8LL);
    if ( !v40 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v41 = (_QWORD *)v40;
    v42 = (_BYTE *)_rust_alloc(1LL, 1LL);
    if ( !v42 )
      alloc::raw_vec::handle_error(1LL, 1LL);
    *v42 = 45;
    *v41 = 1LL;
    v41[1] = v42;
    v41[2] = 1LL;
    v76 = 1LL;
    *(_QWORD *)v77 = v41;
    *(_QWORD *)&v77[8] = 1LL;
  }
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&v77[8];
  *(_QWORD *)v3 = v76;
  *(_QWORD *)(v3 + 8) = *(_QWORD *)v77;
  *(_QWORD *)(v3 + 64) = v73;
  *(_OWORD *)(v3 + 48) = v72;
  *(_QWORD *)(v3 + 24) = v61;
  *(_QWORD *)(v3 + 32) = v16;
  *(_QWORD *)(v3 + 40) = n;
  *(_BYTE *)(v3 + 72) = v75;
  *(_BYTE *)(v3 + 73) = flag ^ 1;
  *(_BYTE *)(v3 + 74) = v17;
  return v3;
}
