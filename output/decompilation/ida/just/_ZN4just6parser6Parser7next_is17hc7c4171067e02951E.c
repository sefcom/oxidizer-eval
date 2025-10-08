__int64 __fastcall just::parser::Parser::next_is(__int64 a1, char a2)
{
  char v3; // [rsp+1h] [rbp-1h] BYREF

  v3 = a2;
  return just::parser::Parser::next_are(a1, &v3, 1LL);
}