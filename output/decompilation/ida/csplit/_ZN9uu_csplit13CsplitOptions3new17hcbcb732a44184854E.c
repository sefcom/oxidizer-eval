__int64 __fastcall uu_csplit::CsplitOptions::new(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  char v12; // [rsp+Dh] [rbp-10Bh]
  char v13; // [rsp+Eh] [rbp-10Ah]
  char flag; // [rsp+Fh] [rbp-109h]
  __int128 v15; // [rsp+10h] [rbp-108h] BYREF
  __int128 v16; // [rsp+20h] [rbp-F8h]
  __int64 v17; // [rsp+30h] [rbp-E8h]
  __int128 v18; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-C8h]
  __int64 v20[3]; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+80h] [rbp-98h]
  __int64 v23; // [rsp+88h] [rbp-90h] BYREF
  __int128 v24; // [rsp+90h] [rbp-88h]
  __int128 v25; // [rsp+A0h] [rbp-78h]
  __int64 v26; // [rsp+B0h] [rbp-68h]
  __int128 v27; // [rsp+B8h] [rbp-60h]
  __int128 v28; // [rsp+C8h] [rbp-50h]
  __int128 v29; // [rsp+D8h] [rbp-40h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aKeepFiles, 10LL);
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aElideEmptyFile, 17LL);
  v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSuppressMatche, 16LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a2, aPrefix, 6LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aPrefix, 6LL, &v15);
  if ( v3 )
    <alloc::string::String as core::clone::Clone>::clone(v20, v3);
  else
    v20[0] = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a2, aSuffixFormat, 13LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aSuffixFormat, 13LL, &v15);
  if ( v4 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v15, v4);
    v19 = v16;
    v18 = v15;
  }
  else
  {
    *(_QWORD *)&v18 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a2, aDigits, 6LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aDigits, 6LL, &v15);
  if ( v5 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v15, v5);
    v22 = v16;
    v21 = v15;
  }
  else
  {
    *(_QWORD *)&v21 = 0x8000000000000000LL;
  }
  uu_csplit::split_name::SplitName::new((__int64)&v23, v20, (__int64 *)&v18, (__int64)&v21);
  v17 = v26;
  v6 = v23;
  v15 = v24;
  v16 = v25;
  if ( v23 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 40) = v17;
    v7 = v15;
    *(_OWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v7;
  }
  else
  {
    v8 = v27;
    v9 = v28;
    *(_OWORD *)(a1 + 80) = v29;
    *(_OWORD *)(a1 + 64) = v9;
    *(_OWORD *)(a1 + 48) = v8;
    *(_QWORD *)(a1 + 40) = v17;
    v10 = v15;
    *(_OWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v10;
    *(_BYTE *)(a1 + 96) = flag;
    *(_BYTE *)(a1 + 97) = v13;
    *(_BYTE *)(a1 + 98) = v12;
    *(_BYTE *)(a1 + 99) = v2;
  }
  *(_QWORD *)a1 = v6;
  return a1;
}