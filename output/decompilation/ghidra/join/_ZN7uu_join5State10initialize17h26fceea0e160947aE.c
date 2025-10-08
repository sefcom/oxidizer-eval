undefined  [16]
_ZN7uu_join5State10initialize17h26fceea0e160947aE(long param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  long local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN7uu_join5State9read_line17hc11952a2ce5ea2c0E(&local_48,param_1,param_2);
  if (local_48 == -0x7fffffffffffffff) {
    uVar2 = 1;
  }
  else {
    local_58 = local_28;
    uStack_54 = uStack_24;
    uStack_50 = uStack_20;
    uStack_4c = uStack_1c;
    local_68 = local_38;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    uStack_5c = uStack_2c;
    local_78 = local_48;
    local_70 = local_40;
    if (local_48 == -0x8000000000000000) {
      _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_uu_join__Line_GT__GT_17h0fad273de0c46d5dE
                (&local_78);
      local_40 = 0;
    }
    else {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1e462bd96175ed88E
                (param_1,&local_78,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001fd318);
      local_40 = 0;
      uVar2 = 0;
      if (param_3 == '\0') goto LAB_001620ce;
      if (*(long *)(param_1 + 0x10) == 0) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00204d38)
                  (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001fd330);
        pcVar1 = (code *)swi(3);
        auVar3 = (*pcVar1)();
        return auVar3;
      }
      local_40 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    }
    uVar2 = 0;
  }
LAB_001620ce:
  auVar3._8_8_ = local_40;
  auVar3._0_8_ = uVar2;
  return auVar3;
}