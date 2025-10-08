undefined8
_ZN7uu_stat11check_bound17h3dee2e7f7020c454E
          (undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined local_88 [16];
  undefined local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_40 [24];
  undefined4 local_28;
  
  if (param_5 < param_3) {
    uVar2 = 0;
  }
  else {
    local_88 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                         (param_4,param_5,param_1,param_2);
    if (local_88._0_8_ == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00222268)
                (param_1,param_2,param_4,param_5,&PTR_s_src_uu_stat_src_stat_rs_00219a00);
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    local_90 = 0;
    local_78 = 1;
    local_a0 = &local_90;
    local_98 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00222260
    ;
    local_70 = &DAT_002199e0;
    local_68 = 2;
    local_50 = 0;
    local_60 = &local_a0;
    local_58 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(local_40,&local_70);
    local_28 = 1;
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h173a34a4352a059dE(local_40);
  }
  return uVar2;
}