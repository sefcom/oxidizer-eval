__int64 __fastcall uu_split::strategy::Strategy::from::get_and_parse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64),
        __int64 (__fastcall *a6)(__int64, _OWORD *))
{
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 result; // rax
  _OWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars20; // [rsp+20h] [rbp+20h]
  _OWORD vars30[2]; // [rsp+30h] [rbp+30h] BYREF
  _OWORD vars50[5]; // [rsp+50h] [rbp+50h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(vars0, a2, a3, a4);
  v10 = clap_builder::parser::error::MatchesError::unwrap(a3, a4, vars0);
  if ( !v10 )
    core::option::unwrap_failed(&off_10AE18);
  v11 = v10;
  uucore::features::parser::parse_size::parse_size_u64_max(vars30, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
  if ( LODWORD(vars30[0]) == 4 )
  {
    if ( *((_QWORD *)&vars30[0] + 1) )
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
    vars50[1] = vars30[1];
    vars50[0] = vars30[0];
    a6((__int64)vars0, vars50);
    result = vars20;
    *(_QWORD *)(a1 + 32) = vars20;
    *(_OWORD *)(a1 + 16) = vars0[1];
    *(_OWORD *)a1 = vars0[0];
  }
  return result;
}