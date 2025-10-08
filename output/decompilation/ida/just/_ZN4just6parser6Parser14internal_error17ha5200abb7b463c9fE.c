__int64 __fastcall just::parser::Parser::internal_error(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v4[112]; // [rsp+8h] [rbp-70h] BYREF

  <T as core::convert::Into<U>>::into(v4, aParserNextCall, 49LL);
  v3 = 0x8000000000000028LL;
  return just::parser::Parser::error(a1, a2, (__int64)&v3);
}