undefined8
_ZN14linera_indexer6plugin5route17h6778f4560acc1e9fE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined8 local_2b8;
  undefined8 **local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  
  local_2f8 = &local_2d0;
  uStack_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0ea8f8b2f2f40464E;
  local_2c0 = &PTR_s___0156f520;
  local_2b8 = 1;
  local_2a0 = 0;
  local_2b0 = &local_2f8;
  local_2a8 = 1;
                    /* try { // try from 008c4aea to 008c4afd has its CatchHandler @ 008c4bf0 */
  local_2e0 = param_3;
  local_2d0 = param_1;
  local_2c8 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h6a5c03551438ca3eE(&local_130,0,param_3,&local_2c0)
  ;
  uStack_2f0 = (code *)CONCAT44(uStack_124,uStack_128);
  local_2e8 = local_120;
                    /* try { // try from 008c4b1d to 008c4b38 has its CatchHandler @ 008c4c1e */
  _ZN4axum7routing14method_routing2on17hfe5f7213711b3605E(&local_2c0);
  _ZN4axum7routing14method_routing21MethodRouter_LT_S_GT_2on17ha4105c8a880809dfE
            (&local_130,&local_2c0);
                    /* try { // try from 008c4b3e to 008c4b57 has its CatchHandler @ 008c4beb */
  uVar1 = _ZN4axum7routing15Router_LT_S_GT_5route17h5357abfe42b4e6c3E
                    (param_4,uStack_2f0,local_120,&local_130,
                     &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0156f548);
                    /* try { // try from 008c4b60 to 008c4b76 has its CatchHandler @ 008c4bff */
  local_2d8 = uVar1;
  _ZN13async_graphql6schema45Schema_LT_Query_C_Mutation_C_Subscription_GT_32build_with_ignore_name_conflicts17h0d3096e50a8fdc59E
            (&local_2c0,param_3);
  uVar2 = _ZN13async_graphql6schema52SchemaBuilder_LT_Query_C_Mutation_C_Subscription_GT_6finish17h81fac1382b5f9af2E
                    (&local_2c0);
                    /* try { // try from 008c4b77 to 008c4b81 has its CatchHandler @ 008c4bd6 */
  uVar1 = _ZN4axum7routing15Router_LT_S_GT_5layer17hcf88492fb3e4f941E(uVar1,uVar2);
                    /* try { // try from 008c4b8d to 008c4b97 has its CatchHandler @ 008c4bc4 */
  local_130 = uVar1;
  (*(code *)PTR__ZN10tower_http4cors9CorsLayer10permissive17hd0615b2e3cf14768E_016257d8)(&local_2c0)
  ;
                    /* try { // try from 008c4b98 to 008c4ba4 has its CatchHandler @ 008c4bc2 */
  uVar1 = _ZN4axum7routing15Router_LT_S_GT_5layer17hc39ca858794d5ca5E(uVar1,&local_2c0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h159531dba3583f20E(&local_2f8);
  return uVar1;
}