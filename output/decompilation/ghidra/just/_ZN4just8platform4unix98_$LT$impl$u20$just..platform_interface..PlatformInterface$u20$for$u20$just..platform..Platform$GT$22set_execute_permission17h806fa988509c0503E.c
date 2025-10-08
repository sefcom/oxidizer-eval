undefined8
_ZN4just8platform4unix98__LT_impl_u20_just__platform_interface__PlatformInterface_u20_for_u20_just__platform__Platform_GT_22set_execute_permission17h806fa988509c0503E
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_c0 [2];
  undefined8 local_b8;
  uint local_88;
  
  _ZN3std2fs8metadata17h5a72efc395e817eeE(local_c0,param_1,param_2);
  if (local_c0[0] == 2) {
    return local_b8;
  }
  uVar1 = _ZN3std2fs15set_permissions17h821a786bf489bdf4E(param_1,param_2,local_88 | 0x40);
  return uVar1;
}