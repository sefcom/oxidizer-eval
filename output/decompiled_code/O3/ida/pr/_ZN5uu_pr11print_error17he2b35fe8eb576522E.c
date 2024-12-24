__int64 __fastcall uu_pr::print_error(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v4[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v5[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = a2;
  result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aNoFileWarnings, 16LL);
  if ( !(_BYTE)result )
  {
    v4[0] = &v3;
    v4[1] = <&T as core::fmt::Display>::fmt;
    v5[0] = &unk_308840;
    v5[1] = 2LL;
    v5[4] = 0LL;
    v5[2] = v4;
    v5[3] = 1LL;
    return std::io::stdio::_eprint(v5);
  }
  return result;
}
