bool __fastcall ruff_python_formatter::statement::stmt_assign::has_target_own_parentheses(_DWORD *a1, __int64 a2)
{
  bool result; // al

  result = 1;
  if ( *a1 != 30 )
    return ruff_python_formatter::expression::has_own_parentheses((__int64)a1, a2) != 2;
  return result;
}