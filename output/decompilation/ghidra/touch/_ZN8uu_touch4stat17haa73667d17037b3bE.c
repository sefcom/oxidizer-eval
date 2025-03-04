void _ZN8uu_touch4stat17haa73667d17037b3bE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
    _ZN3std2fs16symlink_metadata17ha4686baccc39e49aE(local_178);
joined_r0x002c32ca:
    if (local_178[0] == 2) {
      param_1[1] = local_170;
      uVar1 = 1;
      goto LAB_002c3317;
    }
  }
  else {
    _ZN3std2fs8metadata17h73b841bac6708bdfE(local_c8);
    if (local_c8[0] == 2) {
      _ZN8uu_touch4stat28__u7b__u7b_closure_u7d__u7d_17hfaffa2c55f8502edE
                (local_178,param_2,param_3,local_c0);
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