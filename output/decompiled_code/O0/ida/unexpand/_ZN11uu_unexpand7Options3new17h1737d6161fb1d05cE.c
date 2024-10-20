__int64 *__fastcall uu_unexpand::Options::new(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r13
  bool v15; // zf
  __int64 v16; // rax
  size_t v17; // r14
  __int64 v18; // rax
  char v19; // bp
  char flag; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  char v28; // dl
  unsigned __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // rbx
  _BYTE *v32; // r15
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r10
  char v36; // si
  bool v37; // dl
  unsigned __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rdi
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // rbx
  unsigned __int64 v46; // rcx
  __int64 v47; // rsi
  const char *v48; // rdi
  unsigned __int64 v49; // rax
  __int64 i; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  char **v54; // r13
  unsigned __int64 v55; // r15
  __int128 *v56; // rbx
  __int64 v57; // r14
  __int64 v58; // rdx
  __int64 *v59; // rcx
  __int64 *result; // rax
  __int64 v61; // rbx
  const void *v62; // rbp
  void *v63; // r15
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  char **v69; // rsi
  _BYTE v70[72]; // [rsp+0h] [rbp-218h] BYREF
  __int128 v71; // [rsp+48h] [rbp-1D0h] BYREF
  unsigned __int64 v72; // [rsp+58h] [rbp-1C0h]
  __int64 (__fastcall *v73)(); // [rsp+60h] [rbp-1B8h]
  const char *v74; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v75; // [rsp+70h] [rbp-1A8h]
  __int64 v76; // [rsp+78h] [rbp-1A0h]
  _BYTE v77[64]; // [rsp+80h] [rbp-198h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-150h]
  __int64 v79; // [rsp+D0h] [rbp-148h]
  __int64 *v80; // [rsp+D8h] [rbp-140h]
  char **v81; // [rsp+E0h] [rbp-138h] BYREF
  unsigned __int64 v82; // [rsp+E8h] [rbp-130h]
  __int128 *v83; // [rsp+F0h] [rbp-128h]
  __int64 v84; // [rsp+F8h] [rbp-120h]
  __int64 v85; // [rsp+100h] [rbp-118h]
  __int128 v86; // [rsp+110h] [rbp-108h]
  __int64 v87; // [rsp+120h] [rbp-F8h]
  unsigned __int64 v88; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v89; // [rsp+138h] [rbp-E0h]
  unsigned __int64 v90; // [rsp+140h] [rbp-D8h]
  __int64 v91; // [rsp+148h] [rbp-D0h]
  __int64 v92; // [rsp+150h] [rbp-C8h]
  __int128 v93; // [rsp+158h] [rbp-C0h]
  unsigned __int64 v94; // [rsp+168h] [rbp-B0h]
  __int128 v95; // [rsp+170h] [rbp-A8h]
  __int128 v96; // [rsp+180h] [rbp-98h]
  __int128 v97; // [rsp+190h] [rbp-88h]
  __int64 v98; // [rsp+1A0h] [rbp-78h]
  __int128 v99; // [rsp+1B0h] [rbp-68h]
  __int128 v100; // [rsp+1C0h] [rbp-58h]
  __int128 v101; // [rsp+1D0h] [rbp-48h]
  __int64 v102; // [rsp+1E0h] [rbp-38h]

  v2 = a2;
  v80 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v70, a2, &unk_183DC, 4LL);
  v74 = (const char *)&unk_183DC;
  v75 = 4LL;
  if ( *(_QWORD *)v70 )
  {
    *(_OWORD *)&v77[48] = *(_OWORD *)&v70[56];
    *(_OWORD *)&v77[32] = *(_OWORD *)&v70[40];
    *(_OWORD *)&v77[16] = *(_OWORD *)&v70[24];
    *(_OWORD *)v77 = *(_OWORD *)&v70[8];
    *(_QWORD *)&v71 = &v74;
    *((_QWORD *)&v71 + 1) = <&T as core::fmt::Display>::fmt;
    v72 = (unsigned __int64)v77;
    v73 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v81 = &anon_3f3ecfa5fec0fabf186c1d94395aa807_3_llvm_11280687409328710743;
    v82 = 2LL;
    v85 = 0LL;
    v83 = &v71;
    v84 = 2LL;
    core::panicking::panic_fmt(&v81, &off_10AD48);
  }
  v3 = *(_QWORD *)&v70[8];
  v95 = *(_OWORD *)&v70[16];
  v96 = *(_OWORD *)&v70[32];
  v97 = *(_OWORD *)&v70[48];
  v98 = *(_QWORD *)&v70[64];
  if ( !*(_QWORD *)&v70[8] )
  {
    v18 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v18 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    if ( (v18 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v18, &off_10AD60);
    *(_QWORD *)v18 = 8LL;
    *(_QWORD *)&v86 = 1LL;
    *((_QWORD *)&v86 + 1) = v18;
    v87 = 1LL;
    goto LABEL_35;
  }
  *(_QWORD *)&v70[56] = v98;
  *(_OWORD *)&v70[40] = v97;
  *(_OWORD *)&v70[24] = v96;
  *(_OWORD *)&v70[8] = v95;
  *(_QWORD *)v70 = v3;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v88, v70);
  if ( !v89 || (v89 & 7) != 0 || v90 >> 59 )
    goto LABEL_115;
  alloc::str::join_generic_copy(v70, v89, v90, asc_1ECEC, 1LL);
  v4 = *(_QWORD *)&v70[8];
  if ( !*(_QWORD *)&v70[8] || (v5 = *(_QWORD *)&v70[16], *(__int64 *)&v70[16] < 0) )
    core::panicking::panic_nounwind(anon_ea5d52e0609cca556c29fc6699d6f586_39_llvm_13207799637797456089, 162LL);
  v79 = *(_QWORD *)v70;
  *(_DWORD *)v77 = 0;
  v78 = *(_QWORD *)&v70[8];
  core::char::methods::encode_utf8_raw(44LL, v77, 4LL);
  v91 = a2;
  if ( v6 >= 0x100 )
    core::result::unwrap_failed(
      anon_b8e768ed0ddf17f1539d76bb5aedca5a_46_llvm_9157631453777517788,
      32LL,
      &v81,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
  *(_QWORD *)&v71 = 0LL;
  *((_QWORD *)&v71 + 1) = 8LL;
  v72 = 0LL;
  *(_QWORD *)v70 = 0LL;
  *(_QWORD *)&v70[8] = v5;
  *(_QWORD *)&v70[16] = v4;
  *(_OWORD *)&v70[24] = v5;
  *(_QWORD *)&v70[40] = v5;
  *(_DWORD *)&v70[48] = *(_DWORD *)v77;
  *(_DWORD *)&v70[52] = 44;
  v70[56] = v6;
  *(_WORD *)&v70[64] = 1;
  do
  {
    v7 = *(_QWORD *)&v70[16];
    v8 = *(_QWORD *)&v70[24];
    <core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match(v77, &v70[16]);
    if ( *(_QWORD *)v77 )
    {
      v9 = *(_QWORD *)&v77[8] - *(_QWORD *)v70;
      if ( *(_QWORD *)&v77[8] < *(_QWORD *)v70 || *(_QWORD *)&v77[8] > v8 )
        goto LABEL_114;
      v10 = *(_QWORD *)v70 + v7;
      *(_QWORD *)v70 = *(_QWORD *)&v77[16];
      if ( !v10 )
        break;
    }
    else
    {
      if ( (v70[65] & 1) != 0 )
        break;
      v70[65] = 1;
      if ( (v70[64] & 1) == 0 && *(_QWORD *)&v70[8] == *(_QWORD *)v70 )
        break;
      v9 = *(_QWORD *)&v70[8] - *(_QWORD *)v70;
      if ( *(_QWORD *)&v70[8] < *(_QWORD *)v70 || *(_QWORD *)&v70[8] > *(_QWORD *)&v70[24] )
LABEL_114:
        core::panicking::panic_nounwind(anon_8fd984650b32faced47dbe24bc844e61_4_llvm_1964130512766541972, 102LL);
      v10 = *(_QWORD *)&v70[16] + *(_QWORD *)v70;
      if ( !(*(_QWORD *)&v70[16] + *(_QWORD *)v70) )
        break;
    }
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v74, v10, v9);
    if ( ((unsigned __int8)v74 & 1) != 0 )
    {
      if ( BYTE1(v74) == 2 )
      {
        v17 = 0x8000000000000001LL;
        v16 = 8LL;
        v14 = v78;
      }
      else
      {
        *(_QWORD *)v77 = v10;
        *(_QWORD *)&v77[8] = v9;
        *(_QWORD *)&v77[16] = v10;
        *(_QWORD *)&v77[24] = v9 + v10;
        *(_QWORD *)&v77[32] = 0LL;
        v14 = v78;
        do
          <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::Searcher>::next(&v81, v77);
        while ( !v81 );
        if ( v81 == (char **)((char *)&dword_0 + 1) )
        {
          v33 = v82;
          if ( v82 > v9 )
            core::panicking::panic_nounwind(anon_ea5d52e0609cca556c29fc6699d6f586_34_llvm_13207799637797456089, 102LL);
        }
        else
        {
          v33 = v9;
        }
        v17 = v9 - v33;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(v77, v17, 0LL);
        v61 = *(_QWORD *)&v77[8];
        if ( *(_QWORD *)v77 )
          alloc::raw_vec::handle_error(*(_QWORD *)&v77[8], *(_QWORD *)&v77[16]);
        v62 = (const void *)(v33 + v10);
        v63 = *(void **)&v77[16];
        core::intrinsics::copy_nonoverlapping::precondition_check(v62, *(_QWORD *)&v77[16], 1LL, 1LL, v17);
        memcpy(v63, v62, v17);
        *(_QWORD *)&v93 = v61;
        *((_QWORD *)&v93 + 1) = v63;
        v16 = 24LL;
      }
      goto LABEL_97;
    }
    v11 = v75;
    v12 = v72;
    if ( v72 == (_QWORD)v71 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v71);
    *(_QWORD *)(*((_QWORD *)&v71 + 1) + 8 * v12) = v11;
    v72 = v12 + 1;
  }
  while ( (v70[65] & 1) == 0 );
  if ( !*((_QWORD *)&v71 + 1) || (BYTE8(v71) & 7) != 0 || v72 > 0xFFFFFFFFFFFFFFFLL )
LABEL_115:
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  v13 = 0LL;
  v2 = v91;
  v14 = v78;
  while ( 8 * v72 != v13 )
  {
    v15 = *(_QWORD *)(*((_QWORD *)&v71 + 1) + v13) == 0LL;
    v13 += 8LL;
    if ( v15 )
    {
      v16 = 8LL;
      v17 = 0x8000000000000000LL;
      goto LABEL_97;
    }
  }
  if ( !v72 )
    goto LABEL_67;
  v27 = v72 & 3;
  if ( (v72 & 0x1FFFFFFFFFFFFFFFLL) - 1 >= 3 )
  {
    v28 = 1;
    v29 = 0LL;
    v30 = 0LL;
    do
    {
      v34 = *(_QWORD *)(*((_QWORD *)&v71 + 1) + 8 * v30);
      v35 = *(_QWORD *)(*((_QWORD *)&v71 + 1) + 8 * v30 + 8);
      v36 = v28 & (v34 > v29);
      v37 = v35 > v34;
      v38 = *(_QWORD *)(*((_QWORD *)&v71 + 1) + 8 * v30 + 16);
      LOBYTE(v35) = v36 & (v37 && v38 > v35);
      v29 = *(_QWORD *)(*((_QWORD *)&v71 + 1) + 8 * v30 + 24);
      v28 = v35 & (v29 > v38);
      v30 += 4LL;
    }
    while ( v72 - v27 != v30 );
  }
  else
  {
    v28 = 1;
    v29 = 0LL;
    v30 = 0LL;
  }
  if ( (v72 & 3) != 0 )
  {
    v39 = *((_QWORD *)&v71 + 1) + 8 * v30;
    v40 = 0LL;
    do
    {
      v41 = *(_QWORD *)(v39 + 8 * v40);
      v28 &= v41 > v29;
      ++v40;
      v29 = v41;
    }
    while ( v27 != v40 );
  }
  if ( (v28 & 1) != 0 )
  {
LABEL_67:
    v94 = v72;
    v93 = v71;
    v92 = 0LL;
    v86 = v71;
    v87 = v72;
    if ( v79 )
      _rust_dealloc(v78, v79, 1LL);
    if ( v88 )
    {
      if ( v88 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v42 = 16 * v88;
        *(_QWORD *)v70 = v89;
        *(_QWORD *)&v70[8] = 8LL;
        v43 = 16LL;
        goto LABEL_91;
      }
LABEL_121:
      core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
    }
    v43 = 8LL;
    v42 = 0LL;
LABEL_91:
    *(_QWORD *)&v70[v43] = v42;
    if ( *(_QWORD *)&v70[8] && *(_QWORD *)&v70[16] )
      _rust_dealloc(*(_QWORD *)v70, *(_QWORD *)&v70[16], *(_QWORD *)&v70[8]);
LABEL_35:
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v2, aAll, 3LL, &off_10AD78) )
      goto LABEL_39;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(v70, v2, &unk_183DC, 4LL);
    v74 = (const char *)&unk_183DC;
    v75 = 4LL;
    if ( (v70[0] & 1) != 0 )
    {
      *(_OWORD *)&v77[48] = *(_OWORD *)&v70[56];
      *(_OWORD *)&v77[32] = *(_OWORD *)&v70[40];
      *(_OWORD *)&v77[16] = *(_OWORD *)&v70[24];
      *(_OWORD *)v77 = *(_OWORD *)&v70[8];
      *(_QWORD *)&v71 = &v74;
      *((_QWORD *)&v71 + 1) = <&T as core::fmt::Display>::fmt;
      v72 = (unsigned __int64)v77;
      v73 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v81 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
      v69 = &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950;
    }
    else
    {
      if ( (v70[1] & 1) == 0 )
      {
        v19 = 0;
        goto LABEL_40;
      }
LABEL_39:
      v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v2, aFirstOnly, 10LL, &off_10AD90) ^ 1;
LABEL_40:
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v2, aNoUtf8, 7LL, &off_10ADA8);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v70, v2, aFile, 4LL);
      v74 = aFile;
      v75 = 4LL;
      if ( !*(_QWORD *)v70 )
      {
        v99 = *(_OWORD *)&v70[16];
        v100 = *(_OWORD *)&v70[32];
        v101 = *(_OWORD *)&v70[48];
        v102 = *(_QWORD *)&v70[64];
        if ( *(_QWORD *)&v70[8] )
        {
          *(_QWORD *)&v77[56] = v102;
          *(_OWORD *)&v77[40] = v101;
          *(_OWORD *)&v77[24] = v100;
          *(_OWORD *)&v77[8] = v99;
          *(_QWORD *)v77 = *(_QWORD *)&v70[8];
          v21 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v77[8]);
          if ( !v21 )
            goto LABEL_46;
          v22 = (*(__int64 (__fastcall **)(__int64))v77)(v21);
          if ( !v22 )
            goto LABEL_46;
          if ( !*(_QWORD *)&v77[56] )
            core::panicking::panic_const::panic_const_sub_overflow(&anon_ea5d52e0609cca556c29fc6699d6f586_4_llvm_13207799637797456089);
          --*(_QWORD *)&v77[56];
          <alloc::string::String as core::clone::Clone>::clone(v70, v22);
          v23 = *(_QWORD *)v70;
          if ( *(_QWORD *)v70 != 0x8000000000000000LL )
          {
            v44 = *(_QWORD *)&v70[8];
            v45 = *(_QWORD *)&v70[16];
            v46 = -1LL;
            if ( *(_QWORD *)&v77[56] != -1LL )
              v46 = *(_QWORD *)&v77[56] + 1LL;
            v47 = 4LL;
            if ( v46 >= 5 )
              v47 = v46;
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v71, v47, 0LL);
            v48 = (const char *)*((_QWORD *)&v71 + 1);
            if ( (_QWORD)v71 )
              alloc::raw_vec::handle_error(*((_QWORD *)&v71 + 1), v72);
            v49 = v72;
            *(_QWORD *)v72 = v23;
            *(_QWORD *)(v49 + 8) = v44;
            *(_QWORD *)(v49 + 16) = v45;
            v74 = v48;
            v75 = v49;
            v76 = 1LL;
            *(_OWORD *)v70 = *(_OWORD *)v77;
            *(_OWORD *)&v70[16] = *(_OWORD *)&v77[16];
            *(_OWORD *)&v70[32] = *(_OWORD *)&v77[32];
            *(_OWORD *)&v70[48] = *(_OWORD *)&v77[48];
            for ( i = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v70[8]);
                  i;
                  i = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v70[8]) )
            {
              v53 = (*(__int64 (__fastcall **)(__int64))v70)(i);
              if ( !v53 )
                break;
              if ( !*(_QWORD *)&v70[56] )
                core::panicking::panic_const::panic_const_sub_overflow(&anon_ea5d52e0609cca556c29fc6699d6f586_4_llvm_13207799637797456089);
              --*(_QWORD *)&v70[56];
              <alloc::string::String as core::clone::Clone>::clone(&v81, v53);
              v54 = v81;
              if ( v81 == (char **)0x8000000000000000LL )
                break;
              v55 = v82;
              v56 = v83;
              v57 = v76;
              if ( (const char *)v76 == v74 )
              {
                v58 = *(_QWORD *)&v70[56] + 1LL;
                if ( *(_QWORD *)&v70[56] == -1LL )
                  v58 = -1LL;
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v74, v76, v58);
              }
              v51 = v75;
              v52 = 3 * v57;
              *(_QWORD *)(v75 + 8 * v52) = v54;
              *(_QWORD *)(v51 + 8 * v52 + 8) = v55;
              *(_QWORD *)(v51 + 8 * v52 + 16) = v56;
              v76 = v57 + 1;
            }
            v25 = (__int64)v74;
            v24 = v75;
            v26 = v76;
          }
          else
          {
LABEL_46:
            v24 = 8LL;
            v25 = 0LL;
            v26 = 0LL;
          }
        }
        else
        {
          v24 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
          if ( !v24 )
            alloc::alloc::handle_alloc_error(8LL, 24LL);
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(v70, 1LL, 0LL);
          v31 = *(_QWORD *)&v70[8];
          if ( *(_QWORD *)v70 )
            alloc::raw_vec::handle_error(*(_QWORD *)&v70[8], *(_QWORD *)&v70[16]);
          v32 = *(_BYTE **)&v70[16];
          v25 = 1LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(asc_1ED01, *(_QWORD *)&v70[16], 1LL, 1LL, 1LL);
          *v32 = 45;
          if ( (v24 & 7) != 0 )
            core::panicking::panic_misaligned_pointer_dereference(8LL, v24, &off_10ADD8);
          *(_QWORD *)v24 = v31;
          *(_QWORD *)(v24 + 8) = v32;
          *(_QWORD *)(v24 + 16) = 1LL;
          v26 = 1LL;
        }
        v59 = v80;
        *v80 = v25;
        v59[1] = v24;
        v59[2] = v26;
        *(_OWORD *)(v59 + 3) = v86;
        v59[5] = v87;
        result = v59;
        *((_BYTE *)v59 + 48) = v19;
        *((_BYTE *)v59 + 49) = flag ^ 1;
        return result;
      }
      *(_OWORD *)&v77[48] = *(_OWORD *)&v70[56];
      *(_OWORD *)&v77[32] = *(_OWORD *)&v70[40];
      *(_OWORD *)&v77[16] = *(_OWORD *)&v70[24];
      *(_OWORD *)v77 = *(_OWORD *)&v70[8];
      *(_QWORD *)&v71 = &v74;
      *((_QWORD *)&v71 + 1) = <&T as core::fmt::Display>::fmt;
      v72 = (unsigned __int64)v77;
      v73 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v81 = &anon_3f3ecfa5fec0fabf186c1d94395aa807_3_llvm_11280687409328710743;
      v69 = &off_10ADC0;
    }
    v82 = 2LL;
    v85 = 0LL;
    v83 = &v71;
    v84 = 2LL;
    core::panicking::panic_fmt(&v81, v69);
  }
  v17 = 0x8000000000000002LL;
  v16 = 8LL;
LABEL_97:
  *(__int64 *)((char *)&v92 + v16) = v17;
  if ( (_QWORD)v71 )
  {
    if ( (unsigned __int64)v71 >> 61 )
      core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_7_llvm_11417008648433573330, 69LL);
    v64 = 8 * v71;
    *(_QWORD *)v77 = *((_QWORD *)&v71 + 1);
    *(_QWORD *)&v77[8] = 8LL;
    v65 = 16LL;
  }
  else
  {
    v65 = 8LL;
    v64 = 0LL;
  }
  *(_QWORD *)&v77[v65] = v64;
  if ( *(_QWORD *)&v77[8] && *(_QWORD *)&v77[16] )
    _rust_dealloc(*(_QWORD *)v77, *(_QWORD *)&v77[16], *(_QWORD *)&v77[8]);
  v66 = v80;
  v80[3] = v94;
  *(_OWORD *)(v66 + 1) = v93;
  *v66 = 0x8000000000000000LL;
  if ( v79 )
    _rust_dealloc(v14, v79, 1LL);
  if ( v88 )
  {
    if ( v88 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_121;
    v67 = 16 * v88;
    *(_QWORD *)v70 = v89;
    *(_QWORD *)&v70[8] = 8LL;
    v68 = 16LL;
  }
  else
  {
    v68 = 8LL;
    v67 = 0LL;
  }
  *(_QWORD *)&v70[v68] = v67;
  if ( *(_QWORD *)&v70[8] )
  {
    if ( *(_QWORD *)&v70[16] )
      _rust_dealloc(*(_QWORD *)v70, *(_QWORD *)&v70[16], *(_QWORD *)&v70[8]);
  }
  return v80;
}
