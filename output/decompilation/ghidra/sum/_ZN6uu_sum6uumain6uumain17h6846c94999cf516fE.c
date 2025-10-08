undefined8 _ZN6uu_sum6uumain6uumain17h6846c94999cf516fE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  short sVar11;
  undefined4 *puVar12;
  undefined auVar13 [16];
  undefined8 ***local_408;
  long local_400;
  undefined8 ***local_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3b8;
  undefined4 *local_3b0;
  ulong local_3a8;
  undefined local_3a0 [16];
  undefined8 local_390;
  undefined8 ***local_388;
  long local_380;
  undefined4 *local_378;
  undefined8 ***local_370;
  undefined8 ***local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  long local_338 [8];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 ****local_2e8;
  undefined *local_2e0;
  undefined4 **local_2d8;
  code *local_2d0;
  undefined8 local_2c8;
  short local_2c0;
  
  (*(code *)PTR__ZN6uu_sum6uu_app17h22b6eed10a48226aE_001e8318)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h010691c38e4a811cE
            (&local_3f8,&local_2f8,param_1,param_2);
  local_340 = local_3c8;
  local_350 = (undefined4)local_3d8;
  uStack_34c = local_3d8._4_4_;
  uStack_348 = (undefined4)uStack_3d0;
  uStack_344 = uStack_3d0._4_4_;
  local_360 = (undefined4)local_3e8;
  uStack_35c = local_3e8._4_4_;
  uStack_358 = (undefined4)uStack_3e0;
  uStack_354 = uStack_3e0._4_4_;
  local_370 = local_3f8;
  local_368 = pppuStack_3f0;
  uVar10 = *(undefined8 *)PTR__ZN6uu_sum7options4FILE17h621830cf250500f6E_001e8328;
  uVar1 = *(undefined8 *)(PTR__ZN6uu_sum7options4FILE17h621830cf250500f6E_001e8328 + 8);
                    /* try { // try from 00153e9d to 00153ef2 has its CatchHandler @ 001543d2 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h86227b50abe21a44E
            (&local_2f8,&local_370,uVar10,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h900d5c8f1c00397dE
            (local_338,uVar10,uVar1,&local_2f8);
  if (local_338[0] == 0) {
    puVar7 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (puVar7 == (undefined4 *)0x0) {
                    /* try { // try from 00154363 to 00154372 has its CatchHandler @ 001543d2 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001e8378)(8,0x18);
      goto LAB_00154386;
    }
                    /* try { // try from 00153f0d to 00153f28 has its CatchHandler @ 0015438a */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h342ab4e21d344bf8E
              (&local_2f8,"- ",1);
    local_3e8 = local_2e8;
    local_3f8 = local_2f8;
    pppuStack_3f0 = uStack_2f0;
    *(undefined8 *****)(puVar7 + 4) = local_2e8;
    *puVar7 = (int)local_2f8;
    puVar7[1] = local_2f8._4_4_;
    puVar7[2] = (undefined4)uStack_2f0;
    puVar7[3] = uStack_2f0._4_4_;
    local_3b8 = 1;
    local_3a8 = 1;
    local_3b0 = puVar7;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h8612bd9333ecb813E(&local_3b8,local_338);
  }
                    /* try { // try from 00153f70 to 00153f81 has its CatchHandler @ 00154399 */
  bVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e8338
          )(&local_370,
            *(undefined8 *)PTR__ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hbe8458c5cf2e4671E_001e8330,
            *(undefined8 *)
             (PTR__ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hbe8458c5cf2e4671E_001e8330 + 8));
  uVar3 = local_3a8;
  puVar7 = local_3b0;
  if (local_3a8 < 2) {
    if (local_3a8 != 1) {
                    /* try { // try from 00154375 to 00154385 has its CatchHandler @ 00154399 */
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001e8238)
                (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001e10c8);
LAB_00154386:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    bVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4b71e9aac84f9dc8E
                      (*(undefined8 *)(local_3b0 + 2),*(undefined8 *)(local_3b0 + 4),"- ",1);
    bVar5 = bVar5 ^ 1;
  }
  else {
    bVar5 = 1;
  }
  sVar11 = (ushort)(bVar4 ^ 1) * 4 + 1;
  puVar12 = puVar7;
  while( true ) {
    puVar8 = puVar12 + 6;
    local_378 = puVar12;
                    /* try { // try from 00154013 to 0015401b has its CatchHandler @ 001543ad */
    (*(code *)PTR__ZN6uu_sum4open17h97fd496028ff67a9E_001e8340)
              (&local_390,*(undefined8 *)(puVar12 + 2),*(undefined8 *)(puVar12 + 4));
    if ((int)local_390 != 1) break;
    local_408 = local_388;
    local_400 = local_380;
                    /* try { // try from 00154044 to 001540d9 has its CatchHandler @ 001543b4 */
    uVar6 = (**(code **)(local_380 + 0x58))(local_388);
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001e8348)(uVar6);
    auVar13 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e82f8)();
    local_3f8 = (undefined8 ***)local_3a0;
    pppuStack_3f0 =
         (undefined8 ***)_ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he1ea19f857f8e1b5E;
    local_3e8 = &local_408;
    uStack_3e0 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h19dd74e6fcb07769E
    ;
    local_2f8 = (undefined8 ****)&DAT_001e1098;
    uStack_2f0 = (undefined8 ***)0x3;
    local_2d8 = (undefined4 **)0x0;
    local_2e8 = &local_3f8;
    local_2e0 = (undefined *)0x2;
    local_3a0 = auVar13;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e8300)(&local_2f8);
                    /* try { // try from 001540e4 to 001540e8 has its CatchHandler @ 001543ad */
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5ecc831ddc7a04edE
              (local_408,local_400);
LAB_001542ce:
    if ((puVar8 == puVar7 + uVar3 * 6) || (puVar12 = puVar8, puVar8 == (undefined4 *)0x0)) {
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hce4ff74d33e74a0eE
                (&local_3b8);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hcd62b237112384cdE
                (&local_370);
      return 0;
    }
  }
  if (bVar4 == 0) {
    _ZN6uu_sum7bsd_sum17had74e08c6a1e4c0dE(&local_2f8);
  }
  else {
                    /* try { // try from 001540f7 to 00154156 has its CatchHandler @ 001543af */
    _ZN6uu_sum8sysv_sum17h712a5fcd71af1ffcE(&local_2f8);
  }
  if ((int)local_2f8 == 1) {
                    /* try { // try from 001542ff to 00154304 has its CatchHandler @ 00154397 */
    uVar10 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e8370
             )();
    goto LAB_00154334;
  }
  local_3a0._0_8_ = uStack_2f0;
  local_408 = (undefined8 ***)CONCAT62(local_408._2_6_,local_2e8._0_2_);
  local_2f8 = (undefined8 ****)(*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001e8350)()
  ;
  local_390 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001e8358)(&local_2f8);
  local_2f8 = &local_408;
  local_3e8 = (undefined8 ****)&local_2f8;
  if (bVar5 == 0) {
    uStack_2f0 = (undefined8 ***)
                 PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_001e8360
    ;
    local_2e8 = (undefined8 ****)local_3a0;
    local_2e0 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e8368
    ;
    local_2d8 = (undefined4 **)0x0;
    local_2d0 = (code *)CONCAT62(local_2d0._2_6_,sVar11);
    local_3f8 = (undefined8 ***)&DAT_001e10e0;
    pppuStack_3f0 = (undefined8 ***)0x3;
    local_3d8 = &DAT_00118388;
    uStack_3d0 = 2;
    uStack_3e0 = (code *)0x3;
    lVar9 = _ZN3std2io5Write9write_fmt17hc6c82a1bef370750E(&local_390,&local_3f8);
    if (lVar9 == 0) goto LAB_001542c1;
                    /* try { // try from 0015430d to 00154320 has its CatchHandler @ 00154388 */
    uVar10 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e8370
             )(lVar9);
  }
  else {
    uStack_2f0 = (undefined8 ***)
                 PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_001e8360
    ;
    local_2e8 = (undefined8 ****)local_3a0;
    local_2e0 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e8368
    ;
    local_2d8 = &local_378;
    local_2d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf45ce89b4f713ecE;
    local_2c8 = 0;
    local_3f8 = (undefined8 ***)&DAT_001e1110;
    pppuStack_3f0 = (undefined8 ***)0x4;
    local_3d8 = &DAT_001183e8;
    uStack_3d0 = 3;
    uStack_3e0 = (code *)0x4;
                    /* try { // try from 0015420b to 001542bb has its CatchHandler @ 0015439b */
    local_2c0 = sVar11;
    lVar9 = _ZN3std2io5Write9write_fmt17hc6c82a1bef370750E(&local_390,&local_3f8);
    if (lVar9 == 0) {
LAB_001542c1:
                    /* try { // try from 001542c9 to 001542cd has its CatchHandler @ 001543af */
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h97970d38f5c4b014E(local_390);
      goto LAB_001542ce;
    }
    uVar10 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e8370
             )(lVar9);
  }
                    /* try { // try from 0015432f to 00154333 has its CatchHandler @ 00154397 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h97970d38f5c4b014E(local_390);
LAB_00154334:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hce4ff74d33e74a0eE
            (&local_3b8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hcd62b237112384cdE
            (&local_370);
  return uVar10;
}