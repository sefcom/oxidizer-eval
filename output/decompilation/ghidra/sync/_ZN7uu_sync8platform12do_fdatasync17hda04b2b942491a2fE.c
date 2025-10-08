void _ZN7uu_sync8platform12do_fdatasync17hda04b2b942491a2fE(undefined8 param_1)

{
  undefined *puVar1;
  int __fd;
  long local_78 [3];
  undefined local_60 [32];
  undefined local_40 [16];
  
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7f031b6be7709277E
            (local_60,param_1);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1e492218392007aeE
            (local_78,local_60);
  puVar1 = PTR_syscall_001e4c28;
  do {
                    /* try { // try from 00155b30 to 00155b45 has its CatchHandler @ 00155b8f */
    _ZN3std2fs4File4open17h65cf7029ede7a4f2E(local_40,local_78);
    __fd = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hff6beaa294ea25b7E
                     (local_40,&PTR_s_src_uu_sync_src_sync_rs_001de598);
    (*(code *)puVar1)(0x4b,__fd);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h67fe92f6732d82e7E(__fd);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1e492218392007aeE
              (local_78,local_60);
  } while (local_78[0] != -0x8000000000000000);
  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17he1c25d7a7b7d72deE
            (local_60);
  return;
}