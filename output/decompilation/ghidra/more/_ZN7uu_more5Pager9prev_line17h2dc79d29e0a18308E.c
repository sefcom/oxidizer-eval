void _ZN7uu_more5Pager9prev_line17h2dc79d29e0a18308E(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x18) + -1;
  }
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}