undefined8 * _ZN4just8function20invocation_directory17he7bab9ef2e836ae7E(undefined8 *param_1)

{
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  (*(code *)
    PTR__ZN4just8platform4unix98__LT_impl_u20_just__platform_interface__PlatformInterface_u20_for_u20_just__platform__Platform_GT_19convert_native_path17hec5bfed77aedfe82E_00566b98
  )(&local_48);
  if (local_48 == 1) {
    local_18 = uStack_30;
    local_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    uStack_1c = uStack_34;
    _ZN4just8function20invocation_directory28__u7b__u7b_closure_u7d__u7d_17h7e6e45b193e4e289E
              (param_1 + 1,&local_28);
    *param_1 = 1;
    return param_1;
  }
  param_1[2] = CONCAT44(uStack_34,uStack_38);
  param_1[3] = uStack_30;
  *param_1 = CONCAT44(uStack_44,local_48);
  param_1[1] = CONCAT44(uStack_3c,uStack_40);
  return param_1;
}