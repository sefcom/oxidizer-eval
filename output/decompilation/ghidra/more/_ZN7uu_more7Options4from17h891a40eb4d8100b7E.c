undefined8 * _ZN7uu_more7Options4from17h891a40eb4d8100b7E(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  short *psVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong *puVar9;
  long lVar10;
  short sVar11;
  ulong local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined local_58 [40];
  
  sVar11 = -0xae5;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17he1bd1c63b5c632b9E
            (local_58,param_2,"lines",5);
  psVar6 = (short *)_ZN12clap_builder6parser5error12MatchesError6unwrap17he5942f34b5911f57E
                              ("lines",5,local_58);
  if (psVar6 != (short *)0x0) {
    sVar11 = *psVar6;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17he1bd1c63b5c632b9E
            (local_58,param_2,"number",6);
  puVar7 = (ushort *)
           _ZN12clap_builder6parser5error12MatchesError6unwrap17he5942f34b5911f57E
                     ("number",6,local_58);
  puVar8 = puVar7;
  if (puVar7 != (ushort *)0x0) {
    puVar8 = (ushort *)(ulong)*puVar7;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5c9036044c528d5bE
            (local_58,param_2);
  puVar9 = (ulong *)_ZN12clap_builder6parser5error12MatchesError6unwrap17h7a5118f34f3edf6dE
                              (local_58);
  if (puVar9 != (ulong *)0x0) {
    local_80 = *puVar9;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17haf1677129f8b985cE
            (local_58,param_2);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha0af60c966f39268E(local_58);
  if (lVar10 == 0) {
    local_70 = 0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0022d500
    )(&local_70,lVar10);
  }
                    /* try { // try from 0017a519 to 0017a531 has its CatchHandler @ 0017a609 */
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0022d508
          )(param_2,"clean-print",0xb);
                    /* try { // try from 0017a532 to 0017a576 has its CatchHandler @ 0017a60b */
  uVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0022d508
          )(param_2,"print-over",10);
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0022d508
          )(param_2,"silent",6);
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0022d508
          )(param_2,"squeeze",7);
  bVar1 = sVar11 != 0;
  if (psVar6 == (short *)0x0) {
    bVar1 = (short)puVar8 != 0 && puVar7 != (ushort *)0x0;
    sVar11 = (short)puVar8;
  }
  lVar10 = 0;
  if (1 < local_80) {
    lVar10 = local_80 - 1;
  }
  if (puVar9 == (ulong *)0x0) {
    lVar10 = 0;
  }
  *(undefined *)((long)param_1 + 0x24) = uVar2;
  param_1[3] = lVar10;
  *(ushort *)(param_1 + 4) = (ushort)bVar1;
  *(short *)((long)param_1 + 0x22) = sVar11 + 1;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  param_1[2] = local_60;
  *(undefined *)((long)param_1 + 0x25) = uVar3;
  *(undefined *)((long)param_1 + 0x26) = uVar4;
  *(undefined *)((long)param_1 + 0x27) = uVar5;
  return param_1;
}