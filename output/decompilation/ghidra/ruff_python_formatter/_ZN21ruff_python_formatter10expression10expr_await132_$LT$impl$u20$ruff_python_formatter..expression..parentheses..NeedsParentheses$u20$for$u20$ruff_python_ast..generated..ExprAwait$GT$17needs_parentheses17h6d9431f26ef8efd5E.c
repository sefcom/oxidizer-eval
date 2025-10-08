undefined8
_ZN21ruff_python_formatter10expression10expr_await132__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprAwait_GT_17needs_parentheses17h6d9431f26ef8efd5E
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar2 = 1;
  if (param_2 != 0x27) {
    auVar3 = (*(code *)
               PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
             )(*param_1);
    cVar1 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                      (auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(*(long *)(param_4[2] + 0x60) + 8),
                       *(undefined8 *)(*(long *)(param_4[2] + 0x60) + 0x10),*param_4,param_4[1]);
    uVar2 = 3;
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0040fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((long)&UINT_001875b4 + (long)(int)(&UINT_001875b4)[*(uint *)*param_1]))
                        ((uint *)*param_1,0x27,param_1,param_4);
      return uVar2;
    }
  }
  return uVar2;
}