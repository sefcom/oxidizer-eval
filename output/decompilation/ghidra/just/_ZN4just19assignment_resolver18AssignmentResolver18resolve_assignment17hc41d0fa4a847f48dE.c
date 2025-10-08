void _ZN4just19assignment_resolver18AssignmentResolver18resolve_assignment17hc41d0fa4a847f48dE
               (undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined local_1c0 [16];
  undefined4 *local_1b0;
  undefined8 *local_1a8;
  code *local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char cStack_e0;
  undefined7 uStack_df;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_80;
  undefined local_78 [64];
  char local_38;
  
  local_138 = param_3;
  local_130 = param_4;
  lVar5 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h28347c9f7522952fE
                    (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  if (lVar5 == 0) {
    local_1b0 = param_1;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6fed9915a4cca328E
              (param_2,param_3,param_4,&PTR_DAT_0052db90);
    auVar7 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h62a22d89973a7e72E
                       (**(undefined8 **)(param_2 + 0x18),(*(undefined8 **)(param_2 + 0x18))[1],
                        param_3,param_4);
    if (auVar7._0_8_ == 0) {
      local_1a8 = &local_138;
      local_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
      local_190 = &PTR_DAT_0052db70;
      uStack_188 = 2;
      local_170 = 0;
      local_180 = &local_1a8;
      uStack_178 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
                (&uStack_120,0,auVar7._8_8_,&local_190);
      local_80 = 0x23;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_c0 = 1;
      local_b8 = 0;
      local_b0 = 1;
      local_a8 = 0;
      uStack_a0 = 0;
      local_128 = 0x8000000000000028;
      _ZN4just13compile_error12CompileError3new17hd7f8c5d37ebee6c9E(local_1b0,&local_c0,&local_128);
    }
    else {
      local_140 = param_2 + 0x20;
      _ZN4just10expression10Expression9variables17h421cbbeec48818c6E(&local_1a8,auVar7._0_8_);
      puVar2 = 
      PTR__ZN85__LT_just__variables__Variables_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he65f7fdf9fba7f7aE_00566a28
      ;
      do {
        do {
          do {
                    /* try { // try from 00357200 to 003572b3 has its CatchHandler @ 00357598 */
            (*(code *)puVar2)(local_78,&local_1a8);
            if (local_38 == '%') {
              _ZN4core3ptr47drop_in_place_LT_just__variables__Variables_GT_17hdba53261cf647461E
                        (local_1a8,local_1a0);
              _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h229911f973c84f56E
                        (local_140,param_3,param_4);
              if (*(long *)(param_2 + 0x10) != 0) {
                *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
              }
              *(undefined *)(local_1b0 + 0x12) = 0x25;
              return;
            }
            auVar7 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                               (local_78);
            local_1c0 = auVar7;
            lVar5 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h28347c9f7522952fE
                              (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                               auVar7._0_8_,auVar7._8_8_);
          } while (lVar5 != 0);
          uVar6 = _ZN4just9constants9constants17h3594f93ebbf36f97E();
          lVar5 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h10d5bbd0b5ef08d9E
                            (uVar6,local_1c0._0_8_,local_1c0._8_8_);
        } while (lVar5 != 0);
        cVar4 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17he7e5eaa90c4f1895E
                          (local_1c0,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
        if (cVar4 != '\0') {
                    /* try { // try from 00357420 to 00357593 has its CatchHandler @ 00357596 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6fed9915a4cca328E
                    (param_2,local_1c0._0_8_,local_1c0._8_8_,&PTR_DAT_0052dba8);
          puVar3 = local_1b0;
          lVar5 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h62a22d89973a7e72E
                            (**(undefined8 **)(param_2 + 0x18),(*(undefined8 **)(param_2 + 0x18))[1]
                             ,local_1c0._0_8_,local_1c0._8_8_);
          if (lVar5 == 0) {
            (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_005660a8)
                      (&DAT_0016e502,0x16,&PTR_DAT_0052dbc0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hc8878f0d281318f9E
                    (&local_190,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
          uStack_120 = (undefined4)local_190;
          uStack_11c = local_190._4_4_;
          local_118 = (undefined4)uStack_188;
          uStack_114 = uStack_188._4_4_;
          uStack_110 = local_180;
          local_128 = 0x8000000000000018;
          local_108 = local_1c0;
          _ZN4just5token5Token5error17h986494da066a4455E(&local_190,lVar5 + 0x80,&local_128);
          *(undefined8 *)(puVar3 + 0x10) = local_150;
          *(undefined8 *)(puVar3 + 0x12) = uStack_148;
          puVar3[0xc] = local_160;
          puVar3[0xd] = uStack_15c;
          puVar3[0xe] = uStack_158;
          puVar3[0xf] = uStack_154;
          puVar3[8] = (undefined4)local_170;
          puVar3[9] = local_170._4_4_;
          puVar3[10] = uStack_168;
          puVar3[0xb] = uStack_164;
          puVar3[4] = (undefined4)local_180;
          puVar3[5] = local_180._4_4_;
          puVar3[6] = (undefined4)uStack_178;
          puVar3[7] = uStack_178._4_4_;
          *puVar3 = (undefined4)local_190;
          puVar3[1] = local_190._4_4_;
          puVar3[2] = (undefined4)uStack_188;
          puVar3[3] = uStack_188._4_4_;
          goto LAB_0035755a;
        }
        lVar5 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h62a22d89973a7e72E
                          (**(undefined8 **)(param_2 + 0x18),(*(undefined8 **)(param_2 + 0x18))[1],
                           local_1c0._0_8_,local_1c0._8_8_);
        if (lVar5 == 0) {
          uStack_120 = local_1c0._0_4_;
          uStack_11c = local_1c0._4_4_;
          local_118 = local_1c0._8_4_;
          uStack_114 = local_1c0._12_4_;
          local_128 = 0x8000000000000034;
          _ZN4just5token5Token5error17h986494da066a4455E(&local_190,local_78,&local_128);
          *(undefined8 *)(local_1b0 + 0x10) = local_150;
          *(undefined8 *)(local_1b0 + 0x12) = uStack_148;
          local_f8 = local_160;
          uStack_f4 = uStack_15c;
          uStack_f0 = uStack_158;
          uStack_ec = uStack_154;
          goto LAB_0035754b;
        }
        _ZN4just19assignment_resolver18AssignmentResolver18resolve_assignment17hc41d0fa4a847f48dE
                  (&local_128,param_2,local_1c0._0_8_,local_1c0._8_8_);
      } while (cStack_e0 == '%');
      *(undefined8 *)(local_1b0 + 0x10) = local_e8;
      *(ulong *)(local_1b0 + 0x12) = CONCAT71(uStack_df,cStack_e0);
      local_190._0_4_ = (undefined4)local_128;
      local_190._4_4_ = local_128._4_4_;
      uStack_188._0_4_ = uStack_120;
      uStack_188._4_4_ = uStack_11c;
      local_180._0_4_ = local_118;
      local_180._4_4_ = uStack_114;
      uStack_178._0_4_ = (undefined4)uStack_110;
      uStack_178._4_4_ = uStack_110._4_4_;
      local_170._0_4_ = local_108._0_4_;
      local_170._4_4_ = local_108._4_4_;
      uStack_168 = local_108._8_4_;
      uStack_164 = local_108._12_4_;
LAB_0035754b:
      local_1b0[0xc] = local_f8;
      local_1b0[0xd] = uStack_f4;
      local_1b0[0xe] = uStack_f0;
      local_1b0[0xf] = uStack_ec;
      local_1b0[8] = (undefined4)local_170;
      local_1b0[9] = local_170._4_4_;
      local_1b0[10] = uStack_168;
      local_1b0[0xb] = uStack_164;
      local_1b0[4] = (undefined4)local_180;
      local_1b0[5] = local_180._4_4_;
      local_1b0[6] = (undefined4)uStack_178;
      local_1b0[7] = uStack_178._4_4_;
      *local_1b0 = (undefined4)local_190;
      local_1b0[1] = local_190._4_4_;
      local_1b0[2] = (undefined4)uStack_188;
      local_1b0[3] = uStack_188._4_4_;
LAB_0035755a:
      _ZN4core3ptr47drop_in_place_LT_just__variables__Variables_GT_17hdba53261cf647461E
                (local_1a8,local_1a0);
    }
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0x25;
  }
  return;
}