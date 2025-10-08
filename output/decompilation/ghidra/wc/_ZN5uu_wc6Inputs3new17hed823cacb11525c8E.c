undefined8 * _ZN5uu_wc6Inputs3new17hed823cacb11525c8E(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined local_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h9b92d7f6293c04faE
            (&local_a8);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h4306498e298fd4ffE(&local_58,&local_a8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17he062f5150264a99dE
            (&local_a8,param_2);
  lVar1 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h8ef5750e6559027dE(&local_a8);
  if (CONCAT44(uStack_54,local_58) == 0) {
    if (lVar1 == 0) {
      *param_1 = 0;
    }
    else {
      _ZN65__LT_uu_wc__Input_u20_as_u20_core__convert__From_LT__RF_T_GT__GT_4from17h1ca2dfb37c66956cE
                (local_c8,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
                    /* try { // try from 0016511b to 00165127 has its CatchHandler @ 001651db */
      _ZN5uu_wc5Input13try_as_files017h87a8bdb6df7fa337E(&local_a8,local_c8);
      if (CONCAT44(uStack_a4,local_a8) == -0x7fffffffffffffff) {
        param_1[1] = CONCAT44(uStack_9c,uStack_a0);
        param_1[2] = CONCAT44(uStack_94,local_98);
        *param_1 = 3;
        _ZN4core3ptr33drop_in_place_LT_uu_wc__Input_GT_17h52889054a5040018E(local_c8);
      }
      else {
        param_1[1] = CONCAT44(uStack_a4,local_a8);
        param_1[2] = CONCAT44(uStack_9c,uStack_a0);
        param_1[3] = CONCAT44(uStack_94,local_98);
        _ZN4core3ptr33drop_in_place_LT_uu_wc__Input_GT_17h52889054a5040018E(local_c8);
        *param_1 = 1;
      }
    }
  }
  else if (lVar1 == 0) {
    _ZN4core4iter6traits8iterator8Iterator7collect17haa3ab18d8a7b4bdeE(param_1 + 1,&local_58);
    *param_1 = 1;
  }
  else {
    local_78 = local_28;
    uStack_74 = uStack_24;
    uStack_70 = uStack_20;
    uStack_6c = uStack_1c;
    local_88 = local_38;
    uStack_84 = uStack_34;
    uStack_80 = uStack_30;
    uStack_7c = uStack_2c;
    local_98 = local_48;
    uStack_94 = uStack_44;
    uStack_90 = uStack_40;
    uStack_8c = uStack_3c;
    local_a8 = local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    lVar1 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcec516cb554c1dcaE
                      (&local_a8);
    if (lVar1 == 0) {
      uVar2 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ffc90)
                        (&PTR_s_src_uu_wc_src_wc_rs_001f9060);
                    /* catch() { ... } // from try @ 0016511b with catch @ 001651db */
      _ZN4core3ptr33drop_in_place_LT_uu_wc__Input_GT_17h52889054a5040018E(local_c8);
      puVar3 = (undefined8 *)_Unwind_Resume(uVar2);
      return puVar3;
    }
    _ZN5uu_wc7WcError14files_disabled17h89bfe6d0afa3db5eE
              (local_c8,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9021246377b03254E(local_c8);
    param_1[1] = uVar2;
    param_1[2] = &PTR__ZN4core3ptr35drop_in_place_LT_uu_wc__WcError_GT_17he209772734dac7b8E_001f9098
    ;
    *param_1 = 3;
  }
  return param_1;
}