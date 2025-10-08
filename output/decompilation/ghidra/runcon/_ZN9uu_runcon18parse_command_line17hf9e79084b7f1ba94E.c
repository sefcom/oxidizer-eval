void _ZN9uu_runcon18parse_command_line17hf9e79084b7f1ba94E(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined local_200 [16];
  undefined4 local_1f0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  code *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar8 = 0x8000000000000000;
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17he4febe2e2d11f7c9E(&local_2b8);
  local_1dc = uStack_294;
  uStack_1d8 = (undefined4)uStack_290;
  uStack_1d4 = uStack_290._4_4_;
  uStack_1d0 = (undefined4)uStack_288;
  local_1cc = uStack_288._4_4_;
  local_1f0 = local_2a8;
                    /* try { // try from 0015ab15 to 0015aca2 has its CatchHandler @ 0015b268 */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f22a0
          )(local_200,"compute",7);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h2f0dacb574fc0bceE
            (&local_2b8,local_200);
  puVar7 = &local_2b8;
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hcb369db439fca05cE(&local_1c8);
  if (local_1c8 == (code *)0x0) {
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_138 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001f22a8
                      ,0);
    uStack_134 = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001f22a8
                 >> 0x20);
    uStack_130 = 0;
    uStack_12c = 0;
    local_148 = _ZN4core3ops8function6FnOnce9call_once17h0ea9a3512eb1b7d0E;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_140 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001f22a8
    ;
  }
  else {
    puVar7 = (undefined4 *)CONCAT44(uStack_194,local_198);
    local_148 = local_1c8;
    uStack_140 = uStack_1c0;
    local_128 = local_1a8;
    uStack_124 = uStack_1a4;
    uStack_120 = uStack_1a0;
    uStack_11c = uStack_19c;
    local_138 = (undefined4)local_1b8;
    uStack_134 = local_1b8._4_4_;
    uStack_130 = uStack_1b0;
    uStack_12c = uStack_1ac;
    uStack_110 = uStack_190;
    uStack_10c = uStack_18c;
  }
  local_118 = puVar7;
  if ((((cVar4 == '\0') &&
       (cVar5 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f22b0
                )(local_200,&DAT_00118c6c,4), cVar5 == '\0')) &&
      (cVar5 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f22b0
               )(local_200,&DAT_00118c14,4), cVar5 == '\0')) &&
     ((cVar5 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f22b0
               )(local_200,&DAT_00118cd0,4), cVar5 == '\0' &&
      (cVar5 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f22b0
               )(local_200,"range: \n",5), cVar5 == '\0')))) {
                    /* try { // try from 0015b040 to 0015b067 has its CatchHandler @ 0015b268 */
    lVar6 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h17cec20ae7398b16E
                      (&local_148);
    if (lVar6 == 0) {
      local_2f8 = -0x8000000000000000;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3d18e39686a308b6E
                (&local_2b8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      local_2e8 = CONCAT44(uStack_2a4,local_2a8);
      local_2f8 = CONCAT44(uStack_2b4,local_2b8);
      uStack_2f0 = uStack_2b0;
      uStack_2ec = uStack_2ac;
      if (local_2f8 != -0x8000000000000000) {
                    /* try { // try from 0015b085 to 0015b0c8 has its CatchHandler @ 0015b204 */
        lVar6 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h17cec20ae7398b16E
                          (&local_148);
        if (lVar6 != 0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3d18e39686a308b6E
                    (&local_2b8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
          if ((code *)CONCAT44(uStack_2b4,local_2b8) != (code *)0x8000000000000000) {
            local_78 = local_2e8;
            uStack_80 = CONCAT44(uStack_2ec,uStack_2f0);
            local_88 = local_2f8;
            local_70 = (undefined4)local_148;
            uStack_6c = local_148._4_4_;
            uStack_68 = (undefined4)uStack_140;
            uStack_64 = uStack_140._4_4_;
            local_60 = local_138;
            uStack_5c = uStack_134;
            uStack_58 = uStack_130;
            uStack_54 = uStack_12c;
            local_50 = local_128;
            uStack_4c = uStack_124;
            uStack_48 = uStack_120;
            uStack_44 = uStack_11c;
            local_40 = (undefined4)local_118;
            uStack_3c = local_118._4_4_;
            uStack_38 = uStack_110;
            uStack_34 = uStack_10c;
            uStack_1c0 = (undefined *)CONCAT44(uStack_2ac,uStack_2b0);
                    /* try { // try from 0015b1e3 to 0015b1fc has its CatchHandler @ 0015b202 */
            local_1c8 = (code *)CONCAT44(uStack_2b4,local_2b8);
            _ZN9uu_runcon18parse_command_line28__u7b__u7b_closure_u7d__u7d_17h9385ddf6434ad80aE
                      (&local_2b8,&local_88,&local_1c8);
            goto LAB_0015b014;
          }
        }
        local_2b8 = 10;
        uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1127e89508eb0964E(&local_2b8);
        uStack_80 = CONCAT44(uStack_2ec,uStack_2f0);
        local_88 = local_2f8;
        local_78 = local_2e8;
        local_70 = (undefined4)local_148;
        uStack_6c = local_148._4_4_;
        uStack_68 = (undefined4)uStack_140;
        uStack_64 = uStack_140._4_4_;
        local_60 = local_138;
        uStack_5c = uStack_134;
        uStack_58 = uStack_130;
        uStack_54 = uStack_12c;
        local_50 = local_128;
        uStack_4c = uStack_124;
        uStack_48 = uStack_120;
        uStack_44 = uStack_11c;
        local_40 = (undefined4)local_118;
        uStack_3c = local_118._4_4_;
        uStack_38 = uStack_110;
        uStack_34 = uStack_10c;
        param_1[1] = uVar8;
        param_1[2] = &
                     PTR__ZN4core3ptr45drop_in_place_LT_uu_runcon__errors__Error_GT_17he3d3652f3d9376d9E_001eac60
        ;
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr188drop_in_place_LT_uu_runcon__parse_command_line_LT_core__iter__adapters__cloned__Cloned_LT_core__slice__iter__Iter_LT_std__ffi__os_str__OsString_GT__GT__GT____u7b__u7b_closure_u7d__u7d__GT_17hdf29c886f5faa993E
                  (&local_88);
        goto LAB_0015b027;
      }
    }
    _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17ha987e9ec2f8e9af9E
              (&local_2f8);
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    param_1[3] = 0x8000000000000001;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h52cfe8bfb9aec29dE
              (&local_2b8,local_200,&DAT_00118c6c,4);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hcc8530cdd3113d91E
                      (&DAT_00118c6c,4,&local_2b8);
    if (lVar6 == 0) {
      local_108 = (code *)0x8000000000000000;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3d18e39686a308b6E
                (&local_2b8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      local_f8 = CONCAT44(uStack_2a4,local_2a8);
      local_108 = (code *)CONCAT44(uStack_2b4,local_2b8);
      uStack_100 = uStack_2b0;
      uStack_fc = uStack_2ac;
    }
                    /* try { // try from 0015acc7 to 0015ad11 has its CatchHandler @ 0015b256 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h52cfe8bfb9aec29dE
              (&local_2b8,local_200,&DAT_00118c14,4);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hcc8530cdd3113d91E
                      (&DAT_00118c14,4,&local_2b8);
    if (lVar6 == 0) {
      local_218 = 0x8000000000000000;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3d18e39686a308b6E
                (&local_2b8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      local_208 = CONCAT44(uStack_2a4,local_2a8);
      local_218 = CONCAT44(uStack_2b4,local_2b8);
      uStack_210 = uStack_2b0;
      uStack_20c = uStack_2ac;
    }
                    /* try { // try from 0015ad36 to 0015ad80 has its CatchHandler @ 0015b244 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h52cfe8bfb9aec29dE
              (&local_2b8,local_200,&DAT_00118cd0,4);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hcc8530cdd3113d91E
                      (&DAT_00118cd0,4,&local_2b8);
    if (lVar6 == 0) {
      local_2d8 = 0x8000000000000000;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3d18e39686a308b6E
                (&local_2b8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      local_2c8 = CONCAT44(uStack_2a4,local_2a8);
      local_2d8 = CONCAT44(uStack_2b4,local_2b8);
      uStack_2d0 = uStack_2b0;
      uStack_2cc = uStack_2ac;
    }
                    /* try { // try from 0015ad9c to 0015ade6 has its CatchHandler @ 0015b235 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h52cfe8bfb9aec29dE
              (&local_2b8,local_200,"range: \n",5);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hcc8530cdd3113d91E
                      ("range: \n",5,&local_2b8);
    if (lVar6 == 0) {
      local_1c8 = (code *)0x8000000000000000;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3d18e39686a308b6E
                (&local_2b8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      local_1b8 = CONCAT44(uStack_2a4,local_2a8);
      local_1c8 = (code *)CONCAT44(uStack_2b4,local_2b8);
      uStack_1c0 = (undefined *)CONCAT44(uStack_2ac,uStack_2b0);
    }
                    /* try { // try from 0015ae0b to 0015ae2e has its CatchHandler @ 0015b223 */
    lVar6 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h17cec20ae7398b16E
                      (&local_148);
    if (lVar6 != 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3d18e39686a308b6E
                (&local_2b8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      uVar8 = CONCAT44(uStack_2b4,local_2b8);
      local_28 = CONCAT44(uStack_2ac,uStack_2b0);
      uStack_20 = CONCAT44(uStack_2a4,local_2a8);
    }
    local_d8 = local_f8;
    puStack_e0 = (undefined *)CONCAT44(uStack_fc,uStack_100);
    local_e8 = local_108;
    uStack_c8 = CONCAT44(uStack_20c,uStack_210);
    uStack_d0 = local_218;
    uVar1 = uStack_d0;
    uStack_c0 = local_208;
    uVar2 = uStack_c0;
    uStack_b0 = CONCAT44(uStack_2cc,uStack_2d0);
    local_b8 = local_2d8;
    uVar3 = local_b8;
    local_a8 = local_2c8;
    local_a0 = local_1c8;
    puStack_98 = uStack_1c0;
    local_90 = local_1b8;
    local_178 = uStack_1c0;
    uStack_170 = local_1b8;
    local_188 = local_2c8;
    uStack_180 = local_1c8;
    uStack_d0._0_4_ = (undefined4)local_218;
    uStack_d0._4_4_ = (undefined4)((ulong)local_218 >> 0x20);
    uStack_c0._0_4_ = (undefined4)local_208;
    uStack_c0._4_4_ = (undefined4)((ulong)local_208 >> 0x20);
    local_b8._0_4_ = (undefined4)local_2d8;
    local_b8._4_4_ = (undefined4)((ulong)local_2d8 >> 0x20);
    local_198 = (undefined4)local_b8;
    uStack_194 = local_b8._4_4_;
    uStack_190 = uStack_2d0;
    uStack_18c = uStack_2cc;
    local_1a8 = uStack_210;
    uStack_1a4 = uStack_20c;
    uStack_1a0 = (undefined4)uStack_c0;
    uStack_19c = uStack_c0._4_4_;
    local_1b8 = local_f8;
    uStack_1b0 = (undefined4)uStack_d0;
    uStack_1ac = uStack_d0._4_4_;
    local_1c8 = local_108;
    uStack_160 = (undefined4)local_28;
    uStack_15c = local_28._4_4_;
    uStack_158 = (undefined4)uStack_20;
    uStack_154 = uStack_20._4_4_;
    local_150 = CONCAT31((int3)local_218,cVar4);
    uStack_14c = local_218._3_4_;
                    /* try { // try from 0015af77 to 0015af88 has its CatchHandler @ 0015b211 */
    uStack_1c0 = puStack_e0;
    local_168 = uVar8;
    uStack_d0 = uVar1;
    uStack_c0 = uVar2;
    local_b8 = uVar3;
    _ZN4core4iter6traits8iterator8Iterator7collect17hdb4a413cd924f414E(&local_2d8,&local_148);
    local_230 = CONCAT44(uStack_154,uStack_158);
    uStack_228 = CONCAT44(uStack_14c,local_150);
    uStack_238 = CONCAT44(uStack_15c,uStack_160);
    local_240 = local_168;
    local_250 = local_178;
    uStack_248 = uStack_170;
    local_260 = local_188;
    uStack_258 = uStack_180;
    uStack_288 = CONCAT44(uStack_1ac,uStack_1b0);
    local_280 = CONCAT44(uStack_1a4,local_1a8);
    uStack_278 = CONCAT44(uStack_19c,uStack_1a0);
    local_270 = CONCAT44(uStack_194,local_198);
    uStack_268 = CONCAT44(uStack_18c,uStack_190);
    uStack_290 = local_1b8;
    uStack_2a0 = SUB84(local_1c8,0);
    uStack_29c = (undefined4)((ulong)local_1c8 >> 0x20);
    uStack_298 = SUB84(uStack_1c0,0);
    uStack_294 = (undefined4)((ulong)uStack_1c0 >> 0x20);
    local_2b8 = (undefined4)local_2d8;
    uStack_2b4 = local_2d8._4_4_;
    uStack_2b0 = uStack_2d0;
    uStack_2ac = uStack_2cc;
    local_2a8 = (undefined4)local_2c8;
    uStack_2a4 = (undefined4)((ulong)local_2c8 >> 0x20);
LAB_0015b014:
    (*(code *)PTR_memcpy_001f2270)(param_1,&local_2b8,0x98);
  }
LAB_0015b027:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hebcc24dacbba70cfE
            (local_200);
  return;
}