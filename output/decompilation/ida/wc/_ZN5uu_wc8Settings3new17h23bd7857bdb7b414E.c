__int64 __fastcall uu_wc::Settings::new(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char flag; // r15
  char v5; // r12
  char v6; // r13
  char v7; // bp
  char v8; // al
  __int128 v9; // xmm0
  char v11; // [rsp+Ch] [rbp-9Ch]
  __int128 v12; // [rsp+10h] [rbp-98h] BYREF
  __int128 v13; // [rsp+20h] [rbp-88h]
  __int128 v14; // [rsp+38h] [rbp-70h] BYREF
  __int64 v15; // [rsp+48h] [rbp-60h]
  _QWORD v16[3]; // [rsp+50h] [rbp-58h] BYREF
  int v17; // [rsp+68h] [rbp-40h]
  __int16 v18; // [rsp+6Ch] [rbp-3Ch]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v16);
  v2 = clap_builder::parser::error::MatchesError::unwrap(v16);
  if ( v2 )
    <uu_wc::Input as core::convert::From<&T>>::from(&v14, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
  else
    *(_QWORD *)&v14 = 0x8000000000000002LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v16, a2);
  v3 = clap_builder::parser::error::MatchesError::unwrap(v16);
  if ( v3 )
    v11 = <uu_wc::TotalWhen as core::convert::From<T>>::from(v3);
  else
    v11 = 0;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aBytes_0, 5LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aChars, 5LL);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aLines, 5LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aWords, 5LL);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMaxLineLength, 15LL);
  *(_QWORD *)&v13 = v15;
  v12 = v14;
  BYTE8(v13) = flag;
  BYTE9(v13) = v5;
  BYTE10(v13) = v6;
  BYTE11(v13) = v7;
  BYTE12(v13) = v8;
  BYTE13(v13) = v11;
  if ( (unsigned int)uu_wc::Settings::number_enabled(&v12) )
  {
    v9 = v12;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
    v17 = 16842753;
    v18 = 0;
    v16[0] = 0x8000000000000002LL;
    *(_DWORD *)(a1 + 24) = 16842753;
    *(_BYTE *)(a1 + 28) = 0;
    *(_BYTE *)(a1 + 29) = v11;
    core::ptr::drop_in_place<uu_wc::Settings>(v16);
  }
  return a1;
}