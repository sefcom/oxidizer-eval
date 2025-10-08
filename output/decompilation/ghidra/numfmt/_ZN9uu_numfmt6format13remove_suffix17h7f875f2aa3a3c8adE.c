void _ZN9uu_numfmt6format13remove_suffix17h7f875f2aa3a3c8adE
               (undefined *param_1,undefined8 *param_2,byte param_3,byte param_4,byte param_5)

{
  byte bVar1;
  byte bVar2;
  byte local_79;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined *local_58;
  undefined ***local_50;
  code *local_48;
  char **local_40;
  code *local_38;
  undefined **local_30;
  undefined *local_28;
  undefined ***local_20;
  code *local_18;
  undefined8 local_10;
  
  if (param_4 == 2) {
    param_2[1] = param_1;
    *param_2 = 0x8000000000000000;
    return;
  }
  bVar1 = param_5 - 2;
  bVar2 = 2;
  if (bVar1 < 4) {
    bVar2 = bVar1;
  }
  local_78 = param_1;
  if ((param_4 & 1) == 0) {
    if (bVar2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00169bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0011a3b8 + *(int *)(&DAT_0011a3b8 + (ulong)param_3 * 4)))();
      return;
    }
    if (bVar2 == 2) {
      if ((param_5 & 1) != 0) {
        local_70 = (char *)CONCAT71(local_70._1_7_,param_3);
        local_30 = &local_78;
        local_28 = 
        PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_00209958
        ;
        local_20 = (undefined ***)&local_70;
        local_18 = 
        _ZN64__LT_uu_numfmt__units__RawSuffix_u20_as_u20_core__fmt__Debug_GT_3fmt17h24671838996c3b7bE
        ;
        local_60 = &PTR_s_missing__i__suffix_in_input____002023d8;
        local_58 = (undefined *)0x3;
        local_40 = (char **)0x0;
        local_50 = &local_30;
        local_48 = (code *)0x2;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(param_2,&local_60);
        return;
      }
      goto LAB_00169c45;
    }
    if (bVar1 != 3) goto LAB_00169d09;
    local_70 = (char *)0x1;
    local_68 = 0;
  }
  else {
    if ((bVar2 == 0) || ((bVar2 == 2 && ((param_5 & 1) != 0)))) {
LAB_00169c45:
                    /* WARNING: Could not recover jumptable at 0x00169c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0011a3d8 + *(int *)(&DAT_0011a3d8 + (ulong)param_3 * 4)))();
      return;
    }
    if (bVar1 != 3) {
LAB_00169d09:
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4c3223c430555e40E
                (param_2,"This suffix is unsupported for specified unit",0x2d);
      return;
    }
    local_68 = 1;
    local_70 = "i";
  }
  local_60 = &local_78;
  local_58 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_00209958
  ;
  local_50 = (undefined ***)&local_79;
  local_48 = 
  _ZN64__LT_uu_numfmt__units__RawSuffix_u20_as_u20_core__fmt__Debug_GT_3fmt17h24671838996c3b7bE;
  local_40 = &local_70;
  local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17heebe613453956698E;
  local_30 = &PTR_s_rejecting_suffix_in_input______c_00202408;
  local_28 = (undefined *)0x4;
  local_10 = 0;
  local_20 = &local_60;
  local_18 = (code *)0x3;
  local_79 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h6181b64f68c0f373E(param_2,&local_30);
  return;
}