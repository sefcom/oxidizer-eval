bool __fastcall ruff_python_formatter::statement::stmt_assign::should_non_inlineable_use_best_fit(
        int *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v4; // eax

  v4 = *a1;
  if ( *a1 == 26 )
    return (unsigned __int8)ruff_python_formatter::expression::expr_subscript::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprSubscript>::needs_parentheses(
                              (_QWORD *)a1 + 1,
                              a2,
                              a3,
                              a4) == 2;
  if ( v4 == 25 )
    return ruff_python_formatter::expression::expr_attribute::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAttribute>::needs_parentheses(
             (__int64)(a1 + 2),
             a2,
             a3,
             a4) == 2;
  if ( v4 == 16 )
    return ruff_python_formatter::expression::expr_call::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCall>::needs_parentheses(
             (_QWORD *)a1 + 1,
             a2,
             a3,
             a4) == 2;
  return 0;
}