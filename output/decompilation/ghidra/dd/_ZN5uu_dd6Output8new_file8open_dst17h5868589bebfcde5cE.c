void _ZN5uu_dd6Output8new_file8open_dst17h5868589bebfcde5cE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined param_4,
               byte param_5,undefined *param_6)

{
  undefined auVar1 [12];
  undefined8 local_28;
  undefined4 local_20;
  byte local_1c;
  undefined local_1b;
  
  local_28 = 0x1b600000000;
  local_1c = param_5 ^ 1;
  local_20 = (uint)CONCAT12(*param_6,0x100);
  local_1b = param_4;
  auVar1 = _ZN5uu_dd17make_linux_oflags17h8059fc6e2ea11e72E(param_6);
  if ((auVar1 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    local_28 = CONCAT44(local_28._4_4_,auVar1._8_4_);
  }
  _ZN3std2fs11OpenOptions4open17h8d324e17fb255e3bE(param_1,&local_28,param_2,param_3);
  return;
}