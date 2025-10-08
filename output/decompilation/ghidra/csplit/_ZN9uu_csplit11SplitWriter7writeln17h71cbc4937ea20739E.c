long _ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E
               (long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    lVar1 = param_1[2];
    if (param_3 < (ulong)(*param_1 - lVar1)) {
      (*(code *)PTR_memcpy_00371038)(param_1[1] + lVar1,param_2,param_3);
      param_1[2] = lVar1 + param_3;
    }
    else {
      lVar1 = (*(code *)
                PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h3751b38b456845cfE_00371290
              )(param_1);
      if (lVar1 != 0) {
        return lVar1;
      }
    }
    param_1[6] = param_1[6] + param_3;
  }
  return 0;
}