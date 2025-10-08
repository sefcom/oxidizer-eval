undefined8 * _ZN8uu_split8Settings4from17hea7ff87a16a6485dE(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulong local_188;
  long local_180;
  ulong local_178;
  ulong uStack_170;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  ulong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined local_d8;
  undefined local_d7;
  undefined local_d6;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _ZN8uu_split8strategy8Strategy4from17h9ee849f2906356caE(&local_178);
  uStack_1e0 = CONCAT44(uStack_164,uStack_168);
  local_1e8 = uStack_170;
  uVar3 = local_1e8;
  local_1d8 = CONCAT44(uStack_15c,uStack_160);
  if (local_178 != 4) {
    param_1[4] = local_1d8;
    param_1[2] = uStack_170;
    param_1[3] = uStack_1e0;
    param_1[1] = local_178;
    param_1[5] = uStack_158;
    *param_1 = 2;
    return param_1;
  }
  local_1e8._0_4_ = (uint)uStack_170;
  local_1e8._4_4_ = (undefined4)(uStack_170 >> 0x20);
  local_98 = (uint)local_1e8;
  uStack_94 = local_1e8._4_4_;
  uStack_90 = uStack_168;
  uStack_8c = uStack_164;
  local_78 = (uint)local_1e8;
  uStack_74 = local_1e8._4_4_;
  uStack_70 = uStack_168;
  uStack_6c = uStack_164;
  local_1e8 = uVar3;
  local_88 = local_1d8;
  _ZN8uu_split9filenames6Suffix4from17h3e22d3f4c49fbbaaE(&local_178,param_2,&local_78);
  uVar4 = uStack_170;
  uVar3 = local_178;
  local_58 = uStack_168;
  uStack_54 = uStack_164;
  uStack_50 = uStack_160;
  uStack_4c = uStack_15c;
  local_48 = (undefined4)uStack_158;
  uStack_44 = uStack_158._4_4_;
  uStack_40 = (undefined4)uStack_150;
  uStack_3c = uStack_150._4_4_;
                    /* try { // try from 0016e9c7 to 0016eafb has its CatchHandler @ 0016eefc */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h613419db3ed32f13E
            (&local_178,param_2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h667d7f3b57b3663fE(&local_1e8,&local_178);
  if (local_1e8 == 0) {
    uVar5 = 10;
    goto LAB_0016eaa9;
  }
  uStack_168 = (undefined4)local_1d8;
  uStack_164 = local_1d8._4_4_;
  uStack_160 = uStack_1d0;
  uStack_15c = uStack_1cc;
  local_178 = local_1e8;
  uStack_170 = uStack_1e0;
  lVar7 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h30b8028acda9a64fE
                    (&local_178);
  if (lVar7 == 0) {
    ppuVar9 = &PTR_s_src_uu_split_src_split_rs_0020ae60;
LAB_0016ee7f:
                    /* try { // try from 0016ee7f to 0016ee84 has its CatchHandler @ 0016eefc */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00212048)(ppuVar9);
LAB_0016ee94:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_180 = lVar7;
  uVar5 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h3a3421a286b792a8E(&local_178,&local_180)
  ;
  cVar6 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h428b104382774de8E
                    (uVar5,0);
  uVar8 = 6;
  if (cVar6 == '\0') {
LAB_0016ede8:
    param_1[1] = uVar8;
    *param_1 = 2;
    goto LAB_0016ee31;
  }
  puVar1 = *(undefined **)(local_180 + 8);
  lVar7 = *(long *)(local_180 + 0x10);
  cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb641e38be83010ceE
                    (puVar1,lVar7,"\\0",2);
  if (cVar6 == '\0') {
    if (lVar7 != 1) {
                    /* try { // try from 0016edc1 to 0016edd0 has its CatchHandler @ 0016eefc */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
                (&local_1a8,puVar1,lVar7);
      param_1[4] = local_198;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_1a8;
      *(undefined4 *)((long)param_1 + 0x14) = local_1a8._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_1a0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_1a0._4_4_;
      uVar8 = 5;
      goto LAB_0016ede8;
    }
    uVar5 = *puVar1;
  }
  else {
    uVar5 = 0;
  }
LAB_0016eaa9:
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
            (&local_178,param_2,"-io-blksize",0xb);
  lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                    ("-io-blksize",0xb,&local_178);
  if (lVar7 == 0) {
    local_188 = 0;
LAB_0016eb5c:
                    /* try { // try from 0016eb5c to 0016eba4 has its CatchHandler @ 0016eefc */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
              (&local_1e8,param_2,"prefix",6);
    lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                      ("prefix",6,&local_1e8);
    if (lVar7 != 0) {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002120a8
      )(&local_c8,lVar7);
                    /* try { // try from 0016eba5 to 0016ebed has its CatchHandler @ 0016eed1 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
                (&local_1e8,param_2,"input",5);
      lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                        ("input",5,&local_1e8);
      if (lVar7 != 0) {
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002120a8
        )(&local_b0,lVar7);
                    /* try { // try from 0016ebee to 0016ec3c has its CatchHandler @ 0016eeb7 */
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
                  (&local_1e8,param_2,"filter",6);
        lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                          ("filter",6,&local_1e8);
        if (lVar7 == 0) {
          local_1a8 = 0x8000000000000000;
        }
        else {
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002120a8
          )(&local_1e8,lVar7);
          local_198 = local_1d8;
          local_1a8 = local_1e8;
          uStack_1a0 = uStack_1e0;
        }
                    /* try { // try from 0016ec6f to 0016ec9a has its CatchHandler @ 0016eea8 */
        cVar6 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h45c0c3cb9ce2c562E_00212108
                )(param_2,"verbose",7);
        local_d7 = (*(code *)
                     PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002120a0
                   )(param_2,"elide-empty-files",0x11);
        local_d8 = cVar6 == '\x02';
        uStack_140 = local_b8;
        uStack_150 = local_c8;
        local_148 = uStack_c0;
        local_138 = uVar3;
        local_130 = uVar4;
        local_128 = CONCAT44(uStack_54,local_58);
        uStack_120 = CONCAT44(uStack_4c,uStack_50);
        local_118 = local_48;
        uStack_114 = uStack_44;
        uStack_110 = uStack_40;
        uStack_10c = uStack_3c;
        local_108 = local_b0;
        uStack_100 = uStack_a8;
        local_f8 = local_a0;
        local_f0 = local_1a8;
        uStack_e8 = uStack_1a0;
        local_e0 = local_198;
        uStack_158 = local_88;
        uStack_168 = local_98;
        uStack_164 = uStack_94;
        uStack_160 = uStack_90;
        uStack_15c = uStack_8c;
        local_178 = local_188;
        uStack_170 = local_d0;
        local_d6 = uVar5;
        if ((((CONCAT44(uStack_94,local_98) < 6) && (CONCAT44(uStack_94,local_98) < 6)) &&
            ((0x2aUL >> ((ulong)local_98 & 0x3f) & 1) != 0)) && (local_1a8 != 0x8000000000000000)) {
          param_1[1] = 7;
          *param_1 = 2;
          _ZN4core3ptr39drop_in_place_LT_uu_split__Settings_GT_17hd6b5f345aab425beE(&local_178);
          return param_1;
        }
        (*(code *)PTR_memcpy_00211da8)(param_1,&local_178,0xa8);
        return param_1;
      }
                    /* try { // try from 0016ee87 to 0016ee93 has its CatchHandler @ 0016eed1 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00212048)
                (&PTR_s_src_uu_split_src_split_rs_0020ae90);
      goto LAB_0016ee94;
    }
    ppuVar9 = &PTR_s_src_uu_split_src_split_rs_0020ae78;
    goto LAB_0016ee7f;
  }
  (*(code *)PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_00212100)
            (&local_178,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
  if ((int)local_178 == 4) {
    if (uStack_170 != 0) {
      if (uStack_170 < 0x20000001) {
        local_d0 = uStack_170;
        _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17h2d19b3a54b2f2f6eE
                  (&local_178);
        local_188 = 1;
        goto LAB_0016eb5c;
      }
      goto LAB_0016eb40;
    }
                    /* try { // try from 0016edf5 to 0016ee02 has its CatchHandler @ 0016ee96 */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002120a8
    )(&local_1e8,lVar7);
  }
  else {
LAB_0016eb40:
                    /* try { // try from 0016eb40 to 0016eb4d has its CatchHandler @ 0016ee96 */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002120a8
    )(&local_1e8,lVar7);
  }
  param_1[4] = local_1d8;
  *(uint *)(param_1 + 2) = (uint)local_1e8;
  *(undefined4 *)((long)param_1 + 0x14) = local_1e8._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_1e0;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_1e0._4_4_;
  param_1[1] = 8;
  *param_1 = 2;
  _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17h2d19b3a54b2f2f6eE
            (&local_178);
LAB_0016ee31:
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h81504cba959ecfd9E(uVar3,uVar4);
  return param_1;
}