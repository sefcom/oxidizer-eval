__int64 __fastcall just::lexer::Lexer::indentation(__int64 a1, __int64 a2)
{
  if ( !a2 )
    core::option::unwrap_failed(&off_4303E0);
  return *(_QWORD *)(a1 + 16 * a2 - 16);
}