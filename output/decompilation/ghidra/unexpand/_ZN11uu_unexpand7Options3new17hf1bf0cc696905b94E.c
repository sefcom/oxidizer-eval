undefined8 *
_ZN11uu_unexpand7Options3new17hf1bf0cc696905b94E(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 *puStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  long local_b0 [8];
  long local_70 [8];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17he0961343de247fbcE
            (&local_f8,param_2,"tabs");
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h976a16b1bbc48cd2E(local_b0,"tabs",&local_f8)
  ;
  if (local_b0[0] == 0) {
    puVar5 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8);
    if (puVar5 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001ee9e0)(8,8);
      goto LAB_0015c1d7;
    }
    *puVar5 = 8;
    uVar7 = 1;
    local_120 = (undefined8 *)&DAT_00000001;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h12c5088a8e54daadE(&local_118,local_b0);
                    /* try { // try from 0015bf93 to 0015bfa0 has its CatchHandler @ 0015c206 */
    _ZN5alloc3str17join_generic_copy17h4bdcd1fe093f8537E(&local_f8,uStack_110,local_108);
    puVar6 = puStack_f0;
    uVar7 = local_f8;
                    /* try { // try from 0015bfb0 to 0015bfbc has its CatchHandler @ 0015c1f6 */
    _ZN11uu_unexpand14tabstops_parse17hd6618068ebda3834E(&local_f8,puStack_f0,local_e8);
    puVar5 = local_e8;
    if ((int)local_f8 == 1) {
      param_1[1] = puStack_f0;
      param_1[2] = local_e8;
      param_1[3] = local_e0;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h625eac06eaa5da8aE(uVar7,puVar6);
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h6f04e0b44dc68fa1E
                (local_118,uStack_110);
      return param_1;
    }
    local_120 = puStack_f0;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h625eac06eaa5da8aE(uVar7,puVar6);
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h6f04e0b44dc68fa1E
              (local_118,uStack_110);
    uVar7 = local_e0;
  }
                    /* try { // try from 0015c05c to 0015c10e has its CatchHandler @ 0015c21f */
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eeba0
          )(param_2,"all",3);
  if ((cVar2 == '\0') &&
     (cVar2 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001eeba8
              )(param_2,"tabs",4), cVar2 == '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eeba0
            )(param_2,"first-only",10);
    bVar3 = bVar3 ^ 1;
  }
  bVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eeba0
          )(param_2,"no-utf8",7);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17he0961343de247fbcE
            (&local_f8,param_2,"file");
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h976a16b1bbc48cd2E(local_70,"file",&local_f8)
  ;
  if (local_70[0] == 0) {
    puVar6 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (puVar6 == (undefined8 *)0x0) {
LAB_0015c1d7:
                    /* try { // try from 0015c1d7 to 0015c1e6 has its CatchHandler @ 0015c21f */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001ee9e0)(8,0x18);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* try { // try from 0015c12c to 0015c144 has its CatchHandler @ 0015c1e9 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc756f0904f45cd83E
              (&local_f8,"-",1);
    puVar6[2] = local_e8;
    *puVar6 = local_f8;
    puVar6[1] = puStack_f0;
    local_f8 = 1;
    local_e8 = (undefined8 *)&DAT_00000001;
    puStack_f0 = puVar6;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h0bbe8ac7f0e34b78E(&local_f8,local_70);
  }
  param_1[2] = local_e8;
  *param_1 = local_f8;
  param_1[1] = puStack_f0;
  param_1[3] = local_120;
  param_1[4] = puVar5;
  param_1[5] = uVar7;
  *(byte *)(param_1 + 6) = bVar3;
  *(byte *)((long)param_1 + 0x31) = bVar4 ^ 1;
  return param_1;
}