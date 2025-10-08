undefined *****
_ZN9meilitool13compact_index17h137bd3f6e6aa6174E
          (long param_1,undefined ****param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined ****ppppuVar2;
  undefined ****ppppuVar3;
  char cVar4;
  undefined *****pppppuVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [12];
  int local_5d4;
  undefined ****local_5d0;
  undefined local_5c8 [8];
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined ****local_5b0;
  undefined local_5a8;
  undefined local_5a0 [8];
  undefined8 local_598;
  undefined8 local_590;
  undefined local_588 [8];
  undefined8 local_580;
  undefined8 local_578;
  undefined **local_570;
  undefined ****local_568;
  undefined ****ppppuStack_560;
  undefined ****local_558;
  undefined local_548 [8];
  undefined8 local_540;
  undefined8 local_538;
  undefined ***local_530;
  undefined ****local_528;
  undefined **local_520;
  double local_518;
  undefined **local_510;
  undefined ****local_508;
  undefined ****local_500;
  undefined ***local_4f8;
  undefined8 local_4f0;
  undefined local_4e8 [12];
  undefined **local_4d8;
  undefined *local_4d0;
  undefined ****local_4c8;
  undefined ****ppppuStack_4c0;
  undefined ****local_4b8;
  undefined *local_4b0;
  double *pdStack_4a8;
  undefined *local_4a0;
  undefined **local_478;
  int local_2f0 [2];
  undefined ***local_2e8;
  undefined ****local_2e0;
  undefined ****local_2d8;
  undefined ****ppppuStack_2d0;
  undefined8 local_2c8;
  undefined ****local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined **local_278;
  undefined ****local_218;
  undefined ****ppppuStack_210;
  undefined ****local_208;
  undefined ****ppppuStack_200;
  undefined8 uStack_1f8;
  undefined ****local_1f0;
  undefined8 local_1e8;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0045f122 to 0045f141 has its CatchHandler @ 0045fc29 */
  local_4f8 = (undefined ***)param_2;
  local_4f0 = param_3;
  _ZN3std4path4Path4join17h83de109013289b74E(local_548,uVar6,uVar1,"tasks",5);
  local_208 = (undefined ****)0x0;
  uStack_1f8 = (undefined *****)((ulong)uStack_1f8._4_4_ << 0x20);
  local_1e8 = (ulong)local_1e8._4_4_ << 0x20;
  local_1f0 = (undefined ****)0x6400000001;
                    /* try { // try from 0045f176 to 0045f1af has its CatchHandler @ 0045fc6f */
  _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
            (&local_4c8,&local_208,local_548);
  auVar8 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h142c0f6cead12e37E
                     (&local_4c8,local_540,local_538);
  pppppuVar5 = auVar8._8_8_;
  if ((auVar8 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                    /* try { // try from 0045f1c0 to 0045f22c has its CatchHandler @ 0045fc1f */
    local_5d0 = (undefined ****)pppppuVar5;
    _ZN4heed3txn14RoTxn_LT_T_GT_3new17ha7e7dcc838793d36E(&local_208,&local_5d0);
    pppppuVar5 = uStack_1f8;
    local_4c8 = ppppuStack_200;
    ppppuStack_4c0 = (undefined ****)uStack_1f8;
    local_4b8 = local_1f0;
    if ((int)local_208 == 1) {
      uStack_1f8 = (undefined *****)local_1f0;
      local_208 = ppppuStack_200;
      ppppuStack_200 = (undefined ****)pppppuVar5;
      pppppuVar5 = (undefined *****)
                   _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                             (&local_208);
    }
    else {
      local_558 = local_1f0;
      local_568 = ppppuStack_200;
      ppppuStack_560 = (undefined ****)uStack_1f8;
                    /* try { // try from 0045f257 to 0045f2a5 has its CatchHandler @ 0045fc15 */
      _ZN9meilitool20try_opening_database17h5f1437142b1d0e7bE(&local_208,&local_5d0,&local_568);
      pppppuVar5 = (undefined *****)ppppuStack_200;
      if (((ulong)local_208 & 1) == 0) {
        _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_4iter17h870a07eed8c7b8c6E
                  (&local_4c8,ppppuStack_200,(ulong)uStack_1f8 & 0xffffffff,&local_568);
        if ((int)local_4c8 == 5) {
          local_5b0 = ppppuStack_4c0;
          local_5a8 = local_4b8._0_1_;
                    /* try { // try from 0045f2f0 to 0045f3c9 has its CatchHandler @ 0045fc43 */
          while (_ZN107__LT_heed__iterator__iter__RoIter_LT_KC_C_DC_C_IM_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h936a0b11254e8ea0E
                           (local_2f0,&local_5b0), local_2f0[0] == 1) {
            if ((undefined ****)local_2e8 == (undefined ****)0x0) {
              ppppuStack_200 = local_2d8;
              uStack_1f8 = (undefined *****)ppppuStack_2d0;
              local_208 = local_2e0;
                    /* try { // try from 0045f4ca to 0045f573 has its CatchHandler @ 0045fc13 */
              pppppuVar5 = (undefined *****)
                           _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                     (&local_208);
LAB_0045fafd:
                    /* try { // try from 0045fafd to 0045fb06 has its CatchHandler @ 0045fc15 */
              _ZN4core3ptr108drop_in_place_LT_heed__iterator__iter__RoIter_LT_heed_types__bytes__Bytes_C_heed_types__bytes__Bytes_GT__GT_17h63e10fe853a1c2b7E
                        (&local_5b0);
              goto LAB_0045fb07;
            }
            local_218 = local_2d8;
            ppppuStack_210 = ppppuStack_2d0;
            local_530 = local_2e8;
            local_528 = local_2e0;
            cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3bb0d5d6b1ba9de2E
                              (local_2e8,local_2e0,param_2,param_3);
            if (cVar4 != '\0') {
              local_4c8 = &local_530;
              ppppuStack_4c0 =
                   (undefined ****)
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
              local_208 = (undefined ****)&PTR_DAT_00626dc0;
              ppppuStack_200 = (undefined ****)0x2;
              local_1e8 = 0;
              uStack_1f8 = &local_4c8;
              local_1f0 = (undefined ****)&DAT_00000001;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_208);
              _ZN3std4path4Path4join17h83de109013289b74E(&local_4c8,uVar6,uVar1,"indexes",7);
              ppppuVar3 = local_4b8;
              ppppuVar2 = ppppuStack_4c0;
                    /* try { // try from 0045f584 to 0045f5b0 has its CatchHandler @ 0045fbe0 */
              _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h802dbaad1c9ecedeE
                        (&local_208,&local_218);
              _ZN3std4path4Path4join17h70c4a69e8de2a5d4E(local_5c8,ppppuVar2,ppppuVar3,&local_208);
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(&local_4c8);
              local_2c8 = (undefined **)0x0;
              local_2b8 = (undefined *****)((ulong)local_2b8._4_4_ << 0x20);
              local_2b0 = (ulong)local_2b0._4_4_ << 0x20;
              local_2a8 = (undefined *)((ulong)local_2a8._4_4_ << 0x20);
                    /* try { // try from 0045f5eb to 0045f623 has its CatchHandler @ 0045fc04 */
              _ZN5milli5index5Index3new17hfa390c517ff57802E(&local_208,&local_2c8,local_5c8);
              _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h2c19ca08a329c717E
                        (&local_4c8,&local_208,local_5c0,local_5b8);
              ppppuVar3 = ppppuStack_4c0;
              ppppuVar2 = local_4c8;
              pppppuVar5 = (undefined *****)ppppuStack_4c0;
              if ((undefined *****)local_4c8 != (undefined *****)0x0) {
                (*(code *)PTR_memcpy_0063bdc0)(&uStack_1f8,&local_4b8,0x1c0);
                local_208 = ppppuVar2;
                ppppuStack_200 = ppppuVar3;
                local_4c8 = (undefined ****)&PTR_DAT_00626de0;
                ppppuStack_4c0 = (undefined ****)&DAT_00000001;
                local_4b8 = (undefined ****)&DAT_00000008;
                local_4b0 = (undefined *)0x0;
                pdStack_4a8 = (double *)0x0;
                    /* try { // try from 0045f69c to 0045f6d9 has its CatchHandler @ 0045fbf2 */
                (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_4c8);
                (*(code *)PTR__ZN5milli5index5Index9write_txn17ha9910c7808fa4f27E_0063cee8)
                          (&local_4c8,&local_208);
                _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h4d929a0045734defE
                          (&local_2c8,&local_4c8);
                pppppuVar5 = (undefined *****)local_2c0;
                if (local_2c8 != (undefined **)0x2) {
                  local_510 = local_2c8;
                  local_508 = local_2c0;
                  local_500 = (undefined ****)local_2b8;
                    /* try { // try from 0045f71e to 0045f734 has its CatchHandler @ 0045fba7 */
                  _ZN3std4path4Path4join17h83de109013289b74E
                            (local_5a0,local_5c0,local_5b8,"data.mdb",8);
                    /* try { // try from 0045f73f to 0045f755 has its CatchHandler @ 0045fba2 */
                  _ZN3std4path4Path4join17h83de109013289b74E
                            (local_588,local_5c0,local_5b8,"data.mdb.cpy",0xc);
                  local_4c8 = (undefined ****)&PTR_DAT_00626df0;
                  ppppuStack_4c0 = (undefined ****)&DAT_00000001;
                  local_4b8 = (undefined ****)&DAT_00000008;
                  local_4b0 = (undefined *)0x0;
                  pdStack_4a8 = (double *)0x0;
                    /* try { // try from 0045f78a to 0045f7e5 has its CatchHandler @ 0045fbba */
                  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_4c8);
                  local_4e8 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_0063cb38)()
                  ;
                  _ZN5milli5index5Index12copy_to_path17h6c0f4b81f7bd72a8E
                            (&local_4c8,local_208,local_588);
                  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hba42fe46d03f816fE
                            (&local_2c8,&local_4c8,local_580,local_578);
                  pppppuVar5 = (undefined *****)local_2c0;
                  if (((ulong)local_2c8 & 1) == 0) {
                    local_5d4 = local_2c8._4_4_;
                    /* try { // try from 0045f812 to 0045faaa has its CatchHandler @ 0045fbac */
                    (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_0063d028)
                              (&local_4c8,&local_5d4);
                    if ((int)local_4c8 == 2) {
                      pppppuVar5 = (undefined *****)
                                   _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h72e7414419ac4788E
                                             (ppppuStack_4c0);
                    }
                    else {
                      local_570 = local_478;
                      _ZN3std2fs8metadata17h795c92594d1a2782E(&local_4c8,local_5a0);
                      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hde834f96c4d1ceb3E
                                (&local_2c8,&local_4c8,local_598,local_590);
                      pppppuVar5 = (undefined *****)local_2c0;
                      if ((int)local_2c8 != 2) {
                        local_520 = local_278;
                        auVar8._8_4_ = (int)((ulong)local_278 >> 0x20);
                        auVar8._0_8_ = local_278;
                        auVar8._12_4_ = _UNK_00245c84;
                        auVar7._8_4_ = (int)((ulong)local_570 >> 0x20);
                        auVar7._0_8_ = local_570;
                        auVar7._12_4_ = _UNK_00245c84;
                        local_518 = ((auVar8._8_8_ - _UNK_00245b28) +
                                    ((double)CONCAT44(_s__00245c80,(int)local_278) - _DAT_00245b20))
                                    / ((auVar7._8_8_ - _UNK_00245b28) +
                                      ((double)CONCAT44(_s__00245c80,(int)local_570) - _DAT_00245b20
                                      ));
                        auVar9 = (*(code *)
                                   PTR__ZN3std4time7Instant7elapsed17h537da767ad82472aE_0063d030)
                                           (local_4e8);
                        local_2c8 = auVar9._0_8_;
                        local_2c0 = (undefined ****)CONCAT44(local_2c0._4_4_,auVar9._8_4_);
                        local_4d0 = 
                        PTR__ZN57__LT_core__time__Duration_u20_as_u20_core__fmt__Debug_GT_3fmt17h98c5b1440259bcb0E_0063d038
                        ;
                        local_4c8 = (undefined ****)&PTR_s_Compaction_successful__Took_arou_00626e40
                        ;
                        ppppuStack_4c0 = (undefined ****)0x2;
                        pdStack_4a8 = (double *)0x253208;
                        local_4a0 = (undefined *)0x1;
                        local_4b8 = (undefined ****)&local_4d8;
                        local_4b0 = (undefined *)0x1;
                        local_4d8 = (undefined **)&local_2c8;
                        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)
                                  (&local_4c8);
                        local_4c8 = (undefined ****)&local_520;
                        ppppuStack_4c0 =
                             (undefined ****)
                             PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063c748
                        ;
                        local_4b8 = (undefined ****)&local_570;
                        local_4b0 = 
                        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063c748
                        ;
                        pdStack_4a8 = &local_518;
                        local_4a0 = 
                        PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_0063d040
                        ;
                        local_2c8 = &PTR_s_The_index_went_from_bytes_to_x_r_00626e60;
                        local_2c0 = (undefined ****)0x4;
                        local_2a8 = &DAT_00253268;
                        local_2a0 = 3;
                        local_2b0 = 3;
                        local_2b8 = &local_4c8;
                        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)
                                  (&local_2c8);
                        local_4c8 = (undefined ****)&PTR_DAT_00626e00;
                        ppppuStack_4c0 = (undefined ****)&DAT_00000001;
                        local_4b8 = (undefined ****)&DAT_00000008;
                        local_4b0 = (undefined *)0x0;
                        pdStack_4a8 = (double *)0x0;
                        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)
                                  (&local_4c8);
                        uVar6 = _ZN3std2fs6rename17h6fa14902f637f89bE(local_588,local_5a0);
                        pppppuVar5 = (undefined *****)
                                     _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h7728bffa6e0cd6daE
                                               (uVar6,local_580,local_578,local_598,local_590);
                        if (pppppuVar5 == (undefined *****)0x0) {
                          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h55cf89c86e1ade56E
                                    (local_5d4);
                          local_4c8 = (undefined ****)&PTR_DAT_00626e10;
                          ppppuStack_4c0 = (undefined ****)&DAT_00000001;
                          local_4b8 = (undefined ****)&DAT_00000008;
                          local_4b0 = (undefined *)0x0;
                          pdStack_4a8 = (double *)0x0;
                    /* try { // try from 0045fb85 to 0045fb97 has its CatchHandler @ 0045fba0 */
                          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)
                                    (&local_4c8);
                          pppppuVar5 = (undefined *****)0x0;
                          goto LAB_0045fac5;
                        }
                      }
                    }
                    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h55cf89c86e1ade56E(local_5d4);
                  }
LAB_0045fac5:
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                            (local_588);
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                            (local_5a0);
                    /* try { // try from 0045fad9 to 0045fae5 has its CatchHandler @ 0045fbf2 */
                  _ZN4core3ptr37drop_in_place_LT_heed__txn__RwTxn_GT_17h7902c97f86582273E
                            (&local_510);
                }
                    /* try { // try from 0045fae6 to 0045faf2 has its CatchHandler @ 0045fc04 */
                _ZN4core3ptr40drop_in_place_LT_milli__index__Index_GT_17h284309982e252038E
                          (&local_208);
              }
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_5c8);
              goto LAB_0045fafd;
            }
            local_4c8 = &local_530;
            ppppuStack_4c0 =
                 (undefined ****)
                 _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
            local_208 = (undefined ****)&PTR_DAT_00626da0;
            ppppuStack_200 = (undefined ****)0x2;
            local_1e8 = 0;
            uStack_1f8 = &local_4c8;
            local_1f0 = (undefined ****)&DAT_00000001;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_208);
          }
          _ZN4core3ptr108drop_in_place_LT_heed__iterator__iter__RoIter_LT_heed_types__bytes__Bytes_C_heed_types__bytes__Bytes_GT__GT_17h63e10fe853a1c2b7E
                    (&local_5b0);
          local_4c8 = &local_4f8;
          ppppuStack_4c0 =
               (undefined ****)
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
          local_208 = (undefined ****)&PTR_s_Target_index_not_found__00626e20;
          ppppuStack_200 = (undefined ****)0x2;
          local_1e8 = 0;
          uStack_1f8 = &local_4c8;
          local_1f0 = (undefined ****)&DAT_00000001;
          pppppuVar5 = (undefined *****)
                       _ZN6anyhow9__private10format_err17hb588b7091934427dE(&local_208);
        }
        else {
          local_208 = local_4c8;
          ppppuStack_200 = ppppuStack_4c0;
          uStack_1f8 = (undefined *****)local_4b8;
                    /* try { // try from 0045f420 to 0045f4ac has its CatchHandler @ 0045fc15 */
          pppppuVar5 = (undefined *****)
                       _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                 (&local_208);
        }
      }
LAB_0045fb07:
                    /* try { // try from 0045fb07 to 0045fb13 has its CatchHandler @ 0045fc1f */
      _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                (&local_568);
    }
                    /* try { // try from 0045fb14 to 0045fb1d has its CatchHandler @ 0045fc6f */
    _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
              (&local_5d0);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_548);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(param_1);
  return pppppuVar5;
}