void _ZN8uu_touch15prepend_century17h599b7f098e7e4682E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  int *local_68;
  undefined *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_78 = param_2;
  local_70 = param_3;
  lVar2 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                    (param_2,param_3);
  if (lVar2 != 0) {
    uVar3 = _ZN4core3num21__LT_impl_u20_u32_GT_16from_ascii_radix17h825576ac29f90020E(lVar2);
    if ((uVar3 & 1) == 0) {
      local_7c = ((uint)(uVar3 >> 0x20) < 0x45) + 0x13;
      local_68 = &local_7c;
      local_60 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_003a9e88
      ;
      local_58 = &local_78;
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h18af96482be5ae0fE;
      local_48 = &DAT_001574b0;
      local_40 = 2;
      local_28 = 0;
      local_38 = &local_68;
      local_30 = 2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h42b45f6f6f73b099E(param_1,&local_48);
    }
    else {
      uVar4 = _ZN8uu_touch15prepend_century28__u7b__u7b_closure_u7d__u7d_17hf8149f90ade8620dE
                        (param_2,param_3);
      param_1[1] = uVar4;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h05d1e2d078ddfe04E_00379e10
      ;
      *param_1 = 0x8000000000000000;
    }
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_003aa0b8)
            (param_2,param_3,0,2,&PTR_s_src_uu_touch_src_touch_rs_00379ed8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}