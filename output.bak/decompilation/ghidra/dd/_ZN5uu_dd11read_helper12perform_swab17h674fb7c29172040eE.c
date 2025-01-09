void __rustcall uu_dd::read_helper::perform_swab(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_40;
  long local_38;
  
  core::iter::adapters::step_by::StepBy<I>::new(&local_48);
  if (local_40 != 0) {
    lVar1 = local_40;
    lVar2 = local_48;
    do {
      core::slice::_<impl[T]>::swap(param_1,param_2,lVar2,lVar2 + -1);
      lVar2 = lVar2 + local_38 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}