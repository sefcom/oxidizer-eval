char * _ZN5uu_dd9parseargs10get_ctable17h3225cb694e4d92e4E(byte param_1,byte param_2)

{
  char *pcVar1;
  
  if (param_1 == 3) {
    if (param_2 == 2) {
      return (char *)0x0;
    }
    pcVar1 = "";
    if ((param_2 & 1) != 0) {
      pcVar1 = "";
    }
    return pcVar1;
  }
  if (param_2 == 2) {
    return &DAT_001234c4 + *(int *)(&DAT_001234c4 + (ulong)param_1 * 4);
  }
  if (param_1 != 0) {
    if (param_1 == 1) {
      pcVar1 = "";
      if ((param_2 & 1) != 0) {
        pcVar1 = "";
      }
      return pcVar1;
    }
    pcVar1 = "";
    if ((param_2 & 1) != 0) {
      pcVar1 = "";
    }
    return pcVar1;
  }
  pcVar1 = "";
  if ((param_2 & 1) != 0) {
    pcVar1 = "";
  }
  return pcVar1;
}