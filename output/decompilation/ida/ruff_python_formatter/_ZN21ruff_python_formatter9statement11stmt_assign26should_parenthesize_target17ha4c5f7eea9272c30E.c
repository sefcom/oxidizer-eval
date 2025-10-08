char __fastcall ruff_python_formatter::statement::stmt_assign::should_parenthesize_target(_DWORD *a1, __int64 a2)
{
  if ( ruff_python_formatter::statement::stmt_assign::has_target_own_parentheses(a1, *(_QWORD *)(a2 + 16)) )
    return 0;
  else
    return ruff_python_formatter::statement::stmt_assign::is_attribute_with_parenthesized_value(a1, a2) ^ 1;
}