bool _ZN7uu_sort15numeric_str_cmp7NumInfo15is_invalid_char17hbc2ad2d78102039cE
               (int param_1,char *param_2,int param_3)

{
  if ((param_3 != 0x110000) && (param_3 == param_1)) {
    if (*param_2 != '\0') {
      return true;
    }
    *param_2 = '\x01';
    return false;
  }
  return param_1 - 0x3aU < 0xfffffff6;
}