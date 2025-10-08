undefined **
_ZN9meilitool7upgrade5v1_1013v1_9_to_v1_1017h8211b0394fe5e0b1E
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 **ppuVar3;
  undefined **ppuVar4;
  undefined auVar5 [16];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined local_288 [8];
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined **local_270;
  undefined **local_268;
  undefined **ppuStack_260;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined **local_238;
  undefined **local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 **ppuStack_218;
  undefined **local_210;
  undefined8 **ppuStack_208;
  undefined **local_200;
  undefined8 *local_1f8;
  undefined *local_1f0;
  undefined8 local_1d8;
  undefined local_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  undefined **local_150 [2];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined **local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined **local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined local_b8 [32];
  undefined8 local_98;
  undefined local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined **local_70;
  undefined **local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined local_48 [24];
  
  local_228 = &PTR_s_Upgrading_from_v1_9_0_to_v1_10_0_00626058;
  uStack_220 = (undefined **)&DAT_00000001;
  ppuStack_218 = (undefined8 **)0x8;
  local_210 = (undefined **)0x0;
  ppuStack_208 = (undefined8 **)0x0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_228);
  _ZN3std4path4Path4join17h83de109013289b74E(local_90,param_1,param_2,"tasks",5);
  local_228 = (undefined **)0x0;
  ppuStack_218 = (undefined8 **)((ulong)ppuStack_218 & 0xffffffff00000000);
  ppuStack_208 = (undefined8 **)((ulong)ppuStack_208 & 0xffffffff00000000);
  local_210 = (undefined **)0x6400000001;
                    /* try { // try from 0045640e to 00456438 has its CatchHandler @ 0045733e */
  _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
            (&local_2b8,&local_228,local_90);
  auVar5 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h142c0f6cead12e37E
                     (&local_2b8,local_88,local_80);
  ppuVar4 = auVar5._8_8_;
  if ((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_004570e3;
                    /* try { // try from 00456449 to 004564a5 has its CatchHandler @ 00457329 */
  local_270 = ppuVar4;
  _ZN4heed3txn5RwTxn3new17h2545535f9c0877d6E(&local_228,&local_270);
  ppuVar3 = ppuStack_218;
  local_2b8 = uStack_220;
  ppuVar4 = local_2b8;
  uStack_2b0 = (code *)ppuStack_218;
  ppuVar2 = (undefined **)uStack_2b0;
  local_2a8 = local_210;
  local_2b8._0_4_ = (int)uStack_220;
  local_2b8._4_4_ = (undefined4)((ulong)uStack_220 >> 0x20);
  uStack_2b0._0_4_ = SUB84(ppuStack_218,0);
  uStack_2b0._4_4_ = (undefined4)((ulong)ppuStack_218 >> 0x20);
  local_2b8 = ppuVar4;
  uStack_2b0 = (code *)ppuVar2;
  if ((int)local_228 == 1) {
    ppuStack_218 = (undefined8 **)local_210;
    local_228 = uStack_220;
    uStack_220 = (undefined **)ppuVar3;
    ppuVar4 = (undefined **)
              _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                        (&local_228);
  }
  else {
    local_128 = local_210;
    local_138 = (int)local_2b8;
    uStack_134 = local_2b8._4_4_;
    uStack_130 = (undefined4)uStack_2b0;
    uStack_12c = uStack_2b0._4_4_;
                    /* try { // try from 004564c7 to 004565cf has its CatchHandler @ 00457317 */
    _ZN9meilitool20try_opening_database17h5f1437142b1d0e7bE(&local_228,&local_270,&local_138);
    ppuVar3 = ppuStack_218;
    ppuVar2 = uStack_220;
    ppuVar4 = uStack_220;
    if (((ulong)local_228 & 1) == 0) {
      _ZN9meilitool20try_opening_database17h460df49269848c50E(&local_228,&local_270,&local_138);
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h78e7865125156773E
                (&local_2b8,&local_228,local_88,local_80);
      ppuVar4 = (undefined **)uStack_2b0;
      if (((ulong)local_2b8 & 1) == 0) {
        local_60 = (undefined **)uStack_2b0;
        local_13c = local_2a8._0_4_;
        _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_3len17h69dce8bcc396c91aE
                  (&local_228,ppuVar2,(ulong)ppuVar3 & 0xffffffff,&local_138);
        auVar5 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h0261080ff8f9add2E
                           (&local_228);
        ppuVar4 = auVar5._8_8_;
        if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          local_c0 = ppuVar4;
          _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_4iter17h870a07eed8c7b8c6E
                    (&local_2b8,ppuVar2,(ulong)ppuVar3 & 0xffffffff,&local_138);
          if ((int)local_2b8 == 5) {
            _ZN4core4iter6traits8iterator8Iterator7collect17h7b458c1e7aca4564E
                      (local_48,uStack_2b0,(ulong)local_2a8 & 0xff);
            local_168 = 0;
            local_160 = 8;
            local_158 = 0;
            local_e8 = 0;
            local_e0 = 8;
            local_d8 = 0;
            local_d0 = param_1;
            local_c8 = param_2;
            _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hfd77adacaa072020E
                      (local_b8,local_48);
            local_98 = 0;
            _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb0a0b8fd638d2739E
                      (&local_118,local_b8);
            local_268 = (undefined **)CONCAT44(uStack_10c,uStack_110);
            local_78 = (undefined **)0x8000000000000001;
            if (local_268 != (undefined **)0x8000000000000001) {
              do {
                local_68 = (undefined **)CONCAT44(uStack_f4,local_f8);
                if (local_268 == (undefined **)&DAT_8000000000000000) {
                  local_228 = local_108;
                  uStack_220 = (undefined **)CONCAT44(uStack_fc,uStack_100);
                    /* try { // try from 00457065 to 00457071 has its CatchHandler @ 004571b3 */
                  ppuStack_218 = (undefined8 **)local_68;
                  ppuVar4 = (undefined **)
                            _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                      (&local_228);
LAB_004570a2:
                    /* try { // try from 004570a2 to 004570ae has its CatchHandler @ 00457227 */
                  _ZN4core3ptr194drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_core__result__Result_LT__LP_alloc__string__String_C_uuid__Uuid_RP__C_heed__Error_GT__GT__GT__GT_17ha00eac6653331c5bE
                            (local_b8);
                  _ZN4core3ptr86drop_in_place_LT_alloc__vec__Vec_LT__LP_alloc__string__String_C_uuid__Uuid_RP__GT__GT_17h43f3c30ee953a404E
                            (&local_e8);
                  goto LAB_004570bc;
                }
                lVar1 = CONCAT44(uStack_114,local_118);
                local_70 = (undefined **)CONCAT44(uStack_ec,uStack_f0);
                ppuStack_260 = local_108;
                local_258 = (undefined **)CONCAT44(uStack_fc,uStack_100);
                local_150[0] = local_68;
                    /* try { // try from 0045686b to 00456892 has its CatchHandler @ 00457297 */
                _ZN3std4path4Path4join17h83de109013289b74E(&local_2b8,local_d0,local_c8,"indexes",7)
                ;
                ppuVar2 = local_2a8;
                ppuVar4 = (undefined **)uStack_2b0;
                    /* try { // try from 0045689d to 004568c7 has its CatchHandler @ 004572ae */
                _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h802dbaad1c9ecedeE
                          (&local_228,local_150);
                _ZN3std4path4Path4join17h70c4a69e8de2a5d4E(local_288,ppuVar4,ppuVar2,&local_228);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                          (&local_2b8);
                local_230 = (undefined **)(lVar1 + 1);
                local_248 = (undefined **)CONCAT44(uStack_27c,local_280);
                uStack_240 = (undefined **)CONCAT44(uStack_274,uStack_278);
                uStack_220 = (undefined **)
                             PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063be40
                ;
                ppuStack_218 = &local_c0;
                local_210 = (undefined **)
                            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063c748
                ;
                local_200 = (undefined **)
                            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                ;
                local_1f8 = &local_248;
                local_1f0 = 
                PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0063cea8
                ;
                local_2b8 = &PTR_DAT_00626068;
                uStack_2b0 = (code *)&DAT_00000005;
                local_298 = 0;
                local_2a0 = 4;
                local_2a8 = (undefined **)&local_228;
                local_228 = (undefined **)&local_230;
                ppuStack_208 = &local_268;
                    /* try { // try from 00456984 to 004569eb has its CatchHandler @ 004572d7 */
                (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_2b8);
                local_228 = (undefined **)0x0;
                ppuStack_218 = (undefined8 **)((ulong)ppuStack_218 & 0xffffffff00000000);
                ppuStack_208 = (undefined8 **)((ulong)ppuStack_208 & 0xffffffff00000000);
                local_210 = (undefined **)0x1900000001;
                _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
                          (&local_2b8,&local_228,local_288);
                auVar5 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h4bf4063843956c10E
                                   (&local_2b8,CONCAT44(uStack_27c,local_280),
                                    CONCAT44(uStack_274,uStack_278),&local_268);
                ppuVar4 = auVar5._8_8_;
                if ((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) {
LAB_0045708e:
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                            (local_288);
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h564483ca8896ba07E
                            (&local_268);
                  goto LAB_004570a2;
                }
                local_230 = ppuVar4;
                    /* try { // try from 00456a02 to 00456a24 has its CatchHandler @ 004572b6 */
                _ZN4heed3txn14RoTxn_LT_T_GT_3new17ha7e7dcc838793d36E(&local_228,&local_230);
                _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hf1d0d04def2a0615E
                          (&local_2b8,&local_228,CONCAT44(uStack_27c,local_280),
                           CONCAT44(uStack_274,uStack_278),&local_268);
                ppuVar4 = (undefined **)uStack_2b0;
                if (local_2b8 == (undefined **)0x2) {
LAB_00457081:
                    /* try { // try from 00457081 to 0045708d has its CatchHandler @ 004571bb */
                  _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                            (&local_230);
                  goto LAB_0045708e;
                }
                local_248 = local_2b8;
                uStack_240 = (undefined **)uStack_2b0;
                local_238 = local_2a8;
                local_228 = &PTR_s___Checking_for_incompatible_embe_006260b8;
                uStack_220 = (undefined **)&DAT_00000001;
                ppuStack_218 = (undefined8 **)&DAT_00000008;
                local_210 = (undefined **)0x0;
                ppuStack_208 = (undefined8 **)0x0;
                    /* try { // try from 00456a81 to 00456aa3 has its CatchHandler @ 0045729c */
                (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_228);
                _ZN9meilitool7upgrade5v1_1019find_rest_embedders17h775eca5444f1f4c8E
                          (&local_228,ppuStack_260,local_258,&local_230,&local_248);
                ppuVar3 = ppuStack_218;
                ppuVar4 = uStack_220;
                if (local_228 == (undefined **)&DAT_8000000000000000) {
                    /* try { // try from 00457077 to 00457080 has its CatchHandler @ 004571a8 */
                  _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                            (&local_248);
                  goto LAB_00457081;
                }
                local_2b8 = local_228;
                uStack_2b0 = (code *)uStack_220;
                local_2a8 = (undefined **)ppuStack_218;
                if (ppuStack_218 == (undefined8 **)0x0) {
                  ppuStack_218 = (undefined8 **)local_258;
                  local_228 = local_268;
                  uStack_220 = ppuStack_260;
                  local_210 = local_68;
                  ppuStack_208 = (undefined8 **)local_70;
                    /* try { // try from 00456b69 to 00456b78 has its CatchHandler @ 00457216 */
                  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h977c3998cc5e5f92E(&local_e8,&local_228);
                  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hdbd05ce596ece69bE
                            (&local_2b8);
                }
                else {
                  ppuStack_218 = (undefined8 **)local_258;
                  local_200 = (undefined **)ppuVar3;
                  local_210 = local_228;
                  ppuStack_208 = (undefined8 **)uStack_220;
                    /* try { // try from 00456b1d to 00456b2c has its CatchHandler @ 0045723c */
                  local_228 = local_268;
                  uStack_220 = ppuStack_260;
                  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6654857b56be0649E(&local_168,&local_228);
                }
                    /* try { // try from 00456b83 to 00456b8c has its CatchHandler @ 004572b6 */
                _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                          (&local_248);
                    /* try { // try from 00456b8d to 00456b94 has its CatchHandler @ 00457288 */
                _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                          (&local_230);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_288)
                ;
                _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb0a0b8fd638d2739E
                          (&local_118,local_b8);
                local_268 = (undefined **)CONCAT44(uStack_10c,uStack_110);
              } while (local_268 != local_78);
            }
                    /* try { // try from 00456684 to 00456690 has its CatchHandler @ 00457227 */
            _ZN4core3ptr194drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_core__result__Result_LT__LP_alloc__string__String_C_uuid__Uuid_RP__C_heed__Error_GT__GT__GT__GT_17ha00eac6653331c5bE
                      (local_b8);
            if (local_158 == 0) {
              local_228 = &PTR_DAT_006260c8;
              uStack_220 = (undefined **)&DAT_00000001;
              ppuStack_218 = (undefined8 **)&DAT_00000008;
              local_210 = (undefined **)0x0;
              ppuStack_208 = (undefined8 **)0x0;
                    /* try { // try from 00456c01 to 00456c11 has its CatchHandler @ 00457227 */
              (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_228);
              _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7eabe737d26de24cE
                        (local_b8,&local_e8);
              local_98 = 0;
              _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc6ec2100af070b37E
                        (&local_118,local_b8);
              if (CONCAT44(uStack_10c,uStack_110) != -0x8000000000000000) {
                do {
                  lVar1 = CONCAT44(uStack_114,local_118);
                  local_258 = (undefined **)CONCAT44(uStack_fc,uStack_100);
                  ppuStack_260 = local_108;
                  local_58 = local_f8;
                  uStack_54 = uStack_f4;
                  uStack_50 = uStack_f0;
                  uStack_4c = uStack_ec;
                    /* try { // try from 00456d05 to 00456d2c has its CatchHandler @ 00457211 */
                  _ZN3std4path4Path4join17h83de109013289b74E
                            (&local_2b8,local_d0,local_c8,"indexes",7);
                  ppuVar2 = local_2a8;
                  ppuVar4 = (undefined **)uStack_2b0;
                    /* try { // try from 00456d37 to 00456d59 has its CatchHandler @ 00457234 */
                  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h802dbaad1c9ecedeE
                            (&local_228,&local_58);
                  _ZN3std4path4Path4join17h70c4a69e8de2a5d4E(local_288,ppuVar4,ppuVar2,&local_228);
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                            (&local_2b8);
                  local_150[0] = (undefined **)(lVar1 + 1);
                  local_248 = (undefined **)CONCAT44(uStack_27c,local_280);
                  uStack_240 = (undefined **)CONCAT44(uStack_274,uStack_278);
                  uStack_220 = (undefined **)
                               PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063be40
                  ;
                  ppuStack_218 = &local_c0;
                  local_210 = (undefined **)
                              PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063c748
                  ;
                  local_200 = (undefined **)
                              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                  ;
                  local_1f0 = 
                  PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0063cea8
                  ;
                  local_2b8 = &PTR_DAT_006260f8;
                  uStack_2b0 = (code *)&DAT_00000005;
                  local_298 = 0;
                  local_2a0 = 4;
                  local_2a8 = (undefined **)&local_228;
                  local_228 = (undefined **)local_150;
                  ppuStack_208 = &local_268;
                  local_1f8 = &local_248;
                    /* try { // try from 00456e16 to 00456e77 has its CatchHandler @ 0045725f */
                  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_2b8);
                  local_228 = (undefined **)0x0;
                  ppuStack_218 = (undefined8 **)((ulong)ppuStack_218 & 0xffffffff00000000);
                  ppuStack_208 = (undefined8 **)((ulong)ppuStack_208 & 0xffffffff00000000);
                  local_210 = (undefined **)0x1900000001;
                  _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
                            (&local_2b8,&local_228,local_288);
                  auVar5 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h4bf4063843956c10E
                                     (&local_2b8,CONCAT44(uStack_27c,local_280),
                                      CONCAT44(uStack_274,uStack_278),&local_268);
                  ppuVar4 = auVar5._8_8_;
                  if ((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) {
LAB_00457178:
                    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                              (local_288);
                    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h564483ca8896ba07E
                              (&local_268);
                    /* try { // try from 0045718c to 00457198 has its CatchHandler @ 004571c0 */
                    _ZN4core3ptr152drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT__LP_alloc__string__String_C_uuid__Uuid_RP__GT__GT__GT_17had572e93ef1a660aE
                              (local_b8);
LAB_004570bc:
                    _ZN4core3ptr120drop_in_place_LT_alloc__vec__Vec_LT__LP_alloc__string__String_C_alloc__vec__Vec_LT_alloc__string__String_GT__RP__GT__GT_17h36414c98e7a01dc1E
                              (&local_168);
                    goto LAB_004570cc;
                  }
                  local_150[0] = ppuVar4;
                    /* try { // try from 00456e8b to 00456ead has its CatchHandler @ 0045722f */
                  _ZN4heed3txn5RwTxn3new17h2545535f9c0877d6E(&local_228,local_150);
                  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h48f8ded7d20acf92E
                            (&local_2b8,&local_228,CONCAT44(uStack_27c,local_280),
                             CONCAT44(uStack_274,uStack_278),&local_268);
                  ppuVar4 = (undefined **)uStack_2b0;
                  if (local_2b8 == (undefined **)0x2) {
LAB_0045716b:
                    /* try { // try from 0045716b to 00457177 has its CatchHandler @ 004571a3 */
                    _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                              (local_150);
                    goto LAB_00457178;
                  }
                  local_248 = local_2b8;
                  uStack_240 = (undefined **)uStack_2b0;
                  local_238 = local_2a8;
                  local_228 = &PTR_s___Updating_index_stats_00626148;
                  uStack_220 = (undefined **)0x1;
                  ppuStack_218 = (undefined8 **)&DAT_00000008;
                  local_210 = (undefined **)0x0;
                  ppuStack_208 = (undefined8 **)0x0;
                    /* try { // try from 00456f0a to 00456fa7 has its CatchHandler @ 00457243 */
                  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_228);
                  local_228 = (undefined **)CONCAT44(uStack_54,local_58);
                  uStack_220 = (undefined **)CONCAT44(uStack_4c,uStack_50);
                  ppuVar4 = (undefined **)
                            _ZN9meilitool7upgrade5v1_1018update_index_stats17h25d98d0daa3092aaE
                                      (local_60,local_13c,ppuStack_260,local_258,&local_228,
                                       &local_138);
                  if (ppuVar4 != (undefined **)0x0) {
LAB_00457161:
                    /* try { // try from 00457161 to 0045716a has its CatchHandler @ 0045719e */
                    _ZN4core3ptr37drop_in_place_LT_heed__txn__RwTxn_GT_17h7902c97f86582273E
                              (&local_248);
                    goto LAB_0045716b;
                  }
                  local_228 = &PTR_s___Updating_date_format_00626158;
                  uStack_220 = (undefined **)&DAT_00000001;
                  ppuStack_218 = (undefined8 **)&DAT_00000008;
                  local_210 = (undefined **)0x0;
                  ppuStack_208 = (undefined8 **)0x0;
                  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_228);
                  ppuVar4 = (undefined **)
                            _ZN9meilitool7upgrade5v1_1018update_date_format17h4c841e4eb7f7cd1fE
                                      (ppuStack_260,local_258,local_150,&local_248);
                  if (ppuVar4 != (undefined **)0x0) goto LAB_00457161;
                  ppuStack_218 = (undefined8 **)local_238;
                  local_228 = local_248;
                  uStack_220 = uStack_240;
                    /* try { // try from 00456fd1 to 00456ff1 has its CatchHandler @ 00457225 */
                  (*(code *)PTR__ZN4heed3txn5RwTxn6commit17hf2aa640749b3a898E_0063cb10)
                            (&local_2b8,&local_228);
                  ppuVar4 = (undefined **)
                            _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hbd79301df284feabE
                                      (&local_2b8,CONCAT44(uStack_27c,local_280),
                                       CONCAT44(uStack_274,uStack_278),&local_268);
                  if (ppuVar4 != (undefined **)0x0) goto LAB_0045716b;
                    /* try { // try from 00456ffe to 00457005 has its CatchHandler @ 0045725f */
                  _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                            (local_150);
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                            (local_288);
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h564483ca8896ba07E
                            (&local_268);
                  _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc6ec2100af070b37E
                            (&local_118,local_b8);
                } while (CONCAT44(uStack_10c,uStack_110) != -0x8000000000000000);
              }
                    /* try { // try from 00456c5a to 00456c66 has its CatchHandler @ 004571c0 */
              _ZN4core3ptr152drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT__LP_alloc__string__String_C_uuid__Uuid_RP__GT__GT__GT_17had572e93ef1a660aE
                        (local_b8);
              ppuStack_218 = (undefined8 **)local_128;
              local_228 = (undefined **)CONCAT44(uStack_134,local_138);
              uStack_220 = (undefined **)CONCAT44(uStack_12c,uStack_130);
                    /* try { // try from 00456c87 to 00456cab has its CatchHandler @ 004571c8 */
              (*(code *)PTR__ZN4heed3txn5RwTxn6commit17hf2aa640749b3a898E_0063cb10)
                        (&local_2b8,&local_228);
              ppuVar4 = (undefined **)
                        _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h13edab0cedbcce6eE
                                  (&local_2b8,
                                   "while committing the write txn for the index-scheduler",0x36);
              if (ppuVar4 == (undefined **)0x0) {
                local_228 = &PTR_s_Upgrading_database_succeeded_00626168;
                uStack_220 = (undefined **)&DAT_00000001;
                ppuStack_218 = (undefined8 **)&DAT_00000008;
                local_210 = (undefined **)0x0;
                ppuStack_208 = (undefined8 **)0x0;
                    /* try { // try from 00457137 to 00457144 has its CatchHandler @ 004571c8 */
                (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_228);
                _ZN4core3ptr120drop_in_place_LT_alloc__vec__Vec_LT__LP_alloc__string__String_C_alloc__vec__Vec_LT_alloc__string__String_GT__RP__GT__GT_17h36414c98e7a01dc1E
                          (&local_168);
                    /* try { // try from 00457152 to 0045715b has its CatchHandler @ 0045733e */
                _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                          (&local_270);
                ppuVar4 = (undefined **)0x0;
                goto LAB_004570e3;
              }
              _ZN4core3ptr120drop_in_place_LT_alloc__vec__Vec_LT__LP_alloc__string__String_C_alloc__vec__Vec_LT_alloc__string__String_GT__RP__GT__GT_17h36414c98e7a01dc1E
                        (&local_168);
              goto LAB_004570d9;
            }
            _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h676dc9995f796c88E
                      (local_188,&local_168);
            local_228 = (undefined **)0x8000000000000000;
            local_1d8 = 0x8000000000000000;
                    /* try { // try from 004566cf to 004566de has its CatchHandler @ 004571fc */
            _ZN4core4iter6traits8iterator8Iterator7collect17h4386dcf15915fae5E
                      (&local_2b8,&local_228);
                    /* try { // try from 004566e9 to 004566f5 has its CatchHandler @ 004571ef */
            _ZN5alloc3str17join_generic_copy17h4484e5a97fef4f2cE(&local_228,uStack_2b0,local_2a8);
            local_108 = (undefined **)ppuStack_218;
            local_118 = (int)local_228;
            uStack_114 = local_228._4_4_;
            uStack_110 = (undefined4)uStack_220;
            uStack_10c = uStack_220._4_4_;
            _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hdbd05ce596ece69bE
                      (&local_2b8);
            local_2b8 = (undefined **)&local_118;
            uStack_2b0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_228 = &PTR_s_The_update_cannot_take_place_bec_006260d8;
            uStack_220 = (undefined **)0x2;
            ppuStack_208 = (undefined8 **)0x0;
            local_210 = (undefined **)&DAT_00000001;
                    /* try { // try from 00456774 to 00456780 has its CatchHandler @ 004571dd */
            ppuStack_218 = (undefined8 **)&local_2b8;
            ppuVar4 = (undefined **)_ZN6anyhow9__private10format_err17hb588b7091934427dE(&local_228)
            ;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h564483ca8896ba07E(&local_118)
            ;
            _ZN4core3ptr86drop_in_place_LT_alloc__vec__Vec_LT__LP_alloc__string__String_C_uuid__Uuid_RP__GT__GT_17h43f3c30ee953a404E
                      (&local_e8);
          }
          else {
            local_228 = local_2b8;
            uStack_220 = (undefined **)uStack_2b0;
            ppuStack_218 = (undefined8 **)local_2a8;
                    /* try { // try from 004567e5 to 004567f1 has its CatchHandler @ 00457317 */
            ppuVar4 = (undefined **)
                      _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                (&local_228);
          }
        }
      }
    }
LAB_004570cc:
                    /* try { // try from 004570cc to 004570d8 has its CatchHandler @ 00457329 */
    _ZN4core3ptr37drop_in_place_LT_heed__txn__RwTxn_GT_17h7902c97f86582273E(&local_138);
  }
LAB_004570d9:
                    /* try { // try from 004570d9 to 004570e2 has its CatchHandler @ 0045733e */
  _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
            (&local_270);
LAB_004570e3:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_90);
  return ppuVar4;
}