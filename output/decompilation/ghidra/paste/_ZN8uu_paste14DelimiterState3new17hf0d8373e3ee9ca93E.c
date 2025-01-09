void __rustcall uu_paste::DelimiterState::new(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_3;
  if (param_3 != 0) {
    if (param_3 == 1) {
      param_3 = param_2[1];
      if (param_3 == 0) {
        *param_1 = 0;
        return;
      }
      param_2 = (long *)*param_2;
      lVar1 = 1;
      lVar2 = 0x10;
      lVar3 = 8;
    }
    else {
      lVar1 = *param_2;
      lVar2 = param_2[1];
      core::iter::adapters::cycle::Cycle<I>::new(param_1 + 5,param_2,param_2 + param_3 * 2);
      param_1[1] = lVar1;
      param_1[2] = lVar2;
      lVar1 = 2;
      lVar2 = 0x20;
      lVar3 = 0x18;
    }
    *(long **)((long)param_1 + lVar3) = param_2;
    *(long *)((long)param_1 + lVar2) = param_3;
  }
  *param_1 = lVar1;
  return;
}