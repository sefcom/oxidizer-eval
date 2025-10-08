ulong _ZN6uu_yes14prepare_buffer17h5c585cb06c9101a3E(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong in_RAX;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 < 0x2001) {
    if (uVar4 == 0) {
      pcVar6 = "assertion failed: !buf.is_empty()";
      uVar5 = 0x21;
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001de2c0)
                ("assertion failed: !buf.is_empty()",0x21,&PTR_s_src_uu_yes_src_yes_rs_001d7ec0);
      uStack_40 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001de270)();
      uVar3 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001de2c8)(&uStack_40);
      uStack_48 = uVar3;
      uVar2 = (*(code *)
                PTR__ZN6uucore8features7signals18enable_pipe_errors17he7938a115a9dd81bE_001de2d0)();
      puVar1 = 
      PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001de2d8
      ;
      if (uVar2 == 0x86) {
        do {
          uVar4 = (*(code *)puVar1)(&uStack_48,pcVar6,uVar5);
          uVar3 = uStack_48;
        } while (uVar4 == 0);
      }
      else {
        uVar4 = (ulong)uVar2 << 0x20 | 2;
      }
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17hacba85391fa2ffb8E(uVar3);
      return uVar4;
    }
    uVar7 = (ulong)(0x4000 - 0x4000U % (uint)(ushort)uVar4 & 0xffff);
    do {
      uVar3 = _ZN4core3cmp3Ord3min17h5f0d19bf62851fe4E(uVar7 - uVar4);
      in_RAX = _ZN5alloc3vec16Vec_LT_T_C_A_GT_18extend_from_within17h6cd1031674c11119E
                         (param_1,uVar3);
      uVar4 = *(ulong *)(param_1 + 0x10);
    } while (uVar4 < uVar7);
  }
  return in_RAX;
}