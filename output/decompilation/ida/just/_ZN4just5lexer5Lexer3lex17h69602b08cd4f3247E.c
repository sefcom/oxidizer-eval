__int64 __fastcall just::lexer::Lexer::lex(__int64 a1)
{
  _BYTE v2[216]; // [rsp+0h] [rbp-D8h] BYREF

  just::lexer::Lexer::new(v2);
  return just::lexer::Lexer::tokenize(a1, v2);
}