__int64 __fastcall uu_dd::progress::WriteStat::report(__int64 a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v4[6]; // [rsp+28h] [rbp-30h] BYREF

  v3[0] = a1 + 16;
  v3[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v3[2] = a1 + 24;
  v3[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v4[0] = &unk_162530;
  v4[1] = 3LL;
  v4[4] = 0LL;
  v4[2] = v3;
  v4[3] = 2LL;
  return <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, v4);
}
