undefined8 *
_ZN5uu_cp7Options12from_matches17hd95c2961bde82c15E(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char cVar10;
  char cVar11;
  undefined uVar12;
  char cVar13;
  undefined uVar14;
  undefined uVar15;
  byte bVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined extraout_DL;
  char *pcVar30;
  undefined4 *puVar31;
  undefined uVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined4 local_304;
  undefined2 local_300;
  undefined4 local_2f4;
  undefined local_2f0;
  undefined local_2ef;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined2 local_2ac;
  byte local_2aa;
  byte local_2a9;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined2 local_2a0;
  byte local_29e;
  byte local_29d;
  undefined4 local_29c;
  undefined8 local_298;
  undefined auStack_290 [12];
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  char *local_258;
  undefined8 local_250;
  char *local_248;
  undefined8 local_240;
  undefined local_238 [12];
  undefined4 uStack_22c;
  undefined local_228 [8];
  undefined8 local_220;
  undefined8 local_218;
  long local_210;
  undefined **local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined *local_1a8;
  undefined8 *local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  long local_160 [8];
  undefined2 uStack_11a;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  int local_88 [2];
  char *local_80;
  undefined4 local_60 [6];
  undefined4 local_48 [6];
  
  local_f8 = _ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0,0);
  if (local_f8 == 0) {
    uVar27 = (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00267600)(8,0);
                    /* catch() { ... } // from try @ 0019f30c with catch @ 0019f9f9 */
                    /* try { // try from 0019f9fc to 0019fa05 has its CatchHandler @ 0019faa7 */
    _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h9ee7df58e7d9e41eE(&local_298);
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hf94fc9edf2322537E
              (&local_208);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(&local_178);
    puVar28 = (undefined8 *)_Unwind_Resume(uVar27);
    return puVar28;
  }
  local_100 = 0;
  local_f0 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h039b47f58c311fdeE
            (&local_298,&local_100);
  auVar33 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h515607993124c0bfE
                      (&local_298);
  puVar8 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h45c0c3cb9ce2c562E_00267bb8
  ;
  puVar7 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00267bb0
  ;
  if (auVar33._0_8_ != 0) {
    do {
      uVar29 = auVar33._8_8_;
                    /* try { // try from 0019e873 to 0019e88d has its CatchHandler @ 0019fa92 */
      uVar27 = auVar33._0_8_;
      cVar10 = (*(code *)puVar7)(param_2,uVar27,uVar29);
      if ((cVar10 != '\0') && (cVar10 = (*(code *)puVar8)(param_2,uVar27,uVar29), cVar10 == '\x02'))
      {
                    /* try { // try from 0019e892 to 0019e8a4 has its CatchHandler @ 0019fa3e */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc9b93e2d5549764dE
                  (local_238,uVar27,uVar29);
        param_1[4] = local_228;
        *(undefined4 *)(param_1 + 2) = local_238._0_4_;
        *(undefined4 *)((long)param_1 + 0x14) = local_238._4_4_;
        *(undefined4 *)(param_1 + 3) = local_238._8_4_;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_22c;
        param_1[1] = 0x8000000000000009;
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17hf35858a9cc4d4e59E
                  (&local_298);
        return param_1;
      }
      auVar33 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h515607993124c0bfE
                          (&local_298);
    } while (auVar33._0_8_ != 0);
  }
  _ZN4core3ptr67drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_str_GT__GT_17hf35858a9cc4d4e59E
            (&local_298);
  cVar10 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"recursive",9);
  cVar11 = '\x01';
  if (cVar10 == '\0') {
    cVar11 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
             )(param_2,"archive",7);
  }
  (*(code *)
    PTR__ZN6uucore8features14backup_control21determine_backup_mode17h09b58a9d9bda0a55E_00267bc0)
            (&local_1b0,param_2);
  if (local_1b0 != (undefined8 *)0x0) {
    local_2d8 = (undefined **)local_1b0;
    uStack_2d0 = local_1a8;
    local_238._0_8_ = &local_2d8;
    stack0xfffffffffffffdd0 =
         _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hf8a637a73ed45d5bE
    ;
    local_298 = (undefined **)&DAT_00120910;
    auStack_290._0_8_ = 1;
    uStack_278 = (char *)0x0;
    unique0x00004f80 = local_238;
    uStack_280 = (undefined *)0x1;
                    /* try { // try from 0019e9b0 to 0019e9c1 has its CatchHandler @ 0019fa52 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(&local_a0,&local_298);
    param_1[4] = local_90;
    *(undefined4 *)(param_1 + 2) = local_a0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_9c;
    *(undefined4 *)(param_1 + 3) = uStack_98;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_94;
    param_1[1] = 0x800000000000000a;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3fae8bb6fba1fa61E
              (local_2d8,uStack_2d0);
    return param_1;
  }
  cVar10 = (char)local_1a8;
  uVar12 = (*(code *)
             PTR__ZN6uucore8features14update_control21determine_update_mode17h24daef92534aa2cdE_00267bc8
           )(param_2);
  if (cVar10 != '\0') {
    uVar27 = *(undefined8 *)
              PTR__ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE_00267b88
    ;
    uVar29 = *(undefined8 *)
              (
              PTR__ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE_00267b88
              + 8);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb77b56fb07963162E
              (&local_298,param_2,uVar27,uVar29);
    lVar26 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf9289e9da1ed9625E
                       (uVar27,uVar29,&local_298);
    if ((lVar26 != 0) &&
       (cVar13 = _ZN5uu_cp7Options12from_matches28__u7b__u7b_closure_u7d__u7d_17h1e75cf575ac1c212E
                           (*(undefined8 *)(lVar26 + 8),*(undefined8 *)(lVar26 + 0x10)),
       cVar13 != '\0')) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc9b93e2d5549764dE
                (param_1 + 2,"--backup is mutually exclusive with -n or --update=none-fail",0x3c);
      param_1[1] = 0x8000000000000008;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
  }
  (*(code *)
    PTR__ZN6uucore8features14backup_control23determine_backup_suffix17ha7b1c82b4746605aE_00267bd0)
            (&local_178,param_2);
                    /* try { // try from 0019eac2 to 0019eb2b has its CatchHandler @ 0019fa6b */
  uVar14 = _ZN5uu_cp13OverwriteMode12from_matches17h05cd847131b1413bE(param_2);
  uVar15 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"no-target-directory",0x13);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hccb3d24b776812dbE
            (&local_298,param_2);
  lVar26 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb52848081157b384E(&local_298);
  if (lVar26 == 0) {
    local_208 = (undefined **)0x8000000000000000;
  }
  else {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hdde023ffc5414155E
              (&local_298,*(undefined8 *)(lVar26 + 8),*(undefined8 *)(lVar26 + 0x10));
    uVar29 = stack0xfffffffffffffd78;
    uVar27 = auStack_290._0_8_;
    local_1f8 = stack0xfffffffffffffd78;
    local_208 = local_298;
    uStack_200 = auStack_290._0_4_;
    uStack_1fc = auStack_290._4_4_;
                    /* try { // try from 0019eb63 to 0019eb82 has its CatchHandler @ 0019fa0b */
    if ((local_298 != (undefined **)0x8000000000000000) &&
       (cVar13 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)
                           (auStack_290._0_8_,stack0xfffffffffffffd78), cVar13 == '\0')) {
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hdde023ffc5414155E
                (&local_298,uVar27,uVar29);
      auVar33._8_8_ = stack0xfffffffffffffd78;
      auVar33._0_8_ = auStack_290._0_8_;
      param_1[4] = stack0xfffffffffffffd78;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_298;
      *(undefined4 *)((long)param_1 + 0x14) = local_298._4_4_;
      *(undefined4 *)(param_1 + 3) = auStack_290._0_4_;
      *(undefined4 *)((long)param_1 + 0x1c) = auStack_290._4_4_;
      param_1[1] = 0x800000000000000b;
      *param_1 = 0x8000000000000000;
      _auStack_290 = auVar33;
      goto LAB_0019f9c8;
    }
  }
  local_1c8 = 0;
  local_1c0 = 8;
  local_1b8 = 0;
  local_298 = (undefined **)0x0;
  auStack_290._0_8_ = &DAT_00000005;
  stack0xfffffffffffffd78 = "preserve";
  uStack_280 = &DAT_00000008;
  uStack_278 = "no-preserve";
  uStack_270 = 0xb;
  local_268 = "archive";
  local_260 = 7;
  local_258 = "preserve-default-attributes";
  local_250 = 0x1b;
  local_248 = "no-dereference-preserve-links";
  local_240 = 0x1d;
  auVar33 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17hcabef211e5e16ec2E
                      (&local_298);
  if (auVar33._0_8_ == 0) {
    uVar27 = 0;
    uVar29 = 8;
  }
  else {
    do {
                    /* try { // try from 0019ecc7 to 0019ee32 has its CatchHandler @ 0019faad */
      uVar27 = auVar33._8_8_;
      uVar29 = auVar33._0_8_;
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h85f6eaa0d94af382E
                (local_88,param_2,uVar29,uVar27);
      auVar34 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17h533e2cba337d4042E_00267bd8
                )(param_2,uVar29,uVar27);
      if (((local_88[0] == 2) && ((auVar34 & (undefined  [16])0x1) != (undefined  [16])0x0)) &&
         (local_80 != (char *)0x0)) {
        if (*local_80 == '\x01') {
          local_220 = (undefined8 *)0x0;
          local_218 = 8;
          local_210 = 0;
          local_228 = (undefined  [8])auVar34._8_8_;
          _local_238 = auVar33;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h21129240694f7174E
                    (&local_1c8,local_238,&PTR_s_src_uu_cp_src_cp_rs_0025e9e8);
        }
      }
      else {
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches19try_get_occurrences17he2cb66ff72183c0eE
                  (local_238,param_2,uVar29,uVar27);
        _ZN12clap_builder6parser5error12MatchesError6unwrap17h4c29764f4fc1d271E
                  (&local_e8,uVar29,uVar27,local_238);
        (*(code *)
          PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h172437770ffa9ae0E_00267be0
        )(&local_d0,param_2,uVar29,uVar27);
        if ((local_e8 != 0) && (CONCAT44(uStack_cc,local_d0) != 0)) {
          local_a8 = local_d8;
          local_b8 = local_e8;
          uStack_b0 = uStack_e0;
          local_2c8 = local_c0;
          local_2d8 = (undefined **)CONCAT44(uStack_cc,local_d0);
          uStack_2d0 = (undefined *)CONCAT44(uStack_c4,uStack_c8);
          local_238._0_8_ = &local_2d8;
          unique0x00004f80 = (code *)&local_1c8;
          _local_228 = auVar33;
          _ZN4core4iter6traits8iterator8Iterator4fold17h85d5e01300ec3e45E(&local_b8,local_238);
        }
      }
      auVar33 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17hcabef211e5e16ec2E
                          (&local_298);
      uVar27 = local_1b8;
      uVar29 = local_1c0;
    } while (auVar33._0_8_ != 0);
  }
                    /* try { // try from 0019ee5b to 0019ee5f has its CatchHandler @ 0019fa3c */
  _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_7sort_by17hb3b449298bb370e5E(uVar29,uVar27);
  local_300 = 0;
  local_304 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he2b72d94f2e5cff7E
            (&local_1b0,&local_1c8);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h88ded4683450ba97E
            (local_238,&local_1b0);
  bVar5 = 0;
  bVar6 = 0;
  local_2f4 = 0;
  if (local_220 != (undefined8 *)&DAT_8000000000000000) {
    local_2f4 = 0;
    bVar6 = 0;
    bVar5 = 0;
    do {
      lVar26 = local_210;
      uVar9 = local_218;
      puVar28 = local_220;
      uVar29 = stack0xfffffffffffffdd0;
      uVar27 = local_238._0_8_;
      cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                         (local_238._0_8_,stack0xfffffffffffffdd0,"archive",7);
      if (cVar13 == '\0') {
        cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                           (uVar27,uVar29,"preserve-default-attributes",0x1b);
        if (cVar13 != '\0') {
          pcVar30 = "\x01\x01\x01\x01\x01\x01";
LAB_0019f0ba:
          local_298 = (undefined **)CONCAT17(bVar6,CONCAT16(bVar5,CONCAT24(local_300,local_304)));
          auStack_290._0_4_ = local_2f4;
          (*(code *)PTR__ZN5uu_cp10Attributes5union17h43e8d826b0daba39E_00267b98)
                    (&local_2d8,&local_298,pcVar30);
          local_304 = (undefined4)local_2d8;
          local_300 = local_2d8._4_2_;
          local_2f4 = (undefined4)uStack_2d0;
          bVar5 = local_2d8._6_1_;
          bVar6 = local_2d8._7_1_;
          goto LAB_0019f0ec;
        }
        cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                           (uVar27,uVar29,"no-dereference-preserve-links",0x1d);
        if (cVar13 != '\0') {
          pcVar30 = "";
          goto LAB_0019f0ba;
        }
        cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                           (uVar27,uVar29,"preserve",8);
        if (cVar13 == '\0') {
          cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                             (uVar27,uVar29,"no-preserve",0xb);
          if ((cVar13 == '\0') || (lVar26 == 0)) goto LAB_0019f0ec;
          local_2ac = local_300;
          local_2b0 = local_304;
          local_2a8 = local_2f4;
          local_190 = puVar28;
          local_188 = uVar9;
          local_180 = lVar26;
          local_2aa = bVar5;
          local_2a9 = bVar6;
          _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h3c76c5c03f48052bE
                    (&local_2d8,&local_190);
          _ZN5uu_cp10Attributes10parse_iter17ha78706e08b35f5c6E(&local_298,&local_2d8);
          local_1d8 = (undefined8 *)auStack_290._0_8_;
          local_1d0 = auStack_290._8_4_;
          if (local_298 != (undefined **)0x800000000000000c) {
            *(undefined4 *)((long)param_1 + 0x3c) = local_268._4_4_;
            *(undefined4 *)((long)param_1 + 0x2c) = uStack_278._4_4_;
            *(undefined4 *)(param_1 + 6) = (undefined4)uStack_270;
            *(undefined4 *)((long)param_1 + 0x34) = uStack_270._4_4_;
            *(undefined4 *)(param_1 + 7) = (undefined4)local_268;
            *(undefined4 *)((long)param_1 + 0x1c) = uStack_284;
            *(undefined4 *)(param_1 + 4) = (undefined4)uStack_280;
            *(undefined4 *)((long)param_1 + 0x24) = uStack_280._4_4_;
            *(undefined4 *)(param_1 + 5) = (undefined4)uStack_278;
            *(undefined4 *)(param_1 + 3) = auStack_290._8_4_;
            goto LAB_0019f9b0;
          }
          _ZN5uu_cp10Attributes4diff17hb3b318adb7407dd4E(&local_2a4,&local_2b0,&local_1d8);
        }
        else {
          local_2ac = local_300;
          local_2b0 = local_304;
          local_2a8 = local_2f4;
          local_190 = puVar28;
          local_188 = uVar9;
          local_180 = lVar26;
          local_2aa = bVar5;
          local_2a9 = bVar6;
          _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h3c76c5c03f48052bE
                    (&local_2d8,&local_190);
                    /* try { // try from 0019f1a2 to 0019f28d has its CatchHandler @ 0019fa40 */
          _ZN5uu_cp10Attributes10parse_iter17ha78706e08b35f5c6E(&local_298,&local_2d8);
          local_1e8 = (undefined8 *)auStack_290._0_8_;
          local_1e0 = auStack_290._8_4_;
          if (local_298 != (undefined **)0x800000000000000c) {
            *(undefined4 *)((long)param_1 + 0x3c) = local_268._4_4_;
            *(undefined4 *)((long)param_1 + 0x2c) = uStack_278._4_4_;
            *(undefined4 *)(param_1 + 6) = (undefined4)uStack_270;
            *(undefined4 *)((long)param_1 + 0x34) = uStack_270._4_4_;
            *(undefined4 *)(param_1 + 7) = (undefined4)local_268;
            *(undefined4 *)((long)param_1 + 0x1c) = uStack_284;
            *(undefined4 *)(param_1 + 4) = (undefined4)uStack_280;
            *(undefined4 *)((long)param_1 + 0x24) = uStack_280._4_4_;
            *(undefined4 *)(param_1 + 5) = (undefined4)uStack_278;
            *(undefined4 *)(param_1 + 3) = auStack_290._8_4_;
LAB_0019f9b0:
            param_1[2] = auStack_290._0_8_;
            param_1[1] = local_298;
            *param_1 = 0x8000000000000000;
                    /* try { // try from 0019f9bb to 0019f9c7 has its CatchHandler @ 0019fa66 */
            _ZN4core3ptr134drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP_usize_C__RF_str_C_alloc__vec__Vec_LT__RF_alloc__string__String_GT__RP__GT__GT_17ha9de14c907de8aaeE
                      (&local_1b0);
            goto LAB_0019f9c8;
          }
          (*(code *)PTR__ZN5uu_cp10Attributes5union17h43e8d826b0daba39E_00267b98)
                    (&local_2a4,&local_2b0,&local_1e8);
        }
        local_304 = local_2a4;
        local_300 = local_2a0;
        local_2f4 = local_29c;
        bVar5 = local_29e;
        bVar6 = local_29d;
      }
      else {
        local_300 = 0x101;
        local_304 = 0x1010101;
        local_2f4 = 0x10101;
        bVar5 = 0;
        bVar6 = 0;
LAB_0019f0ec:
        _ZN4core3ptr69drop_in_place_LT_alloc__vec__Vec_LT__RF_alloc__string__String_GT__GT_17ha881e94fe1fb35beE
                  (puVar28,uVar9);
      }
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h88ded4683450ba97E
                (local_238,&local_1b0);
    } while (local_220 != (undefined8 *)&DAT_8000000000000000);
  }
                    /* try { // try from 0019eec0 to 0019eef5 has its CatchHandler @ 0019fa66 */
  _ZN4core3ptr134drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP_usize_C__RF_str_C_alloc__vec__Vec_LT__RF_alloc__string__String_GT__RP__GT__GT_17ha9de14c907de8aaeE
            (&local_1b0);
  if ((bVar5 & 1) != 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc9b93e2d5549764dE
              (local_238,"SELinux was not enabled during the compile time!",0x30);
    uStack_280 = (undefined *)local_228;
    local_298 = (undefined **)0x8000000000000003;
    _auStack_290 = _local_238;
    if ((bVar6 & 1) != 0) {
      param_1[7] = local_268;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_278;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_278._4_4_;
      *(undefined4 *)(param_1 + 6) = (undefined4)uStack_270;
      *(undefined4 *)((long)param_1 + 0x34) = uStack_270._4_4_;
      param_1[3] = stack0xfffffffffffffdd0;
      param_1[4] = local_228;
      param_1[1] = 0x8000000000000003;
      param_1[2] = local_238._0_8_;
      *param_1 = 0x8000000000000000;
      goto LAB_0019f9c8;
    }
                    /* try { // try from 0019f30c to 0019f315 has its CatchHandler @ 0019f9f9 */
    _ZN5uu_cp20show_error_if_needed17h37308d2f7c80265fE(&local_298);
                    /* try { // try from 0019f316 to 0019f391 has its CatchHandler @ 0019fa66 */
    _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h9ee7df58e7d9e41eE(&local_298);
  }
  bVar16 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"Z",1);
  cVar13 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00267bb0
           )(param_2,"context",7);
  if (cVar13 == '\0') {
LAB_0019f3ab:
    local_2d8 = (undefined **)0x8000000000000000;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb77b56fb07963162E
              (&local_298,param_2,"context",7);
    lVar26 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf9289e9da1ed9625E
                       ("context",7,&local_298);
    if (lVar26 == 0) goto LAB_0019f3ab;
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00267a58
    )(&local_298,lVar26);
    local_2c8 = stack0xfffffffffffffd78;
    local_2d8 = local_298;
    uStack_2d0 = (undefined *)auStack_290._0_8_;
  }
                    /* try { // try from 0019f3b0 to 0019f5ef has its CatchHandler @ 0019fa83 */
  uVar17 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"attributes-only",0xf);
  uVar18 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"copy-contents",0xd);
  uVar19 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"cli-symbolic-links",0x12);
  uVar20 = _ZN5uu_cp8CopyMode12from_matches17h51c7abde47ff2194E(param_2);
  cVar13 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"no-dereference",0xe);
  if (cVar13 == '\0') {
    cVar13 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
             )(param_2,"no-dereference-preserve-links",0x1d);
    if (cVar13 != '\0') goto LAB_0019f466;
    cVar13 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
             )(param_2,"archive",7);
    if (cVar13 != '\0') goto LAB_0019f466;
    local_2f0 = 1;
    if (cVar11 != '\0') {
      cVar13 = _ZN5uu_cp8CopyMode12from_matches17h51c7abde47ff2194E(param_2);
      if (cVar13 != '\0') goto LAB_0019f466;
    }
  }
  else {
LAB_0019f466:
    local_2f0 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
                )(param_2,"dereference",0xb);
  }
  uVar21 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"one-file-system",0xf);
  uVar22 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"parents",7);
  uVar23 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"debug",5);
  cVar13 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"verbose",7);
  local_2ef = 1;
  if (cVar13 == '\0') {
    local_2ef = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
                )(param_2,"debug",5);
  }
  uVar24 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
           )(param_2,"strip-trailing-slashes",0x16);
  uVar27 = 0;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb77b56fb07963162E
            (&local_298,param_2,"reflink",7);
  lVar26 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf9289e9da1ed9625E
                     ("reflink",7,&local_298);
  local_2b4 = (undefined4)CONCAT71((int7)((ulong)uVar27 >> 8),1);
  if (lVar26 == 0) {
LAB_0019f5c1:
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb77b56fb07963162E
              (&local_298,param_2,"sparse",6);
    lVar26 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf9289e9da1ed9625E
                       ("sparse",6,&local_298);
    uVar32 = 1;
    if (lVar26 == 0) {
LAB_0019f66a:
                    /* try { // try from 0019f66a to 0019f67e has its CatchHandler @ 0019fa0d */
      uVar25 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
               )(param_2,"progress",8);
      param_1[6] = local_2d8;
      param_1[7] = uStack_2d0;
      uStack_11a = (undefined2)((ulong)uStack_2d0 >> 0x30);
      *(undefined2 *)((long)param_1 + 0x3e) = uStack_11a;
      param_1[8] = local_2c8;
      *(undefined4 *)(param_1 + 9) = local_304;
      *(undefined2 *)((long)param_1 + 0x4c) = local_300;
      param_1[4] = CONCAT44(uStack_1fc,uStack_200);
      param_1[5] = local_1f8;
      *param_1 = local_178;
      param_1[1] = uStack_170;
      param_1[2] = local_168;
      param_1[3] = local_208;
      *(byte *)((long)param_1 + 0x4e) = bVar5;
      *(byte *)((long)param_1 + 0x4f) = bVar6;
      *(undefined4 *)(param_1 + 10) = local_2f4;
      *(undefined *)((long)param_1 + 0x54) = uVar14;
      *(undefined *)((long)param_1 + 0x55) = extraout_DL;
      *(undefined *)((long)param_1 + 0x56) = uVar17;
      *(undefined *)((long)param_1 + 0x57) = uVar18;
      *(undefined *)(param_1 + 0xb) = uVar19;
      *(undefined *)((long)param_1 + 0x59) = local_2f0;
      *(undefined *)((long)param_1 + 0x5a) = uVar15;
      *(undefined *)((long)param_1 + 0x5b) = uVar21;
      *(undefined *)((long)param_1 + 0x5c) = uVar22;
      *(undefined *)((long)param_1 + 0x5d) = uVar24;
      *(char *)((long)param_1 + 0x5e) = cVar11;
      *(undefined *)((long)param_1 + 0x5f) = uVar23;
      *(undefined *)(param_1 + 0xc) = local_2ef;
      *(undefined *)((long)param_1 + 0x61) = uVar25;
      *(byte *)((long)param_1 + 0x62) = bVar16 | local_2d8 != (undefined **)0x8000000000000000;
      *(undefined *)((long)param_1 + 99) = uVar32;
      *(char *)((long)param_1 + 100) = (char)local_2b4;
      *(char *)((long)param_1 + 0x65) = cVar10;
      *(undefined *)((long)param_1 + 0x66) = uVar12;
      *(undefined *)((long)param_1 + 0x67) = uVar20;
      return param_1;
    }
    uVar27 = *(undefined8 *)(lVar26 + 8);
    uVar29 = *(undefined8 *)(lVar26 + 0x10);
    local_160[0] = lVar26;
    cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                       (uVar27,uVar29,"always",6);
    if (cVar13 != '\0') {
      uVar32 = 0;
      goto LAB_0019f66a;
    }
    cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                       (uVar27,uVar29,"auto",4);
    if (cVar13 != '\0') goto LAB_0019f66a;
    cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                       (uVar27,uVar29,"never",5);
    uVar32 = 2;
    if (cVar13 != '\0') goto LAB_0019f66a;
    local_238._0_8_ = local_160;
    stack0xfffffffffffffdd0 =
         _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdf6e3f48b5cbb40eE;
    local_298 = &PTR_s_invalid_argument_for__reflink__f_0025e9c8;
    auStack_290._0_8_ = 2;
    uStack_278 = (char *)0x0;
    unique0x00004f80 = local_238;
    uStack_280 = &DAT_00000001;
    puVar31 = local_48;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(puVar31,&local_298);
  }
  else {
    pcVar1 = *(code **)(lVar26 + 8);
    uVar27 = *(undefined8 *)(lVar26 + 0x10);
    cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                       (pcVar1,uVar27,"always",6);
    if (cVar13 != '\0') {
      local_2b4 = 0;
      goto LAB_0019f5c1;
    }
    cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                       (pcVar1,uVar27,"auto",4);
    if (cVar13 != '\0') goto LAB_0019f5c1;
    uVar29 = 0;
    cVar13 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                       (pcVar1,uVar27,"never",5);
    local_2b4 = (undefined4)CONCAT71((int7)((ulong)uVar29 >> 8),2);
    if (cVar13 != '\0') goto LAB_0019f5c1;
    local_238._0_8_ = (long *)0x0;
    local_220 = (undefined8 *)CONCAT71(local_220._1_7_,1);
    local_1b0 = (undefined8 *)local_238;
    local_1a8 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    local_298 = &PTR_s_invalid_argument_for__reflink__f_0025e9a8;
    auStack_290._0_8_ = 2;
    uStack_278 = (char *)0x0;
    unique0x00004f80 = (char *)&local_1b0;
    uStack_280 = &DAT_00000001;
                    /* try { // try from 0019f886 to 0019f90d has its CatchHandler @ 0019fa83 */
    puVar31 = local_60;
    unique0x10001bfb = pcVar1;
    local_228 = (undefined  [8])uVar27;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(puVar31,&local_298);
  }
  param_1[4] = *(undefined8 *)(puVar31 + 4);
  uVar2 = puVar31[1];
  uVar3 = puVar31[2];
  uVar4 = puVar31[3];
  *(undefined4 *)(param_1 + 2) = *puVar31;
  *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar4;
  param_1[1] = 0x8000000000000008;
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h2163d9b30f80841cE
            (&local_2d8);
LAB_0019f9c8:
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hf94fc9edf2322537E
            (&local_208);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(&local_178);
  return param_1;
}