void __rustcall
uu_numfmt::format::format_string
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5,
          long param_6)

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
     (auVar7 = _<&str_as_core::str::pattern::Pattern>::strip_suffix_of
                         (param_4[0x12],param_4[0x13],param_2,param_3), auVar1 = auVar2,
     auVar7._0_8_ != 0)) {
    auVar1 = auVar7;
  }
  if (param_4[2] == 0) {
    cVar4 = *(char *)(param_4 + 0x16);
    lVar5 = 0;
    if ((cVar4 == '\x05') && (*(char *)((long)param_4 + 0xb1) == '\x05')) {
      lVar5 = parse_implicit_precision(auVar1._0_8_,auVar1._8_8_);
      cVar4 = '\x05';
    }
  }
  else {
    lVar5 = param_4[3];
    cVar4 = *(char *)(param_4 + 0x16);
  }
  transform_from(&local_1c0,auVar1._0_8_,auVar1._8_8_,param_4[0x14],cVar4);
  if (local_1c0 == (undefined4 *)0x8000000000000000) {
    transform_to(&local_190,param_4[0x15],*(undefined *)((long)param_4 + 0xb1),
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
        local_1b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_1a8 = _<&T_as_core::fmt::Display>::fmt;
        local_190 = (long *)&DAT_0011a4f0;
        local_188 = (code *)0x2;
        local_170 = (long *)0x0;
        local_178 = (code *)0x2;
        local_14c = 0x11a401;
                    /* try { // try from 001c47d4 to 001c47e5 has its CatchHandler @ 001c4d88 */
        uStack_1e0 = (code *)uVar3;
        local_1b0 = (long **)&local_1e8;
        ppuStack_180 = &local_1c0;
        core::option::Option<T>::map_or_else(&local_c0,&local_190);
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
            uStack_1e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_1d0 = 0;
            local_190 = (long *)0x2;
            ppuStack_180 = (undefined4 **)0x1;
            local_178 = (code *)0x1;
            local_170 = (long *)0x0;
            local_168 = (code *)0x20;
            local_160 = 0;
            local_1c0 = (undefined4 *)&DAT_00116200;
            local_1b8 = (code *)0x1;
            local_198 = 1;
            local_1a8 = (code *)0x2;
            local_1b0 = (long **)&local_1e8;
            core::option::Option<T>::map_or_else(&local_90,&local_1c0);
            local_1e8 = (long *)CONCAT44(uStack_8c,local_90);
            uStack_1e0 = (code *)CONCAT44(uStack_84,uStack_88);
            local_1d8 = local_80;
          }
          else {
            local_1e8 = (long *)&local_148;
            uStack_1e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_1d0 = 0;
            local_190 = (long *)0x2;
            ppuStack_180 = (undefined4 **)0x1;
            local_178 = (code *)0x1;
            local_170 = (long *)0x0;
            local_168 = (code *)0x20;
            local_160 = 1;
            local_1c0 = (undefined4 *)&DAT_00116200;
            local_1b8 = (code *)0x1;
            local_198 = 1;
            local_1a8 = (code *)0x2;
                    /* try { // try from 001c4aae to 001c4b8a has its CatchHandler @ 001c4d8d */
            local_1b0 = (long **)&local_1e8;
            core::option::Option<T>::map_or_else(&local_a8,&local_1c0);
            local_1e8 = (long *)CONCAT44(uStack_a4,local_a8);
            uStack_1e0 = (code *)CONCAT44(uStack_9c,uStack_a0);
            local_1d8 = local_98;
          }
        }
        else {
          local_1e8 = (long *)&local_148;
          uStack_1e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1d0 = 0;
          local_190 = (long *)0x2;
          ppuStack_180 = (undefined4 **)0x1;
          local_178 = (code *)0x1;
          local_170 = (long *)0x0;
          local_168 = (code *)0x30;
          local_160 = 1;
          local_1c0 = (undefined4 *)&DAT_00116200;
          local_1b8 = (code *)0x1;
          local_198 = 1;
          local_1a8 = (code *)0x2;
                    /* try { // try from 001c48e2 to 001c48f3 has its CatchHandler @ 001c4d8d */
          local_1b0 = (long **)&local_1e8;
          core::option::Option<T>::map_or_else(&local_d8,&local_1c0);
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
              uStack_1e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_1d0 = 0;
              local_190 = (long *)0x2;
              ppuStack_180 = (undefined4 **)0x1;
              local_178 = (code *)0x1;
              local_170 = (long *)0x0;
              local_168 = (code *)0x20;
              local_160 = 0;
              local_1c0 = (undefined4 *)&DAT_00116200;
              local_1b8 = (code *)0x1;
              local_198 = 1;
              local_1a8 = (code *)0x2;
                    /* try { // try from 001c4c5d to 001c4c71 has its CatchHandler @ 001c4d69 */
              puVar6 = local_48;
              local_1b0 = (long **)&local_1e8;
              local_1a0 = &local_190;
              core::option::Option<T>::map_or_else(puVar6,&local_1c0);
            }
            else {
              local_1e8 = (long *)&local_f8;
              uStack_1e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_1d8 = local_158;
              local_1d0 = 0;
              local_190 = (long *)0x2;
              ppuStack_180 = (undefined4 **)0x1;
              local_178 = (code *)0x1;
              local_170 = (long *)0x0;
              local_168 = (code *)0x20;
              local_160 = 1;
              local_1c0 = (undefined4 *)&DAT_00116200;
              local_1b8 = (code *)0x1;
              local_198 = 1;
              local_1a8 = (code *)0x2;
                    /* try { // try from 001c49d6 to 001c49ea has its CatchHandler @ 001c4d69 */
              puVar6 = local_60;
              local_1b0 = (long **)&local_1e8;
              local_1a0 = &local_190;
              core::option::Option<T>::map_or_else(puVar6,&local_1c0);
            }
            local_1d8 = puVar6[2];
            local_1e8 = (long *)*puVar6;
            uStack_1e0 = (code *)puVar6[1];
                    /* try { // try from 001c4c85 to 001c4c91 has its CatchHandler @ 001c4d8d */
            core::ptr::drop_in_place<alloc::string::String>(&local_f8);
          }
        }
      }
      local_190 = param_4 + 4;
      local_170 = param_4 + 7;
      local_188 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_168 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1c0 = (undefined4 *)&DAT_001232a0;
      local_1b8 = (code *)0x3;
      local_1a0 = (long **)0x0;
      local_1a8 = (code *)0x3;
                    /* try { // try from 001c4cf4 to 001c4d05 has its CatchHandler @ 001c4d7b */
      local_1b0 = &local_190;
      ppuStack_180 = (undefined4 **)&local_1e8;
      core::option::Option<T>::map_or_else(&local_78,&local_1c0);
      param_1[3] = local_68;
      *(undefined4 *)(param_1 + 1) = local_78;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
      *(undefined4 *)(param_1 + 2) = uStack_70;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_6c;
      *param_1 = 0;
                    /* try { // try from 001c4d25 to 001c4d2c has its CatchHandler @ 001c4d8d */
      core::ptr::drop_in_place<alloc::string::String>(&local_1e8);
      if (lVar5 != 0) {
                    /* try { // try from 001c4d32 to 001c4d3e has its CatchHandler @ 001c4d88 */
        core::ptr::drop_in_place<alloc::string::String>(&local_148);
      }
      if (local_120 != -0x8000000000000000) {
        core::ptr::drop_in_place<alloc::string::String>(&local_118);
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