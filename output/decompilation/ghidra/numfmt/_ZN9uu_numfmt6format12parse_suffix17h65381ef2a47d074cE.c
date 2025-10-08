void _ZN9uu_numfmt6format12parse_suffix17h65381ef2a47d074cE
               (ulong *param_1,long param_2,long param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined unaff_R13B;
  undefined auVar6 [12];
  long local_a0;
  long local_98;
  undefined **local_90;
  ulong local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  ulong local_58;
  long local_50;
  undefined local_48;
  undefined8 *local_40;
  undefined *local_38;
  
  if (param_3 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4c3223c430555e40E
              (param_1,"invalid number: \'\'",0x12);
    return;
  }
  local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
  uVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x69,&local_90);
  bVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h8acf7e79f75ef2f1E
                    (param_2,param_3,uVar3,1);
  local_98 = param_2 + param_3;
  local_a0 = param_2;
  if (bVar2 != 0) {
    _ZN4core3str11validations23next_code_point_reverse17h55d2d504630d5ed9E(&local_a0);
  }
  auVar6 = _ZN4core3str11validations23next_code_point_reverse17h55d2d504630d5ed9E(&local_a0);
  if ((auVar6 & (undefined  [12])0x1) == (undefined  [12])0x0) {
LAB_001698f7:
    local_60 = 0;
    local_48 = 1;
    local_40 = &local_60;
    local_38 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209948
    ;
    local_90 = &PTR_s_invalid_suffix_in_input__002023a0;
    local_88 = 1;
    local_70 = 0;
    local_80 = &local_40;
    local_78 = 1;
    local_58 = param_2;
    local_50 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(param_1,&local_90);
    return;
  }
  switch(auVar6._8_4_) {
  case 0x45:
    unaff_R13B = 5;
    break;
  default:
    if (bVar2 != 0 || auVar6._8_4_ - 0x3aU < 0xfffffff6) goto LAB_001698f7;
    bVar2 = 2;
    uVar5 = 0;
    goto LAB_00169990;
  case 0x47:
    unaff_R13B = 2;
    break;
  case 0x4b:
    unaff_R13B = 0;
    break;
  case 0x4d:
    unaff_R13B = 1;
    break;
  case 0x50:
    unaff_R13B = 4;
    break;
  case 0x54:
    unaff_R13B = 3;
    break;
  case 0x59:
    unaff_R13B = 7;
    break;
  case 0x5a:
    unaff_R13B = 6;
  }
  uVar5 = ~(ulong)bVar2;
LAB_00169990:
  lVar4 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                    (uVar5 + param_3,param_2,param_3);
  if (lVar4 != 0) {
    (*(code *)
      PTR__ZN4core3num7dec2flt60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_f64_GT_8from_str17h05023748d9faa6d2E_00209950
    )(&local_60,lVar4);
    if (((char)local_60 == '\0') ||
       (_ZN9uu_numfmt6format12parse_suffix28__u7b__u7b_closure_u7d__u7d_17h697123fed7d6da64E
                  (&local_90,param_2,param_3), local_58 = local_88,
       local_90 == (undefined **)0x8000000000000000)) {
      param_1[1] = local_58;
      *(undefined *)(param_1 + 2) = unaff_R13B;
      *(byte *)((long)param_1 + 0x11) = bVar2;
      *param_1 = 0x8000000000000000;
    }
    else {
      *param_1 = (ulong)local_90;
      param_1[1] = local_88;
      param_1[2] = (ulong)local_80;
    }
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00209938)
            (param_2,param_3,0,uVar5 + param_3,&PTR_s_src_uu_numfmt_src_format_rs_002023b0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}