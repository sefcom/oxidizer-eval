undefined  [16] _ZN6uu_tee6uumain6uumain17h2429544952167906E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  long local_338 [8];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined local_2e0;
  undefined local_2df;
  char local_2de;
  char local_2dd;
  
  (*(code *)PTR__ZN6uu_tee6uu_app17h27e6bdd98eaadaeaE_001f0d20)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h2da8acde3128a25dE
            (&local_370,&local_2f8,param_1,param_2);
  local_378 = local_340;
  local_388 = local_350;
  uStack_384 = uStack_34c;
  uStack_380 = uStack_348;
  uStack_37c = uStack_344;
  local_398 = local_360;
  uStack_394 = uStack_35c;
  uStack_390 = uStack_358;
  uStack_38c = uStack_354;
  local_3a8 = local_370;
  local_3a0 = local_368;
                    /* try { // try from 0015713b to 00157235 has its CatchHandler @ 00157372 */
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0d30
          )(&local_3a8,&DAT_001186d7,6);
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0d30
          )(&local_3a8,&DAT_001186dd,0x11);
  uVar8 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f0d30
          )(&local_3a8,&DAT_001186ee,0x12);
  cVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f0d38
          )(&local_3a8,&DAT_00118700,0xc);
  if (cVar6 == '\0') {
    cVar6 = ((char)uVar8 == '\0') * '\x03' + '\x01';
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1a89d41e6f3305aaE
              (&local_2f8,&local_3a8);
    lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7f32ab232d6922fE(&local_2f8);
    cVar6 = '\x01';
    if (lVar9 != 0) {
      uVar1 = *(undefined8 *)(lVar9 + 8);
      uVar2 = *(undefined8 *)(lVar9 + 0x10);
      cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1c950ec8de21896fE
                        (uVar1,uVar2,&DAT_00117e08);
      if (cVar7 == '\0') {
        cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1c950ec8de21896fE
                          (uVar1,uVar2,&DAT_001186c1);
        if (cVar7 == '\0') {
          cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1c950ec8de21896fE
                            (uVar1,uVar2,"exit");
          cVar6 = '\x02';
          if (cVar7 == '\0') {
            cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1c950ec8de21896fE
                              (uVar1,uVar2,&DAT_001186cc);
            cVar6 = '\x03';
            if (cVar7 == '\0') {
                    /* try { // try from 00157345 to 0015735d has its CatchHandler @ 00157372 */
              (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001f0d48)
                        (&DAT_00117a82,0x28,&PTR_DAT_001e9958);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
        }
      }
      else {
        cVar6 = '\0';
      }
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hc412427a058aefc8E
            (&local_2f8,&local_3a8);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hd8109de55e05b90bE(local_338,&local_2f8);
  if (local_338[0] == 0) {
    local_2f0 = 8;
    local_2f8 = 0;
    local_2e8 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17hfa6ad4387addb41cE(&local_2f8,local_338);
  }
                    /* try { // try from 00157290 to 001572aa has its CatchHandler @ 00157360 */
  local_2e0 = uVar4;
  local_2df = uVar5;
  local_2de = (char)uVar8;
  local_2dd = cVar6;
  lVar9 = (*(code *)PTR__ZN6uu_tee3tee17hf98133f44c3e9f72E_001f0d40)(&local_2f8);
  if (lVar9 == 0) {
    auVar10 = ZEXT416(uVar8) << 0x40;
  }
  else {
    auVar10 = _ZN6uu_tee6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h639a3aa4e0e2d2bdE(lVar9);
  }
  _ZN4core3ptr36drop_in_place_LT_uu_tee__Options_GT_17hd6d4299ff0376049E(&local_2f8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hf45c1a3f8dedf8e0E
            (&local_3a8);
  return auVar10;
}