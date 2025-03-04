undefined  [16]
_ZN10uu_hashsum6uumain6uumain17hb03e775e367c9d85E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined uVar11;
  undefined uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  byte bVar16;
  long lVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  long local_720;
  char *local_718;
  undefined4 local_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  long local_6d8;
  undefined local_6c8 [8];
  undefined8 local_6c0;
  undefined8 local_6b8;
  long local_6b0;
  char *local_6a8;
  long local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  undefined8 local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  long local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 local_658;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined local_5f8 [16];
  undefined8 local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined8 local_5d8;
  char local_340;
  long local_338 [8];
  undefined local_2f8 [712];
  
  lVar17 = -0x8000000000000000;
  local_688 = param_1;
  local_680 = param_2;
  _ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h096e5dfd273c576cE
            (&local_678,&local_688);
  if (CONCAT44(uStack_674,local_678) == -0x8000000000000000) {
    (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E_0047f5c0)
              (&local_608,"hashsum",7);
    local_6d8 = local_5f8._0_8_;
    local_6e8 = (int)local_608;
    uStack_6e4 = local_608._4_4_;
    uStack_6e0 = (undefined4)uStack_600;
    uStack_6dc = uStack_600._4_4_;
  }
  else {
    local_6d8 = local_668;
    local_6e8 = local_678;
    uStack_6e4 = uStack_674;
    uStack_6e0 = uStack_670;
    uStack_6dc = uStack_66c;
  }
                    /* try { // try from 002772bf to 002772e6 has its CatchHandler @ 00277a0f */
  auVar18 = (*(code *)PTR__ZN3std4path4Path9file_stem17h441d431a81936839E_0047f5c8)
                      (CONCAT44(uStack_6dc,uStack_6e0),local_6d8);
  if (auVar18._0_8_ == 0) {
    auVar18._8_8_ = 7;
    auVar18._0_8_ = "hashsum";
  }
  (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E_0047f5d0)
            (local_6c8,auVar18._0_8_,auVar18._8_8_);
                    /* try { // try from 002772e7 to 002772f8 has its CatchHandler @ 002779d5 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h137756251426bd57E
            (&local_608,&local_6e8);
  local_668 = local_5f8._0_8_;
  local_678 = (int)local_608;
  uStack_674 = local_608._4_4_;
  uStack_670 = (undefined4)uStack_600;
  uStack_66c = uStack_600._4_4_;
  _ZN4core4iter6traits8iterator8Iterator5chain17h97a8a1bc38742947E
            (&local_630,&local_678,local_688,local_680);
                    /* try { // try from 0027734b to 00277358 has its CatchHandler @ 002779c3 */
  (*(code *)PTR__ZN10uu_hashsum6uu_app17hc311ff14781827c9E_0047f5d8)(&local_608,local_6c0,local_6b8)
  ;
  (*(code *)PTR_memcpy_0047f5e0)(local_2f8,&local_608,0x2c8);
  local_658 = local_610;
  uStack_660 = uStack_618;
  uStack_65c = uStack_614;
  local_678 = local_630;
  uStack_674 = uStack_62c;
  uStack_670 = uStack_628;
  uStack_66c = uStack_624;
                    /* try { // try from 002773af to 002773e1 has its CatchHandler @ 002779dc */
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h6accf9addc69a3f7E
            (&local_608,local_2f8,&local_678);
  if (local_608 == -0x8000000000000000) {
    auVar19 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0047f5e8
              )();
  }
  else {
    local_6f0 = local_5d8;
    local_700 = (undefined4)local_5e8;
    uStack_6fc = local_5e8._4_4_;
    uStack_6f8 = uStack_5e0;
    uStack_6f4 = uStack_5dc;
    local_710 = local_5f8._0_4_;
    uStack_70c = local_5f8._4_4_;
    uStack_708 = local_5f8._8_4_;
    uStack_704 = local_5f8._12_4_;
    local_720 = local_608;
    local_718 = uStack_600;
                    /* try { // try from 0027742b to 002774e5 has its CatchHandler @ 002779d7 */
    cVar2 = _ZN5alloc6string95__LT_impl_u20_core__cmp__PartialEq_LT__RF_str_GT__u20_for_u20_alloc__borrow__Cow_LT_str_GT__GT_2eq17hbcba38ba17ba20b8E
                      (local_6c0,local_6b8);
    if (cVar2 == '\0') {
LAB_002774be:
      pcVar15 = (char *)0x0;
      if (local_340 == '\0') {
LAB_002774c5:
        (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E_0047f600)
                  (&local_608,local_6c0,local_6b8,pcVar15,lVar17);
      }
      else {
LAB_002774a9:
        (*(code *)PTR__ZN10uu_hashsum27create_algorithm_from_flags17h44fb2b955b3a7236E_0047f5f8)
                  (&local_608,&local_720);
      }
      uVar1 = local_5f8._0_8_;
      pcVar15 = uStack_600;
      lVar17 = local_608;
      auVar19._8_8_ = local_5f8._0_8_;
      auVar19._0_8_ = uStack_600;
      if (local_608 != 0) {
        local_698 = local_5f8._8_4_;
        uStack_694 = local_5f8._12_4_;
        uStack_690 = (undefined4)local_5e8;
        uStack_68c = local_5e8._4_4_;
        local_6b0 = local_608;
        local_6a8 = uStack_600;
        local_6a0 = local_5f8._0_8_;
                    /* try { // try from 00277534 to 002776b8 has its CatchHandler @ 002779e1 */
        cVar2 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                )(&local_720,"binary",6);
        if (cVar2 == '\0') {
          (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
          )(&local_720,"text",4);
        }
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                )(&local_720,"check",5);
        bVar4 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                )(&local_720,"status",6);
        bVar5 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                )(&local_720,"quiet",5);
        cVar6 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                )(&local_720,"strict",6);
        bVar7 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                )(&local_720,"warnZeroV",4);
        bVar8 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                )(&local_720,"ignore-missing",0xe);
        bVar5 = bVar5 | bVar4;
        if (bVar8 == 0) {
          if (cVar3 != '\0') goto LAB_00277626;
          if (cVar6 == '\0' && bVar5 == 0) {
                    /* try { // try from 002777ac to 0027781a has its CatchHandler @ 002779e1 */
            _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf2b443d784377908E
                      (&local_608,&local_720,"no-names",8);
            if ((int)local_608 != 2) {
              uStack_600 = (char *)0x0;
            }
            pcVar15 = "";
            if (uStack_600 != (char *)0x0) {
              pcVar15 = uStack_600;
            }
            cVar3 = *pcVar15;
            uVar11 = (*(code *)
                       PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                     )(&local_720,"zero",4);
            auVar18 = _ZN86__LT_alloc__boxed__Box_LT_F_C_A_GT__u20_as_u20_core__ops__function__Fn_LT_Args_GT__GT_4call17hdd8219fcd907cd8aE
                                (&local_6a0);
            uVar1 = CONCAT44(uStack_68c,uStack_690);
                    /* try { // try from 00277829 to 0027783f has its CatchHandler @ 00277991 */
            uVar12 = (*(code *)
                       PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                     )(&local_720,"tag",3);
                    /* try { // try from 00277840 to 00277881 has its CatchHandler @ 002779b3 */
            _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h3c3cf47d3b80e519E
                      (&local_608,&local_720,"fileEDOMmode",4);
            _ZN12clap_builder6parser5error12MatchesError6unwrap17h656dce67331d5fa4E
                      (local_338,"fileEDOMmode",4,&local_608);
            local_5e8 = uVar1;
            local_5f8 = auVar18;
            if (local_338[0] == 0) {
              uStack_5e0._0_2_ = CONCAT11(uVar12,cVar2);
              uStack_5e0._0_3_ = CONCAT12(cVar3,(undefined2)uStack_5e0);
              uStack_5e0 = CONCAT13(uVar11,(undefined3)uStack_5e0);
              auVar19 = _ZN10uu_hashsum7hashsum17h6a37e88fa19edaddE(&local_608);
            }
            else {
              uStack_5e0._0_2_ = CONCAT11(uVar12,cVar2);
              uStack_5e0._0_3_ = CONCAT12(cVar3,(undefined2)uStack_5e0);
              uStack_5e0 = CONCAT13(uVar11,(undefined3)uStack_5e0);
                    /* try { // try from 002778e2 to 0027795a has its CatchHandler @ 0027798f */
              auVar19 = _ZN10uu_hashsum7hashsum17h440870b73b1317faE(&local_608,local_338);
            }
                    /* try { // try from 00277971 to 00277975 has its CatchHandler @ 002779d7 */
            _ZN4core3ptr40drop_in_place_LT_uu_hashsum__Options_GT_17h786198480f8a4310E
                      (local_6a0,CONCAT44(uStack_694,local_698));
                    /* try { // try from 00277976 to 0027797f has its CatchHandler @ 002779dc */
            _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h839c649016960889E
                      (&local_720);
                    /* try { // try from 00277980 to 00277989 has its CatchHandler @ 00277a0f */
            _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h8c0f4ce039b6cae5E
                      (local_6c8);
            goto LAB_0027778a;
          }
          bVar16 = bVar5 | 2;
LAB_00277751:
          uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hdfd64d504f612c9eE(bVar16);
          auVar19._8_8_ = &DAT_0043b9d0;
          auVar19._0_8_ = uVar14;
        }
        else {
          bVar16 = 1;
          if (cVar3 == '\0') goto LAB_00277751;
LAB_00277626:
          bVar9 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                  )(&local_720,"text",4);
          bVar10 = (*(code *)
                     PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0047f608
                   )(&local_720,"binary",6);
          bVar16 = 0xb;
          if ((bVar9 | bVar10) == 1) goto LAB_00277751;
          _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h3c3cf47d3b80e519E
                    (&local_608,&local_720,"fileEDOMmode",4);
          _ZN12clap_builder6parser5error12MatchesError6unwrap17h656dce67331d5fa4E
                    (&local_678,"fileEDOMmode",4,&local_608);
          _ZN4core6option15Option_LT_T_GT_11map_or_else17he38e8e5edddfdc58E(&local_608,&local_678);
                    /* try { // try from 00277717 to 0027772d has its CatchHandler @ 002779a1 */
          auVar19 = _ZN6uucore8features8checksum27perform_checksum_validation17h2e1552b39f9ed5c0E
                              (uStack_600,uStack_600 + local_5f8._0_8_ * 0x10,lVar17,pcVar15,1,
                               CONCAT44(uStack_68c,uStack_690),
                               (ulong)CONCAT15(bVar7 & (bVar4 ^ 1),
                                               CONCAT14(cVar6,(uint)bVar4 << 0x18 |
                                                              (uint)bVar5 << 0x10)) |
                               (ulong)bVar8 << 8);
                    /* try { // try from 0027772e to 00277758 has its CatchHandler @ 002779e1 */
          _ZN4core3ptr71drop_in_place_LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h293673efeeb2dedbE
                    (&local_608);
        }
                    /* try { // try from 0027776b to 00277772 has its CatchHandler @ 002779d7 */
        _ZN4core3ptr40drop_in_place_LT_uu_hashsum__Options_GT_17h786198480f8a4310E
                  (uVar1,CONCAT44(uStack_694,local_698));
      }
    }
    else {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb563847c130c951dE
                (&local_608,&local_720,"length",6);
      puVar13 = (undefined8 *)
                _ZN12clap_builder6parser5error12MatchesError6unwrap17hf231815055423523E
                          ("length",6,&local_608);
      if (puVar13 == (undefined8 *)0x0) goto LAB_002774be;
      (*(code *)
        PTR__ZN6uucore8features8checksum24calculate_blake2b_length17h2a821e36733dba3aE_0047f5f0)
                (&local_608,*puVar13);
      auVar19._8_8_ = local_5f8._0_8_;
      auVar19._0_8_ = uStack_600;
      if (local_608 == 0) {
        pcVar15 = uStack_600;
        lVar17 = local_5f8._0_8_;
        if (local_340 == '\0') goto LAB_002774c5;
        goto LAB_002774a9;
      }
    }
                    /* try { // try from 00277776 to 0027777f has its CatchHandler @ 002779dc */
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h839c649016960889E
              (&local_720);
  }
                    /* try { // try from 00277780 to 00277789 has its CatchHandler @ 00277a0f */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h8c0f4ce039b6cae5E(local_6c8);
LAB_0027778a:
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc3260fd7b72cdc76E(&local_6e8);
  return auVar19;
}