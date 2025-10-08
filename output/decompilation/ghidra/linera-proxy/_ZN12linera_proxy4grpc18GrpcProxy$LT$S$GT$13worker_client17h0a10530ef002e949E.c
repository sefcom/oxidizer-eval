void _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client17h0a10530ef002e949E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 **ppuVar4;
  undefined4 *****pppppuVar5;
  char cVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined **local_2c8;
  undefined8 ****ppppuStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 ****local_2a8;
  undefined4 ****local_2a0;
  undefined ****local_298;
  undefined4 ***local_290;
  code *local_288;
  undefined *local_280;
  undefined ****local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined *local_258;
  undefined ***local_250;
  undefined8 *local_248;
  undefined *local_240;
  undefined ****local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined *local_208;
  undefined8 local_200;
  undefined ****local_198;
  code *local_190;
  undefined *local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 ****local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 ****local_130;
  undefined *local_128;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined ****local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_50 = param_2;
                    /* try { // try from 00a83367 to 00a835c6 has its CatchHandler @ 00a83deb */
  uVar7 = _ZN4core4sync6atomic11atomic_load17h194743f301a7632aE
                    (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE_0164be58,0);
  if (((uVar7 == 5) || (2 < uVar7)) &&
     (cVar6 = _ZN4core4sync6atomic11atomic_load17h7338f7ff380d8167E
                        (PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_0164be70,0),
     cVar6 != '\0')) {
    bVar2 = false;
  }
  else {
    uVar7 = _ZN4core4sync6atomic11atomic_load17h194743f301a7632aE
                      (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE_0164be58,0);
    if (((uVar7 != 5) && (uVar7 < 3)) &&
       ((cVar6 = _ZN12tracing_core8callsite15DefaultCallsite8interest17he9a0fdb56f10bbcaE
                           (&
                            _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                           ), cVar6 != '\0' &&
        (cVar6 = (*(code *)
                   PTR__ZN7tracing15__macro_support12__is_enabled17hcd52fb4fe9dde9efE_0164bc78)
                           (_ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                            ,cVar6),
        puVar3 = 
        _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E,
        cVar6 != '\0')))) {
      local_200 = *(undefined8 *)
                   (
                   _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                   + 0x38);
      local_218 = *(undefined **)
                   (
                   _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                   + 0x40);
      uStack_210 = *(undefined8 *)
                    (
                    _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                    + 0x48);
      local_228 = *(undefined *****)
                   (
                   _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                   + 0x30);
      uStack_220 = *(undefined8 *)
                    (
                    _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                    + 0x38);
      local_208 = (undefined *)0x0;
      _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                (&local_150,&local_228);
      if ((undefined4 **)local_150 != (undefined4 **)0x0) {
        local_158 = local_130;
        local_168 = (undefined4)local_140;
        uStack_164 = local_140._4_4_;
        uStack_160 = (undefined4)uStack_138;
        uStack_15c = uStack_138._4_4_;
        local_178 = (undefined4)local_150;
        uStack_174 = local_150._4_4_;
        uStack_170 = (undefined4)uStack_148;
        uStack_16c = uStack_148._4_4_;
        _ZN5tonic7request16Request_LT_T_GT_11remote_addr17h1483eab80092e6d4E
                  (&local_198,*(undefined8 *)(param_3 + 0xe8));
        local_2a0 = (undefined4 ****)&local_198;
        _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                  (&local_150,&local_228);
        if ((undefined4 **)local_150 != (undefined4 **)0x0) {
          local_2a8 = local_130;
          local_2b8 = (undefined4)local_140;
          uStack_2b4 = local_140._4_4_;
          uStack_2b0 = (undefined4)uStack_138;
          uStack_2ac = uStack_138._4_4_;
          local_2c8 = local_150;
          ppppuStack_2c0 = uStack_148;
          (*(code *)
            PTR__ZN97__LT_linera_rpc__grpc__api__ChainInfoQuery_u20_as_u20_linera_rpc__grpc__server__GrpcProxyable_GT_8chain_id17h5b2a454a46cd3d27E_0164e120
          )(&local_250,param_3);
          local_280 = puVar3 + 0x30;
          local_150 = (undefined **)&local_178;
          uStack_148 = &local_2a0;
          local_140 = (undefined *****)&DAT_015a9a60;
          uStack_138 = &local_2c8;
          local_130 = (undefined4 ****)&local_298;
          local_128 = &DAT_015a9a80;
          local_290 = (undefined4 ***)&local_150;
          local_288 = (code *)0x2;
          local_298 = &local_250;
          (*(code *)PTR__ZN7tracing4span4Span3new17hee0a8b9b1691f332E_0164bc80)
                    (&local_228,puVar3,&local_290);
          goto LAB_00a837b7;
        }
      }
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0164bc68)
                ("FieldSet corrupted (this is a bug)",0x22,
                 &PTR_s_linera_service_src_proxy_grpc_rs_015a9a48);
      goto LAB_00a83db9;
    }
    local_278 = (undefined ****)0x2;
    local_258 = 
    _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E;
                    /* try { // try from 00a835e4 to 00a8378c has its CatchHandler @ 00a83e13 */
    cVar6 = _ZN4core4sync6atomic11atomic_load17h7338f7ff380d8167E
                      (PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_0164be70,0);
    puVar3 = 
    _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E;
    if (cVar6 == '\0') {
      local_200 = *(undefined8 *)
                   (
                   _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                   + 0x38);
      local_228 = *(undefined *****)
                   (
                   _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                   + 0x30);
      uStack_220 = *(undefined8 *)
                    (
                    _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                    + 0x38);
      local_218 = *(undefined **)
                   (
                   _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                   + 0x40);
      uStack_210 = *(undefined8 *)
                    (
                    _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17h7a11d7388b306d29E
                    + 0x48);
      local_208 = (undefined *)0x0;
      _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                (&local_150,&local_228);
      if ((undefined4 **)local_150 != (undefined4 **)0x0) {
        local_158 = local_130;
        local_168 = (undefined4)local_140;
        uStack_164 = local_140._4_4_;
        uStack_160 = (undefined4)uStack_138;
        uStack_15c = uStack_138._4_4_;
        local_178 = (undefined4)local_150;
        uStack_174 = local_150._4_4_;
        uStack_170 = (undefined4)uStack_148;
        uStack_16c = uStack_148._4_4_;
        _ZN5tonic7request16Request_LT_T_GT_11remote_addr17h1483eab80092e6d4E
                  (&local_198,*(undefined8 *)(param_3 + 0xe8));
        local_2a0 = (undefined4 ****)&local_198;
        _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                  (&local_150,&local_228);
        if ((undefined4 **)local_150 != (undefined4 **)0x0) {
          local_2a8 = local_130;
          local_2b8 = (undefined4)local_140;
          uStack_2b4 = local_140._4_4_;
          uStack_2b0 = (undefined4)uStack_138;
          uStack_2ac = uStack_138._4_4_;
          local_2c8 = local_150;
          ppppuStack_2c0 = uStack_148;
          (*(code *)
            PTR__ZN97__LT_linera_rpc__grpc__api__ChainInfoQuery_u20_as_u20_linera_rpc__grpc__server__GrpcProxyable_GT_8chain_id17h5b2a454a46cd3d27E_0164e120
          )(&local_250,param_3);
          local_280 = puVar3 + 0x30;
          local_150 = (undefined **)&local_178;
          uStack_148 = &local_2a0;
          local_140 = (undefined *****)&DAT_015a9a60;
          uStack_138 = &local_2c8;
          local_130 = (undefined4 ****)&local_298;
          local_128 = &DAT_015a9a80;
          local_288 = (code *)0x2;
          local_298 = &local_250;
          local_290 = (undefined4 ***)&local_150;
          (*(code *)PTR__ZN7tracing4span4Span10record_all17h00ba14f0532f8e03E_0164bc88)
                    (&local_278,&local_290);
          goto LAB_00a8378d;
        }
      }
                    /* try { // try from 00a83d5b to 00a83d73 has its CatchHandler @ 00a83e13 */
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0164bc68)
                ("FieldSet corrupted (this is a bug)",0x22,
                 &PTR_s_linera_service_src_proxy_grpc_rs_015a9a48);
      goto LAB_00a83db9;
    }
LAB_00a8378d:
    local_208 = local_258;
    uStack_220 = CONCAT44(uStack_26c,uStack_270);
    local_218 = (undefined *)CONCAT44(uStack_264,local_268);
    uStack_210 = CONCAT44(uStack_25c,uStack_260);
    local_228 = local_278;
LAB_00a837b7:
    local_258 = local_208;
    local_268 = (undefined4)local_218;
    uStack_264 = local_218._4_4_;
    uStack_260 = (undefined4)uStack_210;
    uStack_25c = uStack_210._4_4_;
    local_278 = local_228;
    uStack_270 = (undefined4)uStack_220;
    uStack_26c = uStack_220._4_4_;
    bVar2 = true;
                    /* try { // try from 00a837e7 to 00a83bee has its CatchHandler @ 00a83deb */
    _ZN7tracing4span4Span8do_enter17h4e0772cd97aa1429E(&local_278);
  }
  uVar7 = _ZN4core4sync6atomic11atomic_load17h194743f301a7632aE
                    (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE_0164be58,0);
  if (((uVar7 == 5) || (1 < uVar7)) ||
     ((cVar6 = _ZN12tracing_core8callsite15DefaultCallsite8interest17he9a0fdb56f10bbcaE
                         (&
                          _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                         ), cVar6 == '\0' ||
      (cVar6 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17hcd52fb4fe9dde9efE_0164bc78
               )(_ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 ,cVar6),
      puVar3 = 
      _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E,
      cVar6 == '\0')))) {
    cVar6 = _ZN4core4sync6atomic11atomic_load17h7338f7ff380d8167E
                      (PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_0164be70,0);
    if ((cVar6 != '\0') ||
       (uVar7 = _ZN4core4sync6atomic11atomic_load17h194743f301a7632aE
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h51cc9c3cd67347faE_0164be78,0),
       uVar7 < 4)) {
LAB_00a83bef:
      (*(code *)PTR_memcpy_0164bc18)(&local_150,param_3,0xf0);
                    /* try { // try from 00a83c0c to 00a83c1e has its CatchHandler @ 00a83deb */
      _ZN5tonic7request16Request_LT_T_GT_10into_inner17h23149ed04aa8a676E(&local_228,&local_150);
      uVar8 = local_50;
                    /* try { // try from 00a83c1f to 00a83c64 has its CatchHandler @ 00a83dd4 */
      _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_9shard_for17h5a18468c51c04358E
                (&local_150,local_50,&local_228);
      local_2b8 = (undefined4)local_140;
      uStack_2b4 = local_140._4_4_;
      uStack_2b0 = (undefined4)uStack_138;
      uStack_2ac = uStack_138._4_4_;
      local_2c8 = local_150;
      ppppuStack_2c0 = uStack_148;
                    /* try { // try from 00a83c91 to 00a83cc3 has its CatchHandler @ 00a83dc5 */
      _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_23worker_client_for_shard17h5c25ff08ca6d3d63E
                (&local_150,uVar8,&local_2c8);
      pppppuVar5 = uStack_148;
      ppuVar4 = (undefined4 **)local_150;
      puVar3 = PTR_memcpy_0164bc18;
      if ((undefined4 **)local_150 == (undefined4 **)0x2) {
        uVar8 = _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client28__u7b__u7b_closure_u7d__u7d_17h0f03fd7b6acdc69cE
                          (uStack_148);
        param_1[1] = uVar8;
        *param_1 = 2;
        _ZN4core3ptr115drop_in_place_LT_linera_rpc__config__ValidatorPublicNetworkPreConfig_LT_linera_rpc__config__NetworkProtocol_GT__GT_17h8b626a8b00fff184E
                  (&local_2c8);
        _ZN4core3ptr58drop_in_place_LT_linera_rpc__grpc__api__ChainInfoQuery_GT_17h969c1c01e53da29eE
                  (&local_228);
      }
      else {
        (*(code *)PTR_memcpy_0164bc18)(param_1 + 2,&local_140,0x98);
        (*(code *)puVar3)(param_1 + 0x15,&local_228,0x88);
        *param_1 = ppuVar4;
        param_1[1] = pppppuVar5;
        _ZN4core3ptr115drop_in_place_LT_linera_rpc__config__ValidatorPublicNetworkPreConfig_LT_linera_rpc__config__NetworkProtocol_GT__GT_17h8b626a8b00fff184E
                  (&local_2c8);
      }
      if (bVar2) {
                    /* try { // try from 00a83d35 to 00a83d3e has its CatchHandler @ 00a83dbb */
        _ZN4core3ptr43drop_in_place_LT_tracing__span__Entered_GT_17h91889ac5199ed390E(&local_278);
        _ZN4core3ptr40drop_in_place_LT_tracing__span__Span_GT_17h6897f3786fa08336E(&local_278);
      }
      return;
    }
    local_58 = 
    _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E;
    uStack_40 = *(undefined4 *)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x20);
    uStack_3c = *(undefined4 *)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x24);
    uStack_38 = *(undefined4 *)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x28);
    uStack_34 = *(undefined4 *)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x2c);
    local_48 = (undefined ****)&DAT_00000004;
    auVar9 = (*(code *)PTR__ZN3log6logger17h0d3dd8cac80dc3faE_0164be80)();
    local_60 = auVar9._0_8_;
    cVar6 = (**(code **)(auVar9._8_8_ + 0x18))(local_60,&local_48);
    puVar3 = 
    _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E;
    if (cVar6 == '\0') goto LAB_00a83bef;
    local_200 = *(undefined8 *)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x38);
    local_228 = *(undefined *****)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x30);
    uStack_220 = *(undefined8 *)
                  (
                  _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                  + 0x38);
    local_218 = *(undefined **)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x40);
    uStack_210 = *(undefined8 *)
                  (
                  _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                  + 0x48);
    local_208 = (undefined *)0x0;
    _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
              (&local_150,&local_228);
    if ((undefined4 **)local_150 != (undefined4 **)0x0) {
      local_2a8 = local_130;
      local_2b8 = (undefined4)local_140;
      uStack_2b4 = local_140._4_4_;
      uStack_2b0 = (undefined4)uStack_138;
      uStack_2ac = uStack_138._4_4_;
      local_2c8 = local_150;
      ppppuStack_2c0 = uStack_148;
      _ZN5tonic7request16Request_LT_T_GT_11remote_addr17h1483eab80092e6d4E
                (&local_178,*(undefined8 *)(param_3 + 0xe8));
      local_188 = puVar3 + 0x30;
      local_290 = (undefined4 ***)&local_178;
      local_288 = 
      _ZN66__LT_core__option__Option_LT_T_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h122d025c5338adf8E
      ;
      local_150 = &PTR_s_proxying_request_from_015a9a38;
      uStack_148 = (undefined4 *****)&DAT_00000001;
      local_130 = (undefined4 ****)0x0;
      local_140 = (undefined *****)&local_290;
      uStack_138 = (undefined ***)&DAT_00000001;
      local_250 = &local_2c8;
      local_248 = &local_150;
      local_240 = &DAT_0159b698;
      local_198 = &local_250;
      local_190 = (code *)0x1;
      local_218 = (undefined *)CONCAT44(uStack_34,uStack_38);
      local_228 = local_48;
      uStack_220 = CONCAT44(uStack_3c,uStack_40);
      (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h5fab331f013c479bE_0164be88)
                (local_58,local_60,auVar9._8_8_,&local_228,&local_198);
      goto LAB_00a83bef;
    }
  }
  else {
    local_200 = *(undefined8 *)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x38);
    local_228 = *(undefined *****)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x30);
    uStack_220 = *(undefined8 *)
                  (
                  _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                  + 0x38);
    local_218 = *(undefined **)
                 (
                 _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                 + 0x40);
    uStack_210 = *(undefined8 *)
                  (
                  _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client10__CALLSITE17hcc9255c9f06194b2E
                  + 0x48);
    local_208 = (undefined *)0x0;
    _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
              (&local_150,&local_228);
    if ((undefined4 **)local_150 != (undefined4 **)0x0) {
      local_2a8 = local_130;
      local_2b8 = (undefined4)local_140;
      uStack_2b4 = local_140._4_4_;
      uStack_2b0 = (undefined4)uStack_138;
      uStack_2ac = uStack_138._4_4_;
      local_2c8 = local_150;
      ppppuStack_2c0 = uStack_148;
      _ZN5tonic7request16Request_LT_T_GT_11remote_addr17h1483eab80092e6d4E
                (&local_178,*(undefined8 *)(param_3 + 0xe8));
      local_218 = puVar3 + 0x30;
      local_190 = 
      _ZN66__LT_core__option__Option_LT_T_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h122d025c5338adf8E
      ;
      local_150 = &PTR_s_proxying_request_from_015a9a38;
      uStack_148 = (undefined4 *****)&DAT_00000001;
      local_130 = (undefined4 ****)0x0;
      local_140 = &local_198;
      uStack_138 = (undefined ***)&DAT_00000001;
      local_250 = &local_2c8;
      local_248 = &local_150;
      local_240 = &DAT_0159b698;
      local_228 = &local_250;
      uStack_220 = 1;
      local_198 = (undefined ****)&local_178;
      _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13worker_client28__u7b__u7b_closure_u7d__u7d_17h01b8b8097d7a4792E
                (&local_228);
      goto LAB_00a83bef;
    }
  }
                    /* try { // try from 00a83d76 to 00a83db8 has its CatchHandler @ 00a83deb */
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0164bc68)
            ("FieldSet corrupted (this is a bug)",0x22,
             &PTR_s_linera_service_src_proxy_grpc_rs_015a9aa0);
LAB_00a83db9:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}