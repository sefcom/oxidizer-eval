code * _ZN11uu_hostname16display_hostname17h96c3f430138717a0E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  undefined8 **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined auVar10 [12];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_108;
  undefined8 *local_f8;
  code *pcStack_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *local_c8;
  code *pcStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined local_90 [8];
  long local_88;
  long local_80;
  undefined8 *local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (*(code *)PTR__ZN8hostname3get17ha3f027e3ef97b427E_001eb908)(&local_168);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h1c55b45e55de881aE
            (&local_f8,&local_168);
  pcVar1 = pcStack_f0;
  puVar2 = local_f8;
                    /* try { // try from 0015892e to 00158961 has its CatchHandler @ 00158efb */
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001eb910)
            (local_138,pcStack_f0,local_e8);
  if (local_138._0_8_ == -0x8000000000000000) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h14a7025f3dc449c1E
              (&local_168,local_138._8_8_,CONCAT44(uStack_124,local_128));
    local_108 = local_158;
    local_118._0_4_ = (undefined4)local_168;
    local_118._4_4_ = local_168._4_4_;
    uStack_110 = (undefined4)uStack_160;
    uStack_10c = uStack_160._4_4_;
  }
  else {
    local_108 = (undefined8 **)CONCAT44(uStack_124,local_128);
    local_118._0_4_ = local_138._0_4_;
    local_118._4_4_ = local_138._4_4_;
    uStack_110 = local_138._8_4_;
    uStack_10c = local_138._12_4_;
  }
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h4b826df55abf9945E(puVar2,pcVar1);
                    /* try { // try from 00158991 to 001589a5 has its CatchHandler @ 00158f3b */
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eb918
          )(param_1,"ip-address",10);
  if (cVar5 == '\0') {
                    /* try { // try from 00158b7f to 00158cc9 has its CatchHandler @ 00158f3b */
    cVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eb918
            )(param_1,"short",5);
    if ((cVar5 != '\0') ||
       (cVar5 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eb918
                )(param_1,"domain",6), cVar5 != '\0')) {
      ppuVar3 = local_108;
      puVar2 = (undefined8 *)CONCAT44(uStack_10c,uStack_110);
      pcStack_f0 = (code *)((long)puVar2 + (long)local_108);
      local_e8 = (undefined8 **)0x0;
      local_f8 = puVar2;
      auVar10 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h919dc52ff59a6172E(&local_f8);
      ppuVar7 = auVar10._0_8_;
      if (auVar10._8_4_ != 0x110000) {
        cVar5 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001eb918
                )(param_1,"short",5);
        if (cVar5 == '\0') {
          lVar6 = (long)ppuVar7 + 1;
          local_138 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                                (lVar6,puVar2,ppuVar3);
          if (local_138._0_8_ != 0) {
            pcStack_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h697216bb6a2ad5bfE;
            local_168 = (undefined8 *)&DAT_001e4e10;
            uStack_160 = (code *)0x2;
            local_148 = 0;
            local_158 = &local_c8;
            uStack_150 = 1;
            local_c8 = (undefined8 *)local_138;
                    /* try { // try from 00158e60 to 00158e68 has its CatchHandler @ 00158f3b */
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eb928)(&local_168);
            goto LAB_00158e69;
          }
          ppuVar8 = &PTR_s_src_uu_hostname_src_hostname_rs_001e4e30;
          ppuVar7 = ppuVar3;
        }
        else {
          local_138 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                                (ppuVar7,puVar2,ppuVar3);
          if (local_138._0_8_ != 0) {
            pcStack_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h697216bb6a2ad5bfE;
            local_168 = (undefined8 *)&DAT_001e4e10;
            uStack_160 = (code *)0x2;
            local_148 = 0;
            local_158 = &local_c8;
            uStack_150 = 1;
            local_c8 = (undefined8 *)local_138;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eb928)(&local_168);
            goto LAB_00158e69;
          }
          ppuVar8 = &PTR_s_src_uu_hostname_src_hostname_rs_001e4e48;
          lVar6 = 0;
        }
                    /* try { // try from 00158ebd to 00158ecb has its CatchHandler @ 00158f3b */
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001eb930)
                  (puVar2,ppuVar3,lVar6,ppuVar7,ppuVar8);
        goto LAB_00158ecc;
      }
    }
    local_f8 = &local_118;
    pcStack_f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_168 = (undefined8 *)&DAT_001e4e10;
    uStack_160 = (code *)0x2;
    local_148 = 0;
    uStack_150 = 1;
    local_158 = &local_f8;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eb928)(&local_168);
LAB_00158e69:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8a91b91ddb9d04cbE(&local_118);
    return (code *)0x0;
  }
  local_158 = local_108;
  local_168 = (undefined8 *)CONCAT44(local_118._4_4_,(undefined4)local_118);
  uStack_160 = (code *)CONCAT44(uStack_10c,uStack_110);
  _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
            (local_138,&local_168);
                    /* try { // try from 001589d1 to 001589e9 has its CatchHandler @ 00158ee6 */
  (*(code *)
    PTR__ZN78__LT_alloc__string__String_u20_as_u20_std__net__socket_addr__ToSocketAddrs_GT_15to_socket_addrs17h57494fe534eec1e8E_001eb920
  )(&local_168,local_138);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h1f910f49881b969dE
            (&local_f8,&local_168);
  if (local_f8 == (undefined8 *)0x0) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8a91b91ddb9d04cbE(local_138);
    return pcStack_f0;
  }
  local_78 = local_f8;
  pcStack_70 = pcStack_f0;
  local_68 = local_e8;
  uStack_60 = uStack_e0;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8a91b91ddb9d04cbE(local_138);
                    /* try { // try from 00158a37 to 00158a3e has its CatchHandler @ 00158ece */
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h679af16c9089d8adE
            (&local_168);
  local_d8 = (undefined4)local_148;
  uStack_d4 = local_148._4_4_;
  uStack_d0 = uStack_140;
  uStack_cc = uStack_13c;
  local_e8 = local_158;
  uStack_e0 = uStack_150;
  local_f8 = local_168;
  pcStack_f0 = uStack_160;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_b8 = (undefined4)local_68;
  uStack_b4 = local_68._4_4_;
  uStack_b0 = (undefined4)uStack_60;
  uStack_ac = uStack_60._4_4_;
  local_c8 = local_78;
  pcStack_c0 = pcStack_70;
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdfed057ebce2412bE
            (local_138,&local_c8);
  if (local_138._0_2_ != 2) {
    do {
      local_48 = local_128;
      uStack_44 = uStack_124;
      uStack_40 = uStack_120;
      uStack_3c = uStack_11c;
      local_58 = local_138._0_4_;
      uStack_54 = local_138._4_4_;
      uStack_50 = local_138._8_4_;
      uStack_4c = local_138._12_4_;
      lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h14b7d5da9cfbe789E
                        (&local_f8,&local_58);
      if (lVar6 == 0) {
                    /* try { // try from 00158d4e to 00158d5d has its CatchHandler @ 00158f11 */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h4dd1289700a9e6d0E
                  (local_90,&local_58);
        lVar9 = local_80;
        lVar6 = local_88;
                    /* try { // try from 00158d6e to 00158dec has its CatchHandler @ 00158f16 */
        cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hc6feca6b8f467f93E
                          (local_88,local_80);
        if (cVar5 != '\0') {
          _ZN5alloc6string6String8truncate17h4c9243e558c5f483E(local_90,lVar9 + -2);
          lVar6 = local_88;
          lVar9 = local_80;
        }
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf4a69d682100b231E
                  (&local_a8,lVar6,lVar9 + lVar6);
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a8,0x20);
        local_158 = (undefined8 **)CONCAT44(uStack_44,local_48);
        uStack_150 = CONCAT44(uStack_3c,uStack_40);
        local_168 = (undefined8 *)CONCAT44(uStack_54,local_58);
        uStack_160 = (code *)CONCAT44(uStack_4c,uStack_50);
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h56384bc65538b181E
                  (&local_f8,&local_168);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8a91b91ddb9d04cbE(local_90);
      }
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdfed057ebce2412bE
                (local_138,&local_c8);
    } while (local_138._0_2_ != 2);
  }
                    /* try { // try from 00158ac4 to 00158b5d has its CatchHandler @ 00158f50 */
  _ZN4core3ptr94drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_core__net__socket_addr__SocketAddr_GT__GT_17hcbf3a8debdbfebd2E
            (&local_c8);
  lVar6 = local_98;
  uVar4 = local_a0;
  if (local_98 == 0) {
LAB_00158b5e:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8a91b91ddb9d04cbE(&local_a8);
    _ZN4core3ptr99drop_in_place_LT_std__collections__hash__set__HashSet_LT_core__net__socket_addr__SocketAddr_GT__GT_17hb4c4fbe108a3098aE
              (local_f8,pcStack_f0);
    return (code *)0x0;
  }
  lVar9 = local_98 + -1;
  local_138 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                        (lVar9,local_a0,local_98);
  if (local_138._0_8_ != 0) {
    local_c8 = (undefined8 *)local_138;
    pcStack_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h697216bb6a2ad5bfE;
    local_168 = (undefined8 *)&DAT_001e4e10;
    uStack_160 = (code *)0x2;
    local_148 = 0;
    uStack_150 = 1;
    local_158 = &local_c8;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eb928)(&local_168);
    goto LAB_00158b5e;
  }
                    /* try { // try from 00158e8b to 00158ea2 has its CatchHandler @ 00158f50 */
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001eb930)
            (uVar4,lVar6,0,lVar9,&PTR_s_src_uu_hostname_src_hostname_rs_001e4e60);
LAB_00158ecc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}