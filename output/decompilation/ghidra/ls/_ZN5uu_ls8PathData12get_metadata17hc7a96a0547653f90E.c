int * _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(long param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)_ZN4core4cell4once17OnceCell_LT_T_GT_15get_or_try_init17h8d812ad43436eba7E
                            (param_1 + 0x48,param_1,param_2);
  if (*piVar1 == 2) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}