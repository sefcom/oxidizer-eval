char _ZN7uu_sort14custom_str_cmp9cmp_chars17h4df5683859bee02fE
               (uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    uVar1 = param_1 & 0x5f;
    if (0x19 < param_1 - 0x61) {
      uVar1 = param_1;
    }
    uVar2 = param_2 & 0x5f;
    if (0x19 < param_2 - 0x61) {
      uVar2 = param_2;
    }
    return (uVar2 < uVar1) - (uVar1 < uVar2);
  }
  return (param_2 < param_1) - (param_1 < param_2);
}