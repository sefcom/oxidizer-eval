undefined8 *
_ZN6uu_ptx10WordFilter3new17h834513af9e48d5eeE(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **local_188;
  undefined8 uStack_180;
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined **local_148;
  undefined8 uStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 **local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 **ppuStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 *local_38;
  code *local_30;
  
  cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"only-file",9);
  if (cVar2 == '\0') {
    _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h46266b0c4833887cE
              (&local_188);
    local_108 = uStack_170;
    uStack_100 = uStack_168;
    local_f8 = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
    uStack_90 = uStack_180;
    local_98 = local_188;
    local_88 = ppuStack_178;
  }
  else {
    _ZN6uu_ptx21read_word_filter_file17h2a4d49b02fae1e68E(&local_188,param_2,"only-file",9);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6f2e9e1358d3e397E
              (&local_148,&local_188);
    if (local_148 == (undefined **)0x0) {
      param_1[1] = uStack_140;
      param_1[2] = ppuStack_138;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    local_f8 = local_120;
    local_108 = uStack_130;
    uStack_100 = uStack_128;
    uStack_90 = uStack_140;
    local_98 = local_148;
    local_88 = ppuStack_138;
  }
  uStack_80 = (undefined4)local_108;
  uStack_7c = local_108._4_4_;
  uStack_78 = (undefined4)uStack_100;
  uStack_74 = uStack_100._4_4_;
  ppuStack_70 = local_f8;
                    /* try { // try from 002b5bb6 to 002b5c31 has its CatchHandler @ 002b60d6 */
  cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"ignore-file",0xb);
  if (cVar3 == '\0') {
    _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h46266b0c4833887cE
              (&local_188);
    local_108 = uStack_170;
    uStack_100 = uStack_168;
    local_f8 = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
    uStack_60 = uStack_180;
    local_68 = local_188;
    local_58 = ppuStack_178;
  }
  else {
    _ZN6uu_ptx21read_word_filter_file17h2a4d49b02fae1e68E(&local_188,param_2,"ignore-file",0xb);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6f2e9e1358d3e397E
              (&local_148,&local_188);
    if (local_148 == (undefined **)0x0) {
      param_1[1] = uStack_140;
      param_1[2] = ppuStack_138;
      *param_1 = 0x8000000000000000;
      goto LAB_002b5fe2;
    }
    local_f8 = local_120;
    local_108 = uStack_130;
    uStack_100 = uStack_128;
    uStack_60 = uStack_140;
    local_68 = local_148;
    local_58 = ppuStack_138;
  }
  uStack_50 = (undefined4)local_108;
  uStack_4c = local_108._4_4_;
  uStack_48 = (undefined4)uStack_100;
  uStack_44 = uStack_100._4_4_;
  uStack_40 = local_f8;
                    /* try { // try from 002b5c92 to 002b5cbf has its CatchHandler @ 002b60b2 */
  cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"break-file",10);
  if ((cVar4 == '\0') ||
     (cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                        (param_2,"word-regexp",0xb), cVar4 != '\0')) {
    local_c8 = (undefined **)0x0;
  }
  else {
                    /* try { // try from 002b5e76 to 002b5e8d has its CatchHandler @ 002b60b2 */
    _ZN6uu_ptx21read_char_filter_file17hb5c562555cafe5d8E(&local_188,param_2);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hd4e54632205870f7E
              (&local_148,&local_188);
    if (local_148 == (undefined **)0x0) {
      param_1[1] = uStack_140;
      param_1[2] = ppuStack_138;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 002b5fd5 to 002b5fe1 has its CatchHandler @ 002b60d6 */
      _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17h0fe902575fe225c7E
                (&local_68);
LAB_002b5fe2:
      _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17h0fe902575fe225c7E
                (&local_98);
      return param_1;
    }
    uStack_e0 = local_120;
    uStack_f0 = (undefined4)uStack_130;
    uStack_ec = uStack_130._4_4_;
    uStack_e8 = (undefined4)uStack_128;
    uStack_e4 = uStack_128._4_4_;
    local_108 = local_148;
    uStack_100 = uStack_140;
    local_f8 = ppuStack_138;
    if (*(char *)(param_3 + 0x58) == '\0') {
                    /* try { // try from 002b6002 to 002b600b has its CatchHandler @ 002b607a */
      _ZN120__LT_std__collections__hash__set__HashSet_LT_T_C_S_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT_T_GT__GT_9from_iter17h72643febd655a837E
                (&local_148);
    }
    else {
                    /* try { // try from 002b5ee3 to 002b5eea has its CatchHandler @ 002b607a */
      _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h78c5b7e8cc9844e2E
                (&local_188);
      local_120 = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
      uStack_128 = uStack_168;
      ppuStack_138 = ppuStack_178;
      uStack_130 = uStack_170;
      local_148 = local_188;
      uStack_140 = uStack_180;
    }
    uStack_168 = CONCAT44(uStack_e4,uStack_e8);
    uStack_160 = (undefined4)uStack_e0;
    uStack_15c = uStack_e0._4_4_;
    ppuStack_178 = local_f8;
    uStack_170 = (undefined **)CONCAT44(uStack_ec,uStack_f0);
    local_188 = local_108;
    uStack_180 = uStack_100;
                    /* try { // try from 002b6032 to 002b603e has its CatchHandler @ 002b606b */
    _ZN105__LT_hashbrown__set__HashSet_LT_T_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__Extend_LT_T_GT__GT_6extend17h5ce7b6f887806e63E
              (&local_148,&local_188);
    uStack_c0 = (undefined4)uStack_140;
    uStack_bc = uStack_140._4_4_;
    ppuStack_b8 = ppuStack_138;
    ppuStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    local_a0 = local_120;
    local_c8 = local_148;
  }
                    /* try { // try from 002b5cd4 to 002b5d2f has its CatchHandler @ 002b60b7 */
  cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"word-regexp",0xb);
  if (cVar4 == '\0') {
LAB_002b5d35:
    if (local_c8 != (undefined **)0x0) {
      local_120 = local_a0;
      uStack_130 = ppuStack_b0;
      uStack_128 = uStack_a8;
      uStack_140 = CONCAT44(uStack_bc,uStack_c0);
      ppuStack_138 = ppuStack_b8;
      local_148 = local_c8;
                    /* try { // try from 002b5d72 to 002b5dba has its CatchHandler @ 002b60ad */
      _ZN106__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h288b3fee388f1b9bE
                (&local_188,&local_148);
      local_148 = local_188;
      uStack_140 = uStack_180;
      ppuStack_138 = ppuStack_178;
      uStack_130 = uStack_170;
      uStack_128 = uStack_168;
      local_120 = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
      local_118 = local_158;
      uStack_114 = uStack_154;
      uStack_110 = uStack_150;
      uStack_10c = uStack_14c;
      _ZN112__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT_alloc__string__String_GT__GT_9from_iter17hbea44346f7b7ebb1E
                (&local_108,&local_148);
      local_30 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_188 = &PTR_s______003edb98;
      uStack_180 = 2;
      uStack_168 = 0;
      ppuStack_178 = &local_38;
      uStack_170 = (undefined **)0x1;
                    /* try { // try from 002b5e05 to 002b5e11 has its CatchHandler @ 002b609b */
      local_38 = &local_108;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hb716a3158a91a555E(&local_148,&local_188);
                    /* try { // try from 002b5e12 to 002b5e1e has its CatchHandler @ 002b608c */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_108);
      local_d8 = uStack_140;
      uStack_d0 = ppuStack_138;
      bVar1 = false;
      ppuVar6 = local_148;
      goto LAB_002b5f4e;
    }
    if (*(char *)(param_3 + 0x58) == '\0') {
                    /* try { // try from 002b5f27 to 002b5f3a has its CatchHandler @ 002b60b7 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h881c0d1e76b3a749E
                (&local_188,"[^ \t\n]+",7);
    }
    else {
                    /* try { // try from 002b5e5d to 002b5e70 has its CatchHandler @ 002b60b7 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h881c0d1e76b3a749E
                (&local_188,"\\w+",3);
    }
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0320162aad36ecc4E
              (&local_188,param_2,"word-regexp",0xb);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3979b7ce1fd00743E
                      ("word-regexp",0xb,&local_188);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) goto LAB_002b5d35;
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_188,lVar5);
  }
  local_d8 = uStack_180;
  uStack_d0 = ppuStack_178;
  bVar1 = true;
  ppuVar6 = local_188;
LAB_002b5f4e:
  param_1[7] = CONCAT44(uStack_74,uStack_78);
  param_1[8] = ppuStack_70;
  param_1[5] = local_88;
  param_1[6] = CONCAT44(uStack_7c,uStack_80);
  param_1[3] = local_98;
  param_1[4] = uStack_90;
  param_1[9] = local_68;
  param_1[10] = uStack_60;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)local_58;
  *(undefined4 *)((long)param_1 + 0x5c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0xc) = uStack_50;
  *(undefined4 *)((long)param_1 + 100) = uStack_4c;
  *(undefined4 *)(param_1 + 0xd) = uStack_48;
  *(undefined4 *)((long)param_1 + 0x6c) = uStack_44;
  *(undefined4 *)(param_1 + 0xe) = (undefined4)uStack_40;
  *(undefined4 *)((long)param_1 + 0x74) = uStack_40._4_4_;
  *param_1 = ppuVar6;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_d8;
  *(undefined4 *)((long)param_1 + 0xc) = local_d8._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_d0;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_d0._4_4_;
  *(char *)(param_1 + 0xf) = cVar2;
  *(char *)((long)param_1 + 0x79) = cVar3;
  if (bVar1) {
    _ZN4core3ptr97drop_in_place_LT_core__option__Option_LT_std__collections__hash__set__HashSet_LT_char_GT__GT__GT_17h37dcaeaff8167ce4E
              (&local_c8);
  }
  return param_1;
}