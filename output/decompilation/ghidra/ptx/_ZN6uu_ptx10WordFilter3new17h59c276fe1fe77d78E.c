undefined8 *
_ZN6uu_ptx10WordFilter3new17h59c276fe1fe77d78E(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined4 **ppuVar8;
  undefined4 **local_1a0;
  undefined4 **local_198;
  undefined4 **ppuStack_190;
  undefined4 **local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 **local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 **ppuStack_138;
  long local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 **local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 **local_a8;
  undefined4 **local_98;
  undefined4 **ppuStack_90;
  undefined4 **local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 **ppuStack_70;
  undefined4 *local_68;
  code *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
          )(param_2,"only-file",9);
  if (cVar4 == '\0') {
    _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h5d2cbf9a529b523aE
              (&local_160);
    local_118 = uStack_148;
    uStack_110 = uStack_140;
    local_108 = ppuStack_138;
    ppuStack_90 = uStack_158;
    local_98 = local_160;
    local_88 = uStack_150;
  }
  else {
    _ZN6uu_ptx21read_word_filter_file17h6d54f7ff60ca3df7E(&local_160,param_2,"only-file",9);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h0abb8a3182b98a1eE
              (&local_198,&local_160);
    if (local_198 == (undefined4 **)0x0) {
      param_1[1] = ppuStack_190;
      param_1[2] = local_188;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    local_108 = uStack_170;
    local_118 = uStack_180;
    uStack_110 = uStack_178;
    ppuStack_90 = ppuStack_190;
    local_98 = local_198;
    local_88 = local_188;
  }
  uStack_80 = (undefined4)local_118;
  uStack_7c = local_118._4_4_;
  uStack_78 = (undefined4)uStack_110;
  uStack_74 = uStack_110._4_4_;
  ppuStack_70 = local_108;
                    /* try { // try from 0022ae3d to 0022aebe has its CatchHandler @ 0022b3b4 */
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
          )(param_2,"ignore-file",0xb);
  if (cVar5 == '\0') {
    _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h5d2cbf9a529b523aE
              (&local_160);
    local_e8 = uStack_148;
    uStack_e0 = uStack_140;
    local_d8 = ppuStack_138;
    uStack_110 = uStack_158;
    local_118 = local_160;
    local_108 = uStack_150;
  }
  else {
    _ZN6uu_ptx21read_word_filter_file17h6d54f7ff60ca3df7E(&local_160,param_2,"ignore-file",0xb);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h0abb8a3182b98a1eE
              (&local_198,&local_160);
    if (local_198 == (undefined4 **)0x0) {
      param_1[1] = ppuStack_190;
      param_1[2] = local_188;
      *param_1 = 0x8000000000000000;
      goto LAB_0022b20d;
    }
    local_d8 = uStack_170;
    local_e8 = uStack_180;
    uStack_e0 = uStack_178;
    uStack_110 = ppuStack_190;
    local_118 = local_198;
    local_108 = local_188;
  }
  uStack_100 = (undefined4)local_e8;
  uStack_fc = local_e8._4_4_;
  uStack_f8 = (undefined4)uStack_e0;
  uStack_f4 = uStack_e0._4_4_;
  uStack_f0 = local_d8;
                    /* try { // try from 0022af20 to 0022af4d has its CatchHandler @ 0022b38f */
  cVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
          )(param_2,"break-file",10);
  if ((cVar6 == '\0') ||
     (cVar6 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
              )(param_2,"word-regexp",0xb), cVar6 != '\0')) {
    ppuVar8 = (undefined4 **)0x0;
  }
  else {
                    /* try { // try from 0022b118 to 0022b133 has its CatchHandler @ 0022b38f */
    _ZN6uu_ptx21read_char_filter_file17h30a1eb8166058cdfE(&local_160,param_2);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h0abb8a3182b98a1eE
              (&local_198,&local_160);
    ppuVar3 = local_188;
    ppuVar2 = ppuStack_190;
    ppuVar8 = local_198;
    local_120 = param_3;
    if (local_198 == (undefined4 **)0x0) {
      param_1[1] = ppuStack_190;
      param_1[2] = local_188;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17h4d7c816e60293aedE
                (&local_118);
LAB_0022b20d:
      _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17h4d7c816e60293aedE
                (&local_98);
      return param_1;
    }
    local_a8 = uStack_170;
    local_b8 = (undefined4)uStack_180;
    uStack_b4 = uStack_180._4_4_;
    uStack_b0 = (undefined4)uStack_178;
    uStack_ac = uStack_178._4_4_;
    if (*(char *)(param_3 + 0x58) == '\0') {
                    /* try { // try from 0022b2bc to 0022b2c5 has its CatchHandler @ 0022b34d */
      _ZN4core4iter6traits8iterator8Iterator7collect17hd1811649b283122bE(&local_198);
    }
    else {
                    /* try { // try from 0022b185 to 0022b18e has its CatchHandler @ 0022b34d */
      _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h5d2cbf9a529b523aE
                (&local_160);
      uStack_178 = uStack_140;
      uStack_170 = ppuStack_138;
      local_188 = uStack_150;
      uStack_180 = uStack_148;
      local_198 = local_160;
      ppuStack_190 = uStack_158;
    }
    local_160 = ppuVar8;
    uStack_158 = ppuVar2;
    uStack_150 = ppuVar3;
    uStack_148 = (undefined4 **)CONCAT44(uStack_b4,local_b8);
    uStack_140 = (undefined4 **)CONCAT44(uStack_ac,uStack_b0);
    ppuStack_138 = local_a8;
                    /* try { // try from 0022b2f4 to 0022b302 has its CatchHandler @ 0022b339 */
    _ZN105__LT_hashbrown__set__HashSet_LT_T_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__Extend_LT_T_GT__GT_6extend17h63ed1ea3c5d8bb53E
              (&local_198,&local_160);
    local_1a0 = ppuStack_190;
    local_e8 = local_188;
    uStack_e0 = uStack_180;
    uStack_d0 = (undefined4)uStack_170;
    uStack_cc = uStack_170._4_4_;
    local_d8 = uStack_178;
    ppuVar8 = local_198;
    param_3 = local_120;
  }
                    /* try { // try from 0022af59 to 0022afba has its CatchHandler @ 0022b378 */
  cVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00380298
          )(param_2,"word-regexp",0xb);
  if (cVar6 == '\0') {
LAB_0022afd9:
    if (ppuVar8 != (undefined4 **)0x0) {
      uStack_178 = local_d8;
      uStack_170 = (undefined4 **)CONCAT44(uStack_cc,uStack_d0);
      local_188 = local_e8;
      uStack_180 = uStack_e0;
      ppuStack_190 = local_1a0;
      local_198 = ppuVar8;
      _ZN106__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h274845dfeb82bebfE
                (&local_160,&local_198);
                    /* try { // try from 0022b01d to 0022b029 has its CatchHandler @ 0022b376 */
      _ZN4core4iter6traits8iterator8Iterator7collect17hb57575b27e9774e8E(&local_198,&local_160);
                    /* try { // try from 0022b034 to 0022b044 has its CatchHandler @ 0022b367 */
      (*(code *)PTR__ZN5regex6escape17h01066032b9834fd0E_003802a0)(&local_b8,ppuStack_190,local_188)
      ;
      local_60 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_160 = (undefined4 **)&PTR_s______00351748;
      uStack_158 = (undefined4 **)0x2;
      uStack_140 = (undefined4 **)0x0;
      uStack_150 = &local_68;
      uStack_148 = (undefined4 **)&DAT_00000001;
                    /* try { // try from 0022b090 to 0022b0a1 has its CatchHandler @ 0022b355 */
      local_68 = &local_b8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4a28e95acdffaeaeE(&local_48,&local_160);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(&local_b8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(&local_198);
      local_c8 = local_40;
      uStack_c0 = uStack_38;
      bVar1 = true;
      goto LAB_0022b231;
    }
    if (*(char *)(param_3 + 0x58) == '\0') {
                    /* try { // try from 0022b1c9 to 0022b1de has its CatchHandler @ 0022b376 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he9e3a9b23988b07fE
                (&local_160,"[^ \t\n]+",7);
    }
    else {
                    /* try { // try from 0022b0e3 to 0022b0f8 has its CatchHandler @ 0022b376 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he9e3a9b23988b07fE
                (&local_160,"\\w+",3);
    }
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h88d1a3ba1868cd68E
              (&local_160,param_2,"word-regexp");
    lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h04f490a5ade46ed0E
                      ("word-regexp",0xb,&local_160);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_0022afd9;
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0037fed8
    )(&local_160,lVar7);
    local_58 = (undefined4)uStack_158;
    uStack_54 = uStack_158._4_4_;
    uStack_50 = (undefined4)uStack_150;
    uStack_4c = uStack_150._4_4_;
  }
  local_c8 = CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
  uStack_c0 = CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
  bVar1 = false;
  local_48 = local_160;
LAB_0022b231:
  param_1[7] = CONCAT44(uStack_74,uStack_78);
  param_1[8] = ppuStack_70;
  param_1[5] = local_88;
  param_1[6] = CONCAT44(uStack_7c,uStack_80);
  param_1[3] = local_98;
  param_1[4] = ppuStack_90;
  param_1[9] = local_118;
  param_1[10] = uStack_110;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)local_108;
  *(undefined4 *)((long)param_1 + 0x5c) = local_108._4_4_;
  *(undefined4 *)(param_1 + 0xc) = uStack_100;
  *(undefined4 *)((long)param_1 + 100) = uStack_fc;
  *(undefined4 *)(param_1 + 0xd) = uStack_f8;
  *(undefined4 *)((long)param_1 + 0x6c) = uStack_f4;
  *(undefined4 *)(param_1 + 0xe) = (undefined4)uStack_f0;
  *(undefined4 *)((long)param_1 + 0x74) = uStack_f0._4_4_;
  *param_1 = local_48;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_c8;
  *(undefined4 *)((long)param_1 + 0xc) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_c0;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_c0._4_4_;
  *(char *)(param_1 + 0xf) = cVar4;
  *(char *)((long)param_1 + 0x79) = cVar5;
  if (ppuVar8 != (undefined4 **)0x0 && !bVar1) {
    _ZN4core3ptr69drop_in_place_LT_std__collections__hash__set__HashSet_LT_char_GT__GT_17h00e7b9e2310a38fdE
              (ppuVar8,local_1a0);
  }
  return param_1;
}