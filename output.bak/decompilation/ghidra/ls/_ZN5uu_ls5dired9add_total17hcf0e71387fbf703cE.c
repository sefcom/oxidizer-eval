void __rustcall uu_ls::dired::add_total(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) * 0x10 + -8 + *(long *)(param_1 + 8)) + 1;
    }
  }
  *(long *)(param_1 + 0x30) = lVar1 + param_2 + 2;
  return;
}