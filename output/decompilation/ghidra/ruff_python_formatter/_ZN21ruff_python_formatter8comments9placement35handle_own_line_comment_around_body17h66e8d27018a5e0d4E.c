void _ZN21ruff_python_formatter8comments9placement35handle_own_line_comment_around_body17h66e8d27018a5e0d4E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_EDX;
  long local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined local_d0 [8];
  char local_c8;
  undefined local_80 [80];
  
  if ((*(char *)(param_2 + 9) == '\0') || (local_f8 = param_2[2], local_f8 == 0x5e)) {
    uVar2 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar2;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar8;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    *param_1 = uVar2;
    param_1[1] = uVar3;
  }
  else {
    local_f0 = param_2[3];
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(&local_f8);
    if (*(uint *)(param_2 + 8) < extraout_EDX) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d120);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (local_80,param_3,param_4,extraout_EDX);
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(local_d0,local_80);
    if (local_c8 == 'Z') {
      _ZN21ruff_python_formatter8comments9placement40handle_own_line_comment_between_branches17h2e114d08ca69ba0eE
                (local_80,param_2,local_f8,local_f0,param_3,param_4);
      local_e8 = (undefined *)&local_f8;
      local_e0 = param_3;
      local_d8 = param_4;
      _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17h7611629345dd40b0E
                (local_d0,local_80,&local_e8);
      _ZN21ruff_python_formatter8comments7visitor16CommentPlacement7or_else17h1eeeae6cff7d3bf8E
                (param_1,local_d0,param_3,param_4);
    }
    else {
      uVar2 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar2;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar8;
      param_1[4] = uVar6;
      param_1[5] = uVar7;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      *param_1 = uVar2;
      param_1[1] = uVar3;
    }
  }
  return;
}