__int64 __fastcall uu_tr::operation::Sequence::parse_char_equal(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[11]; // [rsp+0h] [rbp-58h] BYREF

  v4[5] = asc_20857;
  v4[6] = 2LL;
  v4[0] = 0x8000000000000001LL;
  v4[3] = asc_20859;
  v4[4] = 2LL;
  v4[7] = asc_20859;
  v4[8] = 2LL;
  nom::sequence::delimited::{{closure}}(a1, v4, a2, a3);
  if ( v4[0] != 0x800000000000000ALL
    && v4[0]
    && ((v4[0] ^ 0x8000000000000000LL) == 4 || (v4[0] ^ 0x8000000000000000LL) >= 0xA) )
  {
    _rust_dealloc(v4[1], v4[0], 1LL);
  }
  return a1;
}
