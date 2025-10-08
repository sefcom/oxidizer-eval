undefined  [16]
_ZN13linera_server13ServerContext10spawn_grpc17h327ee1b7ebb4144cE
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  long local_358;
  long local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined local_318 [24];
  undefined local_300 [32];
  undefined local_2e0 [12];
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined local_2b8;
  undefined8 local_2b0;
  long local_238 [20];
  undefined8 local_198;
  undefined local_190 [28];
  undefined2 local_174;
  undefined local_170 [160];
  undefined local_d0 [160];
  
  local_380 = param_5;
  local_368 = param_4;
  local_348 = param_2;
  local_340 = param_3;
                    /* try { // try from 01272036 to 0127203f has its CatchHandler @ 0127226b */
  local_378 = _ZN5tokio4util17idle_notified_set24IdleNotifiedSet_LT_T_GT_3new17hfa2de3949de8ab0aE();
  local_370 = 0;
                    /* try { // try from 0127204e to 01272057 has its CatchHandler @ 01272261 */
  _ZN12futures_util6stream17futures_unordered27FuturesUnordered_LT_Fut_GT_3new17h7e526590cc15e5bbE
            (local_318);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hcbc6d31946a1353dE
            (local_300,param_4);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h19e75bab53fb4075E
            (local_238,local_300);
  puVar1 = PTR_memcpy_02538ec0;
  local_350 = param_1 + 0xe8;
  local_360 = *(undefined8 *)(param_1 + 0x248);
  local_358 = param_1 + 0x228;
  do {
    (*(code *)puVar1)(local_170,local_238,0xa0);
    uVar3 = local_174;
    uVar2 = local_198;
                    /* try { // try from 012720f3 to 01272104 has its CatchHandler @ 0127227a */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h68b849dbac64e682E
              (local_2e0,local_348,local_340);
    local_328 = local_2d0;
    local_338 = local_2e0._0_4_;
    uStack_334 = local_2e0._4_4_;
    uStack_330 = local_2e0._8_4_;
    uStack_32c = uStack_2d4;
    (*(code *)puVar1)(local_d0,local_238,0xa0);
                    /* try { // try from 0127212c to 01272138 has its CatchHandler @ 01272299 */
    _ZN101__LT_linera_rpc__config__ValidatorInternalNetworkPreConfig_LT_P_GT__u20_as_u20_core__clone__Clone_GT_5clone17h98800c91b9714476E
              (local_2e0,local_350);
                    /* try { // try from 01272139 to 01272143 has its CatchHandler @ 0127229e */
    uVar4 = (*(code *)
              PTR__ZN94__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__clone__Clone_GT_5clone17hd553978925e1521dE_025392b0
            )(&local_380);
                    /* try { // try from 01272144 to 01272172 has its CatchHandler @ 012722c7 */
    auVar5 = _ZN10linera_rpc4grpc6server19GrpcServer_LT_S_GT_5spawn17h6bd68d09aae14e56E
                       (&local_338,uVar3,local_d0,uVar2,local_2e0,local_358,local_360,uVar4,
                        &local_378);
    local_2e0._0_8_ = 0;
    local_2b8 = 0;
    local_2b0 = uVar2;
                    /* try { // try from 0127219f to 012721ab has its CatchHandler @ 012722c9 */
    unique0x10000308 = auVar5;
    _ZN12futures_util6stream17futures_unordered27FuturesUnordered_LT_Fut_GT_4push17h4b585f56bfb479cbE
              (local_318,local_2e0);
    _ZN4core3ptr115drop_in_place_LT_linera_rpc__config__ValidatorPublicNetworkPreConfig_LT_linera_rpc__config__NetworkProtocol_GT__GT_17h0c118893a9712910E
              (local_190);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h19e75bab53fb4075E
              (local_238,local_300);
  } while (local_238[0] != -0x8000000000000000);
                    /* try { // try from 012721e1 to 012721ed has its CatchHandler @ 01272259 */
  _ZN4core3ptr557drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP_linera_core__worker__WorkerState_LT_linera_storage__db_storage__DbStorage_LT_linera_views__backends__metering__MeteredDatabase_LT_linera_views__backends__lru_caching__LruCachingDatabase_LT_linera_views__backends__metering__MeteredDatabase_LT_linera_views__backends__value_splitting__ValueSplittingDatabase_LT_linera_views__backends__metering__MeteredDatabase_LT_linera_views__backends__rocks_db__RocksDbDatabaseInternal_GT__GT__GT__GT__GT__GT__GT__C_usize_C_linera_rpc__config__ShardConfig_RP__GT__GT_17hde1128d6005cfff1E
            (local_300);
  _ZN122__LT_linera_storage_service__client__StorageServiceStoreInternal_u20_as_u20_linera_views__store__ReadableKeyValueStore_GT_23read_multi_values_bytes28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_17h4d398d853afd01b7E
            (local_238,local_318);
                    /* try { // try from 01272203 to 0127222c has its CatchHandler @ 01272275 */
  auVar5 = _ZN120__LT_tokio__task__join_set__JoinSet_LT__LP__RP__GT__u20_as_u20_linera_core__join_set_ext__implementation__JoinSetExt_GT_10spawn_task17h99c6d1e932bd75d2E
                     (&local_378,local_238);
  _local_2e0 = auVar5;
  _ZN4core3ptr74drop_in_place_LT_linera_core__join_set_ext__TaskHandle_LT__LP__RP__GT__GT_17h734b7204546a1d85E
            (local_2e0);
  auVar5._8_8_ = local_370;
  auVar5._0_8_ = local_378;
  _ZN4core3ptr76drop_in_place_LT_tokio_util__sync__cancellation_token__CancellationToken_GT_17h167a36846baaeac9E
            (&local_380);
  return auVar5;
}