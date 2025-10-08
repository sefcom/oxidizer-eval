void _ZN21ruff_python_formatter8comments9placement36handle_pattern_match_mapping_comment17h5703d2f319014972E
               (long *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined uVar11;
  char cVar12;
  uint uVar13;
  ulong uVar14;
  ulong extraout_RDX;
  long local_58;
  long lStack_50;
  
  if ((*(int *)(param_2 + 4) == 0x5e) && (*(char *)(param_3 + 0x4f) != -0x26)) {
    uVar1 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_3 + 0x34) < uVar1) {
      lVar4 = param_2[1];
      uVar11 = *(undefined *)(param_2 + 9);
      uVar2 = *(undefined4 *)((long)param_2 + 0x44);
      param_1[1] = *param_2;
      param_1[2] = lVar4;
      *(uint *)(param_1 + 3) = uVar1;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar11;
      *param_1 = 0x60;
    }
    else {
      local_58 = param_2[2];
      if (local_58 == 0x5e) {
        local_58 = *param_2;
        lStack_50 = param_2[1];
        uVar13 = (*(code *)
                   PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
                 )(&local_58);
        uVar14 = (ulong)uVar13;
      }
      else {
        lStack_50 = param_2[3];
        (*(code *)
          PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
        )(&local_58);
        uVar14 = extraout_RDX & 0xffffffff;
      }
      if (uVar1 < (uint)uVar14) {
        (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                  ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d330);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)
        PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                (&local_58,param_4,param_5,uVar14,uVar1);
      uVar11 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h12bf6dc1167f662cE(&local_58);
      cVar12 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                         (uVar11,1);
      if (cVar12 == '\0') {
        lVar4 = param_2[9];
        param_1[8] = param_2[8];
        param_1[9] = lVar4;
        lVar4 = *param_2;
        lVar5 = param_2[1];
        lVar6 = param_2[2];
        lVar7 = param_2[3];
        lVar8 = param_2[4];
        lVar9 = param_2[5];
        lVar10 = param_2[7];
        param_1[6] = param_2[6];
        param_1[7] = lVar10;
        param_1[4] = lVar8;
        param_1[5] = lVar9;
        param_1[2] = lVar6;
        param_1[3] = lVar7;
        *param_1 = lVar4;
        param_1[1] = lVar5;
      }
      else {
        lVar4 = param_2[1];
        uVar11 = *(undefined *)(param_2 + 9);
        uVar2 = *(undefined4 *)((long)param_2 + 0x44);
        param_1[1] = *param_2;
        param_1[2] = lVar4;
        *(uint *)(param_1 + 3) = uVar1;
        *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
        *(undefined *)(param_1 + 4) = 0;
        *(undefined *)((long)param_1 + 0x21) = uVar11;
        *param_1 = 0x60;
      }
    }
  }
  else {
    lVar4 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar4;
    lVar4 = *param_2;
    lVar5 = param_2[1];
    lVar6 = param_2[2];
    lVar7 = param_2[3];
    lVar8 = param_2[4];
    lVar9 = param_2[5];
    lVar10 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar10;
    param_1[4] = lVar8;
    param_1[5] = lVar9;
    param_1[2] = lVar6;
    param_1[3] = lVar7;
    *param_1 = lVar4;
    param_1[1] = lVar5;
  }
  return;
}