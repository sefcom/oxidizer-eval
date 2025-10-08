undefined8 * _ZN6uu_env12make_options17h2effa55e44a7ce8eE(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  char cVar3;
  long lVar4;
  undefined8 unaff_RBP;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined local_258 [16];
  undefined8 local_248;
  undefined local_240 [16];
  undefined8 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined local_198 [16];
  undefined8 local_188;
  undefined local_180 [16];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  undefined local_ff;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0 [8];
  long local_70 [8];
  
  puVar1 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002195e8
  ;
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002195e8
          )(param_2,&DAT_0011e97a,0x12);
  cVar3 = (*(code *)puVar1)(param_2,"nullXCPU",4);
  uVar5 = 0;
  uVar7 = 10;
  if (cVar3 != '\0') {
    uVar7 = uVar5;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb12f6ea3c7f6b83cE
            (local_198,param_2,&DAT_0011e9ab);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h72cb49d5288c48ebE
                    (&DAT_0011e9ab,local_198);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 8);
    unaff_RBP = *(undefined8 *)(lVar4 + 0x10);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hec434e3db7bf2faeE
            (local_198,param_2,"fileTSTP",4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h5b2c920e659854a6E
            (local_b0,"fileTSTP",4,local_198);
  if (local_b0[0] == 0) {
    local_258 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17ha433c616156e1495E
                          (0,8,0x10,&PTR_DAT_00210c08);
    local_248 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h0f7e05f4f15282a3E(local_258,local_b0);
  }
                    /* try { // try from 00174e70 to 00174ee3 has its CatchHandler @ 001752bc */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hec434e3db7bf2faeE
            (local_198,param_2,&DAT_0011ea92,5);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h5b2c920e659854a6E(local_70,&DAT_0011ea92,5);
  if (local_70[0] == 0) {
    local_240 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17ha433c616156e1495E
                          (0,8,0x10);
    local_230 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h0f7e05f4f15282a3E(local_240,local_70);
  }
                    /* try { // try from 00174ef7 to 00174f21 has its CatchHandler @ 001752a8 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb12f6ea3c7f6b83cE
            (local_198,param_2,&DAT_0011eb5c);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h72cb49d5288c48ebE
                    (&DAT_0011eb5c,local_198);
  if (lVar4 == 0) {
    local_110 = 0;
    local_108 = 0;
  }
  else {
    local_110 = *(undefined8 *)(lVar4 + 8);
    local_108 = *(undefined8 *)(lVar4 + 0x10);
  }
  local_188 = local_248;
  local_170 = local_230;
  local_ff = (undefined)uVar7;
  local_168 = 0;
  local_160 = 8;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 8;
  local_140 = 0;
  local_138 = 0;
  local_130 = 8;
  local_128 = 0;
                    /* try { // try from 00174ffa to 00175035 has its CatchHandler @ 001752d6 */
  local_120 = uVar5;
  local_118 = unaff_RBP;
  local_100 = uVar2;
  local_198 = local_258;
  local_180 = local_240;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hec434e3db7bf2faeE
            (&local_228,param_2,&DAT_0011ebde,0xd);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h5b2c920e659854a6E
            (&local_1d8,&DAT_0011ebde,0xd,&local_228);
  if (CONCAT44(uStack_1d4,local_1d8) == 0) {
LAB_001750bf:
                    /* try { // try from 001750bf to 001750f5 has its CatchHandler @ 001752d6 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hec434e3db7bf2faeE
              (&local_228,param_2,&DAT_0011c7d4,4);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h5b2c920e659854a6E
              (&local_f0,&DAT_0011c7d4,4,&local_228);
    if (CONCAT44(uStack_ec,local_f0) == 0) {
LAB_0017527d:
      (*(code *)PTR_memcpy_002191a0)(param_1,local_198,0xa0);
      return param_1;
    }
    local_1a8 = local_c0;
    uStack_1a0 = uStack_b8;
    local_1b8 = local_d0;
    uStack_1b0 = uStack_c8;
    local_1c8 = local_e0;
    uStack_1c0 = uStack_d8;
    local_1d8 = local_f0;
    uStack_1d4 = uStack_ec;
    uStack_1d0 = uStack_e8;
    uStack_1cc = uStack_e4;
    uVar6 = 0;
    do {
                    /* try { // try from 0017517e to 001751bc has its CatchHandler @ 001752d8 */
      lVar4 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfd26d720e8c6e1baE
                        (&local_1d8);
      if (lVar4 == 0) break;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      uVar7 = *(undefined8 *)(lVar4 + 0x10);
      cVar3 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                        (uVar5,uVar7,&DAT_0011e8a6,1);
      if (cVar3 == '\0') {
        _ZN6uu_env20parse_name_value_opt17hf06db07eb579a5e8E(&local_228,local_198,uVar5,uVar7);
        uVar6 = CONCAT44(uStack_21c,uStack_220);
        if (CONCAT44(uStack_224,local_228) != 0) {
          param_1[1] = CONCAT44(uStack_224,local_228);
          param_1[2] = uVar6;
          goto LAB_00175261;
        }
      }
      else {
        local_100 = 1;
      }
    } while ((uVar6 & 1) == 0);
    local_1f8 = local_1a8;
    uStack_1f0 = uStack_1a0;
    local_208 = local_1b8;
    uStack_200 = uStack_1b0;
    local_218 = local_1c8;
    uStack_210 = uStack_1c0;
    local_228 = local_1d8;
    uStack_224 = uStack_1d4;
    uStack_220 = uStack_1d0;
    uStack_21c = uStack_1cc;
    do {
                    /* try { // try from 00175230 to 0017524c has its CatchHandler @ 001752da */
      lVar4 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfd26d720e8c6e1baE
                        (&local_228);
      if (lVar4 == 0) goto LAB_0017527d;
      lVar4 = _ZN6uu_env17parse_program_opt17h7280c27efa5c6406E
                        (local_198,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    } while (lVar4 == 0);
    param_1[1] = lVar4;
    param_1[2] = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002107e8
    ;
  }
  else {
    local_1f8 = local_1a8;
    uStack_1f0 = uStack_1a0;
    local_208 = local_1b8;
    uStack_200 = uStack_1b0;
    local_218 = local_1c8;
    uStack_210 = uStack_1c0;
    local_228 = local_1d8;
    uStack_224 = uStack_1d4;
    uStack_220 = uStack_1d0;
    uStack_21c = uStack_1cc;
    do {
                    /* try { // try from 00175090 to 001750ac has its CatchHandler @ 001752dc */
      lVar4 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfd26d720e8c6e1baE
                        (&local_228);
      if (lVar4 == 0) goto LAB_001750bf;
      auVar8 = _ZN6uu_env16parse_signal_opt17h8d80c5165791b2ecE
                         (local_198,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    } while (auVar8._0_8_ == 0);
    *(undefined (*) [16])(param_1 + 1) = auVar8;
  }
LAB_00175261:
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr36drop_in_place_LT_uu_env__Options_GT_17h0f0136e8e33bf55aE(local_198);
  return param_1;
}