undefined8 _ZN8uu_mkdir6uumain6uumain17h41f984296d2e3eb8E(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_690;
  undefined *local_688;
  undefined8 local_680;
  long local_678 [2];
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 local_648;
  long local_640;
  undefined4 local_638;
  undefined uStack_634;
  undefined uStack_633;
  byte bStack_632;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined8 local_610;
  undefined *local_608;
  undefined8 uStack_600;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined local_5e0 [16];
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined *local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 local_590;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined *local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  
  _ZN6uucore4Args13collect_lossy17h0e6938748ec0963cE(local_5e0,param_1,param_2);
                    /* try { // try from 00159887 to 001598b4 has its CatchHandler @ 00159b7e */
  uVar1 = (*(code *)PTR__ZN8uu_mkdir21strip_minus_from_mode17h17b52de8a38b6e54E_001f4928)(local_5e0)
  ;
  (*(code *)PTR__ZN8uu_mkdir6uu_app17h4c3be6890209a1daE_001f4930)(&local_5c8);
  _ZN12clap_builder7builder7command7Command10after_help17hb4b2872d8d26997cE(&local_2f8,&local_5c8);
  local_5b8 = (undefined *)local_5d0;
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h7b9fe23a02ca39ffE
            (&local_640,&local_2f8,&local_5c8);
  local_648 = local_610;
  local_658 = local_620;
  uStack_654 = uStack_61c;
  uStack_650 = uStack_618;
  uStack_64c = uStack_614;
  local_668 = local_630;
  uStack_664 = uStack_62c;
  uStack_660 = uStack_628;
  uStack_65c = uStack_624;
  local_678[0] = local_640;
                    /* try { // try from 00159937 to 00159b51 has its CatchHandler @ 00159b96 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h93c29b8dcd3babdbE
            (&local_5c8,local_678);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h2326271487626802E(&local_2f8,&local_5c8);
  local_5c8 = (code *)CONCAT44(uStack_2f4,local_2f8);
  if (local_5c8 == (code *)0x0) {
    local_5f8 = 0;
    uStack_5f4 = 0;
    uStack_5f0 = 0;
    uStack_5ec = 0;
    local_608 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001f4940
    ;
    uStack_600 = 0;
    local_688 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001f4940
    ;
    local_5c8 = _ZN4core3ops8function6FnOnce9call_once17hd42bb18b66c768ecE;
    local_690 = 0;
  }
  else {
    local_688 = (undefined *)CONCAT44(uStack_2ec,uStack_2f0);
    local_608 = local_2e8;
    uStack_600 = uStack_2e0;
    local_5f8 = local_2d8;
    uStack_5f4 = uStack_2d4;
    uStack_5f0 = uStack_2d0;
    uStack_5ec = uStack_2cc;
    local_680 = local_2c8;
    local_690 = local_2c0;
  }
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f4948
          )(local_678,"verbose",7);
  uVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f4948
          )(local_678,"parents",7);
  bVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f4948
          )(local_678,"z",1);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h775a0fdd0b4f19b8E
            (&local_5c8,local_678);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he672a2fd7da885f0E(&local_5c8);
  (*(code *)PTR__ZN8uu_mkdir8get_mode17he8abb7adb4ed63ddE_001f4950)(&local_2f8,local_678,uVar1);
  if (CONCAT44(uStack_2f4,local_2f8) == -0x8000000000000000) {
    bStack_632 = bVar4 | lVar5 != 0;
    local_638 = uStack_2f0;
    uStack_5c0 = local_688;
    local_5b8 = local_608;
    uStack_5b0 = uStack_600;
    local_5a8 = local_5f8;
    uStack_5a4 = uStack_5f4;
    uStack_5a0 = uStack_5f0;
    uStack_59c = uStack_5ec;
    local_598 = local_680;
    local_590 = local_690;
    local_640 = lVar5;
    uStack_634 = uVar3;
    uStack_633 = uVar2;
    uVar6 = (*(code *)PTR__ZN8uu_mkdir4exec17hb2a99e38e9578cd1E_001f4958)(&local_5c8,&local_640);
  }
  else {
    local_5b8 = local_2e8;
    local_5c8 = (code *)CONCAT44(uStack_2f4,local_2f8);
    uStack_5c0 = (undefined *)CONCAT44(uStack_2ec,uStack_2f0);
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,1);
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h27291f706a0af6fcE(&local_5c8);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he878267791d1e2a8E
            (local_678);
  return uVar6;
}