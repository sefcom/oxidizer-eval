ulong _ZN21ruff_python_formatter6string9normalize23contains_opposite_quote17hde790226fde02798E
                (undefined8 param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  undefined auVar2 [16];
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  ulong unaff_R12;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  long local_48;
  long local_40;
  undefined local_38;
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  if ((param_3 & 2) != 0) {
    if ((param_3 & 1) == 0) {
      pcVar5 = "\"\"\"";
    }
    else {
      pcVar5 = "\'\'\'";
    }
    uVar3 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hff4183d19d767429E
                      (pcVar5,param_1,param_2);
    return uVar3;
  }
  if (param_3 < 0x40) {
    if ((param_3 & 1) == 0) {
      auVar9 = _ZN4core3str21__LT_impl_u20_str_GT_4find17hee1735f0b948b357E(param_1,param_2,0x22);
      lVar7 = auVar9._8_8_;
      if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        do {
          auVar9 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                             (lVar7,auVar2._0_8_,auVar2._8_8_);
          lVar4 = auVar9._0_8_;
          if (lVar4 == 0) {
LAB_00429948:
            uVar6 = auVar2._0_8_;
            lVar4 = lVar7;
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                      (uVar6,auVar2._8_8_,0,lVar7,&PTR_s_crates_ruff_python_formatter_src_0067f820);
            auVar2._8_8_ = lVar4;
            auVar2._0_8_ = uVar6;
LAB_00429960:
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                      (auVar2._0_8_,auVar2._8_8_,lVar7);
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          local_40 = auVar9._8_8_ + lVar4;
          local_38 = 0;
          local_48 = lVar4;
          uVar3 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h1981b6825b102d23E
                            (&local_48);
          bVar8 = (uVar3 & 1) == 0;
          unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),bVar8);
          if (bVar8) break;
          lVar7 = lVar7 + 1;
          auVar9 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                             (lVar7,auVar2._0_8_,auVar2._8_8_);
          if (auVar9._0_8_ == 0) goto LAB_00429960;
          auVar10 = _ZN4core3str21__LT_impl_u20_str_GT_4find17hee1735f0b948b357E
                              (auVar9._0_8_,auVar9._8_8_,0x22);
          lVar7 = auVar10._8_8_;
          auVar2 = auVar9;
        } while ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0);
        goto LAB_00429932;
      }
    }
    else {
      auVar9 = _ZN4core3str21__LT_impl_u20_str_GT_4find17hee1735f0b948b357E(param_1,param_2,0x27);
      lVar7 = auVar9._8_8_;
      if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        do {
          auVar9 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                             (lVar7,auVar2._0_8_,auVar2._8_8_);
          lVar4 = auVar9._0_8_;
          if (lVar4 == 0) goto LAB_00429948;
          local_40 = auVar9._8_8_ + lVar4;
          local_38 = 0;
          local_48 = lVar4;
          uVar3 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h1981b6825b102d23E
                            (&local_48);
          bVar8 = (uVar3 & 1) == 0;
          unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),bVar8);
          if (bVar8) break;
          lVar7 = lVar7 + 1;
          auVar9 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                             (lVar7,auVar2._0_8_,auVar2._8_8_);
          if (auVar9._0_8_ == 0) goto LAB_00429960;
          auVar10 = _ZN4core3str21__LT_impl_u20_str_GT_4find17hee1735f0b948b357E
                              (auVar9._0_8_,auVar9._8_8_,0x27);
          lVar7 = auVar10._8_8_;
          auVar2 = auVar9;
        } while ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0);
        goto LAB_00429932;
      }
    }
    unaff_R12 = 0;
  }
  else {
    unaff_R12 = _ZN4core3str21__LT_impl_u20_str_GT_4find17hee1735f0b948b357E
                          (param_1,param_2,(param_3 & 1) * '\x05' + '\"');
  }
LAB_00429932:
  return unaff_R12 & 0xffffff01;
}