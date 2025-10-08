undefined8 _ZN5uu_id6uumain6uumain17hcb63553f6d076f9bE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ******ppppppuVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  bool bVar16;
  undefined auVar17 [16];
  undefined local_7fd;
  undefined4 local_7fc;
  undefined8 ******local_7f8;
  undefined4 local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  char local_7d4;
  char local_7d3;
  char local_7d2;
  char local_7d1;
  char local_7d0;
  char local_7cf;
  char local_7ce;
  undefined local_7cd;
  byte local_7cc;
  undefined8 ******local_7c8;
  undefined8 ******ppppppuStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined8 local_798;
  undefined local_788 [16];
  undefined8 *****local_778;
  undefined local_770;
  undefined8 *****local_768;
  code *pcStack_760;
  char *local_758;
  undefined8 ******local_750;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined8 ******local_738;
  undefined8 ******local_730;
  undefined8 ******ppppppuStack_728;
  char *local_720;
  undefined8 ******local_718;
  undefined8 ******local_710;
  undefined8 ******local_708;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 *****local_6c0;
  ulong local_6b8;
  undefined8 local_6b0;
  undefined8 ******local_6a8;
  undefined local_6a0;
  undefined8 *****local_698;
  ulong local_690;
  undefined8 ******local_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  ulong uStack_610;
  undefined8 ******local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 ******local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  long local_f0 [8];
  long local_b0;
  undefined8 ******local_a8;
  
  (*(code *)PTR__ZN5uu_id6uu_app17h29c9bf865c558e60E_001ef860)(&local_688);
  _ZN12clap_builder7builder7command7Command10after_help17h56e9354dd2bb340dE(&local_3b8,&local_688);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h29efddedcb406833E
            (&local_7c8,&local_3b8,param_1,param_2);
  local_6e0 = local_798;
  local_6f0 = (undefined4)local_7a8;
  uStack_6ec = local_7a8._4_4_;
  uStack_6e8 = uStack_7a0;
  uStack_6e4 = uStack_79c;
  local_700 = (undefined4)local_7b8;
  uStack_6fc = local_7b8._4_4_;
  uStack_6f8 = (undefined4)uStack_7b0;
  uStack_6f4 = uStack_7b0._4_4_;
  local_710 = local_7c8;
  local_708 = ppppppuStack_7c0;
                    /* try { // try from 00157002 to 0015704b has its CatchHandler @ 00157ef7 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hedd4567a5efc7126E
            (&local_688,&local_710);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hfac66af166ed83b5E(local_f0,&local_688);
  if (local_f0[0] == 0) {
LAB_00157073:
    local_738 = (undefined8 *******)0x0;
    local_730 = (undefined8 ******)&DAT_00000008;
    ppppppuStack_728 = (undefined8 *******)0x0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h122b407c8fc85fb2E(&local_688,local_f0);
    local_3b8 = uStack_680;
    uStack_3b0 = (undefined4)uStack_678;
    uStack_3ac = uStack_678._4_4_;
    if (local_688 == (undefined8 ******)&DAT_8000000000000000) goto LAB_00157073;
    local_730 = uStack_680;
    ppppppuStack_728 = uStack_678;
    local_738 = local_688;
  }
                    /* try { // try from 001570b1 to 001572e0 has its CatchHandler @ 00157f0e */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
          )(&local_710,&DAT_00118988,4);
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
          )(&local_710,&DAT_00118938,4);
  cVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
          )(&local_710,"group",5);
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
          )(&local_710,"groups",6);
  cVar8 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
          )(&local_710,&DAT_00118928,4);
  cVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
          )(&local_710,&DAT_00118968,4);
  local_7ce = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
              )(&local_710,"context",7);
  local_7f8 = ppppppuStack_728;
  local_7cc = (undefined8 *******)ppppppuStack_728 != (undefined8 *******)0x0;
  local_7cd = 0;
  local_7e8 = 0;
  local_7d4 = cVar4;
  local_7d3 = cVar5;
  local_7d2 = cVar6;
  local_7d1 = cVar7;
  local_7d0 = cVar8;
  local_7cf = cVar9;
  if (cVar4 == '\0') {
    if (cVar8 != '\x01' || ((cVar6 != '\0' || cVar7 != '\0') || cVar5 != '\0')) {
      if ((cVar9 == '\x01' && local_7ce == '\0') &&
          ((cVar6 == '\0' && cVar7 == '\0') && cVar5 == '\0')) {
                    /* try { // try from 00157c51 to 00157d05 has its CatchHandler @ 00157f0e */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he95092b90f1a89a0E
                  (&local_3b8,&DAT_00118575,0x2d);
        uStack_678 = (undefined8 *******)local_3a8;
        local_688 = local_3b8;
        uStack_680 = (undefined8 *******)CONCAT44(uStack_3ac,uStack_3b0);
        uStack_670 = CONCAT44(uStack_670._4_4_,1);
        uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha21fca55809c2c7cE(&local_688);
        goto LAB_00157d09;
      }
      goto LAB_001571ea;
    }
    if (local_7ce == '\0') goto LAB_00157290;
    if ((undefined8 *******)ppppppuStack_728 == (undefined8 *******)0x0) {
      local_7fd = 10;
      if (cVar9 != '\0') {
        local_7fd = 0;
      }
      goto LAB_00157cb5;
    }
  }
  else {
    if (((cVar6 == '\0' && cVar7 == '\0') && cVar5 == '\0') && local_7ce == '\0') {
LAB_00157290:
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he95092b90f1a89a0E
                (&local_3b8,&DAT_0011853f,0x36);
      uStack_678 = (undefined8 *******)local_3a8;
      local_688 = local_3b8;
      uStack_680 = (undefined8 *******)CONCAT44(uStack_3ac,uStack_3b0);
      uStack_670 = CONCAT44(uStack_670._4_4_,1);
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha21fca55809c2c7cE(&local_688);
      goto LAB_00157d09;
    }
LAB_001571ea:
    if ((undefined8 *******)ppppppuStack_728 == (undefined8 *******)0x0) {
      local_720 = " ";
      if (cVar9 != '\0') {
        local_720 = "";
      }
      local_7fd = 10;
      if (cVar9 != '\0') {
        local_7fd = 0;
      }
      if (local_7ce == '\0') goto LAB_00157319;
LAB_00157cb5:
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he95092b90f1a89a0E
                (&local_3b8,&DAT_001185d3,0x36);
      uStack_678 = (undefined8 *******)local_3a8;
      local_688 = local_3b8;
      uStack_680 = (undefined8 *******)CONCAT44(uStack_3ac,uStack_3b0);
      uStack_670 = CONCAT44(uStack_670._4_4_,1);
      uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha21fca55809c2c7cE(&local_688);
      goto LAB_00157d09;
    }
    if (local_7ce == '\0') {
      local_720 = " ";
      if (cVar9 != '\0') {
        local_720 = "";
      }
      local_7fd = 10;
      if (cVar9 != '\0') {
        local_7fd = 0;
      }
LAB_00157319:
      local_6b0 = 0;
      local_6a8 = ppppppuStack_728;
      local_6a0 = 0;
      auVar17 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17hd913dad9e67c4a33E
                          (&local_6b0);
      pppppppuVar15 = auVar17._8_8_;
      if ((auVar17 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        local_718 = local_730;
        local_6b8 = (ulong)(&DAT_00000001 < local_7f8);
        local_6c0 = (undefined8 *****)0x1189cb;
        if (&DAT_00000001 >= local_7f8) {
          local_6c0 = (undefined8 ******)0x1;
        }
        do {
          if (local_7cc == 0) {
            local_3b8 = (undefined8 ******)&DAT_8000000000000000;
LAB_001575c6:
                    /* try { // try from 001575c6 to 0015773f has its CatchHandler @ 00157efc */
            cVar4 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
                    )(&local_710,"password",8);
            if (cVar4 == '\0') {
              cVar4 = (*(code *)
                        PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
                      )(&local_710,"human-readable",0xe);
              if (cVar4 != '\0') {
                local_618 = local_348;
                uStack_610 = uStack_340;
                local_628 = local_358;
                uStack_620 = uStack_350;
                local_638 = local_368;
                uStack_630 = uStack_360;
                local_648 = local_378;
                uStack_640 = uStack_370;
                local_658 = (undefined4)local_388;
                uStack_654 = local_388._4_4_;
                uStack_650 = (undefined4)uStack_380;
                uStack_64c = uStack_380._4_4_;
                local_668 = local_398;
                uStack_660 = (undefined4)uStack_390;
                uStack_65c = uStack_390._4_4_;
                uStack_678 = (undefined8 *******)local_3a8;
                uStack_670 = uStack_3a0;
                local_688 = local_3b8;
                uStack_680 = (undefined8 *******)CONCAT44(uStack_3ac,uStack_3b0);
                    /* try { // try from 00157df5 to 00157e02 has its CatchHandler @ 00157e5e */
                (*(code *)PTR__ZN5uu_id6pretty17h6432800401a89dbaE_001ef8f8)(&local_688);
                uVar13 = 0;
                goto LAB_00157d09;
              }
              cVar4 = (*(code *)
                        PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef870
                      )(&local_710,"audit",5);
              ppppppuVar2 = local_3b8;
              if (cVar4 == '\0') {
                uVar12 = (undefined4)uStack_340;
                uVar3 = uStack_340._4_4_;
                if ((local_7d0 == '\0') &&
                   (((local_7d3 != '\0' || (local_7d2 != '\0')) || (local_7d1 != '\0')))) {
                  uVar10 = (*(code *)
                             PTR__ZN6uucore8features7process7geteuid17hd0ed7b4820ed9632E_001ef8a0)()
                  ;
                  uVar11 = (*(code *)
                             PTR__ZN6uucore8features7process7getegid17h2ca565c9eb3bafb7E_001ef8a8)()
                  ;
                }
                else {
                  uVar10 = (*(code *)
                             PTR__ZN6uucore8features7process6getuid17h408babfb7f2600cdE_001ef890)();
                  uVar11 = (*(code *)
                             PTR__ZN6uucore8features7process6getgid17h996eeb286e507395E_001ef898)();
                }
                local_7ec = uVar3;
                local_7fc = uVar12;
                if (ppppppuVar2 == (undefined8 ******)&DAT_8000000000000000) {
                  local_7ec = uVar11;
                  local_7fc = uVar10;
                }
                uVar12 = (*(code *)
                           PTR__ZN6uucore8features7process7geteuid17hd0ed7b4820ed9632E_001ef8a0)();
                local_7d8 = (*(code *)
                              PTR__ZN6uucore8features7process7getegid17h2ca565c9eb3bafb7E_001ef8a8)
                                      ();
                local_7e8 = 1;
                local_7e4 = local_7fc;
                local_7e0 = local_7ec;
                local_7dc = uVar12;
                if (local_7d2 != '\0') {
                  if (local_7d4 == '\0') {
                    uVar13 = (*(code *)
                               PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u32_GT_4_fmt17hcfe26aa883005358E_001ef8b8
                             )(local_7ec,local_788,10);
                    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he95092b90f1a89a0E
                              (&local_688,uVar13);
                    local_7b8 = uStack_678;
                    local_7c8 = local_688;
                    ppppppuStack_7c0 = uStack_680;
                  }
                  else {
                    (*(code *)
                      PTR__ZN97__LT_uucore__features__entries__Group_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17hf537d3ad4e514fa6E_001ef8b0
                    )(&local_688);
                    if (local_688 == (undefined8 ******)&DAT_8000000000000000) {
                      _ZN5uu_id6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17head321a69e27931bE
                                (&local_7c8,&local_7ec);
                    }
                    else {
                      local_7c8 = local_688;
                      ppppppuStack_7c0 = uStack_680;
                      local_7b8 = uStack_678;
                    }
                  }
                  local_788._0_8_ = &local_7c8;
                  local_788._8_8_ =
                       _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                  ;
                  local_688 = (undefined8 ******)&DAT_001182c0;
                  uStack_680 = (undefined8 *******)&DAT_00000001;
                  local_668 = 0;
                  uStack_678 = (undefined8 *******)local_788;
                  uStack_670 = 1;
                    /* try { // try from 001577d2 to 001577df has its CatchHandler @ 00157e96 */
                  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_688);
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcee18d35cbfb2d14E
                            (local_7c8,ppppppuStack_7c0);
                }
                if (local_7d3 != '\0') {
                  if (local_7d4 == '\0') {
                    uVar13 = (*(code *)
                               PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u32_GT_4_fmt17hcfe26aa883005358E_001ef8b8
                             )(local_7fc,local_788,10);
                    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he95092b90f1a89a0E
                              (&local_688,uVar13);
                    local_7b8 = uStack_678;
                    local_7c8 = local_688;
                    ppppppuStack_7c0 = uStack_680;
                  }
                  else {
                    /* try { // try from 00157805 to 001578ac has its CatchHandler @ 00157efc */
                    (*(code *)
                      PTR__ZN98__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17h5d0bb482984d9c00E_001ef8c8
                    )(&local_b0,local_7fc);
                    pppppppuVar14 = (undefined8 *******)local_a8;
                    if ((local_b0 == -0x8000000000000000) ||
                       (_ZN6uucore8features7entries7uid2usr28__u7b__u7b_closure_u7d__u7d_17h6ed47d8d1f5b04c0E
                                  (&local_688,&local_b0), pppppppuVar14 = uStack_680,
                       local_688 == (undefined8 ******)&DAT_8000000000000000)) {
                      _ZN5uu_id6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h3e5f1e42e9a89374E
                                (&local_7c8,&local_7fc,pppppppuVar14);
                    }
                    else {
                      local_7c8 = local_688;
                      ppppppuStack_7c0 = uStack_680;
                      local_7b8 = uStack_678;
                    }
                  }
                  local_788._0_8_ = &local_7c8;
                  local_788._8_8_ =
                       _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                  ;
                  local_688 = (undefined8 ******)&DAT_001182c0;
                  uStack_680 = (undefined8 *******)&DAT_00000001;
                  local_668 = 0;
                  uStack_678 = (undefined8 *******)local_788;
                  uStack_670 = 1;
                    /* try { // try from 00157925 to 00157932 has its CatchHandler @ 00157e94 */
                  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_688);
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcee18d35cbfb2d14E
                            (local_7c8,ppppppuStack_7c0);
                }
                    /* try { // try from 00157946 to 0015796d has its CatchHandler @ 00157efc */
                (*(code *)
                  PTR__ZN6uucore8features7entries14get_groups_gnu17hafb36095cbadaa6cE_001ef8d0)
                          (&local_688,1,local_7ec);
                _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdf2c3fa37216f039E
                          (&local_6d8,&local_688);
                if (local_7cc != 0) {
                  if (local_3b8 != (undefined8 ******)&DAT_8000000000000000) {
                    /* try { // try from 0015798d to 00157a04 has its CatchHandler @ 00157eac */
                    (*(code *)
                      PTR__ZN6uucore8features7entries6Passwd10belongs_to17h86a03abed7028785E_001ef8d8
                    )(&local_688,&local_3b8);
                    local_7c8 = uStack_680;
                    ppppppuStack_7c0 = uStack_678;
                    if (local_688 != (undefined8 ******)&DAT_8000000000000000) {
                      local_750 = local_688;
                      uStack_744 = uStack_680._4_4_;
                      uStack_73c = uStack_678._4_4_;
                      local_748 = (int)uStack_680;
                      uStack_740 = (int)uStack_678;
                      goto LAB_00157a05;
                    }
                  }
                    /* try { // try from 00157e4f to 00157e5b has its CatchHandler @ 00157eaa */
                  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ef900)
                            (&PTR_DAT_001e8320);
LAB_00157e5c:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hd3dbc4273215df96E
                          (&local_750,local_6d0,local_6c8);
LAB_00157a05:
                if (local_7d1 != '\0') {
                  local_688 = (undefined8 ******)CONCAT44(uStack_744,local_748);
                  uStack_680 = (undefined8 *******)
                               ((long)local_688 + CONCAT44(uStack_73c,uStack_740) * 4);
                  uStack_678 = (undefined8 *******)&local_7d4;
                    /* try { // try from 00157a41 to 00157a55 has its CatchHandler @ 00157ec5 */
                  _ZN4core4iter6traits8iterator8Iterator7collect17ha9cd2803a3611dbcE
                            (local_788,&local_688);
                    /* try { // try from 00157a66 to 00157a7d has its CatchHandler @ 00157e82 */
                  _ZN5alloc3str17join_generic_copy17ha258ccce1c75cdefE
                            (&local_688,local_788._8_8_,local_778,local_720);
                  local_758 = (char *)uStack_678;
                  bVar16 = (local_7cc & 1) != 0;
                  local_698 = (undefined8 ******)0x1;
                  if (bVar16) {
                    local_698 = local_6c0;
                  }
                  local_690 = 0;
                  if (bVar16) {
                    local_690 = local_6b8;
                  }
                  if (local_7cf == '\0') {
                    local_698 = (undefined8 ******)0x1;
                    local_690 = 0;
                  }
                  local_768 = local_688;
                  pcStack_760 = (code *)uStack_680;
                  local_7c8 = &local_768;
                  ppppppuStack_7c0 =
                       (undefined8 ******)
                       _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                  ;
                  local_7b8 = (undefined8 *******)&local_698;
                  uStack_7b0 = 
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h09315c6309a338a3E;
                  local_688 = (undefined8 ******)&DAT_00118618;
                  uStack_680 = (undefined8 *******)0x2;
                  local_668 = 0;
                  uStack_678 = &local_7c8;
                  uStack_670 = 2;
                    /* try { // try from 00157b58 to 00157b60 has its CatchHandler @ 00157e68 */
                  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_688);
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcee18d35cbfb2d14E
                            (local_768,pcStack_760);
                  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8511733bf174c94eE
                            (local_788);
                }
                if ((cVar6 == '\0' && cVar7 == '\0') && cVar5 == '\0') {
                    /* try { // try from 00157b98 to 00157c06 has its CatchHandler @ 00157ec5 */
                  (*(code *)PTR__ZN5uu_id8id_print17h3604a9066f84a09cE_001ef8e0)
                            (&local_7e8,CONCAT44(uStack_744,local_748),
                             CONCAT44(uStack_73c,uStack_740));
                }
                local_7c8 = (undefined8 ******)&local_7fd;
                ppppppuStack_7c0 =
                     (undefined8 ******)
                     PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_001ef8e8
                ;
                local_688 = (undefined8 ******)&DAT_001182c0;
                uStack_680 = (undefined8 *******)&DAT_00000001;
                local_668 = 0;
                uStack_678 = &local_7c8;
                uStack_670 = 1;
                (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_688);
                _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17h33604453175825ccE
                          (local_750,CONCAT44(uStack_744,local_748));
                _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17h33604453175825ccE
                          (local_6d8,local_6d0);
                _ZN4core3ptr82drop_in_place_LT_core__option__Option_LT_uucore__features__entries__Passwd_GT__GT_17h2a02baf630b817d1E
                          (&local_3b8);
                if ((undefined8 *******)((long)pppppppuVar15 + 1) < local_7f8) goto LAB_00157390;
                break;
              }
            }
            else {
                    /* try { // try from 00157d5e to 00157d63 has its CatchHandler @ 00157e63 */
              (*(code *)PTR__ZN5uu_id5pline17h1d390836edad1713E_001ef8f0)
                        (local_3b8 != (undefined8 ******)&DAT_8000000000000000,
                         uStack_340 & 0xffffffff);
            }
            _ZN4core3ptr82drop_in_place_LT_core__option__Option_LT_uucore__features__entries__Passwd_GT__GT_17h2a02baf630b817d1E
                      (&local_3b8);
            uVar13 = 0;
            goto LAB_00157d09;
          }
          if (local_7f8 <= pppppppuVar15) {
                    /* try { // try from 00157e38 to 00157e4c has its CatchHandler @ 00157f0e */
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001ef750)
                      (pppppppuVar15,local_7f8,&PTR_DAT_001e82f0);
            goto LAB_00157e5c;
          }
                    /* try { // try from 001573d4 to 001573e1 has its CatchHandler @ 00157eb1 */
          (*(code *)
            PTR__ZN102__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h4bb3a5c7c498e57dE_001ef878
          )(&local_688,local_718[(long)pppppppuVar15 * 3 + 1],local_718[(long)pppppppuVar15 * 3 + 2]
           );
          if (local_688 != (undefined8 ******)&DAT_8000000000000000) {
            local_348 = local_618;
            uStack_340 = uStack_610;
            local_358 = local_628;
            uStack_350 = uStack_620;
            local_368 = local_638;
            uStack_360 = uStack_630;
            local_378 = local_648;
            uStack_370 = uStack_640;
            uStack_390 = CONCAT44(uStack_65c,uStack_660);
            local_388 = CONCAT44(uStack_654,local_658);
            uStack_380 = CONCAT44(uStack_64c,uStack_650);
            local_398 = local_668;
            local_3a8 = uStack_678;
            uStack_3a0 = uStack_670;
            local_3b8 = local_688;
            uStack_3b0 = (undefined4)uStack_680;
            uStack_3ac = uStack_680._4_4_;
            goto LAB_001575c6;
          }
                    /* try { // try from 001573fa to 0015750e has its CatchHandler @ 00157eb3 */
          local_788 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ef840)();
          local_768 = (undefined8 *****)local_788;
          pcStack_760 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h09315c6309a338a3E;
          local_7c8 = (undefined8 ******)&DAT_001e81d0;
          ppppppuStack_7c0 = (undefined8 ******)0x2;
          local_7a8 = 0;
          local_7b8 = (undefined8 *******)&local_768;
          uStack_7b0 = (code *)0x1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef848)(&local_7c8);
          local_788._8_8_ = local_718[(long)pppppppuVar15 * 3 + 1];
          local_778 = local_718[(long)pppppppuVar15 * 3 + 2];
          local_788._0_8_ = (undefined8 *******)0x0;
          local_770 = 1;
          local_768 = (undefined8 *****)local_788;
          pcStack_760 = (code *)
                        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001ef880
          ;
          local_7c8 = (undefined8 ******)&DAT_001e8248;
          ppppppuStack_7c0 = (undefined8 *******)0x2;
          local_7a8 = 0;
          local_7b8 = (undefined8 *******)&local_768;
          uStack_7b0 = (code *)0x1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef848)(&local_7c8);
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ef888)(1);
          if (local_7f8 <= (undefined8 *******)((long)pppppppuVar15 + 1)) {
                    /* try { // try from 00157e0a to 00157e16 has its CatchHandler @ 00157f0e */
            _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_uucore__features__entries__Passwd_C_std__io__error__Error_GT__GT_17ha058da657a6ab5f0E
                      (&local_688);
            break;
          }
                    /* try { // try from 0015751d to 00157529 has its CatchHandler @ 00157eb1 */
          _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_uucore__features__entries__Passwd_C_std__io__error__Error_GT__GT_17ha058da657a6ab5f0E
                    (&local_688);
LAB_00157390:
          auVar17 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17hd913dad9e67c4a33E
                              (&local_6b0);
          pppppppuVar15 = auVar17._8_8_;
        } while ((auVar17 & (undefined  [16])0x1) != (undefined  [16])0x0);
      }
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8511733bf174c94eE
                (&local_738);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17ha20d46652b104649E
                (&local_710);
      return 0;
    }
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he95092b90f1a89a0E
            (&local_3b8,&DAT_001185a2,0x31);
  uStack_678 = (undefined8 *******)local_3a8;
  local_688 = local_3b8;
  uStack_680 = (undefined8 *******)CONCAT44(uStack_3ac,uStack_3b0);
  uStack_670 = CONCAT44(uStack_670._4_4_,1);
  uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha21fca55809c2c7cE(&local_688);
LAB_00157d09:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8511733bf174c94eE
            (&local_738);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17ha20d46652b104649E
            (&local_710);
  return uVar13;
}