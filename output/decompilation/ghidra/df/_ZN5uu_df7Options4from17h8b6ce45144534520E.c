undefined8 * _ZN5uu_df7Options4from17h8b6ce45144534520E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  undefined uVar9;
  long local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  long local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int local_e8 [2];
  undefined8 local_e0;
  long local_c8 [8];
  long local_88 [11];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h3719f0ee9075a3feE
            (&local_158,param_2,&DAT_00119a24,4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h3fb7cb9ce86227a4E
            (local_c8,&DAT_00119a24,4,&local_158);
  if (local_c8[0] == 0) {
    local_198 = -0x8000000000000000;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h49a51ee5ac4b4f6eE(&local_198,local_c8);
  }
                    /* try { // try from 0016d10f to 0016d162 has its CatchHandler @ 0016d4a5 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h3719f0ee9075a3feE
            (&local_158,param_2,"exclude-type",0xc);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h3fb7cb9ce86227a4E
            (local_88,"exclude-type",0xc,&local_158);
  if (local_88[0] == 0) {
    local_1b8 = -0x8000000000000000;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h49a51ee5ac4b4f6eE(&local_158,local_88);
    local_1a8 = local_148;
    local_1b8 = local_158;
    uStack_1b0 = (undefined4)uStack_150;
    uStack_1ac = uStack_150._4_4_;
    if ((local_198 != -0x8000000000000000) && (local_158 != -0x8000000000000000)) {
                    /* try { // try from 0016d19c to 0016d31b has its CatchHandler @ 0016d4ba */
      _ZN5uu_df7Options21get_intersected_types17h9cab40c1fdffacadE
                (&local_158,uStack_190,local_188,uStack_150,local_148);
      if (local_158 != -0x8000000000000000) {
        param_1[4] = local_148;
        *(undefined4 *)(param_1 + 2) = (undefined4)local_158;
        *(undefined4 *)((long)param_1 + 0x14) = local_158._4_4_;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_150;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_150._4_4_;
        param_1[1] = 4;
        goto LAB_0016d477;
      }
      _ZN4core3ptr93drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17h38b38b300538279cE
                (&local_158);
    }
  }
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
          )(param_2,"local",5);
  uVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
          )(param_2,"all",3);
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
          )(param_2,&DAT_00119a20,4);
  _ZN5uu_df6blocks15read_block_size17h32d30779f3aa72e5E(local_e8,param_2);
  if (local_e8[0] == 4) {
    local_180 = local_e0;
  }
  else {
    _ZN5uu_df7Options4from28__u7b__u7b_closure_u7d__u7d_17h55bdb2272571ef7dE
              (&local_108,param_2,local_e8);
    local_178 = CONCAT44(uStack_f4,uStack_f8);
    if (CONCAT44(uStack_104,local_108) != 5) {
      *(undefined4 *)(param_1 + 3) = uStack_f8;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_f4;
      *(undefined4 *)(param_1 + 4) = local_f0;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_ec;
      param_1[1] = CONCAT44(uStack_104,local_108);
      param_1[2] = local_100;
      goto LAB_0016d477;
    }
    local_180 = local_100;
  }
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
          )(param_2,"human-readable-binary",0x15);
  cVar6 = '\x01';
  if ((cVar5 == '\0') &&
     (cVar5 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
              )(param_2,"human-readable-decimal",0x16), cVar5 == '\0')) {
    cVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
            )(param_2,"portability",0xb);
    cVar6 = '\x02';
    if (cVar5 == '\0') {
      cVar6 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h45c0c3cb9ce2c562E_0020a180
              )(param_2,"output",6);
      cVar6 = (cVar6 == '\x02') * '\x03';
    }
  }
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
          )(param_2,"human-readable-binary",0x15);
  cVar5 = '\x01';
  if (cVar7 == '\0') {
    bVar8 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
            )(param_2,"human-readable-decimal",0x16);
    cVar5 = (bVar8 ^ 1) * '\x02';
  }
                    /* try { // try from 0016d326 to 0016d34c has its CatchHandler @ 0016d4a3 */
  uVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
          )(param_2,"total%",5);
  _ZN5uu_df7columns6Column12from_matches17h56d2df2bf88d44daE(&local_108,param_2);
  local_178 = local_100;
  uVar1 = local_178;
  if (local_108 != 1) {
    *param_1 = local_100;
    param_1[1] = CONCAT44(uStack_f4,uStack_f8);
    param_1[8] = local_1a8;
    param_1[6] = local_1b8;
    param_1[7] = CONCAT44(uStack_1ac,uStack_1b0);
    param_1[2] = CONCAT44(uStack_ec,local_f0);
    param_1[3] = local_198;
    param_1[4] = uStack_190;
    param_1[5] = local_188;
    param_1[9] = local_180;
    *(undefined *)(param_1 + 10) = uVar2;
    *(undefined *)((long)param_1 + 0x51) = uVar3;
    *(undefined *)((long)param_1 + 0x52) = uVar4;
    *(undefined *)((long)param_1 + 0x53) = uVar9;
    *(char *)((long)param_1 + 0x54) = cVar5;
    *(char *)((long)param_1 + 0x55) = cVar6;
    return param_1;
  }
  param_1[4] = CONCAT44(uStack_ec,local_f0);
  local_178._0_4_ = (undefined4)local_100;
  local_178._4_4_ = (undefined4)((ulong)local_100 >> 0x20);
  *(undefined4 *)(param_1 + 2) = (undefined4)local_178;
  *(undefined4 *)((long)param_1 + 0x14) = local_178._4_4_;
  *(undefined4 *)(param_1 + 3) = uStack_f8;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_f4;
  param_1[1] = 3;
  local_178 = uVar1;
LAB_0016d477:
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr93drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17h38b38b300538279cE
            (&local_1b8);
  _ZN4core3ptr93drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17h38b38b300538279cE
            (&local_198);
  return param_1;
}