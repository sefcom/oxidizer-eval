ulong _ZN21ruff_python_formatter10expression11binary_like26is_simple_power_expression17h3eeb00a32a823a47E
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  ulong uVar2;
  undefined auVar3 [16];
  
  cVar1 = _ZN21ruff_python_formatter10expression11binary_like23is_simple_power_operand17h106dbb259fc1f4c9E
                    ();
  if ((cVar1 != '\0') &&
     (cVar1 = _ZN21ruff_python_formatter10expression11binary_like23is_simple_power_operand17h106dbb259fc1f4c9E
                        (param_2), cVar1 != '\0')) {
    auVar3 = (*(code *)
               PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
             )(param_1);
    cVar1 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                      (auVar3._0_8_,auVar3._8_8_,param_3,param_4,param_5,param_6);
    if (cVar1 == '\0') {
      auVar3 = (*(code *)
                 PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
               )(param_2);
      uVar2 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                        (auVar3._0_8_,auVar3._8_8_,param_3,param_4,param_5,param_6);
      return uVar2 ^ 1;
    }
  }
  return 0;
}