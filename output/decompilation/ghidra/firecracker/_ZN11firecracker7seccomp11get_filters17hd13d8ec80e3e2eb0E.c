void _ZN11firecracker7seccomp11get_filters17hd13d8ec80e3e2eb0E
               (undefined8 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  if (param_2 == 0) {
    (*(code *)PTR__ZN3vmm7seccomp17get_empty_filters17h935f824ab844f693E_004bfc90)();
    return;
  }
  if (param_2 != 1) {
    _ZN11firecracker7seccomp18get_custom_filters17hc4381478633696bcE(param_1,param_3);
    return;
  }
  _ZN3vmm7seccomp18deserialize_binary17h9d92e16560a10d85E(&lStack_88);
  if (lStack_88 != 0) {
    uStack_a8 = (undefined4)uStack_80;
    uStack_a4 = (undefined4)((ulong)uStack_80 >> 0x20);
    uStack_a0 = (undefined4)uStack_78;
    uStack_9c = (undefined4)((ulong)uStack_78 >> 0x20);
    uStack_98 = (undefined4)uStack_70;
    uStack_94 = (undefined4)((ulong)uStack_70 >> 0x20);
    uStack_90 = (undefined4)uStack_68;
    uStack_8c = (undefined4)((ulong)uStack_68 >> 0x20);
    lStack_58 = lStack_88;
    uStack_50 = uStack_a8;
    uStack_4c = uStack_a4;
    uStack_48 = uStack_a0;
    uStack_44 = uStack_9c;
    uStack_40 = uStack_98;
    uStack_3c = uStack_94;
    uStack_38 = uStack_90;
    uStack_34 = uStack_8c;
    uStack_30 = uStack_60;
    _ZN11firecracker7seccomp24filter_thread_categories17ha917c4cd8472310fE(param_1,&lStack_58);
    return;
  }
  param_1[3] = uStack_70;
  param_1[4] = uStack_68;
  param_1[1] = uStack_80;
  param_1[2] = uStack_78;
  *param_1 = 0;
  return;
}