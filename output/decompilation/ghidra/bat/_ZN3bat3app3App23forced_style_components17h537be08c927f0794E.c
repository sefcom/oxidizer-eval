void _ZN3bat3app3App23forced_style_components17h537be08c927f0794E
               (undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auStack_48 [40];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d802d13d527b428E
            (auStack_48,param_2,&DAT_001853de,0xb);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7d617d7cf213b9eE
                    (&DAT_001853de,0xb,auStack_48);
  if (lVar2 != 0) {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h023f2f6694194809E
                      (*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),&DAT_001850ad,5);
    if (cVar1 != '\0') {
      _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17ha612b0421c6d552bE
                (param_1);
      return;
    }
  }
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0317c382272279baE_008079c0
          )(param_2,&DAT_00185493,6);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches9get_count17hfce66d8de8c62335E_008079b0
            )(param_2,&DAT_00185358,5);
    if (cVar1 == '\0') {
      *param_1 = 0;
      return;
    }
    uVar3 = 0xb;
  }
  else {
    uVar3 = 7;
  }
  _ZN120__LT_std__collections__hash__set__HashSet_LT_T_C_S_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT_T_GT__GT_9from_iter17h5448c6ee0ae92cf4E
            (param_1,uVar3);
  return;
}