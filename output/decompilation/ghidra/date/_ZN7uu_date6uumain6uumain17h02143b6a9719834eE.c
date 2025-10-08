undefined8 _ZN7uu_date6uumain6uumain17h02143b6a9719834eE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  undefined uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 ***local_680;
  undefined *local_678;
  undefined8 local_658;
  undefined4 local_650;
  undefined8 ***local_640;
  undefined4 local_638;
  undefined8 ***local_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 local_61c;
  undefined8 ***local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 local_5b4;
  char local_5b0;
  undefined8 ***local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 **local_568;
  undefined auStack_560 [12];
  undefined4 uStack_554;
  undefined8 uStack_550;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 ***local_510 [2];
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 local_4e0;
  undefined8 ***local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined local_1e8 [16];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined local_1b8 [8];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined local_1a0 [8];
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  
  (*(code *)PTR__ZN7uu_date6uu_app17h16fa55fca8cffc98E_00577a18)(&local_4b8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h30b06472cd87dbe1E
            (&local_5f8,&local_4b8,param_1,param_2);
  local_4e0 = local_5c8;
  local_4f0 = (undefined4)local_5d8;
  uStack_4ec = local_5d8._4_4_;
  uStack_4e8 = (undefined4)uStack_5d0;
  uStack_4e4 = uStack_5d0._4_4_;
  local_500 = local_5e8;
  uStack_4fc = uStack_5e4;
  uStack_4f8 = uStack_5e0;
  uStack_4f4 = uStack_5dc;
  local_510[0] = local_5f8;
                    /* try { // try from 00302024 to 003022e1 has its CatchHandler @ 0030321c */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hce3c3270a717cad2E
            (&local_4b8,local_510,"format",6);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha91e63c324e6082aE
                    ("format",6,&local_4b8);
  if (lVar5 == 0) {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h1d7c8589c95a2667E
              (&local_4b8,local_510);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h9cd2a71e81cc65a0E(&local_5f8,&local_4b8);
    if ((undefined8 ****)local_5f8 == (undefined8 ****)0x0) {
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00577a30
              )(local_510,"rfc-email",9);
      if (cVar3 == '\0') {
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hce3c3270a717cad2E
                  (&local_4b8,local_510,"rfc-3339",8);
        lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha91e63c324e6082aE
                          ("rfc-3339",8,&local_4b8);
        if (lVar5 == 0) {
          local_5a8 = (undefined8 ****)0x8000000000000004;
        }
        else {
          uVar4 = (*(code *)
                    PTR__ZN77__LT_uu_date__Rfc3339Format_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17ha37270e94269fcfdE_00577a38
                  )(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
          uStack_5a0 = CONCAT31(uStack_5a0._1_3_,uVar4);
          local_5a8 = (undefined8 ****)0x8000000000000002;
        }
      }
      else {
        local_5a8 = (undefined8 ****)0x8000000000000001;
      }
    }
    else {
      local_488 = (undefined4)local_5c8;
      uStack_484 = local_5c8._4_4_;
      uStack_480 = uStack_5c0;
      uStack_47c = uStack_5bc;
      uStack_498 = local_5d8;
      local_490 = (undefined4)uStack_5d0;
      uStack_48c = uStack_5d0._4_4_;
      uStack_4a8._0_4_ = local_5e8;
      uStack_4a8._4_4_ = uStack_5e4;
      uStack_4a0 = CONCAT44(uStack_5dc,uStack_5e0);
      local_4b8 = local_5f8;
      uStack_4b0 = uStack_5f0;
      uStack_4ac = uStack_5ec;
      uVar4 = _ZN7uu_date6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hac17f49f35c0ab5fE
                        (&local_4b8);
      uStack_5a0 = CONCAT31(uStack_5a0._1_3_,uVar4);
      local_5a8 = (undefined8 ***)&DAT_8000000000000000;
    }
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 8);
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    local_4b8 = (undefined8 ***)((ulong)local_4b8 & 0xffffffff00000000);
    uVar6 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2b,&local_4b8);
    cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h1f258e9e5cc6f85cE
                      (uVar7,uVar1,uVar6);
    if (cVar3 == '\0') {
      local_5f8 = (undefined8 ***)0x0;
      uStack_5f0 = (undefined4)*(undefined8 *)(lVar5 + 8);
      uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar5 + 8) >> 0x20);
      local_5e8 = (undefined4)*(undefined8 *)(lVar5 + 0x10);
      uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20);
      uStack_5e0 = CONCAT31(uStack_5e0._1_3_,1);
      local_628 = SUB84(PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00577a28
                        ,0);
      uStack_624 = (undefined4)
                   ((ulong)
                    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00577a28
                   >> 0x20);
      local_4b8 = (undefined8 ***)&PTR_s_invalid_date_0044b078;
      uStack_4b0 = 1;
      uStack_4ac = 0;
      uStack_498 = 0;
      uStack_4a8 = &local_630;
      uStack_4a0 = 1;
      local_630 = &local_5f8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hd3f382ebaeb7f034E(local_1b8,&local_4b8);
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,1);
      uStack_4b0 = uStack_1b0;
      uStack_4ac = uStack_1ac;
      uStack_4a8._0_4_ = (undefined4)local_1a8;
      uStack_4a8._4_4_ = (undefined4)((ulong)local_1a8 >> 0x20);
      uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h193c733ee5fb6fceE(&local_4b8);
      goto LAB_003026ab;
    }
    uVar7 = *(undefined8 *)(lVar5 + 8);
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    lVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (1,uVar7,uVar1);
    if (lVar5 == 0) {
                    /* try { // try from 003030fe to 00303118 has its CatchHandler @ 0030321c */
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00577790)
                (uVar7,uVar1,1,uVar1,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0044b160);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h31e72d105958f9d5E
              (&local_4b8,lVar5);
    local_598 = CONCAT44(uStack_4a8._4_4_,(undefined4)uStack_4a8);
    local_5a8 = local_4b8;
    uStack_5a0 = uStack_4b0;
    uStack_59c = uStack_4ac;
  }
                    /* try { // try from 003022fb to 00302367 has its CatchHandler @ 003031ac */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hce3c3270a717cad2E
            (&local_4b8,local_510,"date",4);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha91e63c324e6082aE
                    ("date",4,&local_4b8);
  if (lVar5 == 0) {
                    /* try { // try from 003023bc to 0030249f has its CatchHandler @ 003031ac */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hce3c3270a717cad2E
              (&local_4b8,local_510,"filemode",4);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha91e63c324e6082aE
                      ("filemode",4,&local_4b8);
    if (lVar5 == 0) {
      local_568 = (undefined8 ***)0x0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 8);
      uVar1 = *(undefined8 *)(lVar5 + 0x10);
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h113c9365d823dd91E
                        (uVar7,uVar1,"-",1);
      if (cVar3 == '\0') {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h31e72d105958f9d5E
                  (&local_4b8,uVar7,uVar1);
        uStack_550 = CONCAT44(uStack_4a8._4_4_,(undefined4)uStack_4a8);
        auStack_560._8_4_ = uStack_4b0;
        auStack_560._0_8_ = local_4b8;
        uStack_554 = uStack_4ac;
        local_568 = (undefined8 ***)0x2;
      }
      else {
        local_568 = (undefined8 ***)0x3;
      }
    }
  }
  else {
    (*(code *)PTR__ZN6chrono6offset5local5Local3now17hd3cc0dab6e1d709bE_00577750)(local_1e8);
    _ZN14parse_datetime22parse_datetime_at_date17hcdd3a33c754dee07E
              (&local_4b8,local_1e8,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    if ((undefined8 ****)local_4b8 == (undefined8 ****)0x8000000000000002) {
                    /* try { // try from 00302382 to 0030238e has its CatchHandler @ 00303134 */
      auStack_560 = _ZN6chrono8datetime18DateTime_LT_Tz_GT_21signed_duration_since17h9cce9315ea548bcbE
                              (&uStack_4b0,local_1e8);
      local_568 = (undefined8 ***)0x4;
      _ZN4core3ptr154drop_in_place_LT_core__result__Result_LT_chrono__datetime__DateTime_LT_chrono__offset__fixed__FixedOffset_GT__C_parse_datetime__ParseDateTimeError_GT__GT_17hfef74df3ec86c666E
                (&local_4b8);
    }
    else {
      _ZN4core3ptr154drop_in_place_LT_core__result__Result_LT_chrono__datetime__DateTime_LT_chrono__offset__fixed__FixedOffset_GT__C_parse_datetime__ParseDateTimeError_GT__GT_17hfef74df3ec86c666E
                (&local_4b8);
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00577a40
      )(&local_4b8,lVar5);
      uStack_550 = CONCAT44(uStack_4a8._4_4_,(undefined4)uStack_4a8);
      auStack_560._8_4_ = uStack_4b0;
      auStack_560._0_8_ = local_4b8;
      uStack_554 = uStack_4ac;
      local_568 = (undefined8 ***)0x1;
    }
  }
                    /* try { // try from 003024cc to 00302520 has its CatchHandler @ 0030316a */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hce3c3270a717cad2E
            (&local_4b8,local_510,"set",3);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha91e63c324e6082aE
                    ("set",3,&local_4b8);
  if (lVar5 != 0) {
    _ZN7uu_date10parse_date17h746ef56d163214a2E(&local_4b8,lVar5);
    local_658 = CONCAT44((undefined4)uStack_4a8,uStack_4ac);
    local_650 = uStack_4a8._4_4_;
    local_1d8 = (undefined4)uStack_4a0;
    uStack_1d4 = uStack_4a0._4_4_;
    uStack_1d0 = (undefined4)uStack_498;
    uStack_1cc = uStack_498._4_4_;
    local_1c8 = CONCAT44(uStack_48c,local_490);
    if ((undefined8 ****)local_4b8 != (undefined8 ****)0x8000000000000001) {
      local_630 = local_4b8;
      local_628 = uStack_4b0;
      local_61c = uStack_4a8._4_4_;
      uStack_624 = uStack_4ac;
      uStack_620 = (undefined4)uStack_4a8;
      local_5f8 = (undefined8 ***)0x0;
      uStack_5f0 = uStack_4b0;
      uStack_5ec = uStack_4ac;
      local_5e8 = (undefined4)uStack_4a8;
      uStack_5e4 = uStack_4a8._4_4_;
      uStack_5e0 = CONCAT31(uStack_5e0._1_3_,1);
      local_678 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00577a28
      ;
      local_4b8 = (undefined8 ***)&PTR_s_invalid_date_0044b078;
      uStack_4b0 = 1;
      uStack_4ac = 0;
      uStack_498 = 0;
      uStack_4a8 = &local_680;
      uStack_4a0 = 1;
                    /* try { // try from 0030262a to 00302676 has its CatchHandler @ 00303146 */
      local_680 = &local_5f8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hd3f382ebaeb7f034E(local_1a0,&local_4b8);
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,1);
      uStack_4b0 = uStack_198;
      uStack_4ac = uStack_194;
      uStack_4a8._0_4_ = (undefined4)local_190;
      uStack_4a8._4_4_ = (undefined4)((ulong)local_190 >> 0x20);
      uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h193c733ee5fb6fceE(&local_4b8);
      _ZN4core3ptr55drop_in_place_LT_parse_datetime__ParseDateTimeError_GT_17h1fa3cbfd8239608dE
                (&local_1d8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hca9b678a5ae7a7e7E(&local_630);
      _ZN4core3ptr40drop_in_place_LT_uu_date__DateSource_GT_17h063b93d8ddc2d77bE(&local_568);
      _ZN4core3ptr36drop_in_place_LT_uu_date__Format_GT_17h96b0f040837954d9E(&local_5a8);
LAB_003026ab:
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h4daadbc5037c844dE
                (local_510);
      return uVar7;
    }
  }
                    /* try { // try from 003026d1 to 003026ea has its CatchHandler @ 0030316a */
  local_5b0 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00577a30
              )(local_510,"universal",9);
  local_5c8 = local_598;
  uStack_5d0 = CONCAT44(uStack_59c,uStack_5a0);
  local_5d8 = (undefined8 ****)local_5a8;
  local_5f8 = (undefined8 ***)local_568;
  uStack_5f0 = auStack_560._0_4_;
  uStack_5ec = auStack_560._4_4_;
  local_5e8 = auStack_560._8_4_;
  uStack_5e4 = uStack_554;
  uStack_5e0 = (undefined4)uStack_550;
  uStack_5dc = uStack_550._4_4_;
  uStack_5bc = (undefined4)local_520;
  uStack_5b8 = (undefined4)((ulong)local_520 >> 0x20);
  local_5b4 = local_518;
  uStack_5c0 = 0;
  if (local_5b0 == '\0') {
    (*(code *)PTR__ZN6chrono6offset5local5Local3now17hd3cc0dab6e1d709bE_00577750)(&local_4b8);
    local_638 = uStack_4b0;
    local_640 = local_4b8;
                    /* WARNING: Could not recover jumptable at 0x00302845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)((long)&UINT_001fc418 + (long)(int)(&UINT_001fc418)[(long)local_5f8]))();
    return uVar7;
  }
                    /* try { // try from 003027c2 to 00302a74 has its CatchHandler @ 00303162 */
  (*(code *)PTR__ZN6chrono6offset3utc3Utc3now17h5df5ece099311fd6E_00577a50)(&local_4b8);
  local_638 = uStack_4b0;
  local_640 = local_4b8;
                    /* WARNING: Could not recover jumptable at 0x00302800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)((long)&UINT_001fc418 + (long)(int)(&UINT_001fc418)[(long)local_5f8]))();
  return uVar7;
}