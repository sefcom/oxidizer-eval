undefined4 * _ZN8uu_chcon16get_root_dev_ino17h0d3acefe4ca973afE(undefined4 *param_1)

{
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  _ZN3std2fs16symlink_metadata17hc0e2d0e49957759eE(local_b8);
  if (local_b8[0] == 2) {
    _ZN8uu_chcon6errors5Error8from_io117h4a84c8fef6f8f370E(param_1,local_b0);
    return param_1;
  }
  *(undefined8 *)(param_1 + 2) = local_98;
  *(undefined8 *)(param_1 + 4) = uStack_90;
  *param_1 = 0x12;
  return param_1;
}