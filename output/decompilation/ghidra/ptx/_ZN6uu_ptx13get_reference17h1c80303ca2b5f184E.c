void _ZN6uu_ptx13get_reference17h1c80303ca2b5f184E
               (long *param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 **ppuVar4;
  undefined *local_a0;
  long lStack_98;
  undefined8 **local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_70;
  undefined8 *local_68;
  undefined *local_60;
  long *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined local_30;
  
  if ((param_2 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
    }
    else {
      _ZN5regex5regex6string5Regex7find_at17h85c38407f70a8d86E
                (&local_a0,param_7,param_8,param_5,param_6);
      puVar3 = local_a0;
      ppuVar4 = (undefined8 **)local_a0;
      if (local_a0 != (undefined *)0x0) {
        puVar3 = local_88;
        ppuVar4 = local_90;
      }
      lVar2 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                        (ppuVar4,puVar3,param_5,param_6);
      if (lVar2 == 0) {
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00380258)
                  (param_5,param_6,ppuVar4,puVar3,&PTR_s_src_uu_ptx_src_ptx_rs_003518e0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he9e3a9b23988b07fE
                (&local_a0,lVar2);
      param_1[2] = (long)local_90;
      *param_1 = (long)local_a0;
      param_1[1] = lStack_98;
    }
  }
  else {
    local_40 = *(undefined4 *)(param_4 + 0x20);
    uStack_3c = *(undefined4 *)(param_4 + 0x24);
    uStack_38 = *(undefined4 *)(param_4 + 0x28);
    uStack_34 = *(undefined4 *)(param_4 + 0x2c);
    local_48 = 0;
    local_30 = 0;
    local_70 = *(long *)(param_4 + 0x38) + 1;
    local_68 = &local_48;
    local_60 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00380060
    ;
    local_58 = &local_70;
    local_50 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00380150
    ;
    local_a0 = &DAT_003518c0;
    lStack_98 = 2;
    local_80 = 0;
    local_90 = &local_68;
    local_88 = (undefined *)0x2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4a28e95acdffaeaeE(param_1,&local_a0);
  }
  return;
}