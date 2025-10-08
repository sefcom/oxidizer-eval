__int64 __fastcall just::line::Line::first(_DWORD *a1, __int64 a2)
{
  if ( a2 && *a1 == 18 )
    return just::token::Token::lexeme(a1 + 2);
  else
    return 0LL;
}