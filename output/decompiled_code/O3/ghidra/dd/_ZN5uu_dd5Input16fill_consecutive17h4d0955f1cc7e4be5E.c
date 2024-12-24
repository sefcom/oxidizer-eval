void __rustcall uu_dd::Input::fill_consecutive(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined **local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_50 = *(long *)(*(long *)(param_2 + 8) + 0x70);
  if (local_50 == 0) {
    local_60 = &PTR_DAT_00261970;
    uStack_58 = 1;
    local_50 = 8;
    local_48 = 0;
    uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&local_60,&PTR_DAT_00261980);
  }
  local_60 = *(undefined ***)(param_3 + 8);
  uStack_58 = *(undefined8 *)(param_3 + 0x10);
  lVar1 = _<core::slice::iter::ChunksMut<T>as_core::iter::traits::iterator::Iterator>::next
                    (&local_60);
  if (lVar1 == 0) {
    lVar3 = 0;
    lVar4 = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    lVar4 = 0;
    lVar3 = 0;
    do {
      auVar5 = _<uu_dd::Input_as_std::io::Read>::read(param_2,lVar1);
      lVar1 = auVar5._8_8_;
      if (auVar5._0_8_ != 0) {
        param_1[1] = lVar1;
        *param_1 = 1;
        return;
      }
      if (*(long *)(*(long *)(param_2 + 8) + 0x70) == lVar1) {
        lVar2 = lVar2 + 1;
      }
      else {
        if (lVar1 == 0) break;
        lVar4 = lVar4 + 1;
      }
      lVar3 = lVar3 + lVar1;
      lVar1 = _<core::slice::iter::ChunksMut<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_60);
    } while (lVar1 != 0);
  }
  ::alloc::vec::Vec<T,A>::truncate(param_3,lVar3);
  param_1[1] = lVar2;
  param_1[2] = lVar4;
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  return;
}