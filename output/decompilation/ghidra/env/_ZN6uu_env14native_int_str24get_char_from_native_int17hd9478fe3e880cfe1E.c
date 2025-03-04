undefined  [16]
_ZN6uu_env14native_int_str24get_char_from_native_int17hd9478fe3e880cfe1E(undefined4 param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_21;
  long local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_21 = (undefined)param_1;
  _ZN4core3str8converts9from_utf817ha1effb4cca6d9901E(&local_20,&local_21,1);
  if (local_20 == 0) {
    uVar1 = _ZN6uu_env14native_int_str24get_char_from_native_int28__u7b__u7b_closure_u7d__u7d_17h4c012466286f86dcE
                      (local_18,local_10);
  }
  else {
    uVar1 = 0x110000;
  }
  auVar2._8_4_ = param_1;
  auVar2._0_8_ = uVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}