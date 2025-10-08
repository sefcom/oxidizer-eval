bool __fastcall ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v10; // edx
  unsigned int v11; // eax
  _QWORD v13[2]; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v14[12]; // [rsp+1Ch] [rbp-7Ch] BYREF
  _BYTE v15[112]; // [rsp+28h] [rbp-70h] BYREF

  v13[0] = a1;
  v13[1] = a2;
  <ruff_python_ast::generated::ExprRef as ruff_text_size::traits::Ranged>::range(v13);
  ruff_python_trivia::tokenizer::first_non_trivia_token(v15, v10, a5, a6);
  if ( v15[8] != 6 )
    return 0;
  v11 = <ruff_python_ast::generated::ExprRef as ruff_text_size::traits::Ranged>::range(v13);
  ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to(v15, v11, a5, a6, a3, a4);
  core::iter::traits::iterator::Iterator::try_fold(v14, v15);
  return v14[8] == 5;
}