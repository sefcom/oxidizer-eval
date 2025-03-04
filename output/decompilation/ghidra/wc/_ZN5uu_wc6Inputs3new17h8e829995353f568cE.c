undefined8 * _ZN5uu_wc6Inputs3new17h8e829995353f568cE(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h7e8dbfa43c92b0c2E
            (&local_b8,param_2,&DAT_0011e2e2,5);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h485bae3762b1af51E
            (&local_f8,&DAT_0011e2e2,5,&local_b8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17haeae6a80429df494E
            (&local_b8,param_2,"files0-from",0xb);
  lVar1 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h2e8e84f85343b8e4E
                    ("files0-from",0xb,&local_b8);
  if (CONCAT44(uStack_f4,local_f8) == 0) {
    if (lVar1 == 0) {
      *param_1 = 0;
    }
    else {
      _ZN65__LT_uu_wc__Input_u20_as_u20_core__convert__From_LT__RF_T_GT__GT_4from17h1837cf3aae8746e4E
                (&local_118,lVar1);
                    /* try { // try from 001b8c17 to 001b8c23 has its CatchHandler @ 001b8d18 */
      _ZN5uu_wc5Input13try_as_files017hc67935d372cfef28E(&local_b8,&local_118);
      lVar1 = CONCAT44(uStack_b4,local_b8);
      if (lVar1 == -0x8000000000000000) {
        param_1[3] = local_108;
        param_1[1] = local_118;
        param_1[2] = uStack_110;
        *param_1 = 2;
      }
      else {
        if (lVar1 == -0x7fffffffffffffff) {
          param_1[1] = CONCAT44(uStack_ac,uStack_b0);
          param_1[2] = CONCAT44(uStack_a4,local_a8);
          *param_1 = 3;
        }
        else {
          *param_1 = 1;
          param_1[1] = lVar1;
          param_1[2] = CONCAT44(uStack_ac,uStack_b0);
          param_1[3] = CONCAT44(uStack_a4,local_a8);
        }
        _ZN4core3ptr33drop_in_place_LT_uu_wc__Input_GT_17hd370e224d5568ebaE(&local_118);
      }
    }
  }
  else if (lVar1 == 0) {
    local_38 = local_c8;
    uStack_34 = uStack_c4;
    uStack_30 = uStack_c0;
    uStack_2c = uStack_bc;
    local_48 = local_d8;
    uStack_44 = uStack_d4;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
    local_58 = local_e8;
    uStack_54 = uStack_e4;
    uStack_50 = uStack_e0;
    uStack_4c = uStack_dc;
    local_68 = local_f8;
    uStack_64 = uStack_f4;
    uStack_60 = uStack_f0;
    uStack_5c = uStack_ec;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h97c0c20561b28df0E
              (param_1 + 1,&local_68);
    *param_1 = 1;
  }
  else {
    local_88 = local_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    local_b8 = local_f8;
    uStack_b4 = uStack_f4;
    uStack_b0 = uStack_f0;
    uStack_ac = uStack_ec;
    lVar1 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h74e64c5f90f3dbdcE
                      (&local_b8);
    if (lVar1 == 0) {
      uVar2 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                        (&PTR_s_src_uu_wc_src_wc_rs_00230f40);
                    /* catch() { ... } // from try @ 001b8c17 with catch @ 001b8d18 */
                    /* try { // try from 001b8d1b to 001b8d22 has its CatchHandler @ 001b8d2b */
      _ZN4core3ptr33drop_in_place_LT_uu_wc__Input_GT_17hd370e224d5568ebaE(&local_118);
      puVar3 = (undefined8 *)_Unwind_Resume(uVar2);
      return puVar3;
    }
    _ZN5uu_wc7WcError14files_disabled17hc164bba3bbd06973E
              (&local_118,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb02e4449d86ed3d2E(&local_118);
    param_1[1] = uVar2;
    param_1[2] = &PTR__ZN4core3ptr35drop_in_place_LT_uu_wc__WcError_GT_17he7409d80cf1874f7E_00230f90
    ;
    *param_1 = 3;
  }
  return param_1;
}