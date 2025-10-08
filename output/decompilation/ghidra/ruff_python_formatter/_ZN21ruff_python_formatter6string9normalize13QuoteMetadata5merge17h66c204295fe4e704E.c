void _ZN21ruff_python_formatter6string9normalize13QuoteMetadata5merge17h66c204295fe4e704E
               (undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  
  cVar1 = *param_3;
  cVar3 = '\x02';
  if (cVar1 == *param_4) {
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      bVar2 = 1;
      if ((param_3[1] & 1U) == 0) {
        bVar2 = param_4[1] & 1;
      }
    }
    else {
      param_1 = CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20) +
                         (int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20),
                         (int)*(undefined8 *)(param_4 + 4) + (int)*(undefined8 *)(param_3 + 4));
      bVar2 = param_3[1];
    }
    cVar3 = param_3[0xc];
    *param_2 = cVar1;
    param_2[1] = bVar2;
    *(undefined8 *)(param_2 + 4) = param_1;
  }
  param_2[0xc] = cVar3;
  return;
}