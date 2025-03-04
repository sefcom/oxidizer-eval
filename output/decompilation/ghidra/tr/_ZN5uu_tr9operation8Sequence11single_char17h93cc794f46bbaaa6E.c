void _ZN5uu_tr9operation8Sequence11single_char17h93cc794f46bbaaa6E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  undefined8 uVar2;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined *local_28;
  long lStack_20;
  
  uVar2 = _ZN3nom5bytes8complete4take17hb83f4516c7d13b17E(1);
  _ZN3nom5bytes8complete4take28__u7b__u7b_closure_u7d__u7d_17h6d20bacba5a47d43E
            (&local_40,uVar2,param_2,param_3);
  if (local_40 == 0) {
    if (lStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                (0,0,&PTR_s_src_uu_tr_src_operation_rs_0022f420);
    }
    uVar1 = *local_28;
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    *(undefined *)(param_1 + 3) = uVar1;
    *param_1 = 3;
  }
  else {
    param_1[2] = local_28;
    param_1[3] = lStack_20;
    *param_1 = local_38;
    param_1[1] = uStack_30;
  }
  return;
}