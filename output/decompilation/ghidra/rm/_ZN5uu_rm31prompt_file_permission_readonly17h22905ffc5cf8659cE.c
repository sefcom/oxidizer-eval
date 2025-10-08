ulong _ZN5uu_rm31prompt_file_permission_readonly17h22905ffc5cf8659cE
                (code *param_1,long *param_2,byte param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long local_120;
  undefined **local_118;
  undefined local_110 [16];
  undefined local_100 [16];
  long *local_f0;
  code *local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_90;
  
  if ((param_3 == 2) || (bVar3 = 1, (param_3 & 1) == 0)) {
    (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001f10b8)();
    bVar3 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17he401db6fc1473b6fE();
  }
  _ZN3std2fs8metadata17h578d377c5d8d0272E(&local_e0,param_1,param_2);
  uVar2 = local_d8;
  ppuVar1 = local_e0;
  uVar8 = CONCAT71((int7)((param_4 & 0xffffffff) >> 8),1);
  if (((char)(param_4 & 0xffffffff) == '\x03' & (bVar3 ^ 1)) != 0) goto LAB_0015e379;
  if (local_e0 == (undefined **)0x2) {
LAB_0015e1af:
    local_100 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    local_110._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_e0 = (undefined **)&DAT_001ea4a0;
    local_d8 = 2;
    uStack_c0 = 0;
    local_c8 = 1;
    local_110._0_8_ = local_100;
    local_d0 = local_110;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
    local_100._0_8_ = &DAT_00000001;
    local_e8 = (code *)CONCAT71(local_e8._1_7_,1);
    local_110._8_8_ =
         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
    ;
    local_e0 = &PTR_DAT_001ea6d0;
    local_d8 = 2;
    uStack_c0 = 0;
    local_c8 = 1;
    local_110._0_8_ = local_100;
    local_100._8_8_ = param_1;
    local_f0 = param_2;
    local_d0 = local_110;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
    local_e0 = &PTR_DAT_001ea630;
    local_d8 = 1;
    local_d0 = &DAT_00000008;
    local_c8 = 0;
    uStack_c0 = 0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
    local_e0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
    lVar7 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
            )(&local_e0);
    if (lVar7 != 0) {
      lVar7 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar7);
      if (lVar7 != 0) {
        local_118 = &
                    PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
        ;
        local_120 = lVar7;
        uVar5 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                          (lVar7);
                    /* try { // try from 0015e2ec to 0015e361 has its CatchHandler @ 0015e581 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar5);
        local_110 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
        local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
        local_f0 = &local_120;
        local_e8 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
        ;
        local_e0 = (undefined **)&DAT_001ea640;
        local_d8 = 3;
        uStack_c0 = 0;
        local_c8 = 2;
        local_100._0_8_ = local_110;
        local_d0 = local_100;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
                    /* try { // try from 0015e36c to 0015e370 has its CatchHandler @ 0015e57d */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5e0d0be28f2432b8E
                  (local_120,local_118);
      }
    }
                    /* try { // try from 0015e371 to 0015e376 has its CatchHandler @ 0015e57f */
    uVar6 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_001f0f58)();
  }
  else {
                    /* try { // try from 0015e18b to 0015e2c9 has its CatchHandler @ 0015e595 */
    cVar4 = _ZN5uu_rm11is_writable17h35835a5ca0912becE(param_1,param_2);
    if (cVar4 != '\0') goto LAB_0015e379;
    if (local_90 != 0) goto LAB_0015e1af;
                    /* try { // try from 0015e398 to 0015e4b2 has its CatchHandler @ 0015e595 */
    local_100 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    local_110._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_e0 = (undefined **)&DAT_001ea4a0;
    local_d8 = 2;
    uStack_c0 = 0;
    local_c8 = 1;
    local_110._0_8_ = local_100;
    local_d0 = local_110;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
    local_100._0_8_ = &DAT_00000001;
    local_e8 = (code *)CONCAT71(local_e8._1_7_,1);
    local_110._8_8_ =
         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
    ;
    local_e0 = &PTR_DAT_001ea6b0;
    local_d8 = 2;
    uStack_c0 = 0;
    local_c8 = 1;
    local_110._0_8_ = local_100;
    local_100._8_8_ = param_1;
    local_f0 = param_2;
    local_d0 = local_110;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
    local_e0 = &PTR_DAT_001ea630;
    local_d8 = 1;
    local_d0 = &DAT_00000008;
    local_c8 = 0;
    uStack_c0 = 0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
    local_e0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
    lVar7 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
            )(&local_e0);
    if (lVar7 != 0) {
      lVar7 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar7);
      if (lVar7 != 0) {
        local_118 = &
                    PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
        ;
        local_120 = lVar7;
        uVar5 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                          (lVar7);
                    /* try { // try from 0015e4d5 to 0015e54a has its CatchHandler @ 0015e569 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar5);
        local_110 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
        local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
        local_f0 = &local_120;
        local_e8 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
        ;
        local_e0 = (undefined **)&DAT_001ea640;
        local_d8 = 3;
        uStack_c0 = 0;
        local_c8 = 2;
        local_100._0_8_ = local_110;
        local_d0 = local_100;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_e0);
                    /* try { // try from 0015e555 to 0015e559 has its CatchHandler @ 0015e565 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5e0d0be28f2432b8E
                  (local_120,local_118);
      }
    }
                    /* try { // try from 0015e55a to 0015e55f has its CatchHandler @ 0015e567 */
    uVar6 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_001f0f58)();
  }
  uVar8 = (ulong)uVar6;
LAB_0015e379:
  _ZN4core3ptr130drop_in_place_LT__LP_bool_C_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__C_uu_rm__InteractiveMode_RP__GT_17h34832e68475fb301E
            (ppuVar1,uVar2);
  return uVar8;
}