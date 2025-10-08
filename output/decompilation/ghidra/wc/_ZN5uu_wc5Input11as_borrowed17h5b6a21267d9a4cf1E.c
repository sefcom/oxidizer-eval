void _ZN5uu_wc5Input11as_borrowed17h5b6a21267d9a4cf1E(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 == -0x7fffffffffffffff) {
    param_1[2] = param_2[2];
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    return;
  }
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  *param_1 = -0x8000000000000000;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  return;
}