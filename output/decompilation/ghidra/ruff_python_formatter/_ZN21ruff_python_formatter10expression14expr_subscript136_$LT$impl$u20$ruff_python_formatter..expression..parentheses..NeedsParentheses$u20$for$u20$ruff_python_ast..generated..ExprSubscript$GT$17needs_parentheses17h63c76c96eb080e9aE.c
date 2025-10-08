ulong _ZN21ruff_python_formatter10expression14expr_subscript136__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprSubscript_GT_17needs_parentheses17h63c76c96eb080e9aE
                (undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint3 uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  lVar6 = param_4[2];
  uVar1 = *param_4;
  uVar2 = param_4[1];
  cVar4 = _ZN21ruff_python_formatter10expression15CallChainLayout15from_expression17h8a81a54727e8f68fE
                    (0x1a,param_1,*(undefined8 *)(*(long *)(lVar6 + 0x60) + 8),
                     *(undefined8 *)(*(long *)(lVar6 + 0x60) + 0x10),uVar1,uVar2);
  if (cVar4 == '\x01') {
    uVar7 = 0;
  }
  else {
    auVar8 = (*(code *)
               PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
             )(*param_1);
    cVar4 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                      (auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(*(long *)(lVar6 + 0x60) + 8),
                       *(undefined8 *)(*(long *)(lVar6 + 0x60) + 0x10),uVar1,uVar2);
    uVar7 = CONCAT71((int7)((ulong)uVar1 >> 8),3);
    if (cVar4 == '\0') {
      uVar5 = (*(code *)
                PTR__ZN21ruff_python_formatter10expression127__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__Expr_GT_17needs_parentheses17h692bc84797141513E_006bdd18
              )(*param_1,0x35,param_1,param_4);
      uVar7 = (ulong)uVar5;
      if ((char)uVar5 == '\x02') {
        uVar3 = (uint3)(uVar5 >> 8);
        uVar7 = CONCAT71((uint7)uVar3,2);
        if ((param_2 == 2) && (*(long *)(param_3 + 0x70) != 0)) {
          auVar8 = (*(code *)
                     PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
                   )();
          cVar4 = (*(code *)
                    PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_6ptr_eq17hbc360a434919a265E_006bdc28
                  )(auVar8._0_8_,auVar8._8_8_,0x35,param_1);
          if (cVar4 != '\0') {
            uVar1 = *(undefined8 *)(param_3 + 0x58);
            cVar4 = _ZN15ruff_python_ast5nodes10Parameters8is_empty17h111990be4e86bbc7E(uVar1);
            uVar7 = (ulong)CONCAT31(uVar3,3);
            if (cVar4 != '\0') {
              local_40 = 0x4f;
              local_38 = uVar1;
              lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                                (lVar6 + 0x40,&local_40);
              uVar7 = (ulong)((uint)(lVar6 != 0) * 3);
            }
          }
        }
      }
    }
  }
  return uVar7 & 0xffffffff;
}