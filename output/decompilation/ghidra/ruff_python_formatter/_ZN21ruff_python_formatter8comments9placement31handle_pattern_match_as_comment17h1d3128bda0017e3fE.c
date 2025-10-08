void _ZN21ruff_python_formatter8comments9placement31handle_pattern_match_as_comment17h1d3128bda0017e3fE
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 extraout_EDX;
  long *plVar11;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  long local_88;
  long local_80;
  uint local_74 [2];
  char local_6c;
  undefined local_68 [48];
  undefined local_38 [8];
  
  local_88 = param_2[2];
  if (local_88 != 0x5e) {
    local_80 = param_2[3];
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(&local_88);
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer9starts_at17h166ec428bdd164b3E_006bdc78)
              (local_68,extraout_EDX,param_3,param_4);
    local_38[0] = 0;
    _ZN4core4iter6traits8iterator8Iterator8try_fold17h574e0d0b6077c929E(&local_94,local_68,local_38)
    ;
    if ((char)local_8c == 'Z') {
      local_98 = CONCAT31(local_98._1_3_,0x5a);
    }
    else {
      local_98 = local_8c;
      local_a0 = local_94;
    }
    _ZN4core6option15Option_LT_T_GT_6filter17h8b58b23f5402a20dE(local_74,&local_a0);
    if (local_6c != 'Z') {
      uVar2 = *(uint *)((long)param_2 + 0x44);
      plVar11 = &local_88;
      if (local_74[0] <= uVar2) {
        plVar11 = param_2;
      }
      uVar1 = *(undefined *)(param_2 + 9);
      lVar3 = param_2[8];
      plVar10 = &local_80;
      if (local_74[0] <= uVar2) {
        plVar10 = param_2 + 1;
      }
      lVar4 = *plVar10;
      param_1[1] = *plVar11;
      param_1[2] = lVar4;
      param_1[3] = lVar3;
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar1;
      *param_1 = 0x60 - (ulong)(uVar2 < local_74[0]);
      return;
    }
  }
  lVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar3;
  lVar3 = *param_2;
  lVar4 = param_2[1];
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
  *param_1 = lVar3;
  param_1[1] = lVar4;
  return;
}