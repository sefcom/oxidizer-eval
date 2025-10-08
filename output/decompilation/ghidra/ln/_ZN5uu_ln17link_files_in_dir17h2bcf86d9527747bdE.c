undefined  [16]
_ZN5uu_ln17link_files_in_dir17h2bcf86d9527747bdE
          (long param_1,long param_2,code *param_3,undefined8 **param_4,long param_5)

{
  byte bVar1;
  code *pcVar2;
  undefined8 **ppuVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined auVar12 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 **local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined local_e8 [16];
  undefined8 **local_d8;
  undefined *local_d0;
  undefined local_c8 [16];
  undefined8 *local_b8;
  code *pcStack_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined local_90 [8];
  undefined *local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_78 = param_5;
  cVar6 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001fd128)(param_3,param_4);
  if (cVar6 == '\0') {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_001fd0a8)
              (&uStack_118,param_3,param_4);
    local_120 = (undefined **)0x0;
    uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9832a2155b69f23fE(&local_120);
    goto LAB_00165dc4;
  }
  auVar12 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h0bfd1cb4445fe4b8E();
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17he692588f474a850dE
            (&local_120,param_2,auVar12._0_8_,auVar12._8_8_);
  local_48 = local_100;
  uStack_40 = uStack_f8;
  local_58 = local_110;
  uStack_50 = uStack_108;
  local_68 = (undefined4)local_120;
  uStack_64 = local_120._4_4_;
  uStack_60 = (undefined4)uStack_118;
  uStack_5c = uStack_118._4_4_;
  if (param_2 != 0) {
    cVar6 = *(char *)(local_78 + 0x36);
    local_70 = param_1 + param_2 * 0x18;
    bVar1 = *(byte *)(local_78 + 0x34);
    bVar11 = true;
    lVar9 = param_1 + 0x18;
    do {
      lVar8 = lVar9;
      if ((cVar6 == '\x02' & bVar1) == 0) {
LAB_001657c0:
        pcVar2 = *(code **)(param_1 + 8);
        ppuVar3 = *(undefined8 ***)(param_1 + 0x10);
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001fce08)
                  (&local_120,pcVar2,ppuVar3);
        ppuVar5 = local_110;
        pcVar4 = uStack_118;
        if (((ulong)local_120 & 1) == 0) {
          auVar12 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_001fce10)
                              (uStack_118,local_110);
          if (auVar12._0_8_ == 0) {
            _ZN3std4path4Path4join17h001e706606c28daaE(local_90,param_3,param_4,pcVar4,ppuVar5);
          }
          else {
            _ZN3std4path4Path4join17h001e706606c28daaE
                      (local_90,param_3,param_4,auVar12._0_8_,auVar12._8_8_);
          }
          goto LAB_00165ad6;
        }
        local_e8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fce78)();
        local_b8 = (undefined8 *)local_e8;
        pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h45ff57c8145456efE;
        local_120 = (undefined **)&DAT_001f6038;
        uStack_118 = (code *)0x2;
        local_100 = 0;
        local_110 = &local_b8;
        uStack_108 = 1;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
        local_e8._0_8_ = &DAT_00000001;
        local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
        local_b8 = (undefined8 *)local_e8;
        pcStack_b0 = (code *)
                     PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fd148
        ;
        local_120 = &PTR_s_cannot_stat___No_such_file_or_di_001f6088;
        uStack_118 = (code *)0x2;
        local_100 = 0;
        local_110 = &local_b8;
        uStack_108 = 1;
        local_e8._8_8_ = pcVar2;
        local_d8 = ppuVar3;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
        bVar11 = false;
        if (lVar8 == local_70) goto LAB_00165d9e;
      }
      else {
                    /* try { // try from 00165654 to 0016568c has its CatchHandler @ 00165e3c */
        cVar7 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001fd138)
                          (param_3,param_4);
        if (cVar7 == '\0') goto LAB_001657c0;
        cVar7 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_001fd140)
                          (param_3,param_4);
        if (cVar7 != '\0') {
          local_98 = (undefined *)_ZN3std2fs11remove_file17ha037a510dc62fc80E(param_3,param_4);
          if (local_98 == (undefined *)0x0) {
            _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h34c9e922b39888aeE
                      (&local_98);
          }
          else {
            local_c8._0_8_ = local_98;
                    /* try { // try from 001656a3 to 001657a1 has its CatchHandler @ 00165dee */
            local_e8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fce78)();
            local_b8 = (undefined8 *)local_e8;
            pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h45ff57c8145456efE;
            local_120 = (undefined **)&DAT_001f6038;
            uStack_118 = (code *)0x2;
            local_100 = 0;
            local_110 = &local_b8;
            uStack_108 = 1;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
            local_e8._0_8_ = &DAT_00000001;
            local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
            local_b8 = (undefined8 *)local_e8;
            pcStack_b0 = (code *)
                         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fd148
            ;
            local_a8 = local_c8;
            local_a0 = 
            PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001fcf20
            ;
            local_120 = &PTR_s_Could_not_update_001f6058;
            uStack_118 = (code *)0x3;
            local_100 = 0;
            local_110 = &local_b8;
            uStack_108 = 2;
            local_e8._8_8_ = param_3;
            local_d8 = param_4;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
                    /* try { // try from 001657a2 to 00165982 has its CatchHandler @ 00165e3c */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0da376499adda0beE(local_c8);
          }
        }
        cVar7 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001fd128)
                          (param_3,param_4);
        if (cVar7 != '\0') {
          local_98 = (undefined *)_ZN3std2fs10remove_dir17h43fe0fb1c7b95b6bE(param_3,param_4);
          if (local_98 == (undefined *)0x0) {
            _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h34c9e922b39888aeE
                      (&local_98);
          }
          else {
            local_c8._0_8_ = local_98;
                    /* try { // try from 00165999 to 00165a97 has its CatchHandler @ 00165ddf */
            local_e8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fce78)();
            local_b8 = (undefined8 *)local_e8;
            pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h45ff57c8145456efE;
            local_120 = (undefined **)&DAT_001f6038;
            uStack_118 = (code *)0x2;
            local_100 = 0;
            local_110 = &local_b8;
            uStack_108 = 1;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
            local_e8._0_8_ = &DAT_00000001;
            local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
            local_b8 = (undefined8 *)local_e8;
            pcStack_b0 = (code *)
                         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fd148
            ;
            local_a8 = local_c8;
            local_a0 = 
            PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001fcf20
            ;
            local_120 = &PTR_s_Could_not_update_001f6058;
            uStack_118 = (code *)0x3;
            local_100 = 0;
            local_110 = &local_b8;
            uStack_108 = 2;
            local_e8._8_8_ = param_3;
            local_d8 = param_4;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
                    /* try { // try from 00165a98 to 00165ad5 has its CatchHandler @ 00165e3c */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h0da376499adda0beE(local_c8);
          }
        }
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_001fd0a8)
                  (local_90,param_3,param_4);
LAB_00165ad6:
                    /* try { // try from 00165ad6 to 00165c16 has its CatchHandler @ 00165e17 */
        lVar9 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hd366270c5ee0e306E
                          (&local_68,local_90);
        if (lVar9 == 0) {
          auVar12 = _ZN5uu_ln4link17hcb5f3490f1fb339bE
                              (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),local_88
                               ,uStack_80,local_78);
          if (auVar12._0_8_ != 0) {
            local_c8 = auVar12;
                    /* try { // try from 00165c2a to 00165ce6 has its CatchHandler @ 00165dfd */
            local_e8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fce78)();
            local_b8 = (undefined8 *)local_e8;
            pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h45ff57c8145456efE;
            local_120 = (undefined **)&DAT_001f6038;
            uStack_118 = (code *)0x2;
            local_100 = 0;
            local_110 = &local_b8;
            uStack_108 = 1;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
            local_e8._0_8_ = local_c8;
            local_e8._8_8_ =
                 _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hed818a206c69414dE
            ;
            local_120 = (undefined **)&DAT_001f60d8;
            uStack_118 = (code *)0x2;
            local_100 = 0;
            local_110 = (undefined8 **)local_e8;
            uStack_108 = 1;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
                    /* try { // try from 00165cf1 to 00165d6c has its CatchHandler @ 00165e17 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3739735bf7fffe55E
                      (local_c8._0_8_,local_c8._8_8_);
            goto LAB_00165cf6;
          }
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h10bf4845f61eafbdE
                    (0,auVar12._8_8_);
        }
        else {
          local_e8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fce78)();
          local_b8 = (undefined8 *)local_e8;
          pcStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h45ff57c8145456efE;
          local_120 = (undefined **)&DAT_001f6038;
          uStack_118 = (code *)0x2;
          local_100 = 0;
          local_110 = &local_b8;
          uStack_108 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
          local_c8._0_8_ = local_88;
          local_c8._8_8_ = uStack_80;
          local_b8 = *(undefined8 **)(param_1 + 8);
          pcStack_b0 = *(code **)(param_1 + 0x10);
          local_e8._0_8_ = local_c8;
          local_e8._8_8_ =
               PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_001fd150
          ;
          local_d8 = &local_b8;
          local_d0 = 
          PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_001fd150
          ;
          local_120 = &PTR_s_will_not_overwrite_just_created___001f60a8;
          uStack_118 = (code *)0x3;
          local_100 = 0;
          local_110 = (undefined8 **)local_e8;
          uStack_108 = 2;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fce80)(&local_120);
LAB_00165cf6:
          bVar11 = false;
        }
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h3184c1608c40fe12E
                  (&local_120,local_88,uStack_80);
        local_d8 = local_110;
        local_e8._0_8_ = local_120;
        local_e8._8_8_ = uStack_118;
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h05975b5bada9d9c2E
                  (&local_68,local_e8);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hba0bfa390dca4ccbE(local_90);
        if (lVar8 == local_70) goto LAB_00165d95;
      }
      lVar9 = lVar8 + 0x18;
      param_1 = lVar8;
    } while( true );
  }
LAB_00165d9a:
  uVar10 = 0;
  goto LAB_00165db4;
LAB_00165d95:
  if (bVar11) goto LAB_00165d9a;
LAB_00165d9e:
  local_120 = (undefined **)&DAT_00000001;
                    /* try { // try from 00165da7 to 00165db0 has its CatchHandler @ 00165ddd */
  uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9832a2155b69f23fE(&local_120);
LAB_00165db4:
  _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17hab08fbae43caaa47E
            (&local_68);
LAB_00165dc4:
  auVar12._8_8_ =
       &PTR__ZN4core3ptr35drop_in_place_LT_uu_ln__LnError_GT_17he61e52a3a96a1b8dE_001f5fb8;
  auVar12._0_8_ = uVar10;
  return auVar12;
}