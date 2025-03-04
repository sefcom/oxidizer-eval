char * _ZN5uu_dd9parseargs10get_ctable17h8e7446a764b1d972E(char param_1,byte param_2)

{
  char *pcVar1;
  
  if (param_1 == '\x03') {
    if (param_2 == 2) {
      return (char *)0x0;
    }
    pcVar1 = "";
    if ((param_2 & 1) == 0) {
      pcVar1 = "";
    }
    return pcVar1;
  }
  if (param_2 == 2) {
    return &DAT_00123928 + *(int *)(&DAT_00123928 + (long)param_1 * 4);
  }
  if (param_1 != '\x02') {
    if (param_1 == '\x01') {
      pcVar1 = "";
      if ((param_2 & 1) == 0) {
        pcVar1 = "";
      }
      return pcVar1;
    }
    pcVar1 = "";
    if ((param_2 & 1) == 0) {
      pcVar1 = "";
    }
    return pcVar1;
  }
  pcVar1 = "";
  if ((param_2 & 1) == 0) {
    pcVar1 = "";
  }
  return pcVar1;
}