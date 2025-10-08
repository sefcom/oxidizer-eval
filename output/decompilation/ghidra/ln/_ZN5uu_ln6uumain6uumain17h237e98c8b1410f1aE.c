undefined ** _ZN5uu_ln6uumain6uumain17h237e98c8b1410f1aE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 local_660;
  undefined8 local_658;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined8 local_630;
  code *local_628;
  undefined **local_620;
  code *local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined8 local_5e0;
  undefined **local_5d8;
  undefined **local_5d0;
  undefined **local_5c8;
  code *pcStack_5c0;
  undefined ***local_5b8;
  undefined **ppuStack_5b0;
  code *local_5a8;
  undefined **ppuStack_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined **local_2f8;
  code *pcStack_2f0;
  undefined **local_2e8;
  code *pcStack_2e0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  local_2f8 = &PTR_s_In_the_1st_form__create_a_link_t_001f5368;
  pcStack_2f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfedf867e57905b82E;
  local_2e8 = &PTR_s_The_backup_suffix_is______unless_001f5358;
  pcStack_2e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfedf867e57905b82E;
  local_5c8 = (undefined **)&DAT_001f5338;
  pcStack_5c0 = (code *)0x2;
  local_5a8 = (code *)0x0;
  local_5b8 = &local_2f8;
  ppuStack_5b0 = (undefined **)0x2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h207e5051dee6a304E(&local_610,&local_5c8);
  uVar2 = local_608;
  uVar1 = local_610;
                    /* try { // try from 0015bba0 to 0015bbad has its CatchHandler @ 0015bfef */
  (*(code *)PTR__ZN5uu_ln6uu_app17h0c67f180ed7e66cdE_001fce98)(&local_5c8);
  local_660 = uVar1;
  local_658 = uVar2;
  _ZN12clap_builder7builder7command7Command10after_help17h1a6be304857a8d78E
            (&local_2f8,&local_5c8,&local_660);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hfc5f8aabf8161828E
            (&local_610,&local_2f8,param_1,param_2);
  local_630 = local_5e0;
  local_640 = local_5f0;
  uStack_63c = uStack_5ec;
  uStack_638 = uStack_5e8;
  uStack_634 = uStack_5e4;
  uStack_648 = uStack_5f8;
  uStack_644 = uStack_5f4;
  local_660 = local_610;
  local_658 = local_608;
  uVar1 = *(undefined8 *)PTR__ZN5uu_ln9ARG_FILES17h84188de9ed3f1679E_001fcea8;
  uVar2 = *(undefined8 *)(PTR__ZN5uu_ln9ARG_FILES17h84188de9ed3f1679E_001fcea8 + 8);
                    /* try { // try from 0015bc43 to 0015bcd6 has its CatchHandler @ 0015c014 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h828f975611655f0aE
            (&local_5c8,&local_660,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h2818f91298ce3b9bE
            (&local_2f8,uVar1,uVar2,&local_5c8);
  if (local_2f8 != (undefined **)0x0) {
    local_598 = local_2c8;
    uStack_594 = uStack_2c4;
    uStack_590 = uStack_2c0;
    uStack_58c = uStack_2bc;
    local_5b8 = (undefined ***)local_2e8;
    ppuStack_5b0 = (undefined **)pcStack_2e0;
    local_5c8 = local_2f8;
    pcStack_5c0 = pcStack_2f0;
    _ZN4core4iter6traits8iterator8Iterator7collect17h922a1525a955c894E(&local_610,&local_5c8);
                    /* try { // try from 0015bcd7 to 0015bd39 has its CatchHandler @ 0015c005 */
    uVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fceb0
            )(&local_660,"symbolic",8);
    cVar6 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fceb0
            )(&local_660,"force",5);
    uVar7 = 2;
    if (cVar6 == '\0') {
      uVar7 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fceb0
              )(&local_660,"interactive",0xb);
    }
    (*(code *)
      PTR__ZN6uucore8features14backup_control21determine_backup_mode17h09b58a9d9bda0a55E_001fceb8)
              (&local_5c8,&local_660);
    ppuVar14 = local_5c8;
    if (local_5c8 == (undefined **)0x0) {
      uVar4 = pcStack_5c0._0_1_;
                    /* try { // try from 0015bd7a to 0015bd8c has its CatchHandler @ 0015c005 */
      (*(code *)
        PTR__ZN6uucore8features14backup_control23determine_backup_suffix17ha7b1c82b4746605aE_001fcec0
      )(&local_2f8,&local_660);
                    /* try { // try from 0015bd8d to 0015bda3 has its CatchHandler @ 0015bfaf */
      uVar8 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fceb0
              )(&local_660,"logical",7);
      local_5d0 = local_2e8;
                    /* try { // try from 0015bdc7 to 0015be25 has its CatchHandler @ 0015bfdb */
      local_618 = pcStack_2f0;
      local_620 = local_2f8;
      uVar9 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fceb0
              )(&local_660,"relative",8);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h690e6533f902407aE
                (&local_5c8,&local_660);
      lVar13 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb94073c9cdcfebbeE(&local_5c8);
      if (lVar13 == 0) {
        ppuVar14 = (undefined **)0x8000000000000000;
      }
      else {
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001fcec8
        )(&local_5c8,lVar13);
        local_628 = pcStack_5c0;
        local_5d8 = (undefined **)local_5b8;
        ppuVar14 = local_5c8;
      }
                    /* try { // try from 0015be57 to 0015bea1 has its CatchHandler @ 0015bfc9 */
      uVar10 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fceb0
               )(&local_660,"no-target-directory",0x13);
      uVar11 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fceb0
               )(&local_660,"no-dereference",0xe);
      uVar12 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fceb0
               )(&local_660,
                 "verboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE"
                 ,7);
      local_5c8 = local_620;
      pcStack_5c0 = local_618;
      local_5b8 = (undefined ***)local_5d0;
      local_5a8 = local_628;
      ppuStack_5a0 = local_5d8;
      local_598 = CONCAT13(uVar10,CONCAT12(uVar8,CONCAT11(uVar9,uVar5)));
      uStack_594 = CONCAT22(CONCAT11(uVar4,uVar7),CONCAT11(uVar12,uVar11));
                    /* try { // try from 0015bf41 to 0015bf4e has its CatchHandler @ 0015bf9d */
      ppuStack_5b0 = ppuVar14;
      ppuVar14 = (undefined **)
                 (*(code *)PTR__ZN5uu_ln4exec17h58832f6de7ace9b1E_001fced0)
                           (local_608,CONCAT44(uStack_5fc,local_600),&local_5c8);
      _ZN4core3ptr36drop_in_place_LT_uu_ln__Settings_GT_17hb0ac19b1e41297f8E(&local_5c8);
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h0614d0a0d1fcd107E
                (&local_610);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6e0c8a0734477b0fE
                (&local_660);
    }
    else {
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h0614d0a0d1fcd107E
                (&local_610);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6e0c8a0734477b0fE
                (&local_660);
    }
    return ppuVar14;
  }
                    /* try { // try from 0015bf8e to 0015bf9a has its CatchHandler @ 0015c014 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001fced8)
            (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001f5378);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}