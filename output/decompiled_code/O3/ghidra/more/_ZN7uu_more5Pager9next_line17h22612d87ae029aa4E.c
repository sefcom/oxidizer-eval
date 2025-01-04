void __rustcall uu_more::Pager::next_line(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18) + 1;
  lVar2 = -1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  *(long *)(param_1 + 0x18) = lVar2;
  return;
}