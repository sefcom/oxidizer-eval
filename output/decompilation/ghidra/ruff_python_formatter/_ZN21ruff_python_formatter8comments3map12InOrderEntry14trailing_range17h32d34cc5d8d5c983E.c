undefined  [16]
_ZN21ruff_python_formatter8comments3map12InOrderEntry14trailing_range17h32d34cc5d8d5c983E
          (long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 extraout_RDX;
  undefined ***pppuVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = *(int *)(param_1 + 8) - 1;
    auVar4._0_8_ = CONCAT44(0,uVar2);
    if (iVar1 != 0) {
      auVar4._8_4_ = iVar1 + -1;
      auVar4._12_4_ = 0;
      return auVar4;
    }
    auVar6._8_4_ = uVar2;
    auVar6._0_8_ = auVar4._0_8_;
    auVar6._12_4_ = 0;
    return auVar6;
  }
  if (iVar1 == 0) {
    auVar5._8_4_ = *(int *)(param_1 + 4) - 1;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = auVar5._8_4_;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  local_30 = &PTR_DAT_0067d068;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  pppuVar3 = &local_30;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
            (pppuVar3,&PTR_DAT_0067d078);
  iVar1 = *(int *)((long)pppuVar3 + 0xc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(pppuVar3 + 1);
  }
  if (iVar1 == 0) {
    auVar8._0_4_ = *(int *)((long)pppuVar3 + 4) - 1;
    auVar8._4_4_ = 0;
    auVar8._8_8_ = extraout_RDX;
    return auVar8;
  }
  auVar7._0_4_ = iVar1 - 1;
  auVar7._4_4_ = 0;
  auVar7._8_8_ = extraout_RDX;
  return auVar7;
}