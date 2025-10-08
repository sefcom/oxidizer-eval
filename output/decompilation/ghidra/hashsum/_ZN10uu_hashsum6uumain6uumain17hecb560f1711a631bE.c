undefined  [16]
_ZN10uu_hashsum6uumain6uumain17hecb560f1711a631bE(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined uVar14;
  undefined uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  char *pcVar19;
  undefined8 uVar20;
  byte bVar21;
  char *pcVar22;
  long unaff_R12;
  undefined auVar23 [16];
  ulong local_6d8;
  char *local_6d0;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  long local_668;
  undefined local_630 [40];
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
  
  local_6a0 = param_1;
  local_698 = param_2;
  _ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6809b91796b50035E
            (&local_678,&local_6a0);
  uVar2 = CONCAT44(uStack_674,local_678);
  uVar3 = CONCAT44(uStack_66c,uStack_670);
                    /* try { // try from 00176a83 to 00176abd has its CatchHandler @ 0017714e */
  auVar23 = (*(code *)PTR__ZN3std4path4Path9file_stem17hc69c2d2c61933548E_0025ac00)(uVar3,local_668)
  ;
  uVar20 = auVar23._8_8_;
  pcVar19 = auVar23._0_8_;
  if (pcVar19 == (char *)0x0) {
    uVar20 = 7;
  }
  pcVar22 = "hashsum";
  if (pcVar19 != (char *)0x0) {
    pcVar22 = pcVar19;
  }
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0025ac08)
            (&local_690,pcVar22,uVar20);
                    /* try { // try from 00176abe to 00176ad0 has its CatchHandler @ 00177142 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h24ad0c64921854a8E
            (&local_608,uVar3,local_668);
  local_668 = local_5f8._0_8_;
  local_678 = (int)local_608;
  uStack_674 = local_608._4_4_;
  uStack_670 = (undefined4)uStack_600;
  uStack_66c = uStack_600._4_4_;
  _ZN4core4iter6traits8iterator8Iterator5chain17h3bf3d42a328ca9e8E
            (local_630,&local_678,local_6a0,local_698);
                    /* try { // try from 00176b23 to 00176b36 has its CatchHandler @ 00177128 */
  (*(code *)PTR__ZN10uu_hashsum6uu_app17hd115e3ccac06eb0bE_0025ac10)(&local_608,local_688,local_680)
  ;
  (*(code *)PTR_memcpy_0025ac18)(local_2f8,&local_608,0x2c8);
                    /* try { // try from 00176b5e to 00176b9a has its CatchHandler @ 00177149 */
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h2477954b5349bfdfE
            (&local_608,local_2f8,local_630);
  if (local_608 == 0x8000000000000000) {
    auVar23 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17he92a37de32738e67E_0025ac20
              )();
    goto LAB_00176edd;
  }
  local_6a8 = local_5d8;
  local_6b8 = (undefined4)local_5e8;
  uStack_6b4 = local_5e8._4_4_;
  uStack_6b0 = uStack_5e0;
  uStack_6ac = uStack_5dc;
  local_6c8 = local_5f8._0_4_;
  uStack_6c4 = local_5f8._4_4_;
  uStack_6c0 = local_5f8._8_4_;
  uStack_6bc = local_5f8._12_4_;
  local_6d8 = local_608;
  local_6d0 = uStack_600;
  cVar5 = _ZN5alloc6string95__LT_impl_u20_core__cmp__PartialEq_LT__RF_str_GT__u20_for_u20_alloc__borrow__Cow_LT_str_GT__GT_2eq17hd1cc9c84389cf4adE
                    (local_688,local_680);
  if (cVar5 == '\0') {
LAB_00176c53:
    pcVar19 = (char *)0x0;
    if (local_340 == '\0') {
LAB_00176c5b:
      (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0025ac38)
                (&local_608,local_688,local_680,pcVar19,unaff_R12);
    }
    else {
LAB_00176c3e:
      (*(code *)PTR__ZN10uu_hashsum27create_algorithm_from_flags17h1839fc02dfbf2f14E_0025ac30)
                (&local_608,&local_6d8);
    }
    uVar17 = local_5f8._8_8_;
    uVar20 = local_5f8._0_8_;
    pcVar19 = uStack_600;
    uVar4 = local_608;
    auVar23._8_8_ = local_5f8._0_8_;
    auVar23._0_8_ = uStack_600;
    if (local_608 != 0) {
                    /* try { // try from 00176cb5 to 00176e20 has its CatchHandler @ 00177153 */
      cVar5 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
              )(&local_6d8,"binary",6);
      if (cVar5 == '\0') {
        (*(code *)
          PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
        )(&local_6d8,&DAT_00111d48,4);
      }
      cVar6 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
              )(&local_6d8,&DAT_00111dd4,5);
      bVar7 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
              )(&local_6d8,&DAT_00111dd9,6);
      bVar8 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
              )(&local_6d8,&DAT_00111ddf,5);
      bVar9 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
              )(&local_6d8,&DAT_00111de4,6);
      bVar10 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
               )(&local_6d8,&DAT_00111cec,4);
      bVar11 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
               )(&local_6d8,&DAT_00111dea,0xe);
      bVar8 = bVar8 | bVar7;
      if (bVar11 == 0) {
        if (cVar6 != '\0') goto LAB_00176da8;
        if (bVar9 == 0 && bVar8 == 0) {
                    /* try { // try from 00176f17 to 00176f7b has its CatchHandler @ 00177153 */
          _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h60048b160616f56cE
                    (&local_608,&local_6d8);
          if ((int)local_608 != 2) {
            uStack_600 = (char *)0x0;
          }
          pcVar19 = "";
          if (uStack_600 != (char *)0x0) {
            pcVar19 = uStack_600;
          }
          cVar6 = *pcVar19;
          uVar14 = (*(code *)
                     PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
                   )(&local_6d8,&DAT_00111d78,4);
          auVar23 = (**(code **)(local_5f8._8_8_ + 0x28))(uVar20);
                    /* try { // try from 00176f7c to 00176f95 has its CatchHandler @ 001770ef */
          uVar15 = (*(code *)
                     PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
                   )(&local_6d8,"tag",3);
                    /* try { // try from 00176f96 to 00176fbe has its CatchHandler @ 00177116 */
          _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h3bf65901b64431ccE
                    (&local_608,&local_6d8);
          _ZN12clap_builder6parser5error12MatchesError6unwrap17h844fa1597afcc0f3E
                    (local_338,&local_608);
          local_5f8 = auVar23;
          if (local_338[0] == 0) {
            uStack_5e0._0_2_ = CONCAT11(uVar15,cVar5);
            uStack_5e0._0_3_ = CONCAT12(cVar6,(undefined2)uStack_5e0);
            uStack_5e0 = CONCAT13(uVar14,(undefined3)uStack_5e0);
            auVar23 = _ZN10uu_hashsum7hashsum17h4817e91e428ae9c2E(&local_608);
          }
          else {
            uStack_5e0._0_2_ = CONCAT11(uVar15,cVar5);
            uStack_5e0._0_3_ = CONCAT12(cVar6,(undefined2)uStack_5e0);
            uStack_5e0 = CONCAT13(uVar14,(undefined3)uStack_5e0);
                    /* try { // try from 00177029 to 001770ab has its CatchHandler @ 001770ed */
            auVar23 = _ZN10uu_hashsum7hashsum17ha460cf47583be7f8E(&local_608,local_338);
          }
                    /* try { // try from 001770b2 to 001770be has its CatchHandler @ 00177144 */
          _ZN4core3ptr40drop_in_place_LT_uu_hashsum__Options_GT_17h43498a49004cb0efE(uVar20,uVar17);
                    /* try { // try from 001770bf to 001770c8 has its CatchHandler @ 00177149 */
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h638b7599765dd6a7E
                    (&local_6d8);
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h057b5ef728678ee6E
                    (local_690,local_688);
          _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hbb2cfa0fbf9d6d2cE
                    (uVar2,uVar3);
          return auVar23;
        }
        bVar21 = bVar8 | 2;
LAB_00176eb1:
                    /* try { // try from 00176eb1 to 00176eb8 has its CatchHandler @ 00177153 */
        uVar17 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h737a891a790d792dE(bVar21);
        auVar23._8_8_ = &DAT_00250430;
        auVar23._0_8_ = uVar17;
      }
      else {
        bVar21 = 1;
        if (cVar6 == '\0') goto LAB_00176eb1;
LAB_00176da8:
        bVar12 = (*(code *)
                   PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
                 )(&local_6d8,&DAT_00111d48,4);
        bVar13 = (*(code *)
                   PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0025ac40
                 )(&local_6d8,"binary",6);
        bVar21 = 0xb;
        if ((bVar12 | bVar13) == 1) goto LAB_00176eb1;
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h3bf65901b64431ccE
                  (&local_608,&local_6d8);
        _ZN12clap_builder6parser5error12MatchesError6unwrap17h844fa1597afcc0f3E
                  (&local_678,&local_608);
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hd2bbec04d9e613aeE(&local_608,&local_678);
        uVar18 = 0x1000000;
        if (bVar8 == 0) {
          uVar18 = (bVar10 & (bVar7 ^ 1) | 2) << 0x18;
        }
        uVar1 = 0;
        if (bVar7 == 0) {
          uVar1 = uVar18;
        }
                    /* try { // try from 00176e77 to 00176e8b has its CatchHandler @ 00177101 */
        auVar23 = _ZN6uucore8features8checksum27perform_checksum_validation17hdca86bf9f51b5f06E
                            (uStack_600,uStack_600 + local_5f8._0_8_ * 0x10,uVar4,pcVar19,local_5e8,
                             (uint)bVar11 << 8 | (uint)bVar9 << 0x10 | uVar1);
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17h9116bb9b09c5e2b0E
                  (local_608,uStack_600);
      }
                    /* try { // try from 00176ec3 to 00176ecf has its CatchHandler @ 00177144 */
      _ZN4core3ptr40drop_in_place_LT_uu_hashsum__Options_GT_17h43498a49004cb0efE
                (uVar20,local_5f8._8_8_);
    }
  }
  else {
                    /* try { // try from 00176be6 to 00176c74 has its CatchHandler @ 00177144 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0c80e907b5f15bf5E
              (&local_608,&local_6d8);
    puVar16 = (undefined8 *)
              _ZN12clap_builder6parser5error12MatchesError6unwrap17h81d2f4b559f3983cE(&local_608);
    if (puVar16 == (undefined8 *)0x0) goto LAB_00176c53;
    (*(code *)
      PTR__ZN6uucore8features8checksum24calculate_blake2b_length17hd9514fcefba150b6E_0025ac28)
              (&local_608,*puVar16);
    auVar23._8_8_ = local_5f8._0_8_;
    auVar23._0_8_ = uStack_600;
    if ((local_608 & 1) == 0) {
      unaff_R12 = local_5f8._0_8_;
      pcVar19 = uStack_600;
      if (local_340 == '\0') goto LAB_00176c5b;
      goto LAB_00176c3e;
    }
  }
                    /* try { // try from 00176ed3 to 00176edc has its CatchHandler @ 00177149 */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h638b7599765dd6a7E
            (&local_6d8);
LAB_00176edd:
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h057b5ef728678ee6E
            (local_690,local_688);
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hbb2cfa0fbf9d6d2cE(uVar2,uVar3);
  return auVar23;
}