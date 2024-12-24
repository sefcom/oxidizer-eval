undefined8 * __rustcall
uu_dd::Output::write_blocks(undefined8 *param_1,long param_2,undefined **param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined **local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_50 = *(long *)(*(long *)(param_2 + 0x10) + 0x78);
  if (local_50 == 0) {
    local_60 = &PTR_DAT_00261970;
    local_58 = 1;
    local_50 = 8;
    local_48 = 0;
    uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&local_60,&PTR_DAT_002619f0);
  }
  local_60 = param_3;
  local_58 = param_4;
  lVar2 = _<core::slice::iter::Chunks<T>as_core::iter::traits::iterator::Iterator>::next(&local_60);
  if (lVar2 == 0) {
    lVar4 = 0;
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = 0;
    lVar4 = 0;
    do {
      auVar7 = write_block(param_2,lVar2);
      uVar3 = auVar7._8_8_;
      if (auVar7._0_8_ != 0) {
        param_1[1] = uVar3;
        *param_1 = 1;
        return param_1;
      }
      uVar1 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x78);
      lVar6 = lVar6 + (ulong)(uVar3 < uVar1);
      lVar5 = lVar5 + (ulong)(uVar1 <= uVar3);
      lVar4 = lVar4 + uVar3;
      lVar2 = _<core::slice::iter::Chunks<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_60);
    } while (lVar2 != 0);
  }
  param_1[2] = lVar4;
  param_1[3] = 0;
  param_1[4] = lVar5;
  param_1[5] = lVar6;
  *param_1 = 0;
  return param_1;
}