__int64 __fastcall just::lexer::Lexer::rest_starts_with(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  v4 = just::lexer::Lexer::rest(a1);
  return core::slice::<impl [T]>::starts_with(v4, v5, a2, a3);
}