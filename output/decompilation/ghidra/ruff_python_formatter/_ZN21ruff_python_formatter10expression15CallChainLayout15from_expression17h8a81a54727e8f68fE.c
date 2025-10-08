char _ZN21ruff_python_formatter10expression15CallChainLayout15from_expression17h8a81a54727e8f68fE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined auVar6 [16];
  int local_34;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  local_34 = 0;
  do {
    puVar5 = auVar6._8_8_;
    lVar3 = auVar6._0_8_;
    if (lVar3 == 0x10) {
LAB_004101b6:
      piVar4 = (int *)*puVar5;
    }
    else {
      if (lVar3 != 0x19) {
        if (lVar3 == 0x1a) goto LAB_004101b6;
        bVar2 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                          (lVar3,puVar5,param_3,param_4,param_5,param_6);
        local_34 = local_34 + (uint)bVar2;
        goto LAB_0041024f;
      }
      auVar6 = (*(code *)
                 PTR__ZN15ruff_python_ast10expression154__LT_impl_u20_core__convert__From_LT__RF_alloc__boxed__Box_LT_ruff_python_ast__generated__Expr_GT__GT__u20_for_u20_ruff_python_ast__generated__ExprRef_GT_4from17h473989b5e34cd5c1E_006bdd08
               )(puVar5 + 5);
      cVar1 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                        (auVar6._0_8_,auVar6._8_8_,param_3,param_4,param_5,param_6);
      if (cVar1 != '\0') {
        local_34 = local_34 + 1;
        goto LAB_0041024f;
      }
      piVar4 = (int *)puVar5[5];
      if ((*piVar4 == 0x10) || (*piVar4 == 0x1a)) {
        local_34 = local_34 + 1;
      }
    }
    auVar6 = (*(code *)
               PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
             )(piVar4);
    cVar1 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                      (auVar6._0_8_,auVar6._8_8_,param_3,param_4,param_5,param_6);
    if (cVar1 != '\0') {
LAB_0041024f:
      return (local_34 < 2) + '\x01';
    }
  } while( true );
}