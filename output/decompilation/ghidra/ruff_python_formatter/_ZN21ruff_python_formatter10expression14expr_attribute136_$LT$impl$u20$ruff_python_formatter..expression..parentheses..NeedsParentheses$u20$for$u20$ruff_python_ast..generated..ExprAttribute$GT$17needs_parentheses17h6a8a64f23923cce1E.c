undefined8
_ZN21ruff_python_formatter10expression14expr_attribute136__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprAttribute_GT_17needs_parentheses17h6a8a64f23923cce1E
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  
  lVar1 = param_4[2];
  uVar5 = *param_4;
  uVar2 = param_4[1];
  cVar3 = _ZN21ruff_python_formatter10expression15CallChainLayout15from_expression17h8a81a54727e8f68fE
                    (0x19,param_1,*(undefined8 *)(*(long *)(lVar1 + 0x60) + 8),
                     *(undefined8 *)(*(long *)(lVar1 + 0x60) + 0x10),uVar5,uVar2);
  if (cVar3 == '\x01') {
    uVar4 = 0;
  }
  else {
    auVar6 = _ZN21ruff_python_formatter8comments8Comments8dangling17h5d6da51767023d74E
                       (lVar1,param_1);
    uVar4 = 1;
    if (auVar6._8_8_ == 0) {
      auVar6 = (*(code *)
                 PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
               )(*(undefined8 *)(param_1 + 0x28));
      cVar3 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                        (auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(*(long *)(lVar1 + 0x60) + 8),
                         *(undefined8 *)(*(long *)(lVar1 + 0x60) + 0x10),uVar5,uVar2);
      uVar4 = 3;
      if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0040fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)((long)&UINT_001875b4 +
                          (long)(int)(&UINT_001875b4)[**(uint **)(param_1 + 0x28)]))
                          (*(uint **)(param_1 + 0x28),0x34,param_1,param_4);
        return uVar5;
      }
    }
  }
  return uVar4;
}