void _ZN11firecracker7seccomp13SeccompConfig9from_args17he53bf44f0843d7e2E
               (undefined *param_1,int param_2,long param_3)

{
  byte local_18 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0x15;
    return;
  }
  if (param_3 != 0) {
    _ZN3std2fs4File4open17h847db8d34bb9a3a1E(local_18,param_3);
    if ((local_18[0] & 1) != 0) {
      *param_1 = 0x14;
      *(undefined8 *)(param_1 + 8) = local_10;
      return;
    }
    *(undefined4 *)(param_1 + 4) = 2;
    *(undefined4 *)(param_1 + 8) = local_14;
    *param_1 = 0x15;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = 0x15;
  return;
}