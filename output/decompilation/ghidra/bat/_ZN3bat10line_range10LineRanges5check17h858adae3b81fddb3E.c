char _ZN3bat10line_range10LineRanges5check17h858adae3b81fddb3E
               (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  ulong uVar2;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = *(long *)(param_1 + 8);
  local_28 = *(long *)(param_1 + 0x10) * 0x20 + local_30;
  local_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hc4f64b89ed9775b4E
                    (&local_30,&local_48,&local_40);
  if (cVar1 == '\0') {
    if ((param_3 & 1) != 0) {
      uVar2 = 0;
      if (*(ulong *)(param_1 + 0x20) <= param_4) {
        uVar2 = param_4 - *(ulong *)(param_1 + 0x20);
      }
      if (uVar2 < param_2) {
        return '\x02';
      }
    }
    cVar1 = '\x02' - (param_2 < *(ulong *)(param_1 + 0x18));
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}