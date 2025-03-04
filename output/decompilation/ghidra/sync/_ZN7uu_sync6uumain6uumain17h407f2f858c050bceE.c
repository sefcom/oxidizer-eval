undefined  [16] _ZN7uu_sync6uumain6uumain17h407f2f858c050bceE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong extraout_RDX;
  ulong uVar8;
  undefined auVar9 [16];
  long local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined local_348 [16];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  uVar8 = 0x8000000000000000;
  (*(code *)PTR__ZN7uu_sync6uu_app17hbd9026fe07cb3ff7E_00212870)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hc23ef9eb20649cbcE
            (&local_388,&local_2f8,param_1,param_2);
  if (CONCAT44(uStack_384,local_388) == -0x8000000000000000) {
    auVar9 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00212878
             )();
    return auVar9;
  }
  local_328 = local_368;
  uStack_324 = uStack_364;
  uStack_320 = uStack_360;
  uStack_31c = uStack_35c;
  local_338 = local_378;
  uStack_334 = uStack_374;
  uStack_330 = uStack_370;
  uStack_32c = uStack_36c;
  uVar6 = *(undefined8 *)PTR__ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E_00212880;
  uVar1 = *(undefined8 *)(PTR__ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E_00212880 + 8);
                    /* try { // try from 00160401 to 00160481 has its CatchHandler @ 001606d4 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h081bf8739e290fe0E
            (&local_2f8,local_348,uVar6,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hef673200ff6c2f5eE
            (&local_388,uVar6,uVar1,&local_2f8);
  if (CONCAT44(uStack_384,local_388) == 0) {
LAB_0016049f:
    local_3a8 = 0;
    uStack_3a0 = 8;
    local_398 = 0;
  }
  else {
    local_2c8 = local_358;
    uStack_2c4 = uStack_354;
    uStack_2c0 = uStack_350;
    uStack_2bc = uStack_34c;
    local_2d8 = local_368;
    uStack_2d4 = uStack_364;
    uStack_2d0 = uStack_360;
    uStack_2cc = uStack_35c;
    local_2e8 = CONCAT44(uStack_374,local_378);
    uStack_2e0 = uStack_370;
    uStack_2dc = uStack_36c;
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h93e75ad4c4b808a4E
              (&local_310,&local_2f8);
    if (local_310 == -0x8000000000000000) goto LAB_0016049f;
    uStack_3a0 = CONCAT44(uStack_304,local_308);
    local_398 = CONCAT44(uStack_2fc,uStack_300);
    local_3a8 = local_310;
  }
  uVar6 = *(undefined8 *)PTR__ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE_00212888;
  uVar1 = *(undefined8 *)(PTR__ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE_00212888 + 8);
                    /* try { // try from 001604da to 00160535 has its CatchHandler @ 001606d2 */
  bVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00212890
          )(local_348,uVar6,uVar1);
  if ((bVar3 & local_398 == 0) == 0) {
    uStack_2f0 = uStack_3a0 + local_398 * 0x18;
    local_2f8 = uStack_3a0;
    local_390 = uVar6;
    lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1aca6a860bec0f51E
                      (&local_2f8);
    if (lVar7 != 0) {
      do {
        uVar8 = *(ulong *)(lVar7 + 8);
        uVar6 = *(undefined8 *)(lVar7 + 0x10);
                    /* try { // try from 001605a8 to 001605df has its CatchHandler @ 001606d9 */
        iVar5 = _ZN3nix5fcntl4open17h0c6e2bb6a369b838E(uVar8,uVar6,0x800,0);
        if ((iVar5 == 1) &&
           ((((int)extraout_RDX != 0xd ||
             (cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h9ac0db933706da51E_00212898)
                                (uVar8,uVar6), cVar4 != '\0')) &&
            (auVar9 = _ZN173__LT_nix__errno__consts__Errno_u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h7dddc6fc9afca155E
                                (extraout_RDX & 0xffffffff,lVar7), auVar9._0_8_ != 0))))
        goto LAB_0016068f;
        lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1aca6a860bec0f51E
                          (&local_2f8);
      } while (lVar7 != 0);
    }
                    /* try { // try from 001605fb to 00160605 has its CatchHandler @ 001606d2 */
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00212890
            )(local_348,
              *(undefined8 *)PTR__ZN7uu_sync7options11FILE_SYSTEM17hd312cdc539073d0fE_002128a0,
              *(undefined8 *)(PTR__ZN7uu_sync7options11FILE_SYSTEM17hd312cdc539073d0fE_002128a0 + 8)
             );
    if (cVar4 == '\0') {
                    /* try { // try from 00160638 to 00160645 has its CatchHandler @ 001606d2 */
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00212890
              )(local_348,local_390,uVar1);
      if (cVar4 != '\0') {
        local_2e8 = local_398;
        local_2f8 = local_3a8;
        uStack_2f0 = uStack_3a0;
                    /* try { // try from 00160663 to 00160670 has its CatchHandler @ 001606d0 */
        auVar9 = (*(code *)PTR__ZN7uu_sync9fdatasync17h4c99a721be5a0cf3E_002128b0)(&local_2f8);
        goto LAB_00160671;
      }
                    /* try { // try from 0016067e to 00160683 has its CatchHandler @ 001606d2 */
      auVar9 = (*(code *)PTR__ZN7uu_sync4sync17h1ff0f9205f7ca55dE_002128b8)();
      if (auVar9._0_8_ != 0) goto LAB_0016068f;
                    /* try { // try from 001606b9 to 001606c0 has its CatchHandler @ 001606d4 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h14d95892ba184393E
                (&local_3a8);
    }
    else {
      local_2e8 = local_398;
      local_2f8 = local_3a8;
      uStack_2f0 = uStack_3a0;
                    /* try { // try from 00160628 to 00160635 has its CatchHandler @ 001606d0 */
      auVar9 = (*(code *)PTR__ZN7uu_sync6syncfs17he57a0533702037d5E_002128a8)(&local_2f8);
LAB_00160671:
      if (auVar9._0_8_ != 0) goto LAB_00160697;
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7f65eda5a4ca9139E
              (local_348);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    auVar9 = auVar2 << 0x40;
  }
  else {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hed56f59dd49a5456E(&local_388)
    ;
    local_2e8 = CONCAT44(uStack_374,local_378);
    local_2f8 = CONCAT44(uStack_384,local_388);
    uStack_2f0 = CONCAT44(uStack_37c,uStack_380);
    uStack_2e0 = 1;
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h19a1f1b0b127e263E(&local_2f8);
    auVar9._8_8_ = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h84ae5788c1eac9adE_0020c690
    ;
    auVar9._0_8_ = uVar6;
LAB_0016068f:
                    /* try { // try from 0016068f to 00160696 has its CatchHandler @ 001606d4 */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h14d95892ba184393E
              (&local_3a8);
LAB_00160697:
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7f65eda5a4ca9139E
              (local_348);
  }
  return auVar9;
}