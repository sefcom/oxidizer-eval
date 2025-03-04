void _ZN9uu_numfmt6format12parse_suffix17h407c60c3b46102efE
               (ulong *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  int extraout_EDX;
  undefined unaff_R12B;
  long local_a0;
  long local_98;
  undefined **local_90;
  ulong local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  undefined local_48;
  undefined8 *local_40;
  code *local_38;
  
  if (param_3 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h523a2f825c855b37E
              (param_1,"invalid number: \'\'",0x12);
    return;
  }
  local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
  uVar6 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x69,&local_90);
  bVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17ha109e61deb96259bE
                    (param_2,param_3,uVar6);
  local_98 = param_2 + param_3;
  local_a0 = param_2;
  if (bVar4 != 0) {
    _ZN4core3str11validations23next_code_point_reverse17he73eefe5b7d03fc3E(&local_a0);
  }
  iVar5 = _ZN4core3str11validations23next_code_point_reverse17he73eefe5b7d03fc3E(&local_a0);
  if (iVar5 == 0) {
LAB_001c3497:
    local_60 = 0;
    local_48 = 1;
    local_40 = &local_60;
    local_38 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_90 = &PTR_s_invalid_suffix_in_input__00235ac0;
    local_88 = 1;
    local_70 = 0;
    local_80 = &local_40;
    local_78 = 1;
    local_58 = param_2;
    local_50 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hab58af973b71ab82E(param_1,&local_90);
    return;
  }
  switch(extraout_EDX) {
  case 0x45:
    unaff_R12B = 5;
    break;
  default:
    if (bVar4 != 0 || extraout_EDX - 0x3aU < 0xfffffff6) goto LAB_001c3497;
    bVar2 = true;
    bVar4 = 2;
    uVar7 = param_3;
    bVar3 = 2;
    if (param_3 == 0) goto LAB_001c3550;
    goto LAB_001c3537;
  case 0x47:
    unaff_R12B = 2;
    break;
  case 0x4b:
    unaff_R12B = 0;
    break;
  case 0x4d:
    unaff_R12B = 1;
    break;
  case 0x50:
    unaff_R12B = 4;
    break;
  case 0x54:
    unaff_R12B = 3;
    break;
  case 0x59:
    unaff_R12B = 7;
    break;
  case 0x5a:
    unaff_R12B = 6;
  }
  bVar2 = false;
  uVar7 = ~(ulong)bVar4 + param_3;
  bVar3 = bVar4;
  if (uVar7 != 0) {
LAB_001c3537:
    bVar4 = bVar3;
    if (uVar7 < param_3) {
      if (*(char *)(param_2 + uVar7) < -0x40) {
LAB_001c35df:
        _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                  (param_2,param_3,0,uVar7,&PTR_s_src_uu_numfmt_src_format_rs_00235ad0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (!bVar2) goto LAB_001c35df;
  }
LAB_001c3550:
  _ZN4core3num7dec2flt60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_f64_GT_8from_str17hfde7dd7a3aaead31E
            (&local_60,param_2,uVar7);
  if (((char)local_60 == '\0') ||
     (_ZN9uu_numfmt6format12parse_suffix28__u7b__u7b_closure_u7d__u7d_17hc249515d7f336463E
                (&local_90,param_2,param_3), local_58 = local_88,
     local_90 == (undefined **)0x8000000000000000)) {
    param_1[1] = local_58;
    *(undefined *)(param_1 + 2) = unaff_R12B;
    *(byte *)((long)param_1 + 0x11) = bVar4;
    *param_1 = 0x8000000000000000;
  }
  else {
    *param_1 = (ulong)local_90;
    param_1[1] = local_88;
    param_1[2] = (ulong)local_80;
  }
  return;
}