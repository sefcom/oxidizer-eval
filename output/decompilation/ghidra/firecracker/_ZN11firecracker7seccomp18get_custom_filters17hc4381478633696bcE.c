void _ZN11firecracker7seccomp18get_custom_filters17hc4381478633696bcE(undefined8 *param_1)

{
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined local_40 [48];
  
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h8479b8c1b76c1df6E(local_40);
  _ZN3vmm7seccomp18deserialize_binary17h778388351cf38cc4E(&local_c8,local_40);
  if (local_c8 != 0) {
    local_e8 = (undefined4)local_c0;
    uStack_e4 = (undefined4)((ulong)local_c0 >> 0x20);
    uStack_e0 = (undefined4)uStack_b8;
    uStack_dc = (undefined4)((ulong)uStack_b8 >> 0x20);
    local_d8 = (undefined4)local_b0;
    uStack_d4 = (undefined4)((ulong)local_b0 >> 0x20);
    uStack_d0 = (undefined4)uStack_a8;
    uStack_cc = (undefined4)((ulong)uStack_a8 >> 0x20);
    local_98 = local_c8;
    local_90 = local_e8;
    uStack_8c = uStack_e4;
    uStack_88 = uStack_e0;
    uStack_84 = uStack_dc;
    local_80 = local_d8;
    uStack_7c = uStack_d4;
    uStack_78 = uStack_d0;
    uStack_74 = uStack_cc;
    local_70 = local_a0;
    _ZN11firecracker7seccomp24filter_thread_categories17ha917c4cd8472310fE(param_1,&local_98);
    return;
  }
  param_1[3] = local_b0;
  param_1[4] = uStack_a8;
  param_1[1] = local_c0;
  param_1[2] = uStack_b8;
  *param_1 = 0;
  return;
}