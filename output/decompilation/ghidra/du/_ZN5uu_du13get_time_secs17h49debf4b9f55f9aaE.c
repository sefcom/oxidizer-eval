void _ZN5uu_du13get_time_secs17h49debf4b9f55f9aaE(undefined8 *param_1,char param_2,long param_3)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_2 == '\0') {
    param_1[1] = *(undefined8 *)(param_3 + 0x70);
    *param_1 = 5;
    return;
  }
  if (param_2 == '\x01') {
    param_1[1] = *(undefined8 *)(param_3 + 0x78);
    *param_1 = 5;
    return;
  }
  local_20 = 3;
  if ((*(byte *)(param_3 + 0x30) & 1) != 0) {
    param_1[1] = *(undefined8 *)(param_3 + 0x38);
    *param_1 = 5;
    _ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h2285cec56b29122cE(&local_20);
    return;
  }
  param_1[2] = local_10;
  param_1[3] = uStack_8;
  *param_1 = 3;
  param_1[1] = local_18;
  return;
}