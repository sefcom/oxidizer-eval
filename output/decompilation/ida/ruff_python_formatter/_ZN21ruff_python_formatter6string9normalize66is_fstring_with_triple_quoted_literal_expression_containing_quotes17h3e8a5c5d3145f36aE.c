__int64 __fastcall ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int8 v5; // [rsp+10h] [rbp-8h]

  v4 = a3;
  v5 = 0;
  ruff_python_ast::node::<impl ruff_python_ast::nodes::FString>::visit_source_order(a1, a2, &v4);
  return v5;
}