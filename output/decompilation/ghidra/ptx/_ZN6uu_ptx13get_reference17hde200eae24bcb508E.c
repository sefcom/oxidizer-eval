void _ZN6uu_ptx13get_reference17hde200eae24bcb508E
               (long *param_1,char param_2,char param_3,long param_4,undefined8 param_5,
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
  code *local_60;
  long *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined local_30;
  
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
    }
    else {
      _ZN5regex5regex6string5Regex7find_at17hf05a7654ffba1dbbE
                (&local_a0,param_7,param_8,param_5,param_6);
      puVar3 = local_a0;
      ppuVar4 = (undefined8 **)local_a0;
      if (local_a0 != (undefined *)0x0) {
        puVar3 = local_88;
        ppuVar4 = local_90;
      }
      lVar2 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                        (ppuVar4,puVar3,param_5,param_6);
      if (lVar2 == 0) {
        _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                  (param_5,param_6,ppuVar4,puVar3,&PTR_s_src_uu_ptx_src_ptx_rs_003eddf0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h881c0d1e76b3a749E
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
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_58 = &local_70;
    local_50 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_a0 = &DAT_003eddd0;
    lStack_98 = 2;
    local_80 = 0;
    local_90 = &local_68;
    local_88 = (undefined *)0x2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hb716a3158a91a555E(param_1,&local_a0);
  }
  return;
}