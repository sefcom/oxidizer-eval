undefined **
_ZN9meilitool7upgrade5v1_1220convert_update_files17hd00d2ba97577ae63E
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int __fd;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined2 local_562;
  undefined4 local_560;
  undefined2 uStack_55c;
  undefined uStack_55a;
  undefined **local_559;
  undefined local_551;
  undefined local_550 [24];
  undefined **local_538;
  char local_530;
  undefined4 local_528;
  undefined2 local_524;
  undefined local_522;
  undefined **local_521;
  undefined local_519;
  undefined **local_510;
  undefined **local_508;
  undefined8 *local_500;
  undefined **local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined **local_4e8;
  undefined8 local_4d8;
  undefined **ppuStack_4d0;
  undefined8 uStack_4c8;
  undefined **ppuStack_4c0;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined **local_498;
  undefined **local_490;
  undefined8 local_488;
  char local_480;
  undefined7 uStack_47f;
  undefined local_470 [24];
  long local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined2 local_418;
  undefined2 uStack_416;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined **local_408;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  long local_348;
  undefined **ppuStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined **local_308;
  undefined8 local_300;
  char local_2f8;
  undefined7 local_2f7;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined **local_288 [2];
  char local_278;
  undefined8 local_268;
  undefined **ppuStack_260;
  undefined8 *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined **local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined local_140 [24];
  undefined **local_128;
  undefined **local_120;
  undefined local_118 [232];
  
  _ZN3std4path4Path4join17h83de109013289b74E(local_470,param_1,param_2,"update_files",0xc);
                    /* try { // try from 00458224 to 00458250 has its CatchHandler @ 00458b3b */
  _ZN10file_store9FileStore3new17h98b6036d8f43a671E(&local_448,local_470);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h5935fbb986569ce2E
            (&local_268,&local_448,local_470);
  local_510 = local_268;
  local_508 = ppuStack_260;
  local_500 = local_258;
                    /* try { // try from 00458284 to 004582ab has its CatchHandler @ 00458b36 */
  (*(code *)PTR__ZN10file_store9FileStore9all_uuids17h4b23e75efc7a2d9eE_0063ceb8)
            (&local_448,&local_510);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h4c93d0cfe571659bE
            (&local_268,&local_448);
  ppuVar7 = local_268;
  if ((char)ppuStack_260 != '\x02') {
    local_538 = local_268;
    local_530 = (char)ppuStack_260;
                    /* try { // try from 004582f4 to 004583c5 has its CatchHandler @ 00458b2c */
    while (_ZN4core4iter6traits8iterator8Iterator8try_fold17hb852a38171291163E
                     (&local_448,&local_538), local_448 != (undefined **)&DAT_00000005) {
      local_148 = local_420;
      local_158 = (undefined4)uStack_430;
      uStack_154 = uStack_430._4_4_;
      uStack_150 = (undefined4)uStack_428;
      uStack_14c = uStack_428._4_4_;
      local_168 = (undefined4)uStack_440;
      uStack_164 = uStack_440._4_4_;
      uStack_160 = (undefined4)uStack_438;
      uStack_15c = uStack_438._4_4_;
      local_170 = local_448;
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h050b5b36d2dc7bbaE
                (&local_448,&local_170);
      ppuVar7 = uStack_440;
      if ((char)local_448 == '\x01') {
LAB_00458a32:
                    /* try { // try from 00458a32 to 00458a3b has its CatchHandler @ 00458b36 */
        _ZN4core3ptr152drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_std__fs__ReadDir_C_file_store__FileStore__all_uuids___u7b__u7b_closure_u7d__u7d__GT__GT_17headf75c07ba6ce73E
                  (&local_538);
        goto LAB_00458a3c;
      }
      uStack_55c = (undefined2)((ulong)local_448 >> 0x28);
      uStack_55a = (undefined)((ulong)local_448 >> 0x38);
      local_560 = local_448._1_4_;
      local_559 = uStack_440;
      local_551 = (undefined)uStack_438;
      local_528 = local_448._1_4_;
      local_524 = uStack_55c;
      local_522 = uStack_55a;
      local_521 = uStack_440;
      local_519 = (undefined)uStack_438;
      (*(code *)PTR__ZN10file_store9FileStore15get_update_path17hca91f22e5aa84c4eE_0063cec0)
                (local_550,&local_510,&local_560);
                    /* try { // try from 004583c6 to 004583ed has its CatchHandler @ 00458b15 */
      (*(code *)PTR__ZN10file_store9FileStore10get_update17h3fcceaa3938161c3E_0063cec8)
                (&local_448,&local_510,&local_560);
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h7adf8cb6c65b16f5E
                (&local_268,&local_448,&local_528);
      ppuVar7 = ppuStack_260;
      if (((ulong)local_268 & 1) != 0) {
LAB_00458a28:
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_550);
        goto LAB_00458a32;
      }
      __fd = local_268._4_4_;
      local_420 = 6;
      uStack_440 = (undefined **)&DAT_00247098;
      uStack_438 = (undefined8 *)0x4;
      uStack_430 = (undefined **)0x1;
      uStack_428 = 0;
      local_418 = 0;
      local_448 = (undefined **)((ulong)local_448 & 0xffffffff00000000);
                    /* try { // try from 00458458 to 004584fd has its CatchHandler @ 00458b1a */
      _ZN8tempfile7Builder11tempfile_in17h8cd7080f36df7cdfE(local_288,&local_448,local_470);
      if (local_278 == '\x02') {
        ppuStack_260 = local_288[0];
        local_268 = (undefined **)&DAT_8000000000000000;
      }
      else {
        _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h6af8c5f86ce0615bE
                  (&local_448,local_288);
        local_238 = CONCAT44(uStack_414,CONCAT22(uStack_416,local_418));
        uStack_230 = CONCAT44(uStack_40c,uStack_410);
        local_248 = uStack_428;
        uStack_240 = local_420;
        local_258 = uStack_438;
        uStack_250 = uStack_430;
        local_268 = local_448;
        ppuStack_260 = uStack_440;
      }
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h53edb17af3d60574E
                (&local_2e8,&local_268,local_550);
      ppuVar7 = (undefined **)CONCAT44(uStack_2dc,uStack_2e0);
      if (CONCAT44(uStack_2e4,local_2e8) == -0x8000000000000000) {
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h55cf89c86e1ade56E(__fd);
        goto LAB_00458a28;
      }
      local_318 = (undefined4)local_2b8;
      uStack_314 = local_2b8._4_4_;
      uStack_310 = (undefined4)uStack_2b0;
      uStack_30c = uStack_2b0._4_4_;
      local_328 = (undefined4)local_2c8;
      uStack_324 = local_2c8._4_4_;
      uStack_320 = (undefined4)uStack_2c0;
      uStack_31c = uStack_2c0._4_4_;
      local_338 = (undefined4)local_2d8;
      uStack_334 = local_2d8._4_4_;
      uStack_330 = (undefined4)uStack_2d0;
      uStack_32c = uStack_2d0._4_4_;
      local_348 = CONCAT44(uStack_2e4,local_2e8);
      ppuStack_340 = ppuVar7;
                    /* try { // try from 0045854d to 0045856c has its CatchHandler @ 00458b27 */
      _ZN5milli9documents6reader29DocumentsBatchReader_LT_R_GT_11from_reader17h25ee1ae4be1d6a7cE
                (&local_448,__fd);
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hf1f47de51419ce44E
                (&local_268,&local_448,local_550);
      ppuVar7 = ppuStack_260;
      ppuVar3 = local_268;
      if (local_268 == (undefined **)0x3) {
LAB_00458a1b:
                    /* try { // try from 00458a1b to 00458a27 has its CatchHandler @ 00458b0e */
        _ZN4core3ptr97drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_tempfile__file__NamedTempFile_GT__GT_17h683fa5c60c7b83adE
                  (&local_348);
        goto LAB_00458a28;
      }
      (*(code *)PTR_memcpy_0063bdc0)(local_118,&local_258,0xe8);
      local_128 = ppuVar3;
      local_120 = ppuVar7;
                    /* try { // try from 004585b2 to 004585c1 has its CatchHandler @ 00458b27 */
      _ZN5milli9documents6reader29DocumentsBatchReader_LT_R_GT_28into_cursor_and_fields_index17h6776af2f5cb89d51E
                (&local_448,&local_128);
      (*(code *)PTR_memcpy_0063bdc0)(&local_268,&local_448,0x98);
      local_298 = local_360;
      uStack_290 = uStack_358;
      local_2a8 = local_370;
      uStack_2a0 = uStack_368;
      local_2b8 = local_380;
      uStack_2b0 = uStack_378;
      local_2c8 = local_390;
      uStack_2c0 = uStack_388;
      local_2d8 = local_3a0;
      uStack_2d0 = uStack_398;
      local_2e8 = local_3b0;
      uStack_2e4 = uStack_3ac;
      uStack_2e0 = uStack_3a8;
      uStack_2dc = uStack_3a4;
      while( true ) {
                    /* try { // try from 0045863d to 00458688 has its CatchHandler @ 00458b31 */
        _ZN5milli9documents6reader29DocumentsBatchCursor_LT_R_GT_13next_document17hc65d4dae290e9945E
                  (&local_448,&local_268);
        _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h0fbc6d7451db9701E
                  (&local_4d8,&local_448,local_550);
        uVar8 = uStack_4c8;
        ppuVar7 = ppuStack_4d0;
        bVar2 = true;
        if (((ulong)local_4d8 & 1) != 0) goto LAB_004589fb;
        if (ppuStack_4d0 == (undefined **)0x0) break;
        uVar5 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h800e440079c720b9E();
        _ZN8indexmap3map25IndexMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17h3f1a049a27f4d152E
                  (&local_448,uVar5);
        local_490 = ppuVar7;
        local_488 = uVar8;
        local_480 = '\0';
        uStack_47f = 0;
        while( true ) {
                    /* try { // try from 004586b0 to 00458774 has its CatchHandler @ 00458b53 */
          _ZN4core4iter8adapters4fuse17and_then_or_clear17h84e44fec36e36bd7E(&local_4f8,&local_490);
          ppuVar3 = local_4e8;
          puVar1 = (undefined *)CONCAT44(uStack_4ec,uStack_4f0);
          if (puVar1 == (undefined *)0x0) break;
          local_562 = SUB82(local_4f8,0);
          auVar9 = (*(code *)
                     PTR__ZN5milli9documents19DocumentsBatchIndex4name17hbf7720461e1f80f5E_0063ced0)
                             (&local_2e8);
          _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_12with_context17h601c824b401d34daE
                    (&local_4d8,auVar9._0_8_,auVar9._8_8_,&local_562,local_550);
          ppuVar7 = ppuStack_4d0;
          puVar4 = local_4d8;
          if (local_4d8 == (undefined *)0x0) goto LAB_004589ee;
          ppuStack_4d0 = ppuVar3;
          uStack_4c8 = 0;
          ppuStack_4c0 = (undefined **)0x0;
          local_4d8 = puVar1;
          _ZN10serde_json2de10from_trait17hd3cb4c1547752769E(&local_458,&local_4d8);
          if (local_458 == 0) {
                    /* try { // try from 004589e3 to 004589ea has its CatchHandler @ 00458b0a */
            ppuVar7 = (undefined **)
                      _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h584418fd25762e2eE
                                (local_450);
            goto LAB_004589ee;
          }
          _ZN8indexmap3map25IndexMap_LT_K_C_V_C_S_GT_11insert_full17h52a0efe679b3b153E
                    (&local_4d8,&local_448,puVar4,ppuVar7);
        }
                    /* try { // try from 0045878a to 00458796 has its CatchHandler @ 00458b0c */
        lVar6 = _ZN10serde_json3ser9to_writer17h165cb5c54c58bfe4E(&local_348,uStack_440,uStack_438);
        if (lVar6 != 0) {
                    /* try { // try from 00458aa2 to 00458aa9 has its CatchHandler @ 00458b0a */
          ppuVar7 = (undefined **)
                    _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h584418fd25762e2eE
                              (lVar6);
LAB_004589ee:
          _ZN4core3ptr91drop_in_place_LT_indexmap__map__IndexMap_LT__RF_str_C__RF_serde_json__raw__RawValue_GT__GT_17hba1596e72a35896cE
                    (&local_448);
          goto LAB_004589fb;
        }
        _ZN4core3ptr91drop_in_place_LT_indexmap__map__IndexMap_LT__RF_str_C__RF_serde_json__raw__RawValue_GT__GT_17hba1596e72a35896cE
                  (&local_448);
      }
      local_418 = (undefined2)local_318;
      uStack_416 = (undefined2)((uint)local_318 >> 0x10);
      uStack_414 = uStack_314;
      uStack_410 = uStack_310;
      uStack_40c = uStack_30c;
      uStack_428 = CONCAT44(uStack_324,local_328);
      local_420 = CONCAT44(uStack_31c,uStack_320);
      uStack_438 = (undefined8 *)CONCAT44(uStack_334,local_338);
      uStack_430 = (undefined **)CONCAT44(uStack_32c,uStack_330);
      local_448 = (undefined **)local_348;
      uStack_440 = ppuStack_340;
                    /* try { // try from 004587f5 to 0045888a has its CatchHandler @ 00458afe */
      _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_10into_inner17h7b69e3b642830223E
                (&local_4d8,&local_448);
      ppuVar7 = local_498;
      if (local_4d8 == &DAT_8000000000000000) {
        local_4e8 = ppuStack_4c0;
        local_4f8 = ppuStack_4d0;
        uStack_4f0 = (undefined4)uStack_4c8;
        uStack_4ec = uStack_4c8._4_4_;
        uVar8 = extraout_RDX;
      }
      else {
        local_418 = (undefined2)local_4a8;
        uStack_416 = (undefined2)((uint)local_4a8 >> 0x10);
        uStack_414 = uStack_4a4;
        uStack_410 = uStack_4a0;
        uStack_40c = uStack_49c;
        local_420 = CONCAT44(uStack_4ac,uStack_4b0);
        uStack_438 = (undefined8 *)uStack_4c8;
        uStack_430 = ppuStack_4c0;
        local_448 = (undefined **)local_4d8;
        uStack_440 = ppuStack_4d0;
        local_408 = local_498;
        _ZN4core3ptr97drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_tempfile__file__NamedTempFile_GT__GT_17h683fa5c60c7b83adE
                  (&local_448);
        local_4f8 = ppuVar7;
        local_4e8 = (undefined **)CONCAT71(local_4e8._1_7_,2);
        uVar8 = extraout_RDX_00;
      }
      local_4d8 = local_550;
      ppuStack_4d0 = (undefined **)
                     PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_0063ced8
      ;
      local_448 = &PTR_s_while_flushing_update_file_bufwr_00626368;
      uStack_440 = (undefined **)&DAT_00000001;
      uStack_428 = 0;
      uStack_430 = (undefined **)0x1;
                    /* try { // try from 004588ef to 00458903 has its CatchHandler @ 00458ae8 */
      uStack_438 = &local_4d8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h9b971f5684418c65E
                (local_140,0,uVar8,&local_448);
                    /* try { // try from 00458904 to 00458918 has its CatchHandler @ 00458ae6 */
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17hd26bba4bc009dde5E
                (&local_490,&local_4f8,local_140);
      if (local_480 == '\x02') {
        bVar2 = false;
        ppuVar7 = local_490;
LAB_004589fb:
                    /* try { // try from 004589fb to 00458a07 has its CatchHandler @ 00458b10 */
        _ZN4core3ptr58drop_in_place_LT_milli__documents__DocumentsBatchIndex_GT_17h21607bb8e4be6797E
                  (&local_2e8);
        _ZN4core3ptr88drop_in_place_LT_milli__documents__reader__DocumentsBatchCursor_LT_std__fs__File_GT__GT_17h3a6c17eecf0bb8f6E
                  (&local_268);
        if (!bVar2) goto LAB_00458a28;
        goto LAB_00458a1b;
      }
      local_2f7 = uStack_47f;
      local_308 = local_490;
      local_300 = local_488;
      local_2f8 = local_480;
                    /* try { // try from 0045896e to 00458992 has its CatchHandler @ 00458afe */
      _ZN8tempfile4file22NamedTempFile_LT_F_GT_7persist17h148d89e85a13836dE
                (&local_448,&local_308,local_550);
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h5c7dafbbf3aee24cE
                (&local_4d8,&local_448,local_550);
      if (((ulong)local_4d8 & 1) != 0) {
        bVar2 = false;
        ppuVar7 = ppuStack_4d0;
        goto LAB_004589fb;
      }
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h55cf89c86e1ade56E(local_4d8._4_4_);
                    /* try { // try from 004589ad to 004589b9 has its CatchHandler @ 00458ad1 */
      _ZN4core3ptr58drop_in_place_LT_milli__documents__DocumentsBatchIndex_GT_17h21607bb8e4be6797E
                (&local_2e8);
      _ZN4core3ptr88drop_in_place_LT_milli__documents__reader__DocumentsBatchCursor_LT_std__fs__File_GT__GT_17h3a6c17eecf0bb8f6E
                (&local_268);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_550);
    }
                    /* try { // try from 00458a68 to 00458a74 has its CatchHandler @ 00458acf */
    _ZN4core3ptr123drop_in_place_LT_core__ops__control_flow__ControlFlow_LT_core__result__Result_LT_uuid__Uuid_C_file_store__Error_GT__GT__GT_17h924c456b67608ef4E
              (&local_448);
                    /* try { // try from 00458a75 to 00458a7e has its CatchHandler @ 00458b36 */
    _ZN4core3ptr152drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_std__fs__ReadDir_C_file_store__FileStore__all_uuids___u7b__u7b_closure_u7d__u7d__GT__GT_17headf75c07ba6ce73E
              (&local_538);
    ppuVar7 = (undefined **)0x0;
  }
LAB_00458a3c:
  _ZN4core3ptr42drop_in_place_LT_file_store__FileStore_GT_17h972265dd518d2756E(&local_510);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h708ece29a2bc75a7E(local_470);
  return ppuVar7;
}