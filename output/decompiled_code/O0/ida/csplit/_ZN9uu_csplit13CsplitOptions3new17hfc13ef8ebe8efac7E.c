__int64 __fastcall uu_csplit::CsplitOptions::new(__int64 a1, __int64 a2)
{
  char v2; // r15
  char v3; // r12
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v8; // rdx
  char v9; // [rsp+6h] [rbp-292h]
  char flag; // [rsp+7h] [rbp-291h]
  const char *v11; // [rsp+8h] [rbp-290h] BYREF
  __int64 v12; // [rsp+10h] [rbp-288h]
  const char **v13; // [rsp+18h] [rbp-280h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+20h] [rbp-278h]
  __int128 *v15; // [rsp+28h] [rbp-270h]
  __int64 (__fastcall *v16)(); // [rsp+30h] [rbp-268h]
  char **v17; // [rsp+38h] [rbp-260h] BYREF
  __int64 v18; // [rsp+40h] [rbp-258h]
  const char ***v19; // [rsp+48h] [rbp-250h]
  __int64 v20; // [rsp+50h] [rbp-248h]
  __int64 v21; // [rsp+58h] [rbp-240h]
  _BYTE v22[24]; // [rsp+68h] [rbp-230h] BYREF
  __int128 v23; // [rsp+80h] [rbp-218h]
  __int128 v24; // [rsp+90h] [rbp-208h]
  __int128 v25; // [rsp+A0h] [rbp-1F8h]
  __int128 v26; // [rsp+B0h] [rbp-1E8h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-1D8h]
  __int128 v28; // [rsp+D0h] [rbp-1C8h]
  __int128 v29; // [rsp+E0h] [rbp-1B8h]
  __int128 v30; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+100h] [rbp-198h]
  __int128 v32; // [rsp+110h] [rbp-188h] BYREF
  __int64 v33; // [rsp+120h] [rbp-178h]
  _QWORD v34[2]; // [rsp+130h] [rbp-168h] BYREF
  _QWORD v35[2]; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v36[2]; // [rsp+150h] [rbp-148h] BYREF
  __int128 v37; // [rsp+160h] [rbp-138h] BYREF
  __int64 v38; // [rsp+170h] [rbp-128h]
  _OWORD v39[2]; // [rsp+180h] [rbp-118h] BYREF
  __int64 v40; // [rsp+1A0h] [rbp-F8h]
  _QWORD v41[6]; // [rsp+1A8h] [rbp-F0h] BYREF
  _QWORD v42[6]; // [rsp+1D8h] [rbp-C0h] BYREF
  _BYTE v43[48]; // [rsp+208h] [rbp-90h] BYREF
  __int128 v44; // [rsp+238h] [rbp-60h]
  __int128 v45; // [rsp+248h] [rbp-50h]
  __int128 v46; // [rsp+258h] [rbp-40h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aKeepFiles, 10LL, &off_2A4EF8);
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL, &off_2A4F10);
  v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aElideEmptyFile, 17LL, &off_2A4F28);
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSuppressMatche, 16LL, &off_2A4F40);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v22, a2, aPrefix, 6LL);
  v11 = aPrefix;
  v12 = 6LL;
  if ( *(_QWORD *)v22 )
  {
    v29 = v25;
    v28 = v24;
    v27 = v23;
    v26 = *(_OWORD *)&v22[8];
    v13 = &v11;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &v26;
    v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v17 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v18 = 2LL;
    v21 = 0LL;
    v19 = &v13;
    v20 = 2LL;
    core::panicking::panic_fmt(&v17, &off_2A4F58);
  }
  if ( *(_QWORD *)&v22[8] )
  {
    <alloc::string::String as core::clone::Clone>::clone(v22, *(_QWORD *)&v22[8]);
    v31 = *(_QWORD *)&v22[16];
    v30 = *(_OWORD *)v22;
  }
  else
  {
    *(_QWORD *)&v30 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v22, a2, aSuffixFormat, 13LL);
  v11 = aSuffixFormat;
  v12 = 13LL;
  if ( *(_QWORD *)v22 )
  {
    v29 = v25;
    v28 = v24;
    v27 = v23;
    v26 = *(_OWORD *)&v22[8];
    v13 = &v11;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &v26;
    v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v17 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v18 = 2LL;
    v21 = 0LL;
    v19 = &v13;
    v20 = 2LL;
    core::panicking::panic_fmt(&v17, &off_2A4F70);
  }
  if ( *(_QWORD *)&v22[8] )
  {
    <alloc::string::String as core::clone::Clone>::clone(v22, *(_QWORD *)&v22[8]);
    v33 = *(_QWORD *)&v22[16];
    v32 = *(_OWORD *)v22;
  }
  else
  {
    *(_QWORD *)&v32 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v22, a2, aDigits, 6LL);
  v11 = aDigits;
  v12 = 6LL;
  if ( *(_QWORD *)v22 )
  {
    v29 = v25;
    v28 = v24;
    v27 = v23;
    v26 = *(_OWORD *)&v22[8];
    v13 = &v11;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &v26;
    v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v17 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v18 = 2LL;
    v21 = 0LL;
    v19 = &v13;
    v20 = 2LL;
    core::panicking::panic_fmt(&v17, &off_2A4F88);
  }
  if ( *(_QWORD *)&v22[8] )
  {
    <alloc::string::String as core::clone::Clone>::clone(v22, *(_QWORD *)&v22[8]);
    v38 = *(_QWORD *)&v22[16];
    v37 = *(_OWORD *)v22;
  }
  else
  {
    *(_QWORD *)&v37 = 0x8000000000000000LL;
  }
  uu_csplit::split_name::SplitName::new(v43, &v30, &v32, &v37);
  if ( *(_QWORD *)v43 == 0x8000000000000000LL )
  {
    v40 = *(_QWORD *)&v43[40];
    v39[1] = *(_OWORD *)&v43[24];
    v39[0] = *(_OWORD *)&v43[8];
    v35[0] = uucore::util_name();
    v35[1] = v8;
    v34[0] = v35;
    v34[1] = <&T as core::fmt::Display>::fmt;
    v41[0] = &unk_2A4FA0;
    v41[1] = 2LL;
    v41[4] = 0LL;
    v41[2] = v34;
    v41[3] = 1LL;
    std::io::stdio::_eprint(v41);
    v36[0] = v39;
    v36[1] = <uu_csplit::csplit_error::CsplitError as core::fmt::Display>::fmt;
    v42[0] = &unk_2A4FC0;
    v42[1] = 2LL;
    v42[4] = 0LL;
    v42[2] = v36;
    v42[3] = 1LL;
    std::io::stdio::_eprint(v42);
    std::process::exit(1);
  }
  *(_OWORD *)(a1 + 80) = v46;
  *(_OWORD *)(a1 + 64) = v45;
  v4 = *(_OWORD *)v43;
  v5 = *(_OWORD *)&v43[16];
  v6 = *(_OWORD *)&v43[32];
  *(_OWORD *)(a1 + 48) = v44;
  *(_OWORD *)(a1 + 32) = v6;
  *(_OWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  *(_BYTE *)(a1 + 96) = flag;
  *(_BYTE *)(a1 + 97) = v9;
  *(_BYTE *)(a1 + 98) = v2;
  *(_BYTE *)(a1 + 99) = v3;
  return a1;
}
