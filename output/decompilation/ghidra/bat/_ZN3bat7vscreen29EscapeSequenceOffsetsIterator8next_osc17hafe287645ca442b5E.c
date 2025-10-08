void _ZN3bat7vscreen29EscapeSequenceOffsetsIterator8next_osc17hafe287645ca442b5E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined4 **ppuVar4;
  long lVar5;
  int extraout_EDX;
  uint uVar6;
  undefined4 **ppuVar7;
  undefined auVar8 [12];
  int local_8c;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined4 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  int *local_40;
  undefined *local_38;
  
  lVar5 = param_2 + 0x10;
  iVar1 = *(int *)(param_2 + 0x30);
  auVar8 = *(undefined (*) [12])(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x30) = 0x110001;
  if (iVar1 == 0x110001) {
    auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                       (lVar5);
  }
  uVar6 = auVar8._8_4_;
  if (uVar6 == 0x110000) {
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00807550)
              ("to not be finished",0x12,&PTR_DAT_007cee60);
    local_8c = extraout_EDX;
LAB_00545d0a:
    local_40 = &local_8c;
    local_38 = PTR__ZN41__LT_char_u20_as_u20_core__fmt__Debug_GT_3fmt17h3216ceddb89fec0bE_008076c8;
    local_70 = &PTR_s_this_should_not_be_reached__char_007cee50;
    local_68 = 1;
    local_50 = 0;
    local_60 = &local_40;
    local_58 = 1;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_008074e0)
              (&local_70,&PTR_DAT_007cee78);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_80 = auVar8._0_8_;
  local_78 = param_3;
  do {
    _ZN3bat7vscreen29EscapeSequenceOffsetsIterator16chars_take_while17hb0c8fb03173e56daE
              (&local_70,param_2);
    ppuVar7 = local_60;
    if ((int)local_70 != 1) {
      ppuVar7 = *(undefined4 ***)(param_2 + 8);
      ppuVar4 = ppuVar7;
      goto LAB_00545c86;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    auVar8 = *(undefined (*) [12])(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = 0x110001;
    if (iVar1 == 0x110001) {
      auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (lVar5);
    }
    local_8c = auVar8._8_4_;
    lVar3 = auVar8._0_8_;
    ppuVar4 = ppuVar7;
    if (local_8c == 0x110000) goto LAB_00545c86;
    if (local_8c == 7) break;
    if (local_8c != 0x1b) goto LAB_00545d0a;
    iVar1 = *(int *)(param_2 + 0x30);
    auVar8 = *(undefined (*) [12])(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = 0x110001;
    if (iVar1 == 0x110001) {
      local_88 = lVar3;
      auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (lVar5);
      lVar3 = local_88;
    }
    if (auVar8._8_4_ == 0x5c) {
      ppuVar4 = (undefined4 **)(auVar8._0_8_ + 1);
      goto LAB_00545c86;
    }
  } while (auVar8._8_4_ != 0x110000);
  ppuVar4 = (undefined4 **)(lVar3 + 1);
LAB_00545c86:
  lVar5 = 1;
  if ((0x7f < uVar6) && (lVar5 = 2, 0x7ff < uVar6)) {
    lVar5 = 4 - (ulong)(uVar6 < 0x10000);
  }
  *param_1 = 3;
  param_1[1] = local_78;
  param_1[2] = lVar5 + local_80;
  param_1[3] = ppuVar7;
  param_1[4] = ppuVar4;
  return;
}