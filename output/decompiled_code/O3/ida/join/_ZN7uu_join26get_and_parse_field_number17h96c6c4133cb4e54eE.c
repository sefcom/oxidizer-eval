__int64 __fastcall uu_join::get_and_parse_field_number(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  _BYTE v8[64]; // [rsp+8h] [rbp-40h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v8, a2, a3, 1LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(a3, 1LL, v8);
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    v5 = *(_QWORD *)(v4 + 16);
  }
  else
  {
    v6 = 0LL;
  }
  return uu_join::parse_field_number_option(a1, v6, v5);
}
