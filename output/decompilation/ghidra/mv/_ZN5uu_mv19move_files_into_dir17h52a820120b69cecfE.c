undefined  [16]
_ZN5uu_mv19move_files_into_dir17h52a820120b69cecfE
          (long param_1,ulong param_2,code *param_3,undefined *param_4,long param_5)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 ***pppuVar10;
  undefined auVar11 [16];
  undefined local_260 [16];
  undefined local_250 [16];
  undefined ***local_240;
  undefined *local_238;
  undefined8 **local_230;
  undefined local_228 [16];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined **local_210;
  long local_208;
  code *local_200;
  undefined *local_1f8;
  uint local_1f0;
  uint local_1ec;
  undefined **local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined *local_1d8;
  undefined **local_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  code *local_1b0;
  undefined8 local_1a8;
  undefined **local_138;
  undefined auStack_130 [16];
  undefined ***local_120;
  undefined8 local_118;
  long local_88;
  long local_80;
  undefined local_78 [16];
  undefined8 local_68;
  undefined local_60 [48];
  
  local_208 = param_5;
  local_80 = param_1;
  auVar11 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h74a0374ad3b4d319E();
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17hb8b43496c1fc3f5bE
            (local_60,param_2,auVar11._0_8_,auVar11._8_8_);
  local_200 = param_3;
  local_1f8 = param_4;
                    /* try { // try from 0018bea2 to 0018bed7 has its CatchHandler @ 0018c83c */
  cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024a718)(param_3,param_4);
  if (cVar4 == '\0') {
    local_1c8 = (undefined **)&DAT_00000001;
    uStack_1c0 = local_200;
    local_1b8 = local_1f8;
    local_1b0 = (code *)CONCAT71(local_1b0._1_7_,1);
                    /* try { // try from 0018bfb7 to 0018bffb has its CatchHandler @ 0018c83c */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
              (local_250,&local_1c8);
    local_120 = local_240;
    auStack_130._0_8_ = local_250._0_8_;
    auStack_130._8_8_ = local_250._8_8_;
    local_138 = (undefined **)0x6;
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1fc079de2e7d2ae0E(&local_138);
    goto LAB_0018c7ba;
  }
  if (*(char *)(local_208 + 0x33) == '\0') {
    local_230 = (undefined8 ***)0x0;
LAB_0018c00d:
    local_1e8 = (undefined **)0x0;
    if (param_2 != 0) goto LAB_0018c022;
  }
  else {
    local_230 = (undefined8 **)
                (*(code *)PTR__ZN9indicatif5multi13MultiProgress3new17hc304bb66ea04ff14E_0024ab68)()
    ;
    if (param_2 < 2) goto LAB_0018c00d;
                    /* try { // try from 0018bee7 to 0018bef4 has its CatchHandler @ 0018c834 */
    (*(code *)PTR__ZN9indicatif12progress_bar11ProgressBar3new17h418645bcba389941E_0024ab70)
              (local_250,param_2);
                    /* try { // try from 0018bef5 to 0018bf2a has its CatchHandler @ 0018c7fa */
    (*(code *)PTR__ZN9indicatif5style13ProgressStyle13with_template17h894553d49f3431ccE_0024ab78)
              (&local_138,"moving {msg} {wide_bar} {pos}/{len}not replacing ?",0x23);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5857c2b3993b5cd1E
              (&local_1c8,&local_138,&PTR_s_src_uu_mv_src_mv_rs_00241988);
                    /* try { // try from 0018bf2b to 0018bf45 has its CatchHandler @ 0018c7e3 */
    (*(code *)PTR__ZN9indicatif12progress_bar11ProgressBar10with_style17hca9219836070d110E_0024ab80)
              (&local_138,local_250,&local_1c8);
                    /* try { // try from 0018bf46 to 0018bf60 has its CatchHandler @ 0018c834 */
    (*(code *)PTR__ZN9indicatif5multi13MultiProgress3add17h73b460dac8bde2c8E_0024ab88)
              (&local_1c8,&local_230,&local_138);
    local_1e8 = local_1c8;
    uStack_1e0 = (undefined4)uStack_1c0;
    uStack_1dc = uStack_1c0._4_4_;
    local_1d8 = local_1b8;
LAB_0018c022:
    bVar1 = *(byte *)(local_208 + 0x36);
    local_88 = param_2 * 0x18;
    lVar9 = 0;
    local_1ec = (uint)bVar1;
    local_1f0 = (uint)*(byte *)(local_208 + 0x30);
    do {
      while( true ) {
        puVar8 = *(undefined **)(local_80 + 8 + lVar9);
        uVar6 = *(undefined8 *)(local_80 + 0x10 + lVar9);
                    /* try { // try from 0018c09f to 0018c0f7 has its CatchHandler @ 0018c8b6 */
        _ZN3std2fs8metadata17h12bb7891128f5212E(&local_138,puVar8,uVar6);
        ppuVar2 = local_138;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6bf03d231ff2ee2dE
                  (&local_138);
        if ((int)ppuVar2 != 2) break;
        local_1c8 = (undefined **)0x1;
        local_1b0 = (code *)CONCAT71(local_1b0._1_7_,1);
        uStack_1c0 = (code *)puVar8;
        local_1b8 = (undefined *)uVar6;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (local_250,&local_1c8);
        local_120 = local_240;
        local_138 = (undefined **)0x0;
        auStack_130 = local_250;
                    /* try { // try from 0018c11d to 0018c1aa has its CatchHandler @ 0018c8a4 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ab38)(1);
        auVar11 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
        local_250._0_8_ = local_228;
        local_250._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
        local_238 = 
        PTR__ZN60__LT_uu_mv__error__MvError_u20_as_u20_core__fmt__Display_GT_3fmt17hd5391f0b6b6b4353E_0024a7a8
        ;
        local_1c8 = (undefined **)&DAT_002416a0;
        uStack_1c0 = (code *)0x3;
        local_1a8 = 0;
        local_1b8 = local_250;
        local_1b0 = (code *)0x2;
        local_240 = &local_138;
        local_228 = auVar11;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_1c8);
LAB_0018c070:
        _ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hc3655abd5fe82822E(&local_138);
        lVar9 = lVar9 + 0x18;
        if (local_88 == lVar9) goto LAB_0018c7a1;
      }
      if (local_1e8 != (undefined **)0x0) {
                    /* try { // try from 0018c1bb to 0018c1c9 has its CatchHandler @ 0018c8b6 */
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0024a9a0)
                  (&local_138,puVar8,uVar6);
                    /* try { // try from 0018c1da to 0018c1f4 has its CatchHandler @ 0018c87e */
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h721788692edddc31E
                  (&local_1c8,auStack_130._0_8_,auStack_130._8_8_);
        _ZN9indicatif12progress_bar11ProgressBar11set_message17h07e47f81a78777d2E
                  (local_1e8,&local_1c8);
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h0ec8a001aa281541E
                  (&local_138);
      }
                    /* try { // try from 0018c1fd to 0018c22e has its CatchHandler @ 0018c8b6 */
      auVar11 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_0024a5f0)
                          (puVar8,uVar6);
      if (auVar11._0_8_ == 0) {
        local_1c8 = (undefined **)0x1;
        local_1b0 = (code *)CONCAT71(local_1b0._1_7_,1);
                    /* try { // try from 0018c36f to 0018c37b has its CatchHandler @ 0018c8b6 */
        uStack_1c0 = (code *)puVar8;
        local_1b8 = (undefined *)uVar6;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (local_250,&local_1c8);
        local_120 = local_240;
        local_138 = (undefined **)0x0;
        auStack_130 = local_250;
                    /* try { // try from 0018c3a1 to 0018c42e has its CatchHandler @ 0018c87c */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ab38)(1);
        auVar11 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
        local_250._0_8_ = local_260;
        local_250._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
        local_238 = 
        PTR__ZN60__LT_uu_mv__error__MvError_u20_as_u20_core__fmt__Display_GT_3fmt17hd5391f0b6b6b4353E_0024a7a8
        ;
        local_1c8 = (undefined **)&DAT_002416a0;
        uStack_1c0 = (code *)0x3;
        local_1a8 = 0;
        local_1b8 = local_250;
        local_1b0 = (code *)0x2;
        local_240 = &local_138;
        local_260 = auVar11;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_1c8);
        goto LAB_0018c070;
      }
      _ZN3std4path4Path4join17h2b3f1fa38f5fea2aE
                (local_228,local_200,local_1f8,auVar11._0_8_,auVar11._8_8_);
                    /* try { // try from 0018c22f to 0018c289 has its CatchHandler @ 0018c890 */
      lVar7 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h845c6ea64d3adcbcE
                        (local_60,local_228);
      if (lVar7 == 0 || bVar1 == 2) {
        auVar11 = _ZN5uu_mv20assert_not_same_file17hb2a62158ed5fb73dE
                            (puVar8,uVar6,local_200,local_1f8,1,local_1f0,local_1ec);
        if (auVar11._0_8_ == 0) {
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h67f2bf7536cb2259E
                    (0,auVar11._8_8_);
          pppuVar10 = (undefined8 ***)local_230;
          if ((undefined8 ***)local_230 != (undefined8 ***)0x0) {
            pppuVar10 = &local_230;
          }
          local_210 = (undefined **)
                      _ZN5uu_mv6rename17h274fbdeb4e433295E
                                (puVar8,uVar6,local_228._8_8_,CONCAT44(uStack_214,uStack_218),
                                 local_208,pppuVar10);
          if (local_210 != (undefined **)0x0) {
                    /* try { // try from 0018c5fb to 0018c607 has its CatchHandler @ 0018c81b */
            _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hce76bd1bb4908539E
                      (&local_138,&local_210);
            uVar3 = auStack_130._8_8_;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8db761034a9103d6E(&local_138)
            ;
            if (uVar3 == 0) {
              local_138 = local_210;
                    /* try { // try from 0018c65e to 0018c668 has its CatchHandler @ 0018c7e5 */
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ab38)(1);
                    /* try { // try from 0018c669 to 0018c673 has its CatchHandler @ 0018c832 */
              _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96abb429d2198cc4E
                        (&local_138);
            }
            else {
                    /* try { // try from 0018c62c to 0018c64b has its CatchHandler @ 0018c832 */
              puVar8 = (undefined *)
                       _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h9288aab652e89fb1E
                                 (local_210,puVar8,uVar6,local_228._8_8_,
                                  CONCAT44(uStack_214,uStack_218));
              if ((undefined8 ***)local_230 == (undefined8 ***)0x0) {
                local_260._0_8_ = puVar8;
                    /* try { // try from 0018c67e to 0018c714 has its CatchHandler @ 0018c80c */
                (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ab38)(1);
                auVar11 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
                local_1c8 = (undefined **)local_250;
                uStack_1c0 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
                local_1b8 = local_260;
                local_1b0 = 
                _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hba62e9a38ac19092E
                ;
                local_138 = (undefined **)&DAT_002416a0;
                auStack_130._0_8_ = 3;
                local_118 = 0;
                local_120 = (undefined ***)0x2;
                auStack_130._8_8_ = &local_1c8;
                local_250 = auVar11;
                (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_138);
                    /* try { // try from 0018c71a to 0018c71e has its CatchHandler @ 0018c832 */
                _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h3366d4c01e86c110E
                          (local_260._0_8_);
              }
              else {
                _ZN9indicatif5multi13MultiProgress7suspend17h799f6401970c1a0fE(local_230,puVar8);
              }
            }
          }
          if (local_1e8 != (undefined **)0x0) {
                    /* try { // try from 0018c72a to 0018c77e has its CatchHandler @ 0018c890 */
            (*(code *)PTR__ZN9indicatif12progress_bar11ProgressBar3inc17h6821cd6efd4a2245E_0024ab90)
                      (&local_1e8,1);
          }
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h721788692edddc31E
                    (&local_138,local_228._8_8_,CONCAT44(uStack_214,uStack_218));
          local_1b8 = (undefined *)auStack_130._8_8_;
          local_1c8 = local_138;
          uStack_1c0 = (code *)auStack_130._0_8_;
          _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17he7e3cb341437ecbbE
                    (local_60,&local_1c8);
        }
        else {
                    /* try { // try from 0018c29d to 0018c336 has its CatchHandler @ 0018c854 */
          local_260 = auVar11;
          uVar5 = (**(code **)(auVar11._8_8_ + 0x58))(auVar11._0_8_);
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ab38)(uVar5);
          auVar11 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
          local_1c8 = (undefined **)local_250;
          uStack_1c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
          local_1b8 = local_260;
          local_1b0 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4dc8bd895e28ea5eE
          ;
          local_138 = (undefined **)&DAT_002416a0;
          auStack_130._0_8_ = 3;
          local_118 = 0;
          local_120 = (undefined ***)0x2;
          auStack_130._8_8_ = &local_1c8;
          local_250 = auVar11;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_138);
                    /* try { // try from 0018c341 to 0018c345 has its CatchHandler @ 0018c890 */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h72819e63495e4e03E
                    (local_260._0_8_,local_260._8_8_);
        }
      }
      else {
        local_260._0_8_ = local_228._8_8_;
        local_1c8 = (undefined **)local_260;
        uStack_1c0 = (code *)
                     PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0024a908
        ;
        local_1b8 = local_250;
        local_1b0 = (code *)
                    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0024a908
        ;
        local_138 = &PTR_s_will_not_overwrite_just_created___00241958;
        auStack_130._0_8_ = 3;
        local_118 = 0;
        local_120 = (undefined ***)0x2;
                    /* try { // try from 0018c4b4 to 0018c4f6 has its CatchHandler @ 0018c890 */
        local_250._0_8_ = puVar8;
        local_250._8_8_ = uVar6;
        auStack_130._8_8_ = &local_1c8;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h26cd0638306e3785E(local_78,&local_138);
        local_120 = (undefined ***)CONCAT44(local_120._4_4_,1);
        auStack_130._8_8_ = local_68;
        local_260._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbfa620bc4db9cfd6E(&local_138);
        local_260._8_8_ =
             &
             PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h1436c598fc1cfc46E_00241810
        ;
        uVar5 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17h8679b4fbf35c6f91E
                          (local_260._0_8_);
                    /* try { // try from 0018c510 to 0018c5a3 has its CatchHandler @ 0018c868 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ab38)(uVar5);
        local_250 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
        local_1c8 = (undefined **)local_250;
        uStack_1c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
        local_1b8 = local_260;
        local_1b0 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4dc8bd895e28ea5eE
        ;
        local_138 = (undefined **)&DAT_002416a0;
        auStack_130._0_8_ = 3;
        local_118 = 0;
        local_120 = (undefined ***)0x2;
        auStack_130._8_8_ = &local_1c8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_138);
                    /* try { // try from 0018c5ae to 0018c5ec has its CatchHandler @ 0018c890 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h72819e63495e4e03E
                  (local_260._0_8_,local_260._8_8_);
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E
                (local_228._0_8_,local_228._8_8_);
      lVar9 = lVar9 + 0x18;
    } while (local_88 != lVar9);
  }
LAB_0018c7a1:
                    /* try { // try from 0018c7a1 to 0018c7ad has its CatchHandler @ 0018c834 */
  _ZN4core3ptr85drop_in_place_LT_core__option__Option_LT_indicatif__progress_bar__ProgressBar_GT__GT_17h1e5753e0444693daE
            (&local_1e8);
                    /* try { // try from 0018c7ae to 0018c7b7 has its CatchHandler @ 0018c83c */
  _ZN4core3ptr80drop_in_place_LT_core__option__Option_LT_indicatif__multi__MultiProgress_GT__GT_17h57497905bd7a541aE
            (&local_230);
  uVar6 = 0;
LAB_0018c7ba:
  _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h08b3702a79272395E
            (local_60);
  auVar11._8_8_ =
       &PTR__ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hc3655abd5fe82822E_002416f0;
  auVar11._0_8_ = uVar6;
  return auVar11;
}