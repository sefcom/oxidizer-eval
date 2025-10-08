void _ZN14linera_indexer6plugin3sdl17h2f1ea37ee0221307E(undefined8 param_1)

{
  long local_1a8 [2];
  undefined local_198;
  
  _ZN13async_graphql6schema45Schema_LT_Query_C_Mutation_C_Subscription_GT_32build_with_ignore_name_conflicts17h0d3096e50a8fdc59E
            (local_1a8 + 1);
  local_1a8[0] = _ZN13async_graphql6schema52SchemaBuilder_LT_Query_C_Mutation_C_Subscription_GT_6finish17h81fac1382b5f9af2E
                           (local_1a8 + 1);
  local_1a8[1] = 0;
  local_198 = 2;
                    /* try { // try from 008c446c to 008c4479 has its CatchHandler @ 008c448d */
  (*(code *)
    PTR__ZN13async_graphql8registry10export_sdl51__LT_impl_u20_async_graphql__registry__Registry_GT_10export_sdl17h29009144a8ce4c10E_01625538
  )(param_1,*(long *)(local_1a8[0] + 0x60) + 0x10,local_1a8 + 1);
  _ZN4core3ptr631drop_in_place_LT_async_graphql__schema__Schema_LT_linera_indexer_plugins__operations__OperationsPlugin_LT_linera_views__context__ViewContext_LT__LP__RP__C_linera_views__backends__metering__MeteredStore_LT_linera_views__backends__lru_caching__LruCachingStore_LT_linera_views__backends__metering__MeteredStore_LT_linera_views__backends__value_splitting__ValueSplittingStore_LT_linera_views__backends__metering__MeteredStore_LT_linera_views__backends__rocks_db__RocksDbStoreInternal_GT__GT__GT__GT__GT__GT__GT__C_async_graphql__types__empty_mutation__EmptyMutation_C_async_graphql__types__empty_subscription__EmptySubscription_GT__GT_17h85a3a9c5331d6e96E
            (local_1a8);
  return;
}