void _ZN4just10subcommand10Subcommand9variables17hc98f87f2340c147dE(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined **ppuStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  undefined *local_38;
  
  local_b0 = *(long *)(param_1 + 0x280);
  local_a8 = *(undefined8 *)(param_1 + 0x288);
  local_c0 = (undefined **)(ulong)(local_b0 != 0);
  local_80 = local_b0;
  if (local_b0 != 0) {
    local_80 = *(long *)(param_1 + 0x290);
  }
  local_b8 = 0;
  local_98 = 0;
  local_78 = 0;
  ppuStack_a0 = local_c0;
  local_90 = local_b0;
  local_88 = local_a8;
  _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h08848c209115bb0aE
            (&local_d8,&local_c0);
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40;
  if (local_d0 != 0) {
    do {
      lVar2 = local_c8;
      if (local_d8 != 0) {
        local_70 = &PTR_DAT_0052f150;
        local_68 = 1;
        local_60 = (long *)0x8;
        local_58 = 0;
        uStack_50 = 0;
        (*(code *)puVar1)(&local_70);
      }
      local_40 = lVar2 + 0x80;
      local_38 = 
      PTR__ZN55__LT_just__name__Name_u20_as_u20_core__fmt__Display_GT_3fmt17h235bf6517801ef05E_00565f20
      ;
      local_70 = (undefined **)&DAT_00165db0;
      local_68 = 1;
      uStack_50 = 0;
      local_58 = 1;
      local_60 = &local_40;
      (*(code *)puVar1)(&local_70);
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h08848c209115bb0aE
                (&local_d8,&local_c0);
    } while (local_d0 != 0);
  }
  local_c0 = &PTR_DAT_0052dbf8;
  local_b8 = 1;
  local_b0 = 8;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_c0);
  return;
}