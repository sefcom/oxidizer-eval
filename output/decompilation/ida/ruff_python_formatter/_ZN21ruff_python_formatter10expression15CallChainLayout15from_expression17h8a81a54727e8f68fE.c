char __fastcall ruff_python_formatter::expression::CallChainLayout::from_expression(
        __int64 a1,
        int **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int *v12; // rdi
  __int64 v13; // rdx
  int **v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  int v19; // [rsp+0h] [rbp-34h]

  v19 = 0;
  while ( a1 == 16 )
  {
LABEL_3:
    v12 = *a2;
LABEL_4:
    a1 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v12);
    a2 = (int **)v13;
    if ( ruff_python_formatter::expression::parentheses::is_expression_parenthesized(a1, v13, a3, a4, a5, a6) )
      return (v19 < 2) + 1;
  }
  if ( a1 != 25 )
  {
    if ( a1 != 26 )
    {
      v19 += ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
               a1,
               (__int64)a2,
               a3,
               a4,
               a5,
               a6);
      return (v19 < 2) + 1;
    }
    goto LABEL_3;
  }
  v14 = a2 + 5;
  v15 = ruff_python_ast::expression::<impl core::convert::From<&alloc::boxed::Box<ruff_python_ast::generated::Expr>> for ruff_python_ast::generated::ExprRef>::from(v14);
  if ( !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v15, v16, a3, a4, a5, a6) )
  {
    v12 = *v14;
    v17 = **v14;
    if ( v17 == 16 || v17 == 26 )
      ++v19;
    goto LABEL_4;
  }
  return (++v19 < 2) + 1;
}