void _ZN5uu_dd6Output8new_file8open_dst17h968e64089c53b51aE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined param_4,
               byte param_5,undefined *param_6)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined8 local_28;
  undefined4 local_20;
  byte local_1c;
  undefined local_1b;
  
  local_28 = 0x1b600000000;
  local_1c = param_5 ^ 1;
  local_20 = (uint)CONCAT12(*param_6,0x100);
  local_1b = param_4;
  iVar1 = _ZN5uu_dd17make_linux_oflags17hc5c67f9cb15d8524E(param_6);
  if (iVar1 == 1) {
    local_28 = CONCAT44(local_28._4_4_,extraout_EDX);
  }
  _ZN3std2fs11OpenOptions4open17h1ecb7e9f905cf1c8E(param_1,&local_28,param_2,param_3);
  return;
}