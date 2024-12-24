char __rustcall
uu_sort::custom_str_cmp::custom_str_cmp
          (long param_1,ulong param_2,long param_3,ulong param_4,char param_5,int param_6,
          char param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char local_72;
  undefined local_71;
  long local_70;
  long local_68;
  char *local_60;
  undefined *local_58;
  long local_50;
  long local_48;
  char *local_40;
  undefined *local_38;
  
  local_71 = (undefined)param_6;
  local_72 = param_5;
  if (((param_6 == 0) && (param_7 == '\0')) && (param_5 == '\0')) {
    uVar4 = param_4;
    if (param_2 < param_4) {
      uVar4 = param_2;
    }
    iVar2 = (*(code *)PTR_memcmp_00306360)(param_1,param_3,uVar4);
    lVar5 = param_2 - param_4;
    if (iVar2 != 0) {
      lVar5 = (long)iVar2;
    }
    cVar1 = -1;
    if (-1 < lVar5) {
      cVar1 = lVar5 != 0;
    }
  }
  else {
    local_68 = param_2 + param_1;
    local_60 = &local_72;
    local_58 = &local_71;
    local_48 = param_4 + param_3;
    local_70 = param_1;
    local_50 = param_3;
    local_40 = local_60;
    local_38 = local_58;
    do {
      iVar2 = core::iter::traits::iterator::Iterator::try_fold(&local_70,&local_60);
      iVar3 = core::iter::traits::iterator::Iterator::try_fold(&local_50,&local_40);
      if (iVar2 == 0x110000) {
        return -(iVar3 != 0x110000);
      }
      if (iVar3 == 0x110000) {
        return '\x01';
      }
      cVar1 = cmp_chars(iVar2,iVar3,param_7);
    } while (cVar1 == '\0');
  }
  return cVar1;
}