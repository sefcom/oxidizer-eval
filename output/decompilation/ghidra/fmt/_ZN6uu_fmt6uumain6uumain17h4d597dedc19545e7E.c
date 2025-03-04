undefined  [16] _ZN6uu_fmt6uumain6uumain17h4d597dedc19545e7E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined *puVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  char cVar6;
  undefined uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  int extraout_EDX;
  undefined auVar11 [16];
  undefined8 ****local_3d8;
  undefined8 ****local_3d0;
  ulong local_3c8;
  undefined8 ****local_3c0;
  undefined8 ****local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined local_388 [8];
  long local_380;
  ulong local_378;
  undefined8 ****local_370;
  undefined local_368 [16];
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 ****local_320;
  undefined8 ****local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  ulong local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  
  _ZN4core4iter6traits8iterator8Iterator7collect17had47ac2ddb67d26aE(local_388,param_1,param_2);
  if (1 < local_378) {
                    /* try { // try from 0016923a to 00169244 has its CatchHandler @ 001696e3 */
    (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E_0022a418)
              (&local_3c0,*(undefined8 *)(local_380 + 0x20),*(undefined8 *)(local_380 + 0x28));
    ppppuVar4 = local_3b8;
    uVar10 = CONCAT44(uStack_3ac,local_3b0);
    local_2f8 = (undefined **)((ulong)local_2f8 & 0xffffffff00000000);
                    /* try { // try from 0016925a to 001692aa has its CatchHandler @ 001696a6 */
    auVar11 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(&local_2f8);
    cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h2971c2e1dfecdedfE
                      (ppppuVar4,uVar10,auVar11._0_8_,auVar11._8_8_);
    if (cVar6 != '\0') {
      uStack_2f0 = (undefined8 *****)(CONCAT44(uStack_3ac,local_3b0) + (long)local_3b8);
      local_2f8 = (undefined **)local_3b8;
      lVar9 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h7ba654970d2c1b3eE
                        (&local_2f8,1);
      if (((lVar9 == 0) &&
          (iVar8 = _ZN4core3str11validations15next_code_point17ha2c5c8f2c7e9b106E(&local_2f8),
          iVar8 != 0)) && (extraout_EDX - 0x30U < 10)) {
        uStack_2f0 = (undefined8 *****)(CONCAT44(uStack_3ac,local_3b0) + (long)local_3b8);
        local_2f8 = (undefined **)local_3b8;
        local_2e8 = (undefined *)0x2;
                    /* try { // try from 00169521 to 00169634 has its CatchHandler @ 001696a6 */
        uVar7 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17ha210a45ec350f961E
                          (&local_2f8);
        cVar6 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h11f5455cc95e9734E
                          (uVar7);
        ppppuVar4 = local_3b8;
        if (cVar6 != '\0') {
          uVar10 = CONCAT44(uStack_3ac,local_3b0);
          local_2f8 = (undefined **)((ulong)local_2f8 & 0xffffffff00000000);
          auVar11 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(&local_2f8);
          local_368 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hdb721c8cd5e22968E
                                (auVar11._0_8_,auVar11._8_8_,ppppuVar4,uVar10);
          if (local_368._0_8_ == 0) {
                    /* try { // try from 00169688 to 00169694 has its CatchHandler @ 001696a6 */
            (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_0022a458)
                      (&PTR_DAT_00223a58);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_370 = (undefined8 *****)0x0;
          uStack_358 = CONCAT31(uStack_358._1_3_,1);
          local_3d8 = &local_370;
          local_3d0 = (undefined8 ****)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_0022a450
          ;
          local_2f8 = &PTR_DAT_00223a48;
          uStack_2f0 = (undefined8 *****)0x1;
          uStack_2d8 = 0;
          local_2e0 = 1;
          local_2e8 = (undefined *)&local_3d8;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17hc9968c7ec2993a3cE(&local_310,&local_2f8);
          local_2e0 = CONCAT44(local_2e0._4_4_,1);
          local_2f8 = (undefined **)CONCAT44(uStack_30c,local_310);
          uStack_2f0 = (undefined8 *****)CONCAT44(uStack_304,uStack_308);
          local_2e8 = (undefined *)local_300;
          uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5f75f92fa2fc2663E(&local_2f8);
                    /* try { // try from 00169635 to 00169641 has its CatchHandler @ 001696e3 */
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h89e5cba2904b1c92E
                    (&local_3c0);
          auVar11._8_8_ =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17ha6d37be63a57c07fE_00223aa8
          ;
          auVar11._0_8_ = uVar10;
          goto LAB_001694b5;
        }
      }
    }
                    /* try { // try from 001692b4 to 00169301 has its CatchHandler @ 001696e3 */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h89e5cba2904b1c92E(&local_3c0)
    ;
  }
  (*(code *)PTR__ZN6uu_fmt6uu_app17h6ccf3ffc03c52d4cE_0022a420)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h2c39ca88ebe63a43E
            (&local_370,&local_2f8,local_388);
  if ((undefined8 *****)local_370 == (undefined8 *****)0x8000000000000000) {
    auVar11 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0022a428
              )();
  }
  else {
    local_3a0 = local_350;
    uStack_39c = uStack_34c;
    uStack_398 = uStack_348;
    uStack_394 = uStack_344;
    local_3b0 = local_368._8_4_;
    uStack_3ac = local_368._12_4_;
    uStack_3a8 = uStack_358;
    uStack_3a4 = uStack_354;
    local_3c0 = local_370;
    local_3b8 = (undefined8 ****)local_368._0_8_;
                    /* try { // try from 0016933b to 0016934d has its CatchHandler @ 001696a1 */
    (*(code *)PTR__ZN6uu_fmt13extract_files17h65884a2383ba06f2E_0022a430)(&local_2f8,&local_3c0);
    auVar11._8_8_ = local_2e8;
    auVar11._0_8_ = uStack_2f0;
    if ((undefined8 *****)local_2f8 != (undefined8 *****)0x8000000000000000) {
      local_3d8 = (undefined8 ****)local_2f8;
      local_3d0 = uStack_2f0;
      local_3c8 = (ulong)local_2e8;
                    /* try { // try from 0016937d to 0016938f has its CatchHandler @ 0016969c */
      (*(code *)PTR__ZN6uu_fmt10FmtOptions12from_matches17ha8709eba89c06adbE_0022a438)
                (&local_2f8,&local_3c0);
      puVar5 = local_2e8;
      auVar11._8_8_ = local_2e8;
      auVar11._0_8_ = uStack_2f0;
      if ((undefined8 *****)local_2f8 != (undefined8 *****)0x8000000000000001) {
        local_328 = local_2b0;
        local_338 = local_2c0;
        uStack_334 = uStack_2bc;
        uStack_330 = uStack_2b8;
        uStack_32c = uStack_2b4;
        uStack_348 = local_2d0;
        uStack_344 = uStack_2cc;
        local_340 = uStack_2c8;
        uStack_33c = uStack_2c4;
        uStack_358 = (undefined4)local_2e0;
        uStack_354 = local_2e0._4_4_;
        local_350 = (undefined4)uStack_2d8;
        uStack_34c = uStack_2d8._4_4_;
        local_370 = (undefined8 ****)local_2f8;
        local_368._0_8_ = uStack_2f0;
        local_368._8_8_ = local_2e8;
                    /* try { // try from 00169403 to 0016941d has its CatchHandler @ 00169697 */
        uVar10 = (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_0022a440)();
        _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h76aeb7fd66c6f503E
                  (&local_2f8,0x2000,uVar10);
        puVar3 = PTR__ZN6uu_fmt12process_file17h286817e23c9d96bbE_0022a448;
        local_318 = local_3d0 + local_3c8 * 3;
        local_320 = local_3d0;
        do {
          lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6d8ec22a73c6b668E
                            (&local_320);
          if (lVar9 == 0) {
                    /* try { // try from 0016964e to 0016965a has its CatchHandler @ 00169697 */
            _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h5437aef1784e66e4E
                      (&local_2f8);
                    /* try { // try from 0016965b to 00169664 has its CatchHandler @ 0016969c */
            _ZN4core3ptr39drop_in_place_LT_uu_fmt__FmtOptions_GT_17hac3fe91eb70a1596E(&local_370);
                    /* try { // try from 00169665 to 0016966c has its CatchHandler @ 001696a1 */
            _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h3af8a85558a8e77dE
                      (&local_3d8);
                    /* try { // try from 0016966d to 00169676 has its CatchHandler @ 001696e3 */
            _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h808e47ba2ada1f90E
                      (&local_3c0);
            _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h4c4617d61c3bdfdaE
                      (local_388);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = puVar5;
            return auVar2 << 0x40;
          }
                    /* try { // try from 00169479 to 00169480 has its CatchHandler @ 001696b5 */
          auVar11 = (*(code *)puVar3)(*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
                                      &local_370,&local_2f8);
        } while (auVar11._0_8_ == 0);
                    /* try { // try from 00169489 to 00169498 has its CatchHandler @ 00169697 */
        _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h5437aef1784e66e4E
                  (&local_2f8);
                    /* try { // try from 00169499 to 001694a2 has its CatchHandler @ 0016969c */
        _ZN4core3ptr39drop_in_place_LT_uu_fmt__FmtOptions_GT_17hac3fe91eb70a1596E(&local_370);
      }
                    /* try { // try from 001694a3 to 001694aa has its CatchHandler @ 001696a1 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h3af8a85558a8e77dE
                (&local_3d8);
    }
                    /* try { // try from 001694ab to 001694b4 has its CatchHandler @ 001696e3 */
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h808e47ba2ada1f90E
              (&local_3c0);
  }
LAB_001694b5:
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h4c4617d61c3bdfdaE
            (local_388);
  return auVar11;
}