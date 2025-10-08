undefined8 _ZN7uu_stty19print_control_chars17hed7af0204ba7e7a6E(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  long *local_a0;
  code *local_98;
  undefined *local_90;
  code *local_88;
  long local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30;
  if ((param_2 & 1) != 0) {
    lVar2 = 0;
    do {
      local_80 = (long)&PTR_DAT_001e2e00 + lVar2;
      _ZN7uu_stty22control_char_to_string17hcb31aba3c5c265dbE
                (&local_48,*(undefined *)(param_1 + *(long *)((long)&DAT_001e2e10 + lVar2)));
      local_a4 = local_34;
      uStack_ac = (undefined4)local_3c;
      uStack_a8 = (undefined4)((ulong)local_3c >> 0x20);
      local_b8 = local_48;
      local_b0 = local_40;
      local_a0 = &local_80;
      local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h73b50bfbd05958dfE;
      local_88 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_78 = (undefined **)&DAT_001e2da0;
      local_70 = 3;
      local_58 = 0;
      local_68 = &local_a0;
      local_60 = 2;
                    /* try { // try from 00158e53 to 00158e5a has its CatchHandler @ 00158ef4 */
      local_90 = (undefined *)&local_b8;
      (*(code *)puVar1)(&local_78);
      lVar2 = lVar2 + 0x18;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd804c925e1c3e6cfE
                (local_b8,CONCAT44(uStack_ac,local_b0));
    } while (lVar2 != 0x168);
    local_a0 = (long *)(param_1 + 6);
    local_90 = (undefined *)(param_1 + 5);
    local_98 = (code *)
               PTR__ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17h150c2a008a7de3c9E_001eaf48
    ;
    local_88 = (code *)
               PTR__ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17h150c2a008a7de3c9E_001eaf48
    ;
    local_78 = &PTR_s_min_____time_____eraseeofeolswtc_001e2dd0;
    local_70 = 3;
    local_58 = 0;
    local_68 = &local_a0;
    local_60 = 2;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_78);
  }
  return 0x86;
}