ulong _ZN6uu_yes14prepare_buffer17h0a69ad01ffb7db57E(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar3 = uVar1 * 2;
  if (uVar3 < 0x4001) {
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                ("assertion failed: !buf.is_empty()",0x21,&PTR_s_src_uu_yes_src_yes_rs_00209b18);
    }
    uVar4 = 0x4000;
    if (uVar1 < 0x4001) {
      uVar3 = 0x4000 / (uVar1 & 0xffffffff);
      uVar4 = 0x4000 % (uVar1 & 0xffffffff);
    }
    while (uVar1 < 0x4000 - uVar4) {
      uVar2 = _ZN4core3cmp6min_by17hd689102d52ee7212E((0x4000 - uVar4) - uVar1);
      uVar3 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_18extend_from_within17h41055947fdb33520E(param_1,uVar2)
      ;
      uVar1 = *(ulong *)(param_1 + 0x10);
    }
  }
  return uVar3;
}