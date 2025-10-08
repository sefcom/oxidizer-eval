undefined8 *** _ZN15linera_exporter15ExporterOptions3run17h2bcb1a550b6ec7d8E(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  undefined auVar15 [16];
  undefined8 **local_3d8;
  undefined ***local_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 **local_388;
  undefined8 uStack_380;
  undefined *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_300;
  undefined local_2f8 [8];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 *local_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 **local_2c8;
  undefined ***pppuStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 **local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 **local_260;
  undefined ***pppuStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 **local_168;
  undefined ***local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined local_138 [24];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined local_e0 [144];
  long local_50;
  undefined local_38;
  
  _ZN6fs_err14read_to_string17h5b80936efd32b57aE(&local_260,param_1 + 0x38);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd48a95f83feb2948E(local_2f8,&local_260);
                    /* try { // try from 00a10e08 to 00a10e29 has its CatchHandler @ 00a1147e */
  _ZN66__LT_toml__de__Deserializer_u20_as_u20_serde__de__Deserializer_GT_18deserialize_struct17h23cd10f58d368935E
            (&local_260,local_2f0,local_2e8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h071fdcd8ff96e18eE(local_138,&local_260);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined4 *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  uVar4 = *(undefined4 *)(param_1 + 0xc4);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
                    /* try { // try from 00a10e6e to 00a111b5 has its CatchHandler @ 00a114ce */
    uVar12 = _ZN4core4sync6atomic11atomic_load17h40f9941cd4fab919E
                       (PTR__ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE_015926a8,0);
    if ((uVar12 != 5) && (uVar12 < 4)) {
      cVar11 = _ZN12tracing_core8callsite15DefaultCallsite8interest17he9a0fdb56f10bbcaE
                         (&_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E
                         );
      if (cVar11 != '\0') {
        cVar11 = (*(code *)
                   PTR__ZN7tracing15__macro_support12__is_enabled17hcd52fb4fe9dde9efE_015923b8)
                           (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E
                            ,cVar11);
        puVar9 = _ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E;
        if (cVar11 != '\0') {
          uStack_360 = *(undefined8 *)
                        (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                        0x38);
          local_388 = *(undefined8 ***)
                       (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                       0x30);
          uStack_380 = *(undefined8 *)
                        (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                        0x38);
          local_378 = *(undefined **)
                       (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                       0x40);
          uStack_370 = *(undefined4 *)
                        (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                        0x48);
          uStack_36c = *(undefined4 *)
                        (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                        0x4c);
          local_368 = 0;
          _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                    (&local_260,&local_388);
          if ((undefined8 ***)local_260 != (undefined8 ***)0x0) {
            local_378 = puVar9 + 0x30;
            local_2a8 = local_240;
            local_2b8 = (undefined4)local_250;
            uStack_2b4 = local_250._4_4_;
            uStack_2b0 = (undefined4)uStack_248;
            uStack_2ac = uStack_248._4_4_;
            local_2c8 = local_260;
            pppuStack_2c0 = pppuStack_258;
            local_260 = (undefined8 **)&PTR_DAT_014f2088;
            pppuStack_258 = (undefined ***)&DAT_00000001;
            local_250 = 8;
            uStack_248 = 0;
            local_240 = 0;
            local_3d8 = &local_2c8;
            local_3d0 = (undefined ***)&local_260;
            local_3c8 = &DAT_014e5cc0;
            local_388 = &local_3d8;
            uStack_380 = 1;
            _ZN15linera_exporter15ExporterOptions3run28__u7b__u7b_closure_u7d__u7d_17h3d732a5a0cdda48fE
                      (&local_388);
            goto LAB_00a111b6;
          }
          goto LAB_00a11439;
        }
      }
    }
    cVar11 = _ZN4core4sync6atomic11atomic_load17hf1e463d23e6553e3E
                       (PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_015926b8,0);
    if (cVar11 == '\0') {
      uVar12 = _ZN4core4sync6atomic11atomic_load17h40f9941cd4fab919E
                         (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h51cc9c3cd67347faE_015926c0,0);
      puVar9 = _ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E;
      if (1 < uVar12) {
        uStack_2d8 = *(undefined4 *)
                      (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                      0x20);
        uStack_2d4 = *(undefined4 *)
                      (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                      0x24);
        uStack_2d0 = *(undefined4 *)
                      (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                      0x28);
        uStack_2cc = *(undefined4 *)
                      (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                      0x2c);
        local_2e0 = (undefined8 **)0x2;
        auVar15 = (*(code *)PTR__ZN3log6logger17h0d3dd8cac80dc3faE_015926c8)();
        cVar11 = (**(code **)(auVar15._8_8_ + 0x18))(auVar15._0_8_,&local_2e0);
        puVar10 = _ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E;
        if (cVar11 != '\0') {
          uStack_360 = *(undefined8 *)
                        (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                        0x38);
          local_388 = *(undefined8 ***)
                       (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                       0x30);
          uStack_380 = *(undefined8 *)
                        (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                        0x38);
          local_378 = *(undefined **)
                       (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                       0x40);
          uStack_370 = *(undefined4 *)
                        (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                        0x48);
          uStack_36c = *(undefined4 *)
                        (_ZN15linera_exporter15ExporterOptions3run10__CALLSITE17hf2095cebca00aa70E +
                        0x4c);
          local_368 = 0;
          _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                    (&local_260,&local_388);
          if ((undefined8 ***)local_260 == (undefined8 ***)0x0) {
LAB_00a11439:
                    /* try { // try from 00a11439 to 00a11451 has its CatchHandler @ 00a114ce */
            (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_015923a8)
                      ("FieldSet corrupted (this is a bug)",0x22,&PTR_DAT_014f2118);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          local_268 = puVar10 + 0x30;
          local_2a8 = local_240;
          local_2b8 = (undefined4)local_250;
          uStack_2b4 = local_250._4_4_;
          uStack_2b0 = (undefined4)uStack_248;
          uStack_2ac = uStack_248._4_4_;
          local_2c8 = local_260;
          pppuStack_2c0 = pppuStack_258;
          local_260 = (undefined8 **)&PTR_DAT_014f2088;
          pppuStack_258 = (undefined ***)&DAT_00000001;
          local_250 = 8;
          uStack_248 = 0;
          local_240 = 0;
          local_3d8 = &local_2c8;
          local_3d0 = (undefined ***)&local_260;
          local_3c8 = &DAT_014e5cc0;
          local_278 = &local_3d8;
          local_270 = 1;
          local_378 = (undefined *)CONCAT44(uStack_2cc,uStack_2d0);
          local_388 = (undefined8 **)local_2e0;
          uStack_380 = CONCAT44(uStack_2d4,uStack_2d8);
          (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h5fab331f013c479bE_015926d0)
                    (puVar9,auVar15._0_8_,auVar15._8_8_,&local_388,&local_278);
        }
      }
    }
  }
LAB_00a111b6:
  local_338 = local_e8;
  local_348 = local_f8;
  uStack_340 = uStack_f0;
  local_358 = local_108;
  uStack_354 = uStack_104;
  uStack_350 = uStack_100;
  uStack_34c = uStack_fc;
  uStack_370 = uStack_120;
  uStack_36c = uStack_11c;
                    /* try { // try from 00a11254 to 00a11261 has its CatchHandler @ 00a11479 */
  local_330 = uVar5;
  local_328 = uVar1;
  local_320 = uVar6;
  local_318 = uVar2;
  local_310 = uVar7;
  local_308 = uVar3;
  local_300 = uVar4;
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder16new_multi_thread17h05e5bcdd261c2feaE_01594878)
            (&local_260);
                    /* try { // try from 00a11262 to 00a112bf has its CatchHandler @ 00a11496 */
  _ZN5tokio7runtime7builder7Builder11thread_name17hf0692fca54c2140cE(&local_260);
  lVar13 = (*(code *)
             PTR__ZN5tokio7runtime7builder7Builder14worker_threads17hcd535c7d235d69e5E_01594880)
                     (&local_260,*(undefined8 *)(param_1 + 0xb8),&PTR_DAT_014f2130);
  *(undefined2 *)(lVar13 + 0xcd) = 0x101;
  (*(code *)PTR__ZN5tokio7runtime7builder7Builder5build17h9da2fc630f00e176E_01594888)
            (&local_2c8,lVar13);
  if ((undefined8 ***)local_2c8 == (undefined8 ***)0x2) {
    pppuVar14 = (undefined8 ***)
                _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h129b6702d553d147E
                          ();
                    /* try { // try from 00a112c0 to 00a112cf has its CatchHandler @ 00a11479 */
    _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17hb30b8e61c1016d89E
              (&local_260);
    _ZN4core3ptr53drop_in_place_LT_linera_exporter__ExporterContext_GT_17h27ac79c8aeb9c1efE
              (&local_388);
  }
  else {
    local_398 = local_288;
    uStack_394 = uStack_284;
    uStack_390 = uStack_280;
    uStack_38c = uStack_27c;
    local_3a8 = local_298;
    uStack_3a4 = uStack_294;
    uStack_3a0 = uStack_290;
    uStack_39c = uStack_28c;
    local_3b8 = (undefined4)local_2a8;
    uStack_3b4 = local_2a8._4_4_;
    uStack_3b0 = uStack_2a0;
    uStack_3ac = uStack_29c;
    local_3c8 = (undefined *)CONCAT44(uStack_2b4,local_2b8);
    uStack_3c0 = uStack_2b0;
    uStack_3bc = uStack_2ac;
    local_3d8 = local_2c8;
    local_3d0 = pppuStack_2c0;
                    /* try { // try from 00a11323 to 00a1132f has its CatchHandler @ 00a11465 */
    _ZN4core3ptr53drop_in_place_LT_tokio__runtime__builder__Builder_GT_17hb30b8e61c1016d89E
              (&local_260);
    local_50 = param_1;
    (*(code *)PTR_memcpy_01592358)(local_e0,&local_388,0x90);
    local_38 = 0;
                    /* try { // try from 00a11360 to 00a11374 has its CatchHandler @ 00a11465 */
    _ZN5tokio7runtime7runtime7Runtime8block_on17h27623228695bb653E(&local_260,&local_3d8,local_e0);
    pppuVar14 = (undefined8 ***)pppuStack_258;
    if ((undefined8 ***)local_260 == (undefined8 ***)0x800000000000001d) {
                    /* try { // try from 00a11398 to 00a113a1 has its CatchHandler @ 00a11463 */
      _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h4dcd451b8ab22d9eE
                (&local_3d8);
    }
    else {
      local_178 = local_240;
      uVar5 = local_178;
      uStack_170 = uStack_238;
      uVar6 = uStack_170;
      local_188 = (undefined4)local_250;
      uStack_184 = local_250._4_4_;
      uStack_180 = (undefined4)uStack_248;
      uStack_17c = uStack_248._4_4_;
      if ((undefined8 ***)local_260 == (undefined8 ***)0x800000000000001c) {
        pppuVar14 = (undefined8 ***)0x0;
      }
      else {
        local_168 = local_260;
        local_160 = pppuStack_258;
        local_178._0_4_ = (undefined4)local_240;
        local_178._4_4_ = (undefined4)((ulong)local_240 >> 0x20);
        uStack_170._0_4_ = (undefined4)uStack_238;
        uStack_170._4_4_ = (undefined4)((ulong)uStack_238 >> 0x20);
        local_158 = (undefined4)local_250;
        uStack_154 = local_250._4_4_;
        uStack_150 = (undefined4)uStack_248;
        uStack_14c = uStack_248._4_4_;
        local_148 = (undefined4)local_178;
        uStack_144 = local_178._4_4_;
        uStack_140 = (undefined4)uStack_170;
        uStack_13c = uStack_170._4_4_;
                    /* try { // try from 00a113fd to 00a11409 has its CatchHandler @ 00a11454 */
        local_178 = uVar5;
        uStack_170 = uVar6;
        pppuVar14 = (undefined8 ***)
                    _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h1b7b6a42255b0bf1E
                              (&local_168);
      }
                    /* try { // try from 00a1140d to 00a11416 has its CatchHandler @ 00a11463 */
      _ZN4core3ptr53drop_in_place_LT_tokio__runtime__runtime__Runtime_GT_17h4dcd451b8ab22d9eE
                (&local_3d8);
    }
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc9583e30c0e6a4f7E(local_2f8);
  return pppuVar14;
}