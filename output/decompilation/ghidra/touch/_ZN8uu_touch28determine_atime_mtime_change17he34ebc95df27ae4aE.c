undefined8 _ZN8uu_touch28determine_atime_mtime_change17he34ebc95df27ae4aE(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined local_40 [40];
  
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_003aa320
          )(param_1,"time",4);
  if (cVar1 != '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h16a5e9cf3828def8E
              (local_40,param_1);
    lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha857efe89eb0967eE(local_40);
    if (lVar3 != 0) {
      bVar2 = _ZN8uu_touch28determine_atime_mtime_change28__u7b__u7b_closure_u7d__u7d_17hb1c67c10ad6ef86eE
                        (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
      cVar1 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003a9fb8
              )(param_1,"access",6);
      if (cVar1 == '\0') {
        cVar1 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003a9fb8
                )(param_1,"modification",0xc);
        if (cVar1 == '\0') {
          if (bVar2 != 0) {
            return 0;
          }
          return 1;
        }
        if (bVar2 != 0) {
          return 2;
        }
        return 1;
      }
      goto LAB_0023a6b4;
    }
  }
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003a9fb8
          )(param_1,"access",6);
  bVar2 = 2;
  if (cVar1 == '\0') {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003a9fb8
            )(param_1,"modification",0xc);
    if (cVar1 != '\0') {
      return 1;
    }
    return 2;
  }
LAB_0023a6b4:
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003a9fb8
          )(param_1,"modification",0xc);
  if ((cVar1 == '\0') && ((bVar2 == 2 || ((bVar2 & 1) != 0)))) {
    return 0;
  }
  return 2;
}