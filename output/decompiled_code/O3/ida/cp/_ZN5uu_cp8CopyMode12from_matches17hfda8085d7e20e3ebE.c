__int64 __fastcall uu_cp::CopyMode::from_matches(__int64 a1)
{
  unsigned int flag; // ebp
  _QWORD v3[2]; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v4[4]; // [rsp+18h] [rbp-C0h] BYREF
  _OWORD v5[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+58h] [rbp-80h]
  _QWORD v7[6]; // [rsp+60h] [rbp-78h] BYREF
  _OWORD v8[2]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v9; // [rsp+B0h] [rbp-28h]

  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aLink, 4LL) )
  {
    return 0;
  }
  else
  {
    LOBYTE(flag) = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aSymbolicLink, 13LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        v5,
        a1,
        anon_66ef24e3f07859015e0038a4432ebbf2_108_llvm_10434181731454514353,
        6LL);
      v3[0] = anon_66ef24e3f07859015e0038a4432ebbf2_108_llvm_10434181731454514353;
      v3[1] = 6LL;
      if ( LODWORD(v5[0]) != 2 )
      {
        v9 = v6;
        v8[1] = v5[1];
        v8[0] = v5[0];
        v4[0] = v3;
        v4[1] = <&T as core::fmt::Display>::fmt;
        v4[2] = v8;
        v4[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v7[0] = &anon_ecdb7401d275e96e4c427fca0a702ec8_2_llvm_6279117827671126663;
        v7[1] = 2LL;
        v7[4] = 0LL;
        v7[2] = v4;
        v7[3] = 2LL;
        core::panicking::panic_fmt(v7, &anon_ecdb7401d275e96e4c427fca0a702ec8_4_llvm_6279117827671126663);
      }
      LOBYTE(flag) = 3;
      if ( !*((_QWORD *)&v5[0] + 1)
        && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a1,
                               anon_66ef24e3f07859015e0038a4432ebbf2_109_llvm_10434181731454514353,
                               1LL) )
      {
        LOBYTE(flag) = 2;
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                a1,
                                aAttributesOnly,
                                15LL) )
        {
          flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aRemoveDestinat, 18LL);
          LOBYTE(flag) = 2 * (flag ^ 1) + 2;
        }
      }
    }
  }
  return flag;
}
