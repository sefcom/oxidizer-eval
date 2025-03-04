void _ZN7uu_sync8platform12do_fdatasync17h96a8ab862809c875E(undefined8 param_1)

{
  undefined *puVar1;
  int __fd;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [32];
  undefined local_40 [16];
  
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he9a1852c79297885E
            (local_60,param_1);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8a7ea6899d56cacdE
            (&local_90,local_60);
  puVar1 = PTR_syscall_002129f0;
  if (CONCAT44(uStack_8c,local_90) != -0x8000000000000000) {
    do {
      local_68 = local_80;
      local_78 = local_90;
      uStack_74 = uStack_8c;
      uStack_70 = uStack_88;
      uStack_6c = uStack_84;
                    /* try { // try from 001aacb4 to 001aaccb has its CatchHandler @ 001aad16 */
      _ZN3std2fs4File4open17hb61d83fd15029ce8E(local_40,&local_78);
      __fd = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6821ae79beea1012E
                       (local_40,&PTR_s_src_uu_sync_src_sync_rs_0020f078);
      (*(code *)puVar1)(0x4b,__fd);
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hbb199f37a0f14444E(__fd);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8a7ea6899d56cacdE
                (&local_90,local_60);
    } while (CONCAT44(uStack_8c,local_90) != -0x8000000000000000);
  }
  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h6657d3c6baf80487E
            (local_60);
  return;
}