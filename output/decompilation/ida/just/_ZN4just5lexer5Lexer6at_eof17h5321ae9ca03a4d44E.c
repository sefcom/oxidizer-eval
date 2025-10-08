bool __fastcall just::lexer::Lexer::at_eof(_QWORD *a1)
{
  __int64 v1; // rdx

  just::lexer::Lexer::rest(a1);
  return v1 == 0;
}