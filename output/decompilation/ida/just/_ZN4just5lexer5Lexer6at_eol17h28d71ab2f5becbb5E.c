char __fastcall just::lexer::Lexer::at_eol(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 192) == 10 )
    return 1;
  else
    return just::lexer::Lexer::rest_starts_with((_QWORD *)a1, (__int64)asc_6E55E, 2LL);
}