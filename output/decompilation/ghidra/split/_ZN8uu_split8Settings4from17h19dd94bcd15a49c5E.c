undefined8 * _ZN8uu_split8Settings4from17h19dd94bcd15a49c5E(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong unaff_R12;
  ulong uVar8;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long local_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  ulong local_1c8;
  ulong uStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong local_188;
  ulong uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined local_128;
  undefined local_127;
  undefined local_126;
  long local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  ulong local_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_58 [2];
  ulong local_50;
  ulong uStack_48;
  undefined8 local_40;
  
  _ZN8uu_split8strategy8Strategy4from17h55013c26ce2fc8abE(local_58);
  if (local_58[0] == 4) {
    local_238 = local_40;
    local_248 = local_50;
    uStack_240 = uStack_48;
  }
  else {
    _ZN4core3ops8function6FnOnce9call_once17haf814ba9ed64f54aE(&local_1c8,local_58);
    uStack_240 = CONCAT44(uStack_1b4,uStack_1b8);
    local_248 = uStack_1c0;
    local_238 = CONCAT44(uStack_1ac,uStack_1b0);
    if (local_1c8 != 9) {
      param_1[4] = local_238;
      param_1[2] = uStack_1c0;
      param_1[3] = uStack_240;
      param_1[1] = local_1c8;
      param_1[5] = uStack_1a8;
      *param_1 = 2;
      return param_1;
    }
  }
  local_c8 = (uint)local_248;
  uStack_c4 = local_248._4_4_;
  uStack_c0 = (undefined4)uStack_240;
  uStack_bc = uStack_240._4_4_;
  local_b8 = local_238;
  local_78 = (uint)local_248;
  uStack_74 = local_248._4_4_;
  uStack_70 = (undefined4)uStack_240;
  uStack_6c = uStack_240._4_4_;
  local_68 = local_238;
  _ZN8uu_split9filenames6Suffix4from17h650e53160424c56fE(&local_1c8,param_2,&local_78);
  if (local_1c8 == 0x8000000000000000) {
    _ZN4core3ops8function6FnOnce9call_once17hde63b1f7c3946962E(&local_248);
    param_1[5] = CONCAT44(uStack_224,local_228);
    param_1[3] = local_238;
    param_1[4] = CONCAT44(uStack_22c,uStack_230);
    param_1[1] = local_248;
    param_1[2] = uStack_240;
    *param_1 = 2;
    return param_1;
  }
  local_1e8 = CONCAT44(uStack_1ac,uStack_1b0);
  uStack_f0 = uStack_1c0;
  uStack_e8 = CONCAT44(uStack_1b4,uStack_1b8);
  uStack_e0 = uStack_1b0;
  uStack_dc = uStack_1ac;
  uStack_d8 = (undefined4)uStack_1a8;
  uStack_d4 = uStack_1a8._4_4_;
  local_d0 = local_1a0;
  local_f8 = local_1c8;
                    /* try { // try from 001cb4bf to 001cb678 has its CatchHandler @ 001cba30 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hf94087d00da7b45fE
            (&local_1c8,param_2,"separator",9);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h33b6edd186448474E
            (&local_248,"separator",9,&local_1c8);
  if (local_248 == 0) {
    uVar2 = 10;
    goto LAB_001cb5f5;
  }
  uStack_1b8 = (undefined4)local_238;
  uStack_1b4 = local_238._4_4_;
  uStack_1b0 = uStack_230;
  uStack_1ac = uStack_22c;
  local_1c8 = local_248;
  uStack_1c0 = uStack_240;
  lVar4 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5d23ecd35bb48587E
                    (&local_1c8);
  if (lVar4 == 0) {
    ppuVar7 = &PTR_s_src_uu_split_src_split_rs_00248338;
LAB_001cb9cb:
                    /* try { // try from 001cb9cb to 001cb9d0 has its CatchHandler @ 001cba30 */
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(ppuVar7);
LAB_001cb9d1:
                    /* try { // try from 001cb9d1 to 001cb9dd has its CatchHandler @ 001cba14 */
    uVar6 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                      (&PTR_s_src_uu_split_src_split_rs_00248368);
                    /* catch() { ... } // from try @ 001cb681 with catch @ 001cb9de
                       catch() { ... } // from try @ 001cb93f with catch @ 001cb9de */
                    /* try { // try from 001cb9e1 to 001cba3f has its CatchHandler @ 001cba48 */
    _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_u64_C_uucore__parser__parse_size__ParseSizeError_GT__GT_17h015e0a63404a84f0E
              (&local_1c8);
    _ZN4core3ptr48drop_in_place_LT_uu_split__filenames__Suffix_GT_17h108240889ad5c101E(&local_f8);
    puVar5 = (undefined8 *)_Unwind_Resume(uVar6);
    return puVar5;
  }
  local_200 = lVar4;
  uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17ha4b7b055f3a9f6feE(&local_1c8,&local_200)
  ;
  cVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17ha5fb3b5979973e2aE
                    (uVar2);
  uVar6 = 6;
  if (cVar3 == '\0') {
LAB_001cb932:
    param_1[1] = uVar6;
    *param_1 = 2;
    goto LAB_001cb97b;
  }
  puVar1 = *(undefined **)(local_200 + 8);
  unaff_R12 = *(ulong *)(local_200 + 0x10);
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                    (puVar1,unaff_R12,"\\0",2);
  if (cVar3 == '\0') {
    if (unaff_R12 != 1) {
                    /* try { // try from 001cb90b to 001cb91a has its CatchHandler @ 001cba30 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha461c13160c52a35E
                (&local_1f8,puVar1,unaff_R12);
      param_1[4] = local_1e8;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_1f8;
      *(undefined4 *)((long)param_1 + 0x14) = local_1f8._4_4_;
      *(undefined4 *)(param_1 + 3) = uStack_1f0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_1ec;
      uVar6 = 5;
      goto LAB_001cb932;
    }
    uVar2 = *puVar1;
  }
  else {
    uVar2 = 0;
  }
LAB_001cb5f5:
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
            (&local_1c8,param_2,"-io-blksize",0xb);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                    ("-io-blksize",0xb,&local_1c8);
  if (lVar4 == 0) {
    uVar8 = 0;
LAB_001cb697:
                    /* try { // try from 001cb697 to 001cb6df has its CatchHandler @ 001cba30 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
              (&local_248,param_2,"prefix",6);
    lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                      ("prefix",6,&local_248);
    if (lVar4 != 0) {
      _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                (&local_a8,lVar4);
      local_228 = uStack_d8;
      uStack_224 = uStack_d4;
      uStack_220 = (undefined4)local_d0;
      uStack_21c = local_d0._4_4_;
      local_238 = uStack_e8;
      uStack_230 = uStack_e0;
      uStack_22c = uStack_dc;
      local_248 = local_f8;
      uStack_240 = uStack_f0;
                    /* try { // try from 001cb707 to 001cb74f has its CatchHandler @ 001cba14 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
                (&local_1f8,param_2,"input",5);
      lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                        ("input",5,&local_1f8);
      if (lVar4 != 0) {
        _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                  (&local_90,lVar4);
                    /* try { // try from 001cb750 to 001cb791 has its CatchHandler @ 001cba02 */
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
                  (&local_1f8,param_2,"filter",6);
        lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                          ("filter",6,&local_1f8);
        if (lVar4 == 0) {
          local_118 = -0x8000000000000000;
        }
        else {
          _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                    (&local_1f8,lVar4);
          local_108 = local_1e8;
          local_118 = local_1f8;
          uStack_110 = uStack_1f0;
          uStack_10c = uStack_1ec;
        }
                    /* try { // try from 001cb7c9 to 001cb7f4 has its CatchHandler @ 001cb9f0 */
        cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                          (param_2,"verbose",7);
        local_127 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                              (param_2,"elide-empty-files",0x11);
        local_128 = cVar3 == '\x02';
        uStack_190 = local_98;
        local_1a0 = local_a8;
        uStack_198 = uStack_a0;
        local_188 = local_248;
        uStack_180 = uStack_240;
        local_178 = (undefined4)local_238;
        uStack_174 = local_238._4_4_;
        uStack_170 = uStack_230;
        uStack_16c = uStack_22c;
        local_168 = local_228;
        uStack_164 = uStack_224;
        uStack_160 = uStack_220;
        uStack_15c = uStack_21c;
        local_158 = local_90;
        uStack_150 = uStack_88;
        local_148 = local_80;
        uStack_138 = CONCAT44(uStack_10c,uStack_110);
        local_140 = local_118;
        local_130 = local_108;
        uStack_1a8 = local_b8;
        uStack_1b8 = local_c8;
        uStack_1b4 = uStack_c4;
        uStack_1b0 = uStack_c0;
        uStack_1ac = uStack_bc;
        local_1c8 = uVar8;
        uStack_1c0 = unaff_R12;
        local_126 = uVar2;
        if ((((CONCAT44(uStack_c4,local_c8) < 6) && (CONCAT44(uStack_c4,local_c8) < 6)) &&
            ((0x2aUL >> ((ulong)local_c8 & 0x3f) & 1) != 0)) && (local_118 != -0x8000000000000000))
        {
          param_1[1] = 7;
          *param_1 = 2;
          _ZN4core3ptr39drop_in_place_LT_uu_split__Settings_GT_17h052f7492a9b4d421E(&local_1c8);
          return param_1;
        }
        (*(code *)PTR_memcpy_0024cfc0)(param_1,&local_1c8,0xa8);
        return param_1;
      }
      goto LAB_001cb9d1;
    }
    ppuVar7 = &PTR_s_src_uu_split_src_split_rs_00248350;
    goto LAB_001cb9cb;
  }
  _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE
            (&local_1c8,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  unaff_R12 = uStack_1c0;
  if ((int)local_1c8 == 3) {
    if (uStack_1c0 != 0) {
      if (uStack_1c0 < 0x20000001) {
        _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_u64_C_uucore__parser__parse_size__ParseSizeError_GT__GT_17h015e0a63404a84f0E
                  (&local_1c8);
        uVar8 = 1;
        goto LAB_001cb697;
      }
      goto LAB_001cb681;
    }
                    /* try { // try from 001cb93f to 001cb94c has its CatchHandler @ 001cb9de */
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_248,lVar4);
  }
  else {
LAB_001cb681:
                    /* try { // try from 001cb681 to 001cb68e has its CatchHandler @ 001cb9de */
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_248,lVar4);
  }
  param_1[4] = local_238;
  *(uint *)(param_1 + 2) = (uint)local_248;
  *(undefined4 *)((long)param_1 + 0x14) = local_248._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_240;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_240._4_4_;
  param_1[1] = 8;
  *param_1 = 2;
                    /* try { // try from 001cb96e to 001cb97a has its CatchHandler @ 001cba30 */
  _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_u64_C_uucore__parser__parse_size__ParseSizeError_GT__GT_17h015e0a63404a84f0E
            (&local_1c8);
LAB_001cb97b:
  _ZN4core3ptr48drop_in_place_LT_uu_split__filenames__Suffix_GT_17h108240889ad5c101E(&local_f8);
  return param_1;
}