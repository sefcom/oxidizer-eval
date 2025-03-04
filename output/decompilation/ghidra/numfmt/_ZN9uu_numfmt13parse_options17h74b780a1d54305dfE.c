undefined8 *
_ZN9uu_numfmt13parse_options17h74b780a1d54305dfE(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined uVar3;
  char cVar4;
  char cVar5;
  undefined uVar6;
  undefined uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined local_200 [8];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_150;
  long lStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
            (&local_1d8,param_2,&DAT_00115848,4);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                    (&DAT_00115848,4,&local_1d8);
  if (lVar8 == 0) {
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235900);
LAB_001c0e41:
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235918);
LAB_001c0e4e:
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235930);
LAB_001c0e5b:
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235948);
LAB_001c0e68:
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235978);
LAB_001c0e75:
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235960);
LAB_001c0e82:
                    /* WARNING: Subroutine does not return */
    _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x10);
  }
  _ZN9uu_numfmt10parse_unit17hdfe14114e84c44e9E
            (&local_138,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
  uVar3 = (char)uStack_130;
  if (local_138 != -0x8000000000000000) {
    param_1[3] = CONCAT44(uStack_124,uStack_128);
    *(ulong *)((long)param_1 + 0x11) =
         CONCAT17((undefined)uStack_128,CONCAT43(uStack_12c,uStack_130._1_3_));
    param_1[1] = local_138;
    *(char *)(param_1 + 2) = (char)uStack_130;
    goto LAB_001c08e4;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
            (&local_1d8,param_2,"to",2);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E("to",2,&local_1d8)
  ;
  if (lVar8 == 0) goto LAB_001c0e41;
  _ZN9uu_numfmt10parse_unit17hdfe14114e84c44e9E
            (&local_138,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
  cVar4 = (char)uStack_130;
  if (local_138 != -0x8000000000000000) {
    param_1[3] = CONCAT44(uStack_124,uStack_128);
    *(ulong *)((long)param_1 + 0x11) =
         CONCAT17((undefined)uStack_128,CONCAT43(uStack_12c,uStack_130._1_3_));
    param_1[1] = local_138;
    *(char *)(param_1 + 2) = (char)uStack_130;
    goto LAB_001c08e4;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
            (&local_1d8,param_2,"from-unit",9);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                    ("from-unit",9,&local_1d8);
  if (lVar8 == 0) goto LAB_001c0e4e;
  _ZN9uu_numfmt15parse_unit_size17hba45e7319bcb81aeE
            (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
  if (local_1d8 != (undefined **)0x8000000000000000) {
LAB_001c08dc:
    param_1[1] = local_1d8;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1d0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1d0._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_1c8;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_1c8._4_4_;
    goto LAB_001c08e4;
  }
  local_58 = (undefined4)uStack_1d0;
  uStack_54 = uStack_1d0._4_4_;
  uStack_50 = (undefined4)uStack_1c8;
  uStack_4c = uStack_1c8._4_4_;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
            (&local_1d8,param_2,"to-unit",7);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                    ("to-unit",7,&local_1d8);
  if (lVar8 == 0) goto LAB_001c0e5b;
  _ZN9uu_numfmt15parse_unit_size17hba45e7319bcb81aeE
            (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
  if (local_1d8 != (undefined **)0x8000000000000000) goto LAB_001c08dc;
  local_68 = (undefined4)uStack_1d0;
  uStack_64 = uStack_1d0._4_4_;
  uStack_60 = (undefined4)uStack_1c8;
  uStack_5c = uStack_1c8._4_4_;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
            (&local_1d8,param_2,"padding",7);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                    ("padding",7,&local_1d8);
  if (lVar8 != 0) {
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_isize_GT_8from_str17h4967ea1478f9fe2aE
              (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    if ((((char)local_1d8 == '\0') && (local_90 = uStack_1d0, uStack_1d0 != 0)) ||
       (_ZN9uu_numfmt13parse_options28__u7b__u7b_closure_u7d__u7d_17h552d86bdbb68f662E
                  (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10)),
       local_90 = uStack_1d0, local_1d8 == (undefined **)0x8000000000000000)) goto LAB_001c070c;
LAB_001c08d7:
    goto LAB_001c08dc;
  }
  local_90 = 0;
LAB_001c070c:
  cVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                    (param_2,"header",6);
  if (cVar5 == '\x02') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
              (&local_1d8,param_2,"header",6);
    lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                      ("header",6,&local_1d8);
    if (lVar8 != 0) {
      _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
                (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
      if ((((char)local_1d8 != '\0') || (local_98 = uStack_1d0, uStack_1d0 == 0)) &&
         (_ZN9uu_numfmt13parse_options28__u7b__u7b_closure_u7d__u7d_17h7cf9a379c7bec393E
                    (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10)),
         local_98 = uStack_1d0, local_1d8 != (undefined **)0x8000000000000000)) goto LAB_001c08d7;
      goto LAB_001c07b9;
    }
    goto LAB_001c0e75;
  }
  local_98 = 0;
LAB_001c07b9:
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
            (&local_1d8,param_2,"field",5);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                    ("field",5,&local_1d8);
  if (lVar8 == 0) goto LAB_001c0e68;
  uVar10 = *(undefined8 *)(lVar8 + 8);
  uVar1 = *(undefined8 *)(lVar8 + 0x10);
  _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h3869e540bcd9fb10E
            (&local_1d8,uVar10,uVar1);
  local_1a8 = 0;
  local_198 = CONCAT22(local_198._2_2_,1);
  uStack_1a0 = uVar1;
  uVar6 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h3a7d74c346e468e3E(&local_1d8);
  cVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h4dbd70c27d8de298E
                    (uVar6);
  if (cVar5 == '\0') {
    _ZN6uucore8features6ranges5Range9from_list17hf67be8a5ce4e6c04E(&local_1d8,uVar10,uVar1);
    local_138 = uStack_1d0;
    lVar8 = local_138;
    uStack_130 = SUB84(uStack_1c8,0);
    uStack_12c = (undefined4)((ulong)uStack_1c8 >> 0x20);
    uStack_128 = (undefined4)uStack_1c0;
    uStack_124 = (undefined4)((ulong)uStack_1c0 >> 0x20);
    if (local_1d8 != (undefined **)0x0) {
      param_1[3] = uStack_1c0;
      param_1[1] = uStack_1d0;
      param_1[2] = uStack_1c8;
LAB_001c08e4:
      *param_1 = 2;
      return param_1;
    }
    local_c8 = uStack_1c0;
    local_138._0_4_ = (undefined4)uStack_1d0;
    local_138._4_4_ = (undefined4)((ulong)uStack_1d0 >> 0x20);
    local_d8 = (undefined4)local_138;
    uStack_d4 = local_138._4_4_;
    uStack_d0 = uStack_130;
    uStack_cc = uStack_12c;
    local_138 = lVar8;
  }
  else {
    puVar9 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x10);
    if (puVar9 == (undefined8 *)0x0) goto LAB_001c0e82;
    *puVar9 = 1;
    puVar9[1] = 0xffffffffffffffff;
    _ZN5alloc5slice4hack8into_vec17hb3f415a8a3a51118E(&local_d8,puVar9,1);
  }
                    /* try { // try from 001c0920 to 001c0966 has its CatchHandler @ 001c0f1c */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
            (&local_1d8,param_2,"format",6);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                    ("format",6,&local_1d8);
  if (lVar8 == 0) {
    local_e8 = local_e8 & 0xffffffffffff0000;
    local_138 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    local_118 = 0;
    uStack_110 = 1;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 1;
    uStack_f0 = 0;
LAB_001c0a05:
                    /* try { // try from 001c0a05 to 001c0b20 has its CatchHandler @ 001c0f0a */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
              (&local_1d8,param_2,"delimiter",9);
    uVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                       ("delimiter",9,&local_1d8);
    uStack_1d0 = -0x8000000000000000;
    uStack_1c8 = (undefined *)CONCAT44(uStack_3c,local_40);
    local_1d8 = (undefined **)0x0;
    _ZN4core6option15Option_LT_T_GT_6map_or17h196257d03fbff2c6E(&local_1f8,uVar10,&local_1d8);
    local_b8 = uStack_1f0;
    lVar8 = local_b8;
    uStack_b0 = local_1e8;
    uVar10 = uStack_b0;
    local_a8 = local_1e0;
    local_b8._0_4_ = (undefined4)uStack_1f0;
    local_b8._4_4_ = (undefined4)((ulong)uStack_1f0 >> 0x20);
    uStack_b0._0_4_ = (undefined4)local_1e8;
    uStack_b0._4_4_ = (undefined4)((ulong)local_1e8 >> 0x20);
    local_b8 = lVar8;
    uStack_b0 = uVar10;
    if (local_1f8 == 0) {
      local_78 = local_1e0;
      local_88 = (undefined4)local_b8;
      uStack_84 = local_b8._4_4_;
      uStack_80 = (undefined4)uStack_b0;
      uStack_7c = uStack_b0._4_4_;
                    /* try { // try from 001c0b79 to 001c0c96 has its CatchHandler @ 001c0ef8 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
                (&local_1d8,param_2,"round",5);
      lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                        ("round",5,&local_1d8);
      if (lVar8 == 0) {
                    /* try { // try from 001c0e92 to 001c0e9e has its CatchHandler @ 001c0ef8 */
        uVar10 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                           (&PTR_s_src_uu_numfmt_src_numfmt_rs_00235990);
      }
      else {
        uVar10 = *(undefined8 *)(lVar8 + 8);
        uVar1 = *(undefined8 *)(lVar8 + 0x10);
        cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                          (uVar10,uVar1,"up",2);
        if (cVar5 == '\0') {
          cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                            (uVar10,uVar1,&DAT_0011589c,4);
          uVar6 = 1;
          if (cVar5 == '\0') {
            cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                              (uVar10,uVar1,"from-zero",9);
            uVar6 = 2;
            if (cVar5 == '\0') {
              cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                                (uVar10,uVar1,"towards-zero",0xc);
              uVar6 = 3;
              if (cVar5 == '\0') {
                cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                                  (uVar10,uVar1,"nearest",7);
                uVar6 = 4;
                if (cVar5 == '\0') {
                  local_1d8 = &PTR_s_internal_error__entered_unreacha_002358f0;
                  uStack_1d0 = 1;
                  uStack_1c8 = local_200;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                    /* try { // try from 001c0ed7 to 001c0ee8 has its CatchHandler @ 001c0ef8 */
                    /* WARNING: Subroutine does not return */
                  _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E
                            (&local_1d8,&PTR_s_src_uu_numfmt_src_numfmt_rs_002359a8);
                }
              }
            }
          }
        }
        else {
          uVar6 = 0;
        }
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
                  (&local_1d8,param_2,"suffix",6);
        lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                          ("suffix",6,&local_1d8);
        if (lVar8 == 0) {
          local_1f8 = -0x8000000000000000;
          uStack_1f0 = CONCAT44(uStack_3c,local_40);
          local_1e8 = CONCAT44(uStack_34,uStack_38);
        }
        else {
          _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                    (&local_1d8,lVar8);
          local_1e8 = uStack_1c8;
          local_1f8 = (long)local_1d8;
          uStack_1f0 = uStack_1d0;
        }
                    /* try { // try from 001c0cbf to 001c0d13 has its CatchHandler @ 001c0ee9 */
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb067340ef573e101E
                  (&local_1d8,param_2,"invalid",7);
        lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h08e9593b0ad642d4E
                          ("invalid",7,&local_1d8);
        if (lVar8 != 0) {
          _ZN79__LT_uu_numfmt__options__InvalidModes_u20_as_u20_core__str__traits__FromStr_GT_8from_str17h8733635cdad8a454E
                    (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
          uVar7 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h5e69027b68aabff9E(&local_1d8);
          local_170 = local_c8;
          local_180 = CONCAT44(uStack_d4,local_d8);
          uStack_178 = CONCAT44(uStack_cc,uStack_d0);
          local_168 = CONCAT44(uStack_84,local_88);
          uStack_160 = CONCAT44(uStack_7c,uStack_80);
          local_158 = local_78;
          local_150 = local_1f8;
          lStack_148 = uStack_1f0;
          local_140 = local_1e8;
          uStack_1d0 = CONCAT44(uStack_12c,uStack_130);
          local_1d8 = (undefined **)local_138;
          uStack_1c8 = (undefined *)CONCAT44(uStack_124,uStack_128);
          uStack_1c0 = uStack_120;
          uStack_1b8 = local_118;
          uStack_1b0 = (undefined4)uStack_110;
          uStack_1ac = uStack_110._4_4_;
          local_1a8 = local_108;
          uStack_1a0 = uStack_100;
          local_198 = (undefined4)local_f8;
          uStack_194 = local_f8._4_4_;
          uStack_190 = (undefined4)uStack_f0;
          uStack_18c = uStack_f0._4_4_;
          local_188 = local_e8;
          (*(code *)PTR_memcpy_002398d8)(param_1,&local_1d8,0xa0);
          *(undefined4 *)(param_1 + 0x14) = local_58;
          *(undefined4 *)((long)param_1 + 0xa4) = uStack_54;
          *(undefined4 *)(param_1 + 0x15) = local_68;
          *(undefined4 *)((long)param_1 + 0xac) = uStack_64;
          *(undefined *)(param_1 + 0x16) = uVar3;
          *(char *)((long)param_1 + 0xb1) = cVar4;
          param_1[0x17] = local_90;
          param_1[0x18] = local_98;
          *(undefined *)(param_1 + 0x19) = uVar7;
          *(undefined *)((long)param_1 + 0xc9) = uVar6;
          return param_1;
        }
                    /* try { // try from 001c0ea1 to 001c0ead has its CatchHandler @ 001c0ee9 */
        uVar10 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                           (&PTR_s_src_uu_numfmt_src_numfmt_rs_002359c0);
      }
                    /* catch() { ... } // from try @ 001c0cbf with catch @ 001c0ee9
                       catch() { ... } // from try @ 001c0ea1 with catch @ 001c0ee9 */
                    /* try { // try from 001c0eec to 001c0f2b has its CatchHandler @ 001c0f34 */
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hb9e962a07eb87ce8E
                (&local_1f8);
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hb9e962a07eb87ce8E
                (&local_88);
      _ZN4core3ptr54drop_in_place_LT_uu_numfmt__options__FormatOptions_GT_17h145f8e2eba079399E
                (&local_138);
      _ZN4core3ptr75drop_in_place_LT_alloc__vec__Vec_LT_uucore__features__ranges__Range_GT__GT_17hc100239ae3031ff0E
                (&local_d8);
      puVar9 = (undefined8 *)_Unwind_Resume(uVar10);
      return puVar9;
    }
    param_1[3] = local_1e0;
    uVar11 = (undefined4)local_b8;
    uVar12 = local_b8._4_4_;
    uVar13 = (undefined4)uStack_b0;
    uVar14 = uStack_b0._4_4_;
  }
  else {
    _ZN80__LT_uu_numfmt__options__FormatOptions_u20_as_u20_core__str__traits__FromStr_GT_8from_str17hdd662aa66ead1457E
              (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    local_1f8 = uStack_1d0;
    lVar8 = local_1f8;
    uStack_1f0 = (long)uStack_1c8;
    lVar2 = uStack_1f0;
    local_1e8 = uStack_1c0;
    local_1f8._0_4_ = (undefined4)uStack_1d0;
    local_1f8._4_4_ = (undefined4)((ulong)uStack_1d0 >> 0x20);
    uStack_1f0._0_4_ = SUB84(uStack_1c8,0);
    uStack_1f0._4_4_ = (undefined4)((ulong)uStack_1c8 >> 0x20);
    local_1f8 = lVar8;
    uStack_1f0 = lVar2;
    if (local_1d8 == (undefined **)0x2) {
      param_1[3] = uStack_1c0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_1f8;
      *(undefined4 *)((long)param_1 + 0xc) = local_1f8._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1f0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_1f0._4_4_;
      *param_1 = 2;
      goto LAB_001c0b47;
    }
    local_e8 = local_188;
    local_118 = uStack_1b8;
    uStack_110 = CONCAT44(uStack_1ac,uStack_1b0);
    local_f8 = CONCAT44(uStack_194,local_198);
    uStack_f0 = CONCAT44(uStack_18c,uStack_190);
    local_108 = local_1a8;
    uStack_100 = uStack_1a0;
    uStack_130 = (undefined4)local_1f8;
    uStack_12c = local_1f8._4_4_;
    uStack_128 = (undefined4)uStack_1f0;
    uStack_124 = uStack_1f0._4_4_;
    uStack_120 = uStack_1c0;
    local_138 = (long)local_1d8;
    if ((cVar4 == '\x05') || ((char)local_188 == '\0')) goto LAB_001c0a05;
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h523a2f825c855b37E
              (&local_1d8,"grouping cannot be combined with --to",0x25);
    param_1[3] = uStack_1c8;
    uVar11 = (undefined4)local_1d8;
    uVar12 = local_1d8._4_4_;
    uVar13 = (undefined4)uStack_1d0;
    uVar14 = uStack_1d0._4_4_;
  }
  *(undefined4 *)(param_1 + 1) = uVar11;
  *(undefined4 *)((long)param_1 + 0xc) = uVar12;
  *(undefined4 *)(param_1 + 2) = uVar13;
  *(undefined4 *)((long)param_1 + 0x14) = uVar14;
  *param_1 = 2;
                    /* try { // try from 001c0b3a to 001c0b46 has its CatchHandler @ 001c0f1c */
  _ZN4core3ptr54drop_in_place_LT_uu_numfmt__options__FormatOptions_GT_17h145f8e2eba079399E
            (&local_138);
LAB_001c0b47:
  _ZN4core3ptr75drop_in_place_LT_alloc__vec__Vec_LT_uucore__features__ranges__Range_GT__GT_17hc100239ae3031ff0E
            (&local_d8);
  return param_1;
}