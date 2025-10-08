void _ZN21ruff_python_formatter8comments9placement29handle_dict_unpacking_comment17h0dcd851a35bf90fbE
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined uVar18;
  char cVar19;
  uint uVar20;
  ulong uVar21;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined8 *puVar22;
  char *pcVar23;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined auStack_d8 [48];
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  code *pcStack_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long lStack_60;
  undefined local_38;
  
  lVar2 = param_2[4];
  if (lVar2 != 0x5e) {
    lVar3 = param_2[5];
    local_68 = param_2[2];
    local_70 = param_4;
    if (local_68 == 0x5e) {
      local_68 = *param_2;
      lStack_60 = param_2[1];
      pcStack_80 = (code *)0x40314c;
      uVar20 = (*(code *)
                 PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
               )(&local_68);
      uVar21 = (ulong)uVar20;
    }
    else {
      lStack_60 = param_2[3];
      pcStack_80 = (code *)0x403169;
      (*(code *)
        PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
      )(&local_68);
      uVar21 = extraout_RDX & 0xffffffff;
    }
    uVar20 = *(uint *)(param_2 + 8);
    if (uVar20 < (uint)uVar21) {
      pcVar23 = "assertion failed: start.raw <= end.raw";
      puVar22 = (undefined8 *)0x26;
      pcStack_80 = 
      _ZN21ruff_python_formatter8comments9placement24handle_key_value_comment17h4bc8bf9cece74ceeE;
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d288);
      puVar17 = 
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
      ;
      lStack_e8 = puVar22[2];
      lStack_f8 = puVar22[4];
      if (lStack_f8 != 0x5e && lStack_e8 != 0x5e) {
        uStack_e0 = puVar22[3];
        uStack_f0 = puVar22[5];
        plStack_a8 = param_1;
        uStack_a0 = param_3;
        lStack_98 = lVar3;
        plStack_90 = param_2;
        lStack_88 = lVar2;
        pcStack_80 = (code *)(ulong)uVar20;
        (*(code *)
          PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
        )(&lStack_e8);
        uVar20 = (*(code *)puVar17)(&lStack_f8);
        if (uVar20 < (uint)extraout_RDX_01) {
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                    ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d2a0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                  (auStack_d8,extraout_RDX_00,uVar21,extraout_RDX_01 & 0xffffffff,uVar20);
        uVar18 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h74985cea8eb9b63fE(auStack_d8);
        cVar19 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                           (uVar18,1);
        if (cVar19 != '\0') {
          uVar10 = puVar22[1];
          cVar19 = *(char *)(puVar22 + 9);
          *(undefined8 *)(pcVar23 + 8) = *puVar22;
          *(undefined8 *)(pcVar23 + 0x10) = uVar10;
          *(undefined8 *)(pcVar23 + 0x18) = puVar22[8];
          pcVar23[0x20] = '\0';
          pcVar23[0x21] = cVar19;
          pcVar23[0] = '`';
          pcVar23[1] = '\0';
          pcVar23[2] = '\0';
          pcVar23[3] = '\0';
          pcVar23[4] = '\0';
          pcVar23[5] = '\0';
          pcVar23[6] = '\0';
          pcVar23[7] = '\0';
          return;
        }
      }
      uVar10 = puVar22[9];
      *(undefined8 *)(pcVar23 + 0x40) = puVar22[8];
      *(undefined8 *)(pcVar23 + 0x48) = uVar10;
      uVar10 = *puVar22;
      uVar11 = puVar22[1];
      uVar12 = puVar22[2];
      uVar13 = puVar22[3];
      uVar14 = puVar22[4];
      uVar15 = puVar22[5];
      uVar16 = puVar22[7];
      *(undefined8 *)(pcVar23 + 0x30) = puVar22[6];
      *(undefined8 *)(pcVar23 + 0x38) = uVar16;
      *(undefined8 *)(pcVar23 + 0x20) = uVar14;
      *(undefined8 *)(pcVar23 + 0x28) = uVar15;
      *(undefined8 *)(pcVar23 + 0x10) = uVar12;
      *(undefined8 *)(pcVar23 + 0x18) = uVar13;
      *(undefined8 *)pcVar23 = uVar10;
      *(undefined8 *)(pcVar23 + 8) = uVar11;
      return;
    }
    pcStack_80 = (code *)0x403194;
    local_78 = lVar3;
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (&local_68,param_3,local_70,uVar21,uVar20);
    local_38 = 0;
    pcStack_80 = (code *)0x4031a1;
    uVar18 = _ZN115__LT_core__iter__adapters__skip_while__SkipWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17hcc6da7fedc5bf4b5E
                       (&local_68);
    pcStack_80 = (code *)0x4031ae;
    cVar19 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                       (uVar18,1);
    if (cVar19 != '\0') {
      uVar18 = *(undefined *)(param_2 + 9);
      uVar1 = *(undefined4 *)((long)param_2 + 0x44);
      param_1[1] = lVar2;
      param_1[2] = local_78;
      *(uint *)(param_1 + 3) = uVar20;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar18;
      *param_1 = 0x5e;
      return;
    }
  }
  lVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar2;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar5 = param_2[2];
  lVar6 = param_2[3];
  lVar7 = param_2[4];
  lVar8 = param_2[5];
  lVar9 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar9;
  param_1[4] = lVar7;
  param_1[5] = lVar8;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  *param_1 = lVar2;
  param_1[1] = lVar3;
  return;
}