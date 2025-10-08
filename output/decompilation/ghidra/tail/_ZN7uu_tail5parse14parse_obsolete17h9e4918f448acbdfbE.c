void _ZN7uu_tail5parse14parse_obsolete17h9e4918f448acbdfbE(undefined8 *param_1)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  long local_48;
  ulong local_40;
  long local_38;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0027d268)(&local_60);
  uVar8 = local_58;
  if ((int)local_60 == 1) {
    *(undefined *)param_1 = 3;
LAB_001a5fee:
    uVar4 = 2;
LAB_001a5ff1:
    *(undefined *)((long)param_1 + 10) = uVar4;
    return;
  }
  local_60 = local_60 & 0xffffffff00000000;
  auVar14 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&local_60);
  auVar14 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                      (auVar14._0_8_,auVar14._8_8_,uVar8,local_50);
  lVar11 = auVar14._0_8_;
  if (lVar11 == 0) {
    local_60 = local_60 & 0xffffffff00000000;
    local_38 = lVar11;
    auVar14 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2b,&local_60);
    auVar15 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                        (auVar14._0_8_,auVar14._8_8_,uVar8,local_50);
    auVar14._8_8_ = auVar15._8_8_;
    auVar14._0_8_ = local_38;
    lVar11 = auVar15._0_8_;
    if (lVar11 == 0) {
      uVar4 = 3;
      goto LAB_001a5ff1;
    }
  }
  uVar10 = auVar14._8_8_;
  local_38 = auVar14._0_8_;
  auVar14 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h6d420cc14dc8ff1cE(lVar11,uVar10);
  uVar13 = auVar14._8_8_;
  if ((auVar14 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar13 = uVar10;
  }
  auVar14 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                      (uVar13,lVar11,uVar10);
  if (auVar14._0_8_ == 0) {
    ppuVar12 = &PTR_s_src_uu_tail_src_parse_rs_002738f0;
    goto LAB_001a604a;
  }
  if (auVar14._8_8_ == 0) {
    local_58 = 10;
LAB_001a5e12:
    local_48 = auVar14._8_8_;
    local_40 = local_58;
    auVar14 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (uVar13,lVar11,uVar10);
    lVar7 = auVar14._8_8_;
    uVar8 = auVar14._0_8_;
    if (uVar8 != 0) {
      local_60 = local_60 & 0xffffffff00000000;
      auVar14 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x6c,&local_60);
      auVar14 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                          (auVar14._0_8_,auVar14._8_8_,uVar8,lVar7);
      uVar9 = auVar14._0_8_;
      if (uVar9 == 0) {
        local_60 = local_60 & 0xffffffff00000000;
        auVar14 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(99,&local_60);
        auVar14 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                            (auVar14._0_8_,auVar14._8_8_,uVar8);
        uVar9 = auVar14._0_8_;
        if (uVar9 == 0) {
          local_60 = local_60 & 0xffffffff00000000;
          auVar14 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x62,&local_60);
          auVar14 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                              (auVar14._0_8_,auVar14._8_8_,uVar8);
          uVar9 = auVar14._0_8_;
          if (uVar9 == 0) {
            uVar4 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                              (uVar8,lVar7);
            local_58 = uVar8 + lVar7;
            local_60 = uVar8;
            goto LAB_001a5e7f;
          }
          uVar4 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                            (uVar9,auVar14._8_8_);
          local_58 = uVar9 + auVar14._8_8_;
          local_60 = uVar9;
          uVar5 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hf62db1ed5c254e75E(&local_60);
          cVar6 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h73b4defe78430bf3E
                            (uVar5);
          if (cVar6 != '\0') {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_40;
            auVar15 = auVar3 * ZEXT816(0x200);
            goto joined_r0x001a5fc0;
          }
        }
        else {
          uVar4 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                            (uVar9,auVar14._8_8_);
          local_58 = uVar9 + auVar14._8_8_;
          local_60 = uVar9;
          uVar5 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hf62db1ed5c254e75E(&local_60);
          cVar6 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h73b4defe78430bf3E
                            (uVar5);
          if (cVar6 != '\0') {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_40;
            auVar15 = auVar2 * ZEXT816(1);
joined_r0x001a5fc0:
            uVar5 = 0;
            goto joined_r0x001a5fc0;
          }
        }
      }
      else {
        uVar4 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                          (uVar9,auVar14._8_8_);
        local_58 = uVar9 + auVar14._8_8_;
        local_60 = uVar9;
LAB_001a5e7f:
        uVar5 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hf62db1ed5c254e75E(&local_60);
        cVar6 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h73b4defe78430bf3E
                          (uVar5);
        if (cVar6 != '\0') {
          uVar5 = 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = local_40;
          auVar15 = auVar15 * ZEXT816(1);
joined_r0x001a5fc0:
          if (auVar15._8_8_ == 0) {
            *param_1 = auVar15._0_8_;
            *(bool *)(param_1 + 1) = local_38 == 0;
            *(undefined *)((long)param_1 + 9) = uVar5;
            goto LAB_001a5ff1;
          }
          *(undefined *)param_1 = 1;
          goto LAB_001a5fee;
        }
      }
      uVar4 = 3;
      if ((local_38 == 0) || (local_48 == 0)) goto LAB_001a5ff1;
      *(undefined *)param_1 = 2;
      goto LAB_001a5fee;
    }
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0027d7a8)
              (lVar11,uVar10,uVar13,uVar10,&PTR_s_src_uu_tail_src_parse_rs_00273920);
  }
  else {
    lVar7 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                      (uVar13,lVar11,uVar10);
    if (lVar7 != 0) {
      _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E(&local_60,lVar7);
      if ((char)local_60 != '\0') {
        *(undefined *)param_1 = 0;
        goto LAB_001a5fee;
      }
      goto LAB_001a5e12;
    }
  }
  ppuVar12 = &PTR_s_src_uu_tail_src_parse_rs_00273908;
LAB_001a604a:
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0027d7a8)
            (lVar11,uVar10,0,uVar13,ppuVar12);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}