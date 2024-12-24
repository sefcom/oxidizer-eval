int * __rustcall uu_ls::PathData::get_metadata(long param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)core::cell::once::OnceCell<T>::get_or_try_init(param_1 + 0x48,param_1,param_2);
  if (*piVar1 == 2) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}