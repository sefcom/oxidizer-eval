void _ZN21ruff_python_formatter8comments9placement24handle_with_item_comment17h611b67e9426fd01cE
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  uint uVar10;
  char cVar11;
  ulong extraout_RDX;
  long lVar12;
  long *plVar13;
  long local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  uint local_3c [3];
  
  puVar9 = 
  PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
  ;
  local_50 = param_2[2];
  local_68 = param_2[4];
  if (local_50 == 0x5e || local_68 == 0x5e) {
    lVar12 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar12;
    lVar12 = *param_2;
    lVar3 = param_2[1];
    lVar4 = param_2[2];
    lVar5 = param_2[3];
    lVar6 = param_2[4];
    lVar7 = param_2[5];
    lVar8 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar8;
    param_1[4] = lVar6;
    param_1[5] = lVar7;
    param_1[2] = lVar4;
    param_1[3] = lVar5;
    *param_1 = lVar12;
    param_1[1] = lVar3;
  }
  else {
    local_48 = param_2[3];
    local_60 = param_2[5];
    local_58 = param_4;
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(&local_50);
    uVar10 = (*(code *)puVar9)(&local_68);
    if (uVar10 < (uint)extraout_RDX) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d318);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer24find_only_token_in_range17hf615155300975391E_006bdc80)
              (local_3c,extraout_RDX & 0xffffffff,uVar10,0x35,param_3,local_58);
    uVar10 = *(uint *)((long)param_2 + 0x44);
    cVar11 = *(char *)(param_2 + 9);
    if (uVar10 < local_3c[0]) {
      lVar12 = 0x5f;
      plVar13 = &local_50;
    }
    else if (cVar11 == '\0') {
      local_48 = param_2[1];
      lVar12 = 0x60;
      cVar11 = '\0';
      plVar13 = param_2;
    }
    else {
      lVar12 = 0x5e;
      local_48 = local_60;
      plVar13 = &local_68;
    }
    uVar1 = *(undefined4 *)(param_2 + 8);
    param_1[1] = *plVar13;
    param_1[2] = local_48;
    *(undefined4 *)(param_1 + 3) = uVar1;
    *(uint *)((long)param_1 + 0x1c) = uVar10;
    *(undefined *)(param_1 + 4) = 0;
    *(char *)((long)param_1 + 0x21) = cVar11;
    *param_1 = lVar12;
  }
  return;
}