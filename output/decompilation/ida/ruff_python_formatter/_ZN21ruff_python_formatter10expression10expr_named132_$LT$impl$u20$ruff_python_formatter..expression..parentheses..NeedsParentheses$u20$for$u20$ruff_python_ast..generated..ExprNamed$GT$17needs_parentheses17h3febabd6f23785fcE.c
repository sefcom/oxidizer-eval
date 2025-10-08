char __fastcall ruff_python_formatter::expression::expr_named::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprNamed>::needs_parentheses(
        __int64 a1)
{
  char result; // al

  result = 1;
  switch ( a1 )
  {
    case 2LL:
    case 4LL:
    case 5LL:
    case 7LL:
    case 8LL:
    case 9LL:
    case 10LL:
    case 17LL:
    case 39LL:
    case 40LL:
    case 41LL:
    case 60LL:
    case 84LL:
      return result;
    default:
      result = 0;
      break;
  }
  return result;
}