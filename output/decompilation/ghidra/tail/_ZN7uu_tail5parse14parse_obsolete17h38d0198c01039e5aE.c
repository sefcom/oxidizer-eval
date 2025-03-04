undefined8 * _ZN7uu_tail5parse14parse_obsolete17h38d0198c01039e5aE(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined uVar2;
  undefined uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  bool bVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  long lVar6;
  
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_58,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  uVar10 = local_50;
  if (local_58 != 0) {
    *(undefined *)param_1 = 3;
    goto LAB_00218c3f;
  }
  local_58 = 0;
  uVar5 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,&local_58);
  auVar14 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hdb721c8cd5e22968E
                      (uVar5,uVar10,local_48);
  lVar6 = auVar14._0_8_;
  if (lVar6 == 0) {
    local_58 = local_58 & 0xffffffff00000000;
    uVar5 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2b,&local_58);
    auVar14 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hdb721c8cd5e22968E
                        (uVar5,uVar10,local_48);
    if (auVar14._0_8_ == 0) goto LAB_00218e92;
  }
  uVar9 = auVar14._8_8_;
  lVar12 = auVar14._0_8_;
  auVar14 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h006ca70e4214af13E(lVar12,uVar9);
  uVar10 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    uVar10 = uVar9;
  }
  if (uVar10 == 0) {
    local_50 = 10;
  }
  else {
    if (uVar10 < uVar9) {
      if (*(char *)(lVar12 + uVar10) < -0x40) {
LAB_00218d14:
        _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(lVar12,uVar9,0,uVar10,&DAT_002bcb50);
        goto LAB_00218d36;
      }
    }
    else if (uVar10 != uVar9) goto LAB_00218d14;
    _ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u64_GT_8from_str17h29411471c0770b67E
              (&local_58,lVar12,uVar10);
    if ((char)local_58 != '\0') {
      *(undefined *)param_1 = 0;
      goto LAB_00218c3f;
    }
  }
LAB_00218d36:
  local_40 = lVar6;
  local_38 = local_50;
  auVar14 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                      (uVar10,lVar12,uVar9);
  uVar5 = auVar14._8_8_;
  lVar6 = auVar14._0_8_;
  if (lVar6 == 0) {
    _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(lVar12,uVar9,uVar10,uVar9,&DAT_002bcb68);
    pcVar1 = (code *)swi(3);
    puVar8 = (undefined8 *)(*pcVar1)();
    return puVar8;
  }
  local_58 = local_58 & 0xffffffff00000000;
  uVar7 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x6c,&local_58);
  auVar15 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hdb721c8cd5e22968E
                      (uVar7,lVar6,uVar5);
  uVar9 = auVar15._0_8_;
  if (uVar9 == 0) {
    local_58 = local_58 & 0xffffffff00000000;
    iVar11 = 99;
    uVar7 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(99,&local_58);
    auVar15 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hdb721c8cd5e22968E
                        (uVar7,lVar6,uVar5);
    if (auVar15._0_8_ == 0) {
      local_58 = local_58 & 0xffffffff00000000;
      uVar7 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x62,&local_58);
      auVar16 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hdb721c8cd5e22968E
                          (uVar7,lVar6,uVar5);
      iVar11 = 0x6c;
      auVar15 = auVar14;
      if (auVar16._0_8_ != 0) {
        iVar11 = 0x62;
        auVar15 = auVar16;
      }
    }
    uVar9 = auVar15._0_8_;
    uVar2 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hf6fa57beb1c3cfdfE
                      (uVar9,auVar15._8_8_);
    local_50 = auVar15._8_8_ + uVar9;
    local_58 = uVar9;
    uVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h382008777cf9d733E(&local_58);
    cVar4 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hf44ef79eb3e0c2a2E
                      (uVar3);
    if (cVar4 == '\0') goto LAB_00218e7d;
    if (iVar11 != 0x62) goto LAB_00218e9b;
    uVar10 = 0x200;
    bVar13 = false;
  }
  else {
    uVar2 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hf6fa57beb1c3cfdfE
                      (uVar9,auVar15._8_8_);
    local_50 = uVar9 + auVar15._8_8_;
    local_58 = uVar9;
    uVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h382008777cf9d733E(&local_58);
    cVar4 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hf44ef79eb3e0c2a2E
                      (uVar3);
    if (cVar4 == '\0') {
LAB_00218e7d:
      if ((local_40 == 0) || (uVar10 == 0)) {
LAB_00218e92:
        *(undefined *)((long)param_1 + 10) = 3;
        return param_1;
      }
      *(undefined *)param_1 = 2;
      goto LAB_00218c3f;
    }
    iVar11 = 0x6c;
LAB_00218e9b:
    bVar13 = iVar11 == 0x6c;
    uVar10 = 1;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_38;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar10;
  if (SUB168(auVar14 * auVar15,8) == 0) {
    *param_1 = SUB168(auVar14 * auVar15,0);
    *(bool *)(param_1 + 1) = local_40 == 0;
    *(bool *)((long)param_1 + 9) = bVar13;
    *(undefined *)((long)param_1 + 10) = uVar2;
    return param_1;
  }
  *(undefined *)param_1 = 1;
LAB_00218c3f:
  *(undefined *)((long)param_1 + 10) = 2;
  return param_1;
}