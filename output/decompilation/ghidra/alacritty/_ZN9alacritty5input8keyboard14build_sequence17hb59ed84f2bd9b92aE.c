void _ZN9alacritty5input8keyboard14build_sequence17hb59ed84f2bd9b92aE
               (undefined8 *param_1,undefined4 *param_2,undefined4 param_3,ulong param_4)

{
  undefined uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined auVar7 [16];
  char local_141;
  undefined4 local_140;
  char local_13c;
  undefined local_13b;
  byte local_13a;
  char local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  int *local_e0;
  undefined *local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 *local_70;
  undefined local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *local_38;
  
  local_70 = param_1;
  local_141 = _ZN124__LT_alacritty__input__keyboard__SequenceModifiers_u20_as_u20_core__convert__From_LT_winit__keyboard__ModifiersState_GT__GT_4from17he292cff72cbb6297E
                        (param_3);
  local_140 = (undefined4)param_4;
  if ((param_4 & 0x80000) == 0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
    if (*(char *)((long)param_2 + 0x79) == '\0') {
      cVar6 = *(char *)(param_2 + 0x1e);
    }
  }
  local_13b = (param_4 & 0x2c0000) != 0;
  local_13a = (byte)(param_4 >> 0x15) & 1;
  local_13c = local_141;
  local_139 = cVar6;
  local_100 = param_2;
  if (*(char *)(param_2 + 0x10) == '\x1a') {
    uVar3 = 0;
  }
  else {
                    /* try { // try from 00557084 to 00557186 has its CatchHandler @ 005575b2 */
    uVar3 = _ZN8smol_str4Repr6as_str17ha71f0b13e811ba13E(param_2 + 0x10);
  }
  uVar1 = local_13b;
  local_68 = _ZN4core6option15Option_LT_T_GT_6filter17h7841377b2933d1f6E(uVar3);
  _ZN9alacritty5input8keyboard15SequenceBuilder16try_build_numpad17hceb5670c509cfdd8E
            (&local_138,uVar1,param_2);
  _ZN4core6option15Option_LT_T_GT_7or_else17ha114689a17d5f54eE
            (&local_90,&local_138,local_13b,*param_2,*(undefined2 *)((long)param_2 + 2));
  local_b0 = (undefined **)&local_140;
  uStack_a8 = param_2;
  local_a0 = local_68;
  _ZN4core6option15Option_LT_T_GT_7or_else17h218f8de80763ada6E(&local_138,&local_90,&local_b0);
  puVar5 = local_100;
  uStack_a8 = local_100;
  local_a0 = &local_141;
  local_b0 = (undefined **)&local_140;
  _ZN4core6option15Option_LT_T_GT_7or_else17hd24e5a11f86d1056E(&local_90,&local_138,&local_b0);
  uStack_130 = puVar5;
  local_138 = (undefined **)&local_140;
  local_128 = (undefined4 **)local_68;
  _ZN4core6option15Option_LT_T_GT_7or_else17hf85bdbc6a8b4ad87E(&local_b0,&local_90,&local_138);
  if (local_b0 == (undefined **)0x8000000000000001) {
    *local_70 = 0;
    local_70[1] = 1;
    local_70[2] = 0;
    _ZN4core3ptr89drop_in_place_LT_core__option__Option_LT_alacritty__input__keyboard__SequenceBase_GT__GT_17h0e106573572e9a53E
              (&local_b0);
  }
  else {
    local_38 = local_a0;
    local_48 = (undefined4)local_b0;
    uStack_44 = local_b0._4_4_;
    uStack_40 = (undefined4)uStack_a8;
    uStack_3c = uStack_a8._4_4_;
    local_f8 = &local_48;
    uStack_f0 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hcfd5d0c223f1891dE;
    local_138 = &PTR_DAT_00982c60;
    uStack_130 = (undefined4 *)&DAT_00000001;
    local_118 = 0;
    local_128 = (undefined4 **)&local_f8;
    local_120 = 1;
                    /* try { // try from 0055723d to 00557250 has its CatchHandler @ 005575ab */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
              (&local_90,0,extraout_RDX,&local_138);
    local_f8 = (undefined4 *)CONCAT44(uStack_8c,local_90);
    uStack_f0 = (code *)CONCAT44(uStack_84,uStack_88);
    local_e8 = local_80;
    if (((cVar6 != '\0') || (local_141 != '\0')) || (local_68._0_8_ != 0)) {
      local_c8 = CONCAT31(local_c8._1_3_,local_141 + '\x01');
      local_e0 = &local_c8;
      local_d8 = 
      PTR__ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17h150c2a008a7de3c9E_009deb48
      ;
      local_138 = &PTR_DAT_00982c70;
      uStack_130 = (undefined4 *)0x1;
      local_118 = 0;
      local_128 = &local_e0;
      local_120 = 1;
                    /* try { // try from 005572e5 to 005572f8 has its CatchHandler @ 005575b0 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
                (&local_90,0,extraout_RDX_00,&local_138);
      local_138 = (undefined **)CONCAT44(uStack_8c,local_90);
      uStack_130 = (undefined4 *)CONCAT44(uStack_84,uStack_88);
      local_128 = (undefined4 **)local_80;
                    /* try { // try from 0055731b to 00557324 has its CatchHandler @ 005575a9 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                (&local_f8,uStack_130,(undefined *)((long)local_80 + (long)uStack_130));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_138);
      if (cVar6 != '\0') {
                    /* try { // try from 00557334 to 00557413 has its CatchHandler @ 005575b0 */
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_f8,0x3a);
        iVar4 = 0x32;
        if (*(char *)((long)puVar5 + 0x79) == '\0') {
          iVar4 = *(byte *)(puVar5 + 0x1e) + 0x31 + (uint)*(byte *)(puVar5 + 0x1e);
        }
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_f8,iVar4);
      }
    }
    if (local_68._0_8_ != 0) {
      uStack_50 = local_68._8_8_ + local_68._0_8_;
      local_58 = local_68._0_8_;
      bVar2 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(&local_58);
      local_c8 = (int)extraout_RDX_01;
      if ((bVar2 & local_c8 != 0x110000) != 0) {
        local_e0 = &local_c8;
        local_d8 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_009deb88
        ;
        local_138 = &PTR_DAT_00982c70;
        uStack_130 = (undefined4 *)0x1;
        local_118 = 0;
        local_128 = &local_e0;
        local_120 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
                  (&local_90,0,extraout_RDX_01,&local_138);
        local_138 = (undefined **)CONCAT44(uStack_8c,local_90);
        uStack_130 = (undefined4 *)CONCAT44(uStack_84,uStack_88);
        local_128 = (undefined4 **)local_80;
                    /* try { // try from 00557436 to 0055743f has its CatchHandler @ 005575a7 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                  (&local_f8,uStack_130,(undefined *)((long)local_80 + (long)uStack_130));
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_138);
      }
      local_d0 = local_98;
      local_c8 = (int)local_58;
      uStack_c4 = local_58._4_4_;
      uStack_c0 = (undefined4)uStack_50;
      uStack_bc = uStack_50._4_4_;
      bVar2 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(&local_c8);
      puVar5 = local_100;
      local_98 = local_d0;
      if (((int)extraout_RDX_02 != 0x110000 & bVar2) == 1) {
        uVar3 = extraout_RDX_02;
        do {
          local_cc = (int)uVar3;
          local_e0 = &local_cc;
          local_d8 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_009deb88
          ;
          local_138 = &PTR_s___00982c80;
          uStack_130 = (undefined4 *)0x1;
          local_118 = 0;
          local_120 = 1;
          local_128 = &local_e0;
                    /* try { // try from 005574ef to 005574fb has its CatchHandler @ 005575b7 */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
                    (&local_90,0,uVar3,&local_138);
          local_138 = (undefined **)CONCAT44(uStack_8c,local_90);
          uStack_130 = (undefined4 *)CONCAT44(uStack_84,uStack_88);
          local_128 = (undefined4 **)local_80;
                    /* try { // try from 0055751e to 00557525 has its CatchHandler @ 005575bc */
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                    (&local_f8,uStack_130,(undefined *)((long)local_80 + (long)uStack_130));
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_138);
          auVar7 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(&local_c8);
          uVar3 = auVar7._8_8_;
          puVar5 = local_100;
          local_98 = local_d0;
          if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
        } while (auVar7._8_4_ != 0x110000);
      }
    }
    iVar4 = 0x75;
    if (local_98 != 0x110000) {
      iVar4 = local_98;
    }
                    /* try { // try from 0055755d to 00557566 has its CatchHandler @ 005575b0 */
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_f8,iVar4);
    local_70[2] = local_e8;
    *(undefined4 *)local_70 = (undefined4)local_f8;
    *(undefined4 *)((long)local_70 + 4) = local_f8._4_4_;
    *(undefined4 *)(local_70 + 1) = (undefined4)uStack_f0;
    *(undefined4 *)((long)local_70 + 0xc) = uStack_f0._4_4_;
    _ZN4core3ptr37drop_in_place_LT_crossfont__Style_GT_17h2b47363f07595d0eE(&local_48);
  }
  _ZN4core3ptr43drop_in_place_LT_winit__event__KeyEvent_GT_17hd16fceb331fb972bE(puVar5);
  return;
}