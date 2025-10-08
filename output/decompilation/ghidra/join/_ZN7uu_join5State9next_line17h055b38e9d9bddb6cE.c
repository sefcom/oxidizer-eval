void _ZN7uu_join5State9next_line17h055b38e9d9bddb6cE
               (undefined8 *param_1,long param_2,undefined *param_3)

{
  char cVar1;
  char cVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 *local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 **local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_68 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN7uu_join5State9read_line17hf8e7df99ad1c7990E(&local_148,param_2,param_3 + 2);
  if (local_148 == (undefined8 *)0x8000000000000001) {
    param_1[1] = 0x8000000000000000;
    param_1[2] = local_140;
    *param_1 = 0x8000000000000001;
  }
  else {
    local_c0 = (undefined4)local_128;
    uStack_bc = local_128._4_4_;
    uStack_b8 = (undefined4)uStack_120;
    uStack_b4 = uStack_120._4_4_;
    local_d0 = (undefined4)local_138;
    uStack_cc = local_138._4_4_;
    uStack_c8 = (undefined4)uStack_130;
    uStack_c4 = uStack_130._4_4_;
    local_e0 = local_148;
    uStack_d8 = local_140;
    if (local_148 == (undefined8 *)0x8000000000000000) {
      _ZN4core3ptr62drop_in_place_LT_core__option__Option_LT_uu_join__Line_GT__GT_17h0fad273de0c46d5dE
                (&local_e0);
      *param_1 = 0x8000000000000000;
    }
    else {
      local_f8 = (undefined4)local_128;
      uStack_f4 = local_128._4_4_;
      uStack_f0 = (undefined4)uStack_120;
      uStack_ec = uStack_120._4_4_;
      local_108 = (undefined4)local_138;
      uStack_104 = local_138._4_4_;
      uStack_100 = (undefined4)uStack_130;
      uStack_fc = uStack_130._4_4_;
      local_118 = local_148;
      uStack_110 = local_140;
      cVar1 = param_3[1];
      if (cVar1 == '\x01') {
        local_e0._0_4_ = SUB84(local_148,0);
        local_e0._4_4_ = (undefined4)((ulong)local_148 >> 0x20);
        uStack_d8._0_4_ = SUB84(local_140,0);
        uStack_d8._4_4_ = (undefined4)((ulong)local_140 >> 0x20);
      }
      else {
                    /* try { // try from 0016477e to 00164810 has its CatchHandler @ 00164a29 */
        auVar3 = (*(code *)PTR__ZN7uu_join5State15get_current_key17hb0aa7b8c555c38dcE_00204f58)
                           (param_2);
        local_e8 = auVar3._0_8_;
        auVar4 = (*(code *)PTR__ZN7uu_join4Line9get_field17h5172ba7928bd7492E_00204ef0)
                           (&local_118,*(undefined8 *)(param_2 + 0x40));
        cVar2 = _ZN7uu_join16Input_LT_Sep_GT_7compare17h365eb74b1ebb2c70E
                          (*param_3,local_e8,auVar3._8_8_,auVar4._0_8_,auVar4._8_8_);
        if ((cVar2 == '\x01') &&
           ((cVar1 == '\x02' ||
            ((*(char *)(param_2 + 0x5b) != '\0' && (*(char *)(param_2 + 0x5a) == '\0')))))) {
          local_68._8_8_ = *(undefined8 *)(param_2 + 0x18);
          uStack_58 = *(undefined4 *)(param_2 + 0x20);
          uStack_54 = *(undefined4 *)(param_2 + 0x24);
          local_68._0_8_ = 0;
          local_50 = 0;
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_00204f80)
                    (&local_80,CONCAT44(uStack_f4,local_f8),CONCAT44(uStack_ec,uStack_f0));
          local_138 = (undefined8 **)(param_2 + 0x50);
          local_140 = 
          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00204f88
          ;
          uStack_130 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00204f90
          ;
          uStack_120 = 
          _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hf2e26b2378c77421E
          ;
          local_b0 = (undefined8 *)&DAT_001fd400;
          local_a8 = (code *)0x3;
          local_90 = 0;
          local_98 = (code *)0x3;
                    /* try { // try from 0016488b to 001648a2 has its CatchHandler @ 001649ff */
          local_148 = (undefined8 *)local_68;
          local_128 = &local_80;
          local_a0 = &local_148;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h377ad8e84433d07cE(&local_48,&local_b0);
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5a6ac6c78e48f63bE
                    (local_80,local_78);
          local_168 = local_48;
          uStack_164 = uStack_44;
          uStack_160 = uStack_40;
          uStack_15c = uStack_3c;
          local_158 = local_38;
          if (cVar1 == '\x02') {
            param_1[3] = local_38;
            *(undefined4 *)(param_1 + 1) = local_48;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
            *(undefined4 *)(param_1 + 2) = uStack_40;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
            *param_1 = 0x8000000000000001;
            _ZN4core3ptr34drop_in_place_LT_uu_join__Line_GT_17h024107907e0f7a9fE(&local_118);
            return;
          }
                    /* try { // try from 00164918 to 00164997 has its CatchHandler @ 001649db */
          local_68 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_00204f68)();
          local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h76c68e868af0404dE;
          local_a0 = (undefined8 **)&local_168;
          local_98 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_148 = (undefined8 *)&DAT_001fd430;
          local_140 = (undefined *)0x3;
          local_128 = (undefined8 *)0x0;
          uStack_130 = (undefined *)0x2;
          local_138 = &local_b0;
          local_b0 = (undefined8 *)local_68;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00204f70)(&local_148);
          *(undefined *)(param_2 + 0x5a) = 1;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he74323e6cadbe242E
                    (CONCAT44(uStack_164,local_168),CONCAT44(uStack_15c,uStack_160));
        }
        local_e0._0_4_ = (undefined4)local_118;
        local_e0._4_4_ = local_118._4_4_;
        uStack_d8._0_4_ = (undefined4)uStack_110;
        uStack_d8._4_4_ = uStack_110._4_4_;
        local_138._0_4_ = local_108;
        local_138._4_4_ = uStack_104;
        uStack_130._0_4_ = uStack_100;
        uStack_130._4_4_ = uStack_fc;
        local_128._0_4_ = local_f8;
        local_128._4_4_ = uStack_f4;
        uStack_120._0_4_ = uStack_f0;
        uStack_120._4_4_ = uStack_ec;
      }
      *(undefined4 *)(param_1 + 4) = (undefined4)local_128;
      *(undefined4 *)((long)param_1 + 0x24) = local_128._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_120;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_120._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_138;
      *(undefined4 *)((long)param_1 + 0x14) = local_138._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_130;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_130._4_4_;
      *(undefined4 *)param_1 = (undefined4)local_e0;
      *(undefined4 *)((long)param_1 + 4) = local_e0._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_d8;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_d8._4_4_;
    }
  }
  return;
}