__int64 __fastcall uu_pr::parse_usize(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v9[80]; // [rsp+18h] [rbp-50h] BYREF

  v8[0] = a3;
  v8[1] = a4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v9);
  v6 = clap_builder::parser::error::MatchesError::unwrap(a3, a4, v9);
  if ( v6 )
  {
    uu_pr::parse_usize::{{closure}}(v9, v8, v6);
    return core::ops::function::FnOnce::call_once(a1, v9);
  }
  else
  {
    result = 0x8000000000000006LL;
    *a1 = 0x8000000000000006LL;
  }
  return result;
}
