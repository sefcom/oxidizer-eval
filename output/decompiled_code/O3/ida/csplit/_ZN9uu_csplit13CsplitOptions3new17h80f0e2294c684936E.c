__int64 __fastcall uu_csplit::CsplitOptions::new(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v10; // rdx
  char v11; // [rsp+Dh] [rbp-11Bh]
  char v12; // [rsp+Eh] [rbp-11Ah]
  char flag; // [rsp+Fh] [rbp-119h]
  __int128 v14; // [rsp+10h] [rbp-118h] BYREF
  __m128i *v15; // [rsp+20h] [rbp-108h]
  __int64 v16; // [rsp+28h] [rbp-100h]
  __int64 v17; // [rsp+30h] [rbp-F8h]
  __m128i v18; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v19[48]; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+90h] [rbp-98h]
  __int128 v21; // [rsp+A0h] [rbp-88h]
  __int128 v22; // [rsp+B0h] [rbp-78h]
  __m128i v23; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v24; // [rsp+D0h] [rbp-58h]
  __int64 v25; // [rsp+E0h] [rbp-48h]
  _QWORD v26[8]; // [rsp+E8h] [rbp-40h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aKeepFiles, 10LL);
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aElideEmptyFile, 17LL);
  v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSuppressMatche, 16LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v19, a2, aPrefix, 6LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aPrefix, 6LL, v19);
  if ( v3 )
    <alloc::string::String as core::clone::Clone>::clone(&v18, v3);
  else
    v18.m128i_i64[0] = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v19, a2, aSuffixFormat, 13LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aSuffixFormat, 13LL, v19);
  if ( v4 )
  {
    <alloc::string::String as core::clone::Clone>::clone(v19, v4);
    *(_QWORD *)&v24 = *(_QWORD *)&v19[16];
    v23 = *(__m128i *)v19;
  }
  else
  {
    v23.m128i_i64[0] = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v19, a2, aDigits, 6LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aDigits, 6LL, v19);
  if ( v5 )
  {
    <alloc::string::String as core::clone::Clone>::clone(v19, v5);
    v15 = *(__m128i **)&v19[16];
    v14 = *(_OWORD *)v19;
  }
  else
  {
    *(_QWORD *)&v14 = 0x8000000000000000LL;
  }
  uu_csplit::split_name::SplitName::new((__int64)v19, &v18, &v23, (__int64)&v14);
  if ( *(_QWORD *)v19 == 0x8000000000000000LL )
  {
    v25 = *(_QWORD *)&v19[40];
    v24 = *(_OWORD *)&v19[24];
    v23 = *(__m128i *)&v19[8];
    v18.m128i_i64[0] = uucore::util_name();
    v18.m128i_i64[1] = v10;
    v26[0] = &v18;
    v26[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v14 = &unk_2E2B38;
    *((_QWORD *)&v14 + 1) = 2LL;
    v17 = 0LL;
    v15 = (__m128i *)v26;
    v16 = 1LL;
    std::io::stdio::_eprint(&v14);
    v18.m128i_i64[0] = (__int64)&v23;
    v18.m128i_i64[1] = (__int64)<uu_csplit::csplit_error::CsplitError as core::fmt::Display>::fmt;
    *(_QWORD *)&v14 = &unk_2E2B58;
    *((_QWORD *)&v14 + 1) = 2LL;
    v17 = 0LL;
    v15 = &v18;
    v16 = 1LL;
    std::io::stdio::_eprint(&v14);
    std::process::exit(1);
  }
  *(_OWORD *)(a1 + 80) = v22;
  *(_OWORD *)(a1 + 64) = v21;
  v6 = *(_OWORD *)v19;
  v7 = *(_OWORD *)&v19[16];
  v8 = *(_OWORD *)&v19[32];
  *(_OWORD *)(a1 + 48) = v20;
  *(_OWORD *)(a1 + 32) = v8;
  *(_OWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  *(_BYTE *)(a1 + 96) = flag;
  *(_BYTE *)(a1 + 97) = v12;
  *(_BYTE *)(a1 + 98) = v11;
  *(_BYTE *)(a1 + 99) = v2;
  return a1;
}
