undefined  [16]
_ZN7uu_comm4comm17h801203c8d9c12946E
          (undefined8 param_1,undefined8 param_2,undefined ***param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  long local_1d0;
  long local_1c8;
  long local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  undefined ***local_160;
  code *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 ***local_138;
  code *local_130;
  int *piStack_128;
  undefined *local_120;
  int *local_118;
  undefined *local_110;
  undefined8 ***local_108;
  undefined *local_100;
  undefined8 **local_f8;
  code *pcStack_f0;
  undefined8 ***local_e8;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined local_a8;
  char local_a7;
  char local_a6;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88;
  char local_87;
  char local_86;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 ***local_68;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 **local_40;
  undefined8 local_38;
  
  puVar3 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
  ;
  local_c8 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  bVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
          )(param_5,"1",1);
  bVar6 = (*(code *)puVar3)(param_5,"2",1);
  _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17hc2a5695c2bc3fc96E
            (&local_58,param_3,param_4,(ulong)(bVar5 ^ 1));
                    /* try { // try from 001577d8 to 001577ed has its CatchHandler @ 00158258 */
  _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17hc2a5695c2bc3fc96E
            (&local_148,param_3,param_4,(ulong)(bVar6 ^ 1) + (ulong)(bVar5 ^ 1));
  local_68 = local_138;
  local_78 = (undefined4)local_148;
  uStack_74 = local_148._4_4_;
  uStack_70 = (undefined4)uStack_140;
  uStack_6c = uStack_140._4_4_;
  local_1a8 = 0;
  local_1a0 = 1;
  local_198 = 0;
                    /* try { // try from 00157829 to 0015783a has its CatchHandler @ 00158285 */
  auVar17 = _ZN7uu_comm10LineReader9read_line17hcee5e6e842767e3fE(param_1,&local_1a8);
  local_190 = 0;
  local_188 = 1;
  local_180 = 0;
                    /* try { // try from 00157859 to 00157874 has its CatchHandler @ 0015827d */
  auVar18 = _ZN7uu_comm10LineReader9read_line17hcee5e6e842767e3fE(local_c8,&local_190);
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
                    /* try { // try from 0015788d to 001579a0 has its CatchHandler @ 001582b7 */
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
          )(param_5,"check-order",0xb);
  bVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
          )(param_5,"nocheck-order",0xd);
  if (cVar7 == '\0' && bVar5 == 0) {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7c48d0fe3c563640E
              (&local_148,param_5,"FILE1");
    lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf45bdcd571c42201E
                       ("FILE1",&local_148);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7c48d0fe3c563640E
              (&local_148,param_5,"FILE2");
    lVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf45bdcd571c42201E
                       ("FILE2",&local_148);
    bVar5 = 1;
    if (lVar11 != 0 && lVar10 != 0) {
      cVar8 = _ZN6uucore8features2fs24paths_refer_to_same_file17h3fff10633e6ff57fE(lVar10,lVar11);
      if (cVar8 == '\0') {
        (*(code *)PTR__ZN7uu_comm19are_files_identical17hd9a64e92504ea60bE_001e7360)
                  (&local_148,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),
                   *(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
        bVar5 = (byte)local_148;
        bVar6 = local_148._1_1_;
        if ((byte)local_148 == 1) {
          _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_bool_C_std__io__error__Error_GT__GT_17ha3f821727ae26b39E
                    (1,uStack_140);
        }
        bVar5 = bVar5 | bVar6 ^ 1;
      }
      else {
        bVar5 = 0;
      }
    }
  }
  else {
    bVar5 = bVar5 ^ 1;
  }
  local_c0 = 0;
  local_b8 = 1;
  local_b0 = 0;
  local_a8 = 0;
  local_a6 = '\0';
  local_a0 = 0;
  local_98 = 1;
  local_90 = 0;
  local_88 = 1;
  local_86 = '\0';
  bVar15 = auVar17._0_8_ == 0;
  bVar16 = auVar18._0_8_ == 0;
  iVar13 = 0;
  local_a7 = cVar7;
  local_87 = cVar7;
  if (bVar15 || bVar16) {
    local_170 = 0;
    local_174 = 0;
    bVar2 = false;
    local_80 = param_1;
    do {
      uVar4 = local_198;
      uVar12 = local_1a0;
      local_1c0 = auVar18._8_8_;
      local_1d0 = auVar18._0_8_;
      local_1c8 = auVar17._8_8_;
      uVar14 = auVar17._0_8_;
      if (bVar15) {
        if (bVar16) {
          if (local_1c8 == 0 && local_1c0 == 0) break;
          if (local_1c8 == 0) goto LAB_00157c18;
          if (local_1c0 != 0) {
            cVar8 = _ZN63__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h97e01b4f27d9aef2E
                              (local_1a0,local_198,local_188);
            if (cVar8 == '\0') {
                    /* try { // try from 00157db6 to 00157e2b has its CatchHandler @ 001582cb */
              if (((bVar5 & 1) == 0) ||
                 ((cVar8 = _ZN7uu_comm12OrderChecker12verify_order17h2c1501d0f87e8821E
                                     (&local_c0,uVar12,uVar4), cVar8 != '\0' &&
                  (cVar8 = _ZN7uu_comm12OrderChecker12verify_order17h2c1501d0f87e8821E
                                     (&local_a0,local_188,local_180), cVar8 != '\0')))) {
                cVar8 = (*(code *)
                          PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
                        )(param_5,"3",1);
                if (cVar8 == '\0') {
                  (*(code *)
                    PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001e7430)
                            (&local_160,local_1a0,local_198);
                  local_f8 = (undefined8 **)&local_78;
                  pcStack_f0 = 
                  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                  ;
                  local_e8 = &local_160;
                  local_e0 = 
                  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h57a5f77fa7ff21ecE
                  ;
                  local_148 = (undefined **)&DAT_001190e8;
                  uStack_140 = (code *)0x2;
                  piStack_128 = (int *)0x0;
                  local_138 = &local_f8;
                  local_130 = (code *)0x2;
                    /* try { // try from 00157eaa to 00157eb7 has its CatchHandler @ 00158210 */
                  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e7438)(&local_148);
                  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hf71096e857d2a8cfE
                            (local_160,local_158);
                }
                local_198 = 0;
                local_180 = 0;
                    /* try { // try from 00157edc to 00157eef has its CatchHandler @ 001582cb */
                auVar17 = _ZN7uu_comm10LineReader9read_line17hcee5e6e842767e3fE(local_80,&local_1a8)
                ;
                    /* try { // try from 00157ef6 to 00157f02 has its CatchHandler @ 0015823f */
                _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h9f566212b124935eE
                          (uVar14,local_1c8);
                    /* try { // try from 00157f03 to 00157f19 has its CatchHandler @ 001582cb */
                auVar18 = _ZN7uu_comm10LineReader9read_line17hcee5e6e842767e3fE(local_c8,&local_190)
                ;
                    /* try { // try from 00157f1a to 00157f2e has its CatchHandler @ 00158230 */
                _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h9f566212b124935eE
                          (local_1d0,local_1c0);
                local_174 = local_174 + 1;
                local_164 = local_174;
                goto joined_r0x00157f57;
              }
              break;
            }
            if (cVar8 == '\x01') goto LAB_00157c18;
          }
        }
                    /* try { // try from 00157ae1 to 00157b32 has its CatchHandler @ 001582cb */
        if (((bVar5 & 1) != 0) &&
           (cVar8 = _ZN7uu_comm12OrderChecker12verify_order17h2c1501d0f87e8821E
                              (&local_c0,local_1a0,local_198), cVar8 == '\0')) break;
        cVar8 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
                )(param_5,"1",1);
        if (cVar8 == '\0') {
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001e7430)
                    (&local_f8,local_1a0,local_198);
          local_160 = (undefined ***)&local_f8;
          local_158 = 
          _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h57a5f77fa7ff21ecE
          ;
          local_148 = (undefined **)&DAT_00117ef0;
          uStack_140 = (code *)&DAT_00000001;
          piStack_128 = (int *)0x0;
          local_138 = &local_160;
          local_130 = (code *)0x1;
                    /* try { // try from 00157b8f to 00157b9c has its CatchHandler @ 00158260 */
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e7438)(&local_148);
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hf71096e857d2a8cfE
                    (local_f8,pcStack_f0);
        }
        local_198 = 0;
                    /* try { // try from 00157bbb to 00157bce has its CatchHandler @ 001582cb */
        auVar17 = _ZN7uu_comm10LineReader9read_line17hcee5e6e842767e3fE(local_80,&local_1a8);
                    /* try { // try from 00157bcf to 00157be1 has its CatchHandler @ 001582ad */
        _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h9f566212b124935eE
                  (uVar14,local_1c8);
        local_170 = local_170 + 1;
        local_16c = local_170;
        if (local_a6 != '\0') goto LAB_00157d70;
LAB_00157d66:
        bVar16 = bVar2;
        if (local_86 == '\x01') goto LAB_00157d70;
      }
      else {
        if (!bVar16) {
                    /* try { // try from 001581f5 to 0015820d has its CatchHandler @ 001582d3 */
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001e7448)
                    ("internal error: entered unreachable code",0x28,
                     &PTR_s_src_uu_comm_src_comm_rs_001e0cb8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
LAB_00157c18:
                    /* try { // try from 00157c29 to 00157c7a has its CatchHandler @ 001582cb */
        if (((bVar5 & 1) != 0) &&
           (cVar8 = _ZN7uu_comm12OrderChecker12verify_order17h2c1501d0f87e8821E
                              (&local_a0,local_188,local_180), cVar8 == '\0')) break;
        cVar8 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
                )(param_5,"2",1);
        if (cVar8 == '\0') {
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001e7430)
                    (&local_160,local_188,local_180);
          local_f8 = &local_58;
          pcStack_f0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_e8 = &local_160;
          local_e0 = 
          _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h57a5f77fa7ff21ecE
          ;
          local_148 = (undefined **)&DAT_001190e8;
          uStack_140 = (code *)0x2;
          piStack_128 = (int *)0x0;
          local_138 = &local_f8;
          local_130 = (code *)0x2;
                    /* try { // try from 00157cf9 to 00157d06 has its CatchHandler @ 0015828d */
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e7438)(&local_148);
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hf71096e857d2a8cfE
                    (local_160,local_158);
        }
        local_180 = 0;
                    /* try { // try from 00157d22 to 00157d36 has its CatchHandler @ 001582cb */
        auVar18 = _ZN7uu_comm10LineReader9read_line17hcee5e6e842767e3fE(local_c8,&local_190);
                    /* try { // try from 00157d37 to 00157d4b has its CatchHandler @ 001582bc */
        _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h9f566212b124935eE
                  (local_1d0,local_1c0);
        iVar13 = iVar13 + 1;
        local_168 = iVar13;
joined_r0x00157f57:
        if (local_a6 == '\0') goto LAB_00157d66;
LAB_00157d70:
        bVar16 = true;
        if (bVar2) {
          bVar16 = bVar2;
        }
        if (cVar7 != '\0') {
          bVar16 = bVar2;
        }
      }
      bVar2 = bVar16;
      local_1d0 = auVar18._0_8_;
      bVar16 = local_1d0 == 0;
      bVar15 = auVar17._0_8_ == 0;
    } while ((bVar15) || (local_1d0 == 0));
  }
  else {
    bVar2 = false;
  }
  local_1c0 = auVar18._8_8_;
  local_1d0 = auVar18._0_8_;
  local_1c8 = auVar17._8_8_;
                    /* try { // try from 00157f65 to 00158142 has its CatchHandler @ 001582d3 */
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
          )(param_5,"total",5);
  if (cVar7 != '\0') {
    cVar7 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e72e0
            )(param_5,"zero-terminated",0xf);
    uVar9 = 10;
    if (cVar7 != '\0') {
      uVar9 = 0;
    }
    local_160 = (undefined ***)CONCAT71(local_160._1_7_,uVar9);
    local_148 = (undefined **)&local_16c;
    uStack_140 = (code *)
                 PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_001e7210
    ;
    local_138 = &local_40;
    local_130 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4b6cb7d1e879db89E;
    piStack_128 = &local_168;
    local_120 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_001e7210
    ;
    local_118 = &local_164;
    local_110 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_001e7210
    ;
    local_108 = &local_160;
    local_100 = 
    PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_001e7440
    ;
    local_f8 = (undefined8 **)&DAT_001e0cd0;
    pcStack_f0 = (code *)&DAT_00000007;
    local_d8 = &DAT_00119288;
    local_d0 = 7;
    local_e8 = (undefined8 ***)&local_148;
    local_e0 = (code *)0x5;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e7438)(&local_f8);
  }
  if (((bVar5 & 1) == 0) || ((local_a6 == '\0' && (local_86 != '\x01')))) {
    uVar12 = 0;
  }
  else {
    if (bVar2) {
      local_148 = &PTR_s_comm__input_is_not_in_sorted_ord_001e0ca8;
      uStack_140 = (code *)&DAT_00000001;
      local_138 = (undefined8 ***)&DAT_00000008;
      local_130 = (code *)0x0;
      piStack_128 = (int *)0x0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e72b8)(&local_148);
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h397e91f739d192dbE
              (&local_f8,1,0);
    local_138 = local_e8;
    local_148 = (undefined **)local_f8;
    uStack_140 = pcStack_f0;
    local_130 = (code *)CONCAT44(local_130._4_4_,1);
    uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1d022f484ddf2fc1E(&local_148);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4070afa48d0f3fd9E(local_a0,local_98);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4070afa48d0f3fd9E(local_c0,local_b8);
                    /* try { // try from 00158175 to 00158183 has its CatchHandler @ 0015827d */
  _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h9f566212b124935eE
            (local_1d0,local_1c0);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17he0a0047fc625cdb7E
            (local_190,local_188);
                    /* try { // try from 00158193 to 0015819f has its CatchHandler @ 00158285 */
  _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h9f566212b124935eE
            (auVar17._0_8_,local_1c8);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17he0a0047fc625cdb7E
            (local_1a8,local_1a0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4070afa48d0f3fd9E
            (CONCAT44(uStack_74,local_78),CONCAT44(uStack_6c,uStack_70));
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4070afa48d0f3fd9E(local_58,local_50);
  auVar17._8_8_ =
       &
       PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h099e16d77d88e19dE_001e0d60
  ;
  auVar17._0_8_ = uVar12;
  return auVar17;
}