long * _ZN5uu_cp4copy17h5586f24b20d7299dE
                 (long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long param_6)

{
  char cVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined auVar12 [16];
  undefined local_319;
  undefined8 ******local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  long *local_2f8;
  ulong local_2f0;
  undefined8 ******local_2e8;
  undefined8 ******ppppppuStack_2e0;
  undefined8 ******local_2d8;
  code *local_2d0;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 ******local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 ******local_1d8;
  long local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  long local_1b0;
  long local_1a8;
  undefined local_1a0 [16];
  undefined8 ******ppppppuStack_190;
  code *pcStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_319 = _ZN5uu_cp10TargetType9determine17h09744ae410e88efcE(param_3,param_4,param_5);
  local_2f0 = CONCAT71(local_2f0._1_7_,local_319);
  local_2c0 = param_4;
  local_2b8 = param_5;
  _ZN5uu_cp18verify_target_type17h7b1c78bb10dff0f5E(&local_298,param_4,param_5,&local_319);
  if ((undefined8 *******)local_298 != (undefined8 *******)0xd) {
    param_1[7] = CONCAT44(uStack_25c,uStack_260);
    param_1[5] = CONCAT44(uStack_26c,uStack_270);
    param_1[6] = CONCAT44(uStack_264,local_268);
    param_1[3] = (long)uStack_280;
    param_1[4] = local_278;
    param_1[1] = (long)uStack_290;
    param_1[2] = (long)local_288;
    *param_1 = (long)local_298;
    return param_1;
  }
  _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17h886da043dfb4063dE(&local_298);
  auVar12 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hddedd585ff7aa4c1E(&local_298);
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17hf9e3a8b2e0b29c10E
            (&local_298,param_3,auVar12._0_8_,auVar12._8_8_);
  local_c8 = (undefined4)local_278;
  uStack_c4 = local_278._4_4_;
  uStack_c0 = uStack_270;
  uStack_bc = uStack_26c;
  local_d8 = (undefined4)local_288;
  uStack_d4 = local_288._4_4_;
  uStack_d0 = (undefined4)uStack_280;
  uStack_cc = uStack_280._4_4_;
  local_e8 = (int)local_298;
  uStack_e4 = local_298._4_4_;
  uStack_e0 = (undefined4)uStack_290;
  uStack_dc = uStack_290._4_4_;
                    /* try { // try from 002032eb to 002032f7 has its CatchHandler @ 00203cff */
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17hb9c79e3835ee1500E
            (&local_298);
  local_98 = (undefined4)local_278;
  uStack_94 = local_278._4_4_;
  uStack_90 = uStack_270;
  uStack_8c = uStack_26c;
  local_a8 = (undefined4)local_288;
  uStack_a4 = local_288._4_4_;
  uStack_a0 = (undefined4)uStack_280;
  uStack_9c = uStack_280._4_4_;
  local_b8 = (int)local_298;
  uStack_b4 = local_298._4_4_;
  uStack_b0 = (undefined4)uStack_290;
  uStack_ac = uStack_290._4_4_;
                    /* try { // try from 00203328 to 00203357 has its CatchHandler @ 00203d14 */
  _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17h886da043dfb4063dE(&local_298);
  auVar12 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hddedd585ff7aa4c1E(&local_298);
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17h07f3e8be27af1af7E
            (&local_298,param_3,auVar12._0_8_,auVar12._8_8_);
  local_68 = (undefined4)local_278;
  uStack_64 = local_278._4_4_;
  uStack_60 = uStack_270;
  uStack_5c = uStack_26c;
  local_78 = (undefined4)local_288;
  uStack_74 = local_288._4_4_;
  uStack_70 = (undefined4)uStack_280;
  uStack_6c = uStack_280._4_4_;
  local_88 = (int)local_298;
  uStack_84 = local_298._4_4_;
  uStack_80 = (undefined4)uStack_290;
  uStack_7c = uStack_290._4_4_;
                    /* try { // try from 00203388 to 002033b7 has its CatchHandler @ 00203d0c */
  _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17h886da043dfb4063dE(&local_298);
  auVar12 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hddedd585ff7aa4c1E(&local_298);
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17hf9e3a8b2e0b29c10E
            (&local_298,param_3,auVar12._0_8_,auVar12._8_8_);
  local_f8 = (undefined4)local_278;
  uStack_f4 = local_278._4_4_;
  uStack_f0 = uStack_270;
  uStack_ec = uStack_26c;
  local_108 = (undefined4)local_288;
  uStack_104 = local_288._4_4_;
  uStack_100 = (undefined4)uStack_280;
  uStack_fc = uStack_280._4_4_;
  local_118 = (int)local_298;
  uStack_114 = local_298._4_4_;
  uStack_110 = (undefined4)uStack_290;
  uStack_10c = uStack_290._4_4_;
  if (*(char *)(param_6 + 0x49) == '\0') {
    local_1e8 = (undefined8 *******)0x0;
  }
  else {
                    /* try { // try from 002033f6 to 0020346f has its CatchHandler @ 00203ce2 */
    auVar12 = _ZN5uu_cp10disk_usage17hdb6cf68ba645e675E
                        (param_2,param_3,*(undefined *)(param_6 + 0x46));
    if (auVar12._0_8_ != 0) {
      *param_1 = 2;
      param_1[1] = auVar12._8_8_;
LAB_00203c1e:
                    /* try { // try from 00203c1e to 00203c2a has its CatchHandler @ 00203d0c */
      _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h14a0aeb76ec618deE
                (&local_118);
                    /* try { // try from 00203c2b to 00203c37 has its CatchHandler @ 00203d14 */
      _ZN4core3ptr123drop_in_place_LT_std__collections__hash__map__HashMap_LT_uucore__features__fs__FileInformation_C_std__path__PathBuf_GT__GT_17hdb5bb62842dabe10E
                (&local_88);
                    /* try { // try from 00203c38 to 00203c44 has its CatchHandler @ 00203cff */
      _ZN4core3ptr102drop_in_place_LT_std__collections__hash__set__HashSet_LT_uucore__features__fs__FileInformation_GT__GT_17hc9dd8b4806c91bc9E
                (&local_b8);
      goto LAB_00203c45;
    }
    _ZN9indicatif12progress_bar11ProgressBar3new17h3f65a405722ce42aE(&local_2e8,auVar12._8_8_);
                    /* try { // try from 00203470 to 0020349e has its CatchHandler @ 00203cd0 */
    _ZN9indicatif5style13ProgressStyle13with_template17hadd9cefcdac397a1E
              (&local_298,"{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}",0x40);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h16219874c036777aE(local_1a0,&local_298);
                    /* try { // try from 0020349f to 002034b6 has its CatchHandler @ 00203cb1 */
    _ZN9indicatif12progress_bar11ProgressBar10with_style17hfb345490eb32754bE
              (&local_318,&local_2e8,local_1a0);
                    /* try { // try from 002034b7 to 002034bc has its CatchHandler @ 00203c9f */
    auVar12 = _ZN6uucore9util_name17h60d842bf27b05e82E();
                    /* try { // try from 002034bd to 002034d1 has its CatchHandler @ 00203c9d */
    _ZN9indicatif12progress_bar11ProgressBar12with_message17h08019f690f508299E
              (&local_2b0,&local_318,auVar12._0_8_,auVar12._8_8_);
                    /* try { // try from 002034d2 to 002034dc has its CatchHandler @ 00203c8b */
    _ZN9indicatif12progress_bar11ProgressBar4tick17h5b31c589e9d52cbdE(&local_2b0);
    local_1d8 = local_2a0;
    local_1e8 = (undefined8 *******)CONCAT44(uStack_2ac,local_2b0);
    uStack_1e0 = uStack_2a8;
    uStack_1dc = uStack_2a4;
  }
  local_1a8 = param_2 + param_3 * 0x18;
  local_1b0 = param_2;
  lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0721f68d5f0414eaE
                    (&local_1b0);
  if (lVar7 == 0) {
    lVar7 = 0xd;
    pppppppuVar3 = (undefined8 *******)local_298;
    pppppppuVar4 = local_288;
    local_298 = (undefined **)local_1e8;
    local_288 = (undefined8 *******)local_1d8;
  }
  else {
    cVar1 = *(char *)(param_6 + 0x4c);
    cVar2 = *(char *)(param_6 + 0x4e);
    bVar9 = false;
    bVar10 = false;
    local_2f0 = local_2f0 & 0xff;
    local_1b8 = (ulong)*(byte *)(param_6 + 0x44);
    local_1c0 = (ulong)*(byte *)(param_6 + 0x42);
    local_2f8 = param_1;
    local_1c8 = param_6;
    do {
      pppppppuVar3 = *(undefined8 ********)(lVar7 + 8);
      pppppppuVar4 = *(undefined8 ********)(lVar7 + 0x10);
                    /* try { // try from 00203598 to 002035a8 has its CatchHandler @ 00203d1e */
      _ZN6uucore8features2fs14normalize_path17hf9d1827f61a753a1E
                (&local_2b0,pppppppuVar3,pppppppuVar4);
                    /* try { // try from 002036f0 to 00203871 has its CatchHandler @ 00203d51 */
      if ((cVar1 == '\0') &&
         (lVar8 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h4ae3d79167c533bfE
                            (&local_e8,&local_2b0), lVar8 != 0)) {
        _ZN3std2fs16symlink_metadata17h8589e79b0a107deeE(&local_298,pppppppuVar3,pppppppuVar4);
        if ((int)local_298 == 2) {
          *local_2f8 = 2;
          local_2f8[1] = (long)uStack_290;
          param_1 = local_2f8;
LAB_00203c05:
                    /* try { // try from 00203c07 to 00203c10 has its CatchHandler @ 00203cc8 */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_2b0);
                    /* try { // try from 00203c11 to 00203c1d has its CatchHandler @ 00203ce2 */
          _ZN4core3ptr85drop_in_place_LT_core__option__Option_LT_indicatif__progress_bar__ProgressBar_GT__GT_17h1c11d9db54c24981E
                    (&local_1e8);
          goto LAB_00203c1e;
        }
        bVar11 = (uStack_260 & 0xf000) == 0x4000;
        local_318 = (undefined8 ******)0x11e2c8;
        if (bVar11) {
          local_318 = (undefined8 ******)0x12d0e4;
        }
        uStack_310 = (undefined8 *******)((ulong)bVar11 * 5 + 4);
        local_1a0 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_2e8 = (undefined8 ******)local_1a0;
        ppppppuStack_2e0 =
             (undefined8 ******)
             _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
        local_298 = (undefined **)&DAT_002b5d08;
        uStack_290 = (undefined8 *******)0x2;
        local_278 = 0;
        local_288 = &local_2e8;
        uStack_280 = (code *)0x1;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_298);
        local_1a0._0_8_ = &DAT_00000001;
        pcStack_188 = (code *)CONCAT71(pcStack_188._1_7_,1);
        local_2e8 = &local_318;
        ppppppuStack_2e0 =
             (undefined8 ******)
             _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
        local_2d8 = (undefined8 ******)local_1a0;
        local_2d0 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_298 = &PTR_s_source_002b5d28;
        uStack_290 = (undefined8 *******)0x3;
        local_278 = 0;
        local_288 = &local_2e8;
        uStack_280 = (code *)0x2;
        local_1a0._8_8_ = pppppppuVar3;
        ppppppuStack_190 = pppppppuVar4;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_298);
      }
      else {
                    /* try { // try from 002035b4 to 00203666 has its CatchHandler @ 00203d51 */
        _ZN5uu_cp19construct_dest_path17hfc66a1b24656cf26E
                  (local_1a0,pppppppuVar3,pppppppuVar4,local_2c0,local_2b8,local_2f0,local_1c0,
                   local_1b8);
        if (local_1a0._0_4_ == 0xd) {
          local_308 = pcStack_188;
          local_318 = (undefined8 ******)local_1a0._8_8_;
          uStack_310 = (undefined8 *******)ppppppuStack_190;
        }
        else {
          local_268 = local_170;
          uStack_264 = uStack_16c;
          uStack_260 = uStack_168;
          uStack_25c = uStack_164;
          local_278 = CONCAT44(uStack_17c,local_180);
          uStack_270 = uStack_178;
          uStack_26c = uStack_174;
          local_288 = (undefined8 *******)ppppppuStack_190;
          uStack_280 = pcStack_188;
          local_298 = (undefined **)local_1a0._0_8_;
          uStack_290 = (undefined8 *******)local_1a0._8_8_;
          _ZN5uu_cp4copy28__u7b__u7b_closure_u7d__u7d_17h5a73338177addea2E
                    (&local_318,local_2c0,local_2b8,&local_298);
        }
                    /* try { // try from 00203667 to 002036ea has its CatchHandler @ 00203d56 */
        _ZN3std2fs8metadata17hcf81ab27d993cd47E(&local_298,&local_318);
        if ((int)local_298 != 2) {
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
                    (&local_298);
          _ZN3std2fs16symlink_metadata17h087c360320e6b054E(&local_298,&local_318);
          if ((int)local_298 != 2) {
            if ((uStack_260 & 0xf000) == 0xa000) goto LAB_002036ca;
            goto LAB_002038bb;
          }
LAB_00203b16:
          *local_2f8 = 2;
          local_2f8[1] = (long)uStack_290;
LAB_00203bfb:
                    /* try { // try from 00203bfb to 00203c04 has its CatchHandler @ 00203c86 */
          param_1 = local_2f8;
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_318);
          goto LAB_00203c05;
        }
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
                  (&local_298);
LAB_002036ca:
        _ZN3std2fs8metadata17hcf81ab27d993cd47E(&local_298,lVar7);
        if ((int)local_298 == 2) {
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
                    (&local_298);
        }
        else {
                    /* try { // try from 00203880 to 0020392a has its CatchHandler @ 00203d56 */
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
                    (&local_298);
          _ZN3std2fs16symlink_metadata17h087c360320e6b054E(&local_298,lVar7);
          if ((int)local_298 == 2) goto LAB_00203b16;
          if ((uStack_260 & 0xf000) == 0xa000) goto LAB_002038bb;
        }
        if (cVar2 == '\x01') {
LAB_002038bb:
          lVar7 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h4ae3d79167c533bfE
                            (&local_118,&local_318);
          if ((cVar1 != '\x02') && (lVar7 != 0)) {
            local_40 = (undefined4)uStack_310;
            uStack_3c = uStack_310._4_4_;
            uStack_38 = (undefined4)local_308;
            uStack_34 = local_308._4_4_;
            local_1a0._0_8_ = &local_40;
            local_1a0._8_8_ =
                 _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E
            ;
            ppppppuStack_190 = &local_2e8;
            pcStack_188 = 
            _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
            local_298 = &PTR_s_will_not_overwrite_just_created___002b5d58;
            uStack_290 = (undefined8 *******)0x3;
            local_278 = 0;
            local_288 = (undefined8 *******)local_1a0;
            uStack_280 = (code *)0x2;
                    /* try { // try from 00203bc1 to 00203bd5 has its CatchHandler @ 00203c81 */
            local_2e8 = pppppppuVar3;
            ppppppuStack_2e0 = pppppppuVar4;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_58,&local_298);
            local_2f8[3] = local_48;
            *(undefined4 *)(local_2f8 + 1) = local_58;
            *(undefined4 *)((long)local_2f8 + 0xc) = uStack_54;
            *(undefined4 *)(local_2f8 + 2) = uStack_50;
            *(undefined4 *)((long)local_2f8 + 0x14) = uStack_4c;
            *local_2f8 = 4;
            goto LAB_00203bfb;
          }
        }
        _ZN5uu_cp11copy_source17ha83fca4ba2cc8af7E
                  (local_1a0,&local_1e8,pppppppuVar3,pppppppuVar4,local_2c0,local_2b8,local_2f0,
                   param_6,&local_b8,&local_118,&local_88);
        uVar6 = local_1a0._0_8_;
        if ((undefined8 *******)local_1a0._0_8_ == (undefined8 *******)0xd) {
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h250bb613d8eaf262E
                    (&local_298,&local_318);
          local_2d8 = local_288;
          local_2e8 = (undefined8 ******)local_298;
          ppppppuStack_2e0 = uStack_290;
          _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h718e59b98232a8b0E
                    (&local_118,&local_2e8);
        }
        else {
          local_268 = local_170;
          uStack_264 = uStack_16c;
          uStack_260 = uStack_168;
          uStack_25c = uStack_164;
          local_278 = CONCAT44(uStack_17c,local_180);
          uStack_270 = uStack_178;
          uStack_26c = uStack_174;
          local_288 = (undefined8 *******)ppppppuStack_190;
          uStack_280 = pcStack_188;
          local_298 = (undefined **)local_1a0._0_8_;
          uStack_290 = (undefined8 *******)local_1a0._8_8_;
                    /* try { // try from 0020397d to 00203984 has its CatchHandler @ 00203cea */
          _ZN5uu_cp20show_error_if_needed17h934143ac50374c6eE(&local_298);
          pppppppuVar3 = (undefined8 *******)local_298;
          cVar5 = (char)uStack_290;
                    /* try { // try from 00203999 to 002039fb has its CatchHandler @ 00203d23 */
          _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h771e7f9a0f8a7901E(&local_298);
          if (cVar5 != '\0') {
            bVar9 = true;
          }
          bVar10 = bVar9;
          if ((int)pppppppuVar3 != 8) {
            bVar10 = true;
            bVar9 = true;
          }
        }
                    /* try { // try from 002039ff to 00203a08 has its CatchHandler @ 00203d07 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_318);
        param_6 = local_1c8;
        if (((int)uVar6 == 0xd) && ((int)local_1a0._0_8_ != 0xd)) {
                    /* try { // try from 00203a23 to 00203a2f has its CatchHandler @ 00203d51 */
          _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h771e7f9a0f8a7901E(local_1a0);
        }
      }
      local_288 = (undefined8 *******)local_2a0;
      local_298 = (undefined **)CONCAT44(uStack_2ac,local_2b0);
      uStack_290 = (undefined8 *******)CONCAT44(uStack_2a4,uStack_2a8);
                    /* try { // try from 00203a4d to 00203a5c has its CatchHandler @ 00203d1c */
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h718e59b98232a8b0E
                (&local_e8,&local_298);
      lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0721f68d5f0414eaE
                        (&local_1b0);
    } while (lVar7 != 0);
    lVar7 = (ulong)!bVar10 * 8 + 5;
    param_1 = local_2f8;
    pppppppuVar3 = (undefined8 *******)local_298;
    pppppppuVar4 = local_288;
    local_298 = (undefined **)local_1e8;
    local_288 = (undefined8 *******)local_1d8;
  }
  local_1e8 = (undefined8 *******)local_298;
  local_1d8 = local_288;
  if ((undefined8 *******)local_298 != (undefined8 *******)0x0) {
    uStack_290 = (undefined8 *******)CONCAT44(uStack_1dc,uStack_1e0);
                    /* try { // try from 00203ac9 to 00203ad6 has its CatchHandler @ 00203cb3 */
    _ZN9indicatif12progress_bar11ProgressBar6finish17h204a36c2f269e760E(&local_298);
                    /* try { // try from 00203ada to 00203ae6 has its CatchHandler @ 00203cc8 */
    _ZN4core3ptr57drop_in_place_LT_indicatif__progress_bar__ProgressBar_GT_17h2d075ec2e7438ac9E
              (&local_298);
    pppppppuVar3 = (undefined8 *******)local_298;
    pppppppuVar4 = local_288;
  }
  local_288 = pppppppuVar4;
  local_298 = (undefined **)pppppppuVar3;
  *param_1 = lVar7;
                    /* try { // try from 00203aea to 00203af6 has its CatchHandler @ 00203d0c */
  _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h14a0aeb76ec618deE
            (&local_118);
                    /* try { // try from 00203af7 to 00203b03 has its CatchHandler @ 00203d14 */
  _ZN4core3ptr123drop_in_place_LT_std__collections__hash__map__HashMap_LT_uucore__features__fs__FileInformation_C_std__path__PathBuf_GT__GT_17hdb5bb62842dabe10E
            (&local_88);
                    /* try { // try from 00203b04 to 00203b10 has its CatchHandler @ 00203cff */
  _ZN4core3ptr102drop_in_place_LT_std__collections__hash__set__HashSet_LT_uucore__features__fs__FileInformation_GT__GT_17hc9dd8b4806c91bc9E
            (&local_b8);
LAB_00203c45:
  _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h14a0aeb76ec618deE
            (&local_e8);
  return param_1;
}