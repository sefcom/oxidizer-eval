undefined8 _ZN7uu_test4path17hed70fa791e261736E(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  int local_170 [44];
  undefined local_c0 [176];
  
  if (param_3 == 8) {
    _ZN3std2fs16symlink_metadata17hb030765a873b8766E();
  }
  else {
    _ZN3std2fs8metadata17ha4b6f518b61475e4E(local_170,param_1,param_2);
  }
  if (local_170[0] != 2) {
    (*(code *)PTR_memcpy_001e60c8)(local_c0,local_170,0xb0);
                    /* WARNING: Could not recover jumptable at 0x001598b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_00117ef8 + *(int *)(&DAT_00117ef8 + (ulong)param_3 * 4)))();
    return uVar1;
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hfff2aadfed0d5cf3E
            (local_170);
  return 0;
}