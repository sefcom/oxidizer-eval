void _ZN11firecracker7seccomp19get_default_filters17h6575115e05aaac67E(undefined8 *param_1)

{
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  _ZN3vmm7seccomp18deserialize_binary17h9d92e16560a10d85E(&local_88);
  if (local_88 != 0) {
    local_a8 = (undefined4)local_80;
    uStack_a4 = (undefined4)((ulong)local_80 >> 0x20);
    uStack_a0 = (undefined4)uStack_78;
    uStack_9c = (undefined4)((ulong)uStack_78 >> 0x20);
    local_98 = (undefined4)local_70;
    uStack_94 = (undefined4)((ulong)local_70 >> 0x20);
    uStack_90 = (undefined4)uStack_68;
    uStack_8c = (undefined4)((ulong)uStack_68 >> 0x20);
    local_58 = local_88;
    local_50 = local_a8;
    uStack_4c = uStack_a4;
    uStack_48 = uStack_a0;
    uStack_44 = uStack_9c;
    local_40 = local_98;
    uStack_3c = uStack_94;
    uStack_38 = uStack_90;
    uStack_34 = uStack_8c;
    local_30 = local_60;
    _ZN11firecracker7seccomp24filter_thread_categories17ha917c4cd8472310fE(param_1,&local_58);
    return;
  }
  param_1[3] = local_70;
  param_1[4] = uStack_68;
  param_1[1] = local_80;
  param_1[2] = uStack_78;
  *param_1 = 0;
  return;
}