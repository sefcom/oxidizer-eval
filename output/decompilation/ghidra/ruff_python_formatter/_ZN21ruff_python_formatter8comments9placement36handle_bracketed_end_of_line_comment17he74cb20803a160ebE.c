void _ZN21ruff_python_formatter8comments9placement36handle_bracketed_end_of_line_comment17he74cb20803a160ebE
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined local_7c [8];
  char local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined local_60 [48];
  
  if (*(char *)(param_2 + 9) == '\0') {
    local_70 = *(undefined4 *)param_2;
    uStack_6c = *(undefined4 *)((long)param_2 + 4);
    uStack_68 = *(undefined4 *)(param_2 + 1);
    uStack_64 = *(undefined4 *)((long)param_2 + 0xc);
    uVar11 = (*(code *)
               PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
             )(&local_70);
    uVar1 = *(uint *)(param_2 + 8);
    if (uVar1 < uVar11) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d3a8);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (local_60,param_3,param_4,uVar11,uVar1);
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(local_7c,local_60);
    if (local_74 == 'Z') {
      uVar4 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar4;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar8 = param_2[4];
      uVar9 = param_2[5];
      uVar10 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar10;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      return;
    }
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(local_7c,local_60);
    if (local_74 == 'Z') {
      uVar2 = *(undefined4 *)((long)param_2 + 0x44);
      param_1[1] = CONCAT44(uStack_6c,local_70);
      param_1[2] = CONCAT44(uStack_64,uStack_68);
      *(uint *)(param_1 + 3) = uVar1;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
      *(undefined2 *)(param_1 + 4) = 0;
      *param_1 = 0x60;
      return;
    }
  }
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar10;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}