long * _ZN7forc_tx114__LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Transaction_GT__u20_for_u20_fuel_tx__transaction__Transaction_GT_8try_from17h92e9152201130caaE
                 (long *param_1,int *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  long local_6c8;
  long local_6b8;
  long lStack_6b0;
  long local_6a8;
  long lStack_6a0;
  long local_698;
  long lStack_690;
  long local_688;
  long local_678;
  long local_670;
  long lStack_668;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined local_648 [384];
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  long local_4a8;
  undefined local_4a0 [320];
  long local_360;
  long lStack_358;
  long local_350;
  long lStack_348;
  long local_340;
  long lStack_338;
  long local_330;
  undefined local_320 [320];
  undefined local_1e0 [224];
  undefined local_100 [224];
  
  if (*param_2 == 1) {
    (*(code *)PTR_memcpy_002d8190)(local_100,param_2 + 2,0xe0);
    (*(code *)
      PTR__ZN7forc_tx259__LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Script_GT__u20_for_u20_fuel_tx__transaction__types__chargeable_transaction__ChargeableTransaction_LT_fuel_tx__transaction__types__script__ScriptBody_C_fuel_tx__transaction__types__script__ScriptMetadata_GT__GT_8try_from17h1de0990abe3fd0daE_002d8670
    )(&local_678,local_100);
    local_6c8 = CONCAT44(uStack_64c,local_650);
    if (local_678 != -0x8000000000000000) {
      (*(code *)PTR_memcpy_002d8190)(local_320,local_648,0x140);
      local_6d8 = local_660;
      uStack_6d4 = uStack_65c;
      uStack_6d0 = uStack_658;
      uStack_6cc = uStack_654;
      local_6e8 = local_670;
      uStack_6e0 = lStack_668;
      lVar2 = -0x8000000000000000;
LAB_002297bc:
      *param_1 = lVar2;
      param_1[1] = local_678;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_6e8;
      *(undefined4 *)((long)param_1 + 0x14) = local_6e8._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_6e0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_6e0._4_4_;
      *(undefined4 *)(param_1 + 4) = local_6d8;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_6d4;
      *(undefined4 *)(param_1 + 5) = uStack_6d0;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_6cc;
      param_1[6] = local_6c8;
      (*(code *)PTR_memcpy_002d8190)(param_1 + 7,local_320,0x140);
      param_1[0x2f] = local_6b8;
      param_1[0x30] = lStack_6b0;
      param_1[0x31] = local_6a8;
      param_1[0x32] = lStack_6a0;
      param_1[0x33] = local_698;
      param_1[0x34] = lStack_690;
      param_1[0x35] = local_688;
      return param_1;
    }
    param_1[6] = local_6c8;
    param_1[4] = CONCAT44(uStack_65c,local_660);
    param_1[5] = CONCAT44(uStack_654,uStack_658);
    param_1[2] = local_670;
    param_1[3] = lStack_668;
    param_1[1] = 1;
  }
  else {
    (*(code *)PTR_memcpy_002d8190)(local_1e0,param_2 + 2,0xe0);
    (*(code *)
      PTR__ZN7forc_tx259__LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Create_GT__u20_for_u20_fuel_tx__transaction__types__chargeable_transaction__ChargeableTransaction_LT_fuel_tx__transaction__types__create__CreateBody_C_fuel_tx__transaction__types__create__CreateMetadata_GT__GT_8try_from17ha74a3ddd59378717E_002d8678
    )(&local_678,local_1e0);
    puVar1 = PTR_memcpy_002d8190;
    if (local_678 != -0x8000000000000000) {
      (*(code *)PTR_memcpy_002d8190)(&local_4a8,local_648,0x180);
      local_718 = (undefined4)lStack_668;
      uStack_714 = (undefined4)((ulong)lStack_668 >> 0x20);
      local_4c8 = local_718;
      uStack_4c4 = uStack_714;
      uStack_4c0 = local_660;
      uStack_4bc = uStack_65c;
      local_4b8 = uStack_658;
      uStack_4b4 = uStack_654;
      uStack_4b0 = local_650;
      uStack_4ac = uStack_64c;
      local_6e8 = lStack_668;
      uStack_6e0 = CONCAT44(uStack_65c,local_660);
      local_6d8 = uStack_658;
      uStack_6d4 = uStack_654;
      uStack_6d0 = local_650;
      uStack_6cc = uStack_64c;
      local_6c8 = local_4a8;
      (*(code *)puVar1)(local_320,local_4a0,0x140);
      local_6b8 = local_360;
      lStack_6b0 = lStack_358;
      local_6a8 = local_350;
      lStack_6a0 = lStack_348;
      local_698 = local_340;
      lStack_690 = lStack_338;
      local_688 = local_330;
      lVar2 = local_678;
      local_678 = local_670;
      goto LAB_002297bc;
    }
    param_1[5] = CONCAT44(uStack_654,uStack_658);
    param_1[6] = CONCAT44(uStack_64c,local_650);
    param_1[3] = lStack_668;
    param_1[4] = CONCAT44(uStack_65c,local_660);
    param_1[1] = 0;
    param_1[2] = local_670;
  }
  *param_1 = -0x7ffffffffffffffa;
  return param_1;
}