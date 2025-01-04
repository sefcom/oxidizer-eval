void __rustcall
uu_env::native_int_str::NativeStr::match_cow
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined auVar1 [16];
  long local_58 [3];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*param_2 == -0x8000000000000000) {
    auVar1 = slice::___closure__(param_3,param_4,param_2[1],param_2[2]);
    if (auVar1._0_8_ != 0) {
      *param_1 = 0x8000000000000000;
      *(undefined (*) [16])(param_1 + 1) = auVar1;
      return;
    }
  }
  else {
    slice::___closure__(local_58,param_5,param_6,param_2[1],param_2[2]);
    if (local_58[0] != -0x8000000000000000) {
      core::ops::function::FnOnce::call_once(&local_40,local_58);
      local_20 = local_38;
      uStack_1c = uStack_34;
      uStack_18 = uStack_30;
      uStack_14 = uStack_2c;
      local_28 = local_40;
      core::ops::function::FnOnce::call_once(param_1,&local_28);
      return;
    }
  }
  *param_1 = 0x8000000000000001;
  return;
}