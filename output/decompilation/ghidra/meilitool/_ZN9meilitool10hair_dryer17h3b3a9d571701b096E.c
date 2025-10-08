undefined *****
_ZN9meilitool10hair_dryer17h3b3a9d571701b096E
          (long param_1,undefined *****param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined ****ppppuVar4;
  undefined ****ppppuVar5;
  undefined *****pppppuVar6;
  undefined *****pppppuVar7;
  char cVar8;
  int iVar9;
  undefined *****pppppuVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  int local_6f4;
  undefined ****local_6f0;
  undefined ****local_6e8;
  undefined ****local_6e0;
  undefined local_6d8;
  long local_6d0;
  undefined ****local_6c8;
  undefined **local_6c0;
  undefined ***local_6b8;
  undefined ****local_6b0;
  undefined ****local_6a8;
  undefined ****ppppuStack_6a0;
  undefined ****local_698;
  undefined ****local_688;
  undefined ****ppppuStack_680;
  undefined ****local_678;
  undefined local_670 [8];
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined ****local_650;
  undefined local_648;
  undefined ****local_640;
  long local_638;
  undefined local_630 [8];
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined **local_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined ****local_5f0;
  double local_5e8;
  int local_5e0 [2];
  undefined ***local_5d8;
  undefined ****local_5d0;
  undefined ****local_5c8;
  undefined ****ppppuStack_5c0;
  undefined ****local_5b8;
  undefined ****ppppuStack_5b0;
  undefined8 uStack_5a8;
  undefined ****local_5a0;
  undefined8 uStack_598;
  undefined *local_590;
  undefined ****local_3e8;
  undefined ****ppppuStack_3e0;
  undefined ****local_3d8;
  undefined8 local_3d0;
  undefined *local_3c8;
  undefined8 local_3c0;
  undefined ****local_218;
  undefined ****ppppuStack_210;
  undefined ****local_200;
  undefined ****local_1f8;
  undefined local_1f0 [344];
  undefined8 local_98;
  undefined4 local_90;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 004612d7 to 004612f6 has its CatchHandler @ 00461e1d */
  local_6e8 = (undefined ****)param_2;
  _ZN3std4path4Path4join17h83de109013289b74E(local_630,uVar1,uVar2,"tasks",5);
  local_5b8 = (undefined ****)0x0;
  uStack_5a8 = (undefined *****)((ulong)uStack_5a8._4_4_ << 0x20);
  uStack_598 = (double *)((ulong)uStack_598._4_4_ << 0x20);
  local_5a0 = (undefined ****)0x6400000001;
                    /* try { // try from 0046132b to 00461364 has its CatchHandler @ 00461e9e */
  _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
            (&local_3e8,&local_5b8,local_630);
  auVar12 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h142c0f6cead12e37E
                      (&local_3e8,local_628,local_620);
  pppppuVar10 = auVar12._8_8_;
  if ((auVar12 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    local_5b8 = (undefined ****)&PTR_DAT_00626f68;
    ppppuStack_5b0 = (undefined ****)&DAT_00000001;
    uStack_5a8 = (undefined *****)&DAT_00000008;
    local_5a0 = (undefined ****)0x0;
    uStack_598 = (double *)0x0;
                    /* try { // try from 004613a9 to 00461423 has its CatchHandler @ 00461e37 */
    local_6f0 = (undefined ****)pppppuVar10;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_5b8);
    _ZN4heed3txn14RoTxn_LT_T_GT_3new17ha7e7dcc838793d36E(&local_5b8,&local_6f0);
    pppppuVar10 = uStack_5a8;
    local_3e8 = ppppuStack_5b0;
    ppppuStack_3e0 = (undefined ****)uStack_5a8;
    local_3d8 = local_5a0;
    if ((int)local_5b8 == 1) {
      uStack_5a8 = (undefined *****)local_5a0;
      local_5b8 = ppppuStack_5b0;
      ppppuStack_5b0 = (undefined ****)pppppuVar10;
      pppppuVar10 = (undefined *****)
                    _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                              (&local_5b8);
    }
    else {
      local_698 = local_5a0;
      local_6a8 = ppppuStack_5b0;
      ppppuStack_6a0 = (undefined ****)uStack_5a8;
                    /* try { // try from 0046144d to 00461498 has its CatchHandler @ 00461e13 */
      local_6d0 = param_4;
      _ZN9meilitool20try_opening_database17h5f1437142b1d0e7bE(&local_5b8,&local_6f0,&local_6a8);
      pppppuVar10 = (undefined *****)ppppuStack_5b0;
      if (((ulong)local_5b8 & 1) == 0) {
        _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_4iter17h870a07eed8c7b8c6E
                  (&local_3e8,ppppuStack_5b0,(ulong)uStack_5a8 & 0xffffffff,&local_6a8);
        if ((int)local_3e8 == 5) {
          local_6e0 = ppppuStack_3e0;
          local_6d8 = local_3d8._0_1_;
          local_640 = local_6e8 + param_3 * 3;
          pppppuVar10 = (undefined *****)local_640;
                    /* try { // try from 004614e9 to 00461581 has its CatchHandler @ 00461e09 */
          while (ppppuVar4 = local_6e8,
                _ZN107__LT_heed__iterator__iter__RoIter_LT_KC_C_DC_C_IM_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h936a0b11254e8ea0E
                          (local_5e0,&local_6e0), local_5e0[0] == 1) {
            if ((undefined ****)local_5d8 == (undefined ****)0x0) {
              ppppuStack_5b0 = local_5c8;
              uStack_5a8 = (undefined *****)ppppuStack_5c0;
              local_5b8 = local_5d0;
                    /* try { // try from 00461ce4 to 00461cf0 has its CatchHandler @ 00461de5 */
              pppppuVar10 = (undefined *****)
                            _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                      (&local_5b8);
LAB_00461c5c:
                    /* try { // try from 00461c5c to 00461c65 has its CatchHandler @ 00461e13 */
              _ZN4core3ptr108drop_in_place_LT_heed__iterator__iter__RoIter_LT_heed_types__bytes__Bytes_C_heed_types__bytes__Bytes_GT__GT_17h63e10fe853a1c2b7E
                        (&local_6e0);
              goto LAB_00461c66;
            }
            local_218 = local_5c8;
            ppppuStack_210 = ppppuStack_5c0;
            local_6b8 = local_5d8;
            local_6b0 = local_5d0;
            local_5b8 = ppppuVar4;
            ppppuStack_5b0 = (undefined ****)pppppuVar10;
            cVar8 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h3f288ae56d8140b3E
                              (&local_5b8,&local_6b8);
            if (cVar8 == '\0') {
              ppppuStack_3e0 =
                   (undefined ****)
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
              local_5b8 = (undefined ****)&PTR_DAT_00626f30;
              ppppuStack_5b0 = (undefined ****)0x2;
              uStack_598 = (double *)0x0;
              uStack_5a8 = &local_3e8;
              local_5a0 = (undefined ****)&DAT_00000001;
              local_3e8 = &local_6b8;
                    /* try { // try from 00461b7a to 00461b82 has its CatchHandler @ 00461e09 */
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_5b8);
            }
            else {
              _ZN3std4path4Path4join17h83de109013289b74E(&local_3e8,uVar1,uVar2,"indexes",7);
              ppppuVar5 = local_3d8;
              ppppuVar4 = ppppuStack_3e0;
                    /* try { // try from 00461598 to 004615c0 has its CatchHandler @ 00461df2 */
              _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h802dbaad1c9ecedeE
                        (&local_5b8,&local_218);
              _ZN3std4path4Path4join17h70c4a69e8de2a5d4E(local_670,ppppuVar4,ppppuVar5,&local_5b8);
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(&local_3e8);
              local_618 = 0;
              local_608 = 0;
              local_600 = 0;
              local_5f8 = 0;
                    /* try { // try from 004615fb to 00461633 has its CatchHandler @ 00461e04 */
              _ZN5milli5index5Index3new17hfa390c517ff57802E(&local_5b8,&local_618,local_670);
              _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h2c19ca08a329c717E
                        (&local_3e8,&local_5b8,local_668,local_660);
              ppppuVar5 = ppppuStack_3e0;
              ppppuVar4 = local_3e8;
              pppppuVar10 = (undefined *****)ppppuStack_3e0;
              if ((undefined *****)local_3e8 == (undefined *****)0x0) {
LAB_00461c4f:
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_670)
                ;
                goto LAB_00461c5c;
              }
              (*(code *)PTR_memcpy_0063bdc0)(local_1f0,&local_3d8,0x1c0);
              local_200 = ppppuVar4;
              local_1f8 = ppppuVar5;
              local_3e8 = &local_6b8;
              ppppuStack_3e0 =
                   (undefined ****)
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
              local_5b8 = (undefined ****)&PTR_DAT_00626f78;
              ppppuStack_5b0 = (undefined ****)0x2;
              uStack_598 = (double *)0x0;
              uStack_5a8 = &local_3e8;
              local_5a0 = (undefined ****)&DAT_00000001;
                    /* try { // try from 004616d7 to 004616f8 has its CatchHandler @ 00461dff */
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_5b8);
              (*(code *)PTR__ZN5milli5index5Index8read_txn17hdaa3c3babd8b63bfE_0063cff0)
                        (&local_5b8,&local_200);
              pppppuVar10 = uStack_5a8;
              local_3e8 = ppppuStack_5b0;
              ppppuStack_3e0 = (undefined ****)uStack_5a8;
              local_3d8 = local_5a0;
              pppppuVar6 = (undefined *****)local_5a0;
              pppppuVar7 = (undefined *****)ppppuStack_5b0;
              lVar3 = local_6d0;
              if ((int)local_5b8 == 1) {
                uStack_5a8 = (undefined *****)local_5a0;
                local_5b8 = ppppuStack_5b0;
                ppppuStack_5b0 = (undefined ****)pppppuVar10;
                    /* try { // try from 00461dcb to 00461ddc has its CatchHandler @ 00461ded */
                pppppuVar10 = (undefined *****)
                              _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                        (&local_5b8);
LAB_00461c42:
                    /* try { // try from 00461c42 to 00461c4e has its CatchHandler @ 00461deb */
                _ZN4core3ptr40drop_in_place_LT_milli__index__Index_GT_17h284309982e252038E
                          (&local_200);
                goto LAB_00461c4f;
              }
              while (ppppuStack_680 = (undefined ****)pppppuVar10,
                    local_688 = (undefined ****)pppppuVar7, local_678 = (undefined ****)pppppuVar6,
                    lVar3 != 0) {
                local_6f4 = 0;
                    /* try { // try from 00461772 to 0046182a has its CatchHandler @ 00461e0e */
                _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_3len17h69dce8bcc396c91aE
                          (&local_5b8,local_98,local_90,&local_688);
                if ((int)local_5b8 != 5) {
                    /* try { // try from 00461d20 to 00461d96 has its CatchHandler @ 00461de9 */
                  pppppuVar10 = (undefined *****)
                                _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                          (&local_5b8);
LAB_00461c35:
                    /* try { // try from 00461c35 to 00461c41 has its CatchHandler @ 00461ded */
                  _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                            (&local_688);
                  goto LAB_00461c42;
                }
                local_6c8 = ppppuStack_5b0;
                local_3e8 = &local_6b8;
                ppppuStack_3e0 =
                     (undefined ****)
                     _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5188594b39e2178aE;
                local_5b8 = (undefined ****)&PTR_DAT_00626f98;
                ppppuStack_5b0 = (undefined ****)0x2;
                uStack_598 = (double *)0x0;
                uStack_5a8 = &local_3e8;
                local_5a0 = (undefined ****)&DAT_00000001;
                (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_5b8);
                _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_4iter17h870a07eed8c7b8c6E
                          (&local_3e8,local_98,local_90,&local_688);
                if ((int)local_3e8 != 5) {
                  local_5b8 = local_3e8;
                  ppppuStack_5b0 = ppppuStack_3e0;
                  uStack_5a8 = (undefined *****)local_3d8;
                  pppppuVar10 = (undefined *****)
                                _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                          (&local_5b8);
                  goto LAB_00461c35;
                }
                local_638 = lVar3 + -1;
                local_658 = 0;
                local_650 = ppppuStack_3e0;
                local_648 = local_3d8._0_1_;
                while( true ) {
                    /* try { // try from 00461880 to 00461a4e has its CatchHandler @ 00461e41 */
                  _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h25398bc221a1933dE
                            (&local_618,&local_658);
                  ppppuVar4 = local_5f0;
                  if ((int)local_618 != 1) break;
                  lVar3 = CONCAT44(uStack_604,local_608);
                  local_6c0 = local_610;
                  pppppuVar10 = (undefined *****)CONCAT44(uStack_5f4,local_5f8);
                  if (lVar3 == 0) {
                    uStack_5a8 = (undefined *****)local_5f0;
                    /* try { // try from 00461c18 to 00461c24 has its CatchHandler @ 00461de7 */
                    local_5b8 = (undefined ****)CONCAT44(uStack_5fc,local_600);
                    ppppuStack_5b0 = (undefined ****)pppppuVar10;
                    pppppuVar10 = (undefined *****)
                                  _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                            (&local_5b8);
                    /* try { // try from 00461c25 to 00461c34 has its CatchHandler @ 00461de9 */
                    _ZN4core3ptr158drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_heed__iterator__iter__RoIter_LT_heed_types__bytes__Bytes_C_heed_types__bytes__Bytes_GT__GT__GT_17h8b6245f7b0e0aef2E
                              (&local_658);
                    goto LAB_00461c35;
                  }
                  iVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h040ce4ab2eb0e8c7E
                                    (lVar3,(undefined *)
                                           ((long)CONCAT44(uStack_5fc,local_600) + lVar3));
                  local_6f4 = local_6f4 + iVar9;
                  local_5b8._0_4_ = iVar9;
                  iVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h040ce4ab2eb0e8c7E
                                    (pppppuVar10,(undefined *)((long)ppppuVar4 + (long)pppppuVar10))
                  ;
                  local_5b8 = (undefined ****)CONCAT44(local_5b8._4_4_,iVar9);
                  local_6f4 = local_6f4 + iVar9;
                  if (((ulong)((long)local_6c0 * -0x2d77318fc504816f) >> 4 |
                      (long)local_6c0 * -0x2d77318fc504816f << 0x3c) < 0x68db8bac710cc) {
                    auVar12._8_4_ = (int)((ulong)local_6c0 >> 0x20);
                    auVar12._0_8_ = local_6c0;
                    auVar12._12_4_ = _UNK_00245c84;
                    auVar11._8_4_ = (int)((ulong)local_6c8 >> 0x20);
                    auVar11._0_8_ = local_6c8;
                    auVar11._12_4_ = _UNK_00245c84;
                    local_5e8 = (((auVar12._8_8_ - _UNK_00245b28) +
                                 ((double)CONCAT44(_s__00245c80,(int)local_6c0) - _DAT_00245b20)) /
                                ((auVar11._8_8_ - _UNK_00245b28) +
                                ((double)CONCAT44(_s__00245c80,(int)local_6c8) - _DAT_00245b20))) *
                                _DAT_002467c8;
                    local_5b8 = (undefined ****)&local_6c0;
                    ppppuStack_5b0 =
                         (undefined ****)
                         PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063be40
                    ;
                    uStack_5a8 = &local_6c8;
                    local_5a0 = (undefined ****)
                                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063c748
                    ;
                    uStack_598 = &local_5e8;
                    local_590 = 
                    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_0063d040
                    ;
                    local_3e8 = (undefined ****)&PTR_s_Visited_00626fd8;
                    ppppuStack_3e0 = (undefined ****)0x4;
                    local_3c8 = &DAT_00253268;
                    local_3c0 = 3;
                    local_3d0 = 3;
                    local_3d8 = (undefined ****)&local_5b8;
                    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_3e8)
                    ;
                  }
                }
                    /* try { // try from 00461a54 to 00461ad0 has its CatchHandler @ 00461e0e */
                _ZN4core3ptr158drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_heed__iterator__iter__RoIter_LT_heed_types__bytes__Bytes_C_heed_types__bytes__Bytes_GT__GT__GT_17h8b6245f7b0e0aef2E
                          (&local_658);
                lVar3 = local_638;
                local_3e8 = (undefined ****)&local_6f4;
                ppppuStack_3e0 =
                     (undefined ****)
                     PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_0063c6e8
                ;
                local_5b8 = (undefined ****)&PTR_DAT_00626fb8;
                ppppuStack_5b0 = (undefined ****)0x2;
                uStack_598 = (double *)0x0;
                uStack_5a8 = &local_3e8;
                local_5a0 = (undefined ****)&DAT_00000001;
                (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_5b8);
                pppppuVar6 = (undefined *****)local_678;
                pppppuVar7 = (undefined *****)local_688;
                pppppuVar10 = (undefined *****)ppppuStack_680;
              }
                    /* try { // try from 00461ada to 00461ae6 has its CatchHandler @ 00461dff */
              _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                        (&local_688);
                    /* try { // try from 00461ae7 to 00461af3 has its CatchHandler @ 00461e04 */
              _ZN4core3ptr40drop_in_place_LT_milli__index__Index_GT_17h284309982e252038E(&local_200)
              ;
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_670);
              pppppuVar10 = (undefined *****)local_640;
            }
          }
                    /* try { // try from 00461ca4 to 00461cad has its CatchHandler @ 00461e13 */
          _ZN4core3ptr108drop_in_place_LT_heed__iterator__iter__RoIter_LT_heed_types__bytes__Bytes_C_heed_types__bytes__Bytes_GT__GT_17h63e10fe853a1c2b7E
                    (&local_6e0);
                    /* try { // try from 00461cae to 00461cb7 has its CatchHandler @ 00461e37 */
          _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                    (&local_6a8);
                    /* try { // try from 00461cb8 to 00461cc1 has its CatchHandler @ 00461e9e */
          _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                    (&local_6f0);
          pppppuVar10 = (undefined *****)0x0;
          goto LAB_00461c7a;
        }
        local_5b8 = local_3e8;
        ppppuStack_5b0 = ppppuStack_3e0;
        uStack_5a8 = (undefined *****)local_3d8;
                    /* try { // try from 00461bee to 00461bfa has its CatchHandler @ 00461e13 */
        pppppuVar10 = (undefined *****)
                      _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                                (&local_5b8);
      }
LAB_00461c66:
                    /* try { // try from 00461c66 to 00461c6f has its CatchHandler @ 00461e37 */
      _ZN4core3ptr66drop_in_place_LT_heed__txn__RoTxn_LT_heed__txn__WithoutTls_GT__GT_17h2e9ee56cdfa2a58eE
                (&local_6a8);
    }
                    /* try { // try from 00461c70 to 00461c79 has its CatchHandler @ 00461e9e */
    _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
              (&local_6f0);
  }
LAB_00461c7a:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_630);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(param_1);
  return pppppuVar10;
}