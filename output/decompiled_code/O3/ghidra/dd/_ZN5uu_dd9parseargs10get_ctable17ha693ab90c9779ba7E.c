char * __rustcall uu_dd::parseargs::get_ctable(char param_1,byte param_2)

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
    return &DAT_00123a20 + *(int *)(&DAT_00123a20 + (long)param_1 * 4);
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