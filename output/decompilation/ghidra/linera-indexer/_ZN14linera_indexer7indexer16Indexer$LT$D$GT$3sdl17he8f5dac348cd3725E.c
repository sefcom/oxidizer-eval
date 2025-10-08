void _ZN14linera_indexer7indexer16Indexer_LT_D_GT_3sdl17he8f5dac348cd3725E
               (undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long local_1d0;
  long local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  
  uVar5 = 0x8000000000000016;
  if (*param_3 == -0x8000000000000000) {
    plVar2 = (long *)*param_2;
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    _ZN13async_graphql6schema45Schema_LT_Query_C_Mutation_C_Subscription_GT_32build_with_ignore_name_conflicts17h1342e6cae714c4d7E
              (&local_1a8);
    local_1d0 = _ZN13async_graphql6schema52SchemaBuilder_LT_Query_C_Mutation_C_Subscription_GT_6finish17h11c3df4961b2389fE
                          (&local_1a8);
    local_1c8 = 0;
    uStack_1c0 = CONCAT31(uStack_1c0._1_3_,2);
                    /* try { // try from 008c84cf to 008c84de has its CatchHandler @ 008c858e */
    (*(code *)
      PTR__ZN13async_graphql8registry10export_sdl51__LT_impl_u20_async_graphql__registry__Registry_GT_10export_sdl17h29009144a8ce4c10E_01625538
    )(&local_1a8,*(long *)(local_1d0 + 0x60) + 0x10,&local_1c8);
    param_1[3] = local_198;
    *(undefined4 *)(param_1 + 1) = local_1a8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1a4;
    *(undefined4 *)(param_1 + 2) = uStack_1a0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_19c;
    *param_1 = 0x8000000000000016;
    _ZN4core3ptr609drop_in_place_LT_async_graphql__schema__Schema_LT_linera_indexer__indexer__State_LT_linera_views__context__ViewContext_LT__LP__RP__C_linera_views__backends__metering__MeteredStore_LT_linera_views__backends__lru_caching__LruCachingStore_LT_linera_views__backends__metering__MeteredStore_LT_linera_views__backends__value_splitting__ValueSplittingStore_LT_linera_views__backends__metering__MeteredStore_LT_linera_views__backends__rocks_db__RocksDbStoreInternal_GT__GT__GT__GT__GT__GT__GT__C_async_graphql__types__empty_mutation__EmptyMutation_C_async_graphql__types__empty_subscription__EmptySubscription_GT__GT_17h8b326f6d98370bbeE
              (&local_1d0);
  }
  else {
    local_1b8 = param_3[2];
    local_1c8 = *param_3;
    uStack_1c0 = *(undefined4 *)(param_3 + 1);
    uStack_1bc = *(undefined4 *)((long)param_3 + 0xc);
    puVar4 = (undefined8 *)
             _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h3531eb6b06768b82E
                       (param_2[1],param_2[2],param_3[1]);
    if (puVar4 == (undefined8 *)0x0) {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_01625558
      )(&local_1a8,&local_1c8);
      param_1[3] = local_198;
      *(undefined4 *)(param_1 + 1) = local_1a8;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1a4;
      *(undefined4 *)(param_1 + 2) = uStack_1a0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_19c;
      uVar5 = 0x8000000000000010;
    }
    else {
                    /* try { // try from 008c8532 to 008c855d has its CatchHandler @ 008c85a9 */
      (**(code **)(puVar4[1] + 0x20))(&local_1a8,*puVar4);
      param_1[3] = local_198;
      *(undefined4 *)(param_1 + 1) = local_1a8;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1a4;
      *(undefined4 *)(param_1 + 2) = uStack_1a0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_19c;
    }
    *param_1 = uVar5;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h159531dba3583f20E(param_3);
  }
  return;
}