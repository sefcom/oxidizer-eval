undefined8 _ZN7uu_test4path17h72a91cd3b6f0d02cE(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  int local_188 [90];
  
  if (param_3 == 8) {
    _ZN3std2fs16symlink_metadata17h8270b7803eb466ecE();
  }
  else {
    _ZN3std2fs8metadata17h59562c409af00ed3E(local_188,param_1,param_2);
  }
  if (local_188[0] != 2) {
                    /* WARNING: Could not recover jumptable at 0x001ad640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_0011c358 + *(int *)(&DAT_0011c358 + (ulong)param_3 * 4)))();
    return uVar1;
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h7bbe7bfe3f1c8d8fE
            (local_188);
  return 0;
}