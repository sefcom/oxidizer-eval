void _ZN5uu_od15parse_nrofbytes21parse_number_of_bytes17hb463a51f26f3deb1E
               (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined auVar2 [16];
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [12];
  undefined local_61;
  undefined8 *local_60;
  undefined4 local_54;
  undefined4 local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  uVar8 = 2;
  cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                    (param_2,param_3,"0x",2);
  uVar7 = 0x10;
  bVar3 = true;
  if (cVar5 == '\0') {
    uVar8 = 2;
    cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                      (param_2,param_3,"0X",2);
    if (cVar5 == '\0') {
      local_50 = 0;
      uVar8 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x30,&local_50);
      cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                        (param_2,param_3,uVar8,1);
      if (cVar5 == '\0') {
        lVar6 = _ZN3std4path77__LT_impl_u20_core__convert__AsRef_LT_std__path__Path_GT__u20_for_u20_str_GT_6as_ref17h34cce61f9bef243cE
                          (param_2,param_3);
        if (lVar6 != 0) {
          (*(code *)
            PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_0020acd8)
                    (param_1,lVar6);
          return;
        }
        goto LAB_0016afb1;
      }
      uVar7 = 8;
      bVar3 = false;
      uVar8 = 0;
    }
  }
  local_38 = param_2 + param_3;
  local_60 = param_1;
  local_40 = param_2;
  auVar11 = _ZN4core3str11validations23next_code_point_reverse17h438d37208171f517E(&local_40);
  uVar9 = 1;
  lVar6 = param_3;
  local_54 = uVar7;
  if ((auVar11 & (undefined  [12])0x1) == (undefined  [12])0x0) {
switchD_0016adad_caseD_43:
    goto LAB_0016adbe;
  }
  switch(auVar11._8_4_) {
  case 0x42:
    if (!bVar3) {
      auVar11 = _ZN4core3str11validations23next_code_point_reverse17h438d37208171f517E(&local_40);
      puVar4 = local_60;
      if (((auVar11 & (undefined  [12])0x1) == (undefined  [12])0x0) ||
         (0x28 < auVar11._8_4_ - 0x45U)) {
switchD_0016aee0_caseD_46:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                  (local_60 + 1,param_2,param_3);
        *puVar4 = 1;
        return;
      }
      lVar6 = param_3 + -2;
      switch(auVar11._8_4_) {
      case 0x45:
        uVar9 = 1000000000000000000;
        break;
      default:
        goto switchD_0016aee0_caseD_46;
      case 0x47:
        uVar9 = 1000000000;
        break;
      case 0x4b:
      case 0x6b:
        uVar9 = 1000;
        break;
      case 0x4d:
      case 0x6d:
        uVar9 = 1000000;
        break;
      case 0x50:
        uVar9 = 1000000000000000;
        break;
      case 0x54:
        uVar9 = 1000000000000;
      }
    }
    break;
  default:
    goto switchD_0016adad_caseD_43;
  case 0x45:
    uVar9 = 0x1000000000000000;
    goto LAB_0016af0d;
  case 0x47:
    uVar9 = 0x40000000;
    lVar6 = param_3 + -1;
    break;
  case 0x4b:
  case 0x6b:
    uVar9 = 0x400;
    lVar6 = param_3 + -1;
    break;
  case 0x4d:
  case 0x6d:
    uVar9 = 0x100000;
    lVar6 = param_3 + -1;
    break;
  case 0x50:
    uVar9 = 0x4000000000000;
    lVar6 = param_3 + -1;
    break;
  case 0x54:
    uVar9 = 0x10000000000;
    lVar6 = param_3 + -1;
    break;
  case 0x62:
    uVar9 = 0x200;
LAB_0016af0d:
    if (bVar3 != false) {
      uVar9 = 1;
    }
    lVar6 = param_3 - (ulong)(bVar3 ^ 1);
  }
LAB_0016adbe:
  auVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                      (uVar8,lVar6,param_2,param_3);
  if (auVar10._0_8_ != 0) {
    _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
              (&local_50,auVar10._0_8_,auVar10._8_8_,local_54);
    puVar4 = local_60;
    if ((char)local_50 == '\0') {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar9;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_48;
      if (SUB168(auVar10 * auVar2,8) == 0) {
        local_60[1] = SUB168(auVar10 * auVar2,0);
        uVar8 = 4;
      }
      else {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                  (local_60 + 1,param_2,param_3);
        uVar8 = 2;
      }
      *puVar4 = uVar8;
    }
    else {
      local_61 = local_50._1_1_;
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h3be401356d22601eE
                (local_60 + 1,&local_61);
      *puVar4 = 1;
    }
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0020acd0)
            (param_2,param_3,uVar8,lVar6,&PTR_s_src_uu_od_src_parse_nrofbytes_rs_002027b0);
LAB_0016afb1:
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0020acd0)
            (param_2,param_3,0,param_3,&PTR_s_src_uu_od_src_parse_nrofbytes_rs_00202798);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}