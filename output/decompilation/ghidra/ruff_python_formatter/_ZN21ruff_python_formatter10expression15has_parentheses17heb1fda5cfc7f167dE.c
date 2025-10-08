uint _ZN21ruff_python_formatter10expression15has_parentheses17heb1fda5cfc7f167dE
               (undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined auVar5 [16];
  
  lVar1 = param_2[2];
  uVar3 = _ZN21ruff_python_formatter10expression19has_own_parentheses17he088d283b6b32ebcE
                    (param_1,lVar1);
  if (((char)uVar3 == '\x02') || (uVar4 = uVar3, (uVar3 & 1) == 0)) {
    auVar5 = (*(code *)
               PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
             )(param_1);
    lVar1 = *(long *)(lVar1 + 0x60);
    cVar2 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                      (auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(lVar1 + 8),
                       *(undefined8 *)(lVar1 + 0x10),*param_2,param_2[1]);
    uVar4 = 1;
    if (cVar2 == '\0') {
      uVar4 = uVar3 & 0xff;
    }
  }
  return uVar4;
}