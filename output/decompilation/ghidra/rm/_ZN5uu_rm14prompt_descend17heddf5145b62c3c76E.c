void _ZN5uu_rm14prompt_descend17heddf5145b62c3c76E(code *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined **local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_70;
  undefined **local_68;
  undefined local_60 [16];
  undefined local_50 [16];
  long *local_40;
  code *local_38;
  
  local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
  puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
  local_60._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
  local_a0 = (undefined **)&DAT_001ea4a0;
  local_98 = 2;
  uStack_80 = 0;
  local_88 = 1;
  local_90 = local_60;
  local_60._0_8_ = local_50;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
  local_50._0_8_ = &DAT_00000001;
  local_38 = (code *)CONCAT71(local_38._1_7_,1);
  local_60._8_8_ =
       PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
  ;
  local_a0 = &PTR_DAT_001ea768;
  local_98 = 2;
  uStack_80 = 0;
  local_88 = 1;
  local_90 = local_60;
  local_60._0_8_ = local_50;
  local_50._8_8_ = param_1;
  local_40 = param_2;
  (*(code *)puVar1)(&local_a0);
  local_a0 = &PTR_DAT_001ea630;
  local_98 = 1;
  local_90 = &DAT_00000008;
  local_88 = 0;
  uStack_80 = 0;
  (*(code *)puVar1)(&local_a0);
  local_a0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
  lVar3 = (*(code *)
            PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
          )(&local_a0);
  if (lVar3 != 0) {
    lVar3 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar3);
    if (lVar3 != 0) {
      local_68 = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
      ;
      local_70 = lVar3;
      uVar2 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                        (lVar3);
                    /* try { // try from 0015f08c to 0015f0fa has its CatchHandler @ 0015f11f */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar2);
      local_60 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
      local_50._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
      local_40 = &local_70;
      local_38 = 
      _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
      ;
      local_a0 = (undefined **)&DAT_001ea640;
      local_98 = 3;
      uStack_80 = 0;
      local_88 = 2;
      local_90 = local_50;
      local_50._0_8_ = local_60;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
      _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5e0d0be28f2432b8E
                (local_70,local_68);
    }
  }
  (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_001f0f58)();
  return;
}