void _ZN21ruff_python_formatter8comments9placement28handle_parenthesized_comment17h8e0502a789509c98E
               (undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined uVar12;
  char cVar13;
  uint extraout_EDX;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  uint *local_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined local_38;
  
  if ((*param_2 != 0x2c) && (local_88 = *(long *)(param_2 + 4), local_88 != 0x5e)) {
    uStack_80 = *(undefined8 *)(param_2 + 6);
    lVar3 = *(long *)(param_2 + 8);
    if (lVar3 != 0x5e) {
      uVar4 = *(undefined8 *)(param_2 + 10);
      local_78 = lVar3;
      local_70 = uVar4;
      (*(code *)
        PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
      )(&local_88);
      uVar1 = param_2[0x10];
      if (uVar1 < extraout_EDX) {
        (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                  ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d0c0);
      }
      else {
        uVar2 = param_2[0x11];
        local_b0 = extraout_EDX;
        local_ac = uVar1;
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                  (local_68,param_3,param_4,extraout_EDX,uVar1);
        local_38 = 0;
        local_90 = &local_b0;
        local_a0 = param_3;
        local_98 = param_4;
        uVar12 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17he549855285b6f0d8E
                           (local_68,&local_a0);
        cVar13 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                           (uVar12,1);
        if (cVar13 != '\0') {
          uVar12 = *(undefined *)(param_2 + 0x12);
          param_1[1] = lVar3;
          param_1[2] = uVar4;
          *(uint *)(param_1 + 3) = uVar1;
          *(uint *)((long)param_1 + 0x1c) = uVar2;
          *(undefined *)(param_1 + 4) = 0;
          *(undefined *)((long)param_1 + 0x21) = uVar12;
          *param_1 = 0x5e;
          return;
        }
        local_a4 = (*(code *)
                     PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
                   )(&local_78);
        if (uVar2 <= local_a4) {
          local_a8 = uVar2;
          (*(code *)
            PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                    (local_68,param_3,param_4,uVar2,local_a4);
          local_38 = 0;
          local_90 = &local_a8;
          local_a0 = param_3;
          local_98 = param_4;
          uVar12 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17ha19a1d5c640575e3E
                             (local_68,&local_a0);
          cVar13 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                             (uVar12,1);
          if (cVar13 != '\0') {
            uVar12 = *(undefined *)(param_2 + 0x12);
            param_1[1] = local_88;
            param_1[2] = uStack_80;
            *(uint *)(param_1 + 3) = uVar1;
            *(uint *)((long)param_1 + 0x1c) = uVar2;
            *(undefined *)(param_1 + 4) = 0;
            *(undefined *)((long)param_1 + 0x21) = uVar12;
            *param_1 = 0x5f;
            return;
          }
          uVar4 = *(undefined8 *)(param_2 + 0x12);
          param_1[8] = *(undefined8 *)(param_2 + 0x10);
          param_1[9] = uVar4;
          uVar4 = *(undefined8 *)param_2;
          uVar6 = *(undefined8 *)(param_2 + 2);
          uVar7 = *(undefined8 *)(param_2 + 4);
          uVar8 = *(undefined8 *)(param_2 + 6);
          uVar9 = *(undefined8 *)(param_2 + 8);
          uVar10 = *(undefined8 *)(param_2 + 10);
          uVar11 = *(undefined8 *)(param_2 + 0xe);
          param_1[6] = *(undefined8 *)(param_2 + 0xc);
          param_1[7] = uVar11;
          param_1[4] = uVar9;
          param_1[5] = uVar10;
          param_1[2] = uVar7;
          param_1[3] = uVar8;
          *param_1 = uVar4;
          param_1[1] = uVar6;
          return;
        }
      }
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d0d8);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x12);
  param_1[8] = *(undefined8 *)(param_2 + 0x10);
  param_1[9] = uVar4;
  uVar4 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)(param_2 + 2);
  uVar7 = *(undefined8 *)(param_2 + 4);
  uVar8 = *(undefined8 *)(param_2 + 6);
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 10);
  uVar11 = *(undefined8 *)(param_2 + 0xe);
  param_1[6] = *(undefined8 *)(param_2 + 0xc);
  param_1[7] = uVar11;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  *param_1 = uVar4;
  param_1[1] = uVar6;
  return;
}