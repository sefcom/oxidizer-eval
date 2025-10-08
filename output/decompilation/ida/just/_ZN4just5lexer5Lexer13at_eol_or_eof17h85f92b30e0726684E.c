bool __fastcall just::lexer::Lexer::at_eol_or_eof(_QWORD *a1)
{
  return just::lexer::Lexer::at_eol((__int64)a1) || just::lexer::Lexer::at_eof(a1);
}