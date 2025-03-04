undefined  [16] _ZN5uu_rm6uumain6uumain17hf95a78dc694ae2bcE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char **ppcVar2;
  code *pcVar3;
  bool bVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  char cVar7;
  char cVar8;
  undefined uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined uVar16;
  char *pcVar17;
  undefined auVar18 [16];
  char local_6b7;
  undefined local_6b6;
  byte local_6b5;
  byte local_6b4;
  undefined local_6b3;
  undefined local_6b2;
  undefined local_6b1;
  char *local_6b0;
  char **local_6a8;
  code *pcStack_6a0;
  code *local_698;
  char *local_690;
  code *local_688;
  char *local_680;
  char **local_678;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  char *local_608;
  long local_600;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  char *local_5e8;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  code *local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  char **local_5b8;
  code *pcStack_5b0;
  char **local_5a8;
  undefined8 uStack_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined local_2f8 [8];
  undefined8 uStack_2f0;
  char *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR__ZN5uu_rm6uu_app17h97a746416a9c921dE_0022b708)(&local_5c8);
  _ZN12clap_builder7builder7command7Command10after_help17heec11f6db452ec9fE
            (local_2f8,&local_5c8,
             "By default, rm does not remove directories.  Use the --recursive (-r or -R)\noption to remove each listed directory, too, along with all of its contents\n\nTo remove a file whose name starts with a \'-\', for example \'-foo\',\nuse one of these commands:\nrm -- -foo\n\nrm ./-foo\n\nNote that if you use rm to remove a file, it might be possible to recover\nsome of its contents, given sufficient expertise and/or time.  For greater\nassurance that the contents are truly unrecoverable, consider using shred."
             ,0x1ed);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h239bec038243f8ceE
            (&local_648,local_2f8,param_1,param_2);
  if (local_648 == (char *)0x8000000000000000) {
    auVar18 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0022b710
              )();
    return auVar18;
  }
  local_650 = local_618;
  local_660 = local_628;
  uStack_65c = uStack_624;
  uStack_658 = uStack_620;
  uStack_654 = uStack_61c;
  local_670 = (undefined4)uStack_638;
  uStack_66c = uStack_638._4_4_;
  uStack_668 = uStack_630;
  uStack_664 = uStack_62c;
  local_680 = local_648;
  local_678 = uStack_640;
  uVar14 = *(undefined8 *)PTR__ZN5uu_rm9ARG_FILES17h35e3057406df6949E_0022b718;
  uVar1 = *(undefined8 *)(PTR__ZN5uu_rm9ARG_FILES17h35e3057406df6949E_0022b718 + 8);
                    /* try { // try from 0016ac73 to 0016ad05 has its CatchHandler @ 0016b50d */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h6d89796f344d6206E
            (&local_5c8,&local_680,uVar14,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hfbcb534b23b8c82fE
            (local_2f8,uVar14,uVar1,&local_5c8);
  if (local_2f8 == (undefined  [8])0x0) {
LAB_0016ad1d:
    local_6b0 = (char *)0x0;
    local_6a8 = (char **)&DAT_00000008;
    pcStack_6a0 = (code *)0x0;
  }
  else {
    local_598 = local_2c8;
    uStack_594 = uStack_2c4;
    uStack_590 = uStack_2c0;
    uStack_58c = uStack_2bc;
    local_5a8 = (char **)local_2d8;
    uStack_5a0 = (code *)CONCAT44(uStack_2cc,uStack_2d0);
    local_5b8 = (char **)local_2e8;
    pcStack_5b0 = (code *)uStack_2e0;
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h1005162becd2ac1aE
              (&local_648,&local_5c8);
    local_5c8 = uStack_640;
    uStack_5c0 = uStack_638;
    if (local_648 == (char *)0x8000000000000000) goto LAB_0016ad1d;
    local_6a8 = uStack_640;
    pcStack_6a0 = uStack_638;
    local_6b0 = local_648;
  }
  uVar14 = *(undefined8 *)PTR__ZN5uu_rm9OPT_FORCE17h07424e5b5980cadeE_0022b720;
  uVar1 = *(undefined8 *)(PTR__ZN5uu_rm9OPT_FORCE17h07424e5b5980cadeE_0022b720 + 8);
                    /* try { // try from 0016ad5a to 0016b22a has its CatchHandler @ 0016b512 */
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022b728
          )(&local_680,uVar14,uVar1);
  if (cVar7 == '\0') {
    if (pcStack_6a0 == (code *)0x0) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hb1cbe84a292ced29E
                (local_2f8);
      local_5b8 = (char **)local_2e8;
      local_5c8 = (undefined **)local_2f8;
      uStack_5c0 = uStack_2f0;
      pcStack_5b0 = (code *)CONCAT44(pcStack_5b0._4_4_,1);
      uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd2f8f845018abeb1E(&local_5c8);
      auVar18._8_8_ =
           &
           PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h2ef57c0ef3549e14E_00224fc0
      ;
      auVar18._0_8_ = uVar14;
      goto LAB_0016b3da;
    }
LAB_0016ae1e:
    cVar8 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022b728
            )(&local_680,*(undefined8 *)PTR__ZN5uu_rm10OPT_PROMPT17h029e017bbb1d4e3cE_0022b738,
              *(undefined8 *)(PTR__ZN5uu_rm10OPT_PROMPT17h029e017bbb1d4e3cE_0022b738 + 8));
    if (cVar8 == '\0') {
      cVar8 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022b728
              )(&local_680,
                *(undefined8 *)PTR__ZN5uu_rm15OPT_PROMPT_MORE17hc269a16929953b44E_0022b740,
                *(undefined8 *)(PTR__ZN5uu_rm15OPT_PROMPT_MORE17hc269a16929953b44E_0022b740 + 8));
      bVar4 = true;
      uVar16 = 1;
      if (cVar8 == '\0') {
        uVar14 = *(undefined8 *)PTR__ZN5uu_rm15OPT_INTERACTIVE17hdb1fad32ed4f9e1eE_0022b748;
        uVar1 = *(undefined8 *)(PTR__ZN5uu_rm15OPT_INTERACTIVE17hdb1fad32ed4f9e1eE_0022b748 + 8);
        cVar8 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_0022b750
                )(&local_680,uVar14,uVar1);
        if (cVar8 == '\0') {
          uVar16 = 3;
          bVar4 = false;
        }
        else {
          _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17ha126cde0a0efcd6fE
                    (&local_5c8,&local_680,uVar14,uVar1);
          lVar13 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hcd0b6e29cbee9ee2E
                             (uVar14,uVar1,&local_5c8);
          if (lVar13 == 0) {
                    /* try { // try from 0016b4dd to 0016b4e9 has its CatchHandler @ 0016b512 */
            (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_0022b7c0)
                      (&PTR_DAT_00225030);
            goto LAB_0016b4ea;
          }
          pcVar17 = *(char **)(lVar13 + 8);
          ppcVar2 = *(char ***)(lVar13 + 0x10);
          cVar8 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc6df80652f5a42a6E
                            (pcVar17,ppcVar2,&DAT_001153cf,5);
          bVar4 = false;
          uVar16 = 0;
          if (cVar8 == '\0') {
            cVar8 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc6df80652f5a42a6E
                              (pcVar17,ppcVar2,&DAT_0011547c,4);
            bVar4 = true;
            uVar16 = 1;
            if (cVar8 == '\0') {
              cVar8 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc6df80652f5a42a6E
                                (pcVar17,ppcVar2,"always",6);
              if (cVar8 == '\0') {
                local_2f8 = (undefined  [8])&local_648;
                uStack_2f0 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7a410b5575987dd7E;
                local_5c8 = &PTR_s_Invalid_argument_to_interactive___00224f40;
                uStack_5c0 = (code *)0x2;
                local_5a8 = (char **)0x0;
                pcStack_5b0 = (code *)0x1;
                local_648 = pcVar17;
                uStack_640 = ppcVar2;
                local_5b8 = (char **)local_2f8;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17hd9d607212dba1a42E
                          (&local_5f8,&local_5c8);
                pcStack_5b0 = (code *)CONCAT44(pcStack_5b0._4_4_,1);
                local_5c8 = (undefined **)CONCAT44(uStack_5f4,local_5f8);
                uStack_5c0 = (code *)CONCAT44(uStack_5ec,uStack_5f0);
                local_5b8 = (char **)local_5e8;
                uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd2f8f845018abeb1E(&local_5c8);
                auVar18._8_8_ =
                     &
                     PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h2ef57c0ef3549e14E_00225080
                ;
                auVar18._0_8_ = uVar14;
                goto LAB_0016b3da;
              }
              goto LAB_0016ae3b;
            }
          }
        }
      }
    }
    else {
LAB_0016ae3b:
      bVar4 = false;
      uVar16 = 2;
    }
  }
  else {
    auVar18 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17hc3c8b487726d2353E_0022b730
              )(&local_680,uVar14,uVar1);
    local_648 = auVar18._8_8_;
    if (auVar18._0_8_ == 0) {
      local_648 = (char *)0x0;
    }
    local_5c8 = *(undefined ***)PTR__ZN5uu_rm10OPT_PROMPT17h029e017bbb1d4e3cE_0022b738;
    uStack_5c0 = *(code **)(PTR__ZN5uu_rm10OPT_PROMPT17h029e017bbb1d4e3cE_0022b738 + 8);
    local_5b8 = *(char ***)PTR__ZN5uu_rm15OPT_PROMPT_MORE17hc269a16929953b44E_0022b740;
    pcStack_5b0 = *(code **)(PTR__ZN5uu_rm15OPT_PROMPT_MORE17hc269a16929953b44E_0022b740 + 8);
    local_5a8 = *(char ***)PTR__ZN5uu_rm15OPT_INTERACTIVE17hdb1fad32ed4f9e1eE_0022b748;
    uStack_5a0 = *(code **)(PTR__ZN5uu_rm15OPT_INTERACTIVE17hdb1fad32ed4f9e1eE_0022b748 + 8);
    uStack_2f0 = (code *)&local_598;
    local_2f8 = (undefined  [8])&local_5c8;
    cVar8 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h92699e7722e0cdb1E
                      (local_2f8,&local_680,&local_648);
    bVar4 = false;
    uVar16 = 0;
    if (cVar8 != '\0') goto LAB_0016ae1e;
  }
  uVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022b728
          )(&local_680,
            *(undefined8 *)PTR__ZN5uu_rm19OPT_ONE_FILE_SYSTEM17hd3b3b11c7c2e9882E_0022b758,
            *(undefined8 *)(PTR__ZN5uu_rm19OPT_ONE_FILE_SYSTEM17hd3b3b11c7c2e9882E_0022b758 + 8));
  bVar10 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022b728
           )(&local_680,
             *(undefined8 *)PTR__ZN5uu_rm20OPT_NO_PRESERVE_ROOT17h03dcac76c1bbbf9bE_0022b760,
             *(undefined8 *)(PTR__ZN5uu_rm20OPT_NO_PRESERVE_ROOT17h03dcac76c1bbbf9bE_0022b760 + 8));
  bVar11 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022b728
           )(&local_680,*(undefined8 *)PTR__ZN5uu_rm13OPT_RECURSIVE17h2fa6c9dde2790f6fE_0022b768,
             *(undefined8 *)(PTR__ZN5uu_rm13OPT_RECURSIVE17h2fa6c9dde2790f6fE_0022b768 + 8));
  uVar12 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022b728
           )(&local_680,*(undefined8 *)PTR__ZN5uu_rm7OPT_DIR17h5f6deba47bfce7beE_0022b770,
             *(undefined8 *)(PTR__ZN5uu_rm7OPT_DIR17h5f6deba47bfce7beE_0022b770 + 8));
  pcVar17 = (char *)(ulong)uVar12;
  local_6b2 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022b728
              )(&local_680,*(undefined8 *)PTR__ZN5uu_rm11OPT_VERBOSE17h5f223445ddf1a557E_0022b778,
                *(undefined8 *)(PTR__ZN5uu_rm11OPT_VERBOSE17h5f223445ddf1a557E_0022b778 + 8));
  local_6b5 = bVar10 ^ 1;
  local_6b3 = (undefined)uVar12;
  local_6b7 = cVar7;
  local_6b6 = uVar9;
  local_6b4 = bVar11;
  local_6b1 = uVar16;
  if ((bVar4) && (((code *)0x3 < pcStack_6a0 | bVar11) == 1)) {
    local_698 = pcStack_6a0;
    local_608 = "argumentNoEquals";
    if (pcStack_6a0 >= (code *)0x2) {
      local_608 = "arguments";
    }
    local_600 = 9 - (ulong)(pcStack_6a0 < (code *)0x2);
    local_690 = "?";
    if (bVar11 != 0) {
      local_690 = 
      " recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON"
      ;
    }
    local_688 = (code *)0x1;
    if (bVar11 != 0) {
      local_688 = (code *)0xd;
    }
    local_5c8 = &local_698;
    uStack_5c0 = (code *)
                 PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_0022b780
    ;
    pcStack_5b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7a410b5575987dd7E;
    uStack_5a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7a410b5575987dd7E;
    local_2f8 = (undefined  [8])&PTR_s_remove_00224f60;
    uStack_2f0 = (code *)0x3;
    local_2d8 = 0;
    local_2e8 = (char *)&local_5c8;
    uStack_2e0 = 3;
    pcVar17 = local_2f8;
    local_5b8 = &local_608;
    local_5a8 = &local_690;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd9d607212dba1a42E(&local_5e0,pcVar17);
    local_648 = (char *)CONCAT44(uStack_5dc,local_5e0);
    uStack_640 = (char **)CONCAT44(uStack_5d4,uStack_5d8);
    uStack_638 = local_5d0;
                    /* try { // try from 0016b248 to 0016b37b has its CatchHandler @ 0016b4fe */
    _local_2f8 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_0022b6e8)();
    local_688 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7a410b5575987dd7E;
    local_5c8 = (undefined **)0x224ec8;
    uStack_5c0 = (code *)0x2;
    local_5a8 = (char **)0x0;
    pcStack_5b0 = (code *)0x1;
    local_690 = pcVar17;
    local_5b8 = &local_690;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_0022b6f0)(&local_5c8);
    local_2f8 = (undefined  [8])&local_648;
    uStack_2f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_5c8 = (undefined **)0x115190;
    uStack_5c0 = (code *)0x1;
    local_5a8 = (char **)0x0;
    pcStack_5b0 = (code *)0x1;
    local_5b8 = (char **)pcVar17;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_0022b6f0)(&local_5c8);
    local_5c8 = &PTR_s__00224f90;
    uStack_5c0 = (code *)&DAT_00000001;
    local_5b8 = (char **)&DAT_00000008;
    pcStack_5b0 = (code *)0x0;
    local_5a8 = (char **)0x0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_0022b6f0)(&local_5c8);
    local_698 = (code *)PTR__ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E_0022b788;
    pcVar15 = (char *)(*(code *)
                        PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E_0022b790
                      )(&local_698);
    if (pcVar15 != (char *)0x0) {
      local_608 = pcVar15;
                    /* try { // try from 0016b40e to 0016b4da has its CatchHandler @ 0016b4ec */
      _local_2f8 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_0022b6e8)();
      local_688 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7a410b5575987dd7E;
      local_5c8 = (undefined **)0x224ec8;
      uStack_5c0 = (code *)0x2;
      local_5a8 = (char **)0x0;
      pcStack_5b0 = (code *)0x1;
      local_690 = pcVar17;
      local_5b8 = &local_690;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_0022b6f0)(&local_5c8);
      uStack_2f0 = (code *)
                   PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_0022b7b0
      ;
      local_5c8 = (undefined **)&DAT_00224ee8;
      uStack_5c0 = (code *)0x2;
      local_5a8 = (char **)0x0;
      pcStack_5b0 = (code *)0x1;
      local_5b8 = (char **)pcVar17;
      local_2f8 = (undefined  [8])&local_608;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_0022b6f0)(&local_5c8);
      (*(code *)PTR__ZN3std7process4exit17hf8c1b9d00a2a86fdE_0022b7b8)(1);
LAB_0016b4ea:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar7 = (*(code *)PTR__ZN6uucore8read_yes17hc350e858ab85cf03E_0022b798)();
    if (cVar7 == '\0') {
                    /* try { // try from 0016b3ce to 0016b3d7 has its CatchHandler @ 0016b512 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2b32e5da88b5b934E(&local_648);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = pcVar17;
      auVar18 = auVar6 << 0x40;
      goto LAB_0016b3da;
    }
                    /* try { // try from 0016b380 to 0016b3ad has its CatchHandler @ 0016b512 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2b32e5da88b5b934E(&local_648);
  }
  cVar7 = (*(code *)PTR__ZN5uu_rm6remove17ha4133918b1aa389dE_0022b7a0)
                    (local_6a8,pcStack_6a0,&local_6b7);
  if (cVar7 == '\0') {
                    /* try { // try from 0016b3b6 to 0016b3bf has its CatchHandler @ 0016b50d */
    _ZN4core3ptr71drop_in_place_LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h6a86a76edea5cebdE
              (&local_6b0);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h71510051a836075cE
              (&local_680);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = pcVar17;
    return auVar5 << 0x40;
  }
  auVar18 = (*(code *)
              PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_0022b7a8
            )(1);
LAB_0016b3da:
                    /* try { // try from 0016b3da to 0016b3e3 has its CatchHandler @ 0016b50d */
  _ZN4core3ptr71drop_in_place_LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h6a86a76edea5cebdE
            (&local_6b0);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h71510051a836075cE
            (&local_680);
  return auVar18;
}