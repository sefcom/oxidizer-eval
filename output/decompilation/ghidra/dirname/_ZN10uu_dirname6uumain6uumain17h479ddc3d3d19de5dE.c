undefined8 _ZN10uu_dirname6uumain6uumain17h479ddc3d3d19de5dE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined local_641;
  long local_640;
  undefined8 local_638;
  long local_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 local_608;
  undefined8 local_600;
  long local_5f8;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 local_5d0;
  undefined **local_5c8;
  undefined *puStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined ***local_598;
  undefined8 local_590;
  undefined **local_2f8;
  undefined *puStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined ***local_2c8;
  undefined8 local_2c0;
  
  (*(code *)PTR__ZN10uu_dirname6uu_app17hdf88fbea4c615f4bE_001defb8)(&local_5c8);
  _ZN12clap_builder7builder7command7Command10after_help17ha2a569c1e12f9206E(&local_2f8,&local_5c8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h160df61233a2b922E
            (&local_638,&local_2f8,param_1,param_2);
  local_5d0 = local_608;
  local_5e0 = local_618;
  uStack_5dc = uStack_614;
  uStack_5d8 = uStack_610;
  uStack_5d4 = uStack_60c;
  local_5f0 = local_628;
  uStack_5ec = uStack_624;
  uStack_5e8 = uStack_620;
  uStack_5e4 = uStack_61c;
  local_600 = local_638;
  local_5f8 = local_630;
                    /* try { // try from 0014c7e3 to 0014c8c4 has its CatchHandler @ 0014cb8a */
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001defc8
          )(&local_600,&DAT_00116e10,4);
  local_641 = 10;
  if (cVar2 != '\0') {
    local_641 = 0;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h9f9f33ac395c0f0fE
            (&local_5c8,&local_600);
  pppuVar5 = &local_5c8;
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h45af3aeea1831ba2E(&local_2f8);
  local_5c8 = local_2f8;
  puStack_5c0 = puStack_2f0;
  if (local_2f8 == (undefined **)0x0) {
    local_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2d0 = 0;
    uStack_2cc = 0;
    local_2e8 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001defd0
                      ,0);
    uStack_2e4 = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001defd0
                 >> 0x20);
    uStack_2e0 = 0;
    uStack_2dc = 0;
    local_2c0 = 0;
    local_5c8 = (undefined **)_ZN4core3ops8function6FnOnce9call_once17h6323d8359d4ff3b8E;
    puStack_5c0 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001defd0
    ;
    local_2c8 = pppuVar5;
  }
  local_5b8 = (undefined ***)CONCAT44(uStack_2e4,local_2e8);
  local_5a8 = CONCAT44(uStack_2d4,local_2d8);
  uStack_5a0 = uStack_2d0;
  uStack_59c = uStack_2cc;
  local_598 = local_2c8;
  local_590 = local_2c0;
  uStack_5b0._0_4_ = uStack_2e0;
  uStack_5b0._4_4_ = uStack_2dc;
  _ZN4core4iter6traits8iterator8Iterator7collect17h5092542f7ecd220cE(&local_638,&local_5c8);
  if (CONCAT44(uStack_624,local_628) == 0) {
                    /* try { // try from 0014cb04 to 0014cb54 has its CatchHandler @ 0014cb88 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd5557dd8134ea428E
              (&local_2f8,&DAT_00116cea,0xf);
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,1);
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he6cca1a1ec986eb1E(&local_5c8);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7d7163f1a34c149bE
              (&local_638);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h11b0e0ac5e339bacE
              (&local_600);
  }
  else {
    local_640 = CONCAT44(uStack_624,local_628) * 0x18;
    lVar6 = 0;
    do {
      uVar4 = *(undefined8 *)(local_630 + 8 + lVar6);
      uVar1 = *(undefined8 *)(local_630 + 0x10 + lVar6);
                    /* try { // try from 0014c8fa to 0014cadc has its CatchHandler @ 0014cb8f */
      auVar7 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_001defd8)(uVar4,uVar1);
      lVar3 = auVar7._0_8_;
      if (lVar3 == 0) {
        cVar2 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_001deff8)
                          (uVar4,uVar1);
        if ((cVar2 == '\0') &&
           (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb4347a5878f8a3deE
                              (*(undefined8 *)(local_630 + 8 + lVar6),
                               *(undefined8 *)(local_630 + 0x10 + lVar6),&DAT_00116cfa,1),
           cVar2 == '\0')) {
          local_5c8 = &PTR_DAT_001d81e8;
          puStack_5c0 = (undefined *)0x1;
          local_5b8 = (undefined ***)0x8;
          uStack_5b0 = 0;
          local_5a8 = 0;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001deff0)(&local_5c8);
        }
        else {
          local_5c8 = &PTR_DAT_001d81f8;
          puStack_5c0 = (undefined *)0x1;
          local_5b8 = (undefined ***)0x8;
          uStack_5b0 = 0;
          local_5a8 = 0;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001deff0)(&local_5c8);
        }
      }
      else {
        (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_001defe0)(&local_5c8,lVar3);
        (*(code *)
          PTR__ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h73ed8dd6f02f5cb4E_001defe8
        )(&local_2f8,&local_5c8);
        if ((char)local_2f8 == '\n') {
          local_5c8 = &PTR_DAT_001d81e8;
          puStack_5c0 = (undefined *)0x1;
          local_5b8 = (undefined ***)0x8;
          uStack_5b0 = 0;
          local_5a8 = 0;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001deff0)(&local_5c8);
        }
        else {
          uVar4 = _ZN6uucore4mods7display14print_verbatim17hde1046e11296b66fE(lVar3,auVar7._8_8_);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb01f4554be916e7aE(uVar4);
        }
      }
      local_2f8 = (undefined **)&local_641;
      puStack_2f0 = 
      PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_001df000
      ;
      local_5c8 = (undefined **)&DAT_001169e0;
      puStack_5c0 = &DAT_00000001;
      local_5a8 = 0;
      local_5b8 = &local_2f8;
      uStack_5b0._0_4_ = 1;
      uStack_5b0._4_4_ = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001deff0)(&local_5c8);
      lVar6 = lVar6 + 0x18;
    } while (local_640 != lVar6);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7d7163f1a34c149bE
              (&local_638);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h11b0e0ac5e339bacE
              (&local_600);
    uVar4 = 0;
  }
  return uVar4;
}