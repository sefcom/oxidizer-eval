void _ZN6zoxide2db6stream13StreamOptions3new17ha9455680dd6cde2cE(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  
  param_1[9] = param_2;
  lVar1 = 0;
  if (0x76a6ff < param_2) {
    lVar1 = param_2 - 0x76a700;
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[10] = lVar1;
  param_1[6] = 0x8000000000000000;
  return;
}