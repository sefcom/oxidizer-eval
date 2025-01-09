__int64 __fastcall uu_hashsum::create_algorithm_from_flags(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int128 v28; // xmm0
  const char *v30; // [rsp+8h] [rbp-90h] BYREF
  __int64 v31; // [rsp+10h] [rbp-88h]
  __int64 v32; // [rsp+18h] [rbp-80h]
  __int128 v33; // [rsp+20h] [rbp-78h]
  const char *v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  __int128 v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+58h] [rbp-40h] BYREF
  __int128 v39; // [rsp+60h] [rbp-38h]
  __int128 v40; // [rsp+70h] [rbp-28h]

  v38 = 0LL;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMd5, 3LL) )
  {
    uucore::features::checksum::detect_algo(&v30, aMd5sum, 6LL, 0LL, v3);
    v4 = v31;
    v5 = v32;
    if ( !v30 )
      goto LABEL_47;
    v37 = v33;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha1, 4LL) )
  {
    uucore::features::checksum::detect_algo(&v30, aSha1sum, 7LL, 0LL, v7);
    v4 = v31;
    v5 = v32;
    if ( !v30 )
      goto LABEL_47;
    v37 = v33;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha224, 6LL) )
  {
    uucore::features::checksum::detect_algo(&v30, aSha224sum, 9LL, 0LL, v8);
    v4 = v31;
    v5 = v32;
    if ( !v30 )
      goto LABEL_47;
    v37 = v33;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha256, 6LL) )
  {
    uucore::features::checksum::detect_algo(&v30, aSha256sum, 9LL, 0LL, v9);
    v4 = v31;
    v5 = v32;
    if ( !v30 )
      goto LABEL_47;
    v37 = v33;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha384, 6LL) )
  {
    uucore::features::checksum::detect_algo(&v30, aSha384sum, 9LL, 0LL, v10);
    v4 = v31;
    v5 = v32;
    if ( !v30 )
      goto LABEL_47;
    v37 = v33;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha512, 6LL) )
  {
    uucore::features::checksum::detect_algo(&v30, aSha512sum, 9LL, 0LL, v11);
    v4 = v31;
    v5 = v32;
    if ( !v30 )
      goto LABEL_47;
    v37 = v33;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aB2sum_0, 5LL) )
  {
    uucore::features::checksum::detect_algo(&v30, aB2sum_0, 5LL, 0LL, v12);
    v4 = v31;
    v5 = v32;
    if ( !v30 )
      goto LABEL_47;
    v37 = v33;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aB3sum, 5LL) )
  {
    uucore::features::checksum::detect_algo(&v30, aB3sum, 5LL, 0LL, v13);
    v4 = v31;
    v5 = v32;
    if ( !v30 )
      goto LABEL_47;
    v37 = v33;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
    if ( v6 )
      goto LABEL_51;
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3, 4LL) )
    goto LABEL_31;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, a2, aBits, 4LL);
  v14 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aBits, 4LL, &v30);
  if ( v14 )
  {
    v15 = *v14;
    v16 = 1LL;
  }
  else
  {
    v16 = 0LL;
  }
  uucore::features::checksum::create_sha3(&v30, v16, v15);
  v4 = v31;
  v5 = v32;
  if ( !v30 )
  {
LABEL_47:
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v5;
LABEL_52:
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::HashAlgorithm>>(&v38);
    return a1;
  }
  v37 = v33;
  v34 = v30;
  v35 = v31;
  v36 = v32;
  v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v34);
  if ( v6 )
    goto LABEL_51;
LABEL_31:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3224, 8LL) )
  {
    v17 = alloc::boxed::Box<T>::new();
    v30 = aSha3224_0;
    v31 = 8LL;
    v32 = v17;
    *(_QWORD *)&v33 = &unk_33E920;
    *((_QWORD *)&v33 + 1) = 224LL;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v30);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3256_0, 8LL) )
  {
    v18 = alloc::boxed::Box<T>::new();
    v30 = aSha3256_1;
    v31 = 8LL;
    v32 = v18;
    *(_QWORD *)&v33 = &unk_33E950;
    *((_QWORD *)&v33 + 1) = 256LL;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v30);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3384_0, 8LL) )
  {
    v19 = alloc::boxed::Box<T>::new();
    v30 = aSha3384;
    v31 = 8LL;
    v32 = v19;
    *(_QWORD *)&v33 = &unk_33E980;
    *((_QWORD *)&v33 + 1) = 384LL;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v30);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSha3512_0, 8LL) )
  {
    v20 = alloc::boxed::Box<T>::new();
    v30 = "SHA3-512shake256S";
    v31 = 8LL;
    v32 = v20;
    *(_QWORD *)&v33 = &unk_33E9B0;
    *((_QWORD *)&v33 + 1) = 512LL;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v30);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aShake128, 8LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, a2, aBits, 4LL);
    v21 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aBits, 4LL, &v30);
    if ( !v21 )
    {
      v6 = alloc::boxed::Box<T>::new(6LL);
      goto LABEL_51;
    }
    v22 = alloc::boxed::Box<T>::new();
    v23 = *v21;
    v30 = aShake128_0;
    v31 = 8LL;
    v32 = v22;
    *(_QWORD *)&v33 = &unk_33EA70;
    *((_QWORD *)&v33 + 1) = v23;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v30);
    if ( v6 )
      goto LABEL_51;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "shake256S", 8LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, a2, aBits, 4LL);
    v24 = (__int64 *)clap_builder::parser::error::MatchesError::unwrap(aBits, 4LL, &v30);
    if ( !v24 )
    {
      v6 = alloc::boxed::Box<T>::new(7LL);
      goto LABEL_51;
    }
    v25 = alloc::boxed::Box<T>::new();
    v26 = *v24;
    v30 = "SHAKE256stride: xidstart( ";
    v31 = 8LL;
    v32 = v25;
    *(_QWORD *)&v33 = &unk_33EAA0;
    *((_QWORD *)&v33 + 1) = v26;
    v6 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v38, &v30);
    if ( v6 )
    {
LABEL_51:
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = &unk_33EA00;
      goto LABEL_52;
    }
  }
  v27 = v38;
  if ( !v38 )
  {
    v6 = alloc::boxed::Box<T>::new(14LL);
    goto LABEL_51;
  }
  v28 = v39;
  *(_OWORD *)(a1 + 24) = v40;
  *(_OWORD *)(a1 + 8) = v28;
  *(_QWORD *)a1 = v27;
  return a1;
}
