__int64 __fastcall uu_numfmt::parse_options::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v5[3]; // [rsp+18h] [rbp-50h] BYREF
  char v6; // [rsp+30h] [rbp-38h]
  _QWORD v7[6]; // [rsp+38h] [rbp-30h] BYREF

  v5[0] = 0LL;
  v5[1] = a2;
  v5[2] = a3;
  v6 = 1;
  v4[0] = v5;
  v4[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v7[0] = &off_FAFA0;
  v7[1] = 1LL;
  v7[4] = 0LL;
  v7[2] = v4;
  v7[3] = 1LL;
  return alloc::fmt::format::format_inner(a1, v7);
}
