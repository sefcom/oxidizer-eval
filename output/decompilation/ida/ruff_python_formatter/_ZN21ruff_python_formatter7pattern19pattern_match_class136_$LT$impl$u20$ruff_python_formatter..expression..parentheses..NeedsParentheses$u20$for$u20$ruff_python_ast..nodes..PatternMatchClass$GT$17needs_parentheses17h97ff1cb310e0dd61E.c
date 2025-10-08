char __fastcall ruff_python_formatter::pattern::pattern_match_class::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::nodes::PatternMatchClass>::needs_parentheses(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx

  ruff_python_formatter::comments::Comments::dangling(*(_QWORD *)(a4 + 16), a1);
  return 2 * (v4 == 0) + 1;
}