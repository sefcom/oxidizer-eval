undefined8
_ZN5uu_rm25handle_writable_directory17ha4e75ec62de4407cE
          (code *param_1,long *param_2,byte param_3,char param_4,uint param_5)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined extraout_DL_03;
  undefined extraout_DL_04;
  undefined extraout_DL_05;
  undefined extraout_DL_06;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 ***local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_70;
  undefined **local_68;
  undefined8 ***local_60;
  code *local_58;
  undefined8 ***local_50;
  code *local_48;
  long *local_40;
  code *local_38;
  
  if ((param_3 == 2) || ((param_3 & 1) == 0)) {
    (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001f10b8)();
    bVar2 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17he401db6fc1473b6fE();
    if ((param_4 == '\x03' & (bVar2 ^ 1)) != 0) {
      return 1;
    }
  }
  local_40 = param_2;
  if ((param_5 & 0x100) == 0) {
    if ((char)param_5 < '\0') {
      if (param_4 != '\x02') {
        return 1;
      }
      local_50 = (undefined8 ***)(*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
      puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
      local_48 = (code *)CONCAT71(extraout_var_03,extraout_DL_03);
      local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
      local_a0 = (undefined **)&DAT_001ea4a0;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = &local_60;
      local_60 = &local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
      local_50 = (undefined8 ***)&DAT_00000001;
      local_38 = (code *)CONCAT71(local_38._1_7_,1);
      local_58 = (code *)
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
      ;
      local_a0 = &PTR_DAT_001ea6f0;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = &local_60;
      local_60 = &local_50;
      local_48 = param_1;
      (*(code *)puVar1)(&local_a0);
      local_a0 = &PTR_DAT_001ea630;
      local_98 = 1;
      local_90 = (undefined8 ***)&DAT_00000008;
      local_88 = 0;
      uStack_80 = 0;
      (*(code *)puVar1)(&local_a0);
      local_a0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
      lVar4 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
              )(&local_a0);
      if ((lVar4 == 0) ||
         (lVar4 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar4),
         lVar4 == 0)) goto LAB_0015ecf5;
      local_68 = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
      ;
      local_70 = lVar4;
      uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                        (lVar4);
                    /* try { // try from 0015eabf to 0015eb2d has its CatchHandler @ 0015ed1e */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar3);
      local_60 = (undefined8 ***)(*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
      local_58 = (code *)CONCAT71(extraout_var_04,extraout_DL_04);
      local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
      local_40 = &local_70;
      local_38 = 
      _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
      ;
      local_a0 = (undefined **)&DAT_001ea640;
      local_98 = 3;
      uStack_80 = 0;
      local_88 = 2;
      local_90 = &local_50;
      local_50 = &local_60;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
    }
    else {
      local_50 = (undefined8 ***)(*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
      puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
      local_48 = (code *)CONCAT71(extraout_var,extraout_DL);
      local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
      local_a0 = (undefined **)&DAT_001ea4a0;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = &local_60;
      local_60 = &local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
      local_50 = (undefined8 ***)&DAT_00000001;
      local_38 = (code *)CONCAT71(local_38._1_7_,1);
      local_58 = (code *)
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
      ;
      local_a0 = &PTR_DAT_001ea6f0;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = &local_60;
      local_60 = &local_50;
      local_48 = param_1;
      (*(code *)puVar1)(&local_a0);
      local_a0 = &PTR_DAT_001ea630;
      local_98 = 1;
      local_90 = (undefined8 ***)&DAT_00000008;
      local_88 = 0;
      uStack_80 = 0;
      (*(code *)puVar1)(&local_a0);
      local_a0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
      lVar4 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
              )(&local_a0);
      if ((lVar4 == 0) ||
         (lVar4 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar4),
         lVar4 == 0)) goto LAB_0015ecf5;
      local_68 = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
      ;
      local_70 = lVar4;
      uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                        (lVar4);
                    /* try { // try from 0015e752 to 0015e7c0 has its CatchHandler @ 0015ed46 */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar3);
      local_60 = (undefined8 ***)(*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
      local_58 = (code *)CONCAT71(extraout_var_00,extraout_DL_00);
      local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
      local_40 = &local_70;
      local_38 = 
      _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
      ;
      local_a0 = (undefined **)&DAT_001ea640;
      local_98 = 3;
      uStack_80 = 0;
      local_88 = 2;
      local_90 = &local_50;
      local_50 = &local_60;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
    }
  }
  else if ((char)param_5 < '\0') {
    if (param_4 != '\x02') {
      return 1;
    }
    local_50 = (undefined8 ***)(*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
    local_48 = (code *)CONCAT71(extraout_var_05,extraout_DL_05);
    local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_a0 = (undefined **)&DAT_001ea4a0;
    local_98 = 2;
    uStack_80 = 0;
    local_88 = 1;
    local_90 = &local_60;
    local_60 = &local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
    local_50 = (undefined8 ***)&DAT_00000001;
    local_38 = (code *)CONCAT71(local_38._1_7_,1);
    local_58 = (code *)
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
    ;
    local_a0 = &PTR_DAT_001ea730;
    local_98 = 2;
    uStack_80 = 0;
    local_88 = 1;
    local_90 = &local_60;
    local_60 = &local_50;
    local_48 = param_1;
    (*(code *)puVar1)(&local_a0);
    local_a0 = &PTR_DAT_001ea630;
    local_98 = 1;
    local_90 = (undefined8 ***)&DAT_00000008;
    local_88 = 0;
    uStack_80 = 0;
    (*(code *)puVar1)(&local_a0);
    local_a0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
    lVar4 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
            )(&local_a0);
    if ((lVar4 == 0) ||
       (lVar4 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar4),
       lVar4 == 0)) goto LAB_0015ecf5;
    local_68 = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
    ;
    local_70 = lVar4;
    uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                      (lVar4);
                    /* try { // try from 0015ec77 to 0015ece5 has its CatchHandler @ 0015ed0a */
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar3);
    local_60 = (undefined8 ***)(*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    local_58 = (code *)CONCAT71(extraout_var_06,extraout_DL_06);
    local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_40 = &local_70;
    local_38 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
    ;
    local_a0 = (undefined **)&DAT_001ea640;
    local_98 = 3;
    uStack_80 = 0;
    local_88 = 2;
    local_90 = &local_50;
    local_50 = &local_60;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
  }
  else {
    local_50 = (undefined8 ***)(*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
    local_48 = (code *)CONCAT71(extraout_var_01,extraout_DL_01);
    local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_a0 = (undefined **)&DAT_001ea4a0;
    local_98 = 2;
    uStack_80 = 0;
    local_88 = 1;
    local_90 = &local_60;
    local_60 = &local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
    local_50 = (undefined8 ***)&DAT_00000001;
    local_38 = (code *)CONCAT71(local_38._1_7_,1);
    local_58 = (code *)
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
    ;
    local_a0 = &PTR_DAT_001ea710;
    local_98 = 2;
    uStack_80 = 0;
    local_88 = 1;
    local_90 = &local_60;
    local_60 = &local_50;
    local_48 = param_1;
    (*(code *)puVar1)(&local_a0);
    local_a0 = &PTR_DAT_001ea630;
    local_98 = 1;
    local_90 = (undefined8 ***)&DAT_00000008;
    local_88 = 0;
    uStack_80 = 0;
    (*(code *)puVar1)(&local_a0);
    local_a0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001f0f40;
    lVar4 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_001f0f48
            )(&local_a0);
    if ((lVar4 == 0) ||
       (lVar4 = _ZN5uu_rm11prompt_file28__u7b__u7b_closure_u7d__u7d_17h39bfd332403fe2b9E(lVar4),
       lVar4 == 0)) goto LAB_0015ecf5;
    local_68 = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc8d0f322b50ad6d3E_001ea7a8
    ;
    local_70 = lVar4;
    uVar3 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                      (lVar4);
                    /* try { // try from 0015e907 to 0015e975 has its CatchHandler @ 0015ed32 */
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f0f50)(uVar3);
    local_60 = (undefined8 ***)(*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    local_58 = (code *)CONCAT71(extraout_var_02,extraout_DL_02);
    local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_40 = &local_70;
    local_38 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9df1131a88f3e56cE
    ;
    local_a0 = (undefined **)&DAT_001ea640;
    local_98 = 3;
    uStack_80 = 0;
    local_88 = 2;
    local_90 = &local_50;
    local_50 = &local_60;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_a0);
  }
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5e0d0be28f2432b8E
            (local_70,local_68);
LAB_0015ecf5:
  uVar5 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_001f0f58)();
  return uVar5;
}