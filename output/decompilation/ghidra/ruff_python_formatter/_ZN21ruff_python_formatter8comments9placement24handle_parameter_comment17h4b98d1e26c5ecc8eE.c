void _ZN21ruff_python_formatter8comments9placement24handle_parameter_comment17h4b98d1e26c5ecc8eE
               (undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

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
  uint uVar11;
  char local_49;
  undefined8 local_48;
  char local_40;
  
  if (*(long *)(param_3 + 8) == 0) {
    uVar11 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_3 + 0x10) <= uVar11) {
LAB_00402718:
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
LAB_004026e3:
    uVar1 = *(undefined *)(param_2 + 9);
    uVar2 = *(undefined4 *)((long)param_2 + 0x44);
    param_1[1] = 0x50;
    param_1[2] = param_3;
    *(uint *)(param_1 + 3) = uVar11;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar1;
    *param_1 = 0x5e;
    return;
  }
  (*(code *)
    PTR__ZN18ruff_python_trivia9tokenizer22first_non_trivia_token17h0374298a6b2ddd94E_006bdc60)
            (&local_48,*(undefined4 *)(param_3 + 0x14),param_4,param_5);
  if (local_40 == 'Z') {
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              (&DAT_0018a95e,0x55,&PTR_DAT_0067d168);
  }
  else {
    local_49 = local_40;
    if (local_40 == '\f') {
      uVar11 = *(uint *)(param_2 + 8);
      if ((uint)local_48 <= uVar11) goto LAB_00402718;
      goto LAB_004026e3;
    }
  }
  local_48 = 0;
  (*(code *)PTR__ZN4core9panicking13assert_failed17h581e1324dddd7d27E_006bd640)
            (0,&local_49,&DAT_0018a9b3,&local_48,&PTR_DAT_0067d180);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}