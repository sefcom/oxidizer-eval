undefined  [16]
_ZN8uu_touch10touch_file17h545e8affe65c7ac6E
          (undefined8 param_1,undefined8 param_2,uint param_3,undefined **param_4,undefined8 param_5
          ,ulong param_6,undefined8 param_7,undefined4 param_8)

{
  undefined **ppuVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int extraout_EDX;
  char cVar7;
  undefined auVar8 [16];
  code *local_1a8;
  undefined **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  code **local_188;
  undefined8 local_180;
  undefined8 local_178;
  code *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  code *local_148;
  undefined8 local_140;
  undefined8 local_138;
  code *local_130;
  undefined local_128 [16];
  undefined local_118 [8];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  
  param_6 = param_6 & 0xffffffff;
  local_138 = param_5;
  if (param_3 == 0) {
    local_e0 = param_1;
    local_d8 = param_2;
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hc12c33350263b863E
              (local_118,&local_e0);
    cVar7 = *(char *)((long)param_4 + 0x31);
    if (cVar7 == '\0') goto LAB_00239f9b;
LAB_00239fdf:
                    /* try { // try from 00239fdf to 00239ff1 has its CatchHandler @ 0023a477 */
    _ZN3std2fs16symlink_metadata17h73fb12f4b49f31d3E(&local_e0,param_1,param_2);
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h443e6c10e45cdc42E
              (local_118,"-",1);
    cVar7 = *(char *)((long)param_4 + 0x31);
    if (cVar7 != '\0') goto LAB_00239fdf;
LAB_00239f9b:
                    /* try { // try from 00239f9b to 00239fad has its CatchHandler @ 0023a477 */
    _ZN3std2fs8metadata17hb661f9d8212cddd7E(&local_e0,param_1,param_2);
  }
  uVar5 = local_d8;
  if ((int)local_e0 != 2) {
LAB_0023a24e:
                    /* try { // try from 0023a25a to 0023a281 has its CatchHandler @ 0023a475 */
    auVar8 = _ZN8uu_touch12update_times17h1071b1d93aae9977E
                       (param_1,param_2,param_3 & 0xff,cVar7,*(undefined *)((long)param_4 + 0x33),
                        local_138,param_6,param_7,param_8);
    goto LAB_0023a288;
  }
  local_100 = param_6;
  cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_d8);
  if (cVar2 != '\0') {
                    /* try { // try from 0023a02c to 0023a033 has its CatchHandler @ 0023a473 */
    uVar5 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h68349bb2678f12e3E
                      (uVar5,CONCAT44(uStack_10c,local_110),CONCAT44(uStack_104,uStack_108));
    auVar8._8_8_ = &
                   PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h8c2532bd7c9ab47cE_003795c8
    ;
    auVar8._0_8_ = uVar5;
    goto LAB_0023a288;
  }
  local_140 = uVar5;
  if (*(char *)(param_4 + 6) == '\0') {
    if (cVar7 == '\0') {
      _ZN3std2fs4File6create17hd43d6cc5f8658b35E(&local_1a8,param_1,param_2);
      param_6 = local_100;
      ppuVar1 = local_1a0;
      if ((int)local_1a8 != 1) {
                    /* try { // try from 0023a223 to 0023a22a has its CatchHandler @ 0023a45e */
        _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h8e368889d6e3af53E
                  (&local_1a8);
        _ZN57__LT_uu_touch__Source_u20_as_u20_core__cmp__PartialEq_GT_2eq17h5fb9aae744f6919aE
                  (param_4[3]);
                    /* try { // try from 0023a244 to 0023a24d has its CatchHandler @ 0023a45c */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h082d50199f5b7db7E(local_140);
        goto LAB_0023a24e;
      }
      local_138 = CONCAT44(local_138._4_4_,1);
                    /* try { // try from 0023a154 to 0023a212 has its CatchHandler @ 0023a42d */
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_003aa308)
                (&local_198,param_1,param_2);
      uStack_158 = (code *)((long)local_188 + (long)uStack_190);
      local_160 = uStack_190;
      bVar3 = _ZN4core3str11validations23next_code_point_reverse17hdcaf59bd311a5e74E(&local_160);
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h07fb0c98f54110e9E
                (&local_198);
      if (((extraout_EDX != 0x110000 & bVar3) == 1) && (extraout_EDX == 0x2f)) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h443e6c10e45cdc42E
                  (&local_160,"No such file or directory",0x19);
        local_188 = uStack_150;
        local_198 = (undefined **)local_160;
        uStack_190 = uStack_158;
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbf084ac93ba6f116E(&local_198);
        uVar5 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_003aa310)
                          (0x28,uVar5,
                           &
                           PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17hddc1664fb157b2ebE_00379d98
                          );
        pcVar6 = (code *)_ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17ha0ee1aa1888405cdE
                                   (uVar5,CONCAT44(uStack_10c,local_110),
                                    CONCAT44(uStack_104,uStack_108));
                    /* try { // try from 0023a213 to 0023a21d has its CatchHandler @ 0023a417 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h082d50199f5b7db7E(ppuVar1);
      }
      else {
                    /* try { // try from 0023a352 to 0023a35f has its CatchHandler @ 0023a428 */
        pcVar6 = (code *)_ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h4cebff401ee48b9eE
                                   (ppuVar1,param_1,param_2);
        if (*(char *)((long)param_4 + 0x32) == '\0') {
          local_130 = pcVar6;
                    /* try { // try from 0023a373 to 0023a3fe has its CatchHandler @ 0023a419 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_003aa318)(1);
          local_128 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_003a9f78)();
          local_160 = (code *)local_128;
          uStack_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h18af96482be5ae0fE;
          uStack_150 = &local_130;
          local_148 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb8dab0358c2b5eefE
          ;
          local_198 = (undefined **)&DAT_00379d48;
          uStack_190 = (code *)0x3;
          local_178 = 0;
          local_188 = &local_160;
          local_180 = 2;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_003a9f80)(&local_198);
                    /* try { // try from 0023a404 to 0023a408 has its CatchHandler @ 0023a428 */
          _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17he5ad635d7f3c6690E
                    (local_130);
          pcVar6 = (code *)0x0;
        }
      }
      param_4 = &
                PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h8c2532bd7c9ab47cE_003795c8
      ;
    }
    else {
      local_160 = (code *)0x0;
      uStack_158 = (code *)CONCAT44(uStack_10c,local_110);
      uStack_150 = (code **)CONCAT44(uStack_104,uStack_108);
      local_148 = (code *)CONCAT71(local_148._1_7_,1);
      local_128._8_8_ =
           PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_003aa300
      ;
      local_198 = &PTR_s_setting_times_of___No_such_file_o_00379d28;
      uStack_190 = (code *)0x2;
      local_178 = 0;
      local_180 = 1;
                    /* try { // try from 0023a0d1 to 0023a136 has its CatchHandler @ 0023a45e */
      local_188 = (code **)local_128;
      local_128._0_8_ = &local_160;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h42b45f6f6f73b099E(&local_f8,&local_198);
      local_180 = CONCAT44(local_180._4_4_,1);
      local_198 = (undefined **)CONCAT44(uStack_f4,local_f8);
      uStack_190 = (code *)CONCAT44(uStack_ec,uStack_f0);
      local_188 = local_e8;
      pcVar6 = (code *)_ZN5alloc5boxed12Box_LT_T_GT_3new17hd8fce8cb627455b5E(&local_198);
      if (*(char *)((long)param_4 + 0x32) == '\0') {
        local_1a0 = &
                    PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h05d1e2d078ddfe04E_00379e10
        ;
        local_1a8 = pcVar6;
        uVar4 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                          (pcVar6);
                    /* try { // try from 0023a2c5 to 0023a33e has its CatchHandler @ 0023a449 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_003aa318)(uVar4);
        local_128 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_003a9f78)();
        uStack_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h18af96482be5ae0fE;
        local_148 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hebd9cee9c3e78f58E
        ;
        local_198 = (undefined **)&DAT_00379d48;
        uStack_190 = (code *)0x3;
        local_178 = 0;
        local_180 = 2;
        local_188 = &local_160;
        local_160 = (code *)local_128;
        uStack_150 = &local_1a8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_003a9f80)(&local_198);
                    /* try { // try from 0023a348 to 0023a34c has its CatchHandler @ 0023a45e */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hfd5022d5ded5c4d2E
                  (local_1a8,local_1a0);
        goto LAB_0023a04c;
      }
      param_4 = &
                PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h05d1e2d078ddfe04E_00379e10
      ;
    }
  }
  else {
LAB_0023a04c:
    pcVar6 = (code *)0x0;
  }
                    /* try { // try from 0023a04e to 0023a057 has its CatchHandler @ 0023a45c */
  auVar8._8_8_ = param_4;
  auVar8._0_8_ = pcVar6;
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h082d50199f5b7db7E(local_140);
LAB_0023a288:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc61d8ef8308f20d8E(local_118);
  return auVar8;
}