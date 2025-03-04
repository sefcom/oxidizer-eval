undefined8 _ZN10uu_dirname6uumain6uumain17h11513daeca688becE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined auVar7 [16];
  undefined local_689;
  long local_688;
  long local_680;
  long local_678;
  long local_670;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 local_648;
  long local_640;
  long local_638;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined8 local_610;
  code *local_608;
  undefined *local_600;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  char *local_5d8;
  undefined8 local_5d0;
  undefined **local_5c8;
  undefined8 uStack_5c0;
  code **local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  code *local_2f8;
  undefined *puStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  char *local_2c8;
  undefined8 local_2c0;
  
  (*(code *)PTR__ZN10uu_dirname6uu_app17ha975dcebe50fa881E_0020b870)(&local_5c8);
  _ZN12clap_builder7builder7command7Command10after_help17h7c6e8d1a8e0241d3E
            (&local_2f8,&local_5c8,
             "Output each NAME with its last non-slash component and trailing slashes\nremoved; if NAME contains no /\'s, output \'.\' (meaning the current directory)."
             ,0x95);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hd708e816ad35cd23E
            (&local_678,&local_2f8,param_1,param_2);
  if (local_678 == -0x8000000000000000) {
    uVar4 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0020b878
            )();
  }
  else {
    local_610 = local_648;
    local_620 = local_658;
    uStack_61c = uStack_654;
    uStack_618 = uStack_650;
    uStack_614 = uStack_64c;
    local_630 = local_668;
    uStack_62c = uStack_664;
    uStack_628 = uStack_660;
    uStack_624 = uStack_65c;
    local_640 = local_678;
    local_638 = local_670;
                    /* try { // try from 0015d2fc to 0015d3f5 has its CatchHandler @ 0015d699 */
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020b880
            )(&local_640,&DAT_001130b8,4);
    local_689 = (code)0xa;
    if (cVar3 != '\0') {
      local_689 = (code)0x0;
    }
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hbca69427bbb05630E
              (&local_5c8,&local_640,"dir",3);
    pcVar6 = "dir";
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h0a916d4903afd704E
              (&local_2f8,"dir",3,&local_5c8);
    local_608 = local_2f8;
    local_600 = puStack_2f0;
    if (local_2f8 == (code *)0x0) {
      local_2d8 = 0;
      uStack_2d4 = 0;
      uStack_2d0 = 0;
      uStack_2cc = 0;
      local_2e8 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0020b888
                        ,0);
      uStack_2e4 = (undefined4)
                   ((ulong)
                    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0020b888
                   >> 0x20);
      uStack_2e0 = 0;
      uStack_2dc = 0;
      local_2c0 = 0;
      local_608 = _ZN4core3ops8function6FnOnce9call_once17hf9816fa1da96fc6bE;
      local_600 = 
      PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0020b888
      ;
      local_2c8 = pcVar6;
    }
    local_5f8 = local_2e8;
    uStack_5f4 = uStack_2e4;
    uStack_5f0 = uStack_2e0;
    uStack_5ec = uStack_2dc;
    local_5e8 = local_2d8;
    uStack_5e4 = uStack_2d4;
    uStack_5e0 = uStack_2d0;
    uStack_5dc = uStack_2cc;
    local_5d8 = local_2c8;
    local_5d0 = local_2c0;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hd09e5e62fed0fc94E
              (&local_678,&local_608);
    if (CONCAT44(uStack_664,local_668) == 0) {
                    /* try { // try from 0015d61f to 0015d663 has its CatchHandler @ 0015d697 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hd9f27690394bc0dcE
                (&local_2f8);
      local_5b0 = CONCAT44(local_5b0._4_4_,1);
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0f4bd833c5b203adE(&local_5c8);
                    /* try { // try from 0015d664 to 0015d670 has its CatchHandler @ 0015d699 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h231b973bb6e880f3E
                (&local_678);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc82f33e0af68aa1dE
                (&local_640);
    }
    else {
      local_680 = local_670 + CONCAT44(uStack_664,local_668) * 0x18;
      local_688 = local_670;
      lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hea13242265cd5fc5E
                        (&local_688);
      puVar2 = PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0020b890;
      if (lVar5 != 0) {
        do {
          uVar4 = *(undefined8 *)(lVar5 + 8);
          uVar1 = *(undefined8 *)(lVar5 + 0x10);
                    /* try { // try from 0015d448 to 0015d5f3 has its CatchHandler @ 0015d69e */
          auVar7 = (*(code *)PTR__ZN3std4path4Path6parent17h65c9a340a6266f2dE_0020b898)(uVar4,uVar1)
          ;
          lVar5 = auVar7._0_8_;
          if (lVar5 == 0) {
            cVar3 = (*(code *)PTR__ZN3std4path4Path11is_absolute17h3431a23d91045560E_0020b8b0)
                              (uVar4,uVar1);
            if ((cVar3 == '\0') &&
               (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h7b1b59c59615f35dE
                                  (uVar4,uVar1,"/",1), cVar3 == '\0')) {
              local_5c8 = &PTR_s___002059e8;
              uStack_5c0 = 1;
              local_5b8 = (code **)0x8;
              local_5b0 = 0;
              uStack_5a8 = 0;
              (*(code *)puVar2)(&local_5c8);
            }
            else {
              local_5c8 = &PTR_s___002059f8;
              uStack_5c0 = 1;
              local_5b8 = (code **)0x8;
              local_5b0 = 0;
              uStack_5a8 = 0;
              (*(code *)puVar2)(&local_5c8);
            }
          }
          else {
            (*(code *)PTR__ZN3std4path4Path10components17h4f3217acf0fc8653E_0020b8a0)
                      (&local_5c8,lVar5);
            (*(code *)
              PTR__ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h327ae97aa5bd0b06E_0020b8a8
            )(&local_2f8,&local_5c8);
            if ((char)local_2f8 == '\n') {
              local_5c8 = &PTR_s___002059e8;
              uStack_5c0 = 1;
              local_5b8 = (code **)0x8;
              local_5b0 = 0;
              uStack_5a8 = 0;
              (*(code *)puVar2)(&local_5c8);
            }
            else {
              uVar4 = _ZN6uucore4mods7display14print_verbatim17hce63210a40ab659bE
                                (lVar5,auVar7._8_8_);
              _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0ef4d55c3be2e364E(uVar4);
            }
          }
          local_2f8 = (code *)&local_689;
          puStack_2f0 = 
          PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE_0020b8b8
          ;
          local_5c8 = (undefined **)&DAT_00112aa0;
          uStack_5c0 = 1;
          uStack_5a8 = 0;
          local_5b8 = &local_2f8;
          local_5b0 = 1;
          (*(code *)puVar2)(&local_5c8);
          lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hea13242265cd5fc5E
                            (&local_688);
        } while (lVar5 != 0);
      }
                    /* try { // try from 0015d607 to 0015d610 has its CatchHandler @ 0015d699 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h231b973bb6e880f3E
                (&local_678);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc82f33e0af68aa1dE
                (&local_640);
      uVar4 = 0;
    }
  }
  return uVar4;
}