bool _ZN21ruff_python_formatter9statement11stmt_assign34should_non_inlineable_use_best_fit17hd046a1d11dd3b34dE
               (int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0x1a) {
    cVar2 = (*(code *)
              PTR__ZN21ruff_python_formatter10expression14expr_subscript136__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprSubscript_GT_17needs_parentheses17h63c76c96eb080e9aE_006bde30
            )(param_1 + 2);
    return cVar2 == '\x02';
  }
  if (iVar1 != 0x19) {
    if (iVar1 == 0x10) {
      cVar2 = (*(code *)
                PTR__ZN21ruff_python_formatter10expression9expr_call131__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprCall_GT_17needs_parentheses17h0e45126306fa64b5E_006bdd60
              )(param_1 + 2);
      return cVar2 == '\x02';
    }
    return false;
  }
  cVar2 = (*(code *)
            PTR__ZN21ruff_python_formatter10expression14expr_attribute136__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprAttribute_GT_17needs_parentheses17h6a8a64f23923cce1E_006bdd10
          )(param_1 + 2);
  return cVar2 == '\x02';
}