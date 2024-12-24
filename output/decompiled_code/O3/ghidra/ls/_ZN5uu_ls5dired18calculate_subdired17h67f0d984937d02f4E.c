void __rustcall uu_ls::dired::calculate_subdired(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = 2;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) * 0x10 + -8 + *(long *)(param_1 + 8)) + 3;
  }
  lVar1 = lVar1 + (ulong)(*(long *)(param_1 + 0x28) != 0) * 2;
  ::alloc::vec::Vec<T,A>::push(param_1 + 0x18,lVar1,param_2 + lVar1);
  return;
}