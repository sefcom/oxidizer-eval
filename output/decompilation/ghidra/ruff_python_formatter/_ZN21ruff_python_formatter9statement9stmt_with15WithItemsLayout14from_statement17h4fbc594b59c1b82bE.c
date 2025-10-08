void _ZN21ruff_python_formatter9statement9stmt_with15WithItemsLayout14from_statement17h4fbc594b59c1b82bE
               (int *param_1,long param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long extraout_RDX;
  long extraout_RDX_00;
  long lVar6;
  undefined auVar7 [16];
  int local_58;
  uint uStack_54;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 local_40;
  long local_38;
  
  if (param_4 != 0) goto LAB_004207c6;
  cVar3 = _ZN21ruff_python_formatter9statement9stmt_with24has_magic_trailing_comma17h2ac603b89bb80e24E
                    (param_2,param_3);
  if (cVar3 != '\0') {
    param_1[2] = 4;
    param_1[3] = 0;
    goto LAB_0042092b;
  }
  if (*(long *)(param_2 + 0x10) == 1) {
    lVar6 = *(long *)(param_2 + 8);
    lVar1 = param_3[2];
    lVar5 = lVar1 + 0x10;
    local_40 = 0x54;
    local_38 = lVar6;
    _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
              (lVar5,&local_40);
    if (extraout_RDX == 0) {
      local_58 = 0x54;
      uStack_54 = 0;
      uStack_50 = (undefined5)lVar6;
      uStack_4b = (undefined3)((ulong)lVar6 >> 0x28);
      _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                (lVar5,&local_58);
      if (extraout_RDX_00 == 0) {
        auVar7 = (*(code *)
                   PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
                 )(lVar6);
        lVar5 = *(long *)(lVar1 + 0x60);
        cVar3 = _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
                          (auVar7._0_8_,auVar7._8_8_,*(undefined8 *)(lVar5 + 8),
                           *(undefined8 *)(lVar5 + 0x10),*param_3,param_3[1]);
        if (cVar3 == '\0') goto LAB_0042088e;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_00420927;
      }
    }
LAB_004207c6:
    param_1[2] = 5;
    param_1[3] = 0;
  }
  else {
LAB_0042088e:
    bVar2 = 2 < *(byte *)((long)param_3 + 0x2c);
    if (*(byte *)((long)param_3 + 0x2c) == 3) {
      bVar2 = 8 < *(byte *)((long)param_3 + 0x2d);
    }
    if (!bVar2) {
      _ZN21ruff_python_formatter9statement9stmt_with28are_with_items_parenthesized17h74e11b19a49524e4E
                (&local_58,param_2,*param_3,param_3[1]);
      if (local_58 != 4) {
        param_1[5] = iStack_44;
        *(ulong *)((long)param_1 + 5) = CONCAT53(uStack_50,uStack_54._1_3_);
        *(ulong *)((long)param_1 + 0xd) =
             CONCAT17((undefined)iStack_44,CONCAT43(uStack_48,uStack_4b));
        *param_1 = local_58;
        *(undefined *)(param_1 + 1) = (undefined)uStack_54;
        return;
      }
      if ((uStack_54 & 1) == 0) {
        param_1[2] = 3;
        param_1[3] = 0;
        goto LAB_0042092b;
      }
    }
    lVar6 = *(long *)(param_2 + 8);
    lVar5 = 4;
    if (*(long *)(param_2 + 0x10) == 1) {
      if (*(long *)(lVar6 + 0x58) == 0) {
        lVar5 = 1;
      }
      else {
        bVar4 = _ZN21ruff_python_formatter10expression29can_omit_optional_parentheses17he025906cb0ce46e0E
                          (lVar6,param_3);
        lVar5 = (ulong)(bVar4 ^ 1) * 2 + 2;
      }
    }
    *(long *)(param_1 + 2) = lVar5;
LAB_00420927:
    *(long *)(param_1 + 4) = lVar6;
  }
LAB_0042092b:
  *param_1 = 4;
  return;
}