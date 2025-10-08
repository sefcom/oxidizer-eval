undefined  [16] _ZN6uu_fmt6uumain6uumain17hae5114733245429cE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  undefined *puVar9;
  char cVar10;
  byte bVar11;
  undefined uVar12;
  undefined8 uVar13;
  long lVar14;
  int extraout_EDX;
  undefined8 ***pppuVar15;
  undefined auVar16 [16];
  undefined8 **local_3c8;
  undefined8 **local_3c0;
  long local_3b8;
  undefined8 **local_3b0;
  undefined local_3a8 [16];
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 **local_360;
  undefined8 **local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined local_328 [8];
  long local_320;
  ulong local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  long local_300;
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
  
  _ZN4core4iter6traits8iterator8Iterator7collect17h759cd8083e21001fE(local_328,param_1,param_2);
  if (1 < local_318) {
                    /* try { // try from 00159208 to 00159212 has its CatchHandler @ 0015965c */
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001f6ed0)
              (&local_360,*(undefined8 *)(local_320 + 0x20),*(undefined8 *)(local_320 + 0x28));
    ppuVar7 = local_358;
    ppuVar6 = local_360;
    lVar3 = CONCAT44(uStack_34c,local_350);
    local_2f8 = (undefined **)((ulong)local_2f8 & 0xffffffff00000000);
    uVar13 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_2f8);
    cVar10 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h2f7e75ad3812e3c5E
                       (ppuVar7,lVar3,uVar13);
    if (cVar10 != '\0') {
      local_2f8 = (undefined **)ppuVar7;
      uStack_2f0 = (undefined8 ***)((long)ppuVar7 + lVar3);
      lVar14 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h79c51f2353e76d38E
                         (&local_2f8,1);
      if ((lVar14 == 0) &&
         (bVar11 = _ZN4core3str11validations15next_code_point17hdb1075951a601d60E(&local_2f8),
         (bVar11 & extraout_EDX - 0x30U < 10) != 0)) {
        local_2f8 = (undefined **)ppuVar7;
        local_2e8 = (undefined *)0x2;
        uStack_2f0 = (undefined8 ***)((long)ppuVar7 + lVar3);
        uVar12 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h4f6e50e460f55ef3E
                           (&local_2f8);
        cVar10 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h66873fb54fc57961E
                           (uVar12);
        if (cVar10 != '\0') {
          local_2f8 = (undefined **)((ulong)local_2f8 & 0xffffffff00000000);
          uVar13 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_2f8);
          local_3a8 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                                (uVar13,ppuVar7,lVar3);
          if (local_3a8._0_8_ == 0) {
                    /* try { // try from 0015960a to 00159616 has its CatchHandler @ 00159674 */
            (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f6f10)
                      (&PTR_DAT_001ef688);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_3b0 = (undefined8 ***)0x0;
          uStack_398 = CONCAT31(uStack_398._1_3_,1);
          local_3c8 = &local_3b0;
          local_3c0 = (undefined8 **)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f6ed8
          ;
          local_2f8 = &PTR_DAT_001ef678;
          uStack_2f0 = (undefined8 ***)0x1;
          uStack_2d8 = 0;
          local_2e0 = 1;
                    /* try { // try from 00159373 to 001593bf has its CatchHandler @ 00159674 */
          local_2e8 = (undefined *)&local_3c8;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h8548059c7e77ef31E(&local_310,&local_2f8);
          local_2e0 = CONCAT44(local_2e0._4_4_,1);
          local_2f8 = (undefined **)CONCAT44(uStack_30c,local_310);
          uStack_2f0 = (undefined8 ***)CONCAT44(uStack_304,uStack_308);
          local_2e8 = (undefined *)local_300;
          uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0f44b896e975adcbE(&local_2f8);
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h63be63cb12ea7caeE
                    (ppuVar6,ppuVar7);
          auVar16._8_8_ =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hd40624f0f52657bcE_001ef6c0
          ;
          auVar16._0_8_ = uVar13;
          goto LAB_001595b7;
        }
      }
    }
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h63be63cb12ea7caeE
              (ppuVar6,ppuVar7);
  }
                    /* try { // try from 001593e5 to 00159422 has its CatchHandler @ 0015965c */
  (*(code *)PTR__ZN6uu_fmt6uu_app17hd997317a638f119dE_001f6ee0)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hc5387d2547950a86E
            (&local_3b0,&local_2f8,local_320,local_318);
  local_340 = local_390;
  uStack_33c = uStack_38c;
  uStack_338 = uStack_388;
  uStack_334 = uStack_384;
  local_350 = local_3a8._8_4_;
  uStack_34c = local_3a8._12_4_;
  uStack_348 = uStack_398;
  uStack_344 = uStack_394;
  local_360 = local_3b0;
  local_358 = (undefined8 **)local_3a8._0_8_;
                    /* try { // try from 0015945c to 0015946e has its CatchHandler @ 00159623 */
  (*(code *)PTR__ZN6uu_fmt13extract_files17h7eb5920ec72ef96bE_001f6ef0)(&local_2f8,&local_360);
  puVar9 = local_2e8;
  pppuVar8 = uStack_2f0;
  auVar16._8_8_ = local_2e8;
  auVar16._0_8_ = uStack_2f0;
  if (local_2f8 != (undefined **)&DAT_8000000000000000) {
    local_3c8 = (undefined8 **)local_2f8;
    local_3c0 = uStack_2f0;
    local_3b8 = (long)local_2e8;
                    /* try { // try from 001594a8 to 001594ba has its CatchHandler @ 00159619 */
    (*(code *)PTR__ZN6uu_fmt10FmtOptions12from_matches17hd6bbd71d93b7e3cdE_001f6ef8)
              (&local_2f8,&local_360);
    auVar16._8_8_ = local_2e8;
    auVar16._0_8_ = uStack_2f0;
    if ((undefined8 ***)local_2f8 != (undefined8 ***)0x8000000000000001) {
      local_368 = local_2b0;
      local_378 = local_2c0;
      uStack_374 = uStack_2bc;
      uStack_370 = uStack_2b8;
      uStack_36c = uStack_2b4;
      uStack_388 = local_2d0;
      uStack_384 = uStack_2cc;
      local_380 = uStack_2c8;
      uStack_37c = uStack_2c4;
      uStack_398 = (undefined4)local_2e0;
      uStack_394 = local_2e0._4_4_;
      local_390 = (undefined4)uStack_2d8;
      uStack_38c = uStack_2d8._4_4_;
      local_3b0 = (undefined8 **)local_2f8;
      local_3a8._0_8_ = uStack_2f0;
      local_3a8._8_8_ = local_2e8;
                    /* try { // try from 00159522 to 00159537 has its CatchHandler @ 0015961e */
      uVar13 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f6f00)();
      _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hebf4758887d0f244E
                (&local_2f8,uVar13);
      puVar5 = PTR__ZN6uu_fmt12process_file17hfbd28097bf8da567E_001f6f08;
      pppuVar15 = pppuVar8;
      do {
        pppuVar2 = pppuVar15;
        if ((pppuVar15 == pppuVar8 + (long)puVar9 * 3) ||
           (pppuVar2 = pppuVar15 + 3, pppuVar15 == (undefined8 ***)0x0)) {
                    /* try { // try from 001595dc to 001595e8 has its CatchHandler @ 0015961e */
          _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h6e836767ef73b73bE
                    (&local_2f8);
          _ZN4core3ptr39drop_in_place_LT_uu_fmt__FmtOptions_GT_17hd8fc986a7b44390aE(&local_3b0);
          _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h0a5997a825bb75abE
                    (&local_3c8);
                    /* try { // try from 001595fb to 00159604 has its CatchHandler @ 0015965c */
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hd8f12037e4f82ebfE
                    (&local_360);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = pppuVar2;
          auVar16 = auVar4 << 0x40;
          goto LAB_001595b7;
        }
                    /* try { // try from 0015956a to 00159579 has its CatchHandler @ 00159628 */
        auVar16 = (*(code *)puVar5)(pppuVar15[1],pppuVar15[2],&local_3b0,&local_2f8);
        pppuVar15 = pppuVar15 + 3;
      } while (auVar16._0_8_ == 0);
                    /* try { // try from 00159585 to 00159594 has its CatchHandler @ 0015961e */
      _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h6e836767ef73b73bE
                (&local_2f8);
      _ZN4core3ptr39drop_in_place_LT_uu_fmt__FmtOptions_GT_17hd8fc986a7b44390aE(&local_3b0);
    }
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h0a5997a825bb75abE
              (&local_3c8);
  }
                    /* try { // try from 001595ad to 001595b6 has its CatchHandler @ 0015965c */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hd8f12037e4f82ebfE
            (&local_360);
LAB_001595b7:
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h2d38861785ff8296E
            (local_328);
  return auVar16;
}