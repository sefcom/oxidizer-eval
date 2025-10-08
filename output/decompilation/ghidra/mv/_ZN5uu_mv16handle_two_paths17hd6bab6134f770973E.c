long _ZN5uu_mv16handle_two_paths17hd6bab6134f770973E
               (undefined **param_1,undefined8 **param_2,undefined **param_3,undefined8 **param_4,
               long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined local_190 [16];
  undefined8 **local_180;
  code *local_178;
  long local_170;
  undefined **local_168;
  undefined8 **local_160;
  undefined local_158 [16];
  undefined8 **local_148;
  undefined local_140;
  undefined8 **local_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined *local_118;
  undefined **local_110;
  undefined8 **local_108;
  undefined8 **ppuStack_100;
  undefined8 **local_f8;
  undefined8 *puStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined *local_e0;
  undefined8 **local_60;
  undefined8 **ppuStack_58;
  undefined8 local_50;
  undefined local_48 [24];
  
  cVar9 = *(char *)(param_5 + 0x36);
  if ((cVar9 == '\x01') &&
     (cVar7 = (*(code *)
                PTR__ZN6uucore8features14backup_control23source_is_target_backup17h54cf8f143031f95fE_0024ab10
              )(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 8),
                *(undefined8 *)(param_5 + 0x10)), cVar7 != '\0')) {
    local_158._0_8_ = &DAT_00000001;
    local_140 = 1;
    local_190._0_8_ = &DAT_00000001;
    local_178 = (code *)CONCAT71(local_178._1_7_,1);
    local_130 = (undefined8 *)local_158;
    uStack_128 = (undefined **)
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0024a618
    ;
    local_120 = local_190;
    local_118 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0024a618
    ;
    local_110 = &PTR_s_backing_up_might_destroy_source__00241620;
    local_108 = (undefined8 **)0x3;
    puStack_f0 = (undefined8 *)0x0;
    ppuStack_100 = &local_130;
    local_f8 = (undefined8 **)0x2;
    local_190._8_8_ = param_1;
    local_180 = param_2;
    local_158._8_8_ = param_3;
    local_148 = param_4;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h26cd0638306e3785E(local_48,&local_110);
    uVar11 = (*(code *)PTR__ZN3std2io5error5Error3new17ha2b5f63706640a17E_0024ab18)(0,local_48);
LAB_0018aa7c:
    lVar12 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0024ab20
             )(uVar11);
  }
  else {
    local_170 = param_5;
    local_160 = param_4;
    _ZN3std2fs16symlink_metadata17h0e004a46149b98e9E(&local_110,param_1,param_2);
    iVar6 = (int)local_110;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6bf03d231ff2ee2dE
              (&local_110);
    ppuVar4 = local_160;
    puVar2 = PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024a718;
    if (iVar6 == 2) {
      if ((param_2 == (undefined8 **)0x0) ||
         ((((code *)((long)param_1 + -1))[(long)param_2] != (code)0x2f &&
          (((code *)((long)param_1 + -1))[(long)param_2] != (code)0x5c)))) {
        local_190._0_8_ = (undefined8 *)0x1;
        local_178 = (code *)CONCAT71(local_178._1_7_,1);
        local_190._8_8_ = param_1;
        local_180 = param_2;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_108,local_190);
        local_110 = (undefined **)0x0;
      }
      else {
        local_190._0_8_ = (undefined8 *)0x1;
        local_178 = (code *)CONCAT71(local_178._1_7_,1);
        local_190._8_8_ = param_1;
        local_180 = param_2;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_108,local_190);
        local_110 = (undefined **)0x1;
      }
    }
    else {
      cVar7 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024a718)
                        (param_3,local_160);
      local_168 = param_1;
      local_138 = param_2;
      cVar8 = (*(code *)puVar2)(param_1,param_2);
      if (ppuVar4 != (undefined8 **)0x0) {
        if (((code *)((long)param_3 + -1))[(long)ppuVar4] == (code)0x2f) {
          if (cVar8 == '\0' && cVar7 == '\0') {
LAB_0018aba8:
            if ((*(char *)(local_170 + 0x30) == '\0') && (*(char *)(local_170 + 0x37) != '\x02')) {
              local_190._0_8_ = (undefined8 *)0x1;
              local_180 = ppuVar4;
              local_178 = (code *)CONCAT71(local_178._1_7_,1);
              local_190._8_8_ = param_3;
              _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                        (&local_108,local_190);
              local_110 = (undefined **)0x8;
              goto LAB_0018b0b0;
            }
          }
        }
        else if ((cVar8 == '\0' && cVar7 == '\0') &&
                 ((code *)((long)param_3 + -1))[(long)ppuVar4] == (code)0x5c) goto LAB_0018aba8;
      }
      bVar1 = *(byte *)(local_170 + 0x30);
      lVar12 = _ZN5uu_mv20assert_not_same_file17hb2a62158ed5fb73dE
                         (local_168,local_138,param_3,ppuVar4,cVar7,bVar1,cVar9);
      ppuVar4 = local_138;
      ppuVar3 = local_168;
      if (lVar12 != 0) {
        return lVar12;
      }
      if (cVar7 == '\0') {
        _ZN3std2fs8metadata17h12bb7891128f5212E(&local_110,param_3,local_160);
        iVar6 = (int)local_110;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6bf03d231ff2ee2dE
                  (&local_110);
        ppuVar4 = local_138;
        if ((iVar6 == 2) ||
           (cVar9 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024a718)
                              (local_168,local_138), ppuVar5 = local_160, cVar9 == '\0')) {
          lVar12 = _ZN5uu_mv6rename17h274fbdeb4e433295E
                             (local_168,ppuVar4,param_3,local_160,local_170,0);
          if (lVar12 != 0) {
            lVar12 = _ZN5uu_mv16handle_two_paths28__u7b__u7b_closure_u7d__u7d_17h0d63b4104768f918E
                               (lVar12);
            return lVar12;
          }
          return 0;
        }
        if (*(char *)(local_170 + 0x35) == '\0') {
          return 0;
        }
        if (*(char *)(local_170 + 0x35) == '\x01') {
          local_190 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
          puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0;
          local_158._8_8_ =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
          local_110 = (undefined **)&DAT_00241650;
          local_108 = (undefined8 **)0x2;
          puStack_f0 = (undefined8 *)0x0;
          local_f8 = (undefined8 **)0x1;
          local_158._0_8_ = local_190;
          ppuStack_100 = (undefined8 **)local_158;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_110);
          local_190._0_8_ = &DAT_00000001;
          local_180 = ppuVar5;
          local_178 = (code *)CONCAT71(local_178._1_7_,1);
          local_158._8_8_ =
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0024a618
          ;
          local_110 = &PTR_s_overwrite___00241670;
          local_108 = (undefined8 **)0x2;
          puStack_f0 = (undefined8 *)0x0;
          local_f8 = (undefined8 **)0x1;
          local_190._8_8_ = param_3;
          local_158._0_8_ = local_190;
          ppuStack_100 = (undefined8 **)local_158;
          (*(code *)puVar2)(&local_110);
          local_110 = &PTR_s__00241690;
          local_108 = (undefined8 **)0x1;
          ppuStack_100 = (undefined8 **)&DAT_00000008;
          local_f8 = (undefined8 **)0x0;
          puStack_f0 = (undefined8 *)0x0;
          (*(code *)puVar2)(&local_110);
          local_110 = (undefined **)
                      PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_0024ab28;
          lVar12 = (*(code *)
                     PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17h73119290360117e3E_0024ab30
                   )(&local_110);
          if (lVar12 != 0) {
            puVar13 = (undefined8 *)
                      _ZN5uu_mv16handle_two_paths28__u7b__u7b_closure_u7d__u7d_17h6c85b6b419cebcd1E
                                (lVar12);
            if (puVar13 != (undefined8 *)0x0) {
              uStack_128 = &
                           PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h1436c598fc1cfc46E_00241810
              ;
              local_130 = puVar13;
              uVar10 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17h8679b4fbf35c6f91E
                                 (puVar13);
                    /* try { // try from 0018ae9f to 0018af26 has its CatchHandler @ 0018b113 */
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ab38)
                        (uVar10);
              local_158 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
              local_190._8_8_ =
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
              local_180 = &local_130;
              local_178 = 
              _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4dc8bd895e28ea5eE
              ;
              local_110 = (undefined **)&DAT_002416a0;
              local_108 = (undefined8 **)0x3;
              puStack_f0 = (undefined8 *)0x0;
              local_f8 = (undefined8 **)0x2;
              local_190._0_8_ = local_158;
              ppuStack_100 = (undefined8 **)local_190;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_110);
              _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h72819e63495e4e03E
                        (local_130,uStack_128);
            }
          }
          cVar9 = (*(code *)PTR__ZN6uucore8read_yes17h67cb9532536454c0E_0024ab40)();
          if (cVar9 == '\0') {
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h19a54565959f0f6fE
                      (&local_110,1,0);
            uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfa7a333923b705a4E(&local_110);
            uVar11 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_0024ab48)
                               (0x28,uVar11,
                                &
                                PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h6a1cdce7254a5b62E_00241778
                               );
            goto LAB_0018aa7c;
          }
        }
        local_158._0_8_ = 1;
        local_158._8_8_ = local_168;
        local_148 = ppuVar4;
        local_140 = 1;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_60,local_158);
        local_190._0_8_ = (undefined8 *)0x1;
        local_180 = ppuVar5;
        local_178 = (code *)CONCAT71(local_178._1_7_,1);
                    /* try { // try from 0018af8b to 0018af99 has its CatchHandler @ 0018b12d */
        local_190._8_8_ = param_3;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_130,local_190);
        local_f8 = (undefined8 **)local_50;
        local_108 = local_60;
        ppuStack_100 = ppuStack_58;
        puStack_f0 = local_130;
        uStack_e8 = (undefined4)uStack_128;
        uStack_e4 = uStack_128._4_4_;
        local_e0 = local_120;
        local_110 = (undefined **)0x5;
      }
      else {
        if ((bVar1 & 1) == 0) {
          (*(code *)
            PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0024a9b0)
                    (&local_110,local_168,local_138);
                    /* try { // try from 0018b038 to 0018b051 has its CatchHandler @ 0018b145 */
          lVar12 = _ZN5uu_mv19move_files_into_dir17h52a820120b69cecfE
                             (&local_110,1,param_3,local_160,local_170);
          _ZN4core3ptr58drop_in_place_LT__LP_std__path__PathBuf_C__LP__RP__RP__GT_17h55614b78c78f3bfdE
                    (local_110,local_108);
          return lVar12;
        }
        cVar9 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024a718)
                          (local_168,local_138);
        ppuVar5 = local_160;
        if (cVar9 != '\0') {
          uVar11 = _ZN5uu_mv6rename17h274fbdeb4e433295E
                             (ppuVar3,ppuVar4,param_3,local_160,local_170,0);
          local_110 = ppuVar3;
          local_108 = ppuVar4;
          local_f8 = ppuVar5;
          ppuStack_100 = (undefined8 **)param_3;
          lVar12 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hb96d4501591d6172E
                             (uVar11,&local_110);
          return lVar12;
        }
        local_190._0_8_ = (undefined8 *)0x1;
        local_180 = local_160;
        local_178 = (code *)CONCAT71(local_178._1_7_,1);
        local_190._8_8_ = param_3;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_108,local_190);
        local_110 = (undefined **)0x4;
      }
    }
LAB_0018b0b0:
    lVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1fc079de2e7d2ae0E(&local_110);
  }
  return lVar12;
}