undefined8 *
_ZN5uu_od13parse_formats18parse_format_flags17h9e51e9c420287b95E
          (undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong extraout_RDX;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined auVar14 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulong local_148;
  undefined8 uStack_140;
  undefined local_138;
  ulong local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
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
  
  local_170 = 0;
  uStack_168 = 8;
  local_160 = 0;
  local_f8 = param_2 + param_3 * 0x18;
  bVar1 = false;
  local_100 = param_2;
LAB_001caee0:
  local_f0 = 0;
  lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3nth17hb9a07d8be83b1a58E
                    (&local_100);
joined_r0x001caefc:
  if (lVar7 == 0) {
    if (!bVar1) {
LAB_001cb2ec:
      if (local_160 == 0) {
        local_148 = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE._16_8_;
        uStack_140 = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE._24_8_;
        local_158 = CONCAT44(_ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE._4_4_,
                             _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE._0_4_);
        uStack_150 = CONCAT44(_ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE._12_4_,
                              _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE._8_4_);
        local_138 = 0;
                    /* try { // try from 001cb311 to 001cb34c has its CatchHandler @ 001cb3f8 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdb693d9c78fd2861E(&local_170,&local_158);
      }
      param_1[3] = local_160;
      param_1[1] = local_170;
      param_1[2] = uStack_168;
      *param_1 = 0;
      return param_1;
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE(&local_158)
    ;
    param_1[3] = local_148;
    uVar10 = (undefined4)local_158;
    uVar11 = local_158._4_4_;
    uVar12 = (undefined4)uStack_150;
    uVar13 = uStack_150._4_4_;
LAB_001cb375:
    *(undefined4 *)(param_1 + 1) = uVar10;
    *(undefined4 *)((long)param_1 + 0xc) = uVar11;
    *(undefined4 *)(param_1 + 2) = uVar12;
    *(undefined4 *)((long)param_1 + 0x14) = uVar13;
    *param_1 = 1;
    goto LAB_001cb380;
  }
  if (bVar1) {
    _ZN5uu_od13parse_formats17parse_type_string17hb4158195487ebdc3E
              (&local_158,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
    local_198 = uStack_150;
    uVar9 = local_198;
    uStack_190 = local_148;
    uVar2 = uStack_190;
    local_188 = uStack_140;
    local_198._0_4_ = (int)uStack_150;
    local_198._4_4_ = (undefined4)(uStack_150 >> 0x20);
    uStack_190._0_4_ = (undefined4)local_148;
    uStack_190._4_4_ = (undefined4)(local_148 >> 0x20);
    local_198 = uVar9;
    uStack_190 = uVar2;
    if (local_158 != 0) {
      param_1[3] = uStack_140;
      uVar10 = (int)local_198;
      uVar11 = local_198._4_4_;
      uVar12 = (undefined4)uStack_190;
      uVar13 = uStack_190._4_4_;
      goto LAB_001cb375;
    }
    local_d8 = uStack_140;
    local_e8 = (int)local_198;
    uStack_e4 = local_198._4_4_;
    uStack_e0 = (undefined4)uStack_190;
    uStack_dc = uStack_190._4_4_;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he4c1fcebcd2dfb60E
              (local_90,&local_e8);
    _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17h0b0ac924be580ac1E
              (&local_170,local_90);
    bVar1 = false;
  }
  else {
    uVar9 = *(ulong *)(lVar7 + 8);
    lVar7 = *(long *)(lVar7 + 0x10);
                    /* try { // try from 001caf38 to 001cafa6 has its CatchHandler @ 001cb41d */
    cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                      (uVar9,lVar7,"--",2);
    if (cVar5 == '\0') {
      local_158 = local_158 & 0xffffffff00000000;
      auVar14 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,&local_158);
      cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                        (uVar9,lVar7,auVar14._0_8_,auVar14._8_8_);
      if (cVar5 != '\0') {
        local_128 = lVar7 + uVar9;
        local_118 = 0;
        local_110 = 1;
        local_108 = 0;
        local_120 = 1;
        local_130 = uVar9;
        bVar4 = bVar1;
LAB_001cb17d:
        do {
          bVar1 = bVar4;
          if (local_120 == 0) {
            uVar8 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc19b1af496d38725E
                              (&local_130);
            uVar9 = (ulong)uVar8;
          }
          else {
            local_120 = 0;
            lVar7 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h7ba654970d2c1b3eE
                              (&local_130);
            if ((lVar7 != 0) ||
               (iVar6 = _ZN4core3str11validations15next_code_point17h6c42fc7883874c6bE(&local_130),
               iVar6 == 0)) goto LAB_001cb239;
            uVar8 = (uint)extraout_RDX;
            uVar9 = extraout_RDX;
          }
          if (uVar8 == 0x110000) goto LAB_001cb239;
          if (!bVar1) {
            uVar8 = (int)uVar9 - 0x41;
            if (uVar8 < 0x37) goto code_r0x001cb1e0;
            goto LAB_001cb1f8;
          }
                    /* try { // try from 001cb160 to 001cb230 has its CatchHandler @ 001cb40b */
          _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_118,uVar9 & 0xffffffff);
          bVar4 = bVar1;
        } while( true );
      }
    }
    else {
      if (lVar7 == 2) goto LAB_001cb2ec;
      cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                        (uVar9,lVar7,"--format=",9);
      if (cVar5 != '\0') {
        local_148 = uVar9 + lVar7;
        uStack_140 = uStack_140 & 0xffffffffffffff00;
        local_158 = 1;
        uStack_150 = uVar9;
        _ZN95__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT_char_GT__GT_9from_iter17hb93a52d6c1b4019eE
                  (&local_130,&local_158);
                    /* try { // try from 001cafb7 to 001cb02c has its CatchHandler @ 001cb3fc */
        _ZN5uu_od13parse_formats17parse_type_string17hb4158195487ebdc3E
                  (&local_158,local_128,local_120);
        local_198 = uStack_150;
        uVar2 = local_198;
        uStack_190 = local_148;
        uVar3 = uStack_190;
        local_188 = uStack_140;
        local_198._0_4_ = (int)uStack_150;
        local_198._4_4_ = (undefined4)(uStack_150 >> 0x20);
        uStack_190._0_4_ = (undefined4)local_148;
        uStack_190._4_4_ = (undefined4)(local_148 >> 0x20);
        local_198 = uVar2;
        uStack_190 = uVar3;
        if (local_158 != 0) {
          param_1[3] = uStack_140;
          *(int *)(param_1 + 1) = (int)local_198;
          *(undefined4 *)((long)param_1 + 0xc) = local_198._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_190;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_190._4_4_;
          *param_1 = 1;
                    /* try { // try from 001cb3bf to 001cb3f5 has its CatchHandler @ 001cb3f8 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_130);
          goto LAB_001cb380;
        }
        local_b8 = uStack_140;
        local_c8 = (int)local_198;
        uStack_c4 = local_198._4_4_;
        uStack_c0 = (undefined4)uStack_190;
        uStack_bc = uStack_190._4_4_;
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he4c1fcebcd2dfb60E
                  (local_70,&local_c8);
        _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17h0b0ac924be580ac1E
                  (&local_170,local_70);
                    /* try { // try from 001cb02d to 001cb105 has its CatchHandler @ 001cb41d */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_130);
      }
      cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5c6cac41b0728315E
                        (uVar9,lVar7,&DAT_0010e178,8);
      if (cVar5 != '\0') {
        bVar1 = true;
      }
    }
  }
  goto LAB_001cb2d0;
code_r0x001cb1e0:
  bVar4 = true;
  if ((ulong)uVar8 != 0x33) {
    if ((0x40020000042001U >> ((ulong)uVar8 & 0x3f) & 1) != 0) goto LAB_001cb239;
LAB_001cb1f8:
    _ZN5uu_od13parse_formats30od_argument_traditional_format17h14da6a638cd1f622E
              (&local_198,uVar9 & 0xffffffff);
    bVar4 = bVar1;
    if ((int)local_198 != 3) {
      local_148 = local_188;
      uStack_140 = CONCAT44(uStack_17c,uStack_180);
      local_158 = local_198;
      uStack_150 = uStack_190;
      local_138 = 0;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdb693d9c78fd2861E(&local_170,&local_158);
    }
  }
  goto LAB_001cb17d;
LAB_001cb239:
  if (local_108 != 0) {
                    /* try { // try from 001cb24e to 001cb2b2 has its CatchHandler @ 001cb3fa */
    _ZN5uu_od13parse_formats17parse_type_string17hb4158195487ebdc3E(&local_158,local_110);
    local_198 = uStack_150;
    uVar9 = local_198;
    uStack_190 = local_148;
    uVar2 = uStack_190;
    local_188 = uStack_140;
    local_198._0_4_ = (int)uStack_150;
    local_198._4_4_ = (undefined4)(uStack_150 >> 0x20);
    uStack_190._0_4_ = (undefined4)local_148;
    uStack_190._4_4_ = (undefined4)(local_148 >> 0x20);
    local_198 = uVar9;
    uStack_190 = uVar2;
    if (local_158 != 0) {
      param_1[3] = uStack_140;
      *(int *)(param_1 + 1) = (int)local_198;
      *(undefined4 *)((long)param_1 + 0xc) = local_198._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_190;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_190._4_4_;
      *param_1 = 1;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_118);
LAB_001cb380:
      _ZN4core3ptr89drop_in_place_LT_alloc__vec__Vec_LT_uu_od__parse_formats__ParsedFormatterItemInfo_GT__GT_17hf096e71933bd90a6E
                (&local_170);
      return param_1;
    }
    local_98 = uStack_140;
    local_a8 = (int)local_198;
    uStack_a4 = local_198._4_4_;
    uStack_a0 = (undefined4)uStack_190;
    uStack_9c = uStack_190._4_4_;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he4c1fcebcd2dfb60E
              (local_50,&local_a8);
    _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17h0b0ac924be580ac1E
              (&local_170,local_50);
    bVar1 = false;
  }
                    /* try { // try from 001cb2b6 to 001cb2c2 has its CatchHandler @ 001cb41d */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_118);
LAB_001cb2d0:
  if (local_f0 != 0) goto LAB_001caee0;
  lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h599d6995f23da721E
                    (&local_100);
  goto joined_r0x001caefc;
}