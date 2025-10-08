long _ZN9uu_csplit11SplitWriter17delete_all_splits17h4111e5a3ffbeea82E(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_58;
  long local_50;
  undefined local_48 [24];
  
  local_58 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = 0;
    lVar4 = 0;
    do {
      while( true ) {
        _ZN9uu_csplit10split_name9SplitName3get17hecaf47b623a4fc62E(local_48,uVar2,lVar5);
        lVar3 = _ZN3std2fs11remove_file17h4addf1ceb4211f90E(local_48);
        local_50 = lVar3;
        if (lVar3 == 0) break;
                    /* try { // try from 00221c25 to 00221c2c has its CatchHandler @ 00221c53 */
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7233fab9261f68f6E
                  (&local_58);
        lVar5 = lVar5 + 1;
        lVar4 = lVar3;
        local_58 = lVar3;
        if (lVar1 == lVar5) {
          return lVar3;
        }
      }
                    /* try { // try from 00221bf0 to 00221c17 has its CatchHandler @ 00221c5c */
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7233fab9261f68f6E
                (&local_50);
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
  }
  return lVar4;
}