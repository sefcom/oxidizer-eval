long _ZN5uu_ls8PathData9file_type17h413d2014e9fb015bE(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _ZN4core4cell4once17OnceCell_LT_T_GT_15get_or_try_init17h4b0349b49958bbecE
            (param_1 + 0xf8,param_1,param_2);
  lVar1 = 0;
  if (*(char *)(param_1 + 0xf8) != '\0') {
    lVar1 = param_1 + 0xfc;
  }
  return lVar1;
}