char _ZN7uu_sort14custom_str_cmp14custom_str_cmp17hb6ac3eaeb381e23bE
               (long param_1,ulong param_2,long param_3,ulong param_4,byte param_5,byte param_6,
               byte param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte local_72;
  byte local_71;
  long local_70;
  long local_68;
  byte *local_60;
  byte *local_58;
  long local_50;
  long local_48;
  byte *local_40;
  byte *local_38;
  
  local_72 = param_5;
  local_71 = param_6;
  if ((byte)(param_5 | param_6 | param_7) == 1) {
    local_68 = param_2 + param_1;
    local_60 = &local_72;
    local_58 = &local_71;
    local_48 = param_4 + param_3;
    local_70 = param_1;
    local_50 = param_3;
    local_40 = local_60;
    local_38 = local_58;
    do {
      iVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h14f3f1dbf790debaE
                        (&local_70,&local_60);
      iVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h14f3f1dbf790debaE
                        (&local_50,&local_40);
      if (iVar2 == 0x110000) {
        return -(iVar3 != 0x110000);
      }
      if (iVar3 == 0x110000) {
        return '\x01';
      }
      cVar1 = _ZN7uu_sort14custom_str_cmp9cmp_chars17h4df5683859bee02fE(iVar2,iVar3,param_7);
    } while (cVar1 == '\0');
  }
  else {
    uVar4 = param_4;
    if (param_2 < param_4) {
      uVar4 = param_2;
    }
    iVar2 = (*(code *)PTR_memcmp_00297560)(param_1,param_3,uVar4);
    lVar5 = param_2 - param_4;
    if (iVar2 != 0) {
      lVar5 = (long)iVar2;
    }
    cVar1 = (0 < lVar5) - (lVar5 < 0);
  }
  return cVar1;
}