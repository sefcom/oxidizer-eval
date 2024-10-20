__int64 __fastcall uu_csplit::CsplitOptions::new(__int64 a1, __int64 a2)
{
  char flag; // r15
  char v3; // r12
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 (__fastcall *v8)(); // rdx
  char v9; // [rsp+Eh] [rbp-15Ah]
  char v10; // [rsp+Fh] [rbp-159h]
  __int128 *v11; // [rsp+10h] [rbp-158h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+18h] [rbp-150h]
  __int128 *v13; // [rsp+20h] [rbp-148h]
  __int64 (__fastcall *v14)(); // [rsp+28h] [rbp-140h]
  __int128 v15; // [rsp+30h] [rbp-138h] BYREF
  __int64 v16; // [rsp+40h] [rbp-128h]
  __int128 v17; // [rsp+50h] [rbp-118h] BYREF
  __int128 v18; // [rsp+60h] [rbp-108h]
  __int64 v19; // [rsp+70h] [rbp-F8h]
  __int128 v20; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v21; // [rsp+90h] [rbp-D8h]
  __int64 v22; // [rsp+A0h] [rbp-C8h]
  _BYTE v23[48]; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+E0h] [rbp-88h]
  __int128 v25; // [rsp+F0h] [rbp-78h]
  __int128 v26; // [rsp+100h] [rbp-68h]
  __int64 v27[3]; // [rsp+110h] [rbp-58h] BYREF
  _QWORD v28[8]; // [rsp+128h] [rbp-40h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aKeepFiles, 10LL);
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aElideEmptyFile, 17LL);
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSuppressMatche, 16LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a2, aPrefix, 6LL);
  *(_QWORD *)&v15 = aPrefix;
  *((_QWORD *)&v15 + 1) = 6LL;
  if ( (_DWORD)v20 != 2 )
  {
    v19 = v22;
    v18 = v21;
    v17 = v20;
    v11 = &v15;
    v12 = <&T as core::fmt::Display>::fmt;
    v13 = &v17;
    v14 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v23 = &anon_5805961d024328d1ae6714d7116fbcce_7_llvm_2876468079995662589;
    *(_QWORD *)&v23[8] = 2LL;
    *(_QWORD *)&v23[32] = 0LL;
    *(_QWORD *)&v23[16] = &v11;
    *(_QWORD *)&v23[24] = 2LL;
    core::panicking::panic_fmt(v23, &anon_5805961d024328d1ae6714d7116fbcce_9_llvm_2876468079995662589);
  }
  if ( *((_QWORD *)&v20 + 1) )
    <alloc::string::String as core::clone::Clone>::clone(v27, *((_QWORD *)&v20 + 1));
  else
    v27[0] = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a2, aSuffixFormat, 13LL);
  *(_QWORD *)&v15 = aSuffixFormat;
  *((_QWORD *)&v15 + 1) = 13LL;
  if ( (_DWORD)v20 != 2 )
  {
    v19 = v22;
    v18 = v21;
    v17 = v20;
    v11 = &v15;
    v12 = <&T as core::fmt::Display>::fmt;
    v13 = &v17;
    v14 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v23 = &anon_5805961d024328d1ae6714d7116fbcce_7_llvm_2876468079995662589;
    *(_QWORD *)&v23[8] = 2LL;
    *(_QWORD *)&v23[32] = 0LL;
    *(_QWORD *)&v23[16] = &v11;
    *(_QWORD *)&v23[24] = 2LL;
    core::panicking::panic_fmt(v23, &anon_5805961d024328d1ae6714d7116fbcce_9_llvm_2876468079995662589);
  }
  if ( *((_QWORD *)&v20 + 1) )
  {
    <alloc::string::String as core::clone::Clone>::clone(v23, *((_QWORD *)&v20 + 1));
    v16 = *(_QWORD *)&v23[16];
    v15 = *(_OWORD *)v23;
  }
  else
  {
    *(_QWORD *)&v15 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a2, aDigits, 6LL);
  v28[0] = aDigits;
  v28[1] = 6LL;
  if ( (_DWORD)v20 != 2 )
  {
    v19 = v22;
    v18 = v21;
    v17 = v20;
    v11 = (__int128 *)v28;
    v12 = <&T as core::fmt::Display>::fmt;
    v13 = &v17;
    v14 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v23 = &anon_5805961d024328d1ae6714d7116fbcce_7_llvm_2876468079995662589;
    *(_QWORD *)&v23[8] = 2LL;
    *(_QWORD *)&v23[32] = 0LL;
    *(_QWORD *)&v23[16] = &v11;
    *(_QWORD *)&v23[24] = 2LL;
    core::panicking::panic_fmt(v23, &anon_5805961d024328d1ae6714d7116fbcce_9_llvm_2876468079995662589);
  }
  if ( *((_QWORD *)&v20 + 1) )
  {
    <alloc::string::String as core::clone::Clone>::clone(v23, *((_QWORD *)&v20 + 1));
    *(_QWORD *)&v18 = *(_QWORD *)&v23[16];
    v17 = *(_OWORD *)v23;
  }
  else
  {
    *(_QWORD *)&v17 = 0x8000000000000000LL;
  }
  uu_csplit::split_name::SplitName::new((__int64)v23, v27, &v15, (__int64 *)&v17);
  if ( *(_QWORD *)v23 == 0x8000000000000000LL )
  {
    v22 = *(_QWORD *)&v23[40];
    v21 = *(_OWORD *)&v23[24];
    v20 = *(_OWORD *)&v23[8];
    v11 = (__int128 *)uucore::util_name();
    v12 = v8;
    *(_QWORD *)&v15 = &v11;
    *((_QWORD *)&v15 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &unk_275B50;
    *((_QWORD *)&v17 + 1) = 2LL;
    v19 = 0LL;
    *(_QWORD *)&v18 = &v15;
    *((_QWORD *)&v18 + 1) = 1LL;
    std::io::stdio::_eprint(&v17);
    v11 = &v20;
    v12 = <uu_csplit::csplit_error::CsplitError as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &unk_275B70;
    *((_QWORD *)&v17 + 1) = 2LL;
    v19 = 0LL;
    *(_QWORD *)&v18 = &v11;
    *((_QWORD *)&v18 + 1) = 1LL;
    std::io::stdio::_eprint(&v17);
    std::process::exit(1);
  }
  *(_OWORD *)(a1 + 80) = v26;
  *(_OWORD *)(a1 + 64) = v25;
  v4 = *(_OWORD *)v23;
  v5 = *(_OWORD *)&v23[16];
  v6 = *(_OWORD *)&v23[32];
  *(_OWORD *)(a1 + 48) = v24;
  *(_OWORD *)(a1 + 32) = v6;
  *(_OWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  *(_BYTE *)(a1 + 96) = flag;
  *(_BYTE *)(a1 + 97) = v10;
  *(_BYTE *)(a1 + 98) = v9;
  *(_BYTE *)(a1 + 99) = v3;
  return a1;
}
