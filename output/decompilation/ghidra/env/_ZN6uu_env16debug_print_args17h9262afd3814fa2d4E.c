void _ZN6uu_env16debug_print_args17h9262afd3814fa2d4E(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined auVar3 [16];
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
  undefined *local_68;
  undefined8 *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  
  local_b8 = &PTR_DAT_002109a8;
  local_b0 = 1;
  local_a8 = (undefined8 **)0x8;
  local_a0 = 0;
  uStack_98 = 0;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_b8);
  local_80 = param_1 + param_2 * 0x18;
  local_78 = 0;
  local_88 = param_1;
  auVar3 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he7ef2d91b577ff9aE
                     (&local_88);
  puVar2 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
  ;
  puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0;
  if (auVar3._8_8_ != 0) {
    do {
      local_c0 = auVar3._0_8_;
      local_48 = *(undefined8 *)(auVar3._8_8_ + 8);
      local_40 = *(undefined8 *)(auVar3._8_8_ + 0x10);
      local_50 = 1;
      local_38 = 1;
      local_70 = &local_c0;
      local_68 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00219450
      ;
      local_60 = &local_50;
      local_58 = puVar2;
      local_b8 = &PTR_DAT_002109b8;
      local_b0 = 3;
      uStack_98 = 0;
      local_a0 = 2;
      local_a8 = &local_70;
      (*(code *)puVar1)(&local_b8);
      auVar3 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he7ef2d91b577ff9aE
                         (&local_88);
    } while (auVar3._8_8_ != 0);
  }
  return;
}