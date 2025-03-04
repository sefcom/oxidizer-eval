char _ZN8uu_touch28determine_atime_mtime_change17hda9df64dc3778c17E(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  undefined auStack_48 [40];
  
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_1,"time",4);
  if (cVar1 == '\0') {
LAB_002c2ff2:
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,"access",6);
    bVar2 = 2;
    if (cVar1 == '\0') {
      bVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_1,"modification",0xc);
LAB_002c3052:
      bVar5 = 0;
      goto LAB_002c3085;
    }
LAB_002c300e:
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,"modification",0xc);
    bVar3 = 1;
    bVar5 = 1;
    if (cVar1 != '\0') goto LAB_002c3085;
    if (bVar2 == 2) {
      return '\0';
    }
    bVar3 = bVar2 ^ 1;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf835c51125603d99E
              (auStack_48,param_1,"time",4);
    lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h0fd0d44a61af13caE
                      ("time",4,auStack_48);
    if (lVar4 == 0) goto LAB_002c2ff2;
    bVar2 = _ZN8uu_touch28determine_atime_mtime_change28__u7b__u7b_closure_u7d__u7d_17hfdbf3da7597c28baE
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,"access",6);
    if (cVar1 != '\0') goto LAB_002c300e;
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,"modification",0xc);
    bVar3 = 1;
    bVar5 = bVar2;
    if (cVar1 != '\0') goto LAB_002c3085;
    bVar3 = bVar2 ^ 1;
    if (bVar2 == 0) goto LAB_002c3052;
  }
  bVar6 = bVar3 == 0;
  bVar3 = 1;
  bVar5 = 1;
  if (bVar6) {
    return '\0';
  }
LAB_002c3085:
  return '\x02' - (bVar5 == 0 && bVar3 != 0);
}