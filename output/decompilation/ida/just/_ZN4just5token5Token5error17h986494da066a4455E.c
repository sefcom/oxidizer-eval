// attributes: thunk
__int64 __fastcall just::token::Token::error(__int64 a1, __int64 a2, __int64 a3)
{
  return just::compile_error::CompileError::new(a1, a2, a3);
}