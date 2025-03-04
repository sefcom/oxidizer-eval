undefined  [16]
_ZN11uu_readlink6uumain6uumain17h1232513d75c26214E(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined auVar2 [16];
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined local_3dc;
  undefined local_3d8 [16];
  code *pcStack_3c8;
  undefined8 local_3b8;
  undefined8 *local_3b0;
  code *local_3a8;
  code *pcStack_3a0;
  code *local_398;
  code *pcStack_390;
  undefined local_388 [16];
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
  undefined **local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  code *local_300;
  undefined local_2f8 [16];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR__ZN11uu_readlink6uu_app17h387e9546761b38a6E_0021e548)(local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h1e41c31790ef42a3E
            (local_388,local_2f8,param_1,param_2);
  if ((undefined **)local_388._0_8_ == (undefined **)0x8000000000000000) {
    auVar13 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0021e550
              )();
    return auVar13;
  }
  local_328 = local_368;
  uStack_324 = uStack_364;
  uStack_320 = uStack_360;
  uStack_31c = uStack_35c;
  local_338 = local_378;
  uStack_334 = uStack_374;
  uStack_330 = uStack_370;
  uStack_32c = uStack_36c;
  local_348 = (undefined **)local_388._0_8_;
  local_340 = local_388._8_8_;
                    /* try { // try from 00168de2 to 00168fb8 has its CatchHandler @ 00169482 */
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
          )(&local_348,&DAT_001145d6,10);
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
          )(&local_348,&DAT_0011465c,4);
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
          )(&local_348,&DAT_001146a4,6);
  uVar11 = CONCAT71((int7)((ulong)local_2f8 >> 8),1);
  if (cVar5 == '\0') {
    uVar8 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
            )(&local_348,&DAT_001146aa,5);
    uVar11 = (ulong)uVar8;
  }
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
          )(&local_348,&DAT_001146af,7);
  cVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
          )(&local_348,&DAT_001146b6,0xc);
  if (((cVar6 == '\0') &&
      (cVar6 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
               )(&local_348,&DAT_001146c2,0x15), cVar6 == '\0')) &&
     (cVar6 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
              )(&local_348,&DAT_001146d7,0x14), cVar6 == '\0')) {
    bVar1 = true;
    local_3dc = 0;
  }
  else {
    local_3dc = 2;
    bVar1 = false;
  }
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
          )(&local_348,&DAT_001146c2,0x15);
  cVar6 = '\x01';
  if (cVar7 == '\0') {
    cVar6 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e558
            )(&local_348,&DAT_001146d7,0x14);
    cVar6 = cVar6 * '\x02';
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h1d4f4734d0c0ae5aE
            (local_2f8,&local_348,&DAT_001145a3,5);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17heee1dc496edd81bcE
            (local_388,&DAT_001145a3,5,local_2f8);
  if ((undefined **)local_388._0_8_ == (undefined **)0x0) {
LAB_00168fdb:
    local_3b0 = (undefined8 *)0x0;
    local_3a8 = (code *)0x8;
    pcStack_3a0 = (code *)0x0;
  }
  else {
    local_2c8 = local_358;
    uStack_2c4 = uStack_354;
    uStack_2c0 = uStack_350;
    uStack_2bc = uStack_34c;
    local_2d8 = CONCAT44(uStack_364,local_368);
    uStack_2d0 = uStack_360;
    uStack_2cc = uStack_35c;
    local_2e8 = (code *)CONCAT44(uStack_374,local_378);
    uStack_2e0 = CONCAT44(uStack_36c,uStack_370);
    local_2f8._0_8_ = local_388._0_8_;
    local_2f8._8_8_ = local_388._8_8_;
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h18ad71db7dde33d8E
              (local_3d8,local_2f8);
    local_3b0 = (undefined8 *)local_3d8._0_8_;
    local_398 = (code *)local_3d8._8_8_;
    pcStack_390 = pcStack_3c8;
    if ((undefined8 *)local_3d8._0_8_ == (undefined8 *)0x8000000000000000) goto LAB_00168fdb;
    local_3a8 = (code *)local_3d8._8_8_;
    pcStack_3a0 = pcStack_3c8;
    if (pcStack_3c8 != (code *)0x0) {
      if (cVar3 != '\0') {
        uVar12 = CONCAT71((int7)(uVar11 >> 8),0xb);
        if ((char)uVar11 != '\0' || pcStack_3c8 == (code *)0x1) goto LAB_0016915f;
                    /* try { // try from 001690a4 to 0016914d has its CatchHandler @ 00169473 */
        local_388 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_0021e528)();
        local_3d8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4d4ff57300358a11E;
        local_2f8._0_8_ = &DAT_00217ec0;
        local_2f8._8_8_ = 2;
        local_2d8 = 0;
        uStack_2e0 = 1;
        local_3d8._0_8_ = local_388;
        local_2e8 = (code *)local_3d8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_0021e530)(local_2f8);
        local_2f8._0_8_ = &PTR_DAT_00217f38;
        local_2f8._8_8_ = 1;
        local_2e8 = (code *)0x8;
        uStack_2e0 = 0;
        local_2d8 = 0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_0021e530)(local_2f8);
      }
      uVar12 = 10;
      if (cVar4 != '\0') {
        uVar12 = 0;
      }
LAB_0016915f:
      pcStack_390 = local_3a8 + (long)pcStack_3a0 * 0x18;
      local_398 = local_3a8;
      lVar10 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf4c889e5f4ccc249E
                         (&local_398);
      if (lVar10 != 0) {
        if (bVar1) {
          do {
                    /* try { // try from 001691b8 to 001691c0 has its CatchHandler @ 00169471 */
            (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E_0021e560)
                      (local_2f8,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
            pcStack_3c8 = local_2e8;
            local_3d8 = local_2f8;
                    /* try { // try from 001691db to 001691e5 has its CatchHandler @ 00169462 */
            _ZN3std2fs9read_link17he43356407758612bE(local_388,local_3d8);
            if (local_388._0_8_ == -0x8000000000000000) goto LAB_00169370;
            local_2e8 = (code *)CONCAT44(uStack_374,local_378);
            local_2f8 = local_388;
                    /* try { // try from 0016921d to 0016922c has its CatchHandler @ 0016944c */
            uVar9 = (*(code *)PTR__ZN11uu_readlink4show17hf8ca6ca696dc2285E_0021e568)
                              (local_388._8_8_,local_2e8,uVar12 & 0xff);
            auVar13 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h375a01d8819329c7E
                                (uVar9);
            if (auVar13._0_8_ != 0) goto LAB_001693f0;
                    /* try { // try from 00169239 to 00169240 has its CatchHandler @ 00169462 */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd813e929d379641dE(local_2f8);
                    /* try { // try from 00169241 to 00169248 has its CatchHandler @ 00169471 */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd813e929d379641dE(local_3d8);
            lVar10 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf4c889e5f4ccc249E
                               (&local_398);
          } while (lVar10 != 0);
        }
        else {
          do {
                    /* try { // try from 00169298 to 001692a5 has its CatchHandler @ 00169460 */
            (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E_0021e560)
                      (local_2f8,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
            pcStack_3c8 = local_2e8;
                    /* try { // try from 001692c0 to 001692d1 has its CatchHandler @ 0016945e */
            local_3d8 = local_2f8;
            _ZN6uucore8features2fs12canonicalize17hdcf8813f1915eb73E
                      (local_388,local_3d8,cVar6,local_3dc);
            if (local_388._0_8_ == -0x8000000000000000) goto LAB_00169370;
            local_2e8 = (code *)CONCAT44(uStack_374,local_378);
            local_2f8 = local_388;
                    /* try { // try from 00169309 to 00169319 has its CatchHandler @ 0016944a */
            uVar9 = (*(code *)PTR__ZN11uu_readlink4show17hf8ca6ca696dc2285E_0021e568)
                              (local_388._8_8_,local_2e8,uVar12 & 0xff);
            auVar13 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h375a01d8819329c7E
                                (uVar9);
            if (auVar13._0_8_ != 0) goto LAB_001693f0;
                    /* try { // try from 00169326 to 00169332 has its CatchHandler @ 0016945e */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd813e929d379641dE(local_2f8);
                    /* try { // try from 00169333 to 0016933a has its CatchHandler @ 00169460 */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd813e929d379641dE(local_3d8);
            lVar10 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf4c889e5f4ccc249E
                               (&local_398);
          } while (lVar10 != 0);
        }
      }
                    /* try { // try from 00169351 to 0016935a has its CatchHandler @ 00169482 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h1610dcc674efe5b2E
                (&local_3b0);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hf3bdd7c49eae813fE
                (&local_348);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar12;
      return auVar2 << 0x40;
    }
  }
                    /* try { // try from 00168ff6 to 00169031 has its CatchHandler @ 00169473 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hd2f55730b4265e1dE(local_388);
  local_2e8 = (code *)CONCAT44(uStack_374,local_378);
  local_2f8._0_8_ = local_388._0_8_;
  local_2f8._8_8_ = local_388._8_8_;
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
  uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb33387f1cdb47052E(local_2f8);
  auVar13._8_8_ =
       &
       PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h507307c503dd566cE_00217f68
  ;
  auVar13._0_8_ = uVar9;
  goto LAB_0016903c;
LAB_001693f0:
                    /* try { // try from 001693f3 to 001693ff has its CatchHandler @ 00169448 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd813e929d379641dE(local_2f8);
  goto LAB_0016941b;
LAB_00169370:
  uVar9 = local_388._8_8_;
  if (cVar5 == '\0') {
                    /* try { // try from 00169402 to 0016940c has its CatchHandler @ 0016942a */
    auVar13 = (*(code *)
                PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_0021e570
              )(1);
                    /* try { // try from 0016940d to 0016941a has its CatchHandler @ 00169448 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h6923bc10bd1d0617E(uVar9);
  }
  else {
                    /* try { // try from 00169380 to 0016938a has its CatchHandler @ 00169437 */
    local_3b8 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hc5adabb7353559e2E
                          (local_388._8_8_,lVar10);
                    /* try { // try from 00169390 to 001693d9 has its CatchHandler @ 00169439 */
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hc17df59e5abcc7e2E
              (&local_310,&local_3b8);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    local_2f8._4_4_ = uStack_30c;
    local_2f8._0_4_ = local_310;
    local_2f8._12_4_ = uStack_304;
    local_2f8._8_4_ = uStack_308;
    local_2e8 = local_300;
    uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb33387f1cdb47052E(local_2f8);
                    /* try { // try from 001693e2 to 001693e6 has its CatchHandler @ 00169437 */
    _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17hafbe285716c6b2efE
              (local_3b8);
    auVar13._8_8_ =
         &
         PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h507307c503dd566cE_00218010
    ;
    auVar13._0_8_ = uVar9;
  }
LAB_0016941b:
                    /* try { // try from 0016941b to 00169424 has its CatchHandler @ 00169473 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd813e929d379641dE(local_3d8);
LAB_0016903c:
                    /* try { // try from 0016903c to 00169045 has its CatchHandler @ 00169482 */
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h1610dcc674efe5b2E
            (&local_3b0);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hf3bdd7c49eae813fE
            (&local_348);
  return auVar13;
}