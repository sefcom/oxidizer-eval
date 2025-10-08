undefined  [16]
_ZN11uu_readlink6uumain6uumain17hb3ae6a048252b015E(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 **ppuVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined auVar19 [16];
  undefined local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined **local_3f8;
  undefined **local_3f0;
  undefined **local_3e8;
  undefined **ppuStack_3e0;
  undefined local_3d8 [16];
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined **local_3a0;
  undefined **local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined8 *local_368;
  code *local_360;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined **local_340;
  long local_338 [8];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 **ppuStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  
  (*(code *)PTR__ZN11uu_readlink6uu_app17h793b492da9e17ae1E_001ee7a0)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h6eb9ab563aeff691E
            (local_3d8,&local_2f8,param_1,param_2);
  local_370 = local_3a8;
  local_380 = local_3b8;
  uStack_37c = uStack_3b4;
  uStack_378 = uStack_3b0;
  uStack_374 = uStack_3ac;
  local_390 = local_3c8;
  uStack_38c = uStack_3c4;
  uStack_388 = uStack_3c0;
  uStack_384 = uStack_3bc;
  local_3a0 = (undefined **)local_3d8._0_8_;
  local_398 = (undefined **)local_3d8._8_8_;
                    /* try { // try from 00153fb5 to 00154119 has its CatchHandler @ 001545d0 */
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
          )(&local_3a0,"no-newline",10);
  cVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
          )(&local_3a0,&DAT_00117e80,4);
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
          )(&local_3a0,"silent",6);
  cVar8 = '\x01';
  if (cVar7 == '\0') {
    cVar8 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
            )(&local_3a0,"quiet",5);
  }
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
          )(&local_3a0,"verbose",7);
  cVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
          )(&local_3a0,"canonicalize",0xc);
  if (((cVar9 == '\0') &&
      (cVar9 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
               )(&local_3a0,"canonicalize-existing",0x15), cVar9 == '\0')) &&
     (cVar9 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
              )(&local_3a0,"canonicalize-missing",0x14), cVar9 == '\0')) {
    bVar1 = true;
    local_410 = 0;
  }
  else {
    local_410 = 2;
    bVar1 = false;
  }
  cVar10 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
           )(&local_3a0,"canonicalize-existing",0x15);
  cVar9 = '\x01';
  if (cVar10 == '\0') {
    cVar9 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ee7b0
            )(&local_3a0,"canonicalize-missing",0x14);
    cVar9 = cVar9 * '\x02';
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h604b84311012769eE
            (&local_2f8,&local_3a0);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h2f6b63d5014fa269E(local_338,&local_2f8);
  if (local_338[0] == 0) {
LAB_00154142:
    local_3f0 = (undefined **)0x0;
    local_3e8 = (undefined **)&DAT_00000008;
    ppuStack_3e0 = (undefined **)0x0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h5ce6d2ccbd0f0f51E(&local_2f8,local_338);
    ppuVar4 = ppuStack_2e8;
    local_3f0 = local_2f8;
    local_3d8._0_8_ = uStack_2f0;
    local_3d8._8_8_ = ppuStack_2e8;
    auVar2._8_8_ = ppuStack_2e8;
    auVar2._0_8_ = uStack_2f0;
    if (local_2f8 == (undefined **)&DAT_8000000000000000) goto LAB_00154142;
    local_3e8 = uStack_2f0;
    ppuStack_3e0 = (undefined **)ppuStack_2e8;
    if (ppuStack_2e8 != (undefined8 **)0x0) {
      local_3d8 = auVar2;
      if (cVar5 != '\0') {
        uVar11 = 0xb;
        if (cVar8 != '\0' || ppuStack_2e8 == (undefined8 **)&DAT_00000001) goto LAB_001542de;
                    /* try { // try from 00154217 to 001542ce has its CatchHandler @ 001545a0 */
        local_3d8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ee778)();
        local_360 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfbaa8bb8670c7e4bE;
        local_2f8 = (undefined **)&DAT_001e71e8;
        uStack_2f0 = (undefined **)0x2;
        uStack_2d8 = 0;
        ppuStack_2e8 = &local_368;
        local_2e0 = 1;
        local_368 = (undefined8 *)local_3d8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ee780)(&local_2f8);
        local_2f8 = &PTR_s_ignoring___no_newline_with_multi_001e7260;
        uStack_2f0 = (undefined **)&DAT_00000001;
        ppuStack_2e8 = (undefined8 **)&DAT_00000008;
        local_2e0 = 0;
        uStack_2d8 = 0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ee780)(&local_2f8);
      }
      uVar11 = 10;
      if (cVar6 != '\0') {
        uVar11 = 0;
      }
LAB_001542de:
      ppuVar17 = local_3e8;
      if (bVar1) {
        lVar18 = (long)ppuVar4 * 0x18;
        uVar16 = (ulong)uVar11;
        do {
                    /* try { // try from 00154308 to 00154314 has its CatchHandler @ 0015459e */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h39064a62ec82a9c9E
                    (&local_2f8,ppuVar17[1],ppuVar17[2]);
          local_408 = (undefined4)local_2f8;
          uStack_404 = local_2f8._4_4_;
          uStack_400 = (undefined4)uStack_2f0;
          uStack_3fc = uStack_2f0._4_4_;
          local_3f8 = (undefined **)ppuStack_2e8;
                    /* try { // try from 0015432f to 0015433d has its CatchHandler @ 00154597 */
          _ZN3std2fs9read_link17hf03a696a64960bcfE(local_3d8,&local_408);
          auVar2 = local_3d8;
          uVar15 = local_3d8._8_8_;
          uVar12 = local_3d8._0_8_;
          if ((undefined *)local_3d8._0_8_ == &DAT_8000000000000000) goto LAB_001544a8;
                    /* try { // try from 00154360 to 00154372 has its CatchHandler @ 001545a7 */
          uVar13 = (*(code *)PTR__ZN11uu_readlink4show17h5657d7991ffee1bcE_001ee7b8)
                             (local_3d8._8_8_,CONCAT44(uStack_3c4,local_3c8),uVar16);
          lVar14 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8a9bf85477ee84f6E
                             (uVar13);
          if (lVar14 != 0) goto LAB_0015452c;
          _ZN4core3mem4drop17h5ae26ee2c98bdfd3E(uVar12,uVar15);
          _ZN4core3mem4drop17h5ae26ee2c98bdfd3E
                    (CONCAT44(uStack_404,local_408),CONCAT44(uStack_3fc,uStack_400));
          ppuVar17 = ppuVar17 + 3;
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != 0);
      }
      else {
        uVar16 = (long)ppuVar4 * 0x18;
        do {
                    /* try { // try from 001543e8 to 001543f4 has its CatchHandler @ 0015459c */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h39064a62ec82a9c9E
                    (&local_2f8,ppuVar17[1],ppuVar17[2]);
          local_408 = (undefined4)local_2f8;
          uStack_404 = local_2f8._4_4_;
          uStack_400 = (undefined4)uStack_2f0;
          uStack_3fc = uStack_2f0._4_4_;
          local_3f8 = (undefined **)ppuStack_2e8;
                    /* try { // try from 0015440f to 00154424 has its CatchHandler @ 00154595 */
          _ZN6uucore8features2fs12canonicalize17h72c983376269eb1bE
                    (local_3d8,&local_408,cVar9,local_410);
          auVar2 = local_3d8;
          uVar15 = local_3d8._8_8_;
          uVar12 = local_3d8._0_8_;
          if ((undefined *)local_3d8._0_8_ == &DAT_8000000000000000) goto LAB_001544a8;
                    /* try { // try from 00154443 to 00154457 has its CatchHandler @ 001545a5 */
          uVar13 = (*(code *)PTR__ZN11uu_readlink4show17h5657d7991ffee1bcE_001ee7b8)
                             (local_3d8._8_8_,CONCAT44(uStack_3c4,local_3c8),uVar11);
          lVar14 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8a9bf85477ee84f6E
                             (uVar13);
          if (lVar14 != 0) goto LAB_0015452c;
          _ZN4core3mem4drop17h5ae26ee2c98bdfd3E(uVar12,uVar15);
          _ZN4core3mem4drop17h5ae26ee2c98bdfd3E
                    (CONCAT44(uStack_404,local_408),CONCAT44(uStack_3fc,uStack_400));
          ppuVar17 = ppuVar17 + 3;
          uVar16 = uVar16 - 0x18;
        } while (uVar16 != 0);
      }
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h45d700f1615bf2e1E
                (&local_3f0);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he85f69f9b15164d4E
                (&local_3a0);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar16;
      return auVar3 << 0x40;
    }
  }
                    /* try { // try from 0015415d to 001541a4 has its CatchHandler @ 001545a0 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h39064a62ec82a9c9E
            (local_3d8,"missing operand",0xf);
  ppuStack_2e8 = (undefined8 **)CONCAT44(uStack_3c4,local_3c8);
  local_2f8 = (undefined **)local_3d8._0_8_;
  uStack_2f0 = (undefined **)local_3d8._8_8_;
  local_2e0 = CONCAT44(local_2e0._4_4_,1);
  uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h67f3ec850b622d46E(&local_2f8);
  auVar19._8_8_ =
       &
       PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17he24b4ddbd3eac5c8E_001e7290
  ;
  auVar19._0_8_ = uVar12;
  goto LAB_001541af;
LAB_0015452c:
  _ZN4core3mem4drop17h5ae26ee2c98bdfd3E(auVar2._0_8_,auVar2._8_8_);
  auVar19._8_8_ =
       &
       PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h68315cc11c9b3e89E_001e7408
  ;
  auVar19._0_8_ = lVar14;
  goto LAB_0015455e;
LAB_001544a8:
  local_368 = (undefined8 *)local_3d8._8_8_;
  if (cVar7 == '\0') {
                    /* try { // try from 00154540 to 0015454a has its CatchHandler @ 00154574 */
    auVar19 = (*(code *)
                PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_001ee7c0
              )(1);
                    /* try { // try from 0015454b to 0015455d has its CatchHandler @ 00154572 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5c738eb550163c25E(&local_368);
  }
  else {
                    /* try { // try from 001544c8 to 001544cc has its CatchHandler @ 00154586 */
    uVar12 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hccfff5eaf084ccbbE
                       (local_3d8._8_8_,ppuVar17[1],ppuVar17[2]);
                    /* try { // try from 001544cd to 00154517 has its CatchHandler @ 00154588 */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h7cfd439670e1efccE
              (&local_350,uVar12);
    local_2e0 = CONCAT44(local_2e0._4_4_,1);
    local_2f8 = (undefined **)CONCAT44(uStack_34c,local_350);
    uStack_2f0 = (undefined **)CONCAT44(uStack_344,uStack_348);
    ppuStack_2e8 = (undefined8 **)local_340;
    uVar15 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h67f3ec850b622d46E(&local_2f8);
                    /* try { // try from 00154518 to 00154522 has its CatchHandler @ 00154586 */
    _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h36d5fd9c4619d273E
              (uVar12);
    auVar19._8_8_ =
         &
         PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17he24b4ddbd3eac5c8E_001e7318
    ;
    auVar19._0_8_ = uVar15;
  }
LAB_0015455e:
  _ZN4core3mem4drop17h5ae26ee2c98bdfd3E
            (CONCAT44(uStack_404,local_408),CONCAT44(uStack_3fc,uStack_400));
LAB_001541af:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h45d700f1615bf2e1E
            (&local_3f0);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he85f69f9b15164d4E
            (&local_3a0);
  return auVar19;
}