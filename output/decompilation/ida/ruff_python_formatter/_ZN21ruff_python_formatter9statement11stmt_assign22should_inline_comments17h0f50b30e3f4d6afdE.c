bool __fastcall ruff_python_formatter::statement::stmt_assign::should_inline_comments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  bool result; // al
  __int64 v5; // rdx

  result = 0;
  v5 = (unsigned int)(*(_DWORD *)a1 - 17);
  switch ( *(_DWORD *)a1 )
  {
    case 0x11:
      result = ruff_python_formatter::expression::expr_f_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprFString>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 v5,
                 a4) == 2;
      break;
    case 0x12:
      result = ruff_python_formatter::expression::expr_t_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprTString>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 v5,
                 a4) == 2;
      break;
    case 0x13:
      result = ruff_python_formatter::expression::expr_string_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprStringLiteral>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 v5,
                 (__int64)a4) == 2;
      break;
    case 0x14:
      result = ruff_python_formatter::expression::expr_bytes_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprBytesLiteral>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 v5,
                 (__int64)a4) == 2;
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1C:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}