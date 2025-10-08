ulong * _ZN4just8platform4unix98__LT_impl_u20_just__platform_interface__PlatformInterface_u20_for_u20_just__platform__Platform_GT_19convert_native_path17hec5bfed77aedfe82E
                  (ulong *param_1)

{
  undefined8 in_R8;
  undefined8 in_R9;
  bool bVar1;
  int local_20;
  undefined4 uStack_1c;
  ulong local_18;
  ulong uStack_10;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)(&local_20,in_R8,in_R9)
  ;
  bVar1 = local_20 != 1;
  if (bVar1) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_20,local_18,uStack_10);
    param_1[2] = local_18;
    param_1[3] = uStack_10;
    param_1[1] = CONCAT44(uStack_1c,local_20);
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (param_1 + 1,"Error getting current directory: unicode decode error",0x35);
  }
  *param_1 = (ulong)!bVar1;
  return param_1;
}