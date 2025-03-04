undefined  [16]
_ZN8uu_touch10touch_file17h877dc0441f137307E
          (undefined8 param_1,undefined8 param_2,uint param_3,undefined **param_4,undefined8 param_5
          ,ulong param_6,undefined8 param_7,undefined4 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int extraout_EDX;
  undefined auVar7 [16];
  undefined8 local_1a8;
  undefined **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_160;
  undefined8 local_158;
  undefined local_150 [16];
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined local_120 [8];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  
  param_6 = param_6 & 0xffffffff;
  local_100 = param_5;
  if (param_3 == 0) {
    local_e0 = param_1;
    local_d8 = param_2;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h7b6c1f916f50a915E
              (local_120,&local_e0);
  }
  else {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he7405723912f7c0bE
              (local_120,&DAT_0017527f,1);
  }
  cVar1 = *(char *)((long)param_4 + 0x31);
  if (cVar1 == '\0') {
    _ZN3std2fs8metadata17h73b841bac6708bdfE(&local_e0,param_1,param_2);
  }
  else {
                    /* try { // try from 002c2b05 to 002c2b2c has its CatchHandler @ 002c2f51 */
    _ZN3std2fs16symlink_metadata17ha4686baccc39e49aE(&local_e0,param_1,param_2);
  }
  uVar6 = local_d8;
  if ((int)local_e0 != 2) {
LAB_002c2de3:
                    /* try { // try from 002c2def to 002c2e19 has its CatchHandler @ 002c2f4f */
    auVar7 = _ZN8uu_touch12update_times17h392cecc13adcf2b7E
                       (param_1,param_2,param_3 & 0xff,cVar1,*(undefined *)((long)param_4 + 0x33),
                        local_100,param_6,param_7,param_8);
    goto LAB_002c2e20;
  }
  local_108 = param_6;
  cVar3 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_d8);
  if (cVar3 != '\0') {
                    /* try { // try from 002c2b57 to 002c2b66 has its CatchHandler @ 002c2f4d */
    uVar6 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h8e02b6420ed2dfd1E
                      (uVar6,local_120);
    auVar7._8_8_ = &
                   PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h99d1eef866ed832bE_00410dd0
    ;
    auVar7._0_8_ = uVar6;
    goto LAB_002c2e20;
  }
  local_160 = uVar6;
  if (*(char *)(param_4 + 6) == '\0') {
    if (cVar1 == '\0') {
      _ZN3std2fs4File6create17h17c7edca8c2f4adeE(&local_1a8,param_1,param_2);
      param_6 = local_108;
      ppuVar2 = local_1a0;
      if ((int)local_1a8 == 0) {
        _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h4e160d05a3d73f48E
                  (&local_1a8);
        cVar3 = _ZN57__LT_uu_touch__Source_u20_as_u20_core__cmp__PartialEq_GT_2eq17h078dd8660d87ce4cE
                          (param_4[3]);
        if ((cVar3 == '\0') || (*param_4 != (undefined *)0x8000000000000000)) {
                    /* try { // try from 002c2dd9 to 002c2de2 has its CatchHandler @ 002c2f4b */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h1df6aa363d0c4337E(local_160);
          goto LAB_002c2de3;
        }
        goto LAB_002c2b7f;
      }
                    /* try { // try from 002c2c7b to 002c2cfe has its CatchHandler @ 002c2f1c */
      _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E
                (&local_198,param_1,param_2);
      local_138 = (code *)((long)local_188 + (long)uStack_190);
      local_140 = uStack_190;
      iVar4 = _ZN4core3str11validations23next_code_point_reverse17h49d445a14546f521E(&local_140);
      if ((iVar4 == 0) || (extraout_EDX == 0x110000)) {
                    /* try { // try from 002c2e45 to 002c2e4e has its CatchHandler @ 002c2f1c */
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha48c95cb1b2b0ecdE
                  (&local_198);
LAB_002c2e4f:
                    /* try { // try from 002c2e4f to 002c2e5c has its CatchHandler @ 002c2f1a */
        uVar6 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h0cde622ef2849830E
                          (ppuVar2,param_1,param_2);
        if (*(char *)((long)param_4 + 0x32) == '\0') {
          local_158 = uVar6;
                    /* try { // try from 002c2e70 to 002c2ef0 has its CatchHandler @ 002c2f0b */
          _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
          local_150 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_140 = (undefined8 *)local_150;
          local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h802749042f990904E;
          uStack_130 = &local_158;
          local_128 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h576a242cd5c5fa7bE
          ;
          local_198 = (undefined **)&DAT_00410d68;
          uStack_190 = (undefined8 *)0x3;
          local_178 = 0;
          local_180 = 2;
          local_188 = &local_140;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_198);
                    /* try { // try from 002c2ef6 to 002c2efa has its CatchHandler @ 002c2f1a */
          _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h5ee190ea3c79983bE
                    (local_158);
          uVar6 = 0;
        }
      }
      else {
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha48c95cb1b2b0ecdE
                  (&local_198);
        if (extraout_EDX != 0x2f) goto LAB_002c2e4f;
        uVar6 = _ZN3std2io5error5Error3new17hffe4f6be3d139c83E(0x27,&DAT_001752af,0x19);
        uVar6 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h65951a50c2dce01bE
                          (uVar6,local_120);
                    /* try { // try from 002c2cff to 002c2d09 has its CatchHandler @ 002c2f09 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h1df6aa363d0c4337E(ppuVar2);
      }
      param_4 = &
                PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h99d1eef866ed832bE_00410dd0
      ;
    }
    else {
      local_140 = (undefined8 *)0x0;
      local_138 = (code *)CONCAT44(uStack_114,local_118);
      uStack_130 = (undefined8 *)CONCAT44(uStack_10c,uStack_110);
      local_128 = (code *)CONCAT71(local_128._1_7_,1);
      local_150._8_8_ =
           _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_198 = &PTR_DAT_00410d48;
      uStack_190 = (undefined8 *)0x2;
      local_178 = 0;
      local_180 = 1;
                    /* try { // try from 002c2bfe to 002c2c63 has its CatchHandler @ 002c2f3c */
      local_188 = (undefined8 **)local_150;
      local_150._0_8_ = &local_140;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hfcce5e0c4efe3dfbE(&local_f8,&local_198);
      local_180 = CONCAT44(local_180._4_4_,1);
      local_198 = (undefined **)CONCAT44(uStack_f4,local_f8);
      uStack_190 = (undefined8 *)CONCAT44(uStack_ec,uStack_f0);
      local_188 = local_e8;
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6ec029cbb0371e9dE(&local_198);
      if (*(char *)((long)param_4 + 0x32) == '\0') {
        local_1a0 = &
                    PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h2a00f7fb509639cfE_00410e78
        ;
        local_1a8 = uVar6;
        uVar5 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                          (uVar6);
                    /* try { // try from 002c2d27 to 002c2d9d has its CatchHandler @ 002c2f29 */
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar5);
        local_150 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h802749042f990904E;
        local_128 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hbcad17bef5b674a6E
        ;
        local_198 = (undefined **)&DAT_00410d68;
        uStack_190 = (undefined8 *)0x3;
        local_178 = 0;
        local_180 = 2;
        local_188 = &local_140;
        local_140 = (undefined8 *)local_150;
        uStack_130 = &local_1a8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_198);
                    /* try { // try from 002c2da7 to 002c2db8 has its CatchHandler @ 002c2f3c */
        _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h2858b8dcb4cc330fE
                  (local_1a8,local_1a0);
        goto LAB_002c2b7f;
      }
      param_4 = &
                PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h2a00f7fb509639cfE_00410e78
      ;
    }
  }
  else {
LAB_002c2b7f:
    uVar6 = 0;
  }
                    /* try { // try from 002c2b81 to 002c2b8a has its CatchHandler @ 002c2f4b */
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = uVar6;
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h1df6aa363d0c4337E(local_160);
LAB_002c2e20:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb41aa8b20f891843E(local_120);
  return auVar7;
}