void _ZN8uu_touch4stat17hbfae00cfffe9133bE
               (ulong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int local_178 [2];
  ulong local_170;
  ulong local_110;
  undefined4 local_108;
  ulong local_100;
  undefined4 local_f8;
  int local_c8 [2];
  undefined8 local_c0;
  
  if (param_4 == 0) {
    _ZN3std2fs16symlink_metadata17h73fb12f4b49f31d3E(local_178);
  }
  else {
    _ZN3std2fs8metadata17hb661f9d8212cddd7E(local_c8);
    if (local_c8[0] == 2) {
      _ZN8uu_touch4stat28__u7b__u7b_closure_u7d__u7d_17hd10e3b17b3c6cbb4E
                (local_178,param_2,param_3,local_c0);
    }
    else {
      (*(code *)PTR_memcpy_003a9f30)(local_178,local_c8,0xb0);
    }
  }
  if (local_178[0] != 2) {
    *(undefined4 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    *(undefined4 *)(param_1 + 4) = local_f8;
    local_170 = local_110;
  }
  param_1[1] = local_170;
  *param_1 = (ulong)(local_178[0] == 2);
  return;
}