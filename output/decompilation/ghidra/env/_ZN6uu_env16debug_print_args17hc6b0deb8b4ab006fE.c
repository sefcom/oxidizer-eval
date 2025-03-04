void _ZN6uu_env16debug_print_args17hc6b0deb8b4ab006fE(long param_1,long param_2)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined local_38;
  
  local_b8 = &PTR_DAT_002489e8;
  local_b0 = 1;
  local_a8 = (undefined8 **)0x8;
  local_a0 = 0;
  uStack_98 = 0;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b8);
  local_80 = param_1 + param_2 * 0x18;
  local_78 = 0;
  local_88 = param_1;
  auVar2 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb9a3611afc387125E
                     (&local_88);
  if (auVar2._8_8_ != 0) {
    do {
      lVar1 = auVar2._8_8_;
      local_c0 = auVar2._0_8_;
      local_48 = *(undefined4 *)(lVar1 + 8);
      uStack_44 = *(undefined4 *)(lVar1 + 0xc);
      uStack_40 = *(undefined4 *)(lVar1 + 0x10);
      uStack_3c = *(undefined4 *)(lVar1 + 0x14);
      local_50 = 1;
      local_38 = 1;
      local_70 = &local_c0;
      local_68 = 
      _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
      ;
      local_60 = &local_50;
      local_58 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_b8 = &PTR_DAT_002489f8;
      local_b0 = 3;
      uStack_98 = 0;
      local_a0 = 2;
      local_a8 = &local_70;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b8);
      auVar2 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb9a3611afc387125E
                         (&local_88);
    } while (auVar2._8_8_ != 0);
  }
  return;
}