void __rustcall
uu_touch::stat(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int local_178 [2];
  undefined8 local_170;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  int local_c8 [2];
  undefined8 local_c0;
  
  if (param_4 == 0) {
    std::fs::symlink_metadata(local_178);
joined_r0x002c32ca:
    if (local_178[0] == 2) {
      param_1[1] = local_170;
      uVar1 = 1;
      goto LAB_002c3317;
    }
  }
  else {
    std::fs::metadata(local_c8);
    if (local_c8[0] == 2) {
      stat::___closure__(local_178,param_2,param_3,local_c0);
      goto joined_r0x002c32ca;
    }
    (*(code *)PTR_memcpy_00450a78)(local_178,local_c8,0xb0);
  }
  param_1[1] = local_110;
  *(undefined4 *)(param_1 + 2) = local_108;
  param_1[3] = local_100;
  *(undefined4 *)(param_1 + 4) = local_f8;
  uVar1 = 0;
LAB_002c3317:
  *param_1 = uVar1;
  return;
}