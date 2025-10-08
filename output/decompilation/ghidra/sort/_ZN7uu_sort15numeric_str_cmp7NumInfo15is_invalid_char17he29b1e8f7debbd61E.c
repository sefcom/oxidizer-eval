bool _ZN7uu_sort15numeric_str_cmp7NumInfo15is_invalid_char17he29b1e8f7debbd61E
               (int param_1,char *param_2,int param_3)

{
  char cVar1;
  
  if (param_1 == param_3) {
    cVar1 = *param_2;
    if (cVar1 != '\x01') {
      *param_2 = '\x01';
    }
    return cVar1 == '\x01';
  }
  return param_1 - 0x3aU < 0xfffffff6;
}