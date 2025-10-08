ulong _ZN7uu_tail4args8Settings6verify17hc5274fc1768a90afE(long *param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long local_18;
  long local_10;
  
  local_18 = param_1[4];
  local_10 = param_1[5] * 0x30 + local_18;
  cVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h6490742e89b15d1dE
                    (&local_18);
  bVar1 = *(byte *)((long)param_1 + 0x4c);
  if (cVar2 == '\0') {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else if (bVar1 != 2) {
    return (ulong)(bVar1 & 1);
  }
  lVar3 = *param_1;
  if (lVar3 == 4) {
    lVar3 = param_1[1];
  }
  return CONCAT71((int7)((ulong)lVar3 >> 8),(lVar3 == 3) * '\x02');
}