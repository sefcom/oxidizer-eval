undefined  [16] __rustcall
uu_unexpand::next_tabstop(ulong *param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  ulong local_20;
  ulong *local_18;
  ulong *local_10;
  
  local_20 = param_3;
  if (param_2 == 1) {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      core::panicking::panic_const::panic_const_rem_by_zero
                (&PTR_s_src_uu_unexpand_src_unexpand_rs_0021ec48);
      pcVar2 = (code *)swi(3);
      auVar5 = (*pcVar2)();
      return auVar5;
    }
    if ((param_3 | uVar1) >> 0x20 == 0) {
      param_3 = (param_3 & 0xffffffff) % (uVar1 & 0xffffffff);
    }
    else {
      param_3 = param_3 % uVar1;
    }
    param_4 = uVar1 - param_3;
  }
  else {
    local_10 = param_1 + param_2;
    local_18 = param_1;
    plVar3 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::find
                               (&local_18,&local_20);
    if (plVar3 == (long *)0x0) {
      uVar4 = 0;
      goto LAB_001b362d;
    }
    param_4 = *plVar3 - param_3;
  }
  uVar4 = 1;
LAB_001b362d:
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = uVar4;
  return auVar5;
}