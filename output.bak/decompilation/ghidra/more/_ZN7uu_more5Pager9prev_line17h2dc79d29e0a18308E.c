void __rustcall uu_more::Pager::prev_line(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x18) + -1;
  }
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}