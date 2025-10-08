void _ZN7uu_more5Pager11page_resize17h297f71cdfbb5531cE
               (long param_1,undefined8 param_2,short param_3,short param_4)

{
  ushort uVar1;
  
  if (param_4 != 0) {
    return;
  }
  uVar1 = param_3 - 1;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(ulong *)(param_1 + 0x58) = (ulong)uVar1;
  return;
}