void _ZN5uu_dd11read_helper12perform_swab17h674fb7c29172040eE(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_40;
  long local_38;
  
  _ZN4core4iter8adapters7step_by15StepBy_LT_I_GT_3new17hccaf6edfe6d8c61dE(&local_48);
  if (local_40 != 0) {
    lVar1 = local_40;
    lVar2 = local_48;
    do {
      _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_4swap17ha9fdd20b56a47561E
                (param_1,param_2,lVar2,lVar2 + -1);
      lVar2 = lVar2 + local_38 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}