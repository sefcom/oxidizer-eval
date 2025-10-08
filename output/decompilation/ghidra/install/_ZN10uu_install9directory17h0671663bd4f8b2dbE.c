undefined  [16]
_ZN10uu_install9directory17h0671663bd4f8b2dbE(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined local_150 [20];
  undefined4 local_13c;
  undefined8 *local_138;
  code *local_130;
  long *local_128;
  code *local_120;
  long local_118;
  undefined **local_110;
  undefined local_108 [16];
  long *local_f8;
  long local_f0;
  long local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  if (param_2 == 0) {
    local_e0 = (undefined **)0x1;
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_e0);
  }
  else {
    local_13c = 0x1ed;
    if ((*(byte *)(param_3 + 0x48) & 1) != 0) {
      local_13c = *(undefined4 *)(param_3 + 0x4c);
    }
    bVar1 = *(byte *)(param_3 + 0x61);
    local_e8 = param_2 * 0x18;
    lVar12 = 0;
    local_f0 = param_3;
    do {
      uVar11 = *(undefined8 *)(param_1 + 8 + lVar12);
      uVar2 = *(undefined8 *)(param_1 + 0x10 + lVar12);
      _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_e0,uVar11,uVar2);
      iVar5 = (int)local_e0;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
                (&local_e0);
      if (iVar5 == 2) {
        (*(code *)
          PTR__ZN6uucore8features2fs26dir_strip_dot_for_creation17h60bc83913df5140fE_00209c08)
                  (local_108,uVar11,uVar2);
        plVar4 = local_f8;
        uVar3 = local_108._8_8_;
                    /* try { // try from 00167217 to 0016722f has its CatchHandler @ 001674e8 */
        uVar8 = _ZN3std2fs14create_dir_all17hd557ad1207496242E(local_108._8_8_,local_f8);
        lVar9 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h25a33db3103aecfcE
                          (uVar8,uVar3,plVar4);
        if (lVar9 == 0) {
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hfbc899ec46b6393dE
                    (0,&
                       PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h5c44eddb31e86a20E_00201e30
                    );
          if ((bVar1 & 1) != 0) {
            local_138 = (undefined8 *)&DAT_00000001;
            local_130 = (code *)uVar3;
            local_128 = plVar4;
            local_120 = (code *)CONCAT71(local_120._1_7_,1);
            local_150._0_8_ = &local_138;
            local_150._8_8_ =
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209a70
            ;
            local_e0 = &PTR_s_creating_directory_002022f0;
            local_d8 = 2;
            local_c0 = 0;
            local_d0 = (undefined8 **)local_150;
            local_c8 = 1;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209c10)(&local_e0);
          }
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(local_108);
          goto LAB_0016738e;
        }
        local_110 = &
                    PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h5c44eddb31e86a20E_00201e30
        ;
        local_118 = lVar9;
        uVar7 = _ZN6uucore4mods5error6UError4code17h59cee72e75ff8565E();
                    /* try { // try from 0016724f to 001672da has its CatchHandler @ 001674ce */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209c00)(uVar7);
        auVar13 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
        local_138 = (undefined8 *)local_150;
        local_130 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
        local_128 = &local_118;
        local_120 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h13fdbe3457474fd3E
        ;
        local_e0 = (undefined **)&DAT_002022c0;
        local_d8 = 3;
        local_c0 = 0;
        local_d0 = &local_138;
        local_c8 = 2;
        local_150._0_16_ = auVar13;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_e0);
                    /* try { // try from 001672e5 to 00167383 has its CatchHandler @ 001674e8 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h8b5fd8c779bbf85fE
                  (local_118,local_110);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(local_108);
      }
      else {
LAB_0016738e:
        cVar6 = _ZN10uu_install4mode5chmod17hdfca6c9c8a923e56E(uVar11,uVar2,local_13c);
        if (cVar6 == '\0') {
          puVar10 = (undefined8 *)
                    _ZN10uu_install25chown_optional_user_group17h803ff07f1543e95dE
                              (uVar11,uVar2,local_f0);
          if (puVar10 == (undefined8 *)0x0) {
            _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hfbc899ec46b6393dE
                      (0,&
                         PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
                      );
          }
          else {
            local_150._8_8_ =
                 &
                 PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
            ;
            local_150._0_8_ = puVar10;
            uVar7 = _ZN72__LT_uu_install__InstallError_u20_as_u20_uucore__mods__error__UError_GT_4code17hae211d2e19e01945E
                              (puVar10);
                    /* try { // try from 001673d7 to 00167462 has its CatchHandler @ 001674ba */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209c00)(uVar7);
            auVar13 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
            local_138 = (undefined8 *)local_108;
            local_130 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
            local_128 = (long *)local_150;
            local_120 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h13fdbe3457474fd3E
            ;
            local_e0 = (undefined **)&DAT_002022c0;
            local_d8 = 3;
            local_c0 = 0;
            local_d0 = &local_138;
            local_c8 = 2;
            local_108 = auVar13;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_e0);
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h8b5fd8c779bbf85fE
                      (local_150._0_8_,local_150._8_8_);
          }
        }
        else {
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00209c00)(1);
        }
      }
      lVar12 = lVar12 + 0x18;
    } while (local_e8 != lVar12);
    uVar11 = 0;
  }
  auVar13._8_8_ =
       &PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
  ;
  auVar13._0_8_ = uVar11;
  return auVar13;
}