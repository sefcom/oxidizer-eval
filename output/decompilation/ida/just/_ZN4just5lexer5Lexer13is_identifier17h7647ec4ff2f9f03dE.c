char __fastcall just::lexer::Lexer::is_identifier(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 i; // rsi
  unsigned int v4; // edx
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+8h] [rbp-20h]
  __int64 v8; // [rsp+10h] [rbp-18h]

  v6 = a1;
  v7 = a1 + a2;
  if ( (core::str::validations::next_code_point(&v6) & 1) == 0
    || v2 - 97 >= 0x1A && (v2 < 0x41 || v2 != 95 && v2 >= 0x5B) )
  {
    return 0;
  }
  v6 = a1;
  v7 = a1 + a2;
  v8 = 1LL;
  for ( i = 1LL; ; i = v8 )
  {
    if ( i )
    {
      v8 = 0LL;
      if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v6) )
        break;
    }
    if ( (core::str::validations::next_code_point(&v6) & 1) == 0 )
      break;
    if ( v4 - 97 >= 0x1A && (v4 < 0x41 || v4 >= 0x5B && v4 != 95) && v4 - 48 >= 0xA && v4 != 45 )
      return 0;
  }
  return 1;
}