void _ZN5uu_df21get_named_filesystems17h04ac4719102a6bd6E
               (undefined4 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined local_378 [16];
  undefined8 local_368;
  undefined **local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  long local_348;
  undefined4 *local_340;
  undefined8 local_338;
  undefined **local_330;
  undefined8 local_328;
  undefined *local_320;
  undefined (*local_318) [16];
  code *pcStack_310;
  undefined8 *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined local_230 [8];
  undefined auStack_228 [16];
  code *local_218;
  undefined local_148 [16];
  undefined8 local_138;
  undefined local_130 [16];
  undefined8 local_120;
  undefined local_118 [14] [16];
  
  local_338 = param_4;
  (*(code *)PTR__ZN6uucore8features5fsext12read_fs_list17h6f122f433e9b10c6E_00209eb8)(&local_318);
  puVar2 = local_308;
  pcVar1 = pcStack_310;
  local_330 = (undefined **)local_318;
  local_328 = pcStack_310;
  local_320 = (undefined *)local_308;
  local_358 = 0;
  uStack_350 = 8;
  local_348 = 0;
  local_340 = param_1;
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
                    /* try { // try from 00160366 to 00160441 has its CatchHandler @ 00160950 */
      _ZN5uu_df10filesystem10Filesystem9from_path17h8c044b7be3620a3cE
                (local_118,pcVar1,puVar2,param_2);
      if (local_118[0]._0_8_ == -0x8000000000000000) {
        if (local_118[0][8] == '\0') {
          auStack_228 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17he61e357f22fb6931E
                                  (*param_2);
          local_230 = (undefined  [8])0x1;
          local_218 = (code *)CONCAT71(local_218._1_7_,1);
          local_378._8_8_ =
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209ee0
          ;
          local_318 = (undefined (*) [16])&PTR_s_cannot_access_00202038;
          pcStack_310 = (code *)0x2;
          local_2f8 = 0;
          local_300 = 1;
                    /* try { // try from 001605be to 001605f7 has its CatchHandler @ 00160950 */
          local_378._0_8_ = local_230;
          local_308 = (undefined8 *)local_378;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17hd603ea6dce20e29aE(local_130,&local_318);
          local_300 = CONCAT44(local_300._4_4_,1);
          local_308 = (undefined8 *)local_120;
          local_368 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9b3314f0e2696c29E(&local_318);
          local_360 = &
                      PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7398abc395ee8257E_00202078
          ;
          uVar4 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                            (local_368);
                    /* try { // try from 00160611 to 00160695 has its CatchHandler @ 00160922 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209ec0)(uVar4);
          local_378 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209ec8)();
          auStack_228._0_8_ =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3c47c1ce865d8231E;
          auStack_228._8_8_ = &local_368;
          local_218 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9d2dcefa87161161E
          ;
          local_318 = (undefined (*) [16])&DAT_00202008;
          pcStack_310 = (code *)0x3;
          local_2f8 = 0;
          local_300 = 2;
          local_308 = (undefined8 *)local_230;
          local_230 = (undefined  [8])local_378;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209ed0)(&local_318);
                    /* try { // try from 001606a0 to 001606e7 has its CatchHandler @ 00160950 */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hfabf09c63ef1010cE
                    (local_368,local_360);
        }
        else if (local_118[0][8] == '\x01') {
          _local_230 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17he61e357f22fb6931E
                                 (*param_2);
          local_378._8_8_ =
               PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00209e10
          ;
          local_318 = (undefined (*) [16])&DAT_00201fe8;
          pcStack_310 = (code *)0x2;
          local_2f8 = 0;
          local_300 = 1;
          local_378._0_8_ = local_230;
          local_308 = (undefined8 *)local_378;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17hd603ea6dce20e29aE(local_148,&local_318);
          local_300 = CONCAT44(local_300._4_4_,1);
          local_308 = (undefined8 *)local_138;
          local_368 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9b3314f0e2696c29E(&local_318);
          local_360 = &
                      PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7398abc395ee8257E_00202078
          ;
          uVar4 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                            (local_368);
                    /* try { // try from 0016045b to 001604df has its CatchHandler @ 00160936 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209ec0)(uVar4);
          local_378 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209ec8)();
          auStack_228._0_8_ =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3c47c1ce865d8231E;
          auStack_228._8_8_ = &local_368;
          local_218 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9d2dcefa87161161E
          ;
          local_318 = (undefined (*) [16])&DAT_00202008;
          pcStack_310 = (code *)0x3;
          local_2f8 = 0;
          local_300 = 2;
          local_308 = (undefined8 *)local_230;
          local_230 = (undefined  [8])local_378;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209ed0)(&local_318);
                    /* try { // try from 001604ea to 001604ee has its CatchHandler @ 00160950 */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hfabf09c63ef1010cE
                    (local_368,local_360);
        }
        else {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h5e212f3fc67d7e91E
                    (local_230,"no file systems processed: No such file or directory: \n",0x19);
          local_308 = (undefined8 *)auStack_228._8_8_;
          local_318 = (undefined (*) [16])local_230;
          pcStack_310 = (code *)auStack_228._0_8_;
          local_300 = CONCAT44(local_300._4_4_,1);
          local_368 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9b3314f0e2696c29E(&local_318);
          local_360 = &
                      PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7398abc395ee8257E_00202078
          ;
          uVar4 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                            (local_368);
                    /* try { // try from 00160701 to 00160785 has its CatchHandler @ 0016090e */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209ec0)(uVar4);
          auVar7 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209ec8)();
          auStack_228._0_8_ =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3c47c1ce865d8231E;
          auStack_228._8_8_ = &local_368;
          local_218 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9d2dcefa87161161E
          ;
          local_318 = (undefined (*) [16])&DAT_00202008;
          pcStack_310 = (code *)0x3;
          local_2f8 = 0;
          local_300 = 2;
          local_308 = (undefined8 *)local_230;
          local_230 = (undefined  [8])local_378;
          local_378 = auVar7;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209ed0)(&local_318);
                    /* try { // try from 00160790 to 00160794 has its CatchHandler @ 00160950 */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hfabf09c63ef1010cE
                    (local_368,local_360);
        }
      }
      else {
        (*(code *)PTR_memcpy_00209e88)(local_230,local_118,0xe8);
                    /* try { // try from 00160516 to 00160523 has its CatchHandler @ 001608fc */
        cVar3 = (*(code *)PTR__ZN5uu_df11is_included17h2cb576fb785b9846E_00209ed8)
                          (local_230,local_338);
        if (cVar3 == '\0') {
          _ZN4core3ptr50drop_in_place_LT_uu_df__filesystem__Filesystem_GT_17h796a453b85755ea4E
                    (local_230);
        }
        else {
          (*(code *)PTR_memcpy_00209e88)(&local_318,local_230,0xe8);
                    /* try { // try from 0016053d to 00160549 has its CatchHandler @ 001608fa */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5c5f06b26c9d90a4E(&local_358,&local_318);
        }
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -8;
    } while (param_3 != 0);
  }
                    /* try { // try from 0016079a to 001607fb has its CatchHandler @ 001608f8 */
  iVar5 = (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17h4ce6cf124c2ef658E_00209ee8)();
  auVar7._8_8_ = local_118[0]._8_8_;
  auVar7._0_8_ = local_118[0]._0_8_;
  if ((iVar5 == 0) && (local_118[0] = auVar7, local_348 == 0)) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h5e212f3fc67d7e91E
              (local_230,"no file systems processed: No such file or directory: \n",0x19);
    local_308 = (undefined8 *)auStack_228._8_8_;
    local_318 = (undefined (*) [16])local_230;
    pcStack_310 = (code *)auStack_228._0_8_;
    local_300 = CONCAT44(local_300._4_4_,1);
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9b3314f0e2696c29E(&local_318);
    local_378._8_8_ =
         &
         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7398abc395ee8257E_00202078
    ;
    local_378._0_8_ = uVar6;
    uVar4 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                      (uVar6);
                    /* try { // try from 00160814 to 001608a4 has its CatchHandler @ 001608e5 */
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209ec0)(uVar4);
    local_118[0] = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209ec8)();
    local_230 = (undefined  [8])local_118;
    auStack_228._0_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3c47c1ce865d8231E;
    local_218 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9d2dcefa87161161E
    ;
    local_318 = (undefined (*) [16])&DAT_00202008;
    pcStack_310 = (code *)0x3;
    local_2f8 = 0;
    local_300 = 2;
    local_308 = (undefined8 *)local_230;
    auStack_228._8_8_ = local_378;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209ed0)(&local_318);
                    /* try { // try from 001608ae to 001608b2 has its CatchHandler @ 001608f8 */
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hfabf09c63ef1010cE
              (local_378._0_8_,local_378._8_8_);
  }
  *(long *)(local_340 + 4) = local_348;
  *local_340 = (undefined4)local_358;
  local_340[1] = local_358._4_4_;
  local_340[2] = (undefined4)uStack_350;
  local_340[3] = uStack_350._4_4_;
  _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uucore__features__fsext__MountInfo_GT__GT_17h2b7ba84ce5c92a56E
            (&local_330);
  return;
}