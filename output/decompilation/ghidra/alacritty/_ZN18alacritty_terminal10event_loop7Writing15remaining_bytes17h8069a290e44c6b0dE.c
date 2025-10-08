undefined  [16]
_ZN18alacritty_terminal10event_loop7Writing15remaining_bytes17h8069a290e44c6b0dE(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined auVar4 [16];
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  auVar4._8_8_ = uVar1 - uVar2;
  if (uVar2 <= uVar1) {
    auVar4._0_8_ = uVar2 + *(long *)(param_1 + 8);
    return auVar4;
  }
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_009de280)
            (uVar2,uVar1,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977290);
  pcVar3 = (code *)swi(3);
  auVar4 = (*pcVar3)();
  return auVar4;
}