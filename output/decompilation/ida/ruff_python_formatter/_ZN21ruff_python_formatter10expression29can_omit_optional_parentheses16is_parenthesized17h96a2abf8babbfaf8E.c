char __fastcall ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(
        _DWORD *a1,
        __int64 a2)
{
  if ( *a1 == 26 )
    return 0;
  else
    return ruff_python_formatter::expression::has_parentheses(a1, a2) & 1;
}