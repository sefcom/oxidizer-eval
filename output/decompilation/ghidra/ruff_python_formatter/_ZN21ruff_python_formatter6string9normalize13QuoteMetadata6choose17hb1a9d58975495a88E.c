uint _ZN21ruff_python_formatter6string9normalize13QuoteMetadata6choose17hb1a9d58975495a88E
               (char *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  
  if ((*param_1 == '\0') || (*param_1 == '\x01')) {
    if (param_1[1] != '\0') {
      param_2 = (uint)(byte)param_1[0xc];
    }
  }
  else {
    bVar2 = *(uint *)(param_1 + 4) < *(uint *)(param_1 + 8);
    bVar1 = !bVar2 && *(uint *)(param_1 + 4) != *(uint *)(param_1 + 8);
    if (bVar1 != bVar2) {
      if ((char)(bVar1 - bVar2) == '\x01') {
        return 1;
      }
      return 0;
    }
  }
  return param_2;
}