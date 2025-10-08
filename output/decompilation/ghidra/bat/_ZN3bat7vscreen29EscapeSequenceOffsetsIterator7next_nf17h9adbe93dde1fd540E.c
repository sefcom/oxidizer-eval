void _ZN3bat7vscreen29EscapeSequenceOffsetsIterator7next_nf17h9adbe93dde1fd540E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined auVar5 [12];
  byte local_48 [16];
  long local_38;
  
  iVar1 = *(int *)(param_2 + 0x30);
  auVar5 = *(undefined (*) [12])(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x30) = 0x110001;
  if (iVar1 == 0x110001) {
    auVar5 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                       (param_2 + 0x10);
  }
  uVar4 = auVar5._0_8_;
  if (auVar5._8_4_ != 0x110000) {
    _ZN3bat7vscreen29EscapeSequenceOffsetsIterator16chars_take_while17h61c196cbe5d42445E
              (local_48,param_2);
    if ((local_48[0] & 1) == 0) {
      *param_1 = 2;
      param_1[1] = param_3;
      param_1[2] = uVar4;
      param_1[3] = uVar4;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x30);
      auVar5 = *(undefined (*) [12])(param_2 + 0x28);
      *(undefined4 *)(param_2 + 0x30) = 0x110001;
      if (iVar1 == 0x110001) {
        auVar5 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                           (param_2 + 0x10);
      }
      uVar3 = auVar5._8_4_;
      if (uVar3 != 0x110000) {
        local_38 = 1;
        if ((0x7f < uVar3) && (local_38 = 2, 0x7ff < uVar3)) {
          local_38 = 4 - (ulong)(uVar3 < 0x10000);
        }
        local_38 = local_38 + auVar5._0_8_;
      }
      *param_1 = 2;
      param_1[1] = param_3;
      param_1[2] = uVar4;
      param_1[3] = local_38;
    }
    return;
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00807550)
            ("to not be finished",0x12,&PTR_DAT_007ceea8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}