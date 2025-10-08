void _ZN13linera_server13ServerContext16make_shard_state17h1a3aeb2cdfd11fa8E
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined **param_5,
               undefined8 param_6)

{
  undefined2 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  ulong uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined2 uVar9;
  undefined ****ppppuVar10;
  undefined auVar11 [16];
  undefined ***local_2f0;
  code *local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined ***local_2d0;
  code *local_2c8;
  undefined *local_2c0;
  undefined8 **local_2b8;
  undefined ***pppuStack_2b0;
  undefined8 **local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined *local_280;
  undefined8 **local_278;
  undefined ***pppuStack_270;
  undefined8 **local_268;
  undefined8 uStack_260;
  long local_258;
  undefined *puStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined ***local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 **local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 **local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined ***local_f8;
  undefined *local_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 **local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_48 [24];
  
  local_288 = param_6;
  local_280 = (undefined *)param_5;
  local_108 = param_3;
  local_100 = param_4;
  if (*(undefined ***)(param_2 + 0xf8) <= param_5) {
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_025391f8)
              (param_5,*(undefined ***)(param_2 + 0xf8),
               &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_02424f90);
    goto LAB_0126fbfd;
  }
  ppppuVar10 = (undefined ****)((long)param_5 * 0x20 + *(long *)(param_2 + 0xf0));
                    /* try { // try from 0126f1c0 to 0126f9e8 has its CatchHandler @ 0126fc11 */
  uVar6 = _ZN4core4sync6atomic11atomic_load17h60aee08546165035E
                    (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE_025391c8,0);
  if ((uVar6 == 5) || (2 < uVar6)) {
LAB_0126f344:
    cVar5 = _ZN4core4sync6atomic11atomic_load17ha195481ac003d423E
                      (PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_02539148,0);
    if (cVar5 == '\0') {
      uVar6 = _ZN4core4sync6atomic11atomic_load17h60aee08546165035E
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h51cc9c3cd67347faE_02539150,0);
      puVar3 = _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE;
      if (2 < uVar6) {
        uStack_130 = *(undefined4 *)
                      (
                      _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                      + 0x20);
        uStack_12c = *(undefined4 *)
                      (
                      _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                      + 0x24);
        uStack_128 = *(undefined4 *)
                      (
                      _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                      + 0x28);
        uStack_124 = *(undefined4 *)
                      (
                      _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                      + 0x2c);
        local_138 = (undefined8 ***)0x3;
        auVar11 = (*(code *)PTR__ZN3log6logger17h0d3dd8cac80dc3faE_02539130)();
        cVar5 = (**(code **)(auVar11._8_8_ + 0x18))(auVar11._0_8_,&local_138);
        puVar4 = _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
        ;
        if (cVar5 != '\0') {
          local_2d8 = puVar3;
          local_1b0 = *(undefined8 *)
                       (
                       _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                       + 0x38);
          local_1d8 = *(undefined ***)
                       (
                       _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                       + 0x30);
          uStack_1d0 = *(undefined8 *)
                        (
                        _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                        + 0x38);
          local_1c8 = *(undefined ****)
                       (
                       _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                       + 0x40);
          uStack_1c0 = *(undefined8 *)
                        (
                        _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                        + 0x48);
          local_1b8 = 0;
          _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                    (&local_278,&local_1d8);
          if ((undefined ****)local_278 == (undefined ****)0x0) goto LAB_0126fbc9;
          local_2e0 = puVar4 + 0x30;
          local_c8 = local_258;
          local_d8 = local_268;
          uStack_d0 = (undefined4)uStack_260;
          uStack_cc = uStack_260._4_4_;
          local_e8 = local_278;
          uStack_e0 = (undefined8 ***)pppuStack_270;
          local_2c8 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_278 = (undefined8 **)&PTR_DAT_024391f0;
          pppuStack_270 = (undefined ***)&DAT_00000001;
          local_258 = 0;
          local_268 = &local_2d0;
          uStack_260 = (code *)0x1;
          local_2b8 = &local_e8;
          pppuStack_2b0 = (undefined ***)&local_278;
          local_2a8 = (undefined8 **)&DAT_02424b18;
          local_2f0 = (undefined ***)&local_2b8;
          local_2e8 = (code *)&DAT_00000001;
          local_1c8 = (undefined ***)CONCAT44(uStack_124,uStack_128);
          local_1d8 = (undefined **)local_138;
          uStack_1d0 = CONCAT44(uStack_12c,uStack_130);
          local_2d0 = (undefined ***)ppppuVar10;
          (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h5fab331f013c479bE_02539138)
                    (local_2d8,auVar11._0_8_,auVar11._8_8_,&local_1d8,&local_2f0);
        }
      }
    }
LAB_0126f517:
    uVar6 = _ZN4core4sync6atomic11atomic_load17h60aee08546165035E
                      (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE_025391c8,0);
    if ((uVar6 == 5) || (2 < uVar6)) {
LAB_0126f6fc:
      cVar5 = _ZN4core4sync6atomic11atomic_load17ha195481ac003d423E
                        (PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_02539148,0);
      uVar7 = extraout_RDX_00;
      if (cVar5 != '\0') {
LAB_0126f939:
        local_258 = (long)ppppuVar10 + 0x1c;
        local_278 = (undefined8 **)&local_280;
        pppuStack_270 =
             (undefined ***)
             PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_02539210
        ;
        local_268 = (undefined8 **)&local_108;
        uStack_260 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd396e6672e3a213cE;
        puStack_250 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_02539208
        ;
        local_1d8 = &PTR_s_Shard___02439210;
        uStack_1d0 = 3;
        local_1b8 = 0;
        local_1c8 = (undefined ***)&local_278;
        uStack_1c0 = 3;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h88aa0508b6ec7e9cE
                  (local_48,0,uVar7,&local_1d8);
        local_160 = *(undefined8 *)(param_2 + 0x200);
        local_170 = *(undefined8 *)(param_2 + 0x1f0);
        uStack_168 = *(undefined8 *)(param_2 + 0x1f8);
        local_180 = *(undefined8 *)(param_2 + 0x1e0);
        uStack_178 = *(undefined8 *)(param_2 + 0x1e8);
        local_190 = *(undefined8 *)(param_2 + 0x1d0);
        uStack_188 = *(undefined8 *)(param_2 + 0x1d8);
        uStack_1d0._0_4_ = *(undefined4 *)(param_2 + 400);
        uStack_1d0._4_4_ = *(undefined4 *)(param_2 + 0x194);
        local_1c8 = *(undefined ****)(param_2 + 0x198);
        uStack_1c0 = *(undefined8 *)(param_2 + 0x1a0);
        local_1b8 = *(undefined8 *)(param_2 + 0x1a8);
        local_1b0 = *(undefined8 *)(param_2 + 0x1b0);
        uStack_1a8 = *(undefined4 *)(param_2 + 0x1b8);
        uStack_1a4 = *(undefined4 *)(param_2 + 0x1bc);
        local_1a0 = *(undefined4 *)(param_2 + 0x1c0);
        uStack_19c = *(undefined4 *)(param_2 + 0x1c4);
        uStack_198 = *(undefined4 *)(param_2 + 0x1c8);
        uStack_194 = *(undefined4 *)(param_2 + 0x1cc);
        local_1d8 = (undefined **)0x1;
        _ZN11linera_core6worker32WorkerState_LT_StorageClient_GT_3new17hbff983361a21c037E
                  (&local_278,local_48,&local_1d8,local_288,*(undefined8 *)(param_2 + 0x250),
                   *(undefined8 *)(param_2 + 600));
        _ZN11linera_core6worker32WorkerState_LT_StorageClient_GT_26with_allow_inactive_chains17h20def7c1f946a5feE
                  (&local_1d8,&local_278);
        _ZN11linera_core6worker32WorkerState_LT_StorageClient_GT_42with_allow_messages_from_deprecated_epochs17ha6ced8117f1431ccE
                  (&local_278,&local_1d8);
        _ZN11linera_core6worker32WorkerState_LT_StorageClient_GT_17with_grace_period17h281889107de3d050E
                  (&local_1d8,&local_278,*(undefined8 *)(param_2 + 0x208),
                   *(undefined4 *)(param_2 + 0x210));
        _ZN11linera_core6worker32WorkerState_LT_StorageClient_GT_21with_chain_worker_ttl17ha5eaabf6ce84d0e1E
                  (&local_e8,&local_1d8,*(undefined8 *)(param_2 + 0x218),
                   *(undefined4 *)(param_2 + 0x220));
        _ZN11linera_core6worker32WorkerState_LT_StorageClient_GT_40with_chain_info_max_received_log_entries17he20526cb57a32871E
                  (&local_278,&local_e8,*(undefined8 *)(param_2 + 0x260));
        puVar3 = local_280;
                    /* try { // try from 0126fb3a to 0126fb4a has its CatchHandler @ 0126fbff */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_02539128
        )(&local_1d8,ppppuVar10);
        uVar9 = *(undefined2 *)(ppppuVar10 + 3);
        uVar1 = *(undefined2 *)((long)ppppuVar10 + 0x1c);
        if ((char)uVar9 == '\x01') {
          ppppuVar10 = (undefined ****)(ulong)*(ushort *)((long)ppppuVar10 + 0x1a);
        }
        else {
          uVar9 = 0;
        }
        *(undefined ****)(param_1 + 0xb8) = local_1c8;
        *(undefined4 *)(param_1 + 0xa8) = (undefined4)local_1d8;
        *(undefined4 *)(param_1 + 0xac) = local_1d8._4_4_;
        *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_1d0;
        *(undefined4 *)(param_1 + 0xb4) = uStack_1d0._4_4_;
        (*(code *)PTR_memcpy_02538ec0)(param_1,&local_278,0xa0);
        *(undefined **)(param_1 + 0xa0) = puVar3;
        *(undefined2 *)(param_1 + 0xc0) = uVar9;
        *(short *)(param_1 + 0xc2) = (short)ppppuVar10;
        *(undefined2 *)(param_1 + 0xc4) = uVar1;
        return;
      }
      auVar11 = _ZN4core4sync6atomic11atomic_load17h60aee08546165035E
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h51cc9c3cd67347faE_02539150,0);
      puVar3 = _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E;
      uVar7 = auVar11._8_8_;
      if (auVar11._0_8_ < 3) goto LAB_0126f939;
      uStack_118 = *(undefined4 *)
                    (
                    _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                    + 0x20);
      uStack_114 = *(undefined4 *)
                    (
                    _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                    + 0x24);
      uStack_110 = *(undefined4 *)
                    (
                    _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                    + 0x28);
      uStack_10c = *(undefined4 *)
                    (
                    _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                    + 0x2c);
      local_120 = (undefined ****)0x3;
      auVar11 = (*(code *)PTR__ZN3log6logger17h0d3dd8cac80dc3faE_02539130)();
      cVar5 = (**(code **)(auVar11._8_8_ + 0x18))(auVar11._0_8_,&local_120);
      puVar4 = _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E;
      uVar7 = extraout_RDX_01;
      if (cVar5 == '\0') goto LAB_0126f939;
      local_2d8 = puVar3;
      local_c0 = *(undefined8 *)
                  (
                  _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                  + 0x38);
      local_e8 = *(undefined8 ***)
                  (
                  _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                  + 0x30);
      uStack_e0 = *(undefined8 ****)
                   (
                   _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                   + 0x38);
      local_d8 = *(undefined8 ***)
                  (
                  _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                  + 0x40);
      uStack_d0 = *(undefined4 *)
                   (
                   _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                   + 0x48);
      uStack_cc = *(undefined4 *)
                   (
                   _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                   + 0x4c);
      local_c8 = 0;
      _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                (&local_278,&local_e8);
      if ((undefined ****)local_278 != (undefined ****)0x0) {
        local_2c0 = puVar4 + 0x30;
        local_298 = local_258;
        local_2a8 = local_268;
        uStack_2a0 = uStack_260;
        local_2b8 = local_278;
        pppuStack_2b0 = pppuStack_270;
        local_228 = *(undefined8 *)(param_2 + 0x200);
        local_238 = *(undefined8 *)(param_2 + 0x1f0);
        uStack_230 = *(undefined8 *)(param_2 + 0x1f8);
        local_278 = *(undefined8 ***)(param_2 + 0x1b0);
        pppuStack_270 = *(undefined ****)(param_2 + 0x1b8);
        local_268 = *(undefined8 ***)(param_2 + 0x1c0);
        uStack_260 = *(code **)(param_2 + 0x1c8);
        local_258 = *(undefined8 *)(param_2 + 0x1d0);
        puStack_250 = *(undefined **)(param_2 + 0x1d8);
        local_248 = *(undefined4 *)(param_2 + 0x1e0);
        uStack_244 = *(undefined4 *)(param_2 + 0x1e4);
        uStack_240 = *(undefined4 *)(param_2 + 0x1e8);
        uStack_23c = *(undefined4 *)(param_2 + 0x1ec);
        local_f8 = (undefined ***)&local_278;
        local_f0 = 
        PTR__ZN89__LT_linera_base__crypto__secp256k1__Secp256k1PublicKey_u20_as_u20_core__fmt__Display_GT_3fmt17h4f9d9f9c6d9d4d76E_0253ab68
        ;
        local_1d8 = &PTR_s_Public_key__02439200;
        uStack_1d0 = 1;
        local_1b8 = 0;
        local_1c8 = (undefined ***)&local_f8;
        uStack_1c0 = 1;
        local_2f0 = (undefined ***)&local_2b8;
        local_2e8 = (code *)&local_1d8;
        local_2e0 = &DAT_02424b18;
        local_2d0 = (undefined ***)&local_2f0;
        local_2c8 = (code *)&DAT_00000001;
        local_d8 = (undefined8 **)CONCAT44(uStack_10c,uStack_110);
        local_e8 = local_120;
        uStack_e0 = (undefined8 ***)CONCAT44(uStack_114,uStack_118);
        (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h5fab331f013c479bE_02539138)
                  (local_2d8,auVar11._0_8_,auVar11._8_8_,&local_e8,&local_2d0);
        uVar7 = extraout_RDX_02;
        goto LAB_0126f939;
      }
    }
    else {
      cVar5 = _ZN12tracing_core8callsite15DefaultCallsite8interest17he9a0fdb56f10bbcaE
                        (&
                         _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                        );
      if (cVar5 == '\0') goto LAB_0126f6fc;
      cVar5 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17hcd52fb4fe9dde9efE_02538f48)
                        (_ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                         ,cVar5);
      puVar3 = _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E;
      if (cVar5 == '\0') goto LAB_0126f6fc;
      local_c0 = *(undefined8 *)
                  (
                  _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                  + 0x38);
      local_e8 = *(undefined8 ***)
                  (
                  _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                  + 0x30);
      uStack_e0 = *(undefined8 ****)
                   (
                   _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                   + 0x38);
      local_d8 = *(undefined8 ***)
                  (
                  _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                  + 0x40);
      uStack_d0 = *(undefined4 *)
                   (
                   _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                   + 0x48);
      uStack_cc = *(undefined4 *)
                   (
                   _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17he2cb0455fb3bc398E
                   + 0x4c);
      local_c8 = 0;
      _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                (&local_278,&local_e8);
      if ((undefined ****)local_278 != (undefined ****)0x0) {
        local_d8 = (undefined8 **)(puVar3 + 0x30);
        local_298 = local_258;
        local_2a8 = local_268;
        uStack_2a0 = uStack_260;
        local_2b8 = local_278;
        pppuStack_2b0 = pppuStack_270;
        local_228 = *(undefined8 *)(param_2 + 0x200);
        local_238 = *(undefined8 *)(param_2 + 0x1f0);
        uStack_230 = *(undefined8 *)(param_2 + 0x1f8);
        local_278 = *(undefined8 ***)(param_2 + 0x1b0);
        pppuStack_270 = *(undefined ****)(param_2 + 0x1b8);
        local_268 = *(undefined8 ***)(param_2 + 0x1c0);
        uStack_260 = *(code **)(param_2 + 0x1c8);
        local_258 = *(undefined8 *)(param_2 + 0x1d0);
        puStack_250 = *(undefined **)(param_2 + 0x1d8);
        local_248 = *(undefined4 *)(param_2 + 0x1e0);
        uStack_244 = *(undefined4 *)(param_2 + 0x1e4);
        uStack_240 = *(undefined4 *)(param_2 + 0x1e8);
        uStack_23c = *(undefined4 *)(param_2 + 0x1ec);
        local_2c8 = (code *)
                    PTR__ZN89__LT_linera_base__crypto__secp256k1__Secp256k1PublicKey_u20_as_u20_core__fmt__Display_GT_3fmt17h4f9d9f9c6d9d4d76E_0253ab68
        ;
        local_1d8 = &PTR_s_Public_key__02439200;
        uStack_1d0 = 1;
        local_1b8 = 0;
        local_1c8 = (undefined ***)&local_2d0;
        uStack_1c0 = 1;
        local_2f0 = (undefined ***)&local_2b8;
        local_2e8 = (code *)&local_1d8;
        local_2e0 = &DAT_02424b18;
        local_e8 = &local_2f0;
        uStack_e0 = (undefined8 ***)&DAT_00000001;
        local_2d0 = (undefined ***)&local_278;
        _ZN13linera_server13ServerContext16make_shard_state28__u7b__u7b_closure_u7d__u7d_17h0d3e685846ca7f63E
                  (&local_e8);
        uVar7 = extraout_RDX;
        goto LAB_0126f939;
      }
    }
    ppuVar8 = &PTR_s_linera_service_src_server_rs_02439258;
  }
  else {
    cVar5 = _ZN12tracing_core8callsite15DefaultCallsite8interest17he9a0fdb56f10bbcaE
                      (&
                       _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                      );
    if (cVar5 == '\0') goto LAB_0126f344;
    cVar5 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17hcd52fb4fe9dde9efE_02538f48)
                      (_ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                       ,cVar5);
    puVar3 = _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE;
    if (cVar5 == '\0') goto LAB_0126f344;
    local_1b0 = *(undefined8 *)
                 (
                 _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                 + 0x38);
    local_1d8 = *(undefined ***)
                 (
                 _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                 + 0x30);
    uStack_1d0 = *(undefined8 *)
                  (
                  _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                  + 0x38);
    local_1c8 = *(undefined ****)
                 (
                 _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                 + 0x40);
    uStack_1c0 = *(undefined8 *)
                  (
                  _ZN13linera_server13ServerContext16make_shard_state10__CALLSITE17h9e0b9eac58d8824fE
                  + 0x48);
    local_1b8 = 0;
    _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
              (&local_278,&local_1d8);
    if ((undefined ****)local_278 != (undefined ****)0x0) {
      local_1c8 = (undefined ***)(puVar3 + 0x30);
      local_c8 = local_258;
      local_d8 = local_268;
      uStack_d0 = (undefined4)uStack_260;
      uStack_cc = uStack_260._4_4_;
      local_e8 = local_278;
      uStack_e0 = (undefined8 ***)pppuStack_270;
      local_2e8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_278 = (undefined8 **)&PTR_DAT_024391f0;
      pppuStack_270 = (undefined ***)&DAT_00000001;
      local_258 = 0;
      local_268 = &local_2f0;
      uStack_260 = (code *)0x1;
      local_2b8 = &local_e8;
      local_2a8 = (undefined8 **)&DAT_02424b18;
      local_1d8 = (undefined **)&local_2b8;
      uStack_1d0 = 1;
      local_2f0 = (undefined ***)ppppuVar10;
      pppuStack_2b0 = (undefined ***)&local_278;
      _ZN13linera_server13ServerContext16make_shard_state28__u7b__u7b_closure_u7d__u7d_17h3f7d24b9817c5204E
                (&local_1d8);
      goto LAB_0126f517;
    }
LAB_0126fbc9:
    ppuVar8 = &PTR_s_linera_service_src_server_rs_02439240;
  }
                    /* try { // try from 0126fbd9 to 0126fbfc has its CatchHandler @ 0126fc11 */
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_02538ed8)
            ("FieldSet corrupted (this is a bug)",0x22,ppuVar8);
LAB_0126fbfd:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}