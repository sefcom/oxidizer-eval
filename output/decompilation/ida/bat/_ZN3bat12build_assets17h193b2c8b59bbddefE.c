__int64 __fastcall bat::build_assets(int a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int8 v9; // bl
  unsigned __int8 flag; // al
  _BYTE v14[88]; // [rsp+10h] [rbp-58h] BYREF

  LODWORD(v6) = a4;
  LODWORD(v7) = a3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v14, a2, &unk_886E7, 6LL);
  v8 = clap_builder::parser::error::MatchesError::unwrap(&unk_886E7, 6LL, v14);
  if ( v8 )
  {
    v7 = *(_QWORD *)(v8 + 8);
    v6 = *(_QWORD *)(v8 + 16);
  }
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aBlank_3, 5LL) ^ 1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAcknowledgemen, 16LL);
  return bat::assets::build_assets::build(a1, v7, v6, v9, flag, a5, a6, (__int64)a0250_0, 6LL);
}