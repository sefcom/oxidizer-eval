__int64 __fastcall just::lexer::Lexer::unterminated_interpolation_error(__int64 a1, __int64 a2)
{
  unsigned __int64 v3[13]; // [rsp+0h] [rbp-68h] BYREF

  v3[0] = 0x8000000000000047LL;
  return just::compile_error::CompileError::new(a1, a2, (__int64)v3);
}