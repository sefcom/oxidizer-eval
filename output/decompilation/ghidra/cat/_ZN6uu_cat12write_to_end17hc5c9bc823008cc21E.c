long _ZN6uu_cat12write_to_end17hc5c9bc823008cc21E(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  long local_28;
  long local_20;
  
  local_20 = param_1 + param_2;
  local_28 = param_1;
  auVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h0aef01da5877f86aE
                     (&local_28);
  if (auVar2._0_8_ == 0) {
    uVar1 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (param_3,param_1,param_2);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0fc6b3beec18547fE
              (uVar1,&PTR_s_src_uu_cat_src_cat_rs_00218778);
  }
  else {
    uVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2183ab5a6b7a9c40E
                      (auVar2._8_8_,param_1,param_2,&PTR_s_src_uu_cat_src_cat_rs_00218790);
    uVar1 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (param_3,uVar1);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0fc6b3beec18547fE
              (uVar1,&PTR_s_src_uu_cat_src_cat_rs_002187a8);
    param_2 = auVar2._8_8_;
  }
  return param_2;
}