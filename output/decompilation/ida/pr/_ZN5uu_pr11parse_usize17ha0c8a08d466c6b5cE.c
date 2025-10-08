__int64 __fastcall uu_pr::parse_usize(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v9; // [rsp+18h] [rbp-80h] BYREF
  __int128 v10; // [rsp+20h] [rbp-78h]
  __int128 v11; // [rsp+30h] [rbp-68h]
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp-28h]

  v8[0] = a3;
  v8[1] = a4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9);
  v6 = clap_builder::parser::error::MatchesError::unwrap(a3, a4, &v9);
  if ( v6 )
  {
    uu_pr::parse_usize::{{closure}}(&v13, v8, v6);
    v12 = v16;
    v11 = v15;
    v10 = v14;
    v9 = v13;
    return core::ops::function::FnOnce::call_once(a1, &v9);
  }
  else
  {
    result = 0x8000000000000006LL;
    *a1 = 0x8000000000000006LL;
  }
  return result;
}