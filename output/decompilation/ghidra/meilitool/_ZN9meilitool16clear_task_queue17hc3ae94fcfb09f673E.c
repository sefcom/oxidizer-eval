undefined8 *** _ZN9meilitool16clear_task_queue17hc3ae94fcfb09f673E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  undefined8 **ppuVar8;
  undefined auVar9 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 **local_1c0;
  undefined8 uStack_1b8;
  undefined8 **local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 **local_188;
  long local_180;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 **local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 *local_120;
  undefined local_118 [8];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 **local_100;
  char local_f8;
  undefined8 **local_f0;
  undefined8 **local_e8;
  undefined8 **local_e0;
  undefined8 **local_d8;
  undefined8 **local_d0;
  undefined8 **local_c8;
  undefined local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 **local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined *local_60;
  undefined8 **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0045af6c to 0045af8b has its CatchHandler @ 0045b8bc */
  _ZN3std4path4Path4join17h83de109013289b74E(local_c0,uVar1,uVar2,"tasks",5);
  local_1d8 = (undefined **)0x0;
  uStack_1c8 = (undefined8 ***)((ulong)uStack_1c8._4_4_ << 0x20);
  uStack_1b8 = (ulong)uStack_1b8._4_4_ << 0x20;
  local_1c0 = (undefined8 ***)0x6400000001;
                    /* try { // try from 0045afb3 to 0045afe7 has its CatchHandler @ 0045b8e4 */
  _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
            (&local_158,&local_1d8,local_c0);
  auVar9 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h142c0f6cead12e37E
                     (&local_158,local_b8,local_b0);
  pppuVar6 = auVar9._8_8_;
  if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_0045b590;
  local_1d8 = &PTR_s_Deleting_tasks_from_the_database_00626978;
  uStack_1d0 = (undefined8 ***)&DAT_00000001;
  uStack_1c8 = (undefined8 ***)&DAT_00000008;
  local_1c0 = (undefined8 ***)0x0;
  uStack_1b8 = 0;
  local_1a0 = pppuVar6;
                    /* try { // try from 0045b01d to 0045b075 has its CatchHandler @ 0045b8cf */
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)(&local_1d8);
  _ZN4heed3txn5RwTxn3new17h2545535f9c0877d6E(&local_1d8,&local_1a0);
  pppuVar6 = uStack_1c8;
  local_158 = uStack_1d0;
  pppuVar3 = local_158;
  uStack_150 = uStack_1c8;
  local_148 = local_1c0;
  local_158._0_4_ = (int)uStack_1d0;
  local_158._4_4_ = (undefined4)((ulong)uStack_1d0 >> 0x20);
  uStack_150._0_4_ = SUB84(uStack_1c8,0);
  uStack_150._4_4_ = (undefined4)((ulong)uStack_1c8 >> 0x20);
  local_158 = pppuVar3;
  uStack_150 = pppuVar6;
  if ((int)local_1d8 == 1) {
    uStack_1c8 = (undefined8 ***)local_1c0;
    local_1d8 = (undefined **)uStack_1d0;
    uStack_1d0 = pppuVar6;
    pppuVar6 = (undefined8 ***)
               _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                         (&local_1d8);
  }
  else {
    local_188 = local_1c0;
    local_198 = (int)local_158;
    uStack_194 = local_158._4_4_;
    uStack_190 = (undefined4)uStack_150;
    uStack_18c = uStack_150._4_4_;
                    /* try { // try from 0045b098 to 0045b3fb has its CatchHandler @ 0045b8ad */
    _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
              (&local_1d8,&local_1a0,&local_198,"all-tasks",9);
    pppuVar5 = uStack_1c8;
    pppuVar3 = uStack_1d0;
    pppuVar6 = uStack_1d0;
    if (((ulong)local_1d8 & 1) == 0) {
      _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_3len17h69dce8bcc396c91aE
                (&local_1d8,uStack_1d0,(ulong)uStack_1c8 & 0xffffffff,&local_198);
      if ((int)local_1d8 == 5) {
        local_a8 = uStack_1d0;
        _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                  (&local_1d8,&local_1a0,&local_198,"status",6);
        pppuVar4 = uStack_1d0;
        pppuVar6 = uStack_1d0;
        if (((ulong)local_1d8 & 1) == 0) {
          local_15c = (undefined4)uStack_1c8;
          _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                    (&local_1d8,&local_1a0,&local_198,"kind",4);
          pppuVar6 = uStack_1d0;
          if (((ulong)local_1d8 & 1) == 0) {
            local_c8 = uStack_1d0;
            local_160 = (undefined4)uStack_1c8;
            _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                      (&local_1d8,&local_1a0,&local_198,"index-tasks",0xb);
            pppuVar6 = uStack_1d0;
            if (((ulong)local_1d8 & 1) == 0) {
              local_d0 = uStack_1d0;
              local_164 = (undefined4)uStack_1c8;
              _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                        (&local_1d8,&local_1a0,&local_198,"canceled_by",0xb);
              pppuVar6 = uStack_1d0;
              if (((ulong)local_1d8 & 1) == 0) {
                local_d8 = uStack_1d0;
                local_168 = (undefined4)uStack_1c8;
                _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                          (&local_1d8,&local_1a0,&local_198,"enqueued-at",0xb);
                pppuVar6 = uStack_1d0;
                if (((ulong)local_1d8 & 1) == 0) {
                  local_e0 = uStack_1d0;
                  local_16c = (undefined4)uStack_1c8;
                  _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                            (&local_1d8,&local_1a0,&local_198,"started-at",10);
                  pppuVar6 = uStack_1d0;
                  if (((ulong)local_1d8 & 1) == 0) {
                    local_e8 = uStack_1d0;
                    local_170 = (undefined4)uStack_1c8;
                    _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
                              (&local_1d8,&local_1a0,&local_198,"finished-at",0xb);
                    pppuVar6 = uStack_1d0;
                    if (((ulong)local_1d8 & 1) == 0) {
                      local_f0 = uStack_1d0;
                      local_174 = (undefined4)uStack_1c8;
                      pppuVar6 = (undefined8 ***)
                                 _ZN9meilitool26try_clearing_poly_database17h6319c326d57d43a6E
                                           (&local_198,pppuVar3,(ulong)pppuVar5 & 0xffffffff,
                                            "all-tasks",9);
                      if (((((pppuVar6 == (undefined8 ***)0x0) &&
                            (pppuVar6 = (undefined8 ***)
                                        _ZN9meilitool26try_clearing_poly_database17h6319c326d57d43a6E
                                                  (&local_198,pppuVar4,local_15c,"status",6),
                            pppuVar6 == (undefined8 ***)0x0)) &&
                           (pppuVar6 = (undefined8 ***)
                                       _ZN9meilitool26try_clearing_poly_database17h6319c326d57d43a6E
                                                 (&local_198,local_c8,local_160,"kind",4),
                           pppuVar6 == (undefined8 ***)0x0)) &&
                          ((pppuVar6 = (undefined8 ***)
                                       _ZN9meilitool26try_clearing_poly_database17h6319c326d57d43a6E
                                                 (&local_198,local_d0,local_164,"index-tasks",0xb),
                           pppuVar6 == (undefined8 ***)0x0 &&
                           (pppuVar6 = (undefined8 ***)
                                       _ZN9meilitool26try_clearing_poly_database17h6319c326d57d43a6E
                                                 (&local_198,local_d8,local_168,"canceled_by",0xb),
                           pppuVar6 == (undefined8 ***)0x0)))) &&
                         ((pppuVar6 = (undefined8 ***)
                                      _ZN9meilitool26try_clearing_poly_database17h6319c326d57d43a6E
                                                (&local_198,local_e0,local_16c,"enqueued-at",0xb),
                          pppuVar6 == (undefined8 ***)0x0 &&
                          ((pppuVar6 = (undefined8 ***)
                                       _ZN9meilitool26try_clearing_poly_database17h6319c326d57d43a6E
                                                 (&local_198,local_e8,local_170,"started-at",10),
                           pppuVar6 == (undefined8 ***)0x0 &&
                           (pppuVar6 = (undefined8 ***)
                                       _ZN9meilitool26try_clearing_poly_database17h6319c326d57d43a6E
                                                 (&local_198,local_f0,local_174,"finished-at",0xb),
                           pppuVar6 == (undefined8 ***)0x0)))))) {
                        uStack_1c8 = (undefined8 ***)local_188;
                        local_1d8 = (undefined **)CONCAT44(uStack_194,local_198);
                        uStack_1d0 = (undefined8 ***)CONCAT44(uStack_18c,uStack_190);
                    /* try { // try from 0045b41b to 0045b500 has its CatchHandler @ 0045b87a */
                        (*(code *)PTR__ZN4heed3txn5RwTxn6commit17hf2aa640749b3a898E_0063cb10)
                                  (&local_158,&local_1d8);
                        pppuVar6 = (undefined8 ***)
                                   _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h13edab0cedbcce6eE
                                             (&local_158,"While committing the transaction",0x20);
                        if (pppuVar6 == (undefined8 ***)0x0) {
                          local_158 = &local_a8;
                          uStack_150 = (undefined8 ***)
                                       PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063c748
                          ;
                          local_1d8 = &PTR_s_Successfully_deleted_00626988;
                          uStack_1d0 = (undefined8 ***)0x2;
                          uStack_1b8 = 0;
                          local_1c0 = (undefined8 **)0x1;
                          uStack_1c8 = (undefined8 ***)&local_158;
                          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)
                                    (&local_1d8);
                          local_1d8 = &PTR_s_Deleting_the_content_files_from_d_006269a8;
                          uStack_1d0 = (undefined8 ***)&DAT_00000001;
                          uStack_1c8 = (undefined8 ***)&DAT_00000008;
                          local_1c0 = (undefined8 ***)0x0;
                          uStack_1b8 = 0;
                          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)
                                    (&local_1d8);
                          local_120 = (undefined8 **)0x0;
                          _ZN3std4path4Path4join17h83de109013289b74E
                                    (local_118,uVar1,uVar2,"update_files",0xc);
                    /* try { // try from 0045b501 to 0045b535 has its CatchHandler @ 0045b842 */
                          _ZN3std2fs8read_dir17h99e6717d7398dc46E(&local_1d8,local_118);
                          _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h7c7eb6d617d0da56E
                                    (&local_158,local_1d8,(ulong)uStack_1d0 & 0xffffffff,
                                     CONCAT44(uStack_10c,local_110),CONCAT44(uStack_104,uStack_108))
                          ;
                          pppuVar6 = local_158;
                          if ((char)uStack_150 != '\x02') {
                            local_100 = local_158;
                            local_f8 = (char)uStack_150;
                            ppuVar8 = (undefined8 **)0x0;
                            while( true ) {
                              (*(code *)
                                PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_0063c820
                              )(&local_158,&local_100);
                              if ((int)local_158 != 1) break;
                              if (uStack_150 == (undefined8 ***)0x0) {
                                local_58 = local_148;
                                local_78 = (undefined8 **)CONCAT44(uStack_10c,local_110);
                                uStack_70 = (undefined *)CONCAT44(uStack_104,uStack_108);
                                local_a0 = (undefined8 **)&local_78;
                                local_98 = (undefined8 **)
                                           PTR__ZN55__LT_std__path__Display_u20_as_u20_core__fmt__Debug_GT_3fmt17h805f8819fa6944ceE_0063cf60
                                ;
                                uStack_88 = 
                                PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_0063c6b0
                                ;
                                local_1d8 = &PTR_s_Error_while_reading_a_file_in_co_006269e8;
                                uStack_1d0 = (undefined8 ***)0x3;
                                uStack_1b8 = 0;
                                local_1c0 = (undefined8 ***)0x2;
                                uStack_1c8 = &local_a0;
                                local_90 = &local_58;
                    /* try { // try from 0045b7a5 to 0045b7ad has its CatchHandler @ 0045b847 */
                                (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)
                                          (&local_1d8);
                    /* try { // try from 0045b7ae to 0045b7b5 has its CatchHandler @ 0045b88e */
                                _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h47668f3561af4bc5E
                                          (&local_58);
                              }
                              else {
                                local_a0 = uStack_150;
                                local_98 = local_148;
                                local_80 = local_130;
                                local_90 = (undefined8 ***)CONCAT44(uStack_13c,local_140);
                                uStack_88 = (undefined *)CONCAT44(uStack_134,uStack_138);
                    /* try { // try from 0045b660 to 0045b673 has its CatchHandler @ 0045b87c */
                                (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_0063cf58)
                                          (&local_1d8,&local_a0);
                                lVar7 = _ZN3std2fs11remove_file17h6570c52ed1ca2983E(&local_1d8);
                                if (lVar7 == 0) {
                                  ppuVar8 = (undefined8 **)((long)ppuVar8 + 1);
                                  local_120 = ppuVar8;
                                }
                                else {
                                  local_180 = lVar7;
                    /* try { // try from 0045b682 to 0045b68d has its CatchHandler @ 0045b86b */
                                  (*(code *)
                                    PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_0063cf58)
                                            (&local_58,&local_a0);
                                  local_40 = local_50;
                                  uStack_3c = uStack_4c;
                                  uStack_38 = uStack_48;
                                  uStack_34 = uStack_44;
                                  local_78 = (undefined8 **)&local_40;
                                  uStack_70 = 
                                  PTR__ZN55__LT_std__path__Display_u20_as_u20_core__fmt__Debug_GT_3fmt17h805f8819fa6944ceE_0063cf60
                                  ;
                                  local_68 = &local_180;
                                  local_60 = 
                                  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_0063c6b0
                                  ;
                                  local_1d8 = &PTR_s_Error_while_deleting___006269b8;
                                  uStack_1d0 = (undefined8 ***)0x3;
                                  uStack_1b8 = 0;
                                  uStack_1c8 = (undefined8 ***)&local_78;
                                  local_1c0 = (undefined8 ***)0x2;
                    /* try { // try from 0045b70c to 0045b714 has its CatchHandler @ 0045b859 */
                                  (*(code *)
                                    PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)
                                            (&local_1d8);
                                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                                            (&local_58);
                    /* try { // try from 0045b71d to 0045b726 has its CatchHandler @ 0045b87c */
                                  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h47668f3561af4bc5E
                                            (&local_180);
                                }
                    /* try { // try from 0045b5f4 to 0045b611 has its CatchHandler @ 0045b88e */
                                _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17hbe251792752b0663E
                                          (&local_a0);
                              }
                            }
                    /* try { // try from 0045b7bb to 0045b822 has its CatchHandler @ 0045b842 */
                            _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17hd947781e89877a06E
                                      (&local_100);
                            local_158 = (undefined8 ***)&local_120;
                            uStack_150 = (undefined8 ***)
                                         PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0063be40
                            ;
                            local_1d8 = &PTR_s_Successfully_deleted_00626a18;
                            uStack_1d0 = (undefined8 ***)0x2;
                            uStack_1b8 = 0;
                            uStack_1c8 = (undefined8 ***)&local_158;
                            local_1c0 = (undefined8 **)&DAT_00000001;
                            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0063cef8)
                                      (&local_1d8);
                            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                                      (local_118);
                    /* try { // try from 0045b830 to 0045b839 has its CatchHandler @ 0045b8e4 */
                            _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                                      (&local_1a0);
                            pppuVar6 = (undefined8 ***)0x0;
                            goto LAB_0045b590;
                          }
                          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E
                                    (local_118);
                        }
                        goto LAB_0045b586;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
                    /* try { // try from 0045b56e to 0045b575 has its CatchHandler @ 0045b8ad */
        pppuVar6 = (undefined8 ***)
                   _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                             (&local_1d8);
      }
    }
                    /* try { // try from 0045b57c to 0045b585 has its CatchHandler @ 0045b8cf */
    _ZN4core3ptr37drop_in_place_LT_heed__txn__RwTxn_GT_17h7902c97f86582273E(&local_198);
  }
LAB_0045b586:
                    /* try { // try from 0045b586 to 0045b58f has its CatchHandler @ 0045b8e4 */
  _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
            (&local_1a0);
LAB_0045b590:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_c0);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(param_1);
  return pppuVar6;
}