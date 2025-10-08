void _ZN13linera_server17log_file_name_for17hac57d26873280f74E(undefined8 *param_1,uint *param_2)

{
  undefined8 extraout_RDX;
  undefined *local_450;
  uint *local_448;
  undefined **local_440;
  code *pcStack_438;
  uint **local_430;
  undefined **local_428;
  code *pcStack_420;
  uint **local_418;
  code *local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 **local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined local_210 [128];
  undefined local_190 [376];
  
  if (*param_2 < 2) {
    _ZN14linera_service4util9read_json17h93be6c65708b6875E
              (&local_408,*(undefined8 *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x16));
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h5cd2004310aa6197E
              (local_210,&local_408,&PTR_s_linera_service_src_server_rs_02439350);
    local_450 = local_190;
    if ((*(byte *)(param_2 + 0xe) & 1) == 0) {
      local_440 = &local_450;
      pcStack_438 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5750d29a63ca3592E;
      local_408 = &PTR_s_validator__shard__02439340;
      uStack_400 = (code *)0x1;
      local_3e8 = 0;
      local_3f8 = &local_440;
      local_3f0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h88aa0508b6ec7e9cE
                (&local_428,0,extraout_RDX,&local_408);
      local_408 = local_428;
      uStack_400 = pcStack_420;
      local_430 = local_418;
    }
    else {
      local_448 = param_2 + 0x10;
      local_428 = &local_450;
      pcStack_420 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5750d29a63ca3592E;
      local_418 = &local_448;
      local_410 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb3a176b6a4a5cbdbE;
      local_408 = &PTR_s_validator__shard__02439320;
      uStack_400 = (code *)0x2;
      local_3e8 = 0;
      local_3f8 = &local_428;
      local_3f0 = 2;
                    /* try { // try from 012733b5 to 01273456 has its CatchHandler @ 01273496 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h88aa0508b6ec7e9cE
                (&local_440,0,extraout_RDX,&local_408);
      local_408 = local_440;
      uStack_400 = pcStack_438;
    }
    param_1[2] = local_430;
    *(undefined4 *)param_1 = (undefined4)local_408;
    *(undefined4 *)((long)param_1 + 4) = local_408._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_400;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_400._4_4_;
    _ZN4core3ptr65drop_in_place_LT_linera_client__config__ValidatorServerConfig_GT_17h34364f3c2886e04aE
              (local_210);
  }
  else {
    param_1[1] = 
    "serverset-cookiestrict-transport-securitytetrailertransfer-encodinguser-agentupgradeupgrade-insecure-requestsviawarningx-content-type-optionsx-dns-prefetch-controlx-frame-options"
    ;
    param_1[2] = 6;
    *param_1 = 0x8000000000000000;
  }
  return;
}