code * _ZN11uu_hostname16display_hostname17hb7e83080e266b2caE(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *unaff_R13;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined auVar9 [16];
  undefined auVar10 [12];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined local_138 [12];
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  code *pcStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
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
  
  _ZN8hostname3get17h61ff34d453bc4655E(&local_168);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h31343d2c1a16f84aE
            (&local_d8,&local_168);
  if (local_d8 == (undefined8 *)0x8000000000000000) {
    return pcStack_d0;
  }
  local_138._0_8_ = local_d8;
  stack0xfffffffffffffed0 = pcStack_d0;
  local_128 = local_c8;
                    /* try { // try from 001afd4d to 001afd79 has its CatchHandler @ 001b0321 */
  _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E(&local_f8,pcStack_d0);
  if (local_f8 == (undefined8 *)0x8000000000000000) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h055d5e87f2acdc55E
              (&local_168,uStack_f0,CONCAT44(uStack_e4,local_e8));
    local_108 = local_158;
    local_118._0_4_ = (undefined4)local_168;
    local_118._4_4_ = local_168._4_4_;
    uStack_110 = (undefined4)uStack_160;
    uStack_10c = uStack_160._4_4_;
  }
  else {
    local_108 = (undefined8 *)CONCAT44(uStack_e4,local_e8);
    local_118._0_4_ = (undefined4)local_f8;
    local_118._4_4_ = local_f8._4_4_;
    uStack_110 = (undefined4)uStack_f0;
    uStack_10c = uStack_f0._4_4_;
  }
                    /* try { // try from 001afda1 to 001afdc2 has its CatchHandler @ 001b0330 */
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h2b6be5ae4ecb0b10E(local_138);
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,"ip-address",10);
  if (cVar1 == '\0') {
                    /* try { // try from 001aff97 to 001b00eb has its CatchHandler @ 001b0330 */
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,"short",5);
    if ((cVar1 != '\0') ||
       (cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_1,"domain",6), cVar1 != '\0')) {
      local_d8 = (undefined8 *)CONCAT44(uStack_10c,uStack_110);
      pcStack_d0 = (code *)((long)local_108 + (long)local_d8);
      local_c8 = (undefined8 *)0x0;
      auVar10 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hee6e80971634247bE(&local_d8);
      unaff_R13 = auVar10._0_8_;
      if (auVar10._8_4_ != 0x110000) {
        cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_1,"short",5);
        puVar7 = local_108;
        puVar8 = puVar7;
        if (cVar1 == '\0') {
          lVar6 = (long)unaff_R13 + 1;
          lVar2 = CONCAT44(uStack_10c,uStack_110);
          auVar9 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                             (lVar6,lVar2,local_108);
          if (auVar9._0_8_ != 0) {
            uStack_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5d67e1dd5db2d0a3E;
            local_168 = (undefined8 *)&DAT_002181f8;
            uStack_160 = (code *)0x2;
            local_148 = 0;
            uStack_150 = 1;
            local_158 = (undefined8 **)&local_f8;
            local_f8 = (undefined8 *)local_138;
            _local_138 = auVar9;
                    /* try { // try from 001b0290 to 001b0298 has its CatchHandler @ 001b0330 */
            _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_168);
            goto LAB_001b0299;
          }
          puVar5 = &DAT_00218218;
          goto LAB_001b02e7;
        }
        lVar2 = CONCAT44(uStack_10c,uStack_110);
        auVar9 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                           (unaff_R13,lVar2,local_108);
        if (auVar9._0_8_ != 0) {
          uStack_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5d67e1dd5db2d0a3E;
          local_168 = (undefined8 *)&DAT_002181f8;
          uStack_160 = (code *)0x2;
          local_148 = 0;
          uStack_150 = 1;
          local_158 = (undefined8 **)&local_f8;
          local_f8 = (undefined8 *)local_138;
          _local_138 = auVar9;
          _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_168);
          goto LAB_001b0299;
        }
        goto LAB_001b02cf;
      }
    }
    local_d8 = &local_118;
    pcStack_d0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_168 = (undefined8 *)&DAT_002181f8;
    uStack_160 = (code *)0x2;
    local_148 = 0;
    uStack_150 = 1;
    local_158 = &local_d8;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_168);
LAB_001b0299:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2518ea1da04bd9adE(&local_118);
    return (code *)0x0;
  }
  local_158 = (undefined8 **)local_108;
  local_168 = (undefined8 *)CONCAT44(local_118._4_4_,(undefined4)local_118);
  uStack_160 = (code *)CONCAT44(uStack_10c,uStack_110);
  _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17h177306e76d9aa6a7E
            (local_138,&local_168);
                    /* try { // try from 001afdee to 001afe09 has its CatchHandler @ 001b0312 */
  _ZN78__LT_alloc__string__String_u20_as_u20_std__net__socket_addr__ToSocketAddrs_GT_15to_socket_addrs17h05be57e59cc2cc3bE
            (&local_168,local_138);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8a6ebe87743f1a37E
            (&local_d8,&local_168);
  if (local_d8 == (undefined8 *)0x0) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2518ea1da04bd9adE(local_138);
    return pcStack_d0;
  }
  local_78 = local_d8;
  pcStack_70 = pcStack_d0;
  local_68 = local_c8;
  uStack_60 = uStack_c0;
                    /* try { // try from 001afe53 to 001afe64 has its CatchHandler @ 001b02fb */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2518ea1da04bd9adE(local_138);
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h339483a9a5339a88E
            (&local_168);
  local_b8 = (undefined4)local_148;
  uStack_b4 = local_148._4_4_;
  uStack_b0 = uStack_140;
  uStack_ac = uStack_13c;
  local_c8 = local_158;
  uStack_c0 = uStack_150;
  local_d8 = local_168;
  pcStack_d0 = uStack_160;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_e8 = (undefined4)local_68;
  uStack_e4 = local_68._4_4_;
  uStack_e0 = (undefined4)uStack_60;
  uStack_dc = uStack_60._4_4_;
  local_f8 = local_78;
  uStack_f0 = pcStack_70;
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h430276f2adbaa693E
            (local_138,&local_f8);
  if (local_138._0_2_ != 2) {
    unaff_R13 = (undefined8 *)local_138;
    do {
      local_48 = (undefined4)local_128;
      uStack_44 = local_128._4_4_;
      uStack_40 = uStack_120;
      uStack_3c = uStack_11c;
      local_58 = local_138._0_4_;
      uStack_54 = local_138._4_4_;
      uStack_50 = local_138._8_4_;
      uStack_4c = uStack_12c;
                    /* try { // try from 001b0171 to 001b018b has its CatchHandler @ 001b0351 */
      lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h8480289187164d9eE
                        (&local_d8,&local_58);
      if (lVar2 == 0) {
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h6eb467b2be988407E
                  (local_90,&local_58);
                    /* try { // try from 001b019c to 001b0218 has its CatchHandler @ 001b033f */
        cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hc6ddc21bcea4abf2E
                          (local_88,local_80,
                           ":1\nsrc/uu/hostname/src/hostname.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
                           ,2);
        if (cVar1 != '\0') {
          _ZN5alloc6string6String8truncate17hafe089c60c3201e9E(local_90,local_80 + -2);
        }
        uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h4d84bc7c75e20a35E
                          (local_88,local_80 + local_88);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17hfb321296f5c74ae6E(&local_a8,uVar3);
        _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_a8,0x20);
        local_158 = (undefined8 **)CONCAT44(uStack_44,local_48);
        uStack_150 = CONCAT44(uStack_3c,uStack_40);
        local_168 = (undefined8 *)CONCAT44(uStack_54,local_58);
        uStack_160 = (code *)CONCAT44(uStack_4c,uStack_50);
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h06ac9bed48b1a8c9E
                  (&local_d8,&local_168);
                    /* try { // try from 001b0219 to 001b0220 has its CatchHandler @ 001b0351 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2518ea1da04bd9adE(local_90);
      }
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h430276f2adbaa693E
                (unaff_R13,&local_f8);
    } while (local_138._0_2_ != 2);
  }
                    /* try { // try from 001afee7 to 001aff77 has its CatchHandler @ 001b030d */
  _ZN4core3ptr94drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_core__net__socket_addr__SocketAddr_GT__GT_17h63d022b3ffacee7eE
            (&local_f8);
  lVar2 = local_98;
  uVar3 = local_a0;
  if (local_98 == 0) {
LAB_001aff78:
                    /* try { // try from 001aff78 to 001aff84 has its CatchHandler @ 001b02f6 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2518ea1da04bd9adE(&local_a8);
    _ZN4core3ptr99drop_in_place_LT_std__collections__hash__set__HashSet_LT_core__net__socket_addr__SocketAddr_GT__GT_17hfac6686e50cf3d19E
              (&local_d8);
    return (code *)0x0;
  }
  puVar8 = (undefined8 *)(local_98 + -1);
  auVar9 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                     (puVar8,local_a0,local_98);
  if (auVar9._0_8_ != 0) {
    local_f8 = (undefined8 *)local_138;
    uStack_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5d67e1dd5db2d0a3E;
    local_168 = (undefined8 *)&DAT_002181f8;
    uStack_160 = (code *)0x2;
    local_148 = 0;
    uStack_150 = 1;
    local_158 = (undefined8 **)&local_f8;
    _local_138 = auVar9;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_168);
    goto LAB_001aff78;
  }
                    /* try { // try from 001b02b7 to 001b02ce has its CatchHandler @ 001b030d */
  _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(uVar3,lVar2,0,puVar8,&DAT_00218248);
LAB_001b02cf:
  puVar7 = unaff_R13;
  puVar5 = &DAT_00218230;
  lVar6 = 0;
LAB_001b02e7:
                    /* try { // try from 001b02e7 to 001b02f5 has its CatchHandler @ 001b0330 */
  uVar3 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(lVar2,puVar8,lVar6,puVar7,puVar5);
                    /* catch() { ... } // from try @ 001aff78 with catch @ 001b02f6 */
  _ZN4core3ptr99drop_in_place_LT_std__collections__hash__set__HashSet_LT_core__net__socket_addr__SocketAddr_GT__GT_17hfac6686e50cf3d19E
            (&local_d8);
  pcVar4 = (code *)_Unwind_Resume(uVar3);
  return pcVar4;
}