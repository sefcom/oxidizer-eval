undefined8 _ZN7uu_kill12print_signal17hbbda5da3d768aa27E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong *puVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined **local_e0;
  ulong local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined **local_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
            (&local_e0,param_1,param_2);
  cVar1 = (char)local_e0;
  local_90 = local_d8;
  local_70 = PTR__ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E_001ee0c0;
  local_68 = PTR__ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E_001ee0c0 + 0x200;
  local_60 = 0;
  auVar10 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb3441d36b832b537E
                      (&local_70);
  if (auVar10._8_8_ != 0) {
    local_50 = local_90 & 0xff;
    local_88 = param_2;
    do {
      uVar8 = local_88;
      uVar9 = auVar10._0_8_;
      local_40 = *auVar10._8_8_;
      local_38 = auVar10._8_8_[1];
      local_48 = uVar9;
      cVar6 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                        (local_40,local_38,param_1,local_88);
      if (cVar6 != '\0') {
LAB_0015d453:
        local_b0 = &local_48;
        local_a8 = (code *)
                   PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001ee188
        ;
LAB_0015d48f:
        local_d0 = &local_b0;
        local_c0 = 0;
        local_d8 = 2;
        local_e0 = (undefined **)&DAT_001e7650;
        local_c8 = 1;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ee180)(&local_e0);
        return 0;
      }
      local_80 = (undefined **)&local_40;
      local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3a9a4fe6be7cab02E;
      local_e0 = &PTR_s_SIG__001e7640;
      local_d8 = 1;
      local_c0 = 0;
      local_d0 = &local_80;
      local_c8 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h9ebb7b35ad4a5108E(&local_b0,&local_e0);
      pcVar5 = local_a8;
      puVar4 = local_b0;
      cVar6 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                        (local_a8,local_a0,param_1,uVar8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h31b345ac50aa997dE(puVar4,pcVar5);
      uVar8 = local_88;
      if (cVar6 != '\0') goto LAB_0015d453;
      uVar7 = (*(code *)
                PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u64_GT_4_fmt17h284f18664830c6ddE_001ee190)
                        (uVar9,&local_b0,0x14);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf4ce7647a8e36fb0E
                (&local_e0,uVar7);
      uVar3 = local_d8;
      ppuVar2 = local_e0;
      cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha97fbaefa0d2ac9dE
                        (param_1,uVar8,local_d8,local_d0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h31b345ac50aa997dE(ppuVar2,uVar3);
      if ((cVar6 != '\0') ||
         ((cVar1 == '\0' && ((local_50 == uVar9 || (local_90 == uVar9 + 0x80)))))) {
        local_b0 = &local_40;
        local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3a9a4fe6be7cab02E;
        goto LAB_0015d48f;
      }
      auVar10 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb3441d36b832b537E
                          (&local_70);
      param_2 = local_88;
    } while (auVar10._8_8_ != 0);
  }
  local_70 = (undefined *)0x0;
  local_58 = 1;
  local_80 = &local_70;
  local_78 = (code *)
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001ee198
  ;
  local_e0 = (undefined **)&DAT_001e7670;
  local_d8 = 2;
  local_c0 = 0;
  local_d0 = &local_80;
  local_c8 = 1;
  local_68 = (undefined *)param_1;
  local_60 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h9ebb7b35ad4a5108E(&local_b0,&local_e0);
  local_98 = 1;
  uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4d33bae44fdeaf98E(&local_b0);
  return uVar8;
}