char __fastcall ruff_python_formatter::expression::expr_call::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCall>::needs_parentheses(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r12
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  char is_expression_parenthesized; // cl

  v5 = a4[2];
  v6 = *a4;
  v7 = a4[1];
  if ( (unsigned __int8)ruff_python_formatter::expression::CallChainLayout::from_expression(
                          16LL,
                          a1,
                          *(_QWORD *)(*(_QWORD *)(v5 + 96) + 8LL),
                          *(_QWORD *)(*(_QWORD *)(v5 + 96) + 16LL),
                          *a4,
                          v7) == 1 )
    return 0;
  ruff_python_formatter::comments::Comments::dangling(v5, a1);
  result = 1;
  if ( !v9 )
  {
    v10 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*a1);
    is_expression_parenthesized = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                                    v10,
                                    v11,
                                    *(_QWORD *)(*(_QWORD *)(v5 + 96) + 8LL),
                                    *(_QWORD *)(*(_QWORD *)(v5 + 96) + 16LL),
                                    v6,
                                    v7);
    result = 3;
    if ( !is_expression_parenthesized )
      return ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(
               *a1,
               43LL,
               a1,
               a4);
  }
  return result;
}