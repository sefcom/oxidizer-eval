undefined  [16] _ZN4just15argument_parser14ArgumentParser4rest17hce89c867d88cb806E(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined auVar4 [16];
  
  uVar1 = param_1[1];
  uVar2 = param_1[3];
  auVar4._8_8_ = uVar1 - uVar2;
  if (uVar2 <= uVar1) {
    auVar4._0_8_ = uVar2 * 0x10 + *param_1;
    return auVar4;
  }
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00566048)
            (uVar2,uVar1,&PTR_DAT_0052db18);
  pcVar3 = (code *)swi(3);
  auVar4 = (*pcVar3)();
  return auVar4;
}