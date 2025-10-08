void _ZN21ruff_python_formatter8comments9placement35handle_trailing_binary_like_comment17ha53b59540e29e738E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  uint uVar12;
  ulong extraout_RDX;
  long local_98;
  undefined8 uStack_90;
  uint local_88 [2];
  char local_80;
  long local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined local_38 [8];
  
  puVar11 = 
  PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
  ;
  local_98 = param_2[2];
  local_78 = param_2[4];
  if (local_98 == 0x5e || local_78 == 0x5e) {
LAB_00402a63:
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
  uStack_90 = param_2[3];
  local_70 = param_2[5];
  (*(code *)
    PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
  )(&local_98);
  uVar12 = (*(code *)puVar11)(&local_78);
  if (uVar12 < (uint)extraout_RDX) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d1f8);
  }
  else {
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (local_68,param_3,param_4,extraout_RDX & 0xffffffff,uVar12);
    local_38[0] = 0;
    _ZN4core4iter6traits8iterator8Iterator8try_fold17h574e0d0b6077c929E(local_88,local_68,local_38);
    if (local_80 != 'Z') {
      uVar12 = *(uint *)((long)param_2 + 0x44);
      if (uVar12 < local_88[0]) {
        uVar1 = *(undefined *)(param_2 + 9);
        uVar2 = *(undefined4 *)(param_2 + 8);
        param_1[1] = local_98;
        param_1[2] = uStack_90;
        *(undefined4 *)(param_1 + 3) = uVar2;
        *(uint *)((long)param_1 + 0x1c) = uVar12;
        *(undefined *)(param_1 + 4) = 0;
        *(undefined *)((long)param_1 + 0x21) = uVar1;
        *param_1 = 0x5f;
        return;
      }
      goto LAB_00402a63;
    }
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
            ("Expected a token for the operator",0x21,&PTR_DAT_0067d210);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}