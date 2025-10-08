ulong _ZN5uu_rm11prompt_file17h7c1fa3f92c48040aE
                (code *param_1,long *param_2,undefined param_3,char param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_RBP;
  undefined **ppuVar7;
  undefined local_158 [16];
  undefined local_148 [8];
  undefined8 local_140;
  long *local_138;
  code *local_130;
  undefined8 uStack_128;
  undefined local_118 [16];
  long *local_108;
  code *local_100;
  undefined **local_f8;
  long local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_a8;
  long local_90;
  
  uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (param_4 == '\x02') {
    _ZN3std2fs16symlink_metadata17h2654b7702b6620cdE(&local_e0,param_1,param_2);
    local_f8 = local_e0;
    ppuVar7 = (undefined **)0x2;
    if ((local_e0 == (undefined **)0x2) || (ppuVar7 = local_e0, (local_a8 & 0xf000) != 0xa000)) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h33062896cdc75427E
                (ppuVar7,local_d8);
      goto LAB_0015dc56;
    }
                    /* try { // try from 0015da77 to 0015db8d has its CatchHandler @ 0015e0f4 */
    local_118 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    local_158._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_148 = (undefined  [8])&DAT_001ea4a0;
    local_140 = (code *)0x2;
    uStack_128 = 0;
    local_130 = (code *)0x1;
    local_158._0_8_ = local_118;
    local_138 = (long *)local_158;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(local_148);
    local_118._0_8_ = &DAT_00000001;
    local_100 = (code *)CONCAT71(local_100._1_7_,1);
    local_158._8_8_ =
         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
    ;
    local_148 = (undefined  [8])&PTR_DAT_001ea610;
    local_140 = (code *)0x2;
    uStack_128 = 0;
    local_130 = (code *)0x1;
    local_158._0_8_ = local_118;
    local_138 = (long *)local_158;
    local_118._8_8_ = param_1;
    local_108 = param_2;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(local_148);
    local_148 = (undefined  [8])&PTR_DAT_001ea630;
    local_140 = (code *)0x1;
    local_138 = (long *)&DAT_00000008;
    local_130 = (code *)0x0;
    uStack_128 = 0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(local_148);
    local_148 = (undefined  [8])PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
    lVar5 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
            )(local_148);
    if (lVar5 != 0) {
      lVar5 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar5);
      if (lVar5 != 0) {
        local_e8 = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
        ;
        local_f0 = lVar5;
        uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                          (lVar5);
                    /* try { // try from 0015dbb0 to 0015dc1d has its CatchHandler @ 0015e0e0 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar3);
        local_158 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
        local_118._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
        local_108 = &local_f0;
        local_100 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
        ;
        local_148 = (undefined  [8])&DAT_001ea640;
        local_140 = (code *)0x3;
        uStack_128 = 0;
        local_130 = (code *)0x2;
        local_138 = (long *)local_118;
        local_118._0_8_ = local_158;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(local_148);
                    /* try { // try from 0015dc28 to 0015dc2c has its CatchHandler @ 0015e0c9 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5e0d0be28f2432b8E
                  (local_f0,local_e8);
      }
    }
                    /* try { // try from 0015dc2d to 0015dc32 has its CatchHandler @ 0015e0de */
    uVar4 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_001f0f58)();
    uVar6 = (ulong)uVar4;
    ppuVar7 = local_f8;
  }
  else {
    if (param_4 == '\0') goto LAB_0015dc83;
LAB_0015dc56:
    _ZN3std2fs8metadata17h578d377c5d8d0272E(&local_e0,param_1,param_2);
    if (local_e0 != (undefined **)0x2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h33062896cdc75427E
                (local_e0,local_d8);
      if ((param_4 != '\x02') ||
         (cVar2 = _ZN5uu_rm11is_writable17h35835a5ca0912becE(param_1,param_2), cVar2 == '\0')) {
        uVar6 = _ZN5uu_rm31prompt_file_permission_readonly17h22905ffc5cf8659cE
                          (param_1,param_2,param_3,param_4);
        return uVar6;
      }
      local_138 = param_2;
      if (local_90 == 0) {
        _local_148 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
        puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
        local_118._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
        local_e0 = (undefined **)&DAT_001ea4a0;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_118._0_8_ = local_148;
        local_d0 = local_118;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
        local_148 = (undefined  [8])&DAT_00000001;
        local_130 = (code *)CONCAT71(local_130._1_7_,1);
        local_118._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
        ;
        local_e0 = &PTR_DAT_001ea670;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_140 = param_1;
        local_118._0_8_ = local_148;
        local_d0 = local_118;
        (*(code *)puVar1)(&local_e0);
        local_e0 = &PTR_DAT_001ea630;
        local_d8 = 1;
        local_d0 = &DAT_00000008;
        local_c8 = 0;
        uStack_c0 = 0;
        (*(code *)puVar1)(&local_e0);
        local_e0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
        lVar5 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
                )(&local_e0);
        if (lVar5 != 0) {
          lVar5 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar5);
          if (lVar5 != 0) {
            local_158._8_8_ =
                 &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
            ;
            local_158._0_8_ = lVar5;
            uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                              (lVar5);
                    /* try { // try from 0015e022 to 0015e09a has its CatchHandler @ 0015e0b6 */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar3);
            local_118 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
            local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
            local_130 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
            ;
            local_e0 = (undefined **)&DAT_001ea640;
            local_d8 = 3;
            uStack_c0 = 0;
            local_c8 = 2;
            local_148 = (undefined  [8])local_118;
            local_138 = (long *)local_158;
            local_d0 = local_148;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
            goto LAB_0015e09b;
          }
        }
      }
      else {
        _local_148 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
        puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
        local_118._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
        local_e0 = (undefined **)&DAT_001ea4a0;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_118._0_8_ = local_148;
        local_d0 = local_118;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
        local_148 = (undefined  [8])&DAT_00000001;
        local_130 = (code *)CONCAT71(local_130._1_7_,1);
        local_118._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
        ;
        local_e0 = &PTR_DAT_001ea690;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_140 = param_1;
        local_118._0_8_ = local_148;
        local_d0 = local_118;
        (*(code *)puVar1)(&local_e0);
        local_e0 = &PTR_DAT_001ea630;
        local_d8 = 1;
        local_d0 = &DAT_00000008;
        local_c8 = 0;
        uStack_c0 = 0;
        (*(code *)puVar1)(&local_e0);
        local_e0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
        lVar5 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
                )(&local_e0);
        if (lVar5 != 0) {
          lVar5 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar5);
          if (lVar5 != 0) {
            local_158._8_8_ =
                 &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
            ;
            local_158._0_8_ = lVar5;
            uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                              (lVar5);
                    /* try { // try from 0015de29 to 0015dea1 has its CatchHandler @ 0015e0cb */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar3);
            local_118 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
            local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
            local_130 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
            ;
            local_e0 = (undefined **)&DAT_001ea640;
            local_d8 = 3;
            uStack_c0 = 0;
            local_c8 = 2;
            local_148 = (undefined  [8])local_118;
            local_138 = (long *)local_158;
            local_d0 = local_148;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
LAB_0015e09b:
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5e0d0be28f2432b8E
                      (local_158._0_8_,local_158._8_8_);
          }
        }
      }
      uVar4 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_001f0f58)();
      uVar6 = (ulong)uVar4;
      goto LAB_0015dc83;
    }
    ppuVar7 = (undefined **)0x2;
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h33062896cdc75427E
            (ppuVar7,local_d8);
LAB_0015dc83:
  return uVar6 & 0xffffffff;
}