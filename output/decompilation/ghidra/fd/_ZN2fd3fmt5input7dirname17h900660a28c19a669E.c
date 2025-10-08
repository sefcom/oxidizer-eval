void _ZN2fd3fmt5input7dirname17h900660a28c19a669E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar1 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00540960)(param_2,param_3);
  if (lVar1 != 0) {
    _ZN2fd3fmt5input7dirname28__u7b__u7b_closure_u7d__u7d_17h7ae02f47012d85deE(&local_30,lVar1);
    param_1[1] = local_28;
    param_1[2] = uStack_20;
    *param_1 = local_30;
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc59efc0c75b13120E
            (param_1,param_2,param_3);
  return;
}