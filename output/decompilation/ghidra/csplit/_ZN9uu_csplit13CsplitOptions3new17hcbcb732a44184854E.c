long * _ZN9uu_csplit13CsplitOptions3new17hcbcb732a44184854E(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  long lVar6;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0 [3];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  puVar1 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00371340
  ;
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00371340
          )(param_2,"keep-files",10);
  uVar3 = (*(code *)puVar1)(param_2,"quiet",5);
  uVar4 = (*(code *)puVar1)(param_2,"elide-empty-files",0x11);
  uVar5 = (*(code *)puVar1)(param_2,&DAT_001531a0,0x10);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6e5d98b7c91df41cE
            (&local_108,param_2,"prefix",6);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf5c40b70d611d755E
                    ("prefix",6,&local_108);
  if (lVar6 == 0) {
    local_c0[0] = 0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00371240
    )(local_c0,lVar6);
  }
                    /* try { // try from 00221728 to 00221769 has its CatchHandler @ 002218d9 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6e5d98b7c91df41cE
            (&local_108,param_2,"suffix-format",0xd);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf5c40b70d611d755E
                    ("suffix-format",0xd,&local_108);
  if (lVar6 == 0) {
    local_d8 = 0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00371240
    )(&local_108,lVar6);
    local_c8 = local_f8;
    local_d8 = local_108;
    uStack_d0 = uStack_100;
    uStack_cc = uStack_fc;
  }
                    /* try { // try from 00221785 to 002217c6 has its CatchHandler @ 002218c5 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6e5d98b7c91df41cE
            (&local_108,param_2,"digits",6);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf5c40b70d611d755E
                    ("digits",6,&local_108);
  if (lVar6 == 0) {
    local_a8 = 0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00371240
    )(&local_108,lVar6);
    local_98 = local_f8;
    local_a8 = local_108;
    uStack_a0 = uStack_100;
    uStack_9c = uStack_fc;
  }
  _ZN9uu_csplit10split_name9SplitName3new17he14f8b59b0de5c0bE
            (&local_90,local_c0,&local_d8,&local_a8);
  if (local_90 == -0x8000000000000000) {
    param_1[5] = local_68;
    param_1[3] = local_78;
    param_1[4] = lStack_70;
    param_1[1] = local_88;
    param_1[2] = lStack_80;
  }
  else {
    param_1[10] = local_40;
    param_1[0xb] = lStack_38;
    param_1[8] = local_50;
    param_1[9] = lStack_48;
    param_1[6] = local_60;
    param_1[7] = lStack_58;
    param_1[5] = local_68;
    param_1[3] = local_78;
    param_1[4] = lStack_70;
    param_1[1] = local_88;
    param_1[2] = lStack_80;
    *(undefined *)(param_1 + 0xc) = uVar2;
    *(undefined *)((long)param_1 + 0x61) = uVar3;
    *(undefined *)((long)param_1 + 0x62) = uVar4;
    *(undefined *)((long)param_1 + 99) = uVar5;
  }
  *param_1 = local_90;
  return param_1;
}