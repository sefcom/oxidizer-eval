long _ZN9uu_csplit11SplitWriter17delete_all_splits17h651b08e5afba42d7E(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_50;
  undefined local_48 [24];
  
  local_50 = 0;
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar3 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                        (uVar5);
                    /* try { // try from 002bd473 to 002bd488 has its CatchHandler @ 002bd4c4 */
      _ZN9uu_csplit10split_name9SplitName3get17h6978abebafad78dbE(local_48,uVar2,uVar5);
      lVar4 = _ZN3std2fs11remove_file17he9a77943a534f5d9E(local_48);
      if (lVar4 != 0) {
                    /* try { // try from 002bd491 to 002bd49a has its CatchHandler @ 002bd4ba */
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h6090d7ef5efdac7eE
                  (&local_50);
        lVar6 = lVar4;
        local_50 = lVar4;
      }
      uVar5 = uVar3;
    } while (uVar3 < uVar1);
  }
  return lVar6;
}