__int64 __fastcall uu_mktemp::Options::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const void *v3; // r12
  size_t v4; // r15
  unsigned __int64 v5; // r13
  void *v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  char v9; // cl
  __int128 *v10; // rax
  void *v11; // r15
  char flag; // bp
  char v13; // r15
  char v14; // r12
  char v15; // al
  char **v17; // rsi
  char v18; // [rsp+Ch] [rbp-29Ch]
  const char *v19; // [rsp+10h] [rbp-298h] BYREF
  __int64 v20; // [rsp+18h] [rbp-290h]
  const char **v21; // [rsp+20h] [rbp-288h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-280h]
  __int128 *v23; // [rsp+30h] [rbp-278h]
  __int64 (__fastcall *v24)(); // [rsp+38h] [rbp-270h]
  __int64 v25; // [rsp+40h] [rbp-268h]
  void *v26; // [rsp+48h] [rbp-260h]
  unsigned __int64 v27; // [rsp+50h] [rbp-258h] BYREF
  __int128 v28; // [rsp+58h] [rbp-250h] BYREF
  _BYTE v29[24]; // [rsp+68h] [rbp-240h] BYREF
  __int128 v30; // [rsp+80h] [rbp-228h]
  __int128 v31; // [rsp+90h] [rbp-218h]
  __int128 v32; // [rsp+A0h] [rbp-208h]
  char **v33; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-1F0h]
  const char ***v35; // [rsp+C0h] [rbp-1E8h]
  __int64 v36; // [rsp+C8h] [rbp-1E0h]
  __int64 v37; // [rsp+D0h] [rbp-1D8h]
  __int128 v38; // [rsp+E0h] [rbp-1C8h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-1B8h]
  __int128 v40; // [rsp+100h] [rbp-1A8h]
  __int128 v41; // [rsp+110h] [rbp-198h]
  __int64 v42; // [rsp+128h] [rbp-180h]
  _OWORD v43[2]; // [rsp+130h] [rbp-178h]
  __int128 v44; // [rsp+150h] [rbp-158h]
  __int64 v45; // [rsp+160h] [rbp-148h]
  __int128 v46; // [rsp+170h] [rbp-138h]
  __int64 v47; // [rsp+180h] [rbp-128h]
  __int128 v48; // [rsp+190h] [rbp-118h]
  __int64 v49; // [rsp+1A0h] [rbp-108h]
  __int128 v50; // [rsp+1B0h] [rbp-F8h]
  __int64 v51; // [rsp+1C0h] [rbp-E8h]
  unsigned __int64 v52; // [rsp+1C8h] [rbp-E0h] BYREF
  __int128 v53; // [rsp+1D0h] [rbp-D8h]
  _BYTE v54[24]; // [rsp+1E0h] [rbp-C8h]
  _QWORD v55[3]; // [rsp+1F8h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+210h] [rbp-98h] BYREF
  _QWORD v57[3]; // [rsp+218h] [rbp-90h] BYREF
  __int128 v58; // [rsp+230h] [rbp-78h]
  unsigned __int64 v59; // [rsp+248h] [rbp-60h] BYREF
  char v60; // [rsp+250h] [rbp-58h] BYREF
  unsigned __int64 v61; // [rsp+260h] [rbp-48h] BYREF
  char v62; // [rsp+268h] [rbp-40h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v29, a2, aTmpdir, 6LL);
  v19 = aTmpdir;
  v20 = 6LL;
  if ( *(_QWORD *)v29 )
  {
    v41 = v32;
    v40 = v31;
    v39 = v30;
    v38 = *(_OWORD *)&v29[8];
    v21 = &v19;
    v22 = <&T as core::fmt::Display>::fmt;
    v23 = &v38;
    v24 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v33 = &anon_d4b0c354e835dc672480ef32a1a5d569_12_llvm_11877717755312319128;
    v34 = 2LL;
    v37 = 0LL;
    v35 = &v21;
    v36 = 2LL;
    core::panicking::panic_fmt(&v33, &off_11BB60);
  }
  v2 = *(_QWORD *)&v29[8];
  if ( *(_QWORD *)&v29[8] )
    goto LABEL_5;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v29,
    a2,
    anon_39ca493e95a1eccf7c7f592fcc33ae19_19_llvm_18443158920372441921,
    1LL);
  v19 = anon_39ca493e95a1eccf7c7f592fcc33ae19_19_llvm_18443158920372441921;
  v20 = 1LL;
  if ( *(_QWORD *)v29 )
  {
    v41 = v32;
    v40 = v31;
    v39 = v30;
    v38 = *(_OWORD *)&v29[8];
    v21 = &v19;
    v22 = <&T as core::fmt::Display>::fmt;
    v23 = &v38;
    v24 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v33 = &anon_d4b0c354e835dc672480ef32a1a5d569_12_llvm_11877717755312319128;
    v34 = 2LL;
    v37 = 0LL;
    v35 = &v21;
    v36 = 2LL;
    core::panicking::panic_fmt(&v33, &anon_39ca493e95a1eccf7c7f592fcc33ae19_54_llvm_18443158920372441921);
  }
  v2 = *(_QWORD *)&v29[8];
  if ( *(_QWORD *)&v29[8] )
  {
LABEL_5:
    v3 = *(const void **)(v2 + 8);
    v4 = *(_QWORD *)(v2 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v3, 1LL, 1LL, v4);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v29, v4, 0LL);
    v5 = *(_QWORD *)&v29[8];
    if ( *(_QWORD *)v29 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v29[8], *(_QWORD *)&v29[16]);
    v6 = *(void **)&v29[16];
    core::intrinsics::copy_nonoverlapping::precondition_check(v3, *(_QWORD *)&v29[16], 1LL, 1LL, v4);
    memcpy(v6, v3, v4);
    v27 = v5;
    *(_QWORD *)&v28 = v6;
    *((_QWORD *)&v28 + 1) = v4;
  }
  else
  {
    v27 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v29, a2, &unk_18388, 8LL);
  v19 = (const char *)&unk_18388;
  v20 = 8LL;
  if ( *(_QWORD *)v29 )
  {
    v41 = v32;
    v40 = v31;
    v39 = v30;
    v38 = *(_OWORD *)&v29[8];
    v21 = &v19;
    v22 = <&T as core::fmt::Display>::fmt;
    v23 = &v38;
    v24 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v33 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v17 = &off_11BB78;
    goto LABEL_42;
  }
  v7 = *(_QWORD *)&v29[8];
  if ( *(_QWORD *)&v29[8] )
  {
    std::env::_var(&v56, aTmpdir_0, 6LL);
    if ( v56 )
    {
      if ( v57[0] != 0x8000000000000000LL )
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v57, v57[0]);
    }
    else
    {
      if ( v57[0] )
        _rust_dealloc(v57[1], v57[0], 1LL);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL, &off_11BB90) )
      {
        std::env::_var_os(&v59, aTmpdir_0, 6LL);
        v8 = v59;
        v9 = 1;
        if ( v59 != 0x8000000000000000LL )
        {
          v10 = (__int128 *)&v60;
          goto LABEL_25;
        }
        v8 = 0x8000000000000000LL;
        goto LABEL_26;
      }
    }
    v8 = v27;
    if ( v27 != 0x8000000000000000LL )
    {
      v10 = &v28;
      v9 = 0;
      goto LABEL_25;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL, &off_11BBA8) )
    {
LABEL_23:
      std::env::temp_dir(&v61);
      v10 = (__int128 *)&v62;
      v9 = 1;
      v8 = v61;
LABEL_25:
      v58 = *v10;
      goto LABEL_26;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(v29, a2, aTmpdir, 6LL);
    v19 = aTmpdir;
    v20 = 6LL;
    if ( (v29[0] & 1) == 0 )
    {
      v9 = 1;
      v8 = 0x8000000000000000LL;
      if ( (v29[1] & 1) != 0 )
        goto LABEL_23;
LABEL_26:
      v18 = v9;
      *(_QWORD *)v54 = v8;
      *(_OWORD *)&v54[8] = v58;
      <alloc::string::String as core::clone::Clone>::clone(v55, v7);
      v47 = *(_QWORD *)&v54[16];
      v46 = *(_OWORD *)v54;
      v25 = v55[0];
      v26 = (void *)v55[1];
      v42 = v55[2];
      goto LABEL_30;
    }
    v41 = v32;
    v40 = v31;
    v39 = v30;
    v38 = *(_OWORD *)&v29[8];
    v21 = &v19;
    v22 = <&T as core::fmt::Display>::fmt;
    v23 = &v38;
    v24 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v33 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v17 = &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950;
LABEL_42:
    v34 = 2LL;
    v37 = 0LL;
    v35 = &v21;
    v36 = 2LL;
    core::panicking::panic_fmt(&v33, v17);
  }
  if ( v27 == 0x8000000000000000LL )
  {
    std::env::temp_dir(&v52);
  }
  else
  {
    v52 = v27;
    v53 = v28;
  }
  *(_QWORD *)&v43[0] = v52;
  *(_OWORD *)((char *)v43 + 8) = v53;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v29, 14LL, 0LL);
  v25 = *(_QWORD *)&v29[8];
  if ( *(_QWORD *)v29 )
    alloc::raw_vec::handle_error(v25, *(_QWORD *)&v29[16]);
  v11 = *(void **)&v29[16];
  v42 = 14LL;
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_215A2, *(_QWORD *)&v29[16], 1LL, 1LL, 14LL);
  v26 = v11;
  qmemcpy(v11, "tmp.XXXXXXXXXX", 14);
  v46 = v43[0];
  v47 = *(_QWORD *)&v43[1];
  v18 = 0;
LABEL_30:
  v45 = v47;
  v44 = v46;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDirectory, 9LL, &off_11BBC0);
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDryRun, 7LL, &off_11BBD8);
  v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL, &off_11BBF0);
  v49 = v45;
  v48 = v44;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v29, a2, aSuffix, 6LL);
  v19 = aSuffix;
  v20 = 6LL;
  if ( *(_QWORD *)v29 )
  {
    v41 = v32;
    v40 = v31;
    v39 = v30;
    v38 = *(_OWORD *)&v29[8];
    v21 = &v19;
    v22 = <&T as core::fmt::Display>::fmt;
    v23 = &v38;
    v24 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v33 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v34 = 2LL;
    v37 = 0LL;
    v35 = &v21;
    v36 = 2LL;
    core::panicking::panic_fmt(&v33, &off_11BC08);
  }
  if ( *(_QWORD *)&v29[8] )
  {
    <alloc::string::String as core::clone::Clone>::clone(v29, *(_QWORD *)&v29[8]);
    v51 = *(_QWORD *)&v29[16];
    v50 = *(_OWORD *)v29;
  }
  else
  {
    *(_QWORD *)&v50 = 0x8000000000000000LL;
  }
  v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aT, 1LL, &off_11BC20);
  *(_BYTE *)(a1 + 72) = flag;
  *(_BYTE *)(a1 + 73) = v13;
  *(_BYTE *)(a1 + 74) = v14;
  *(_OWORD *)(a1 + 24) = v48;
  *(_QWORD *)(a1 + 40) = v49;
  *(_OWORD *)(a1 + 48) = v50;
  *(_QWORD *)(a1 + 64) = v51;
  *(_BYTE *)(a1 + 75) = v15;
  *(_QWORD *)a1 = v25;
  *(_QWORD *)(a1 + 8) = v26;
  *(_QWORD *)(a1 + 16) = v42;
  if ( v18 && v27 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27);
  return a1;
}
