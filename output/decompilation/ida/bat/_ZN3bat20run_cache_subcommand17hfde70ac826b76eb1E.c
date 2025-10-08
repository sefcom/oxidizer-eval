__int64 __fastcall bat::run_cache_subcommand(_OWORD *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  _OWORD v15[8]; // [rsp+18h] [rbp-80h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v15, a2, &unk_8872B, 6LL);
  v8 = clap_builder::parser::error::MatchesError::unwrap(&unk_8872B, 6LL, v15);
  if ( v8 )
  {
    a5 = *(_QWORD *)(v8 + 8);
    a6 = *(_QWORD *)(v8 + 16);
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aBuild, 5LL) )
  {
    result = bat::build_assets((int)v15, a2, a3, a4, a5, a6);
    if ( LOBYTE(v15[0]) != 13 )
    {
      a1[4] = v15[4];
      v10 = v15[0];
      v11 = v15[1];
      v12 = v15[2];
      a1[3] = v15[3];
      a1[2] = v12;
      a1[1] = v11;
      *a1 = v10;
      return result;
    }
  }
  else
  {
    result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aClear, 5LL);
    if ( (_BYTE)result )
      result = bat::assets::clear_assets(a5, a6);
  }
  *(_BYTE *)a1 = 13;
  return result;
}