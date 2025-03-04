undefined _ZN7uu_sort14custom_str_cmp9cmp_chars17h48aa6e867f01ccd6E
                    (uint param_1,uint param_2,int param_3)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    bVar4 = param_1 < param_2;
    bVar5 = param_1 == param_2;
  }
  else {
    uVar2 = param_1 & 0x5f;
    if (0x19 < param_1 - 0x61) {
      uVar2 = param_1;
    }
    uVar3 = param_2 & 0x5f;
    if (0x19 < param_2 - 0x61) {
      uVar3 = param_2;
    }
    bVar4 = uVar2 < uVar3;
    bVar5 = uVar2 == uVar3;
  }
  uVar1 = 0xff;
  if (!bVar4) {
    uVar1 = !bVar5;
  }
  return uVar1;
}