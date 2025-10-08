undefined  [16]
_ZN8uu_chmod6uumain6uumain17hef7bd93be3cedfc8E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined auVar16 [16];
  undefined **local_6f8;
  uint local_6ec;
  undefined **local_6e8;
  undefined **local_6e0;
  undefined **local_6d8;
  undefined **local_6d0;
  undefined **local_6c8;
  undefined8 uStack_6c0;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 local_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined8 local_6a0;
  undefined **local_698;
  undefined **local_690;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 local_668;
  undefined **local_660;
  undefined4 local_658;
  uint uStack_654;
  undefined4 uStack_650;
  uint uStack_64c;
  undefined8 local_648;
  long *local_640;
  undefined *local_638;
  long *local_630;
  undefined *local_628;
  undefined local_620 [16];
  undefined **local_610;
  undefined **local_608;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined4 local_5f0;
  uint uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined8 local_5e0;
  uint local_5d0;
  long local_338 [8];
  undefined **local_2f8;
  undefined **ppuStack_2f0;
  undefined8 **local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  
  _ZN4core4iter6traits8iterator8Iterator4skip17h70fc60295b7e572eE(&local_2f8,param_1,param_2);
  _ZN8uu_chmod22extract_negative_modes17h96e49cec7b4bfb40E(&local_608,&local_2f8);
  ppuVar14 = ppuStack_5f8;
  ppuVar4 = ppuStack_600;
  ppuVar3 = local_608;
  local_658 = local_5f0;
  uStack_654 = uStack_5ec;
  uStack_650 = uStack_5e8;
  uStack_64c = uStack_5e4;
  local_648 = local_5e0;
                    /* try { // try from 00159caf to 00159cd1 has its CatchHandler @ 0015a31c */
  (*(code *)PTR__ZN8uu_chmod6uu_app17h525988f9a6fd06f1E_001f25a8)(&local_608);
  _ZN12clap_builder7builder7command7Command10after_help17h3be6003b57cde48eE(&local_2f8,&local_608);
                    /* try { // try from 00159cd5 to 00159d10 has its CatchHandler @ 0015a30d */
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17ha23daf28cee5362aE
            (&local_6d0,&local_2f8,&local_658);
  if (local_6d0 == (undefined **)0x8000000000000000) {
    auVar16 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17he92a37de32738e67E_001f25b0
              )();
    bVar2 = true;
    goto LAB_0015a26b;
  }
  local_668 = local_6a0;
  local_678 = local_6b0;
  uStack_674 = uStack_6ac;
  uStack_670 = uStack_6a8;
  uStack_66c = uStack_6a4;
  local_688 = (undefined4)uStack_6c0;
  uStack_684 = uStack_6c0._4_4_;
  uStack_680 = uStack_6b8;
  uStack_67c = uStack_6b4;
  local_698 = local_6d0;
  local_690 = local_6c8;
                    /* try { // try from 00159d56 to 00159e23 has its CatchHandler @ 0015a33b */
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f25b8
          )(&local_698,&DAT_0011913c,7);
  uVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f25b8
          )(&local_698,&DAT_00119143,5);
  uVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f25b8
          )(&local_698,&DAT_00119148,7);
  uVar8 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f25b8
          )(&local_698,&DAT_0011914f,0xd);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hc19b6dc66c36ae9bE
            (&local_608,&local_698,&DAT_0011915c,5);
  lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hfca8d90b4030ba09E
                    (&DAT_0011915c,5,&local_608);
  if (lVar9 == 0) {
    uVar12 = 0;
LAB_00159f57:
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hc19b6dc66c36ae9bE
              (&local_608,&local_698,&DAT_001186f0,4);
    lVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hfca8d90b4030ba09E
                       (&DAT_001186f0,4,&local_608);
    if (ppuVar3 == (undefined **)0x8000000000000000) {
      if (lVar11 == 0) {
                    /* try { // try from 0015a2a2 to 0015a2ae has its CatchHandler @ 0015a33b */
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f2578)
                  (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001eaec0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      bVar2 = true;
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001f2558
      )(&local_6e8,lVar11);
    }
    else {
      local_6e8 = ppuVar3;
      local_6e0 = ppuVar4;
      local_6d8 = ppuVar14;
      bVar2 = false;
    }
                    /* try { // try from 00159fce to 0015a021 has its CatchHandler @ 0015a2f9 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h91e7d2de63cdf48cE
              (&local_608,&local_698);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h3769cce72ca152adE(local_338,&local_608);
    if (local_338[0] == 0) {
LAB_0015a04d:
      local_6d0 = (undefined **)0x0;
      local_6c8 = (undefined **)0x8;
      uStack_6c0 = (undefined **)0x0;
      if (lVar9 != 0) goto LAB_0015a071;
LAB_0015a1c1:
      local_660 = local_6d8;
      ppuVar14 = local_6e8;
      ppuVar15 = local_6e0;
      if (uStack_6c0 == (undefined **)0x0) goto LAB_0015a1e4;
LAB_0015a096:
                    /* try { // try from 0015a096 to 0015a0b3 has its CatchHandler @ 0015a2df */
      (*(code *)
        PTR__ZN6uucore8features5perms31configure_symlink_and_recursion17h81a2ef7d5fd462f3E_001f25d0)
                (&local_608,&local_698,1);
      ppuVar10 = local_608;
      ppuVar13 = ppuStack_600;
      if (local_608 == (undefined **)0x0) {
        uStack_5e8 = CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
        uStack_5e4 = CONCAT31(uStack_5e4._1_3_,(char)ppuStack_600) & 0xffffff01;
        uStack_5ec = local_6ec;
        ppuStack_5f8 = local_660;
        uStack_5e4 = CONCAT22(CONCAT11(uStack_5e4._3_1_,(char)((ulong)ppuStack_600 >> 0x10)),
                              CONCAT11((char)((ulong)ppuStack_600 >> 8),(undefined)uStack_5e4)) &
                     0xffff01ff;
                    /* try { // try from 0015a161 to 0015a16e has its CatchHandler @ 0015a2b1 */
        local_608 = ppuVar14;
        ppuStack_600 = ppuVar15;
        local_5f0 = uVar12;
        auVar16 = (*(code *)PTR__ZN8uu_chmod7Chmoder5chmod17h92b1b878e45c814bE_001f25d8)
                            (&local_608,local_6c8,uStack_6c0);
        _ZN4core3ptr38drop_in_place_LT_uu_chmod__Chmoder_GT_17h9a8c25ae47d3201aE(ppuVar14,ppuVar15);
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hb50aa0d76f7479ceE
                  (&local_6d0);
                    /* try { // try from 0015a18a to 0015a1a0 has its CatchHandler @ 0015a30d */
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6be49d4609519a46E
                  (&local_698);
        goto LAB_0015a26b;
      }
    }
    else {
      _ZN4core4iter6traits8iterator8Iterator7collect17h67f57125fe10790eE(&local_608,local_338);
      local_6d0 = local_608;
      local_2f8 = ppuStack_600;
      ppuStack_2f0 = ppuStack_5f8;
      if (local_608 == (undefined **)0x8000000000000000) goto LAB_0015a04d;
      local_6c8 = ppuStack_600;
      uStack_6c0 = ppuStack_5f8;
      if (lVar9 == 0) goto LAB_0015a1c1;
LAB_0015a071:
                    /* try { // try from 0015a071 to 0015a07f has its CatchHandler @ 0015a2c1 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h609dc871f7b5f155E(&local_6d0,&local_6e8);
      ppuVar14 = (undefined **)0x8000000000000000;
      ppuVar15 = ppuVar3;
      if (uStack_6c0 != (undefined **)0x0) goto LAB_0015a096;
LAB_0015a1e4:
                    /* try { // try from 0015a1e4 to 0015a234 has its CatchHandler @ 0015a2df */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc4e0d8744d3033c6E
                (&local_2f8,&DAT_001190e6,0xf);
      ppuStack_5f8 = (undefined **)local_2e8;
      local_608 = local_2f8;
      ppuStack_600 = ppuStack_2f0;
      local_5f0 = 1;
      ppuVar10 = (undefined **)_ZN5alloc5boxed12Box_LT_T_GT_3new17hbd41a17ca83e26c9E(&local_608);
      ppuVar13 = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hb54113a54bd9854eE_001eaf10
      ;
    }
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hce9e210c09021944E
              (ppuVar14,ppuVar15);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hb50aa0d76f7479ceE
              (&local_6d0);
  }
  else {
    _ZN3std2fs8metadata17ha3c89610aafdf953E(&local_608,lVar9);
    if ((int)local_608 != 2) {
      local_6ec = local_5d0 & 0xfff;
      uVar12 = 1;
      goto LAB_00159f57;
    }
    local_6f8 = ppuStack_600;
    local_6c8 = *(undefined ***)(lVar9 + 8);
    uStack_6c0 = *(undefined ***)(lVar9 + 0x10);
    local_6d0 = (undefined **)0x0;
    uStack_6b8 = CONCAT31(uStack_6b8._1_3_,1);
    local_638 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
    ;
    local_630 = (long *)&local_6f8;
    local_628 = 
    PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001f25c8
    ;
    local_2f8 = &PTR_DAT_001eaea0;
    ppuStack_2f0 = (undefined **)0x2;
    local_2d8 = 0;
    local_2e8 = &local_640;
    local_2e0 = 2;
                    /* try { // try from 00159ed5 to 00159f21 has its CatchHandler @ 0015a2c6 */
    local_640 = (long *)&local_6d0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hda764680417bbb7bE(local_620,&local_2f8);
    local_2e0 = CONCAT44(local_2e0._4_4_,1);
    local_2e8 = (undefined8 **)local_610;
    ppuVar10 = (undefined **)_ZN5alloc5boxed12Box_LT_T_GT_3new17hbd41a17ca83e26c9E(&local_2f8);
                    /* try { // try from 00159f2a to 00159fb9 has its CatchHandler @ 0015a33b */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17he50a073861594a25E(local_6f8);
    ppuVar13 = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hb54113a54bd9854eE_001eaf98
    ;
    bVar2 = true;
  }
                    /* try { // try from 0015a25e to 0015a26a has its CatchHandler @ 0015a30d */
  auVar16._8_8_ = ppuVar13;
  auVar16._0_8_ = ppuVar10;
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6be49d4609519a46E
            (&local_698);
LAB_0015a26b:
  if ((ppuVar3 != (undefined **)0x8000000000000000) && (bVar2)) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h617eeb25d6483ba4E(ppuVar3,ppuVar4);
  }
  return auVar16;
}