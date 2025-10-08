void _ZN21ruff_python_formatter8comments9placement21handle_lambda_comment17h540739c62cbca78bE
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined uVar12;
  char cVar13;
  uint uVar14;
  undefined local_60 [48];
  
  lVar3 = param_3[2];
  uVar1 = *(uint *)(param_2 + 8);
  if (lVar3 == 0) {
    uVar14 = (*(code *)
               PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
             )(*param_3);
    if (uVar14 <= uVar1) goto LAB_00403ee2;
    uVar14 = *(uint *)(param_3 + 1);
    if (uVar1 < uVar14) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d378);
LAB_00403f5c:
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d360);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (uVar1 < *(uint *)(lVar3 + 0x48)) goto LAB_00403f0f;
    if ((uVar1 <= *(uint *)(lVar3 + 0x4c)) ||
       (uVar14 = (*(code *)
                   PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
                 )(*param_3), uVar14 <= uVar1)) goto LAB_00403ee2;
    uVar14 = *(uint *)(lVar3 + 0x4c);
    if (uVar1 < uVar14) goto LAB_00403f5c;
  }
  (*(code *)PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
            (local_60,param_4,param_5,uVar14,uVar1);
  uVar12 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h139f27bef1b5e023E(local_60);
  cVar13 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                     (uVar12,1);
  if (cVar13 == '\0') {
LAB_00403f0f:
    uVar5 = param_2[1];
    uVar12 = *(undefined *)(param_2 + 9);
    uVar2 = *(undefined4 *)((long)param_2 + 0x44);
    param_1[1] = *param_2;
    param_1[2] = uVar5;
    *(uint *)(param_1 + 3) = uVar1;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar12;
    *param_1 = 0x60;
    return;
  }
LAB_00403ee2:
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar11;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  return;
}