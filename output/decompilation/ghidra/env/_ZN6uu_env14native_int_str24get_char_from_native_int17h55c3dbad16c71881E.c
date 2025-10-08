undefined  [16]
_ZN6uu_env14native_int_str24get_char_from_native_int17h55c3dbad16c71881E(undefined4 param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_21;
  byte local_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_21 = (undefined)param_1;
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00219130)(local_20,&local_21,1);
  uVar1 = 0x110000;
  if ((local_20[0] & 1) == 0) {
    uVar1 = _ZN6uu_env14native_int_str24get_char_from_native_int28__u7b__u7b_closure_u7d__u7d_17hb31bb5d13165744dE
                      (local_18,local_10);
  }
  auVar2._8_4_ = param_1;
  auVar2._0_8_ = uVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}