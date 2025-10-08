void _ZN6uu_who8platform4unix11current_tty17h7efed81fa6083dd7E(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  lVar1 = (*(code *)PTR_ttyname_00205f88)(0);
  if (lVar1 != 0) {
    lVar2 = (*(code *)PTR_strlen_00205f90)(lVar1);
    (*(code *)
      PTR__ZN5alloc3ffi5c_str40__LT_impl_u20_core__ffi__c_str__CStr_GT_15to_string_lossy17h9afbfb8b28205f24E_00205f98
    )(local_40,lVar1,lVar2 + 1);
                    /* try { // try from 0016762f to 00167640 has its CatchHandler @ 00167683 */
    uVar3 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17he54d301b69f9c6a0E
                      (local_38,local_30);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hdbc64a9c3b715b62E
              (&local_28,uVar3);
    param_1[2] = local_18;
    *(undefined4 *)param_1 = local_28;
    *(undefined4 *)((long)param_1 + 4) = uStack_24;
    *(undefined4 *)(param_1 + 1) = uStack_20;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1c;
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h23cc7d1edb76b1fbE(local_40);
    return;
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}