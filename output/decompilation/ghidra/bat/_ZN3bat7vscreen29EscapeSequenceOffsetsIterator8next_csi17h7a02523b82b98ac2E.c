void _ZN3bat7vscreen29EscapeSequenceOffsetsIterator8next_csi17h7a02523b82b98ac2E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [12];
  char local_48 [16];
  long local_38;
  
  iVar1 = *(int *)(param_2 + 0x30);
  auVar8 = *(undefined (*) [12])(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x30) = 0x110001;
  if (iVar1 == 0x110001) {
    auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                       (param_2 + 0x10);
  }
  uVar4 = auVar8._8_4_;
  if (uVar4 != 0x110000) {
    lVar6 = 1;
    if ((0x7f < uVar4) && (lVar6 = 2, 0x7ff < uVar4)) {
      lVar6 = 4 - (ulong)(uVar4 < 0x10000);
    }
    lVar6 = lVar6 + auVar8._0_8_;
    _ZN3bat7vscreen29EscapeSequenceOffsetsIterator16chars_take_while17hb1e7c9a8d56ba4f5E
              (local_48,param_2);
    lVar7 = lVar6;
    if (local_48[0] != '\0') {
      lVar7 = local_38;
    }
    _ZN3bat7vscreen29EscapeSequenceOffsetsIterator16chars_take_while17h61c196cbe5d42445E
              (local_48,param_2);
    lVar5 = lVar7;
    if (local_48[0] != '\0') {
      lVar5 = local_38;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    auVar8 = *(undefined (*) [12])(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = 0x110001;
    if (iVar1 == 0x110001) {
      auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (param_2 + 0x10);
    }
    uVar4 = auVar8._8_4_;
    lVar3 = lVar5;
    if (uVar4 != 0x110000) {
      lVar3 = 1;
      if ((0x7f < uVar4) && (lVar3 = 2, 0x7ff < uVar4)) {
        lVar3 = 4 - (ulong)(uVar4 < 0x10000);
      }
      lVar3 = lVar3 + auVar8._0_8_;
    }
    *param_1 = 4;
    param_1[1] = param_3;
    param_1[2] = lVar6;
    param_1[3] = lVar7;
    param_1[4] = lVar5;
    param_1[5] = lVar3;
    return;
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00807550)
            ("to not be finished",0x12,&PTR_DAT_007cee90);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}