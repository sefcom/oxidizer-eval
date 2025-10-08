void _ZN21ruff_python_formatter8comments9placement23handle_unary_op_comment17h4599e1a2dc0ed5cbE
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined local_60 [48];
  
  uVar2 = *(uint *)(param_3 + 1);
  uVar11 = (*(code *)
             PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
           )(*param_3);
  if (uVar2 <= uVar11) {
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (local_60,param_4,param_5,uVar2,uVar11);
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_7c,local_60);
    _ZN4core4iter6traits8iterator8Iterator8try_fold17h9948eabd495bf282E(&local_7c,local_60);
    if ((char)local_74 == 'Z') {
      local_68 = CONCAT31(local_68._1_3_,0x5a);
    }
    else {
      local_68 = local_74;
      local_70 = local_7c;
    }
    uVar12 = (*(code *)
               PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
             )(*param_3);
    uVar11 = _ZN4core6option15Option_LT_T_GT_6map_or17h7932729f0d6fa57cE(&local_70,uVar12);
    uVar2 = *(uint *)((long)param_2 + 0x44);
    if (uVar2 < uVar11) {
      uVar1 = *(undefined *)(param_2 + 9);
      uVar12 = *(undefined4 *)(param_2 + 8);
      param_1[1] = 0x1e;
      param_1[2] = param_3;
      *(undefined4 *)(param_1 + 3) = uVar12;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar1;
      *param_1 = 0x5e;
    }
    else {
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
    }
    return;
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d390);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}