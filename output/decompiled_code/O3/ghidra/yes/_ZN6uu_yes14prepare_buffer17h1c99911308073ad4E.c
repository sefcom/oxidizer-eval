ulong __rustcall uu_yes::prepare_buffer(long param_1)

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
      core::panicking::panic
                ("assertion failed: !buf.is_empty()",0x21,&PTR_s_src_uu_yes_src_yes_rs_0020a070);
    }
    uVar4 = 0x4000;
    if (uVar1 < 0x4001) {
      uVar3 = 0x4000 / (uVar1 & 0xffffffff);
      uVar4 = 0x4000 % (uVar1 & 0xffffffff);
    }
    while (uVar1 < 0x4000 - uVar4) {
      uVar2 = core::cmp::min_by((0x4000 - uVar4) - uVar1);
      uVar3 = ::alloc::vec::Vec<T,A>::extend_from_within(param_1,uVar2);
      uVar1 = *(ulong *)(param_1 + 0x10);
    }
  }
  return uVar3;
}