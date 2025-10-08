undefined8 _ZN7uu_echo12is_echo_flag17h50b86463f524c5edE(long param_1,byte *param_2)

{
  long lVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  byte bVar7;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (((lVar1 != 0) && (pcVar2 = *(char **)(param_1 + 8), *pcVar2 == '-')) &&
     (cVar4 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                        (pcVar2,lVar1), cVar4 == '\0')) {
    bVar5 = *param_2;
    bVar7 = param_2[1];
    if (lVar1 != 1) {
      lVar6 = 1;
      do {
        cVar4 = pcVar2[lVar6];
        if (cVar4 == 'E') {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
          if (cVar4 != 'e') {
            if (cVar4 != 'n') {
              return 0;
            }
            bVar5 = 0;
            bVar3 = bVar7;
          }
        }
        bVar7 = bVar3;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
    }
    param_2[1] = bVar7 & 1;
    *param_2 = bVar5 & 1;
    return 1;
  }
  return 0;
}