void _ZN5uu_wc5Input11as_borrowed17ha5766020b65362ceE(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == -0x7fffffffffffffff) {
    *(undefined *)(param_1 + 1) = *(undefined *)(param_2 + 1);
    *param_1 = 0x8000000000000001;
    return;
  }
  lVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar1;
  *param_1 = 0x8000000000000000;
  return;
}