undefined8 *
_ZN5uu_od15parse_nrofbytes21parse_number_of_bytes17h85777a6afadc140aE
          (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined local_61;
  undefined8 *local_60;
  undefined4 local_54;
  undefined4 local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  uVar9 = 2;
  cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                    (param_2,param_3,"0x",2);
  uVar8 = 0x10;
  bVar3 = true;
  if (cVar4 == '\0') {
    uVar9 = 2;
    cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                      (param_2,param_3,"0X",2);
    if (cVar4 == '\0') {
      local_50 = 0;
      auVar11 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x30,&local_50);
      cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h0450dff97e96928eE
                        (param_2,param_3,auVar11._0_8_,auVar11._8_8_);
      if (cVar4 == '\0') {
        lVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                          (param_2,param_3);
        if (lVar6 != 0) {
          _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE(param_1,lVar6);
          return param_1;
        }
        goto LAB_001d7c39;
      }
      uVar8 = 8;
      uVar9 = 0;
      bVar3 = false;
    }
  }
  local_38 = param_2 + param_3;
  local_60 = param_1;
  local_40 = param_2;
  iVar5 = _ZN4core3str11validations23next_code_point_reverse17hff7c38eb44570652E(&local_40);
  uVar10 = 1;
  lVar6 = param_3;
  local_54 = uVar8;
  if (iVar5 == 0) {
switchD_001d7a17_caseD_43:
  }
  else {
    switch(extraout_EDX) {
    case 0x42:
      if (!bVar3) {
        iVar5 = _ZN4core3str11validations23next_code_point_reverse17hff7c38eb44570652E(&local_40);
        puVar7 = local_60;
        if ((iVar5 == 0) || (0x28 < extraout_EDX_00 - 0x45U)) {
switchD_001d7ac1_caseD_46:
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                    (local_60 + 1,param_2,param_3);
          *puVar7 = 1;
          return puVar7;
        }
        lVar6 = param_3 + -2;
        switch(extraout_EDX_00) {
        case 0x45:
          uVar10 = 1000000000000000000;
          break;
        default:
          goto switchD_001d7ac1_caseD_46;
        case 0x47:
          uVar10 = 1000000000;
          break;
        case 0x4b:
        case 0x6b:
          uVar10 = 1000;
          break;
        case 0x4d:
        case 0x6d:
          uVar10 = 1000000;
          break;
        case 0x50:
          uVar10 = 1000000000000000;
          break;
        case 0x54:
          uVar10 = 1000000000000;
        }
      }
      break;
    default:
      goto switchD_001d7a17_caseD_43;
    case 0x45:
      lVar6 = param_3 - (ulong)(bVar3 ^ 1);
      uVar10 = 0x1000000000000000;
      if (bVar3 != false) {
        uVar10 = 1;
      }
      break;
    case 0x47:
      uVar10 = 0x40000000;
      lVar6 = param_3 + -1;
      break;
    case 0x4b:
    case 0x6b:
      uVar10 = 0x400;
      lVar6 = param_3 + -1;
      break;
    case 0x4d:
    case 0x6d:
      uVar10 = 0x100000;
      lVar6 = param_3 + -1;
      break;
    case 0x50:
      uVar10 = 0x4000000000000;
      lVar6 = param_3 + -1;
      break;
    case 0x54:
      uVar10 = 0x10000000000;
      lVar6 = param_3 + -1;
      break;
    case 0x62:
      lVar6 = param_3 - (ulong)(bVar3 ^ 1);
      uVar10 = 0x200;
      if (bVar3 != false) {
        uVar10 = 1;
      }
    }
  }
  auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                      (uVar9,lVar6,param_2,param_3);
  if (auVar11._0_8_ != 0) {
    _ZN4core3num21__LT_impl_u20_u64_GT_14from_str_radix17h99ae39453f343bd7E
              (&local_50,auVar11._0_8_,auVar11._8_8_,local_54);
    puVar7 = local_60;
    if ((char)local_50 == '\0') {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar10;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_48;
      if (SUB168(auVar11 * auVar2,8) == 0) {
        local_60[1] = SUB168(auVar11 * auVar2,0);
        uVar9 = 3;
      }
      else {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                  (local_60 + 1,param_2,param_3);
        uVar9 = 2;
      }
      *puVar7 = uVar9;
    }
    else {
      local_61 = local_50._1_1_;
      _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h3f1d93ee7475dcc4E
                (local_60 + 1,&local_61);
      *puVar7 = 1;
    }
    return puVar7;
  }
  _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
            (param_2,param_3,uVar9,lVar6,&PTR_s_src_uu_od_src_parse_nrofbytes_rs_00243340);
LAB_001d7c39:
  _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
            (param_2,param_3,0,param_3,&PTR_s_src_uu_od_src_parse_nrofbytes_rs_00243328);
  pcVar1 = (code *)swi(3);
  puVar7 = (undefined8 *)(*pcVar1)();
  return puVar7;
}