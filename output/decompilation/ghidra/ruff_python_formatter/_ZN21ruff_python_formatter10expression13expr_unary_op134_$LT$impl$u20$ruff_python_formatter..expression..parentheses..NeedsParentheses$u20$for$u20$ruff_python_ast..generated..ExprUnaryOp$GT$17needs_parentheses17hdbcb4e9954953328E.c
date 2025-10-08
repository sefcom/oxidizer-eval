undefined4
_ZN21ruff_python_formatter10expression13expr_unary_op134__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprUnaryOp_GT_17needs_parentheses17hdbcb4e9954953328E
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar5 = 1;
  if (param_2 != 0x27) {
    uVar3 = (*(code *)
              PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
            )(*param_1);
    lVar1 = param_4[2];
    lVar2 = *(long *)(lVar1 + 0x60);
    cVar4 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                      (uVar3,extraout_RDX,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),
                       *param_4,param_4[1]);
    uVar5 = 3;
    if (cVar4 == '\0') {
      local_28 = (*(code *)
                   PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
                 )(*param_1);
      local_20 = extraout_RDX_00;
      lVar1 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                        (lVar1 + 0x40,&local_28);
      uVar5 = 1;
      if (lVar1 == 0) {
        uVar5 = (*(code *)
                  PTR__ZN21ruff_python_formatter10expression127__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__Expr_GT_17needs_parentheses17h692bc84797141513E_006bdd18
                )(*param_1,0x1e,param_1,param_4);
      }
    }
  }
  return uVar5;
}