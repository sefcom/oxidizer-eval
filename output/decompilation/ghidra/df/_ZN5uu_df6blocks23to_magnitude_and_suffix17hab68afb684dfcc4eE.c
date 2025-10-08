void _ZN5uu_df6blocks23to_magnitude_and_suffix17hab68afb684dfcc4eE
               (undefined8 param_1,ulong param_2,ulong param_3,byte param_4)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long **pplVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  bool bVar17;
  undefined8 *local_1c8;
  undefined8 *local_1b8;
  undefined *local_1b0;
  undefined8 **local_1a8;
  undefined *local_1a0;
  undefined8 *local_198;
  code *local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  long *local_138;
  undefined *local_130;
  undefined8 **local_128;
  code *local_120;
  undefined8 local_118;
  undefined8 *local_108;
  long local_100;
  undefined local_f8 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined local_d8 [16];
  char *local_c0;
  ulong local_b8;
  char *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 uStack_38;
  
  bVar5 = 2;
  if ((byte)(param_4 - 2) < 2) {
    bVar5 = param_4 - 2;
  }
  if (bVar5 == 0) {
    local_160 = 0x1000000000000000;
    local_158 = 0x4000000000000;
    local_150 = 0x10000000000;
    local_1c8 = (undefined8 *)0x4000000;
    local_178 = 0x10000;
    local_168 = 0x40;
    local_148 = 0x40000000;
    local_140 = 0x100000;
    uVar13 = 0x400;
    local_40 = "Y";
    local_50 = "Z";
    local_60 = "E";
    local_70 = "P";
    local_80 = "T";
    local_90 = "G";
    local_a0 = "M";
    local_b0 = "K";
    local_b8 = 1;
    local_c0 = "B";
    local_a8 = 1;
    local_170 = 0;
    local_180 = 0;
    local_188 = 0;
  }
  else if (bVar5 == 1) {
    local_1c8 = (undefined8 *)0x33b2e3c;
    local_188 = 0x9fd0803ce8000000;
    local_178 = 0xd3c2;
    local_180 = 0x1bcecceda1000000;
    local_168 = 0x36;
    local_170 = 0x35c9adc5dea00000;
    local_160 = 1000000000000000000;
    local_158 = 1000000000000000;
    local_150 = 1000000000000;
    local_148 = 1000000000;
    local_140 = 1000000;
    uVar13 = 1000;
    local_40 = "YB";
    local_50 = "ZB";
    local_60 = "EB";
    local_70 = "PB";
    local_80 = "TB";
    local_90 = "GB";
    local_a0 = "MB";
    local_a8 = 2;
    local_b0 = "kB";
    local_b8 = 1;
    local_c0 = "B";
  }
  else {
    local_b8 = 0;
    bVar17 = (param_4 & 1) != 0;
    uVar13 = 1000;
    if (bVar17) {
      uVar13 = 0x400;
    }
    local_140 = 1000000;
    if (bVar17) {
      local_140 = 0x100000;
    }
    local_148 = 1000000000;
    if (bVar17) {
      local_148 = 0x40000000;
    }
    local_150 = 1000000000000;
    if (bVar17) {
      local_150 = 0x10000000000;
    }
    local_158 = 1000000000000000;
    if (bVar17) {
      local_158 = 0x4000000000000;
    }
    local_160 = 1000000000000000000;
    if (bVar17) {
      local_160 = 0x1000000000000000;
    }
    local_168 = 0x36;
    if (bVar17) {
      local_168 = 0x40;
    }
    local_170 = 0x35c9adc5dea00000;
    if (bVar17) {
      local_170 = local_b8;
    }
    local_178 = 0xd3c2;
    if (bVar17) {
      local_178 = 0x10000;
    }
    local_180 = 0x1bcecceda1000000;
    if (bVar17) {
      local_180 = local_b8;
    }
    local_1c8 = (undefined8 *)0x33b2e3c;
    if (bVar17) {
      local_1c8 = (undefined8 *)0x4000000;
    }
    local_188 = 0x9fd0803ce8000000;
    if (bVar17) {
      local_188 = local_b8;
    }
    local_b0 = "k";
    if (bVar17) {
      local_b0 = "K";
    }
    local_40 = "Y";
    local_50 = "Z";
    local_60 = "E";
    local_70 = "P";
    local_80 = "T";
    local_90 = "G";
    local_a0 = "M";
    local_c0 = (char *)0x1;
    local_a8 = 1;
  }
  uVar11 = 0;
  uVar8 = (ulong)(uVar13 != 0) - 1;
  local_98 = local_a8;
  local_88 = local_a8;
  local_78 = local_a8;
  local_68 = local_a8;
  local_58 = local_a8;
  local_48 = local_a8;
  uStack_38 = local_a8;
  if (uVar8 < param_3 || uVar8 - param_3 < (ulong)(uVar13 - 1 < param_2)) {
    if (-(ulong)(local_140 < uVar13) < param_3 ||
        -(ulong)(local_140 < uVar13) - param_3 < (ulong)(local_140 - uVar13 < param_2)) {
      if (-(ulong)(local_148 < local_140) < param_3 ||
          -(ulong)(local_148 < local_140) - param_3 < (ulong)(local_148 - local_140 < param_2)) {
        if (-(ulong)(local_150 < local_148) < param_3 ||
            -(ulong)(local_150 < local_148) - param_3 < (ulong)(local_150 - local_148 < param_2)) {
          if (-(ulong)(local_158 < local_150) < param_3 ||
              -(ulong)(local_158 < local_150) - param_3 < (ulong)(local_158 - local_150 < param_2))
          {
            if (-(ulong)(local_160 < local_158) < param_3 ||
                -(ulong)(local_160 < local_158) - param_3 < (ulong)(local_160 - local_158 < param_2)
               ) {
              uVar13 = local_168 - (local_170 < local_160);
              if (uVar13 < param_3 || uVar13 - param_3 < (ulong)(local_170 - local_160 < param_2)) {
                uVar13 = (local_178 - local_168) - (ulong)(local_180 < local_170);
                if (uVar13 < param_3 || uVar13 - param_3 < (ulong)(local_180 - local_170 < param_2))
                {
                  uVar13 = ((long)local_1c8 - local_178) - (ulong)(local_188 < local_180);
                  if (uVar13 < param_3 ||
                      uVar13 - param_3 < (ulong)(local_188 - local_180 < param_2))
                  goto LAB_0016aaca;
                  local_1c8 = &local_40;
                  uVar11 = local_178;
                  uVar13 = local_180;
                }
                else {
                  local_1c8 = &local_50;
                  uVar11 = local_168;
                  uVar13 = local_170;
                }
              }
              else {
                local_1c8 = &local_60;
                uVar13 = local_160;
              }
            }
            else {
              local_1c8 = &local_70;
              uVar13 = local_158;
            }
          }
          else {
            local_1c8 = &local_80;
            uVar13 = local_150;
          }
        }
        else {
          local_1c8 = &local_90;
          uVar13 = local_148;
        }
      }
      else {
        local_1c8 = &local_a0;
        uVar13 = local_140;
      }
    }
    else {
      local_1c8 = &local_b0;
    }
  }
  else {
    uVar13 = 1;
    local_1c8 = &local_c0;
    uVar11 = 0;
  }
  auVar3._8_8_ = uVar11;
  auVar3._0_8_ = uVar13;
  local_f8 = (*(code *)PTR___udivti3_0020a158)(param_2,param_3,uVar13,uVar11);
  lVar9 = local_f8._8_8_;
  uVar8 = local_f8._0_8_;
  uVar6 = SUB168(local_f8 * auVar3,0);
  uVar16 = param_2 - uVar6;
  lVar15 = (param_3 - SUB168(local_f8 * auVar3,8)) - (ulong)(param_2 < uVar6);
  local_e8 = *(undefined4 *)local_1c8;
  uStack_e4 = *(undefined4 *)((long)local_1c8 + 4);
  uStack_e0 = *(undefined4 *)(local_1c8 + 1);
  uStack_dc = *(undefined4 *)((long)local_1c8 + 0xc);
  if (uVar16 == 0 && lVar15 == 0) {
    local_138 = (long *)local_f8;
LAB_0016a910:
    local_130 = 
    PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf75db8903b60bf5dE_0020a0d0
    ;
    local_128 = (undefined8 **)&local_e8;
    local_120 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb20b9e0280238fE;
    local_1b8 = (undefined8 *)&DAT_00119680;
    local_198 = (undefined8 *)0x0;
    local_1a8 = &local_138;
    local_1a0 = (undefined *)0x2;
    pplVar10 = &local_1b8;
  }
  else {
    if (uVar11 < (uVar13 < 10)) {
      (*(code *)
        PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_0020a160)
                (&PTR_s_src_uu_df_src_blocks_rs_00202df0);
LAB_0016aaca:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00209d80)
                (10,10,&PTR_s_src_uu_df_src_blocks_rs_00202dd8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar13 = uVar13 >> 1;
    uVar11 = uVar11 >> 1;
    uVar6 = (uVar13 + uVar11 + (ulong)CARRY8(uVar13,uVar11)) % 5;
    uVar14 = uVar13 - uVar6;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14;
    uVar7 = SUB168(auVar2 * ZEXT816(0xcccccccccccccccd),0);
    lVar12 = (uVar11 - (uVar13 < uVar6)) * -0x3333333333333333 +
             SUB168(auVar2 * ZEXT816(0xcccccccccccccccd),8) + uVar14 * -0x3333333333333334;
    auVar4._8_8_ = lVar12;
    auVar4._0_8_ = uVar7;
    local_d8 = (*(code *)PTR___udivti3_0020a158)(uVar16,lVar15,uVar7,lVar12);
    uVar13 = local_d8._0_8_;
    uVar11 = SUB168(local_d8 * auVar4,0);
    if (lVar15 - SUB168(local_d8 * auVar4,8) == (ulong)(uVar16 < uVar11) && uVar16 == uVar11) {
      local_1a8 = (undefined8 **)local_d8;
    }
    else {
      if ((lVar9 != 0 || (ulong)-lVar9 < (ulong)(9 < uVar8)) || uVar13 == 9 && local_d8._8_8_ == 0)
      {
        local_108 = (undefined8 *)(uVar8 + 1);
        local_100 = lVar9 + (ulong)(0xfffffffffffffffe < uVar8);
        local_138 = (long *)&local_108;
        goto LAB_0016a910;
      }
      local_108 = (undefined8 *)(uVar13 + 1);
      local_100 = local_d8._8_8_ + (ulong)(0xfffffffffffffffe < uVar13);
      local_1a8 = &local_108;
    }
    local_1b8 = (undefined8 *)local_f8;
    local_1a0 = 
    PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__Display_u20_for_u20_u128_GT_3fmt17hf75db8903b60bf5dE_0020a0d0
    ;
    local_198 = (undefined8 *)&local_e8;
    local_190 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb20b9e0280238fE;
    local_138 = (long *)&DAT_00202da8;
    local_130 = (undefined *)0x3;
    local_118 = 0;
    local_128 = &local_1b8;
    local_120 = (code *)0x3;
    pplVar10 = &local_138;
  }
  local_1b0 = local_1a0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h7e34be96cbbb4028E(param_1,pplVar10);
  return;
}