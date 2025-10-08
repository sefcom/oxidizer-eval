ulong _ZN9meilitool7upgrade5v1_1226rebuild_field_distribution17h446077db02086abbE
                (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  ulong local_108;
  ulong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulong local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  ulong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong *local_80;
  undefined local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_40;
  long lStack_38;
  undefined8 local_30;
  
  _ZN3std4path4Path4join17h83de109013289b74E(local_70,param_1,param_2,"tasks",5);
  local_d8 = 0;
  uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
  uStack_b8 = (ulong)uStack_b8._4_4_ << 0x20;
  local_c0 = 0x6400000001;
                    /* try { // try from 00458ee0 to 00458f0b has its CatchHandler @ 004591c9 */
  _ZN4heed4envs16env_open_options23EnvOpenOptions_LT_T_GT_4open17hd61d4b6eb856d08aE
            (&local_118,&local_d8,local_70);
  auVar4 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h142c0f6cead12e37E
                     (&local_118,local_68,local_60);
  uVar3 = auVar4._8_8_;
  if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                    /* try { // try from 00458f1c to 00458f65 has its CatchHandler @ 004591b4 */
    local_100 = uVar3;
    _ZN4heed3txn5RwTxn3new17h2545535f9c0877d6E(&local_d8,&local_100);
    uVar1 = uStack_c8;
    local_118 = uStack_d0;
    uVar3 = local_118;
    uStack_110 = uStack_c8;
    local_108 = local_c0;
    local_118._0_4_ = (int)uStack_d0;
    local_118._4_4_ = (undefined4)(uStack_d0 >> 0x20);
    uStack_110._0_4_ = (undefined4)uStack_c8;
    uStack_110._4_4_ = (undefined4)(uStack_c8 >> 0x20);
    local_118 = uVar3;
    uStack_110 = uVar1;
    if ((int)local_d8 == 1) {
      uStack_c8 = local_c0;
      local_d8 = uStack_d0;
      uStack_d0 = uVar1;
      uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                        (&local_d8);
    }
    else {
      local_e8 = local_c0;
      local_f8 = (int)local_118;
      uStack_f4 = local_118._4_4_;
      uStack_f0 = (undefined4)uStack_110;
      uStack_ec = uStack_110._4_4_;
                    /* try { // try from 00458f82 to 00459068 has its CatchHandler @ 004591a5 */
      _ZN9meilitool20try_opening_database17h5f1437142b1d0e7bE(&local_d8,&local_100,&local_f8);
      uVar2 = uStack_c8;
      uVar1 = uStack_d0;
      uVar3 = uStack_d0;
      if ((local_d8 & 1) == 0) {
        _ZN9meilitool20try_opening_database17h460df49269848c50E(&local_d8,&local_100,&local_f8);
        _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h78e7865125156773E
                  (&local_118,&local_d8,local_68,local_60);
        uVar3 = uStack_110;
        if ((local_118 & 1) == 0) {
          local_50 = uStack_110;
          local_48 = (undefined4)local_108;
          _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_3len17h69dce8bcc396c91aE
                    (&local_d8,uVar1,uVar2 & 0xffffffff,&local_f8);
          auVar4 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h0261080ff8f9add2E
                             (&local_d8);
          uVar3 = auVar4._8_8_;
          if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
            local_58 = uVar3;
            _ZN4heed9databases8database34Database_LT_KC_C_DC_C_C_C_CDUP_GT_4iter17h870a07eed8c7b8c6E
                      (&local_118,uVar1,uVar2 & 0xffffffff,&local_f8);
            if ((int)local_118 == 5) {
              _ZN4core4iter6traits8iterator8Iterator7collect17h7b458c1e7aca4564E
                        (&local_40,uStack_110,local_108 & 0xff);
                    /* try { // try from 00459069 to 0045906d has its CatchHandler @ 00459193 */
              local_118 = _ZN68__LT_alloc__sync__Arc_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17h592d2c37b24b28ebE
                                    ();
              local_119 = 0;
              local_a8 = &local_119;
              local_c0 = local_40;
              uStack_b8 = lStack_38;
              local_b0 = local_30;
              local_98 = &local_58;
              local_80 = &local_50;
              local_d8 = CONCAT44(uStack_f4,local_f8);
              uStack_d0 = CONCAT44(uStack_ec,uStack_f0);
              uStack_c8 = local_e8;
                    /* try { // try from 004590eb to 004590f4 has its CatchHandler @ 00459184 */
              local_a0 = &local_118;
              local_90 = param_1;
              local_88 = param_2;
              uVar3 = _ZN3std6thread6scoped5scope17h44f32d2d7e60c3abE(&local_d8);
                    /* try { // try from 004590f5 to 00459101 has its CatchHandler @ 00459182 */
              _ZN4core3ptr46drop_in_place_LT_milli__progress__Progress_GT_17h9abe3fc87df39f20E
                        (&local_118);
                    /* try { // try from 00459102 to 0045910b has its CatchHandler @ 004591c9 */
              _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
                        (&local_100);
              goto LAB_00459162;
            }
            local_d8 = local_118;
            uStack_d0 = uStack_110;
            uStack_c8 = local_108;
                    /* try { // try from 0045913e to 0045914a has its CatchHandler @ 004591a5 */
            uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h320a5f0a74271d24E
                              (&local_d8);
          }
        }
      }
                    /* try { // try from 0045914e to 00459157 has its CatchHandler @ 004591b4 */
      _ZN4core3ptr37drop_in_place_LT_heed__txn__RwTxn_GT_17h7902c97f86582273E(&local_f8);
    }
                    /* try { // try from 00459158 to 00459161 has its CatchHandler @ 004591c9 */
    _ZN4core3ptr70drop_in_place_LT_heed__envs__env__Env_LT_heed__txn__WithoutTls_GT__GT_17h6ba4d8fe12604d02E
              (&local_100);
  }
LAB_00459162:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_70);
  return uVar3;
}