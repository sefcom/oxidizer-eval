void __rustcall uu_ls::dired::update_positions(long param_1,long param_2,long param_3)

{
  ::alloc::vec::Vec<T,A>::push
            (param_1,param_2 + *(long *)(param_1 + 0x30),param_3 + *(long *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}