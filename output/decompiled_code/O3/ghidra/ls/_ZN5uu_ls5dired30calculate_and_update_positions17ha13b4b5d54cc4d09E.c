void __rustcall uu_ls::dired::calculate_and_update_positions(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = (*(long *)(param_1 + 0x10) + -1) * 0x10 + *(long *)(param_1 + 8);
  }
  lVar1 = core::option::Option<T>::map_or(lVar1);
  update_positions(param_1,param_2 + lVar1 + 2,param_3 + 2 + param_2 + lVar1);
  return;
}