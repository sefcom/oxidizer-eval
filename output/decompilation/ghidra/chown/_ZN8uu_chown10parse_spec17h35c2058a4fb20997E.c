void _ZN8uu_chown10parse_spec17h35c2058a4fb20997E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong extraout_RDX;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined4 local_134;
  undefined4 *local_130;
  undefined **local_128;
  undefined **local_120;
  undefined8 **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined local_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88 [48];
  undefined2 local_58;
  undefined local_50 [24];
  undefined4 local_38;
  
  local_134 = param_4;
  cVar3 = _ZN56__LT_char_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h2af8667b79ce998cE
                    (&local_134);
  if (cVar3 == '\0') {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001fd048)
              ("assertion failed: [\'.\', \':\'].contains(&sep)",0x2b,
               &PTR_s_src_uu_chown_src_chown_rs_001f5fc0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_88,param_4,param_2,param_3);
  local_98 = 0;
  local_58 = 1;
  local_a0 = 1;
  local_90 = param_3;
  auVar10 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hf71c92c096863657E(&local_98);
  if (auVar10._0_8_ == 0) {
    auVar10 = ZEXT816(1);
  }
  lVar9 = auVar10._8_8_;
  ppuVar2 = auVar10._0_8_;
  local_130 = param_1;
  if (local_a0 == 0) {
    lVar7 = 0;
  }
  else if (local_a0 == 1) {
    local_a0 = 0;
    auVar10 = _ZN4core3str4iter22SplitInternal_LT_P_GT_7get_end17h74cf200cf9f6e638E(&local_98);
    param_1 = auVar10._8_8_;
    lVar7 = auVar10._0_8_;
  }
  else {
    local_a0 = local_a0 + -1;
    auVar10 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hf71c92c096863657E(&local_98);
    param_1 = auVar10._8_8_;
    lVar7 = auVar10._0_8_;
  }
  if (lVar7 == 0) {
    param_1 = (undefined4 *)0x0;
  }
  _ZN8uu_chown9parse_uid17h01027c14780af233E(&local_128,ppuVar2,lVar9,param_2,param_3,local_134);
  if (local_128 == (undefined **)0x0) {
    lVar8 = 1;
    if (lVar7 != 0) {
      lVar8 = lVar7;
    }
    local_b8 = local_120;
    uStack_b0 = 0;
    _ZN8uu_chown9parse_gid17h180219f2ead778f4E(&local_128,lVar8,param_1,param_2,param_3);
    if (local_128 == (undefined **)0x0) {
      local_c8 = local_120;
      uStack_c0 = 0;
      local_120 = (undefined **)(lVar9 + (long)ppuVar2);
      local_128 = ppuVar2;
      bVar4 = _ZN4core3str11validations15next_code_point17h64a24206fe1d1fcaE(&local_128);
      uVar6 = (uint)extraout_RDX;
      if ((((uVar6 != 0x110000 & bVar4) != 1) ||
          (((9 < uVar6 - 0x30 &&
            ((uVar6 < 0x80 ||
             (cVar3 = (*(code *)
                        PTR__ZN4core7unicode12unicode_data1n6lookup17h2205f79143053ee8E_001fd040)
                                (extraout_RDX & 0xffffffff), cVar3 == '\0')))) ||
           (param_1 != (undefined4 *)0x0)))) ||
         (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h734d187c689c169fE
                            (param_2,param_3,ppuVar2,lVar9), cVar3 != '\0')) {
        local_130[1] = (undefined4)local_b8;
        local_130[2] = local_b8._4_4_;
        local_130[3] = (int)local_c8;
        local_130[4] = (int)((ulong)local_c8 >> 0x20);
        uVar5 = 0;
        goto LAB_001618ba;
      }
      local_e8 = 0;
      local_d0 = 1;
      local_f8 = &local_e8;
      local_f0 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fd018
      ;
      local_128 = &PTR_s_invalid_spec__001f5fb0;
      local_120 = (undefined **)0x1;
      local_108 = 0;
      local_118 = &local_f8;
      local_110 = 1;
      local_e0 = param_2;
      local_d8 = param_3;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4bc4c2e4ba7ee2f5E(local_50,&local_128);
      local_38 = 1;
      local_128 = (undefined **)_ZN5alloc5boxed12Box_LT_T_GT_3new17hb4f3be129963c03fE(local_50);
      local_120 = &
                  PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h275083bfbf694abdE_001f5f38
      ;
    }
  }
  *(undefined ***)(local_130 + 2) = local_128;
  *(undefined ***)(local_130 + 4) = local_120;
  uVar5 = 1;
LAB_001618ba:
  *local_130 = uVar5;
  return;
}