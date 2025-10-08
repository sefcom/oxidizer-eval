undefined8 * _ZN5uu_wc8Settings3new17h23bd7857bdb7b414E(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  int iVar5;
  long lVar6;
  undefined local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined uStack_80;
  undefined uStack_7f;
  undefined uStack_7e;
  undefined uStack_7d;
  undefined uStack_7c;
  undefined uStack_7b;
  undefined2 uStack_7a;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58 [3];
  undefined4 local_40;
  undefined2 local_3c;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17he062f5150264a99dE
            (local_58);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h8ef5750e6559027dE(local_58);
  if (lVar6 == 0) {
    local_70 = 0x8000000000000002;
  }
  else {
    _ZN65__LT_uu_wc__Input_u20_as_u20_core__convert__From_LT__RF_T_GT__GT_4from17h1ca2dfb37c66956cE
              (&local_70,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
  }
                    /* try { // try from 00164e71 to 00164f16 has its CatchHandler @ 00164fc7 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h06cd51b03da68e21E
            (local_58,param_2);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h0b622a6a871a5391E(local_58);
  if (lVar6 == 0) {
    local_9c = 0;
  }
  else {
    local_9c = _ZN65__LT_uu_wc__TotalWhen_u20_as_u20_core__convert__From_LT_T_GT__GT_4from17ha52cb1a4586ff1d3E
                         (lVar6);
  }
  uVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffc98
          )(param_2,&DAT_0011a106,5);
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffc98
          )(param_2,&DAT_0011a10b,5);
  uVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffc98
          )(param_2,&DAT_0011a11b,5);
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffc98
          )(param_2,&DAT_0011a134,5);
  uStack_7c = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffc98
              )(param_2,&DAT_0011a120,0xf);
  local_88 = local_60;
  local_98 = (undefined4)local_70;
  uStack_94 = local_70._4_4_;
  uStack_90 = uStack_68;
  uStack_8c = uStack_64;
  uStack_7b = local_9c;
  uStack_80 = uVar1;
  uStack_7f = uVar2;
  uStack_7e = uVar3;
  uStack_7d = uVar4;
  iVar5 = _ZN5uu_wc8Settings14number_enabled17h3b82edec78a8e904E(&local_98);
  if (iVar5 == 0) {
    param_1[2] = local_60;
    *(undefined4 *)param_1 = (undefined4)local_70;
    *(undefined4 *)((long)param_1 + 4) = local_70._4_4_;
    *(undefined4 *)(param_1 + 1) = uStack_68;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_64;
    local_40 = 0x1010001;
    local_3c = 0;
    local_58[0] = 0x8000000000000002;
    *(undefined4 *)(param_1 + 3) = 0x1010001;
    *(undefined *)((long)param_1 + 0x1c) = 0;
    *(undefined *)((long)param_1 + 0x1d) = local_9c;
    _ZN4core3ptr36drop_in_place_LT_uu_wc__Settings_GT_17h7cbb0dba993a32a1E(local_58);
  }
  else {
    param_1[2] = local_88;
    param_1[3] = CONCAT26(uStack_7a,
                          CONCAT15(uStack_7b,
                                   CONCAT14(uStack_7c,
                                            CONCAT13(uStack_7d,
                                                     CONCAT12(uStack_7e,
                                                              CONCAT11(uStack_7f,uStack_80))))));
    *param_1 = CONCAT44(uStack_94,local_98);
    param_1[1] = CONCAT44(uStack_8c,uStack_90);
  }
  return param_1;
}