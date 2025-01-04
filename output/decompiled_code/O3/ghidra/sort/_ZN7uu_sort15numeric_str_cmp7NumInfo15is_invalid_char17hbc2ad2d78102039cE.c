bool __rustcall
uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(int param_1,char *param_2,int param_3)

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