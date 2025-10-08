__int64 __fastcall fd::hyperlink::encode(_QWORD *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int8 v5; // [rsp+7h] [rbp-41h] BYREF
  _QWORD v6[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v7[6]; // [rsp+18h] [rbp-30h] BYREF

  v5 = a2;
  if ( (unsigned __int8)(a2 - 48) < 0xAu )
    return <core::fmt::Formatter as core::fmt::Write>::write_char();
  if ( (unsigned __int8)((a2 & 0xDF) - 65) <= 0x19u )
    return <core::fmt::Formatter as core::fmt::Write>::write_char();
  v2 = (unsigned int)a2 - 45;
  if ( (unsigned int)v2 <= 0x32 )
  {
    v3 = 0x4000000002007LL;
    if ( _bittest64(&v3, v2) )
      return <core::fmt::Formatter as core::fmt::Write>::write_char();
  }
  if ( a2 == 126 )
    return <core::fmt::Formatter as core::fmt::Write>::write_char();
  v6[0] = &v5;
  v6[1] = core::fmt::num::<impl core::fmt::UpperHex for u8>::fmt;
  v7[0] = &off_4024E0;
  v7[1] = 1LL;
  v7[4] = &unk_7B3B8;
  v7[5] = 1LL;
  v7[2] = v6;
  v7[3] = 1LL;
  return core::fmt::Formatter::write_fmt(*a1, a1[1], v7);
}