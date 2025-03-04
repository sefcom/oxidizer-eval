void _ZN7uu_more5Pager11page_resize17ha0e74b43be507582E(long param_1,short param_2,short param_3)

{
  short sVar1;
  
  if (param_3 != 1) {
    sVar1 = param_2 + -1;
    if (param_2 == 0) {
      sVar1 = 0;
    }
    *(short *)(param_1 + 0x40) = sVar1;
  }
  return;
}