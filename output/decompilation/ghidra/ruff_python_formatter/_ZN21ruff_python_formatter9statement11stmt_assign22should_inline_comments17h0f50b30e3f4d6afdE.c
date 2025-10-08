bool _ZN21ruff_python_formatter9statement11stmt_assign22should_inline_comments17h0f50b30e3f4d6afdE
               (undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  switch(*param_1) {
  case 0x11:
    cVar2 = (*(code *)
              PTR__ZN21ruff_python_formatter10expression13expr_f_string134__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprFString_GT_17needs_parentheses17hacd5263d47a01197E_006bdda0
            )(param_1 + 2);
    return cVar2 == '\x02';
  case 0x12:
    cVar2 = (*(code *)
              PTR__ZN21ruff_python_formatter10expression13expr_t_string134__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprTString_GT_17needs_parentheses17hf9e0e3daeb3d28c4E_006bde40
            )(param_1 + 2);
    return cVar2 == '\x02';
  case 0x13:
    cVar2 = (*(code *)
              PTR__ZN21ruff_python_formatter10expression19expr_string_literal140__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprStringLiteral_GT_17needs_parentheses17ha7a960908cc0ce8dE_006bde20
            )(param_1 + 2);
    return cVar2 == '\x02';
  case 0x14:
    cVar2 = (*(code *)
              PTR__ZN21ruff_python_formatter10expression18expr_bytes_literal139__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprBytesLiteral_GT_17needs_parentheses17h6cf3018f5b50a126E_006bdd50
            )(param_1 + 2);
    return cVar2 == '\x02';
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1c:
    bVar1 = true;
  }
  return bVar1;
}