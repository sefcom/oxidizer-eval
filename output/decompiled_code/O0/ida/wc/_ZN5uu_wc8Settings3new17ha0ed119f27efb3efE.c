__int64 __fastcall uu_wc::Settings::new(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  char v5; // bp
  __int128 v6; // xmm0
  __int128 v8; // [rsp+10h] [rbp-158h] BYREF
  __int128 v9; // [rsp+20h] [rbp-148h]
  const char *v10; // [rsp+38h] [rbp-130h] BYREF
  __int64 v11; // [rsp+40h] [rbp-128h]
  const char **v12; // [rsp+48h] [rbp-120h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+50h] [rbp-118h]
  __int128 *v14; // [rsp+58h] [rbp-110h]
  __int64 (__fastcall *v15)(); // [rsp+60h] [rbp-108h]
  __int128 v16; // [rsp+68h] [rbp-100h]
  __int64 v17; // [rsp+78h] [rbp-F0h]
  char **v18; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+88h] [rbp-E0h]
  const char ***v20; // [rsp+90h] [rbp-D8h]
  __int64 v21; // [rsp+98h] [rbp-D0h]
  __int64 v22; // [rsp+A0h] [rbp-C8h]
  __int128 v23; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-A8h]
  __int128 v25; // [rsp+D0h] [rbp-98h]
  __int128 v26; // [rsp+E0h] [rbp-88h]
  __int64 v27; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v28; // [rsp+F8h] [rbp-70h]
  __int128 v29; // [rsp+108h] [rbp-60h]
  __int128 v30; // [rsp+118h] [rbp-50h]
  __int128 v31; // [rsp+128h] [rbp-40h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v27,
    a2,
    anon_77474d128c52bab738a0ce88bc24ae41_36_llvm_9737630618734806200,
    11LL);
  v10 = anon_77474d128c52bab738a0ce88bc24ae41_36_llvm_9737630618734806200;
  v11 = 11LL;
  if ( v27 )
  {
    v26 = v31;
    v25 = v30;
    v24 = v29;
    v23 = v28;
    v12 = &v10;
    v13 = <&T as core::fmt::Display>::fmt;
    v14 = &v23;
    v15 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v18 = &anon_56f426745e7d4c5372634db4f0431a2b_3_llvm_8267291718986063344;
    v19 = 2LL;
    v22 = 0LL;
    v20 = &v12;
    v21 = 2LL;
    core::panicking::panic_fmt(&v18, &off_1189B8);
  }
  if ( (_QWORD)v28 )
  {
    v2 = *(_BYTE **)(v28 + 8);
    if ( !v2 || (v3 = *(_QWORD *)(v28 + 16), v3 < 0) )
      core::panicking::panic_nounwind(anon_dd263a7f757787748cb25eec96e5d9c9_4_llvm_2301497830685427482, 162LL);
    v4 = 0x8000000000000000LL;
    if ( v3 == 1 && *v2 == 45 )
    {
      v4 = 0x8000000000000001LL;
      v2 = 0LL;
    }
    *(_QWORD *)&v16 = v4;
    *((_QWORD *)&v16 + 1) = v2;
    v17 = v3;
  }
  else
  {
    *(_QWORD *)&v16 = 0x8000000000000002LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v27,
    a2,
    anon_77474d128c52bab738a0ce88bc24ae41_39_llvm_9737630618734806200,
    5LL);
  v10 = anon_77474d128c52bab738a0ce88bc24ae41_39_llvm_9737630618734806200;
  v11 = 5LL;
  if ( v27 )
  {
    v26 = v31;
    v25 = v30;
    v24 = v29;
    v23 = v28;
    v12 = &v10;
    v13 = <&T as core::fmt::Display>::fmt;
    v14 = &v23;
    v15 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v18 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v19 = 2LL;
    v22 = 0LL;
    v20 = &v12;
    v21 = 2LL;
    core::panicking::panic_fmt(&v18, &off_1189D0);
  }
  if ( !(_QWORD)v28 || (v5 = <uu_wc::TotalWhen as core::convert::From<T>>::from(), v5 == 4) )
    v5 = 0;
  *(_QWORD *)&v9 = v17;
  v8 = v16;
  BYTE8(v9) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                a2,
                anon_77474d128c52bab738a0ce88bc24ae41_34_llvm_9737630618734806200,
                5LL,
                &off_1189E8);
  BYTE9(v9) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                a2,
                anon_77474d128c52bab738a0ce88bc24ae41_35_llvm_9737630618734806200,
                5LL,
                &off_118A00);
  BYTE10(v9) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_77474d128c52bab738a0ce88bc24ae41_37_llvm_9737630618734806200,
                 5LL,
                 &off_118A18);
  BYTE11(v9) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_77474d128c52bab738a0ce88bc24ae41_40_llvm_9737630618734806200,
                 5LL,
                 &off_118A30);
  BYTE12(v9) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_77474d128c52bab738a0ce88bc24ae41_38_llvm_9737630618734806200,
                 15LL,
                 &off_118A48);
  BYTE13(v9) = v5;
  if ( (unsigned int)uu_wc::Settings::number_enabled(&v8) )
  {
    v6 = v8;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v6;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 16842753;
    *(_BYTE *)(a1 + 28) = 0;
    *(_OWORD *)a1 = v8;
    *(_QWORD *)(a1 + 16) = v9;
    *(_BYTE *)(a1 + 29) = v5;
  }
  return a1;
}
