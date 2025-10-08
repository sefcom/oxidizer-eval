void _ZN21ruff_python_formatter8comments9placement21handle_slice_comments17h19c4e8125bfdfa93E
               (long *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  char cVar8;
  undefined auVar9 [16];
  undefined local_84 [8];
  char local_7c;
  undefined local_78 [72];
  
  uVar2 = *(uint *)(param_2 + 8);
  (*(code *)
    PTR__ZN18ruff_python_trivia9tokenizer18BackwardsTokenizer5up_to17h10c703c3dd949d71E_006bdc70)
            (local_78,uVar2,param_6,param_7,param_4,param_5);
  _ZN4core4iter6traits8iterator8Iterator8try_fold17h84c5c22150ea5174E(local_84,local_78);
  cVar8 = *(char *)(param_2 + 9);
  if ((local_7c == 'Z') || (local_7c != '\t' || cVar8 != '\0')) {
    uVar7 = *(undefined4 *)((long)param_2 + 0x44);
    cVar3 = _ZN21ruff_python_formatter10expression10expr_slice23assign_comment_in_slice17h53141057c2112aa6E
                      (uVar2,param_6,param_7,param_3);
    if (cVar3 == '\0') {
      plVar1 = (long *)(param_3 + 8);
      lVar5 = *plVar1;
    }
    else if (cVar3 == '\x01') {
      plVar1 = (long *)(param_3 + 0x10);
      lVar5 = *plVar1;
    }
    else {
      plVar1 = (long *)(param_3 + 0x18);
      lVar5 = *plVar1;
    }
    if (lVar5 == 0) {
      lVar6 = 0x60;
      lVar5 = 0x3a;
    }
    else {
      uVar4 = (*(code *)
                PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
              )();
      auVar9 = (*(code *)
                 PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
               )(*plVar1);
      param_3 = auVar9._8_8_;
      lVar5 = auVar9._0_8_;
      lVar6 = 0x5f - (ulong)(uVar2 < uVar4);
    }
  }
  else {
    lVar5 = *param_2;
    param_3 = param_2[1];
    uVar7 = *(undefined4 *)((long)param_2 + 0x44);
    lVar6 = 0x60;
    cVar8 = '\0';
  }
  param_1[1] = lVar5;
  param_1[2] = param_3;
  *(uint *)(param_1 + 3) = uVar2;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
  *(undefined *)(param_1 + 4) = 0;
  *(char *)((long)param_1 + 0x21) = cVar8;
  *param_1 = lVar6;
  return;
}