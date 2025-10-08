undefined  [16]
_ZN8uu_pinky8platform4unix6uumain17h14fc5c2b7d673744E(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 local_628;
  undefined local_620 [24];
  long local_608 [8];
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 uStack_5b8;
  byte local_5b0;
  byte local_5af;
  byte local_5ae;
  byte local_5ad;
  byte local_5ac;
  byte local_5ab;
  byte local_5aa;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  
  (*(code *)PTR__ZN8uu_pinky6uu_app17h9b5aedf0ae42f9c0E_001ffd10)(&local_5c8);
                    /* try { // try from 0015cdc5 to 0015cdcf has its CatchHandler @ 0015d0ad */
  (*(code *)PTR__ZN8uu_pinky8platform4unix14get_long_usage17h16a5dc7b91b320adE_001ffd18)(local_620);
  _ZN12clap_builder7builder7command7Command10after_help17h7d18fa41402d9cedE
            (&local_2f8,&local_5c8,local_620);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h8b3f5ac8598db0e4E
            (&local_658,&local_2f8,param_1,param_2);
  local_2c8 = local_628;
  local_2d8 = local_638;
  uStack_2d4 = uStack_634;
  uStack_2d0 = uStack_630;
  uStack_2cc = uStack_62c;
  local_2e8 = (undefined4)uStack_648;
  uStack_2e4 = uStack_648._4_4_;
  uStack_2e0 = uStack_640;
  uStack_2dc = uStack_63c;
  local_2f8 = local_658;
  local_2f0 = uStack_650;
                    /* try { // try from 0015ce60 to 0015cea0 has its CatchHandler @ 0015d0bf */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h6ee6d3caced80a15E
            (&local_5c8,&local_2f8);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h7ff00ef725b8884cE(local_608,&local_5c8);
  if (local_608[0] == 0) {
    local_658._0_4_ = 0;
    local_658._4_4_ = 0;
    uStack_650._0_4_ = 8;
    uStack_650._4_4_ = 0;
    uStack_648 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17hba2b4f9fab664ec6E(&local_5c8,local_608);
    local_658._0_4_ = local_5c8;
    local_658._4_4_ = uStack_5c4;
    uStack_650._0_4_ = uStack_5c0;
    uStack_650._4_4_ = uStack_5bc;
    uStack_648 = uStack_5b8;
  }
                    /* try { // try from 0015ced8 to 0015cfbb has its CatchHandler @ 0015d0c4 */
  bVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffd28
          )(&local_2f8,"omit_headings",0xd);
  bVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffd28
          )(&local_2f8,"omit_project_file",0x11);
  bVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffd28
          )(&local_2f8,"omit_plan_file",0xe);
  bVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffd28
          )(&local_2f8,"omit_home_dir",0xd);
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffd28
          )(&local_2f8,"long_format",0xb);
  bVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffd28
          )(&local_2f8,"omit_name",9);
  bVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffd28
          )(&local_2f8,"omit_name_host",0xe);
  local_5b0 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffd28
              )(&local_2f8,"omit_name_host_timeError flushing stdout: ",0x13);
  local_5af = bVar1 ^ 1;
  local_5ad = bVar2 ^ 1;
  local_5ac = bVar3 ^ 1;
  local_5aa = bVar4 ^ 1;
  local_5ab = (bVar7 | local_5b0) ^ 1;
  local_5ae = (bVar7 | local_5b0 | bVar6) ^ 1;
  local_5b0 = local_5b0 ^ 1;
  uStack_5b8 = uStack_648;
  local_5c8 = (undefined4)local_658;
  uStack_5c4 = local_658._4_4_;
  uStack_5c0 = (undefined4)uStack_650;
  uStack_5bc = uStack_650._4_4_;
  if (cVar5 == '\0') {
    lVar8 = (*(code *)PTR__ZN8uu_pinky8platform4unix5Pinky11short_pinky17h4032f022447522d5E_001ffd38
            )(&local_5c8);
    if (lVar8 != 0) {
      uVar9 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hbf0213f3ca9099feE
                        (lVar8);
      goto LAB_0015d065;
    }
  }
  else {
                    /* try { // try from 0015d033 to 0015d05d has its CatchHandler @ 0015d09b */
    (*(code *)PTR__ZN8uu_pinky8platform4unix5Pinky10long_pinky17hd848aae237e2c0a5E_001ffd30)
              (&local_5c8);
  }
  uVar9 = 0;
LAB_0015d065:
  _ZN4core3ptr52drop_in_place_LT_uu_pinky__platform__unix__Pinky_GT_17hf6eb8645c4897643E(&local_5c8)
  ;
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hf479493a265706d7E
            (&local_2f8);
  auVar10._8_8_ =
       &
       PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hbb2f22c0fef0bf96E_001f8258
  ;
  auVar10._0_8_ = uVar9;
  return auVar10;
}