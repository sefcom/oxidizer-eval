void _ZN5uu_od13parse_formats18parse_format_flags17h00045988d9e2fcd1E
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined auVar15 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined local_128;
  long local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulong local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulong local_98;
  undefined local_90 [32];
  undefined local_70 [32];
  undefined local_50 [32];
  
  local_178 = 0;
  uStack_170 = 8;
  local_168 = 0;
  local_110 = param_2 + param_3 * 0x18;
  local_108 = 1;
  bVar3 = false;
  local_118 = param_2;
LAB_00169921:
  do {
    if (local_108 != 0) {
      local_108 = 0;
      lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3nth17hcdc63d1cbb98d114E
                        (&local_118);
      if (lVar9 != 0) goto LAB_0016994c;
LAB_00169d17:
      if (!bVar3) {
        if (local_168 == 0) {
          uStack_138 = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E._16_8_;
          uStack_130 = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E._24_8_;
          local_148 = CONCAT44(_ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E._4_4_,
                               _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E._0_4_);
          uStack_140 = CONCAT44(_ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E._12_4_,
                                _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E._8_4_);
          local_128 = 0;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h50f7d4baac607dc5E
                    (&local_178,&local_148,&PTR_s_src_uu_od_src_parse_formats_rs_002025f0);
        }
        param_1[3] = local_168;
        param_1[1] = local_178;
        param_1[2] = uStack_170;
        *param_1 = 0;
        return;
      }
                    /* try { // try from 00169d1d to 00169d85 has its CatchHandler @ 00169e3c */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                (&local_148,"missing format specification after \'--format\' / \'-t\'",0x34);
      param_1[3] = uStack_138;
      uVar11 = (int)local_148;
      uVar12 = local_148._4_4_;
      uVar13 = (undefined4)uStack_140;
      uVar14 = uStack_140._4_4_;
      goto LAB_00169db9;
    }
    if (local_118 == local_110) goto LAB_00169d17;
    lVar9 = local_118;
    local_118 = local_118 + 0x18;
LAB_0016994c:
    if (bVar3) {
                    /* try { // try from 0016995a to 00169a4b has its CatchHandler @ 00169e5c */
      _ZN5uu_od13parse_formats17parse_type_string17h86db81d598ba34e9E
                (&local_148,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
      local_198 = uStack_140;
      uVar4 = local_198;
      uStack_190 = uStack_138;
      uVar5 = uStack_190;
      local_188 = uStack_130;
      local_198._0_4_ = (int)uStack_140;
      local_198._4_4_ = (undefined4)(uStack_140 >> 0x20);
      uStack_190._0_4_ = (undefined4)uStack_138;
      uStack_190._4_4_ = (undefined4)(uStack_138 >> 0x20);
      local_198 = uVar4;
      uStack_190 = uVar5;
      if ((int)local_148 == 1) {
        param_1[3] = uStack_130;
        uVar11 = (int)local_198;
        uVar12 = local_198._4_4_;
        uVar13 = (undefined4)uStack_190;
        uVar14 = uStack_190._4_4_;
LAB_00169db9:
        *(undefined4 *)(param_1 + 1) = uVar11;
        *(undefined4 *)((long)param_1 + 0xc) = uVar12;
        *(undefined4 *)(param_1 + 2) = uVar13;
        *(undefined4 *)((long)param_1 + 0x14) = uVar14;
        *param_1 = 1;
LAB_00169dc4:
        _ZN4core3ptr89drop_in_place_LT_alloc__vec__Vec_LT_uu_od__parse_formats__ParsedFormatterItemInfo_GT__GT_17h911b774f5eb298b9E
                  (local_178,uStack_170);
        return;
      }
      local_d8 = uStack_130;
      local_e8 = (int)local_198;
      uStack_e4 = local_198._4_4_;
      uStack_e0 = (undefined4)uStack_190;
      uStack_dc = uStack_190._4_4_;
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h069ee36a326a92fcE
                (local_90,&local_e8);
      _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17hef7635b34c01e0c6E
                (&local_178,local_90);
      bVar3 = false;
      goto LAB_00169921;
    }
    cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                      (*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),"--",2);
    if (cVar7 == '\0') {
      uVar1 = *(undefined8 *)(lVar9 + 8);
      uVar2 = *(undefined8 *)(lVar9 + 0x10);
      local_148 = local_148 & 0xffffffff00000000;
      uVar8 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&local_148);
                    /* try { // try from 00169b20 to 00169b45 has its CatchHandler @ 00169e5c */
      cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                        (uVar1,uVar2,uVar8,1);
      if (cVar7 != '\0') {
        local_160 = *(long *)(lVar9 + 8);
        local_158 = *(long *)(lVar9 + 0x10) + local_160;
        local_100 = 0;
        local_f8 = 1;
        local_f0 = 0;
        local_150 = 1;
        bVar6 = bVar3;
LAB_00169bb5:
        bVar3 = bVar6;
        if (local_150 != 0) {
          local_150 = 0;
          lVar9 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h79c51f2353e76d38E
                            (&local_160);
          if (lVar9 != 0) goto LAB_00169c6b;
        }
        auVar15 = _ZN4core3str11validations15next_code_point17h48ce1982219e5e58E(&local_160);
        if (((auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0) ||
           (auVar15._8_4_ == 0x110000)) goto LAB_00169c6b;
        if (!bVar3) {
          uVar10 = auVar15._8_4_ - 0x41;
          if (uVar10 < 0x37) break;
          goto LAB_00169c04;
        }
                    /* try { // try from 00169ba0 to 00169c46 has its CatchHandler @ 00169e4a */
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_100,auVar15._8_8_ & 0xffffffff);
        bVar6 = bVar3;
        goto LAB_00169bb5;
      }
    }
    else {
      if (*(long *)(lVar9 + 0x10) == 2) goto LAB_00169d17;
      cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                        (*(undefined8 *)(lVar9 + 8),*(long *)(lVar9 + 0x10),"--format=",9);
      if (cVar7 != '\0') {
        uStack_140 = *(ulong *)(lVar9 + 8);
        uStack_138 = *(long *)(lVar9 + 0x10) + uStack_140;
        uStack_130 = uStack_130 & 0xffffffffffffff00;
        local_148 = 1;
        _ZN4core4iter6traits8iterator8Iterator7collect17h757dc0c5ca00baeeE(&local_160,&local_148);
                    /* try { // try from 00169a56 to 00169abb has its CatchHandler @ 00169e40 */
        _ZN5uu_od13parse_formats17parse_type_string17h86db81d598ba34e9E
                  (&local_148,local_158,local_150);
        local_198 = uStack_140;
        uVar4 = local_198;
        uStack_190 = uStack_138;
        uVar5 = uStack_190;
        local_188 = uStack_130;
        local_198._0_4_ = (int)uStack_140;
        local_198._4_4_ = (undefined4)(uStack_140 >> 0x20);
        uStack_190._0_4_ = (undefined4)uStack_138;
        uStack_190._4_4_ = (undefined4)(uStack_138 >> 0x20);
        local_198 = uVar4;
        uStack_190 = uVar5;
        if ((int)local_148 == 1) {
          param_1[3] = uStack_130;
          *(int *)(param_1 + 1) = (int)local_198;
          *(undefined4 *)((long)param_1 + 0xc) = local_198._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_190;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_190._4_4_;
          *param_1 = 1;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(&local_160);
          goto LAB_00169dc4;
        }
        local_b8 = uStack_130;
        local_c8 = (int)local_198;
        uStack_c4 = local_198._4_4_;
        uStack_c0 = (undefined4)uStack_190;
        uStack_bc = uStack_190._4_4_;
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h069ee36a326a92fcE
                  (local_70,&local_c8);
        _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17hef7635b34c01e0c6E
                  (&local_178,local_70);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(&local_160);
      }
      cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9f07ce88a1e9a8fE
                        (*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),&DAT_0011b360,8);
      if (cVar7 != '\0') {
        bVar3 = true;
      }
    }
  } while( true );
  bVar6 = true;
  if ((ulong)uVar10 != 0x33) {
    if ((0x40020000042001U >> ((ulong)uVar10 & 0x3f) & 1) != 0) goto LAB_00169c6b;
LAB_00169c04:
    _ZN5uu_od13parse_formats30od_argument_traditional_format17he40ef48eb83c8f75E
              (&local_198,auVar15._8_8_ & 0xffffffff);
    bVar6 = bVar3;
    if ((int)local_198 != 3) {
      uStack_138 = local_188;
      uStack_130 = CONCAT44(uStack_17c,uStack_180);
      local_148 = local_198;
      uStack_140 = uStack_190;
      local_128 = 0;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h50f7d4baac607dc5E
                (&local_178,&local_148,&PTR_s_src_uu_od_src_parse_formats_rs_002025d8);
    }
  }
  goto LAB_00169bb5;
LAB_00169c6b:
  if (local_f0 != 0) {
                    /* try { // try from 00169c84 to 00169ce9 has its CatchHandler @ 00169e3e */
    _ZN5uu_od13parse_formats17parse_type_string17h86db81d598ba34e9E(&local_148,local_f8);
    local_198 = uStack_140;
    uVar4 = local_198;
    uStack_190 = uStack_138;
    uVar5 = uStack_190;
    local_188 = uStack_130;
    local_198._0_4_ = (int)uStack_140;
    local_198._4_4_ = (undefined4)(uStack_140 >> 0x20);
    uStack_190._0_4_ = (undefined4)uStack_138;
    uStack_190._4_4_ = (undefined4)(uStack_138 >> 0x20);
    local_198 = uVar4;
    uStack_190 = uVar5;
    if ((int)local_148 == 1) {
      param_1[3] = uStack_130;
      *(int *)(param_1 + 1) = (int)local_198;
      *(undefined4 *)((long)param_1 + 0xc) = local_198._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_190;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_190._4_4_;
      *param_1 = 1;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(&local_100);
      goto LAB_00169dc4;
    }
    local_98 = uStack_130;
    local_a8 = (int)local_198;
    uStack_a4 = local_198._4_4_;
    uStack_a0 = (undefined4)uStack_190;
    uStack_9c = uStack_190._4_4_;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h069ee36a326a92fcE
              (local_50,&local_a8);
    _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17hef7635b34c01e0c6E
              (&local_178,local_50);
    bVar3 = false;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(&local_100);
  goto LAB_00169921;
}