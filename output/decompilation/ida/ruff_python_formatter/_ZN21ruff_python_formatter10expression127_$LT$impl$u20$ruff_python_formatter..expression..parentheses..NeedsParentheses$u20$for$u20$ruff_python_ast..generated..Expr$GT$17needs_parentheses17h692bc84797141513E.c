char __fastcall ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  char result; // al

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 4:
    case 5:
      result = a2 == 39;
      break;
    case 1:
      result = ruff_python_formatter::expression::expr_named::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprNamed>::needs_parentheses(a2);
      break;
    case 2:
      result = ruff_python_formatter::expression::expr_bin_op::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprBinOp>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 (__int64)a4);
      break;
    case 3:
      result = ruff_python_formatter::expression::expr_unary_op::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprUnaryOp>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 a4);
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0x1D:
    case 0x1E:
    case 0x20:
      result = 3;
      break;
    case 0xB:
      result = 2 * (a2 != 39) + 1;
      break;
    case 0xC:
      result = ruff_python_formatter::expression::expr_await::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAwait>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 a4);
      break;
    case 0xD:
      result = ruff_python_formatter::expression::expr_yield::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprYield>::needs_parentheses(a1 + 8);
      break;
    case 0xE:
      result = ruff_python_formatter::expression::expr_yield_from::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprYieldFrom>::needs_parentheses(a1 + 8);
      break;
    case 0xF:
      result = ruff_python_formatter::expression::expr_compare::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCompare>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 (__int64)a4);
      break;
    case 0x10:
      result = ruff_python_formatter::expression::expr_call::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprCall>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 a4);
      break;
    case 0x11:
      result = ruff_python_formatter::expression::expr_f_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprFString>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 a4);
      break;
    case 0x12:
      result = ruff_python_formatter::expression::expr_t_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprTString>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 a4);
      break;
    case 0x13:
      result = ruff_python_formatter::expression::expr_string_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprStringLiteral>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 (__int64)a4);
      break;
    case 0x14:
      result = ruff_python_formatter::expression::expr_bytes_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprBytesLiteral>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 (__int64)a4);
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1C:
      result = 2;
      break;
    case 0x19:
      result = ruff_python_formatter::expression::expr_attribute::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAttribute>::needs_parentheses(
                 a1 + 8,
                 a2,
                 a3,
                 a4);
      break;
    case 0x1A:
      result = ruff_python_formatter::expression::expr_subscript::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprSubscript>::needs_parentheses(
                 (_QWORD *)(a1 + 8),
                 a2,
                 a3,
                 a4);
      break;
    case 0x1B:
    case 0x1F:
      result = 0;
      break;
  }
  return result;
}