void _ZN12linera_proxy14Proxy_LT_S_GT_12from_context17h6acf1242999046a5E
               (undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char local_240;
  undefined local_23f;
  char local_23e;
  undefined local_23d;
  undefined4 local_23c;
  long local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined local_220 [32];
  undefined local_200 [24];
  undefined **local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8 [21];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  
  local_238 = param_2 + 0xd8;
  local_240 = *(char *)(param_2 + 0x178);
  local_23f = *(undefined *)(param_2 + 0x179);
  local_23e = *(char *)(param_2 + 0x18);
  uVar1 = *(undefined *)(param_2 + 0x19);
  local_23d = uVar1;
  if (local_240 == '\x01') {
    if (local_23e != '\0') {
      (*(code *)PTR_memcpy_0164bc18)(&local_1e8,local_238,0xa8);
                    /* try { // try from 00a77daf to 00a77dc6 has its CatchHandler @ 00a77fe7 */
      uVar3 = _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_3new17h7d2436f68da5c578E
                        (&local_1e8,*(undefined8 *)(param_2 + 0x1f8),
                         *(undefined4 *)(param_2 + 0x200),*(undefined8 *)(param_2 + 0x208),
                         *(undefined4 *)(param_2 + 0x210),uVar1,param_3,
                         *(undefined8 *)(param_2 + 0x218));
      *param_1 = 1;
      param_1[1] = uVar3;
      _ZN4core3ptr59drop_in_place_LT_linera_client__config__ValidatorConfig_GT_17ha26ab4c210496591E
                (param_2);
      _ZN4core3ptr71drop_in_place_LT_linera_base__crypto__secp256k1__Secp256k1SecretKey_GT_17h5fd9116894d77195E
                (param_2 + 0x180);
      return;
    }
  }
  else if (local_23e == '\0') {
                    /* try { // try from 00a77eb6 to 00a77ec5 has its CatchHandler @ 00a77ff0 */
    _ZN10linera_rpc6config42ValidatorInternalNetworkPreConfig_LT_P_GT_19clone_with_protocol17h3119d5bbd821e44aE
              (&local_d8,local_238,local_23f);
                    /* try { // try from 00a77ec6 to 00a77ed6 has its CatchHandler @ 00a77fcd */
    _ZN10linera_rpc6config40ValidatorPublicNetworkPreConfig_LT_P_GT_19clone_with_protocol17hd946d706f55e6d63E
              (local_220,param_2,uVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x1f8);
    uVar2 = *(undefined4 *)(param_2 + 0x200);
    local_230 = *(undefined8 *)(param_2 + 0x208);
    local_23c = *(undefined4 *)(param_2 + 0x210);
    local_228 = *(undefined8 *)(param_2 + 0x218);
    (*(code *)PTR_memcpy_0164bc18)(local_1c8,&local_d8,0xa8);
    local_110 = local_230;
    local_108 = local_23c;
    local_100 = *param_3;
    uStack_fc = param_3[1];
    uStack_f8 = param_3[2];
    uStack_f4 = param_3[3];
    local_f0 = param_3[4];
    uStack_ec = param_3[5];
    uStack_e8 = param_3[6];
    uStack_e4 = param_3[7];
    local_e0 = local_228;
                    /* try { // try from 00a77f84 to 00a77f8d has its CatchHandler @ 00a77fe7 */
    local_120 = uVar3;
    local_118 = uVar2;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6c70d3081c488fb2E(&local_1e8);
    *param_1 = 0;
    param_1[1] = uVar3;
    _ZN4core3ptr59drop_in_place_LT_linera_client__config__ValidatorConfig_GT_17ha26ab4c210496591E
              (param_2);
    _ZN4core3ptr71drop_in_place_LT_linera_base__crypto__secp256k1__Secp256k1SecretKey_GT_17h5fd9116894d77195E
              (param_2 + 0x180);
    _ZN4core3ptr117drop_in_place_LT_linera_rpc__config__ValidatorInternalNetworkPreConfig_LT_linera_rpc__config__NetworkProtocol_GT__GT_17hf4e8631a02da2aaeE
              (local_238);
    return;
  }
  local_d8 = &local_240;
  local_d0 = 
  PTR__ZN74__LT_linera_rpc__config__NetworkProtocol_u20_as_u20_core__fmt__Display_GT_3fmt17hed55d9e5110e1954E_0164e158
  ;
  local_c8 = &local_23e;
  local_c0 = 
  PTR__ZN74__LT_linera_rpc__config__NetworkProtocol_u20_as_u20_core__fmt__Display_GT_3fmt17hed55d9e5110e1954E_0164e158
  ;
  local_1e8 = &PTR_DAT_015a95b0;
  uStack_1e0 = 3;
  local_1c8[0] = 0;
  local_1d8 = &local_d8;
  uStack_1d0 = 2;
                    /* try { // try from 00a77e6c to 00a77e86 has its CatchHandler @ 00a77ff0 */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd6e1bc59e02d50d5E(local_200,0,param_3,&local_1e8);
  uVar3 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h59fa5c83c6d3b512E(local_200);
  param_1[1] = uVar3;
  *param_1 = 2;
                    /* try { // try from 00a77e94 to 00a77e9b has its CatchHandler @ 00a77fdf */
  _ZN4core3ptr191drop_in_place_LT_linera_storage__db_storage__DbStorage_LT_linera_views__backends__lru_caching__LruCachingDatabase_LT_linera_storage_service__client__StorageServiceDatabaseInternal_GT__GT__GT_17h1a88b39faa2dc216E
            (param_3);
  _ZN4core3ptr47drop_in_place_LT_linera_proxy__ProxyContext_GT_17h55713ae692625689E(param_2);
  return;
}