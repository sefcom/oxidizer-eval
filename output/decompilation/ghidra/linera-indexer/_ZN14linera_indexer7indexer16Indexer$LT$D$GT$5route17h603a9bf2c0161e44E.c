void _ZN14linera_indexer7indexer16Indexer_LT_D_GT_5route17h603a9bf2c0161e44E(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined local_2b8 [400];
  undefined8 local_128 [35];
  
  uVar3 = _ZN4axum7routing15Router_LT_S_GT_3new17hc4603ca3712d705eE();
                    /* try { // try from 008c8e0a to 008c8e25 has its CatchHandler @ 008c8ec7 */
  _ZN4axum7routing14method_routing2on17hfe5f7213711b3605E(local_2b8);
  _ZN4axum7routing14method_routing21MethodRouter_LT_S_GT_2on17hb87679f3bbcedc6fE
            (local_128,local_2b8);
  uVar3 = _ZN4axum7routing15Router_LT_S_GT_5route17h5357abfe42b4e6c3E
                    (uVar3,"/",1,local_128,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0156f848);
  LOCK();
  lVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  if (*param_1 != 0 && SCARRY8(lVar1,1) == *param_1 < 0) {
                    /* try { // try from 008c8e53 to 008c8e6c has its CatchHandler @ 008c8eba */
    _ZN13async_graphql6schema45Schema_LT_Query_C_Mutation_C_Subscription_GT_32build_with_ignore_name_conflicts17h1342e6cae714c4d7E
              (local_2b8,param_1);
    uVar4 = _ZN13async_graphql6schema52SchemaBuilder_LT_Query_C_Mutation_C_Subscription_GT_6finish17h11c3df4961b2389fE
                      (local_2b8);
    uVar3 = _ZN4axum7routing15Router_LT_S_GT_5layer17h55b954abaef22e1bE(uVar3,uVar4);
                    /* try { // try from 008c8e83 to 008c8e8d has its CatchHandler @ 008c8ea8 */
    local_128[0] = uVar3;
    (*(code *)PTR__ZN10tower_http4cors9CorsLayer10permissive17hd0615b2e3cf14768E_016257d8)
              (local_2b8);
    _ZN4axum7routing15Router_LT_S_GT_5layer17hc39ca858794d5ca5E(uVar3,local_2b8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}