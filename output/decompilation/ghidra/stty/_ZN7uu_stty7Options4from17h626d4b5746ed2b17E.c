undefined8 * _ZN7uu_stty7Options4from17h626d4b5746ed2b17E(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 unaff_R13;
  undefined4 local_e4;
  byte local_e0 [4];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined8 uStack_c0;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_70 [8];
  
  puVar1 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eaf20
  ;
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eaf20
          )(param_2,"all",3);
  uVar3 = (*(code *)puVar1)(param_2,&DAT_001197a4,4);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h905fee06855682e2E
            (&local_d0,param_2);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h003d302a17359fbaE(&local_d0);
  if (lVar4 == 0) {
    uVar5 = 1;
    unaff_R13 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001eae18)();
  }
  else {
    uStack_c4 = 0;
    local_c8 = 1;
    local_d0 = 0x1b600000800;
    _ZN3std2fs11OpenOptions4open17h8081b96e677a3669E(local_e0,&local_d0,lVar4);
    if ((local_e0[0] & 1) != 0) {
      param_1[1] = local_d8;
      *param_1 = 0x8000000000000001;
      return param_1;
    }
    local_e4 = local_dc;
    uVar5 = 0;
  }
                    /* try { // try from 001585ba to 001585ec has its CatchHandler @ 00158640 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17he363e2117379e867E
            (&local_d0,param_2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hdbc5c14b771241e0E(local_70,&local_d0);
  if (local_70[0] == 0) {
    local_d0 = 0x8000000000000000;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17heb47997e29649baaE(&local_d0,local_70);
    local_88 = CONCAT26(uStack_c2,CONCAT24(uStack_c4,local_c8));
    uStack_80 = uStack_c0;
  }
  *param_1 = local_d0;
  param_1[1] = local_88;
  param_1[2] = uStack_80;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((long)param_1 + 0x1c) = local_e4;
  param_1[4] = unaff_R13;
  *(undefined *)(param_1 + 5) = uVar2;
  *(undefined *)((long)param_1 + 0x29) = uVar3;
  return param_1;
}