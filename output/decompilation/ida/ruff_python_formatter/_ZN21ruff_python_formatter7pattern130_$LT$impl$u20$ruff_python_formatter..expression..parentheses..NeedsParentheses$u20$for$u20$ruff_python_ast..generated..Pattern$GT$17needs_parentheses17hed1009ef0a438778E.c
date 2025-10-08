char __fastcall ruff_python_formatter::pattern::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Pattern>::needs_parentheses(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 v4; // r8
  char result; // al

  v4 = 3LL;
  if ( (*(_QWORD *)a1 ^ 0x8000000000000000LL) < 8 )
    v4 = *(_QWORD *)a1 ^ 0x8000000000000000LL;
  switch ( v4 )
  {
    case 0uLL:
      result = ruff_python_formatter::pattern::pattern_match_value::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::nodes::PatternMatchValue>::needs_parentheses(
                 (__int64 *)(a1 + 8),
                 a2,
                 a3,
                 a4);
      break;
    case 1uLL:
      result = 2;
      break;
    case 2uLL:
    case 3uLL:
    case 5uLL:
      result = 3;
      break;
    case 4uLL:
      result = ruff_python_formatter::pattern::pattern_match_class::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::nodes::PatternMatchClass>::needs_parentheses(
                 a1 + 8,
                 a2,
                 a3,
                 (__int64)a4);
      break;
    case 6uLL:
      result = 2 * (*(_BYTE *)(a1 + 55) == 0xDA);
      break;
    case 7uLL:
      result = 0;
      break;
  }
  return result;
}