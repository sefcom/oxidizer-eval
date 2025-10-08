undefined8 *
_ZN5uu_od9OdOptions3new17hce9a179f9945fb25E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  char cVar6;
  undefined uVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  undefined8 local_150;
  undefined local_148 [16];
  undefined8 *******local_138;
  undefined8 *******local_130;
  undefined8 *******local_120;
  undefined8 *******local_118;
  long local_110;
  undefined8 local_108;
  undefined4 local_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  int *piStack_c0;
  undefined8 *local_b8;
  long local_b0;
  undefined8 *******local_a8;
  undefined8 *******local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 *local_88;
  code *local_80;
  undefined local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *******local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *******local_38;
  
  uVar9 = 0;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7233f263f5cb49beE
            (&local_178,param_2,"endian",6);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h761c39e3b3126053E
                    ("endian",6,&local_178);
  if (lVar8 == 0) {
    local_fc = (undefined4)CONCAT71((int7)((ulong)uVar9 >> 8),2);
  }
  else {
    uVar9 = *(undefined8 *)(lVar8 + 8);
    uVar1 = *(undefined8 *)(lVar8 + 0x10);
    local_90 = lVar8;
    cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9f07ce88a1e9a8fE
                      (uVar9,uVar1,"little");
    if (cVar6 == '\0') {
      uVar12 = 0;
      cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9f07ce88a1e9a8fE
                        (uVar9,uVar1,"big",3);
      local_fc = (undefined4)CONCAT71((int7)((ulong)uVar12 >> 8),1);
      if (cVar6 == '\0') {
        local_148._0_8_ = &local_90;
        local_148._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfffe87767bbf161dE;
        local_178 = &PTR_s_Invalid_argument___endian___warn_00203910;
        uStack_170 = (undefined8 *******)0x1;
        local_158 = 0;
        local_168 = (undefined8 *******)local_148;
        uStack_160 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h56b2ee9aee1b26d0E(&local_f8,&local_178);
        uStack_e0 = 1;
        uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hab9f4786d95358b9E(&local_f8);
        goto LAB_0016bbdc;
      }
    }
    else {
      local_fc = 0;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7233f263f5cb49beE
            (&local_178,param_2,"skip-bytes",10);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h761c39e3b3126053E
                    ("skip-bytes",10,&local_178);
  if (lVar8 == 0) {
    local_108 = 0;
  }
  else {
    _ZN5uu_od15parse_nrofbytes21parse_number_of_bytes17hb463a51f26f3deb1E
              (&local_f8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    if (local_f8 != 4) {
                    /* try { // try from 0016bb02 to 0016bb44 has its CatchHandler @ 0016c19c */
      _ZN5uu_od20format_error_message17hfbba610ed066f99bE
                (local_78,CONCAT44(iStack_f4,local_f8),*(undefined8 *)(lVar8 + 8),
                 *(undefined8 *)(lVar8 + 0x10),"skip-bytes",10);
      uStack_160 = CONCAT44(uStack_160._4_4_,1);
      local_168 = (undefined8 *******)local_68;
      uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hab9f4786d95358b9E(&local_178);
      param_1[1] = uVar9;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h97c3ab43f1c9053fE_00203990
      ;
      *param_1 = 2;
      _ZN4core3ptr73drop_in_place_LT_uucore__features__parser__parse_size__ParseSizeError_GT_17h0bf5f9a284c69319E
                (&local_f8);
      return param_1;
    }
    local_108 = CONCAT44(iStack_ec,iStack_f0);
  }
  _ZN5uu_od12parse_inputs12parse_inputs17h1f9db538cc1aaf10E(&local_178,param_2);
  if (local_158 == 3) {
    local_138 = local_168;
    uVar9 = _ZN5uu_od9OdOptions3new28__u7b__u7b_closure_u7d__u7d_17h52d973516a822029E(local_148);
LAB_0016bbdc:
    param_1[1] = uVar9;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h97c3ab43f1c9053fE_00203990
    ;
    *param_1 = 2;
    return param_1;
  }
  local_e8 = (undefined4)local_168;
  uStack_e4 = local_168._4_4_;
  uStack_e0 = (undefined4)uStack_160;
  uStack_dc = uStack_160._4_4_;
  local_f8 = (int)local_178;
  iStack_f4 = local_178._4_4_;
  iStack_f0 = (int)uStack_170;
  iStack_ec = uStack_170._4_4_;
  local_d8 = local_158;
  local_98 = local_150;
  local_d0 = local_150;
  local_110 = local_158;
  if (local_158 == 2) {
    local_b8 = local_168;
    local_c8 = local_178;
    local_b0 = 0;
    piStack_c0 = (int *)uStack_170;
  }
  else {
    local_108 = uStack_160;
    piVar10 = (int *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (piVar10 == (int *)0x0) {
                    /* try { // try from 0016c165 to 0016c174 has its CatchHandler @ 0016c207 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_0020ac28)(8,0x18);
      goto LAB_0016c184;
    }
    *(ulong *)(piVar10 + 4) = CONCAT44(uStack_e4,local_e8);
    *piVar10 = local_f8;
    piVar10[1] = iStack_f4;
    piVar10[2] = iStack_f0;
    piVar10[3] = iStack_ec;
    local_c8 = (undefined **)0x1;
    local_b8 = (undefined8 *)&DAT_00000001;
    local_b0 = local_110;
    piStack_c0 = piVar10;
  }
                    /* try { // try from 0016bc60 to 0016bc9e has its CatchHandler @ 0016c197 */
  _ZN5uu_od13parse_formats18parse_format_flags17h00045988d9e2fcd1E(local_148,param_3,param_4);
  pppppppuVar4 = local_130;
  pppppppuVar3 = local_138;
  if (local_148._0_4_ == 1) {
    local_168 = local_130;
    local_178 = (undefined **)local_148._8_8_;
    uStack_170 = local_138;
    uStack_160 = CONCAT44(uStack_160._4_4_,1);
    uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hab9f4786d95358b9E(&local_178);
    param_1[1] = uVar9;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h97c3ab43f1c9053fE_00203990
    ;
    *param_1 = 2;
    goto LAB_0016bcd3;
  }
  local_118 = (undefined8 *******)local_148._8_8_;
                    /* try { // try from 0016bcf5 to 0016bf43 has its CatchHandler @ 0016c1b4 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7233f263f5cb49beE
            (&local_178,param_2,"width",5);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h761c39e3b3126053E
                    ("width",5,&local_178);
  if ((lVar8 == 0) ||
     (cVar6 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h45c0c3cb9ce2c562E_0020acc8
              )(param_2,"width",5), cVar6 != '\x02')) {
    local_120 = (undefined8 *******)&DAT_00000010;
LAB_0016bd78:
    pppppppuVar5 = local_120;
    local_a8 = (undefined8 *******)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h425d9cf3ffc07b0cE
                         (pppppppuVar3,pppppppuVar3 + (long)pppppppuVar4 * 5);
    if (pppppppuVar5 == (undefined8 *******)0x0) {
LAB_0016bdce:
      local_148 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0020aa88)();
      local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
      local_178 = (undefined **)&DAT_00203920;
      uStack_170 = (undefined8 *******)0x2;
      local_158 = 0;
      local_168 = (undefined8 *******)&local_88;
      uStack_160 = 1;
      local_88 = (undefined8 *)local_148;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0020aa90)(&local_178);
      local_148._0_8_ = &local_120;
      local_148._8_8_ =
           PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0020ac70
      ;
      local_138 = &local_a8;
      local_130 = (undefined8 *******)
                  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0020ac70
      ;
      local_178 = &PTR_s_invalid_width_instead_00203940;
      uStack_170 = (undefined8 *******)0x3;
      local_158 = 0;
      uStack_160 = 2;
      local_168 = (undefined8 *******)local_148;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0020aa90)(&local_178);
      local_120 = local_a8;
    }
    else {
      if (local_a8 == (undefined8 *******)0x0) {
                    /* try { // try from 0016c177 to 0016c183 has its CatchHandler @ 0016c1b4 */
        (*(code *)
          PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_0020ad20)
                  (&PTR_s_src_uu_od_src_od_rs_002039f8);
LAB_0016c184:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (((ulong)local_a8 | (ulong)pppppppuVar5) >> 0x20 == 0) {
        uVar13 = ((ulong)pppppppuVar5 & 0xffffffff) % ((ulong)local_a8 & 0xffffffff);
      }
      else {
        uVar13 = (ulong)pppppppuVar5 % (ulong)local_a8;
      }
      if (uVar13 != 0) goto LAB_0016bdce;
    }
    uVar7 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020ad18
            )(param_2,"output-duplicates",0x11);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7233f263f5cb49beE
              (&local_178,param_2,"read-bytes",10);
    lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h761c39e3b3126053E
                      ("read-bytes",10,&local_178);
    if (lVar8 == 0) {
      uVar9 = 0;
    }
    else {
      _ZN5uu_od15parse_nrofbytes21parse_number_of_bytes17hb463a51f26f3deb1E
                (local_148,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
      if (local_148._0_4_ != 4) {
                    /* try { // try from 0016bf91 to 0016bfd3 has its CatchHandler @ 0016c188 */
        _ZN5uu_od20format_error_message17hfbba610ed066f99bE
                  (&local_48,local_148._0_8_,*(undefined8 *)(lVar8 + 8),
                   *(undefined8 *)(lVar8 + 0x10),"read-bytes",10);
        uStack_160 = CONCAT44(uStack_160._4_4_,1);
        local_178 = (undefined **)CONCAT44(uStack_44,local_48);
        uStack_170 = (undefined8 *******)CONCAT44(uStack_3c,uStack_40);
        local_168 = local_38;
        uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hab9f4786d95358b9E(&local_178);
        goto LAB_0016c026;
      }
      local_a0 = (undefined8 *******)local_148._8_8_;
      uVar9 = 1;
    }
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7233f263f5cb49beE
              (&local_178,param_2,"address-radix",0xd);
    lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h761c39e3b3126053E
                      ("address-radix",0xd,&local_178);
    uVar11 = 2;
    if (lVar8 == 0) goto switchD_0016bf7b_caseD_6f;
    if (*(long *)(lVar8 + 0x10) != 0) {
      switch(**(undefined **)(lVar8 + 8)) {
      case 100:
        uVar11 = 0;
        break;
      default:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                  (local_148,"Radix must be one of [o, d, x, n]",0x21);
        local_168 = local_138;
        local_178 = (undefined **)local_148._0_8_;
        uStack_170 = (undefined8 *******)local_148._8_8_;
        uStack_160 = CONCAT44(uStack_160._4_4_,1);
        uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hab9f4786d95358b9E(&local_178);
        goto LAB_0016c13d;
      case 0x6e:
        uVar11 = 3;
        break;
      case 0x6f:
        break;
      case 0x78:
        uVar11 = 1;
      }
switchD_0016bf7b_caseD_6f:
      param_1[6] = local_b8;
      param_1[4] = local_c8;
      param_1[5] = piStack_c0;
      *param_1 = uVar9;
      param_1[1] = local_a0;
      param_1[2] = local_b0;
      param_1[3] = local_98;
      param_1[7] = local_118;
      param_1[8] = pppppppuVar3;
      param_1[9] = pppppppuVar4;
      param_1[10] = local_108;
      param_1[0xb] = local_120;
      *(undefined *)(param_1 + 0xc) = uVar7;
      *(char *)((long)param_1 + 0x61) = (char)local_fc;
      *(undefined *)((long)param_1 + 0x62) = uVar11;
      return param_1;
    }
                    /* try { // try from 0016c04b to 0016c13c has its CatchHandler @ 0016c1b4 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
              (local_148,"Radix cannot be empty, and must be one of [o, d, x, n]",0x36);
    local_168 = local_138;
    local_178 = (undefined **)local_148._0_8_;
    uStack_170 = (undefined8 *******)local_148._8_8_;
    uStack_160 = CONCAT44(uStack_160._4_4_,1);
    uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hab9f4786d95358b9E(&local_178);
LAB_0016c13d:
    param_1[1] = uVar9;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h97c3ab43f1c9053fE_00203990
    ;
    *param_1 = 2;
  }
  else {
    _ZN5uu_od15parse_nrofbytes21parse_number_of_bytes17hb463a51f26f3deb1E
              (local_148,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    if (local_148._0_4_ == 4) {
      local_120 = (undefined8 *******)local_148._8_8_;
      goto LAB_0016bd78;
    }
                    /* try { // try from 0016bfe3 to 0016c025 has its CatchHandler @ 0016c186 */
    _ZN5uu_od20format_error_message17hfbba610ed066f99bE
              (&local_60,local_148._0_8_,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),
               "width",5);
    uStack_160 = CONCAT44(uStack_160._4_4_,1);
    local_178 = (undefined **)CONCAT44(uStack_5c,local_60);
    uStack_170 = (undefined8 *******)CONCAT44(uStack_54,uStack_58);
    local_168 = local_50;
    uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hab9f4786d95358b9E(&local_178);
LAB_0016c026:
    param_1[1] = uVar9;
    param_1[2] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h97c3ab43f1c9053fE_00203990
    ;
    *param_1 = 2;
    _ZN4core3ptr73drop_in_place_LT_uucore__features__parser__parse_size__ParseSizeError_GT_17h0bf5f9a284c69319E
              (local_148);
  }
  _ZN4core3ptr89drop_in_place_LT_alloc__vec__Vec_LT_uu_od__parse_formats__ParsedFormatterItemInfo_GT__GT_17h911b774f5eb298b9E
            (local_118,pppppppuVar3);
LAB_0016bcd3:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h159fa5a16718cf97E
            (&local_c8);
  return param_1;
}