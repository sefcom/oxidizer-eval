long _ZN8uu_nohup6uumain6uumain17hc0edd149f256cc13E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined local_320 [16];
  undefined4 local_310;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  (*(code *)PTR__ZN8uu_nohup6uu_app17hfbdd0a2e12237cc1E_001e4d68)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h13de5036085f0ef3E
            (&local_360,&local_2e8,param_1,param_2);
  local_2fc = uStack_33c;
  uStack_2f8 = uStack_338;
  uStack_2f4 = uStack_334;
  uStack_2f0 = uStack_330;
  local_2ec = local_32c;
  local_310 = local_350;
                    /* try { // try from 001542c7 to 001542cc has its CatchHandler @ 0015444f */
  lVar3 = (*(code *)PTR__ZN8uu_nohup11replace_fds17h2e47797ec36e0a94E_001e4d70)();
  if (lVar3 != 0) {
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2ae17a9f6073f8efE
              (local_320);
    return lVar3;
  }
  (*(code *)PTR_signal_001e4d78)(1,1);
                    /* try { // try from 001542fd to 00154372 has its CatchHandler @ 0015444f */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h64fb2621c0592c05E
            (&local_2e8,local_320);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h03d1525767c0830fE(&local_360,&local_2e8);
  if (CONCAT44(uStack_35c,local_360) == 0) {
                    /* try { // try from 00154404 to 00154410 has its CatchHandler @ 0015444f */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e4d90)
              (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001de208);
  }
  else {
    local_2b8 = uStack_330;
    uStack_2b4 = local_32c;
    uStack_2b0 = uStack_328;
    uStack_2ac = uStack_324;
    local_2c8 = uStack_340;
    uStack_2c4 = uStack_33c;
    uStack_2c0 = uStack_338;
    uStack_2bc = uStack_334;
    local_2d8 = local_350;
    uStack_2d4 = uStack_34c;
    uStack_2d0 = uStack_348;
    uStack_2cc = uStack_344;
    local_2e8 = local_360;
    uStack_2e4 = uStack_35c;
    uStack_2e0 = uStack_358;
    uStack_2dc = uStack_354;
    _ZN4core4iter6traits8iterator8Iterator7collect17ha7b23250fe83d133E(&local_360,&local_2e8);
                    /* try { // try from 00154384 to 00154390 has its CatchHandler @ 00154426 */
    _ZN4core4iter6traits8iterator8Iterator7collect17h986ce61074ee98cdE
              (&local_2e8,CONCAT44(uStack_354,uStack_358),
               CONCAT44(uStack_34c,local_350) * 0x10 + CONCAT44(uStack_354,uStack_358));
                    /* try { // try from 00154391 to 001543cb has its CatchHandler @ 0015442b */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he0f547bf2c815009E(&local_2e8);
    if (CONCAT44(uStack_2d4,local_2d8) != 0) {
      iVar2 = (*(code *)PTR_execvp_001e4d80)(*(undefined8 *)CONCAT44(uStack_2dc,uStack_2e0));
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001e4d88)
                (iVar2 == 2 | 0x7e);
      _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h4cbb849d5961f95bE
                (CONCAT44(uStack_2e4,local_2e8),CONCAT44(uStack_2dc,uStack_2e0));
      _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_alloc__ffi__c_str__CString_GT__GT_17h1140044b68f73ffcE
                (&local_360);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2ae17a9f6073f8efE
                (local_320);
      return 0;
    }
                    /* try { // try from 00154413 to 00154423 has its CatchHandler @ 0015442b */
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001e4ba8)
              (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001de238);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}