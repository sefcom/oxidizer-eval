        __int64 (__fastcall *a6)(__int64, _OWORD *))
{
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 result; // rax
  _OWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars20; // [rsp+20h] [rbp+20h]
  int vars28; // [rsp+28h] [rbp+28h] BYREF
  __int64 vars30; // [rsp+30h] [rbp+30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(vars0, a2, a3, a4);
  v10 = clap_builder::parser::error::MatchesError::unwrap(a3, a4, vars0);
  if ( !v10 )
    core::option::unwrap_failed(&off_149450);
  v11 = v10;
  uucore::parser::parse_size::parse_size_u64_max(&vars28, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
  if ( vars28 == 3 )
  {
    if ( vars30 )
    {
      result = a5(a1 + 8);
      *(_QWORD *)a1 = 4LL;
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone((char *)vars0 + 8, v11);
      *(_QWORD *)&vars0[0] = 1LL;
      return a6(a1, vars0);
    }
  }
  else
  {
    core::ops::function::FnOnce::call_once(vars0, a6, &vars28);
    result = vars20;
    *(_QWORD *)(a1 + 32) = vars20;
    *(_OWORD *)(a1 + 16) = vars0[1];
    *(_OWORD *)a1 = vars0[0];
  }
  return result;
}
