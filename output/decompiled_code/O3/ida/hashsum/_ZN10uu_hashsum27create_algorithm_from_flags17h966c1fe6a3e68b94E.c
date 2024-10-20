__int64 __fastcall uu_hashsum::create_algorithm_from_flags(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  void (__fastcall *v9)(__int64); // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 *v28; // rax
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rax
  const char *v37; // rax
  __int128 v38; // xmm0
  unsigned __int64 v39; // r13
  const char *v40; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+10h] [rbp-98h]
  __int128 v42; // [rsp+20h] [rbp-88h]
  const char *v43; // [rsp+30h] [rbp-78h] BYREF
  __int128 v44; // [rsp+38h] [rbp-70h]
  __int128 v45; // [rsp+48h] [rbp-60h]
  const char *v46; // [rsp+58h] [rbp-50h] BYREF
  __int128 v47; // [rsp+60h] [rbp-48h]
  __int128 v48; // [rsp+70h] [rbp-38h]

  v43 = 0LL;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMd5, 3LL) )
  {
    uucore::features::checksum::detect_algo(&v40, aMd5sum, 6LL, 0LL, v3);
    v5 = *((_QWORD *)&v41 + 1);
    v4 = v41;
    if ( !v40 )
      goto LABEL_46;
    v6 = v42;
    if ( v43 )
    {
      v7 = (_QWORD *)_rust_alloc(24LL, 8LL);
      if ( !v7 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v8 = v7;
      *v7 = 0x800000000000000DLL;
      v9 = *(void (__fastcall **)(__int64))v6;
      if ( !*(_QWORD *)v6 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v43 = v40;
    v44 = v41;
    v45 = v42;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha1, 4LL) )
  {
    uucore::features::checksum::detect_algo(&v40, aSha1sum, 7LL, 0LL, v10);
    v5 = *((_QWORD *)&v41 + 1);
    v4 = v41;
    if ( !v40 )
      goto LABEL_46;
    v6 = v42;
    if ( v43 )
    {
      v11 = (_QWORD *)_rust_alloc(24LL, 8LL);
      if ( !v11 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v8 = v11;
      *v11 = 0x800000000000000DLL;
      v9 = *(void (__fastcall **)(__int64))v6;
      if ( !*(_QWORD *)v6 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v43 = v40;
    v44 = v41;
    v45 = v42;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha224, 6LL) )
  {
    uucore::features::checksum::detect_algo(&v40, aSha224sum, 9LL, 0LL, v12);
    v5 = *((_QWORD *)&v41 + 1);
    v4 = v41;
    if ( !v40 )
      goto LABEL_46;
    v6 = v42;
    if ( v43 )
    {
      v13 = (_QWORD *)_rust_alloc(24LL, 8LL);
      if ( !v13 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v8 = v13;
      *v13 = 0x800000000000000DLL;
      v9 = *(void (__fastcall **)(__int64))v6;
      if ( !*(_QWORD *)v6 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v43 = v40;
    v44 = v41;
    v45 = v42;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha256, 6LL) )
  {
    uucore::features::checksum::detect_algo(&v40, aSha256sum, 9LL, 0LL, v14);
    v5 = *((_QWORD *)&v41 + 1);
    v4 = v41;
    if ( !v40 )
      goto LABEL_46;
    v6 = v42;
    if ( v43 )
    {
      v15 = (_QWORD *)_rust_alloc(24LL, 8LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v8 = v15;
      *v15 = 0x800000000000000DLL;
      v9 = *(void (__fastcall **)(__int64))v6;
      if ( !*(_QWORD *)v6 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v43 = v40;
    v44 = v41;
    v45 = v42;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha384, 6LL) )
  {
    uucore::features::checksum::detect_algo(&v40, aSha384sum, 9LL, 0LL, v16);
    v5 = *((_QWORD *)&v41 + 1);
    v4 = v41;
    if ( !v40 )
      goto LABEL_46;
    v6 = v42;
    if ( v43 )
    {
      v17 = (_QWORD *)_rust_alloc(24LL, 8LL);
      if ( !v17 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v8 = v17;
      *v17 = 0x800000000000000DLL;
      v9 = *(void (__fastcall **)(__int64))v6;
      if ( !*(_QWORD *)v6 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v43 = v40;
    v44 = v41;
    v45 = v42;
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha512, 6LL) )
    goto LABEL_54;
  uucore::features::checksum::detect_algo(&v40, aSha512sum, 9LL, 0LL, v18);
  v5 = *((_QWORD *)&v41 + 1);
  v4 = v41;
  if ( !v40 )
  {
LABEL_46:
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v5;
    goto LABEL_47;
  }
  v6 = v42;
  if ( v43 )
  {
    v19 = (_QWORD *)_rust_alloc(24LL, 8LL);
    if ( !v19 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v8 = v19;
    *v19 = 0x800000000000000DLL;
    v9 = *(void (__fastcall **)(__int64))v6;
    if ( !*(_QWORD *)v6 )
      goto LABEL_42;
LABEL_41:
    v9(v5);
LABEL_42:
    v20 = *(_QWORD *)(v6 + 8);
    if ( v20 )
      _rust_dealloc(v5, v20, *(_QWORD *)(v6 + 16));
    *(_QWORD *)(a1 + 8) = v8;
    goto LABEL_45;
  }
  v43 = v40;
  v44 = v41;
  v45 = v42;
LABEL_54:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aB2sum_0, 5LL) )
  {
    uucore::features::checksum::detect_algo(&v40, aB2sum_0, 5LL, 0LL, v25);
    v27 = *((_QWORD *)&v41 + 1);
    v26 = v41;
    if ( !v40 )
      goto LABEL_82;
    v48 = v42;
    v46 = v40;
    v47 = v41;
    v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v46);
    if ( v28 )
      goto LABEL_87;
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aB3sum, 5LL) )
  {
LABEL_60:
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3, 4LL) )
      goto LABEL_66;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v40, a2, aBits, 4LL);
    v30 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aBits, 4LL, &v40);
    if ( v30 )
    {
      v31 = *v30;
      v32 = 1LL;
    }
    else
    {
      v32 = 0LL;
    }
    uucore::features::checksum::create_sha3(&v40, v32, v31);
    v27 = *((_QWORD *)&v41 + 1);
    v26 = v41;
    if ( v40 )
    {
      v48 = v42;
      v46 = v40;
      v47 = v41;
      v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v46);
      if ( v28 )
        goto LABEL_87;
LABEL_66:
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3224, 8LL) )
      {
        v40 = aSha3224_0;
        *(_QWORD *)&v41 = 8LL;
        *((_QWORD *)&v41 + 1) = 1LL;
        *(_QWORD *)&v42 = &unk_2C1A18;
        *((_QWORD *)&v42 + 1) = 224LL;
        v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v40);
        if ( v28 )
          goto LABEL_87;
      }
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3256, 8LL) )
      {
        v40 = aSha3256_0;
        *(_QWORD *)&v41 = 8LL;
        *((_QWORD *)&v41 + 1) = 1LL;
        *(_QWORD *)&v42 = &unk_2C1A48;
        *((_QWORD *)&v42 + 1) = 256LL;
        v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v40);
        if ( v28 )
          goto LABEL_87;
      }
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3384_0, 8LL) )
      {
        v40 = aSha3384;
        *(_QWORD *)&v41 = 8LL;
        *((_QWORD *)&v41 + 1) = 1LL;
        *(_QWORD *)&v42 = &unk_2C1A78;
        *((_QWORD *)&v42 + 1) = 384LL;
        v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v40);
        if ( v28 )
          goto LABEL_87;
      }
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3512_0, 8LL) )
      {
        v40 = aSha3512;
        *(_QWORD *)&v41 = 8LL;
        *((_QWORD *)&v41 + 1) = 1LL;
        *(_QWORD *)&v42 = &unk_2C1AA8;
        *((_QWORD *)&v42 + 1) = 512LL;
        v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v40);
        if ( v28 )
          goto LABEL_87;
      }
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aShake128, 8LL) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v40, a2, aBits, 4LL);
        v33 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aBits, 4LL, &v40);
        if ( !v33 )
        {
          v28 = (unsigned __int64 *)alloc::alloc::exchange_malloc();
          v39 = 0x8000000000000006LL;
          goto LABEL_86;
        }
        v34 = *v33;
        v40 = aShake128_0;
        *(_QWORD *)&v41 = 8LL;
        *((_QWORD *)&v41 + 1) = 1LL;
        *(_QWORD *)&v42 = &unk_2C1B80;
        *((_QWORD *)&v42 + 1) = v34;
        v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v40);
        if ( v28 )
          goto LABEL_87;
      }
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aShake256, 8LL) )
      {
LABEL_80:
        v37 = v43;
        if ( v43 )
        {
          v38 = v44;
          *(_OWORD *)(a1 + 24) = v45;
          *(_OWORD *)(a1 + 8) = v38;
          *(_QWORD *)a1 = v37;
          return a1;
        }
        v28 = (unsigned __int64 *)alloc::alloc::exchange_malloc();
        v39 = 0x800000000000000ELL;
        goto LABEL_86;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v40, a2, aBits, 4LL);
      v35 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aBits, 4LL, &v40);
      if ( v35 )
      {
        v36 = *v35;
        v40 = "SHAKE256stride: xidstart( ";
        *(_QWORD *)&v41 = 8LL;
        *((_QWORD *)&v41 + 1) = 1LL;
        *(_QWORD *)&v42 = &unk_2C1BB0;
        *((_QWORD *)&v42 + 1) = v36;
        v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v40);
        if ( !v28 )
          goto LABEL_80;
LABEL_87:
        *(_QWORD *)(a1 + 8) = v28;
LABEL_45:
        *(_QWORD *)(a1 + 16) = &off_2C1B10;
        goto LABEL_47;
      }
      v28 = (unsigned __int64 *)alloc::alloc::exchange_malloc();
      v39 = 0x8000000000000007LL;
LABEL_86:
      *v28 = v39;
      goto LABEL_87;
    }
    goto LABEL_82;
  }
  uucore::features::checksum::detect_algo(&v40, aB3sum, 5LL, 0LL, v29);
  v27 = *((_QWORD *)&v41 + 1);
  v26 = v41;
  if ( v40 )
  {
    v48 = v42;
    v46 = v40;
    v47 = v41;
    v28 = (unsigned __int64 *)uu_hashsum::create_algorithm_from_flags::{{closure}}(&v43, &v46);
    if ( v28 )
      goto LABEL_87;
    goto LABEL_60;
  }
LABEL_82:
  *(_QWORD *)(a1 + 8) = v26;
  *(_QWORD *)(a1 + 16) = v27;
LABEL_47:
  *(_QWORD *)a1 = 0LL;
  if ( v43 )
  {
    v21 = *((_QWORD *)&v44 + 1);
    v22 = v45;
    if ( *(_QWORD *)v45 )
      (*(void (__fastcall **)(_QWORD))v45)(*((_QWORD *)&v44 + 1));
    v23 = *(_QWORD *)(v22 + 8);
    if ( v23 )
      _rust_dealloc(v21, v23, *(_QWORD *)(v22 + 16));
  }
  return a1;
}
