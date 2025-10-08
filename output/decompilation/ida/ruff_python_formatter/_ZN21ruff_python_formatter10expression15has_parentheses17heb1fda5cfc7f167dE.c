__int64 __fastcall ruff_python_formatter::expression::has_parentheses(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  unsigned int has_own_parentheses; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  bool is_expression_parenthesized; // al
  unsigned int v7; // ecx

  v2 = a2[2];
  has_own_parentheses = ruff_python_formatter::expression::has_own_parentheses(a1, v2);
  if ( (_BYTE)has_own_parentheses == 2 || (has_own_parentheses & 1) == 0 )
  {
    v4 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1);
    is_expression_parenthesized = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                                    v4,
                                    v5,
                                    *(_QWORD *)(*(_QWORD *)(v2 + 96) + 8LL),
                                    *(_QWORD *)(*(_QWORD *)(v2 + 96) + 16LL),
                                    *a2,
                                    a2[1]);
    v7 = (unsigned __int8)has_own_parentheses;
    has_own_parentheses = 1;
    if ( !is_expression_parenthesized )
      return v7;
  }
  return has_own_parentheses;
}