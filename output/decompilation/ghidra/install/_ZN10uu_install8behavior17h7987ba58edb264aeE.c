undefined8 * _ZN10uu_install8behavior17h7987ba58edb264aeE(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined uVar6;
  undefined uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined auVar16 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined local_138 [16];
  long local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  uint local_a0;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  code *local_38;
  
  uVar15 = 0;
  bVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
          )(param_2,"directory",9);
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00209bc8
          )(param_2,"mode",4);
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hcffcdc3b06842590E
              (&local_118,param_2,"mode",4);
    lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3af3e9883b639b7aE
                      ("mode",4,&local_118);
    if (lVar9 == 0) {
LAB_001668b1:
      auVar16 = (*(code *)
                  PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_00209be0
                )(1);
      *(undefined (*) [16])(param_1 + 1) = auVar16;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    uVar10 = *(undefined8 *)(lVar9 + 8);
    uVar13 = *(undefined8 *)(lVar9 + 0x10);
    uVar8 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_00209bd0)();
    _ZN10uu_install4mode5parse17hbbdca2d765f61b21E(local_138,uVar10,uVar13,bVar1,uVar8);
    if (local_138._0_8_ != -0x8000000000000000) {
      local_108 = (undefined8 *)local_128;
      _ZN10uu_install8behavior28__u7b__u7b_closure_u7d__u7d_17h449f89b24c43dfadE(&local_118);
      goto LAB_001668b1;
    }
    local_90 = local_138._8_4_;
    uVar8 = 1;
  }
  (*(code *)
    PTR__ZN6uucore8features14backup_control21determine_backup_mode17h09b58a9d9bda0a55E_00209bd8)
            (&local_118,param_2);
  if (local_118 != (undefined **)0x0) {
    param_1[1] = local_118;
    param_1[2] = uStack_110;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  local_38 = uStack_110;
  local_8c = uVar8;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hcffcdc3b06842590E
            (&local_118,param_2,&DAT_0011a5a0,0x10);
  lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3af3e9883b639b7aE
                    (&DAT_0011a5a0,0x10,&local_118);
  if (lVar9 == 0) {
    local_50 = -0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00209938
    )(&local_50,lVar9);
  }
                    /* try { // try from 001668d4 to 00166bdd has its CatchHandler @ 0016704f */
  bVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
          )(param_2,"no-target-directory",0x13);
  if ((bVar3 & local_50 != -0x8000000000000000) == 0) {
    cVar2 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
            )(param_2,"preserve-timestamps",0x13);
    bVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
            )(param_2,"compare",7);
    bVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
            )(param_2,"strip",5);
    if (cVar2 == '\0') {
      if ((bVar4 & bVar5) == 0) goto LAB_00166b84;
      local_138 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
      local_150 = local_138;
      uStack_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
      local_118 = (undefined **)&DAT_00202188;
      uStack_110 = (code *)0x2;
      uStack_f8 = 0;
      local_108 = &local_150;
      local_100 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_118);
      local_118 = &PTR_s_Options___compare_and___strip_ar_00202290;
      uStack_110 = (code *)0x1;
      local_108 = (undefined8 *)0x8;
      local_100 = 0;
      uStack_f8 = 0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_118);
      auVar16 = (*(code *)
                  PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_00209be0
                )(1);
    }
    else {
      if (bVar4 == 0) {
LAB_00166b84:
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hcffcdc3b06842590E
                  (&local_118,param_2,"owner");
        auVar16 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3af3e9883b639b7aE
                            ("owner",5,&local_118);
        uVar10 = auVar16._8_8_;
        lVar9 = auVar16._0_8_;
        if (lVar9 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(lVar9 + 8);
          uVar10 = *(undefined8 *)(lVar9 + 0x10);
        }
        if (lVar11 == 0) {
          uVar10 = 0;
        }
        lVar9 = 1;
        if (lVar11 != 0) {
          lVar9 = lVar11;
        }
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7990a55799cbd755E
                  (&local_118,lVar9,uVar10);
        local_78 = (long)local_108;
        local_88 = (undefined4)local_118;
        uStack_84 = local_118._4_4_;
        uStack_80 = (undefined4)uStack_110;
        uStack_7c = uStack_110._4_4_;
        if (local_108 == (undefined8 *)0x0) {
          local_11c = 0;
LAB_00166cd2:
          _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hcffcdc3b06842590E
                    (&local_118,param_2,"group");
          auVar16 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3af3e9883b639b7aE
                              ("group",5,&local_118);
          uVar10 = auVar16._8_8_;
          lVar9 = auVar16._0_8_;
          if (lVar9 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(long *)(lVar9 + 8);
            uVar10 = *(undefined8 *)(lVar9 + 0x10);
          }
          if (lVar11 == 0) {
            uVar10 = 0;
          }
          lVar9 = 1;
          if (lVar11 != 0) {
            lVar9 = lVar11;
          }
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7990a55799cbd755E
                    (&local_118,lVar9,uVar10);
          local_58 = (long)local_108;
          local_68 = (undefined4)local_118;
          uStack_64 = local_118._4_4_;
          uStack_60 = (undefined4)uStack_110;
          uStack_5c = uStack_110._4_4_;
          if (local_108 == (undefined8 *)0x0) {
            local_120 = 0;
LAB_00166e2c:
            (*(code *)
              PTR__ZN6uucore8features14backup_control23determine_backup_suffix17ha7b1c82b4746605aE_00209bf8
            )(&local_150,param_2);
                    /* try { // try from 00166e3a to 00166eaf has its CatchHandler @ 0016700e */
            uVar6 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
                    )(param_2,"verbose",7);
            _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hcffcdc3b06842590E
                      (&local_118,param_2,"strip-program");
            lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3af3e9883b639b7aE
                              ("strip-program",0xd,&local_118);
            if (lVar9 == 0) {
              pcVar12 = (char *)0x0;
              uVar10 = 0;
            }
            else {
              pcVar12 = *(char **)(lVar9 + 8);
              uVar10 = *(undefined8 *)(lVar9 + 0x10);
            }
            pcVar14 = "strip";
            if (pcVar12 != (char *)0x0) {
              pcVar14 = pcVar12;
            }
            uVar13 = 5;
            if (pcVar12 != (char *)0x0) {
              uVar13 = uVar10;
            }
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7990a55799cbd755E
                      (&local_118,pcVar14,uVar13);
            local_128 = (long)local_108;
            local_138._0_4_ = SUB84(local_118,0);
            local_138._4_4_ = local_118._4_4_;
            local_138._8_4_ = SUB84(uStack_110,0);
            local_138._12_4_ = uStack_110._4_4_;
                    /* try { // try from 00166ec4 to 00166ed8 has its CatchHandler @ 00166fe5 */
            uVar7 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00209bc0
                    )(param_2,"create-leading",0xe);
            local_d8 = local_40;
            local_e8 = (undefined4)local_50;
            uStack_e4 = local_50._4_4_;
            uStack_e0 = uStack_48;
            uStack_dc = uStack_44;
            local_118 = (undefined **)local_150;
            local_108 = (undefined8 *)local_140;
            local_100 = CONCAT44(local_138._4_4_,local_138._0_4_);
            uStack_f8 = CONCAT44(local_138._12_4_,local_138._8_4_);
            local_f0 = local_128;
            param_1[8] = local_40;
            *(undefined4 *)(param_1 + 6) = (undefined4)local_50;
            *(undefined4 *)((long)param_1 + 0x34) = local_50._4_4_;
            *(undefined4 *)(param_1 + 7) = uStack_48;
            *(undefined4 *)((long)param_1 + 0x3c) = uStack_44;
            param_1[4] = uStack_f8;
            param_1[5] = local_128;
            param_1[2] = local_140;
            param_1[3] = local_100;
            *(undefined4 *)param_1 = (undefined4)local_150;
            *(undefined4 *)((long)param_1 + 4) = local_150._4_4_;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_148;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_148._4_4_;
            *(undefined4 *)(param_1 + 9) = local_8c;
            *(undefined4 *)((long)param_1 + 0x4c) = local_90;
            *(undefined4 *)(param_1 + 10) = local_11c;
            *(uint *)((long)param_1 + 0x54) = local_94;
            *(undefined4 *)(param_1 + 0xb) = local_120;
            *(undefined4 *)((long)param_1 + 0x5c) = uVar15;
            *(byte *)(param_1 + 0xc) = bVar1 ^ 1;
            *(undefined *)((long)param_1 + 0x61) = uVar6;
            *(char *)((long)param_1 + 0x62) = cVar2;
            *(byte *)((long)param_1 + 99) = bVar4;
            *(byte *)((long)param_1 + 100) = bVar5;
            *(undefined *)((long)param_1 + 0x65) = uVar7;
            *(byte *)((long)param_1 + 0x66) = bVar3;
            *(char *)((long)param_1 + 0x67) = (char)local_38;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3429258871469867E(&local_68);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3429258871469867E(&local_88);
            return param_1;
          }
                    /* try { // try from 00166d57 to 00166d61 has its CatchHandler @ 00167009 */
          (*(code *)
            PTR__ZN101__LT_uucore__features__entries__Group_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h2c7d885aadff2e1bE_00209bf0
          )(&local_118,uStack_110);
          if (local_118 != (undefined **)0x8000000000000000) {
            uVar15 = (undefined4)local_100;
            _ZN4core3ptr53drop_in_place_LT_uucore__features__entries__Group_GT_17h32ecda9d58c74f56E
                      (&local_118);
            local_150 = (undefined *)(local_100 << 0x20);
            _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u32_C_std__io__error__Error_GT__GT_17h6e773bfcd50389c6E
                      (&local_150);
            local_120 = 1;
            goto LAB_00166e2c;
          }
          uStack_148 = uStack_110;
          local_150 = (undefined *)CONCAT44(local_150._4_4_,1);
                    /* try { // try from 00166d7f to 00166db8 has its CatchHandler @ 00166fd6 */
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00209938
          )(local_138,&local_68);
          local_100 = local_128;
          uStack_110 = (code *)local_138._0_8_;
          local_108 = (undefined8 *)local_138._8_8_;
          local_118 = (undefined **)0xc;
          uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_118);
          param_1[1] = uVar10;
          param_1[2] = &
                       PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
          ;
          *param_1 = 0x8000000000000000;
                    /* try { // try from 00166dcb to 00166e39 has its CatchHandler @ 00167009 */
          _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u32_C_std__io__error__Error_GT__GT_17h6e773bfcd50389c6E
                    (&local_150);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3429258871469867E(&local_68);
        }
        else {
                    /* try { // try from 00166c09 to 00166c13 has its CatchHandler @ 0016702a */
          (*(code *)
            PTR__ZN102__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h4bb3a5c7c498e57dE_00209be8
          )(&local_118,uStack_110);
          if (local_118 != (undefined **)0x8000000000000000) {
            _ZN4core3ptr54drop_in_place_LT_uucore__features__entries__Passwd_GT_17h3e064612819241baE
                      (&local_118);
            local_94 = local_a0;
            local_150 = (undefined *)((ulong)local_a0 << 0x20);
            _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u32_C_std__io__error__Error_GT__GT_17h6e773bfcd50389c6E
                      (&local_150);
            local_11c = 1;
            goto LAB_00166cd2;
          }
          uStack_148 = uStack_110;
          local_150 = (undefined *)CONCAT44(local_150._4_4_,1);
                    /* try { // try from 00166c2d to 00166c66 has its CatchHandler @ 00166ff4 */
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00209938
          )(local_138,&local_88);
          local_100 = local_128;
          uStack_110 = (code *)local_138._0_8_;
          local_108 = (undefined8 *)local_138._8_8_;
          local_118 = (undefined **)0xb;
          uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_118);
          param_1[1] = uVar10;
          param_1[2] = &
                       PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
          ;
          *param_1 = 0x8000000000000000;
                    /* try { // try from 00166c79 to 00166d2b has its CatchHandler @ 0016702a */
          _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u32_C_std__io__error__Error_GT__GT_17h6e773bfcd50389c6E
                    (&local_150);
        }
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3429258871469867E(&local_88);
        goto LAB_001669a9;
      }
      local_138 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
      local_150 = local_138;
      uStack_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
      local_118 = (undefined **)&DAT_00202188;
      uStack_110 = (code *)0x2;
      uStack_f8 = 0;
      local_108 = &local_150;
      local_100 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_118);
      local_118 = &PTR_s_Options___compare_and___preserve_00202280;
      uStack_110 = (code *)0x1;
      local_108 = (undefined8 *)0x8;
      local_100 = 0;
      uStack_f8 = 0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_118);
      auVar16 = (*(code *)
                  PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_00209be0
                )(1);
    }
  }
  else {
    local_138 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
    local_150 = local_138;
    uStack_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
    local_118 = (undefined **)&DAT_00202188;
    uStack_110 = (code *)0x2;
    uStack_f8 = 0;
    local_108 = &local_150;
    local_100 = 1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_118);
    local_118 = &PTR_s_Options___target_directory_and___00202270;
    uStack_110 = (code *)0x1;
    local_108 = (undefined8 *)0x8;
    local_100 = 0;
    uStack_f8 = 0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_118);
    auVar16 = (*(code *)
                PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_00209be0
              )(1);
  }
  *(undefined (*) [16])(param_1 + 1) = auVar16;
  *param_1 = 0x8000000000000000;
LAB_001669a9:
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h79b91b45a57cd15bE
            (&local_50);
  return param_1;
}