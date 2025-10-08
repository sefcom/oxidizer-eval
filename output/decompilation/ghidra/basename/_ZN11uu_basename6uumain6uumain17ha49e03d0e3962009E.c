undefined8 _ZN11uu_basename6uumain6uumain17ha49e03d0e3962009E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined local_411;
  undefined8 ***local_410;
  undefined8 ***local_408;
  undefined8 ***pppuStack_400;
  undefined8 ***local_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b0;
  long local_3a8;
  long local_3a0;
  undefined8 ***local_398;
  undefined8 ***local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 ***local_360;
  undefined *local_358;
  undefined8 **local_340;
  undefined8 local_338;
  undefined local_328 [24];
  undefined local_310 [16];
  undefined8 ***local_300;
  undefined8 ***local_2f8;
  undefined8 ***pppuStack_2f0;
  undefined8 ***local_2e8;
  undefined *puStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  
  _ZN6uucore4Args13collect_lossy17hecb26f64d9683062E(local_328,param_1,param_2);
                    /* try { // try from 00150824 to 00150831 has its CatchHandler @ 00150d99 */
  (*(code *)PTR__ZN11uu_basename6uu_app17h0214ef177401846bE_001e5960)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h24e84877b0c8982dE
            (&local_3f8,&local_2f8,local_328);
  local_368 = local_3c8;
  local_378 = local_3d8;
  uStack_374 = uStack_3d4;
  uStack_370 = uStack_3d0;
  uStack_36c = uStack_3cc;
  local_388 = (undefined4)local_3e8;
  uStack_384 = local_3e8._4_4_;
  uStack_380 = (undefined4)uStack_3e0;
  uStack_37c = uStack_3e0._4_4_;
  local_398 = local_3f8;
  local_390 = pppuStack_3f0;
                    /* try { // try from 001508ae to 001509a6 has its CatchHandler @ 00150dc5 */
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e5978
          )(&local_398,*(undefined8 *)PTR__ZN11uu_basename7options4ZERO17ha91d35f0c64c90c4E_001e5970
            ,*(undefined8 *)(PTR__ZN11uu_basename7options4ZERO17ha91d35f0c64c90c4E_001e5970 + 8));
  local_411 = 10;
  if (cVar5 != '\0') {
    local_411 = 0;
  }
  uVar8 = *(undefined8 *)PTR__ZN11uu_basename7options4NAME17h428f91de9a3840f2E_001e5980;
  uVar1 = *(undefined8 *)(PTR__ZN11uu_basename7options4NAME17h428f91de9a3840f2E_001e5980 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h9e6e9fdd60da60beE
            (&local_2f8,&local_398,uVar8,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hf682f947ff84a592E
            (&local_3f8,uVar8,uVar1,&local_2f8);
  if ((undefined8 ****)local_3f8 == (undefined8 ****)0x0) {
    local_2f8 = (undefined8 ***)_ZN4core3ops8function6FnOnce9call_once17h289c9218362e944dE;
    pppuStack_2f0 =
         (undefined8 ***)
         PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001e5988
    ;
    local_2e8 = (undefined8 ***)
                PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001e5988
    ;
    puStack_2e0 = (undefined *)0x0;
    uStack_2d0 = 0;
    uStack_2c0 = 0;
  }
  else {
    local_2d8 = CONCAT44(uStack_3d4,local_3d8);
    uStack_2d0 = CONCAT44(uStack_3cc,uStack_3d0);
    local_2c8 = local_3c8;
    uStack_2c0 = uStack_3c0;
    local_2e8 = local_3e8;
    puStack_2e0 = uStack_3e0;
    local_2f8 = local_3f8;
    pppuStack_2f0 = pppuStack_3f0;
  }
  _ZN4core4iter6traits8iterator8Iterator7collect17he47b67ece3ba9f11E(&local_3b0,&local_2f8);
  lVar7 = local_3a0;
  puVar2 = PTR__ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E_001e5990;
  if (local_3a0 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h34d7a5622c37d5a9E
              (&local_3f8,&DAT_0011706b,0xf);
    local_2e8 = local_3e8;
    puStack_2e0 = (undefined *)CONCAT44(puStack_2e0._4_4_,1);
    uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hcaae5bcc0d1feb54E(&local_2f8);
LAB_00150afd:
    _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17he5ab56466e96a171E
              (local_3b0,local_3a8);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h9bb9cbae83786dbbE
              (&local_398);
    return uVar8;
  }
  uVar8 = *(undefined8 *)PTR__ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E_001e5990;
  uVar1 = *(undefined8 *)(PTR__ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E_001e5990 + 8);
                    /* try { // try from 001509c3 to 00150af4 has its CatchHandler @ 00150db1 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h069d3126daac21eeE
            (&local_2f8,&local_398,uVar8,uVar1);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h546beac58f6283beE
                    (uVar8,uVar1,&local_2f8);
  if ((lVar6 == 0) &&
     (cVar5 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e5978
              )(&local_398,
                *(undefined8 *)PTR__ZN11uu_basename7options8MULTIPLE17hd62add6aaf7d3d12E_001e5998,
                *(undefined8 *)
                 (PTR__ZN11uu_basename7options8MULTIPLE17hd62add6aaf7d3d12E_001e5998 + 8)),
     cVar5 == '\0')) {
    if (lVar7 == 2) {
      local_3a0 = 1;
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001e59a0
      )(&local_410,*(undefined8 *)(local_3a8 + 8));
      goto LAB_00150b32;
    }
    if (lVar7 != 1) {
      pppuStack_3f0 = *(undefined8 ****)(*(long *)(local_3a8 + 0x10) + 8);
      local_3e8 = *(undefined8 *****)(*(long *)(local_3a8 + 0x10) + 0x10);
      local_3f8 = (undefined8 ****)0x0;
      uStack_3e0 = (undefined *)CONCAT71(uStack_3e0._1_7_,1);
      local_360 = &local_3f8;
      local_358 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e59c0
      ;
      local_2f8 = (undefined8 ***)&PTR_DAT_001de9a8;
      pppuStack_2f0 = (undefined8 ***)0x1;
      local_2d8 = 0;
      local_2e8 = &local_360;
      puStack_2e0 = (undefined *)0x1;
                    /* try { // try from 00150d15 to 00150d89 has its CatchHandler @ 00150db1 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hb5149067130044ddE(local_310,&local_2f8);
      puStack_2e0 = (undefined *)CONCAT44(puStack_2e0._4_4_,1);
      local_2e8 = local_300;
      uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hcaae5bcc0d1feb54E(&local_2f8);
      goto LAB_00150afd;
    }
  }
  else {
    uVar8 = *(undefined8 *)puVar2;
    uVar1 = *(undefined8 *)(puVar2 + 8);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h069d3126daac21eeE
              (&local_2f8,&local_398,uVar8,uVar1);
    lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h546beac58f6283beE
                      (uVar8,uVar1,&local_2f8);
    if (lVar7 != 0) {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001e59a0
      )(&local_2f8,lVar7);
      local_3f8 = pppuStack_2f0;
      pppuStack_3f0 = local_2e8;
      if (local_2f8 != (undefined8 ***)&DAT_8000000000000000) {
        local_408 = pppuStack_2f0;
        pppuStack_400 = local_2e8;
        local_410 = local_2f8;
        goto LAB_00150b32;
      }
    }
  }
  local_410 = (undefined8 ****)0x0;
  local_408 = (undefined8 ***)&DAT_00000001;
  pppuStack_400 = (undefined8 ****)0x0;
LAB_00150b32:
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hb13411dab2ba2685E
            (&local_360,&local_3b0);
  lVar7 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbf35aab382179bb7E
                    (&local_360);
  pppuVar4 = pppuStack_400;
  pppuVar3 = local_408;
  puVar2 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e59a8;
  if (lVar7 != 0) {
    do {
                    /* try { // try from 00150b98 to 00150ba6 has its CatchHandler @ 00150dca */
      (*(code *)PTR__ZN11uu_basename8basename17hbc3fde56feb9aca0E_001e59b0)
                (&local_340,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),pppuVar3,
                 pppuVar4);
      pppuStack_3f0 =
           (undefined8 ***)
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
      ;
      local_3e8 = (undefined8 ****)&local_411;
      uStack_3e0 = 
      PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_001e59b8
      ;
      local_2f8 = (undefined8 ***)&DAT_00117088;
      pppuStack_2f0 = (undefined8 ****)0x2;
      local_2d8 = 0;
      local_2e8 = &local_3f8;
      puStack_2e0 = (undefined *)0x2;
      local_3f8 = &local_340;
                    /* try { // try from 00150c0e to 00150c12 has its CatchHandler @ 00150dcf */
      (*(code *)puVar2)(&local_2f8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha79e2e354e6e1bb0E
                (local_340,local_338);
      lVar7 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbf35aab382179bb7E
                        (&local_360);
    } while (lVar7 != 0);
  }
                    /* try { // try from 00150c39 to 00150c45 has its CatchHandler @ 00150d8f */
  _ZN4core3ptr85drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_alloc__string__String_GT__GT_17h8f750361ef70de88E
            (&local_360);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha79e2e354e6e1bb0E(local_410,local_408);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h9bb9cbae83786dbbE
            (&local_398);
  return 0;
}