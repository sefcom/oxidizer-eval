undefined  [16]
_ZN13linera_server13ServerContext12spawn_simple17h06b180a099588b99E
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined param_5,
          undefined8 param_6)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined local_500 [24];
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined local_4c0 [32];
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 local_490;
  undefined local_488 [10] [16];
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined local_3c0 [168];
  undefined8 local_318;
  undefined local_310 [16];
  undefined local_2f0;
  undefined8 local_2e8;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined local_258 [160];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined2 local_180;
  undefined local_178 [160];
  undefined local_d8 [168];
  
  local_530 = param_6;
  local_518 = param_4;
  local_510 = param_2;
  local_508 = param_3;
                    /* try { // try from 012711da to 012711e3 has its CatchHandler @ 01271487 */
  local_528 = _ZN5tokio4util17idle_notified_set24IdleNotifiedSet_LT_T_GT_3new17hfa2de3949de8ab0aE();
  local_520 = 0;
                    /* try { // try from 012711f2 to 012711fb has its CatchHandler @ 0127147d */
  _ZN12futures_util6stream17futures_unordered27FuturesUnordered_LT_Fut_GT_3new17h44fa2ca5b4f63f4eE
            (local_500);
                    /* try { // try from 01271207 to 01271216 has its CatchHandler @ 01271473 */
  _ZN10linera_rpc6config42ValidatorInternalNetworkPreConfig_LT_P_GT_19clone_with_protocol17h8e3c72b6776c4da3E
            (local_3c0,param_1 + 0xe8,param_5);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hcbc6d31946a1353dE
            (local_4c0,param_4);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h19e75bab53fb4075E
            (local_488,local_4c0);
  do {
    (*(code *)PTR_memcpy_02538ec0)(local_178,local_488,0xa0);
    uVar3 = local_3e8;
    local_4d8 = local_3d0;
    uStack_4d4 = uStack_3cc;
    uStack_4d0 = uStack_3c8;
    uStack_4cc = uStack_3c4;
    local_4e8 = local_3e0;
    uStack_4e4 = uStack_3dc;
    uStack_4e0 = uStack_3d8;
    uStack_4dc = uStack_3d4;
                    /* try { // try from 012712a2 to 012712b1 has its CatchHandler @ 012714a5 */
    _ZN101__LT_linera_rpc__config__ValidatorInternalNetworkPreConfig_LT_P_GT__u20_as_u20_core__clone__Clone_GT_5clone17h65c520a888eb6ea5E
              (local_d8,local_3c0);
                    /* try { // try from 012712b2 to 012712c8 has its CatchHandler @ 012714aa */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h68b849dbac64e682E
              (&local_4a0,local_510,local_508);
    puVar1 = PTR_memcpy_02538ec0;
    local_260 = local_490;
    local_270 = local_4a0;
    uStack_26c = uStack_49c;
    uStack_268 = uStack_498;
    uStack_264 = uStack_494;
    (*(code *)PTR_memcpy_02538ec0)(&local_318,local_d8,0xa8);
    uVar2 = (undefined2)uStack_4cc;
    (*(code *)puVar1)(local_258,local_488,0xa0);
    local_180 = uVar2;
    local_1b8 = uVar3;
    local_1b0 = *(undefined8 *)(param_1 + 0x228);
    uStack_1a8 = *(undefined8 *)(param_1 + 0x230);
    local_1a0 = *(undefined4 *)(param_1 + 0x238);
    uStack_19c = *(undefined4 *)(param_1 + 0x23c);
    uStack_198 = *(undefined4 *)(param_1 + 0x240);
    uStack_194 = *(undefined4 *)(param_1 + 0x244);
    local_190 = 0;
    uStack_188 = 0;
                    /* try { // try from 01271355 to 0127135f has its CatchHandler @ 012714d6 */
    uVar4 = (*(code *)
              PTR__ZN94__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__clone__Clone_GT_5clone17hd553978925e1521dE_025392b0
            )(&local_530);
                    /* try { // try from 01271360 to 0127136f has its CatchHandler @ 012714e8 */
    auVar5 = _ZN10linera_rpc6simple6server15Server_LT_S_GT_5spawn17h3cab418be1ed2dc7E
                       (&local_318,uVar4,&local_528);
    local_318 = 0;
    local_2f0 = 0;
    local_2e8 = uVar3;
                    /* try { // try from 012713a4 to 012713b0 has its CatchHandler @ 012714ea */
    local_310 = auVar5;
    _ZN12futures_util6stream17futures_unordered27FuturesUnordered_LT_Fut_GT_4push17h0957f2e8c9fd50d4E
              (local_500,&local_318);
    _ZN4core3ptr115drop_in_place_LT_linera_rpc__config__ValidatorPublicNetworkPreConfig_LT_linera_rpc__config__NetworkProtocol_GT__GT_17h0c118893a9712910E
              (&local_3e0);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h19e75bab53fb4075E
              (local_488,local_4c0);
  } while (local_488[0]._0_8_ != -0x8000000000000000);
                    /* try { // try from 012713e9 to 012713f2 has its CatchHandler @ 0127146b */
  _ZN4core3ptr320drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP_linera_core__worker__WorkerState_LT_linera_storage__db_storage__DbStorage_LT_linera_views__backends__lru_caching__LruCachingDatabase_LT_linera_storage_service__client__StorageServiceDatabaseInternal_GT__GT__GT__C_usize_C_linera_rpc__config__ShardConfig_RP__GT__GT_17hdc7f7a8b0874bacbE
            (local_4c0);
  _ZN122__LT_linera_storage_service__client__StorageServiceStoreInternal_u20_as_u20_linera_views__store__ReadableKeyValueStore_GT_23read_multi_values_bytes28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_17h4d398d853afd01b7E
            (&local_318,local_500);
                    /* try { // try from 01271408 to 01271431 has its CatchHandler @ 01271491 */
  local_488[0] = _ZN120__LT_tokio__task__join_set__JoinSet_LT__LP__RP__GT__u20_as_u20_linera_core__join_set_ext__implementation__JoinSetExt_GT_10spawn_task17hd2bcb5c2207e434dE
                           (&local_528,&local_318);
  _ZN4core3ptr74drop_in_place_LT_linera_core__join_set_ext__TaskHandle_LT__LP__RP__GT__GT_17h734b7204546a1d85E
            (local_488);
  auVar5._8_8_ = local_520;
  auVar5._0_8_ = local_528;
  _ZN4core3ptr117drop_in_place_LT_linera_rpc__config__ValidatorInternalNetworkPreConfig_LT_linera_rpc__config__NetworkProtocol_GT__GT_17h57611c69c73f7aa1E
            (local_3c0);
  _ZN4core3ptr76drop_in_place_LT_tokio_util__sync__cancellation_token__CancellationToken_GT_17h167a36846baaeac9E
            (&local_530);
  return auVar5;
}