bool __fastcall ruff_python_formatter::other::arguments::is_single_argument_parenthesized(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // edx
  _BYTE v8[8]; // [rsp+Ch] [rbp-5Ch] BYREF
  char v9; // [rsp+14h] [rbp-54h]
  _BYTE v10[80]; // [rsp+18h] [rbp-50h] BYREF

  <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a1);
  if ( v6 > a2 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57DFB0);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v10, a3, a4, v6, a2);
  do
    core::iter::traits::iterator::Iterator::try_fold(v8, v10);
  while ( v9 == 11 );
  if ( v9 != 6 )
    return 0;
  do
    core::iter::traits::iterator::Iterator::try_fold(v8, v10);
  while ( v9 == 11 );
  return v9 == 6;
}