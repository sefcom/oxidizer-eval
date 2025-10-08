undefined  [16] _ZN4just6parser6Parser4rest17h006cb6290a6cc038E(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined auVar4 [16];
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x58);
  if (uVar2 <= uVar1) {
    auVar4._8_8_ = *(long *)(param_1 + 0x18) + uVar1 * 0x48;
    auVar4._0_8_ = *(long *)(param_1 + 0x18) + uVar2 * 0x48;
    return auVar4;
  }
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00566048)
            (uVar2,uVar1,&PTR_DAT_005306a8);
  pcVar3 = (code *)swi(3);
  auVar4 = (*pcVar3)();
  return auVar4;
}