void _ZN5uu_cp13OverwriteMode6verify17hcf2d8eaa11706b21E
               (undefined8 *param_1,char param_2,code *param_3,undefined *param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **local_128;
  undefined *local_120;
  undefined **local_118;
  code *local_110;
  undefined4 *puStack_108;
  code *local_100;
  undefined local_f8 [8];
  code *local_f0;
  long *local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined local_c8 [16];
  undefined *local_b8;
  undefined local_b0;
  long local_a8;
  undefined **local_a0;
  undefined local_98 [16];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_2 == '\0') {
    *param_1 = 0x800000000000000c;
  }
  else {
    local_e8 = (long *)param_4;
    if (param_2 == '\x01') {
      _ZN5uu_cp35file_mode_for_interactive_overwrite17h1fc34d69e34b5e78E(local_98,param_3,param_4);
      if (local_98._0_8_ == -0x8000000000000000) {
        _ZN4core3ptr102drop_in_place_LT_core__option__Option_LT__LP_alloc__string__String_C_alloc__string__String_RP__GT__GT_17h4ba7db36afe98420E
                  (local_98);
        _local_f8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00267628)();
        puVar4 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630;
        local_98._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haac06c1252b30d1dE;
        local_128 = (undefined **)&DAT_0025e700;
        local_120 = (undefined *)0x2;
        puStack_108 = (undefined4 *)0x0;
        local_110 = (code *)0x1;
        local_118 = (undefined **)local_98;
        local_98._0_8_ = local_f8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(&local_128);
        local_f8 = (undefined  [8])&DAT_00000001;
        local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
        local_98._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
        ;
        local_128 = &PTR_s_overwrite___0025eb78;
        local_120 = (undefined *)0x2;
        puStack_108 = (undefined4 *)0x0;
        local_110 = (code *)0x1;
        local_118 = (undefined **)local_98;
        local_f0 = param_3;
        local_98._0_8_ = local_f8;
        (*(code *)puVar4)(&local_128);
        local_128 = &PTR_s_specified_more_than_once_0025eb68;
        local_120 = (undefined *)0x1;
        local_118 = (undefined **)&DAT_00000008;
        local_110 = (code *)0x0;
        puStack_108 = (undefined4 *)0x0;
        (*(code *)puVar4)(&local_128);
        local_128 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00267c40;
        lVar3 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_00267c48
                )(&local_128);
        if ((lVar3 != 0) &&
           (puVar4 = (undefined *)
                     _ZN5uu_cp13OverwriteMode6verify28__u7b__u7b_closure_u7d__u7d_17h19c4ffe22ec9056cE
                               (lVar3), puVar4 != (undefined *)0x0)) {
          local_c8._8_8_ =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hf859cf71b3ffe2edE_0025eec0
          ;
          local_c8._0_8_ = puVar4;
          uVar2 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                            (puVar4);
                    /* try { // try from 001a1505 to 001a157d has its CatchHandler @ 001a18e9 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00267690)(uVar2);
          local_98 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00267628)();
          local_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haac06c1252b30d1dE;
          local_e8 = (long *)local_c8;
          local_e0 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hf8a637a73ed45d5bE
          ;
          local_128 = (undefined **)&DAT_0025e660;
          local_120 = (undefined *)0x3;
          puStack_108 = (undefined4 *)0x0;
          local_110 = (code *)0x2;
          local_118 = (undefined **)local_f8;
          local_f8 = (undefined  [8])local_98;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(&local_128);
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3fae8bb6fba1fa61E
                    (local_c8._0_8_,local_c8._8_8_);
        }
        cVar1 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_00267c50)();
      }
      else {
        local_58 = local_88;
        local_68 = local_98._0_8_;
        uStack_60 = local_98._8_8_;
        local_38 = local_70;
        local_48 = local_80;
        uStack_44 = uStack_7c;
        uStack_40 = uStack_78;
        uStack_3c = uStack_74;
                    /* try { // try from 001a1692 to 001a17d3 has its CatchHandler @ 001a1903 */
        _local_f8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00267628)();
        local_c8._0_8_ = local_f8;
        local_c8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haac06c1252b30d1dE;
        local_128 = (undefined **)&DAT_0025e700;
        local_120 = (undefined *)0x2;
        puStack_108 = (undefined4 *)0x0;
        local_110 = (code *)0x1;
        local_118 = (undefined **)local_c8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(&local_128);
        local_c8._0_8_ = (undefined *)0x1;
        local_b0 = 1;
        local_120 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
        ;
        local_118 = (undefined **)&local_68;
        local_110 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        puStack_108 = &local_48;
        local_100 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_f8 = (undefined  [8])&PTR_s_replace_0025eb28;
        local_f0 = (code *)0x4;
        local_d8 = 0;
        local_e0 = (code *)0x3;
        local_128 = (undefined **)local_c8;
        local_e8 = (long *)&local_128;
        local_c8._8_8_ = param_3;
        local_b8 = param_4;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(local_f8);
        local_128 = &PTR_s_specified_more_than_once_0025eb68;
        local_120 = (undefined *)0x1;
        local_118 = (undefined **)&DAT_00000008;
        local_110 = (code *)0x0;
        puStack_108 = (undefined4 *)0x0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(&local_128);
        local_128 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00267c40;
        lVar3 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_00267c48
                )(&local_128);
        if ((lVar3 != 0) &&
           (lVar3 = _ZN5uu_cp13OverwriteMode6verify28__u7b__u7b_closure_u7d__u7d_17h19c4ffe22ec9056cE
                              (lVar3), lVar3 != 0)) {
          local_a0 = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hf859cf71b3ffe2edE_0025eec0
          ;
          local_a8 = lVar3;
          uVar2 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                            (lVar3);
                    /* try { // try from 001a17fc to 001a1871 has its CatchHandler @ 001a18cf */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00267690)(uVar2);
          local_c8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00267628)();
          local_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haac06c1252b30d1dE;
          local_e8 = &local_a8;
          local_e0 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hf8a637a73ed45d5bE
          ;
          local_128 = (undefined **)&DAT_0025e660;
          local_120 = (undefined *)0x3;
          puStack_108 = (undefined4 *)0x0;
          local_110 = (code *)0x2;
          local_118 = (undefined **)local_f8;
          local_f8 = (undefined  [8])local_c8;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(&local_128);
                    /* try { // try from 001a1882 to 001a1886 has its CatchHandler @ 001a18cb */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3fae8bb6fba1fa61E
                    (local_a8,local_a0);
        }
                    /* try { // try from 001a1887 to 001a188c has its CatchHandler @ 001a18cd */
        cVar1 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_00267c50)();
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(&local_48);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(&local_68);
      }
      if (cVar1 == '\0') {
        *param_1 = 0x8000000000000007;
        *(undefined *)(param_1 + 1) = 1;
      }
      else {
        *param_1 = 0x800000000000000c;
      }
    }
    else {
      if (param_5 != '\0') {
        local_f8 = (undefined  [8])0x1;
        local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
        local_98._0_8_ = local_f8;
        local_98._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
        ;
        local_128 = &PTR_s_skipped_0025eb08;
        local_120 = (undefined *)0x2;
        puStack_108 = (undefined4 *)0x0;
        local_118 = (undefined **)local_98;
        local_110 = (code *)0x1;
        local_f0 = param_3;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00267658)(&local_128);
      }
      *param_1 = 0x8000000000000007;
      *(undefined *)(param_1 + 1) = 0;
    }
  }
  return;
}