void _ZN9uu_numfmt6format13format_string17h230c6a9d10700455E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5
               ,long param_6)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined auVar7 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined4 *local_1c0;
  code *local_1b8;
  long **local_1b0;
  code *local_1a8;
  long **local_1a0;
  undefined8 local_198;
  long *local_190;
  code *local_188;
  undefined4 **ppuStack_180;
  code *local_178;
  long *local_170;
  code *local_168;
  undefined local_160;
  long local_158;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_128;
  long local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60 [3];
  undefined8 local_48 [3];
  
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  local_120 = param_4[0x11];
  local_158 = param_6;
  local_128 = param_5;
  if ((local_120 != -0x8000000000000000) &&
     (auVar7 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17h989ea700a39d3e29E
                         (param_4[0x12],param_4[0x13],param_2,param_3), auVar1 = auVar2,
     auVar7._0_8_ != 0)) {
    auVar1 = auVar7;
  }
  if (param_4[2] == 0) {
    cVar4 = *(char *)(param_4 + 0x16);
    lVar5 = 0;
    if ((cVar4 == '\x05') && (*(char *)((long)param_4 + 0xb1) == '\x05')) {
      lVar5 = _ZN9uu_numfmt6format24parse_implicit_precision17habeeb6a1b0c09cbdE
                        (auVar1._0_8_,auVar1._8_8_);
      cVar4 = '\x05';
    }
  }
  else {
    lVar5 = param_4[3];
    cVar4 = *(char *)(param_4 + 0x16);
  }
  _ZN9uu_numfmt6format14transform_from17h06c22e665722480cE
            (&local_1c0,auVar1._0_8_,auVar1._8_8_,param_4[0x14],cVar4);
  if (local_1c0 == (undefined4 *)0x8000000000000000) {
    _ZN9uu_numfmt6format12transform_to17hb7e422fe87e2abd5E
              (&local_190,param_4[0x15],*(undefined *)((long)param_4 + 0xb1),
               *(undefined *)((long)param_4 + 0xc9),lVar5);
    uStack_1e0 = (code *)ppuStack_180;
    uVar3 = uStack_1e0;
    local_1d8 = (long)local_178;
    if (local_190 == (long *)0x0) {
      local_108 = local_178;
      local_1e8._0_4_ = SUB84(local_188,0);
      local_1e8._4_4_ = (undefined4)((ulong)local_188 >> 0x20);
      uStack_1e0._0_4_ = SUB84(ppuStack_180,0);
      uStack_1e0._4_4_ = (undefined4)((ulong)ppuStack_180 >> 0x20);
      local_118 = (undefined4)local_1e8;
      uStack_114 = local_1e8._4_4_;
      uStack_110 = (undefined4)uStack_1e0;
      uStack_10c = uStack_1e0._4_4_;
      if (local_120 == -0x8000000000000000) {
        local_14c = 0;
        lVar5 = *param_4;
        local_148 = (undefined4)local_1e8;
        uStack_144 = local_1e8._4_4_;
        uStack_140 = (undefined4)uStack_1e0;
        uStack_13c = uStack_1e0._4_4_;
      }
      else {
        local_1e8 = param_4 + 0x11;
        local_1c0 = &local_118;
        local_1b8 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_1a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4dc19265c681ac20E;
        local_190 = (long *)&DAT_0011a370;
        local_188 = (code *)0x2;
        local_170 = (long *)0x0;
        local_178 = (code *)0x2;
        local_14c = 0x11a301;
                    /* try { // try from 001c4384 to 001c4395 has its CatchHandler @ 001c4938 */
        uStack_1e0 = (code *)uVar3;
        local_1b0 = (long **)&local_1e8;
        ppuStack_180 = &local_1c0;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(&local_c0,&local_190);
        local_14c = (undefined4)CONCAT71((int7)((ulong)local_b0 >> 8),1);
        lVar5 = *param_4;
        local_1d8 = local_b0;
        local_148 = local_c0;
        uStack_144 = uStack_bc;
        uStack_140 = uStack_b8;
        uStack_13c = uStack_b4;
      }
      if (lVar5 == 0) {
        lVar5 = local_158;
        if (local_128 == 0) {
          lVar5 = param_4[0x17];
        }
      }
      else {
        lVar5 = param_4[1];
      }
      if (lVar5 == 0) {
        local_1e8 = (long *)CONCAT44(uStack_144,local_148);
        uStack_1e0 = (code *)CONCAT44(uStack_13c,uStack_140);
      }
      else {
        local_1d8 = lVar5;
        local_1a0 = &local_190;
        if ((lVar5 < 1) || (*(char *)((long)param_4 + 0x51) == '\0')) {
          if (lVar5 < 1) {
            local_1d8 = -lVar5;
            local_1e8 = (long *)&local_148;
            uStack_1e0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_1d0 = 0;
            local_190 = (long *)0x2;
            ppuStack_180 = (undefined4 **)0x1;
            local_178 = (code *)0x1;
            local_170 = (long *)0x0;
            local_168 = (code *)0x20;
            local_160 = 0;
            local_1c0 = (undefined4 *)&DAT_00116000;
            local_1b8 = (code *)0x1;
            local_198 = 1;
            local_1a8 = (code *)0x2;
            local_1b0 = (long **)&local_1e8;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(&local_90,&local_1c0);
            local_1e8 = (long *)CONCAT44(uStack_8c,local_90);
            uStack_1e0 = (code *)CONCAT44(uStack_84,uStack_88);
            local_1d8 = local_80;
          }
          else {
            local_1e8 = (long *)&local_148;
            uStack_1e0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_1d0 = 0;
            local_190 = (long *)0x2;
            ppuStack_180 = (undefined4 **)0x1;
            local_178 = (code *)0x1;
            local_170 = (long *)0x0;
            local_168 = (code *)0x20;
            local_160 = 1;
            local_1c0 = (undefined4 *)&DAT_00116000;
            local_1b8 = (code *)0x1;
            local_198 = 1;
            local_1a8 = (code *)0x2;
                    /* try { // try from 001c465e to 001c473a has its CatchHandler @ 001c493d */
            local_1b0 = (long **)&local_1e8;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(&local_a8,&local_1c0);
            local_1e8 = (long *)CONCAT44(uStack_a4,local_a8);
            uStack_1e0 = (code *)CONCAT44(uStack_9c,uStack_a0);
            local_1d8 = local_98;
          }
        }
        else {
          local_1e8 = (long *)&local_148;
          uStack_1e0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
          local_1d0 = 0;
          local_190 = (long *)0x2;
          ppuStack_180 = (undefined4 **)0x1;
          local_178 = (code *)0x1;
          local_170 = (long *)0x0;
          local_168 = (code *)0x30;
          local_160 = 1;
          local_1c0 = (undefined4 *)&DAT_00116000;
          local_1b8 = (code *)0x1;
          local_198 = 1;
          local_1a8 = (code *)0x2;
                    /* try { // try from 001c4492 to 001c44a3 has its CatchHandler @ 001c493d */
          local_1b0 = (long **)&local_1e8;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(&local_d8,&local_1c0);
          local_e8 = local_c8;
          local_f8 = local_d8;
          uStack_f4 = uStack_d4;
          uStack_f0 = uStack_d0;
          uStack_ec = uStack_cc;
          if (local_128 == 0) {
            local_158 = param_4[0x17];
          }
          if (local_158 == 0) {
            local_1d8 = local_c8;
            local_1e8 = (long *)CONCAT44(uStack_d4,local_d8);
            uStack_1e0 = (code *)CONCAT44(uStack_cc,uStack_d0);
          }
          else {
            if (local_158 < 1) {
              local_1d8 = -local_158;
              local_1e8 = (long *)&local_f8;
              uStack_1e0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              local_1d0 = 0;
              local_190 = (long *)0x2;
              ppuStack_180 = (undefined4 **)0x1;
              local_178 = (code *)0x1;
              local_170 = (long *)0x0;
              local_168 = (code *)0x20;
              local_160 = 0;
              local_1c0 = (undefined4 *)&DAT_00116000;
              local_1b8 = (code *)0x1;
              local_198 = 1;
              local_1a8 = (code *)0x2;
                    /* try { // try from 001c480d to 001c4821 has its CatchHandler @ 001c4919 */
              puVar6 = local_48;
              local_1b0 = (long **)&local_1e8;
              local_1a0 = &local_190;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(puVar6,&local_1c0);
            }
            else {
              local_1e8 = (long *)&local_f8;
              uStack_1e0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              local_1d8 = local_158;
              local_1d0 = 0;
              local_190 = (long *)0x2;
              ppuStack_180 = (undefined4 **)0x1;
              local_178 = (code *)0x1;
              local_170 = (long *)0x0;
              local_168 = (code *)0x20;
              local_160 = 1;
              local_1c0 = (undefined4 *)&DAT_00116000;
              local_1b8 = (code *)0x1;
              local_198 = 1;
              local_1a8 = (code *)0x2;
                    /* try { // try from 001c4586 to 001c459a has its CatchHandler @ 001c4919 */
              puVar6 = local_60;
              local_1b0 = (long **)&local_1e8;
              local_1a0 = &local_190;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(puVar6,&local_1c0);
            }
            local_1d8 = puVar6[2];
            local_1e8 = (long *)*puVar6;
            uStack_1e0 = (code *)puVar6[1];
                    /* try { // try from 001c4835 to 001c4841 has its CatchHandler @ 001c493d */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_f8);
          }
        }
      }
      local_190 = param_4 + 4;
      local_170 = param_4 + 7;
      local_188 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_178 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_168 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_1c0 = (undefined4 *)&DAT_00123118;
      local_1b8 = (code *)0x3;
      local_1a0 = (long **)0x0;
      local_1a8 = (code *)0x3;
                    /* try { // try from 001c48a4 to 001c48b5 has its CatchHandler @ 001c492b */
      local_1b0 = &local_190;
      ppuStack_180 = (undefined4 **)&local_1e8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(&local_78,&local_1c0);
      param_1[3] = local_68;
      *(undefined4 *)(param_1 + 1) = local_78;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
      *(undefined4 *)(param_1 + 2) = uStack_70;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_6c;
      *param_1 = 0;
                    /* try { // try from 001c48d5 to 001c48dc has its CatchHandler @ 001c493d */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_1e8);
      if (lVar5 != 0) {
                    /* try { // try from 001c48e2 to 001c48ee has its CatchHandler @ 001c4938 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_148);
      }
      if (local_120 != -0x8000000000000000) {
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb0bde7aa45c92349E(&local_118);
        return;
      }
      return;
    }
    param_1[3] = local_178;
    param_1[1] = local_188;
    param_1[2] = ppuStack_180;
  }
  else {
    param_1[1] = local_1c0;
    param_1[2] = local_1b8;
    param_1[3] = local_1b0;
  }
  *param_1 = 1;
  return;
}