ulong _ZN5uu_cp8CopyMode12from_matches17h51c7abde47ff2194E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 unaff_RBP;
  ulong uVar6;
  undefined local_50 [40];
  undefined7 uVar7;
  
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
          )(param_1,"link",4);
  if (cVar3 == '\0') {
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
            )(param_1,"symbolic-link",0xd);
    uVar7 = (undefined7)((ulong)unaff_RBP >> 8);
    uVar6 = CONCAT71(uVar7,1);
    if (cVar3 == '\0') {
      uVar1 = *(undefined8 *)
               PTR__ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE_00267b88
      ;
      uVar2 = *(undefined8 *)
               (
               PTR__ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE_00267b88
               + 8);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb77b56fb07963162E
                (local_50,param_1,uVar1,uVar2);
      lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf9289e9da1ed9625E
                        (uVar1,uVar2,local_50);
      uVar6 = CONCAT71(uVar7,3);
      if (lVar5 == 0) {
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
                )(param_1,*(undefined8 *)
                           PTR__ZN6uucore8features14update_control9arguments17OPT_UPDATE_NO_ARG17h3487f3d89cd8344fE_00267b90
                  ,*(undefined8 *)
                    (
                    PTR__ZN6uucore8features14update_control9arguments17OPT_UPDATE_NO_ARG17h3487f3d89cd8344fE_00267b90
                    + 8));
        if (cVar3 == '\0') {
          cVar3 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
                  )(param_1,"attributes-only",0xf);
          uVar6 = CONCAT71(uVar7,2);
          if (cVar3 != '\0') {
            uVar4 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
                    )(param_1,"remove-destination",0x12);
            uVar6 = (ulong)CONCAT31((int3)((uint)uVar4 >> 8),((byte)uVar4 ^ 1) * '\x02' + '\x02');
          }
        }
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}