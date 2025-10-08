void _ZN21ruff_python_formatter8comments9placement59handle_trailing_expression_starred_star_end_of_line_comment17h2ce8acd719e7de77E
               (undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

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
  undefined uVar11;
  char cVar12;
  undefined auStack_58 [48];
  
  if (*(int *)(param_2 + 4) != 0x5e) {
    uVar1 = *(uint *)(param_2 + 8);
    if (uVar1 < *(uint *)(param_3 + 8)) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d300);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (auStack_58,param_4,param_5,*(uint *)(param_3 + 8),uVar1);
    uVar11 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h139f27bef1b5e023E(auStack_58);
    cVar12 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                       (uVar11,1);
    if (cVar12 == '\0') {
      uVar11 = *(undefined *)(param_2 + 9);
      uVar2 = *(undefined4 *)((long)param_2 + 0x44);
      param_1[1] = 0x36;
      param_1[2] = param_3;
      *(uint *)(param_1 + 3) = uVar1;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar11;
      *param_1 = 0x5e;
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