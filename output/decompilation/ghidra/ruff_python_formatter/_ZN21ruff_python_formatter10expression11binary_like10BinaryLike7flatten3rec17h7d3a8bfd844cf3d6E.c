void _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten3rec17h7d3a8bfd844cf3d6E
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               )

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined8 local_50;
  int *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = *param_1;
  piVar6 = (int *)param_1[1];
  iVar1 = *piVar6;
  iVar5 = (int)lVar2;
  local_40 = param_3;
  local_38 = param_5;
  if (iVar1 != 0) {
    if (iVar1 != 2) {
      if (iVar1 != 0xf) {
LAB_00406db9:
        _ZN8smallvec17SmallVec_LT_A_GT_4push17h1d2aed1a79494331E(local_38,param_1);
        return;
      }
      auVar7 = (*(code *)
                 PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
               )(piVar6);
      lVar3 = *param_2;
      cVar4 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                        (auVar7._0_8_,auVar7._8_8_,*(undefined8 *)(*(long *)(lVar3 + 0x60) + 8),
                         *(undefined8 *)(*(long *)(lVar3 + 0x60) + 0x10),local_40,param_4);
      if (cVar4 != '\0') goto LAB_00406db9;
      piVar6 = piVar6 + 2;
      if (lVar2 == 0) {
        auVar7 = *(undefined (*) [16])(param_1 + 2);
      }
      else {
        local_50 = 0x2a;
        local_48 = piVar6;
        auVar7 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                           (lVar3 + 0x10,&local_50);
        if (iVar5 != 1) {
          auVar8 = *(undefined (*) [16])(param_1 + 2);
          goto LAB_00406f03;
        }
      }
      local_50 = 0x2a;
      local_48 = piVar6;
      auVar8 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                         (lVar3 + 0x10,&local_50);
LAB_00406f03:
      _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten15recurse_compare17h864917a931c07552E
                (piVar6,auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,param_2,local_40,param_4
                 ,local_38);
      return;
    }
    auVar7 = (*(code *)
               PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
             )(piVar6);
    lVar3 = *param_2;
    cVar4 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                      (auVar7._0_8_,auVar7._8_8_,*(undefined8 *)(*(long *)(lVar3 + 0x60) + 8),
                       *(undefined8 *)(*(long *)(lVar3 + 0x60) + 0x10),local_40,param_4);
    if (cVar4 != '\0') goto LAB_00406db9;
    piVar6 = piVar6 + 2;
    if (lVar2 == 0) {
      auVar7 = *(undefined (*) [16])(param_1 + 2);
    }
    else {
      local_50 = 0x1d;
      local_48 = piVar6;
      auVar7 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                         (lVar3 + 0x10,&local_50);
      if (iVar5 != 1) {
        auVar8 = *(undefined (*) [16])(param_1 + 2);
        goto LAB_00406ea5;
      }
    }
    local_50 = 0x1d;
    local_48 = piVar6;
    auVar8 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                       (lVar3 + 0x10,&local_50);
LAB_00406ea5:
    _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten14recurse_binary17h026cf51245cd5d13E
              (piVar6,auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,param_2,local_40,param_4,
               local_38);
    return;
  }
  auVar7 = (*(code *)
             PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
           )(piVar6);
  lVar3 = *param_2;
  cVar4 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                    (auVar7._0_8_,auVar7._8_8_,*(undefined8 *)(*(long *)(lVar3 + 0x60) + 8),
                     *(undefined8 *)(*(long *)(lVar3 + 0x60) + 0x10),local_40,param_4);
  if (cVar4 != '\0') goto LAB_00406db9;
  piVar6 = piVar6 + 2;
  if (lVar2 == 0) {
    auVar7 = *(undefined (*) [16])(param_1 + 2);
  }
  else {
    local_50 = 0x1b;
    local_48 = piVar6;
    auVar7 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                       (lVar3 + 0x10,&local_50);
    if (iVar5 != 1) {
      auVar8 = *(undefined (*) [16])(param_1 + 2);
      goto LAB_00406ed4;
    }
  }
  local_50 = 0x1b;
  local_48 = piVar6;
  auVar8 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                     (lVar3 + 0x10,&local_50);
LAB_00406ed4:
  _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten12recurse_bool17hbfd4616a4c6c4b7aE
            (piVar6,auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,param_2,local_40,param_4,
             local_38);
  return;
}