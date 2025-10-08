undefined **
_ZN9meilitool7upgrade5v1_1114v1_10_to_v1_1117h7310ce1b4db52cd7E
          (undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  undefined **local_1d0;
  ulong uStack_1c8;
  undefined **local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 **ppuStack_198;
  undefined **local_190;
  long *plStack_188;
  code *local_180;
  undefined8 *local_178;
  undefined *local_170;
  undefined **local_168;
  undefined local_160 [8];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **local_138;
  undefined **local_130;
  undefined **local_128;
  undefined **local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined **local_108;
  long local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined **local_e0;
  long local_d8;
  undefined **local_d0;
  undefined local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined **local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined local_70 [32];
  undefined8 local_50;
  undefined local_48 [24];
  
  local_1a8 = &PTR_s_Upgrading_from_v1_10_0_to_v1_11__00626288;
  uStack_1a0 = (undefined **)&DAT_00000001;
  ppuStack_198 = (undefined8 **)0x8;
  local_190 = (undefined **)0x0;
  plStack_188 = (long *)0x0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_1a8);
  _ZN3std4path4Path4join17h83de109013289b74E(local_c8,param_1,param_2,"tasks",5);
  local_1a8 = (undefined **)0x0;
  ppuStack_198 = (undefined8 **)((ulong)ppuStack_198 & 0xffffffff00000000);
  plStack_188 = (long *)((ulong)plStack_188 & 0xffffffff00000000);
  local_190 = (undefined **)0x6400000001;
                    /* try { // try from 004577d3 to 004577fe has its CatchHandler @ 00457fac */
  _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
            (&local_1e8,&local_1a8,local_c8);
  auVar6 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h142c0f6cead12e37E
                     (&local_1e8,local_c0,local_b8);
  ppuVar4 = auVar6._8_8_;
  if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                    /* try { // try from 00457812 to 0045785e has its CatchHandler @ 00457f94 */
    local_168 = ppuVar4;
    _ZN4heed3txn14RoTxn_LT_T_GT_3new17ha7e7dcc838793d36E(&local_1a8,&local_168);
    ppuVar2 = ppuStack_198;
    local_1e8 = uStack_1a0;
    ppuVar4 = local_1e8;
    uStack_1e0 = (undefined **)ppuStack_198;
    ppuVar1 = uStack_1e0;
    local_1d8 = local_190;
    local_1e8._0_4_ = (int)uStack_1a0;
    local_1e8._4_4_ = (undefined4)((ulong)uStack_1a0 >> 0x20);
    uStack_1e0._0_4_ = SUB84(ppuStack_198,0);
    uStack_1e0._4_4_ = (undefined4)((ulong)ppuStack_198 >> 0x20);
    local_1e8 = ppuVar4;
    uStack_1e0 = ppuVar1;
    if ((int)local_1a8 == 1) {
      ppuStack_198 = (undefined8 **)local_190;
      local_1a8 = uStack_1a0;
      uStack_1a0 = (undefined **)ppuVar2;
      ppuVar4 = (undefined **)
                _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                          (&local_1a8);
    }
    else {
      local_108 = local_190;
      local_118 = (int)local_1e8;
      uStack_114 = local_1e8._4_4_;
      uStack_110 = (undefined4)uStack_1e0;
      uStack_10c = uStack_1e0._4_4_;
                    /* try { // try from 00457881 to 00457975 has its CatchHandler @ 00457f82 */
      _ZN9meilitool20try_opening_database17h5f1437142b1d0e7bE(&local_1a8,&local_168,&local_118);
      ppuVar2 = ppuStack_198;
      ppuVar1 = uStack_1a0;
      ppuVar4 = uStack_1a0;
      if (((ulong)local_1a8 & 1) == 0) {
        _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_3len17h69dce8bcc396c91aE
                  (&local_1a8,uStack_1a0,(ulong)ppuStack_198 & 0xffffffff,&local_118);
        auVar6 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h0261080ff8f9add2E
                           (&local_1a8);
        ppuVar4 = auVar6._8_8_;
        if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          local_d0 = ppuVar4;
          _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_4iter17h870a07eed8c7b8c6E
                    (&local_1e8,ppuVar1,(ulong)ppuVar2 & 0xffffffff,&local_118);
          if ((int)local_1e8 == 5) {
            _ZN4core4iter6traits8iterator8Iterator7collect17h7b458c1e7aca4564E
                      (local_48,uStack_1e0,(ulong)local_1d8 & 0xff);
            _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hfd77adacaa072020E
                      (local_70,local_48);
            local_50 = 0;
            _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb0a0b8fd638d2739E
                      (&local_b0,local_70);
            if (local_a8 != -0x7fffffffffffffff) {
              local_d8 = -0x8000000000000000;
              local_e0 = (undefined **)0x800000000000000b;
              do {
                lVar3 = local_b0;
                if (local_a8 == local_d8) {
                  local_1a8 = (undefined **)CONCAT44(uStack_9c,local_a0);
                  uStack_1a0 = (undefined **)CONCAT44(uStack_94,uStack_98);
                  ppuStack_198 = (undefined8 **)local_90;
                    /* try { // try from 00457e19 to 00457e22 has its CatchHandler @ 00457f07 */
                  ppuVar4 = (undefined **)
                            _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                      (&local_1a8);
LAB_00457eb7:
                    /* try { // try from 00457eb7 to 00457ec3 has its CatchHandler @ 00457f82 */
                  _ZN4core3ptr194drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_core__result__Result_LT__LP_alloc__string__String_C_uuid__Uuid_RP__C_heed__Error_GT__GT__GT__GT_17ha00eac6653331c5bE
                            (local_70);
                  goto LAB_00457ec7;
                }
                local_f0 = local_a0;
                uStack_ec = uStack_9c;
                uStack_e8 = uStack_98;
                uStack_e4 = uStack_94;
                local_f8 = local_a8;
                local_80 = local_90;
                local_78 = local_88;
                    /* try { // try from 00457a50 to 00457a6c has its CatchHandler @ 00457f14 */
                _ZN3std4path4Path4join17h83de109013289b74E(&local_1e8,param_1,param_2,"indexes",7);
                ppuVar1 = local_1d8;
                ppuVar4 = uStack_1e0;
                    /* try { // try from 00457a77 to 00457aa1 has its CatchHandler @ 00457f19 */
                _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h802dbaad1c9ecedeE
                          (&local_1a8,&local_80);
                _ZN3std4path4Path4join17h70c4a69e8de2a5d4E(local_160,ppuVar4,ppuVar1,&local_1a8);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                          (&local_1e8);
                local_130 = (undefined **)(lVar3 + 1);
                local_148 = (undefined **)CONCAT44(uStack_154,local_158);
                uStack_140 = (undefined **)CONCAT44(uStack_14c,uStack_150);
                local_1a8 = (undefined **)&local_130;
                uStack_1a0 = (undefined **)
                             PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063be40
                ;
                ppuStack_198 = &local_d0;
                local_190 = (undefined **)
                            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063c748
                ;
                local_180 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                ;
                local_178 = &local_148;
                local_170 = 
                PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0063cea8
                ;
                local_1e8 = &PTR_DAT_00626298;
                uStack_1e0 = (undefined **)&DAT_00000005;
                uStack_1c8 = 0;
                local_1d0 = (undefined **)0x4;
                local_1d8 = (undefined **)&local_1a8;
                plStack_188 = &local_f8;
                    /* try { // try from 00457b60 to 00457bc2 has its CatchHandler @ 00457f56 */
                (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0063cea0)(&local_1e8);
                local_1a8 = (undefined **)0x0;
                ppuStack_198 = (undefined8 **)((ulong)ppuStack_198 & 0xffffffff00000000);
                plStack_188 = (long *)((ulong)plStack_188 & 0xffffffff00000000);
                local_190 = (undefined **)0x1900000001;
                _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
                          (&local_1e8,&local_1a8,local_160);
                auVar6 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h4bf4063843956c10E
                                   (&local_1e8,CONCAT44(uStack_154,local_158),
                                    CONCAT44(uStack_14c,uStack_150),&local_f8);
                ppuVar4 = auVar6._8_8_;
                if ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) {
LAB_00457e9d:
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                            (local_160);
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h564483ca8896ba07E
                            (&local_f8);
                  goto LAB_00457eb7;
                }
                    /* try { // try from 00457bd3 to 00457bff has its CatchHandler @ 00457f35 */
                local_1b0 = ppuVar4;
                _ZN4heed3txn14RoTxn_LT_T_GT_3new17ha7e7dcc838793d36E(&local_1a8,&local_1b0);
                _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hd3012fe82899c9f9E
                          (&local_1e8,&local_1a8,CONCAT44(uStack_154,local_158),
                           CONCAT44(uStack_14c,uStack_150),&local_f8);
                ppuVar4 = uStack_1e0;
                if (local_1e8 == (undefined **)0x2) {
LAB_00457e93:
                    /* try { // try from 00457e93 to 00457e9c has its CatchHandler @ 00457f10 */
                  _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                            (&local_1b0);
                  goto LAB_00457e9d;
                }
                local_130 = local_1e8;
                local_128 = uStack_1e0;
                local_120 = local_1d8;
                    /* try { // try from 00457c31 to 00457ca9 has its CatchHandler @ 00457f3a */
                _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                          (&local_1a8,&local_1b0,&local_130,"vector-arroy",0xc);
                _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h9edd3d3aacfb6741E
                          (&local_1e8,&local_1a8,&local_f8);
                ppuVar1 = uStack_1e0;
                ppuVar4 = uStack_1e0;
                if (((ulong)local_1e8 & 1) != 0) {
LAB_00457e86:
                    /* try { // try from 00457e86 to 00457e92 has its CatchHandler @ 00457f0e */
                  _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                            (&local_130);
                  goto LAB_00457e93;
                }
                uVar5 = (ulong)local_1d8 & 0xffffffff;
                _ZN4heed3txn5RwTxn3new17h2545535f9c0877d6E(&local_1a8,&local_1b0);
                _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hf1d0d04def2a0615E
                          (&local_1e8,&local_1a8,CONCAT44(uStack_154,local_158),
                           CONCAT44(uStack_14c,uStack_150),&local_f8);
                ppuVar4 = uStack_1e0;
                if (local_1e8 == (undefined **)0x2) goto LAB_00457e86;
                local_148 = local_1e8;
                uStack_140 = uStack_1e0;
                local_138 = local_1d8;
                    /* try { // try from 00457cdb to 00457d50 has its CatchHandler @ 00457f23 */
                _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                          (&local_1a8,&local_1b0,&local_148,"vector-arroy",0xc);
                _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h9edd3d3aacfb6741E
                          (&local_1e8,&local_1a8,&local_f8);
                ppuVar4 = uStack_1e0;
                if (((ulong)local_1e8 & 1) != 0) {
LAB_00457e51:
                    /* try { // try from 00457e51 to 00457e5d has its CatchHandler @ 00457f0c */
                  _ZN4core3ptr37drop_in_place_LT_heed__txn__RwTxn_GT_17h7902c97f86582273E
                            (&local_148);
                  goto LAB_00457e86;
                }
                (*(code *)PTR__ZN5arroy7upgrade22cosine_from_0_4_to_0_517h273c046c6978ed16E_0063ceb0
                )(&local_1e8,&local_130,ppuVar1,uVar5,&local_148,uStack_1e0,local_1d8._0_4_);
                if (local_1e8 != local_e0) {
                  local_190 = local_1d0;
                  plStack_188 = (long *)uStack_1c8;
                  uStack_1a0 = uStack_1e0;
                  ppuStack_198 = (undefined8 **)local_1d8;
                  local_1a8 = local_1e8;
                    /* try { // try from 00457e44 to 00457e4d has its CatchHandler @ 00457f05 */
                  ppuVar4 = (undefined **)
                            _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hf9abd3bf420f593dE
                                      (&local_1a8);
                  goto LAB_00457e51;
                }
                ppuStack_198 = (undefined8 **)local_138;
                local_1a8 = local_148;
                uStack_1a0 = uStack_140;
                    /* try { // try from 00457d86 to 00457d95 has its CatchHandler @ 00457f12 */
                (*(code *)PTR__ZN4heed3txn5RwTxn6commit17hf2aa640749b3a898E_0063cb10)
                          (&local_1e8,&local_1a8);
                if ((int)local_1e8 != 5) {
                  uStack_1a0 = uStack_1e0;
                  ppuStack_198 = (undefined8 **)local_1d8;
                  local_1a8 = local_1e8;
                    /* try { // try from 00457e76 to 00457e7f has its CatchHandler @ 00457f03 */
                  ppuVar4 = (undefined **)
                            _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                      (&local_1a8);
                  goto LAB_00457e86;
                }
                    /* try { // try from 00457da3 to 00457daf has its CatchHandler @ 00457f35 */
                _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                          (&local_130);
                    /* try { // try from 00457db0 to 00457db9 has its CatchHandler @ 00457f56 */
                _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                          (&local_1b0);
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_160)
                ;
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h564483ca8896ba07E
                          (&local_f8);
                _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb0a0b8fd638d2739E
                          (&local_b0,local_70);
              } while (local_a8 != -0x7fffffffffffffff);
            }
            _ZN4core3ptr194drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_core__result__Result_LT__LP_alloc__string__String_C_uuid__Uuid_RP__C_heed__Error_GT__GT__GT__GT_17ha00eac6653331c5bE
                      (local_70);
                    /* try { // try from 00457976 to 00457982 has its CatchHandler @ 00457f94 */
            _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                      (&local_118);
                    /* try { // try from 00457983 to 0045798f has its CatchHandler @ 00457fac */
            _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                      (&local_168);
            ppuVar4 = (undefined **)0x0;
            goto LAB_00457ee1;
          }
          local_1a8 = local_1e8;
          uStack_1a0 = uStack_1e0;
          ppuStack_198 = (undefined8 **)local_1d8;
                    /* try { // try from 004579c8 to 004579d1 has its CatchHandler @ 00457f82 */
          ppuVar4 = (undefined **)
                    _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                              (&local_1a8);
        }
      }
LAB_00457ec7:
                    /* try { // try from 00457ec7 to 00457ed3 has its CatchHandler @ 00457f94 */
      _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                (&local_118);
    }
                    /* try { // try from 00457ed4 to 00457ee0 has its CatchHandler @ 00457fac */
    _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
              (&local_168);
  }
LAB_00457ee1:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_c8);
  return ppuVar4;
}