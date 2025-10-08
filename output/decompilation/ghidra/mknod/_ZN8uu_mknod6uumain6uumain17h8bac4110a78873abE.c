undefined8 _ZN8uu_mknod6uumain6uumain17h8bac4110a78873abE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  uint uVar10;
  undefined4 local_368;
  undefined4 uStack_364;
  uint uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 local_328;
  undefined4 uStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  ulong local_310;
  long local_308;
  uint local_300;
  byte local_2fc;
  undefined local_2f8 [16];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  
  (*(code *)PTR__ZN8uu_mknod6uu_app17hee70adc3caf76ce8E_001ea668)(local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h289aca8891c7068eE
            (&local_368,local_2f8,param_1,param_2);
  local_2c8 = local_338;
  local_2d8 = local_348;
  uStack_2d4 = uStack_344;
  uStack_2d0 = uStack_340;
  uStack_2cc = uStack_33c;
  local_2e8 = (undefined4)local_358;
  uStack_2e4 = local_358._4_4_;
  uStack_2e0 = uStack_350;
  uStack_2dc = uStack_34c;
                    /* try { // try from 001555c3 to 001557e0 has its CatchHandler @ 001558af */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h38284f151a0a499aE
            (&local_368,local_2f8);
  pbVar4 = (byte *)_ZN12clap_builder6parser5error12MatchesError6unwrap17h9155c14b9f8116eaE
                             (&local_368);
  if (pbVar4 == (byte *)0x0) {
                    /* try { // try from 00155885 to 001558ac has its CatchHandler @ 001558af */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ea698)
              (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001e32c8);
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h25662513e2f00d8fE
              (&local_368,local_2f8,"mode",4);
    uVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h2b5599b1a5538d8cE
                      ("mode",4,&local_368);
    (*(code *)PTR__ZN8uu_mknod8get_mode17h084d65bfd1ad9130E_001ea678)(&local_328,uVar5);
    if (CONCAT44(uStack_324,local_328) != -0x8000000000000000) {
      local_358 = local_318;
      local_368 = local_328;
      uStack_364 = uStack_324;
      uStack_360 = uStack_320;
      uStack_35c = uStack_31c;
      uStack_350 = 1;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h578be4e3f767067eE(&local_368);
      goto LAB_001557eb;
    }
    uVar10 = uStack_320 | *(uint *)(&DAT_00118c10 + (ulong)*pbVar4 * 4);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h25662513e2f00d8fE
              (&local_368,local_2f8,&DAT_00117aa0,4);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h2b5599b1a5538d8cE
                      (&DAT_00117aa0,4,&local_368);
    if (lVar6 != 0) {
      bVar2 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ea680
              )(local_2f8,"z",1);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h25662513e2f00d8fE
                (&local_368,local_2f8,"context");
      lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h2b5599b1a5538d8cE
                        ("context",7,&local_368);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hbd78f7399cdddd97E
                (&local_368,local_2f8,"major");
      puVar8 = (undefined8 *)
               _ZN12clap_builder6parser5error12MatchesError6unwrap17hedcac43209d69138E
                         ("major",&local_368);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hbd78f7399cdddd97E
                (&local_368,local_2f8,"minorError flushing stdout: ");
      puVar9 = (ulong *)_ZN12clap_builder6parser5error12MatchesError6unwrap17hedcac43209d69138E
                                  ("minorError flushing stdout: ",&local_368);
      if (*pbVar4 == 2) {
        if (puVar8 != (undefined8 *)0x0 || puVar9 != (ulong *)0x0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd50611e5f037eb86E
                    (&local_328,"Fifos do not have major and minor device numbers.",0x31);
          local_358 = local_318;
          local_368 = local_328;
          uStack_364 = uStack_324;
          uStack_360 = uStack_320;
          uStack_35c = uStack_31c;
          uStack_350 = 1;
          uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h578be4e3f767067eE(&local_368);
LAB_001557eb:
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he060d05a78b6eee0E
                    (local_2f8);
          return uVar5;
        }
        local_310 = 0;
      }
      else {
        if (puVar8 == (undefined8 *)0x0 || puVar9 == (ulong *)0x0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd50611e5f037eb86E
                    (&local_328,"Special files require major and minor device numbers.",0x35);
          local_358 = local_318;
          local_368 = local_328;
          uStack_364 = uStack_324;
          uStack_360 = uStack_320;
          uStack_35c = uStack_31c;
          uStack_350 = 1;
          uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h578be4e3f767067eE(&local_368);
          goto LAB_001557eb;
        }
        local_310 = (ulong)((uint)*puVar8 & 0xfffff000) << 0x20 |
                    (ulong)(((uint)*puVar8 & 0xfff) << 8) | *puVar9 & 0xff |
                    (*puVar9 & 0xfffffffffff00) << 0xc;
      }
      local_2fc = bVar2 | lVar7 != 0;
                    /* try { // try from 00155854 to 00155866 has its CatchHandler @ 001558af */
      local_308 = lVar7;
      local_300 = uVar10;
      uVar3 = (*(code *)PTR__ZN8uu_mknod5mknod17hdf9c77b8560e7a8dE_001ea688)
                        (*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),&local_310);
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ea690)(uVar3);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he060d05a78b6eee0E
                (local_2f8);
      return 0;
    }
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_001ea560)
              ("Missing argument \'NAME\'",0x17,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001e3368);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}