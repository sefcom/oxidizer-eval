bool _ZN21ruff_python_formatter10expression11binary_like7Operand36has_unparenthesized_leading_comments17ha71cc5f7e9cdd6d7E
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  undefined uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined local_60 [16];
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (*param_1 == 0) {
    lVar4 = param_1[3];
  }
  else {
    lVar1 = param_1[1];
    local_60 = (*(code *)
                 PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
               )(lVar1);
    auVar5 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                       (param_2 + 0x10,local_60);
    lVar4 = auVar5._8_8_;
    local_48 = auVar5._0_8_;
    auVar5 = (*(code *)
               PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
             )(lVar1);
    cVar2 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                      (auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(*(long *)(param_2 + 0x60) + 8),
                       *(undefined8 *)(*(long *)(param_2 + 0x60) + 0x10),param_3,param_4);
    if (cVar2 != '\0') {
      local_50 = param_1 + 1;
      local_38 = local_48 + lVar4 * 0xc;
      local_40 = local_48;
      local_60._0_8_ = param_3;
      local_60._8_8_ = param_4;
      uVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h5edd77dd602bc49bE
                        (&local_40,local_60);
      return (bool)uVar3;
    }
  }
  return lVar4 != 0;
}