undefined  [16] _ZN7uu_head4take13TakeAllBuffer16remaining_buffer17he80dcc941e66ef3aE(long param_1)

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
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_001fe778)
            (uVar2,uVar1,&PTR_s_src_uu_head_src_take_rs_001f7b30);
  pcVar3 = (code *)swi(3);
  auVar4 = (*pcVar3)();
  return auVar4;
}