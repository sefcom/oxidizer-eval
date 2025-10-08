void _ZN7uu_kill5table17h9adbfdcf596cda83E(void)

{
  undefined *puVar1;
  undefined auVar2 [16];
  undefined local_a8 [16];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  local_98 = PTR__ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E_001ee0c0;
  local_90 = PTR__ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E_001ee0c0 + 0x200;
  local_88 = 0;
  auVar2 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb3441d36b832b537E
                     (&local_98);
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ee180;
  if (auVar2._8_8_ != 0) {
    do {
      local_78 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001ee188
      ;
      local_70 = local_a8 + 8;
      local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h65d0cd659c13f51cE;
      local_60 = &DAT_001e7610;
      local_58 = 3;
      local_40 = &DAT_00119078;
      local_38 = 2;
      local_48 = 2;
      local_80 = local_a8;
      local_50 = &local_80;
      local_a8 = auVar2;
      (*(code *)puVar1)(&local_60);
      auVar2 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb3441d36b832b537E
                         (&local_98);
    } while (auVar2._8_8_ != 0);
  }
  return;
}