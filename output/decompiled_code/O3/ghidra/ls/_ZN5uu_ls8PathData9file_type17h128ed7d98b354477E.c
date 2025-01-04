int * __rustcall uu_ls::PathData::file_type(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)core::cell::once::OnceCell<T>::get_or_try_init(param_1 + 0xf8,param_1,param_2);
  piVar2 = (int *)0x0;
  if (*piVar1 != 0) {
    piVar2 = piVar1 + 1;
  }
  return piVar2;
}