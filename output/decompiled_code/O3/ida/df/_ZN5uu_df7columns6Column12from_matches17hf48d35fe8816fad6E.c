_QWORD *__fastcall uu_df::columns::Column::from_matches(_QWORD *a1, _QWORD *a2)
{
  char flag; // bp
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // r15
  char v14; // di
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 i; // rdi
  __int64 v19; // r8
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // r13
  __int64 v26; // rdi
  __int64 v28; // r14
  __int64 v29; // rax
  signed __int64 v30; // r15
  __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  int v37; // ecx
  char v38; // r15
  _QWORD *v39; // r13
  __int64 v40; // r12
  __int64 v41; // rax
  const void *v42; // rsi
  void *v43; // r14
  unsigned __int8 *s2; // [rsp+8h] [rbp-E0h]
  __int64 v45; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+18h] [rbp-D0h]
  __int64 v47; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v48; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v49; // [rsp+30h] [rbp-B8h]
  __int64 v50; // [rsp+38h] [rbp-B0h]
  __int128 v51; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD *v52; // [rsp+50h] [rbp-98h]
  __int64 v53; // [rsp+58h] [rbp-90h]
  __int64 v54; // [rsp+60h] [rbp-88h]
  __int64 j; // [rsp+70h] [rbp-78h]
  __int64 v56; // [rsp+78h] [rbp-70h]
  unsigned __int64 v57; // [rsp+80h] [rbp-68h]
  _QWORD v58[2]; // [rsp+88h] [rbp-60h] BYREF
  _QWORD v59[10]; // [rsp+98h] [rbp-50h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_5f995df778c88d2f993662794f843320_15_llvm_13646445757275454229,
           10LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         a2,
         anon_5f995df778c88d2f993662794f843320_6_llvm_13646445757275454229,
         6LL);
  v6 = a2[2];
  if ( !v6 )
    goto LABEL_8;
  v7 = a2[1];
  v8 = 16 * v6;
  v9 = 97LL;
  v10 = 0LL;
  v11 = 0LL;
  while ( *(_QWORD *)(v7 + v10 + 8) != 6LL
       || anon_5f995df778c88d2f993662794f843320_10_llvm_13646445757275454229 ^ **(_DWORD **)(v7 + v10) | *(_WORD *)(*(_QWORD *)(v7 + v10) + 4LL) ^ 0x7475 )
  {
    v10 += 16LL;
    v9 += 104LL;
    ++v11;
    if ( v8 == v10 )
      goto LABEL_8;
  }
  v12 = a2[5];
  if ( v11 >= v12 )
    core::panicking::panic_bounds_check(
      v11,
      v12,
      &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
      v8,
      v9);
  v13 = a2[4];
  v14 = *(_BYTE *)(v13 + v9);
  if ( v14 == 3 )
  {
LABEL_8:
    if ( flag )
    {
      if ( v5 )
        goto LABEL_10;
LABEL_23:
      v15 = _rust_alloc(7LL, 1LL);
      if ( v15 )
      {
        *(_DWORD *)v15 = 33622784;
        *(_WORD *)(v15 + 4) = 1027;
        goto LABEL_25;
      }
LABEL_95:
      alloc::alloc::handle_alloc_error(1LL, 7LL);
    }
    if ( v5 )
    {
LABEL_13:
      v16 = _rust_alloc(6LL, 1LL);
      if ( v16 )
      {
        *(_DWORD *)v16 = 134678016;
        *(_WORD *)(v16 + 4) = 1289;
LABEL_37:
        a1[1] = 6LL;
        a1[2] = v16;
        a1[3] = 6LL;
        goto LABEL_38;
      }
      goto LABEL_96;
    }
LABEL_35:
    v16 = _rust_alloc(6LL, 1LL);
    if ( v16 )
    {
      *(_DWORD *)v16 = 50462976;
      *(_WORD *)(v16 + 4) = 1284;
      goto LABEL_37;
    }
LABEL_96:
    alloc::alloc::handle_alloc_error(1LL, 6LL);
  }
  if ( flag )
  {
    if ( v5 )
    {
      if ( v14 != 2 )
      {
LABEL_10:
        v15 = _rust_alloc(7LL, 1LL);
        if ( v15 )
        {
          *(_DWORD *)v15 = 117836544;
          *(_WORD *)(v15 + 4) = 2312;
LABEL_25:
          *(_BYTE *)(v15 + 6) = 5;
          a1[1] = 7LL;
          a1[2] = v15;
          a1[3] = 7LL;
LABEL_38:
          *a1 = 0LL;
          return a1;
        }
        goto LABEL_95;
      }
    }
    else if ( v14 != 2 )
    {
      goto LABEL_23;
    }
    goto LABEL_98;
  }
  if ( v5 )
  {
    if ( v14 != 2 )
      goto LABEL_13;
LABEL_98:
    core::panicking::panic(aInternalErrorE_3, 40LL, &off_100280, v8);
  }
  if ( v14 != 2 )
    goto LABEL_35;
  v17 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( *(_QWORD *)(v7 + v17 + 8) == 6LL )
    {
      v19 = anon_5f995df778c88d2f993662794f843320_10_llvm_13646445757275454229 ^ **(_DWORD **)(v7 + v17) | *(_WORD *)(*(_QWORD *)(v7 + v17) + 4LL) ^ 0x7475u;
      if ( !(_DWORD)v19 )
        break;
    }
    v17 += 16LL;
    v13 += 104LL;
    if ( v8 == v17 )
      core::option::unwrap_failed(&off_100250);
  }
  if ( i >= v12 )
    core::panicking::panic_bounds_check(
      i,
      v12,
      &anon_37e8404f29ea422d3c165b81a7597284_2_llvm_3498370989897006048,
      v8,
      v19);
  v20 = 0xD5B29837CF1E5FA5LL;
  v21 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(
          v13,
          0x838CBAD8DA52F225LL,
          0xD5B29837CF1E5FA5LL,
          v8);
  if ( v21 != 0x838CBAD8DA52F225LL || v22 != 0xD5B29837CF1E5FA5LL )
  {
    v58[0] = &anon_5f995df778c88d2f993662794f843320_10_llvm_13646445757275454229;
    v58[1] = 6LL;
    v45 = 0LL;
    v46 = v21;
    v47 = v22;
    v48 = 0x838CBAD8DA52F225LL;
    v49 = 0xD5B29837CF1E5FA5LL;
    v59[0] = v58;
    v59[1] = <&T as core::fmt::Display>::fmt;
    v59[2] = &v45;
    v59[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v51 = &anon_37e8404f29ea422d3c165b81a7597284_5_llvm_3498370989897006048;
    *((_QWORD *)&v51 + 1) = 2LL;
    v54 = 0LL;
    v52 = v59;
    v53 = 2LL;
    core::panicking::panic_fmt(&v51, &anon_37e8404f29ea422d3c165b81a7597284_7_llvm_3498370989897006048);
  }
  v23 = *(_QWORD *)(v13 + 56);
  v24 = v23 + 24LL * *(_QWORD *)(v13 + 64);
  v45 = 0LL;
  v46 = 8LL;
  v47 = 0LL;
  *(_QWORD *)&v51 = 0LL;
  *((_QWORD *)&v51 + 1) = 1LL;
  v25 = 0LL;
  v26 = 0LL;
  for ( j = v24; ; v24 = j )
  {
    v52 = v25;
    if ( !v26 || v26 == v20 )
    {
      while ( v23 && v23 != v24 )
      {
        v28 = *(_QWORD *)(v23 + 16);
        v23 += 24LL;
        if ( v28 )
        {
          v26 = *(_QWORD *)(v23 - 16);
          v20 = v26 + 32 * v28;
          goto LABEL_47;
        }
      }
      a1[3] = v52;
      *(_OWORD *)(a1 + 1) = v51;
      *a1 = 0LL;
      goto LABEL_92;
    }
LABEL_47:
    v56 = v26;
    v29 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}}();
    v57 = v20;
    s2 = *(unsigned __int8 **)(v29 + 8);
    v30 = *(_QWORD *)(v29 + 16);
    v31 = v46;
    v50 = v47;
    if ( v47 )
      break;
LABEL_53:
    v20 = v57;
    if ( v50 == v45 )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v45);
      v31 = v46;
    }
    v34 = v50;
    v35 = 16 * v50;
    *(_QWORD *)(v31 + v35) = s2;
    *(_QWORD *)(v31 + v35 + 8) = v30;
    v47 = v34 + 1;
    if ( v30 == 4 )
    {
      if ( *(_DWORD *)s2 == 1702521203 )
      {
        v38 = 1;
      }
      else if ( *(_DWORD *)s2 == 1684370293 )
      {
        v38 = 2;
      }
      else
      {
        v38 = 10;
        if ( *(_DWORD *)s2 != 1701603686 )
LABEL_101:
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, v59, &unk_100230, &off_100268);
      }
    }
    else
    {
      if ( v30 == 5 )
      {
        if ( !(*(_DWORD *)s2 ^ 0x65737569 | s2[4] ^ 0x64) )
        {
          v38 = 7;
          goto LABEL_82;
        }
        if ( !(*(_DWORD *)s2 ^ 0x69617661 | s2[4] ^ 0x6C) )
        {
          v38 = 3;
          goto LABEL_82;
        }
        v36 = *(_DWORD *)s2 ^ 0x6E656370;
        v37 = s2[4] ^ 0x74;
        v38 = 4;
      }
      else
      {
        if ( v30 != 6 )
          goto LABEL_101;
        if ( !(*(_DWORD *)s2 ^ 0x72756F73 | *((unsigned __int16 *)s2 + 2) ^ 0x6563) )
        {
          v38 = 0;
          goto LABEL_82;
        }
        if ( !(*(_DWORD *)s2 ^ 0x79747366 | *((unsigned __int16 *)s2 + 2) ^ 0x6570) )
        {
          v38 = 11;
          goto LABEL_82;
        }
        if ( !(*(_DWORD *)s2 ^ 0x746F7469 | *((unsigned __int16 *)s2 + 2) ^ 0x6C61) )
        {
          v38 = 6;
          goto LABEL_82;
        }
        if ( !(*(_DWORD *)s2 ^ 0x61766169 | *((unsigned __int16 *)s2 + 2) ^ 0x6C69) )
        {
          v38 = 8;
          goto LABEL_82;
        }
        if ( !(*(_DWORD *)s2 ^ 0x65637069 | *((unsigned __int16 *)s2 + 2) ^ 0x746E) )
        {
          v38 = 9;
          goto LABEL_82;
        }
        v36 = *(_DWORD *)s2 ^ 0x67726174;
        v37 = *((unsigned __int16 *)s2 + 2) ^ 0x7465;
        v38 = 5;
      }
      if ( v36 | v37 )
        goto LABEL_101;
    }
LABEL_82:
    v39 = v52;
    if ( v52 == (_QWORD *)v51 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v51);
    v26 = v56 + 32;
    *((_BYTE *)v39 + *((_QWORD *)&v51 + 1)) = v38;
    v25 = (_QWORD *)((char *)v39 + 1);
  }
  v32 = 16 * v50;
  v33 = 0LL;
  while ( v30 != *(_QWORD *)(v31 + v33 + 8) || bcmp(*(const void **)(v31 + v33), s2, v30) )
  {
    v33 += 16LL;
    if ( v32 == v33 )
      goto LABEL_53;
  }
  if ( !v30 )
  {
    v43 = &dword_0 + 1;
    v42 = s2;
    goto LABEL_90;
  }
  if ( v30 < 0 )
  {
    v40 = 0LL;
LABEL_103:
    alloc::raw_vec::handle_error(v40, v30);
  }
  v40 = 1LL;
  v41 = _rust_alloc(v30, 1LL);
  v42 = s2;
  if ( !v41 )
    goto LABEL_103;
  v43 = (void *)v41;
LABEL_90:
  memcpy(v43, v42, v30);
  a1[1] = v30;
  a1[2] = v43;
  a1[3] = v30;
  *a1 = 1LL;
  if ( (_QWORD)v51 )
    _rust_dealloc(*((_QWORD *)&v51 + 1), v51, 1LL);
LABEL_92:
  if ( v45 )
    _rust_dealloc(v46, 16 * v45, 8LL);
  return a1;
}
