void _ZN11firecracker26print_snapshot_data_format17hddac348824e0a41bE(long *param_1)

{
  long lVar1;
  undefined4 **ppuVar2;
  long lVar3;
  long lVar4;
  int local_cc;
  undefined8 local_c8;
  long local_c0;
  undefined4 **ppuStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined4 *local_38;
  undefined *local_30;
  long local_18;
  
  _ZN3std2fs4File4open17h93e838a1af49f920E(&local_c8);
  if ((int)local_c8 == 1) {
    *param_1 = 6;
    *(int *)(param_1 + 1) = (int)local_c0;
    *(int *)((long)param_1 + 0xc) = (int)((ulong)local_c0 >> 0x20);
    return;
  }
  local_cc = local_c8._4_4_;
  _ZN3vmm8snapshot18get_format_version17h94cdb088bfe0675bE(&local_c8,&local_cc);
  local_18 = local_a0;
  local_98 = local_c0;
  lVar1 = local_98;
  uStack_90 = ppuStack_b8;
  ppuVar2 = uStack_90;
  local_88 = local_b0;
  lVar3 = local_88;
  uStack_80 = lStack_a8;
  lVar4 = uStack_80;
  local_78 = local_a0;
  if (local_c8 == (undefined **)0x6) {
    local_48 = local_a0;
    local_98._0_4_ = (undefined4)local_c0;
    local_98._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
    uStack_90._0_4_ = SUB84(ppuStack_b8,0);
    uStack_90._4_4_ = (undefined4)((ulong)ppuStack_b8 >> 0x20);
    local_88._0_4_ = (undefined4)local_b0;
    local_88._4_4_ = (undefined4)((ulong)local_b0 >> 0x20);
    uStack_80._0_4_ = (undefined4)lStack_a8;
    uStack_80._4_4_ = (undefined4)((ulong)lStack_a8 >> 0x20);
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = (undefined4)uStack_80;
    uStack_4c = uStack_80._4_4_;
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = (undefined4)uStack_90;
    uStack_5c = uStack_90._4_4_;
    local_30 = 
    PTR__ZN6semver7display64__LT_impl_u20_core__fmt__Display_u20_for_u20_semver__Version_GT_3fmt17ha9f34b03bf53131aE_004bfd08
    ;
    local_c8 = &PTR_DAT_004a3ef0;
    local_c0 = 2;
    lStack_a8 = 0;
    ppuStack_b8 = &local_38;
    local_b0 = 1;
    local_98 = lVar1;
    uStack_90 = ppuVar2;
    local_88 = lVar3;
    uStack_80 = lVar4;
    local_38 = &local_68;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_004bfcf8)(&local_c8);
    *param_1 = 7;
    _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17h899d2d10dc06f6c7E(&local_68);
  }
  else {
    param_1[5] = local_a0;
    param_1[3] = local_b0;
    param_1[4] = lStack_a8;
    param_1[1] = local_c0;
    param_1[2] = (long)ppuStack_b8;
    *param_1 = (long)local_c8;
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hdb08fb26ec8f0ceaE(local_cc);
  return;
}