void _ZN21ruff_python_formatter8comments9placement25handle_named_expr_comment17hdecf302068a683cfE
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  uint uVar11;
  long *plVar12;
  ulong extraout_RDX;
  long *plVar13;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  uint local_3c [3];
  
  puVar10 = 
  PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
  ;
  local_60 = param_2[2];
  local_50 = param_2[4];
  if (local_60 == 0x5e || local_50 == 0x5e) {
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
  }
  else {
    local_58 = param_2[3];
    local_48 = param_2[5];
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(&local_60);
    uVar11 = (*(code *)puVar10)(&local_50);
    if (uVar11 < (uint)extraout_RDX) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d348);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer24find_only_token_in_range17hf615155300975391E_006bdc80)
              (local_3c,extraout_RDX & 0xffffffff,uVar11,0x30,param_3,param_4);
    uVar11 = *(uint *)((long)param_2 + 0x44);
    plVar13 = &local_60;
    if (local_3c[0] <= uVar11) {
      plVar13 = param_2;
    }
    uVar1 = *(undefined *)(param_2 + 9);
    lVar2 = param_2[8];
    plVar12 = &local_58;
    if (local_3c[0] <= uVar11) {
      plVar12 = param_2 + 1;
    }
    lVar3 = *plVar12;
    param_1[1] = *plVar13;
    param_1[2] = lVar3;
    param_1[3] = lVar2;
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar1;
    *param_1 = 0x60 - (ulong)(uVar11 < local_3c[0]);
  }
  return;
}