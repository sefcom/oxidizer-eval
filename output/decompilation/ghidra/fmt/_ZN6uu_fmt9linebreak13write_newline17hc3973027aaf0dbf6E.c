long _ZN6uu_fmt9linebreak13write_newline17hc3973027aaf0dbf6E
               (undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_3[2];
  if ((ulong)(*param_3 - lVar1) < 2) {
    lVar1 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17ha7722a1d537a2c8aE
                      (param_3,"\n",1);
    if (lVar1 != 0) {
      return lVar1;
    }
    lVar1 = param_3[2];
  }
  else {
    *(undefined *)(param_3[1] + lVar1) = 10;
    lVar1 = lVar1 + 1;
    param_3[2] = lVar1;
  }
  if (param_2 < (ulong)(*param_3 - lVar1)) {
    (*(code *)PTR_memcpy_0022a4a8)(param_3[1] + lVar1,param_1,param_2);
    param_3[2] = lVar1 + param_2;
    return 0;
  }
  lVar1 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17ha7722a1d537a2c8aE
                    (param_3,param_1,param_2);
  return lVar1;
}