undefined  [16]
_ZN10uu_install19copy_files_into_dir17h5c95c64ab3c0a1beE
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined local_230 [16];
  undefined8 *local_220;
  code *local_218;
  undefined **local_210;
  code *local_208;
  undefined local_200 [16];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined *local_118;
  undefined local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_1d8 = param_5;
  cVar3 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20)(param_3,param_4);
  if (cVar3 == '\0') {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
              (local_110,param_3,param_4);
    local_118 = (undefined *)0x6;
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_118);
  }
  else {
    if (param_2 != 0) {
      local_1d0 = param_2 * 0x18;
      lVar6 = 0;
      local_1e8 = param_3;
      local_1e0 = param_4;
      do {
        uVar5 = *(undefined8 *)(param_1 + 8 + lVar6);
        uVar1 = *(undefined8 *)(param_1 + 0x10 + lVar6);
        _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_118,uVar5,uVar1);
        _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h9fe3718d1d15db77E
                  (&local_1c8,&local_118,uVar5,uVar1);
        if ((int)local_1c8 == 2) {
          local_230._0_8_ = uStack_1c0;
          local_230._8_8_ = local_1b8;
                    /* try { // try from 00168175 to 00168204 has its CatchHandler @ 001684f0 */
          uVar4 = (*(code *)local_1b8[0xb])();
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209c00)(uVar4);
          auVar7 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
          local_220 = (undefined8 *)local_200;
          local_218 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
          local_210 = (undefined **)local_230;
          local_208 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h13fdbe3457474fd3E
          ;
          local_118 = &DAT_002022c0;
          local_110._0_8_ = 3;
          local_f8 = 0;
          local_110._8_8_ = &local_220;
          local_100 = 2;
          local_200 = auVar7;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_118);
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h8b5fd8c779bbf85fE
                    (local_230._0_8_,local_230._8_8_);
        }
        else {
          _ZN4core3ptr129drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hf9ffa6e3f01aa1e5E
                    (&local_1c8);
          cVar3 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20)(uVar5,uVar1);
          if (cVar3 == '\0') {
            (*(code *)
              PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
                      (&local_220,local_1e8,local_1e0);
                    /* try { // try from 00168325 to 001683b3 has its CatchHandler @ 001684ee */
            (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00209af8)
                      (&local_118,uVar5,uVar1);
            (*(code *)
              PTR__ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h8d3527ff230619beE_00209ad8
            )(&local_1c8,&local_118);
            if ((char)local_1c8 == '\n') {
                    /* try { // try from 001684b9 to 001684c5 has its CatchHandler @ 00168510 */
              (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209b00)
                        (&PTR_s_src_uu_install_src_install_rs_00202450);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            local_38 = local_198;
            local_48 = (undefined4)local_1a8;
            uStack_44 = local_1a8._4_4_;
            uStack_40 = uStack_1a0;
            uStack_3c = uStack_19c;
            local_58 = (undefined4)local_1b8;
            uStack_54 = local_1b8._4_4_;
            uStack_50 = (undefined4)uStack_1b0;
            uStack_4c = uStack_1b0._4_4_;
            local_68 = (int)local_1c8;
            uStack_64 = local_1c8._4_4_;
            uStack_60 = (undefined4)uStack_1c0;
            uStack_5c = uStack_1c0._4_4_;
            _ZN3std4path7PathBuf4push17h07a5e2d6657bc540E(&local_220,&local_68);
            auVar7 = _ZN10uu_install4copy17h306162d3f0e5e6d2E
                               (uVar5,uVar1,local_218,local_210,local_1d8);
            if (auVar7._0_8_ == 0) {
                    /* try { // try from 00168107 to 00168110 has its CatchHandler @ 001684ee */
              _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hfbc899ec46b6393dE
                        (0,auVar7._8_8_);
            }
            else {
                    /* try { // try from 001683c7 to 0016845a has its CatchHandler @ 001684c8 */
              local_230 = auVar7;
              uVar4 = (**(code **)(auVar7._8_8_ + 0x58))(auVar7._0_8_);
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209c00)
                        (uVar4);
              auVar7 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
              local_1c8 = local_200;
              uStack_1c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE
              ;
              local_1b8 = (undefined8 **)local_230;
              uStack_1b0 = 
              _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h13fdbe3457474fd3E
              ;
              local_118 = &DAT_002022c0;
              local_110._0_8_ = 3;
              local_f8 = 0;
              local_100 = 2;
              local_110._8_8_ = &local_1c8;
              local_200 = auVar7;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_118);
                    /* try { // try from 00168465 to 00168469 has its CatchHandler @ 001684ee */
              _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h8b5fd8c779bbf85fE
                        (local_230._0_8_,local_230._8_8_);
            }
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_220);
          }
          else {
            _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0734b0984fa3fab3E
                      (local_200,uVar5,uVar1);
            local_118 = (undefined *)0xd;
            local_100 = local_1f0;
            local_110 = local_200;
                    /* try { // try from 00168271 to 001682f5 has its CatchHandler @ 001684dc */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209c00)(1);
            auVar7 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
            local_220 = (undefined8 *)local_230;
            local_218 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
            local_208 = (code *)
                        PTR__ZN63__LT_uu_install__InstallError_u20_as_u20_core__fmt__Display_GT_3fmt17h251fabe430e9a7c5E_00209c48
            ;
            local_1c8 = &DAT_002022c0;
            uStack_1c0 = (code *)0x3;
            local_1a8 = 0;
            local_1b8 = &local_220;
            uStack_1b0 = (code *)0x2;
            local_210 = &local_118;
            local_230 = auVar7;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_1c8);
            _ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E
                      (&local_118);
          }
        }
        lVar6 = lVar6 + 0x18;
      } while (local_1d0 != lVar6);
    }
    uVar5 = 0;
  }
  auVar7._8_8_ = &
                 PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
  ;
  auVar7._0_8_ = uVar5;
  return auVar7;
}