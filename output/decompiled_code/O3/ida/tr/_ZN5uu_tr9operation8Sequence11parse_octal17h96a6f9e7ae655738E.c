__int64 __fastcall uu_tr::operation::Sequence::parse_octal(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+8h] [rbp-10h] BYREF

  v4[0] = asc_149EE;
  v4[1] = 1LL;
  return nom::sequence::preceded::{{closure}}(a1, v4, a2, a3);
}
