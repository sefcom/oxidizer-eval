__int64 __fastcall just::subcommand::Subcommand::completions(unsigned __int8 a1)
{
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v5[6]; // [rsp+28h] [rbp-30h] BYREF

  v1 = qword_9FA48[a1];
  v4[0] = (char *)dword_9FA30 + dword_9FA30[a1];
  v4[1] = v1;
  v3[0] = v4;
  v3[1] = <&T as core::fmt::Display>::fmt;
  v5[0] = asc_65DB0;
  v5[1] = 1LL;
  v5[4] = 0LL;
  v5[2] = v3;
  v5[3] = 1LL;
  return std::io::stdio::_print(v5);
}