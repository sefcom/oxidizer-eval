int * _ZN5uu_ls8PathData9file_type17h128ed7d98b354477E(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)_ZN4core4cell4once17OnceCell_LT_T_GT_15get_or_try_init17he9c14013ab1ff432E
                            (param_1 + 0xf8,param_1,param_2);
  piVar2 = (int *)0x0;
  if (*piVar1 != 0) {
    piVar2 = piVar1 + 1;
  }
  return piVar2;
}