undefined  [16] _ZN10uu_hashsum7hashsum17h4817e91e428ae9c2E(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 **ppuVar4;
  undefined **ppuVar5;
  undefined8 ***unaff_RBP;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  undefined auVar9 [16];
  undefined8 **local_168;
  code *pcStack_160;
  undefined ***local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  code *local_140;
  undefined8 **local_138;
  code *local_130;
  undefined8 **local_128;
  undefined8 **local_120;
  undefined8 **local_118;
  code *local_110;
  undefined8 local_108;
  undefined8 **local_e8;
  undefined8 **local_e0;
  undefined8 **local_d8;
  undefined local_d0 [16];
  undefined8 **local_b8;
  code *pcStack_b0;
  undefined ***local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_68 [56];
  
  local_98 = (undefined **)0x111fe6;
  if (*(char *)(param_1 + 5) != '\0') {
    local_98 = (undefined **)0x111fe7;
  }
  local_90 = 1;
  local_88 = "-";
  local_80 = 1;
  auVar9 = _ZN99__LT_core__iter__sources__once__Once_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h982a0c4a152de282E
                     (&local_88);
  if (auVar9._0_8_ != 0) {
    local_a0 = param_1 + 2;
    do {
      uVar7 = auVar9._8_8_;
                    /* try { // try from 00177250 to 001772eb has its CatchHandler @ 00177829 */
      uVar6 = auVar9._0_8_;
      (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_0025ac48)
                (&local_128,uVar6,uVar7);
      (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_0025ac48)(&local_168,"-",1);
      cVar1 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                        (&local_128,&local_168);
      if (cVar1 == '\0') {
        _ZN3std2fs4File4open17ha248bcfadf7db1bdE(&local_168,uVar6,uVar7);
        _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h3a6495f6b466d1cdE
                  (&local_128,&local_168);
        unaff_RBP = (undefined8 ***)local_120;
        pppuVar8 = (undefined8 ***)local_128;
        if ((undefined8 ***)local_128 != (undefined8 ***)0x0) {
          _ZN4core3ptr40drop_in_place_LT_uu_hashsum__Options_GT_17h43498a49004cb0efE
                    (param_1[2],param_1[3]);
          goto LAB_001777af;
        }
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfaef7a3dce0ae3b8E((ulong)local_120 & 0xffffffff)
        ;
        ppuVar5 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17he9c8b9053675e50aE_002505e8
        ;
      }
      else {
        uVar2 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_0025ac50)();
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hadbb0503d2003617E(uVar2);
        ppuVar5 = (undefined **)&DAT_00250640;
      }
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hda0e1f61fc52ab31E
                (local_68,uVar2,ppuVar5);
                    /* try { // try from 001772f4 to 00177318 has its CatchHandler @ 00177817 */
      _ZN6uucore8features8checksum13digest_reader17hff1fba5c339e0b36E
                (&local_168,local_a0,local_68,*(undefined *)(param_1 + 5),param_1[4]);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hf61b0de946dbe0faE
                (&local_128,&local_168);
      unaff_RBP = (undefined8 ***)local_118;
      local_e8 = local_128;
      local_e0 = local_120;
      local_d8 = local_118;
                    /* try { // try from 0017734c to 0017735a has its CatchHandler @ 001777e3 */
      (*(code *)PTR__ZN6uucore8features8checksum15escape_filename17h72613307eceef7dcE_0025ac58)
                (&local_168,uVar6,uVar7);
      local_a8 = local_158;
      local_b8 = local_168;
      pcStack_b0 = pcStack_160;
      local_78 = (undefined4)local_150;
      uStack_74 = local_150._4_4_;
      uStack_70 = (undefined4)uStack_148;
      uStack_6c = uStack_148._4_4_;
      if (*(char *)((long)param_1 + 0x29) == '\0') {
        if (*(char *)((long)param_1 + 0x2a) == '\0') {
          if (*(char *)((long)param_1 + 0x2b) == '\0') {
            local_168 = (undefined8 **)&local_78;
            pcStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h65d6a60c9852059dE;
            local_158 = (undefined ***)&local_e8;
            local_150 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            uStack_148 = (undefined8 ***)&local_98;
            local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h65d6a60c9852059dE;
            local_138 = &local_b8;
            local_130 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_128 = (undefined8 **)&DAT_00250598;
            local_120 = (undefined8 **)&DAT_00000005;
            local_108 = 0;
            local_110 = (code *)0x4;
            local_118 = &local_168;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0025ac60)(&local_128);
          }
          else {
            local_168 = &local_e8;
            pcStack_160 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_158 = &local_98;
            local_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h65d6a60c9852059dE;
            uStack_148 = (undefined8 ***)local_d0;
            local_140 = (code *)
                        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0025ac68
            ;
            local_128 = (undefined8 **)&DAT_00250558;
            local_120 = (undefined8 ***)0x4;
            local_108 = 0;
            local_110 = (code *)0x3;
                    /* try { // try from 00177600 to 0017772d has its CatchHandler @ 001777e8 */
            local_118 = &local_168;
            local_d0 = auVar9;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0025ac60)(&local_128);
          }
        }
        else {
          local_128 = &local_e8;
          local_120 = (undefined8 **)
                      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
          ;
          local_168 = (undefined8 **)&DAT_002503b8;
          pcStack_160 = (code *)0x2;
          uStack_148 = (undefined8 ***)0x0;
          local_158 = (undefined ***)&local_128;
          local_150 = (code *)0x1;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0025ac60)(&local_168);
        }
      }
      else {
        uVar6 = *param_1;
        uVar7 = param_1[1];
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h06d929c007262a5fE
                          (uVar6,uVar7,"blake2b",7);
        if (cVar1 == '\0') {
          _ZN5alloc3str21__LT_impl_u20_str_GT_18to_ascii_uppercase17h035e9d4252a297afE
                    (local_d0,uVar6,uVar7);
          local_168 = (undefined8 **)&local_78;
          pcStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h65d6a60c9852059dE;
          local_158 = (undefined ***)local_d0;
          local_150 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          uStack_148 = &local_b8;
          local_140 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_138 = &local_e8;
          local_130 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_128 = (undefined8 **)&DAT_00250508;
          local_120 = (undefined8 **)&DAT_00000005;
          local_108 = 0;
          local_110 = (code *)0x4;
                    /* try { // try from 00177544 to 0017754e has its CatchHandler @ 001777c9 */
          local_118 = &local_168;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0025ac60)(&local_128);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9f078563e9f476deE
                    (local_d0._0_8_,local_d0._8_8_);
        }
        else {
                    /* try { // try from 001773b9 to 001774c2 has its CatchHandler @ 001777e8 */
          lVar3 = (**(code **)(param_1[3] + 0x30))(param_1[2]);
          if (lVar3 == 0x200) {
            local_128 = &local_b8;
            local_120 = (undefined8 **)
                        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_118 = &local_e8;
            local_110 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_168 = (undefined8 **)&PTR_s_BLAKE2b_____00250498;
            pcStack_160 = (code *)0x3;
            uStack_148 = (undefined8 ***)0x0;
            local_158 = (undefined ***)&local_128;
            local_150 = (code *)0x2;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0025ac60)(&local_168);
          }
          else {
            ppuVar4 = (undefined8 **)(**(code **)(param_1[3] + 0x30))(param_1[2]);
            local_168 = (undefined8 **)local_d0;
            pcStack_160 = (code *)
                          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0025ac70
            ;
            local_158 = (undefined ***)&local_b8;
            local_150 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            uStack_148 = &local_e8;
            local_140 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_128 = (undefined8 **)&PTR_DAT_002504c8;
            local_120 = (undefined8 ***)0x4;
            local_108 = 0;
            local_110 = (code *)0x3;
            local_118 = &local_168;
            local_d0._0_8_ = ppuVar4;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0025ac60)(&local_128);
          }
        }
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9f078563e9f476deE
                (local_b8,pcStack_b0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9f078563e9f476deE
                (local_e8,local_e0);
                    /* try { // try from 0017775a to 00177766 has its CatchHandler @ 00177829 */
      _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h256beb3357173075E
                (local_68);
      auVar9 = _ZN99__LT_core__iter__sources__once__Once_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h982a0c4a152de282E
                         (&local_88);
    } while (auVar9._0_8_ != 0);
  }
  _ZN4core3ptr40drop_in_place_LT_uu_hashsum__Options_GT_17h43498a49004cb0efE(param_1[2],param_1[3]);
  pppuVar8 = (undefined8 ***)0x0;
LAB_001777af:
  auVar9._8_8_ = unaff_RBP;
  auVar9._0_8_ = pppuVar8;
  return auVar9;
}